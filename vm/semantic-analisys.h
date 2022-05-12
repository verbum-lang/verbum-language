
/*
** Copyright (c) 2022, the Verbum project authors.  Please see the AUTHORS file
** for details. All rights reserved. Use of this source code is governed by a
** BSD-style license that can be found in the LICENSE file.
**
** In principio erat Verbum et Verbum erat apud Deum et Deus erat Verbum - John 1
**
** Realização da análise semântica.
*/

#ifndef VERBUM_SEMANTICS_ANALISYS
#define VERBUM_SEMANTICS_ANALISYS

// Flags de controle da verificação.
#define VERBUM_SEMANTIC_ANALISYS_VARIABLE 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <fstream>
#include <vector>

#include "ast-struct.h"

using namespace std;

namespace verbum {
    class verbum_semantics_analisys
    {
        public:
            verbum_semantics_analisys (string file_path, vector<char> file_content, vector <verbum_ast_node> ast);

        private:
            // Flags de controle.
            int step_check;
            int block_counter;
            verbum_ast_node parent;
            string file_path;
            vector<char> file_content;

            string get_str_operator (int operation);
            
            void display_error(
                int line, int ch_position, int start_index, int stop_index, 
                string spec_message, string error_message, vector <string> big_message);
            
            void verbum_recursive_ast (vector <verbum_ast_node> ast, int index);
    };
}

#endif


