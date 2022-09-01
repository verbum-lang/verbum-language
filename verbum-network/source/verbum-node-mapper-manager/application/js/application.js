
var interface = window.interface;
var started   = false;

$(document).ready(() => {
    console.log("Verbum Node Mapper Manager started - Jesus <3");

    get_node_list('127.0.0.1', 3333);
});

function get_node_list (hostname, hostport) 
{
    interface.get_node_list(hostname, hostport, (response) => {
        var error = false;

        if (response.indexOf('nodes not found') != -1) {
            console.log('nodes not found.');
            error = true;
        } else if (response == 'error') 
            error = true;
        
        if (error == false) {
            process_node_list(response);

            if (started == false) {
                started = true;
                $('.area-initialization').addClass('hide-el');
                $('.area-results').removeClass('hide-el');
            }
        }

        get_node_list(hostname, hostport);
    });
}

function process_node_list (response) 
{
    var parts = response.split('\n\n');
    var node_items = [];

    console.log(response);

    for (var a=1; a<parts.length; a++) {
        var item  = parts[a].toString().trim();

        if (item.length <= 0)
            continue;

        var lines = item.split("\n");
        var node  = -1;
        var id    = '';
        var port  = -1;
        var date  = '';

        for (var b=0; b<lines.length; b++) {
            var iitem = lines[b].toString().trim();
            if (iitem.length <= 0)
                continue;

            var iparts = iitem.split(': ');
            var name   = iparts[0].toString().trim();
            var value  = iparts[1].toString().trim();
            
            if (name.length > 0 && value.length > 0) {
                if (name == 'node')
                    node = value;
                else if (name == 'id')
                    id = value;
                else if (name == 'port')
                    port = value;
                else if (name == 'last connection date')
                    date = value;
            }
        }

        if (node != -1    && port != -1      &&
            id.length > 0 && date.length > 0  )
        {
            node_items.push({
                node: node,
                id: id,
                port: port,
                last_connection_date: date
            });
        }
    }

    update_node_list_information(node_items);
}

var nodes = [];

function update_node_list_information (node_items) 
{
    var found = false;
    var action = 1;

    for (var a=0; a<node_items.length; a++) {
        var item = node_items[a];

        // Search node.
        found = false;

        for (var b=0; b<nodes.length; b++) {
            if (nodes[b].id == item.id) {
                found = true;
                break;
            }
        }

        if (node_items.length > nodes.length)
            found = false;

        // Re-render.
        if (found == false) {
            action = 0;
            break;
        }
    }

    nodes = node_items;

    if (action == 0)
        render_all_nodes();
    else
        render_information_nodes();
}

function render_information_nodes ()
{
    console.log("update all node informations - render_information_nodes()");

    for (var a=0; a<nodes.length; a++) {
        var node = nodes[a];
        var prefix = 'cls-'+ node.id;

        $('.'+ prefix +'-port').text(node.port);
        $('.'+ prefix +'-last-con-date').text(node.last_connection_date);
    }
}

function render_all_nodes ()
{
    console.log("update all nodes - render_all_nodes()");

    var html = generate_general_options_html() + `
        <table class="table table-dark table-borderless">
            <tbody>
    `;

    for (var a=0; a<nodes.length; a++) {
        var node = nodes[a];
        var prefix = 'cls-'+ node.id;

        html += `
            <tr>
                <th>
                    <table class="table table-dark table-borderless table-results-sec-1">
                        <tbody>
                            <tr>
                                <th>
                                    <div class="item">
                                        <div class="sub-1">Node</div>
                                        <div class="sub-2">`+ node.node +`</div>
                                    </div>
                                </th>
                                
                                <th>
                                    <div class="item">
                                        <div class="sub-1">Identification</div>
                                        <div class="sub-2">`+ node.id +`</div>
                                    </div>
                                </th>
                                
                                <th>
                                    <div class="item">
                                        <div class="sub-1">Interface Port</div>
                                        <div class="sub-2 `+ prefix +`-port ">`+ node.port +`</div>
                                    </div>
                                </th>
                                
                                <th>
                                    <div class="item">
                                        <div class="sub-1">Last connection date</div>
                                        <div class="sub-2 `+ prefix +`-last-con-date ">`+ node.last_connection_date +`</div>
                                    </div>
                                </th>
                                
                                <th>
                                    <div class="item">
                                        <button class='btn btn-danger' >
                                            <i class="feather-size-a" data-feather="x"></i>
                                            Delete node
                                        </button>
                                    </div>
                                </th>

                            </tr>
                        </tbody>
                    </table>

                    <table class="table table-dark table-borderless table-results-sec-2">
                        <tbody>
                            <tr>
                                <th>
                                    `+ generate_connections_area_html(prefix) +`
                                </th>
                            </tr>
                        </tbody>
                    </table>

                    <hr>
                </th>
            </tr>
        `;
    }

    html += `
        </tbody>
        </table>
    `;

    $('.area-results').html(html);
    feather.replace();
}

function generate_general_options_html ()
{
    var html = '';

    html += `
        <button class='btn btn-primary' >
            <i class="feather-size-a" data-feather="plus"></i>
            Create node
        </button>

        <button class='btn btn-primary' >
            <i class="feather-size-a" data-feather="check-circle"></i>
            Check node
        </button>

        <button class='btn btn-primary' >
            <i class="feather-size-a" data-feather="share-2"></i>
            Send data
        </button>

        <br>
        <br>
    `;

    return html;
}

function generate_connections_area_html (prefix)
{
    var html = '';

    html += `
        <div class="connections-title" >
            Connections
        </div>

        <table class="table table-dark table-borderless table-results-sec-3">
            <thead>
                <tr>
                    <th scope="col" class="th-header con-th-1" style="width:50%" >INPUT</th>
                    <th scope="col" style="width:30px" ></th>
                    <th scope="col" class="th-header con-th-2" style="width:50%" >OUTPUT</th>
                </tr>
            </thead>
            <tbody>
                <tr>
                    <th class="con-th-fix-1" >
                        <table class="table table-dark table-borderless table-results-sec-4">
                            <thead>
                                <tr>
                                    <th scope="col" class="th-header" >Source ID</th>
                                    <th scope="col" class="th-header" >NM host</th>
                                    <th scope="col" class="th-header" >NM port</th>
                                    <th scope="col" class="th-header" >NM direct</th>
                                    <th scope="col" class="th-header" >Ping</th>
                                    <th scope="col" class="th-header" >Manager</th>
                                </tr>
                            </thead>    
                            <tbody>
                                <tr>
                                    <th>verbum-node-2409308923</th>
                                    <th>127.0.0.1</th>
                                    <th>3333</th>
                                    <th>YES</th>
                                    <th>
                                        <div class="item-sub-1">
                                            31-07-2022<br>18-21-19
                                        </div>
                                    </th>
                                    <th>
                                        <button class='btn btn-2 btn-danger' >
                                            <i class="feather-size-a" data-feather="x"></i>
                                        </button>
                                    </th>
                                </tr>
                                <tr>
                                    <th>verbum-node-2409308923</th>
                                    <th>127.0.0.1</th>
                                    <th>3333</th>
                                    <th>NO</th>
                                    <th>
                                        <div class="item-sub-1">
                                            31-07-2022<br>18-21-19
                                        </div>
                                    </th>
                                    <th>
                                        <button class='btn btn-2 btn-danger' >
                                            <i class="feather-size-a" data-feather="x"></i>
                                        </button>
                                    </th>
                                </tr>
                            </tbody>
                        </table>
                    </th>

                    <th>
                        &nbsp;
                    </th>
                    
                    <th class="con-th-fix-1" >
                        <table class="table table-dark table-borderless table-results-sec-4">
                            <thead>
                                <tr>
                                    <th scope="col" class="th-header" >Destination ID</th>
                                    <th scope="col" class="th-header" >NM host</th>
                                    <th scope="col" class="th-header" >NM port</th>
                                    <th scope="col" class="th-header" >Ping</th>
                                    <th scope="col" class="th-header" >Manager</th>
                                </tr>
                            </thead>    
                            <tbody>
                                <tr>
                                    <th>verbum-node-2409308923</th>
                                    <th>127.0.0.1</th>
                                    <th>3333</th>
                                    <th>
                                        <div class="item-sub-1">
                                            31-07-2022<br>18-21-19
                                        </div>
                                    </th>
                                    <th>
                                        <button class='btn btn-2 btn-danger' >
                                            <i class="feather-size-a" data-feather="x"></i>
                                        </button>
                                    </th>
                                </tr>
                                <tr>
                                    <th>verbum-node-2409308923</th>
                                    <th>127.0.0.1</th>
                                    <th>3333</th>
                                    <th>
                                        <div class="item-sub-1">
                                            31-07-2022<br>18-21-19
                                        </div>
                                    </th>
                                    <th>
                                        <button class='btn btn-2 btn-danger' >
                                            <i class="feather-size-a" data-feather="x"></i>
                                        </button>
                                    </th>
                                </tr>
                            </tbody>
                        </table>
                    </th>
                </tr>
                
            </tbody>
        </table>
    `;

    return html;
}


