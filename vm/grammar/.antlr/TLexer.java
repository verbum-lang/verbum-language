// Generated from /home/user/projects/sdk/vm/grammar/TLexer.g4 by ANTLR 4.8
import org.antlr.v4.runtime.Lexer;
import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.Token;
import org.antlr.v4.runtime.TokenStream;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.misc.*;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class TLexer extends Lexer {
	static { RuntimeMetaData.checkVersion("4.8", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		Use=1, Var=2, If=3, Elif=4, Else=5, For=6, Ret=7, Function=8, Pub=9, Pro=10, 
		Priv=11, Static=12, Final=13, Interface=14, Abstract=15, Extends=16, Class=17, 
		Implements=18, New=19, Break=20, Next=21, Async=22, Await=23, Try=24, 
		Catch=25, ArrowRight=26, ARightLB=27, End=28, Attr=29, Point=30, TwoPoint=31, 
		TwoTwoPoint=32, Separator=33, OpenArIndex=34, CloseArIndex=35, OpenBlock=36, 
		CloseBlock=37, OpenOp=38, CloseOp=39, ArithmeticOperator=40, AssignmentOperator=41, 
		Not=42, IncDecOperators=43, Identifier=44, IDPrefix=45, TypeSpec=46, String=47, 
		Integer=48, Float=49, Whitespace=50, Newline=51, Words=52, BlockComment=53, 
		LineComment=54;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	private static String[] makeRuleNames() {
		return new String[] {
			"Use", "Var", "If", "Elif", "Else", "For", "Ret", "Function", "Pub", 
			"Pro", "Priv", "Static", "Final", "Interface", "Abstract", "Extends", 
			"Class", "Implements", "New", "Break", "Next", "Async", "Await", "Try", 
			"Catch", "ArrowRight", "ARightLB", "End", "Attr", "Point", "TwoPoint", 
			"TwoTwoPoint", "Separator", "OpenArIndex", "CloseArIndex", "OpenBlock", 
			"CloseBlock", "OpenOp", "CloseOp", "ArithmeticOperator", "AssignmentOperator", 
			"Not", "IncDecOperators", "Identifier", "IDPrefix", "TypeSpec", "String", 
			"Integer", "Float", "Whitespace", "Newline", "Words", "BlockComment", 
			"LineComment", "DecimalExponent", "DecimalDigits", "FloatLiteral", "IntegerLiteral", 
			"FloatTypeSuffix", "ImaginarySuffix", "IntSuffix", "IntegerFrag", "Decimal", 
			"Binary", "Octal", "Hexadecimal", "DecimalDigit", "OctalDigit", "HexDigit", 
			"FloatFrag", "NUMBER", "DIGITS", "OCTAL_DIGITS", "HEX_DIGITS"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'use'", "'var'", "'if'", "'elif'", "'else'", "'for'", "'ret'", 
			"'fn'", "'pub'", "'pro'", "'priv'", "'static'", "'final'", "'interface'", 
			"'abstract'", "'extends'", "'class'", "'implements'", "'new'", "'break'", 
			"'next'", "'async'", "'await'", "'try'", "'catch'", "'->'", "'=>'", "';'", 
			"'='", "'.'", "':'", "'::'", "','", "'['", "']'", "'{'", "'}'", "'('", 
			"')'", null, null, "'!'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, "Use", "Var", "If", "Elif", "Else", "For", "Ret", "Function", "Pub", 
			"Pro", "Priv", "Static", "Final", "Interface", "Abstract", "Extends", 
			"Class", "Implements", "New", "Break", "Next", "Async", "Await", "Try", 
			"Catch", "ArrowRight", "ARightLB", "End", "Attr", "Point", "TwoPoint", 
			"TwoTwoPoint", "Separator", "OpenArIndex", "CloseArIndex", "OpenBlock", 
			"CloseBlock", "OpenOp", "CloseOp", "ArithmeticOperator", "AssignmentOperator", 
			"Not", "IncDecOperators", "Identifier", "IDPrefix", "TypeSpec", "String", 
			"Integer", "Float", "Whitespace", "Newline", "Words", "BlockComment", 
			"LineComment"
		};
	}
	private static final String[] _SYMBOLIC_NAMES = makeSymbolicNames();
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}


	public TLexer(CharStream input) {
		super(input);
		_interp = new LexerATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@Override
	public String getGrammarFileName() { return "TLexer.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public String[] getChannelNames() { return channelNames; }

	@Override
	public String[] getModeNames() { return modeNames; }

	@Override
	public ATN getATN() { return _ATN; }

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\28\u0259\b\1\4\2\t"+
		"\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t \4!"+
		"\t!\4\"\t\"\4#\t#\4$\t$\4%\t%\4&\t&\4\'\t\'\4(\t(\4)\t)\4*\t*\4+\t+\4"+
		",\t,\4-\t-\4.\t.\4/\t/\4\60\t\60\4\61\t\61\4\62\t\62\4\63\t\63\4\64\t"+
		"\64\4\65\t\65\4\66\t\66\4\67\t\67\48\t8\49\t9\4:\t:\4;\t;\4<\t<\4=\t="+
		"\4>\t>\4?\t?\4@\t@\4A\tA\4B\tB\4C\tC\4D\tD\4E\tE\4F\tF\4G\tG\4H\tH\4I"+
		"\tI\4J\tJ\4K\tK\3\2\3\2\3\2\3\2\3\3\3\3\3\3\3\3\3\4\3\4\3\4\3\5\3\5\3"+
		"\5\3\5\3\5\3\6\3\6\3\6\3\6\3\6\3\7\3\7\3\7\3\7\3\b\3\b\3\b\3\b\3\t\3\t"+
		"\3\t\3\n\3\n\3\n\3\n\3\13\3\13\3\13\3\13\3\f\3\f\3\f\3\f\3\f\3\r\3\r\3"+
		"\r\3\r\3\r\3\r\3\r\3\16\3\16\3\16\3\16\3\16\3\16\3\17\3\17\3\17\3\17\3"+
		"\17\3\17\3\17\3\17\3\17\3\17\3\20\3\20\3\20\3\20\3\20\3\20\3\20\3\20\3"+
		"\20\3\21\3\21\3\21\3\21\3\21\3\21\3\21\3\21\3\22\3\22\3\22\3\22\3\22\3"+
		"\22\3\23\3\23\3\23\3\23\3\23\3\23\3\23\3\23\3\23\3\23\3\23\3\24\3\24\3"+
		"\24\3\24\3\25\3\25\3\25\3\25\3\25\3\25\3\26\3\26\3\26\3\26\3\26\3\27\3"+
		"\27\3\27\3\27\3\27\3\27\3\30\3\30\3\30\3\30\3\30\3\30\3\31\3\31\3\31\3"+
		"\31\3\32\3\32\3\32\3\32\3\32\3\32\3\33\3\33\3\33\3\34\3\34\3\34\3\35\3"+
		"\35\3\36\3\36\3\37\3\37\3 \3 \3!\3!\3!\3\"\3\"\3#\3#\3$\3$\3%\3%\3&\3"+
		"&\3\'\3\'\3(\3(\3)\3)\3*\3*\3*\3*\3*\3*\3*\3*\3*\3*\3*\3*\3*\3*\3*\3*"+
		"\3*\3*\3*\3*\3*\3*\3*\5*\u015b\n*\3+\3+\3,\3,\3,\3,\5,\u0163\n,\3-\3-"+
		"\3-\3-\6-\u0169\n-\r-\16-\u016a\3-\7-\u016e\n-\f-\16-\u0171\13-\5-\u0173"+
		"\n-\3.\3.\5.\u0177\n.\3/\3/\3/\3\60\3\60\3\60\3\60\7\60\u0180\n\60\f\60"+
		"\16\60\u0183\13\60\3\60\3\60\3\60\3\60\3\60\7\60\u018a\n\60\f\60\16\60"+
		"\u018d\13\60\3\60\5\60\u0190\n\60\3\61\6\61\u0193\n\61\r\61\16\61\u0194"+
		"\3\61\3\61\6\61\u0199\n\61\r\61\16\61\u019a\5\61\u019d\n\61\3\62\3\62"+
		"\3\62\5\62\u01a2\n\62\3\63\6\63\u01a5\n\63\r\63\16\63\u01a6\3\63\3\63"+
		"\3\64\3\64\5\64\u01ad\n\64\3\64\5\64\u01b0\n\64\3\64\3\64\3\65\6\65\u01b5"+
		"\n\65\r\65\16\65\u01b6\3\66\3\66\3\66\3\66\7\66\u01bd\n\66\f\66\16\66"+
		"\u01c0\13\66\3\66\3\66\3\66\3\66\3\66\3\67\3\67\3\67\3\67\7\67\u01cb\n"+
		"\67\f\67\16\67\u01ce\13\67\3\67\3\67\38\38\38\38\38\38\38\38\38\38\38"+
		"\58\u01dd\n8\39\69\u01e0\n9\r9\169\u01e1\3:\3:\5:\u01e6\n:\3;\3;\5;\u01ea"+
		"\n;\3<\3<\3=\3=\3>\3>\3>\3>\3>\3>\3>\3>\3>\5>\u01f9\n>\3?\3?\3?\3?\5?"+
		"\u01ff\n?\3@\3@\3@\3@\7@\u0205\n@\f@\16@\u0208\13@\5@\u020a\n@\3A\3A\3"+
		"A\3A\5A\u0210\nA\3A\6A\u0213\nA\rA\16A\u0214\3B\3B\3B\6B\u021a\nB\rB\16"+
		"B\u021b\3C\3C\3C\3C\5C\u0222\nC\3C\3C\6C\u0226\nC\rC\16C\u0227\3D\3D\3"+
		"E\3E\3F\3F\3G\3G\3G\3G\3G\5G\u0235\nG\5G\u0237\nG\3G\3G\3G\5G\u023c\n"+
		"G\5G\u023e\nG\3H\3H\3H\5H\u0243\nH\3I\3I\7I\u0247\nI\fI\16I\u024a\13I"+
		"\3J\3J\6J\u024e\nJ\rJ\16J\u024f\3K\3K\3K\3K\6K\u0256\nK\rK\16K\u0257\3"+
		"\u01be\2L\3\3\5\4\7\5\t\6\13\7\r\b\17\t\21\n\23\13\25\f\27\r\31\16\33"+
		"\17\35\20\37\21!\22#\23%\24\'\25)\26+\27-\30/\31\61\32\63\33\65\34\67"+
		"\359\36;\37= ?!A\"C#E$G%I&K\'M(O)Q*S+U,W-Y.[/]\60_\61a\62c\63e\64g\65"+
		"i\66k\67m8o\2q\2s\2u\2w\2y\2{\2}\2\177\2\u0081\2\u0083\2\u0085\2\u0087"+
		"\2\u0089\2\u008b\2\u008d\2\u008f\2\u0091\2\u0093\2\u0095\2\3\2\22\6\2"+
		"\'\',-//\61\61\4\2>>@@\3\2\62;\3\2aa\3\2<<\3\2$$\3\2))\3\2//\4\2\13\13"+
		"\"\"\4\2\f\f\17\17\4\2GGgg\4\2\62;aa\5\2HHNNhh\5\2NNWWww\4\2\62\63aa\5"+
		"\2\62;CHch\3\5\2C\2\\\2c\2|\2\u0082\2\1\22\u0286\2\3\3\2\2\2\2\5\3\2\2"+
		"\2\2\7\3\2\2\2\2\t\3\2\2\2\2\13\3\2\2\2\2\r\3\2\2\2\2\17\3\2\2\2\2\21"+
		"\3\2\2\2\2\23\3\2\2\2\2\25\3\2\2\2\2\27\3\2\2\2\2\31\3\2\2\2\2\33\3\2"+
		"\2\2\2\35\3\2\2\2\2\37\3\2\2\2\2!\3\2\2\2\2#\3\2\2\2\2%\3\2\2\2\2\'\3"+
		"\2\2\2\2)\3\2\2\2\2+\3\2\2\2\2-\3\2\2\2\2/\3\2\2\2\2\61\3\2\2\2\2\63\3"+
		"\2\2\2\2\65\3\2\2\2\2\67\3\2\2\2\29\3\2\2\2\2;\3\2\2\2\2=\3\2\2\2\2?\3"+
		"\2\2\2\2A\3\2\2\2\2C\3\2\2\2\2E\3\2\2\2\2G\3\2\2\2\2I\3\2\2\2\2K\3\2\2"+
		"\2\2M\3\2\2\2\2O\3\2\2\2\2Q\3\2\2\2\2S\3\2\2\2\2U\3\2\2\2\2W\3\2\2\2\2"+
		"Y\3\2\2\2\2[\3\2\2\2\2]\3\2\2\2\2_\3\2\2\2\2a\3\2\2\2\2c\3\2\2\2\2e\3"+
		"\2\2\2\2g\3\2\2\2\2i\3\2\2\2\2k\3\2\2\2\2m\3\2\2\2\3\u0097\3\2\2\2\5\u009b"+
		"\3\2\2\2\7\u009f\3\2\2\2\t\u00a2\3\2\2\2\13\u00a7\3\2\2\2\r\u00ac\3\2"+
		"\2\2\17\u00b0\3\2\2\2\21\u00b4\3\2\2\2\23\u00b7\3\2\2\2\25\u00bb\3\2\2"+
		"\2\27\u00bf\3\2\2\2\31\u00c4\3\2\2\2\33\u00cb\3\2\2\2\35\u00d1\3\2\2\2"+
		"\37\u00db\3\2\2\2!\u00e4\3\2\2\2#\u00ec\3\2\2\2%\u00f2\3\2\2\2\'\u00fd"+
		"\3\2\2\2)\u0101\3\2\2\2+\u0107\3\2\2\2-\u010c\3\2\2\2/\u0112\3\2\2\2\61"+
		"\u0118\3\2\2\2\63\u011c\3\2\2\2\65\u0122\3\2\2\2\67\u0125\3\2\2\29\u0128"+
		"\3\2\2\2;\u012a\3\2\2\2=\u012c\3\2\2\2?\u012e\3\2\2\2A\u0130\3\2\2\2C"+
		"\u0133\3\2\2\2E\u0135\3\2\2\2G\u0137\3\2\2\2I\u0139\3\2\2\2K\u013b\3\2"+
		"\2\2M\u013d\3\2\2\2O\u013f\3\2\2\2Q\u0141\3\2\2\2S\u015a\3\2\2\2U\u015c"+
		"\3\2\2\2W\u0162\3\2\2\2Y\u0172\3\2\2\2[\u0176\3\2\2\2]\u0178\3\2\2\2_"+
		"\u018f\3\2\2\2a\u019c\3\2\2\2c\u01a1\3\2\2\2e\u01a4\3\2\2\2g\u01af\3\2"+
		"\2\2i\u01b4\3\2\2\2k\u01b8\3\2\2\2m\u01c6\3\2\2\2o\u01dc\3\2\2\2q\u01df"+
		"\3\2\2\2s\u01e3\3\2\2\2u\u01e7\3\2\2\2w\u01eb\3\2\2\2y\u01ed\3\2\2\2{"+
		"\u01f8\3\2\2\2}\u01fe\3\2\2\2\177\u0209\3\2\2\2\u0081\u020f\3\2\2\2\u0083"+
		"\u0216\3\2\2\2\u0085\u0221\3\2\2\2\u0087\u0229\3\2\2\2\u0089\u022b\3\2"+
		"\2\2\u008b\u022d\3\2\2\2\u008d\u023d\3\2\2\2\u008f\u0242\3\2\2\2\u0091"+
		"\u0244\3\2\2\2\u0093\u024b\3\2\2\2\u0095\u0251\3\2\2\2\u0097\u0098\7w"+
		"\2\2\u0098\u0099\7u\2\2\u0099\u009a\7g\2\2\u009a\4\3\2\2\2\u009b\u009c"+
		"\7x\2\2\u009c\u009d\7c\2\2\u009d\u009e\7t\2\2\u009e\6\3\2\2\2\u009f\u00a0"+
		"\7k\2\2\u00a0\u00a1\7h\2\2\u00a1\b\3\2\2\2\u00a2\u00a3\7g\2\2\u00a3\u00a4"+
		"\7n\2\2\u00a4\u00a5\7k\2\2\u00a5\u00a6\7h\2\2\u00a6\n\3\2\2\2\u00a7\u00a8"+
		"\7g\2\2\u00a8\u00a9\7n\2\2\u00a9\u00aa\7u\2\2\u00aa\u00ab\7g\2\2\u00ab"+
		"\f\3\2\2\2\u00ac\u00ad\7h\2\2\u00ad\u00ae\7q\2\2\u00ae\u00af\7t\2\2\u00af"+
		"\16\3\2\2\2\u00b0\u00b1\7t\2\2\u00b1\u00b2\7g\2\2\u00b2\u00b3\7v\2\2\u00b3"+
		"\20\3\2\2\2\u00b4\u00b5\7h\2\2\u00b5\u00b6\7p\2\2\u00b6\22\3\2\2\2\u00b7"+
		"\u00b8\7r\2\2\u00b8\u00b9\7w\2\2\u00b9\u00ba\7d\2\2\u00ba\24\3\2\2\2\u00bb"+
		"\u00bc\7r\2\2\u00bc\u00bd\7t\2\2\u00bd\u00be\7q\2\2\u00be\26\3\2\2\2\u00bf"+
		"\u00c0\7r\2\2\u00c0\u00c1\7t\2\2\u00c1\u00c2\7k\2\2\u00c2\u00c3\7x\2\2"+
		"\u00c3\30\3\2\2\2\u00c4\u00c5\7u\2\2\u00c5\u00c6\7v\2\2\u00c6\u00c7\7"+
		"c\2\2\u00c7\u00c8\7v\2\2\u00c8\u00c9\7k\2\2\u00c9\u00ca\7e\2\2\u00ca\32"+
		"\3\2\2\2\u00cb\u00cc\7h\2\2\u00cc\u00cd\7k\2\2\u00cd\u00ce\7p\2\2\u00ce"+
		"\u00cf\7c\2\2\u00cf\u00d0\7n\2\2\u00d0\34\3\2\2\2\u00d1\u00d2\7k\2\2\u00d2"+
		"\u00d3\7p\2\2\u00d3\u00d4\7v\2\2\u00d4\u00d5\7g\2\2\u00d5\u00d6\7t\2\2"+
		"\u00d6\u00d7\7h\2\2\u00d7\u00d8\7c\2\2\u00d8\u00d9\7e\2\2\u00d9\u00da"+
		"\7g\2\2\u00da\36\3\2\2\2\u00db\u00dc\7c\2\2\u00dc\u00dd\7d\2\2\u00dd\u00de"+
		"\7u\2\2\u00de\u00df\7v\2\2\u00df\u00e0\7t\2\2\u00e0\u00e1\7c\2\2\u00e1"+
		"\u00e2\7e\2\2\u00e2\u00e3\7v\2\2\u00e3 \3\2\2\2\u00e4\u00e5\7g\2\2\u00e5"+
		"\u00e6\7z\2\2\u00e6\u00e7\7v\2\2\u00e7\u00e8\7g\2\2\u00e8\u00e9\7p\2\2"+
		"\u00e9\u00ea\7f\2\2\u00ea\u00eb\7u\2\2\u00eb\"\3\2\2\2\u00ec\u00ed\7e"+
		"\2\2\u00ed\u00ee\7n\2\2\u00ee\u00ef\7c\2\2\u00ef\u00f0\7u\2\2\u00f0\u00f1"+
		"\7u\2\2\u00f1$\3\2\2\2\u00f2\u00f3\7k\2\2\u00f3\u00f4\7o\2\2\u00f4\u00f5"+
		"\7r\2\2\u00f5\u00f6\7n\2\2\u00f6\u00f7\7g\2\2\u00f7\u00f8\7o\2\2\u00f8"+
		"\u00f9\7g\2\2\u00f9\u00fa\7p\2\2\u00fa\u00fb\7v\2\2\u00fb\u00fc\7u\2\2"+
		"\u00fc&\3\2\2\2\u00fd\u00fe\7p\2\2\u00fe\u00ff\7g\2\2\u00ff\u0100\7y\2"+
		"\2\u0100(\3\2\2\2\u0101\u0102\7d\2\2\u0102\u0103\7t\2\2\u0103\u0104\7"+
		"g\2\2\u0104\u0105\7c\2\2\u0105\u0106\7m\2\2\u0106*\3\2\2\2\u0107\u0108"+
		"\7p\2\2\u0108\u0109\7g\2\2\u0109\u010a\7z\2\2\u010a\u010b\7v\2\2\u010b"+
		",\3\2\2\2\u010c\u010d\7c\2\2\u010d\u010e\7u\2\2\u010e\u010f\7{\2\2\u010f"+
		"\u0110\7p\2\2\u0110\u0111\7e\2\2\u0111.\3\2\2\2\u0112\u0113\7c\2\2\u0113"+
		"\u0114\7y\2\2\u0114\u0115\7c\2\2\u0115\u0116\7k\2\2\u0116\u0117\7v\2\2"+
		"\u0117\60\3\2\2\2\u0118\u0119\7v\2\2\u0119\u011a\7t\2\2\u011a\u011b\7"+
		"{\2\2\u011b\62\3\2\2\2\u011c\u011d\7e\2\2\u011d\u011e\7c\2\2\u011e\u011f"+
		"\7v\2\2\u011f\u0120\7e\2\2\u0120\u0121\7j\2\2\u0121\64\3\2\2\2\u0122\u0123"+
		"\7/\2\2\u0123\u0124\7@\2\2\u0124\66\3\2\2\2\u0125\u0126\7?\2\2\u0126\u0127"+
		"\7@\2\2\u01278\3\2\2\2\u0128\u0129\7=\2\2\u0129:\3\2\2\2\u012a\u012b\7"+
		"?\2\2\u012b<\3\2\2\2\u012c\u012d\7\60\2\2\u012d>\3\2\2\2\u012e\u012f\7"+
		"<\2\2\u012f@\3\2\2\2\u0130\u0131\7<\2\2\u0131\u0132\7<\2\2\u0132B\3\2"+
		"\2\2\u0133\u0134\7.\2\2\u0134D\3\2\2\2\u0135\u0136\7]\2\2\u0136F\3\2\2"+
		"\2\u0137\u0138\7_\2\2\u0138H\3\2\2\2\u0139\u013a\7}\2\2\u013aJ\3\2\2\2"+
		"\u013b\u013c\7\177\2\2\u013cL\3\2\2\2\u013d\u013e\7*\2\2\u013eN\3\2\2"+
		"\2\u013f\u0140\7+\2\2\u0140P\3\2\2\2\u0141\u0142\t\2\2\2\u0142R\3\2\2"+
		"\2\u0143\u0144\7-\2\2\u0144\u015b\7?\2\2\u0145\u0146\7/\2\2\u0146\u015b"+
		"\7?\2\2\u0147\u0148\7,\2\2\u0148\u015b\7?\2\2\u0149\u014a\7\61\2\2\u014a"+
		"\u015b\7?\2\2\u014b\u014c\7\'\2\2\u014c\u015b\7?\2\2\u014d\u015b\t\3\2"+
		"\2\u014e\u014f\7@\2\2\u014f\u015b\7?\2\2\u0150\u0151\7>\2\2\u0151\u015b"+
		"\7?\2\2\u0152\u0153\7(\2\2\u0153\u015b\7(\2\2\u0154\u0155\7~\2\2\u0155"+
		"\u015b\7~\2\2\u0156\u0157\7?\2\2\u0157\u015b\7?\2\2\u0158\u0159\7#\2\2"+
		"\u0159\u015b\7?\2\2\u015a\u0143\3\2\2\2\u015a\u0145\3\2\2\2\u015a\u0147"+
		"\3\2\2\2\u015a\u0149\3\2\2\2\u015a\u014b\3\2\2\2\u015a\u014d\3\2\2\2\u015a"+
		"\u014e\3\2\2\2\u015a\u0150\3\2\2\2\u015a\u0152\3\2\2\2\u015a\u0154\3\2"+
		"\2\2\u015a\u0156\3\2\2\2\u015a\u0158\3\2\2\2\u015bT\3\2\2\2\u015c\u015d"+
		"\7#\2\2\u015dV\3\2\2\2\u015e\u015f\7-\2\2\u015f\u0163\7-\2\2\u0160\u0161"+
		"\7/\2\2\u0161\u0163\7/\2\2\u0162\u015e\3\2\2\2\u0162\u0160\3\2\2\2\u0163"+
		"X\3\2\2\2\u0164\u0173\5[.\2\u0165\u016f\5[.\2\u0166\u016e\5i\65\2\u0167"+
		"\u0169\t\4\2\2\u0168\u0167\3\2\2\2\u0169\u016a\3\2\2\2\u016a\u0168\3\2"+
		"\2\2\u016a\u016b\3\2\2\2\u016b\u016e\3\2\2\2\u016c\u016e\t\5\2\2\u016d"+
		"\u0166\3\2\2\2\u016d\u0168\3\2\2\2\u016d\u016c\3\2\2\2\u016e\u0171\3\2"+
		"\2\2\u016f\u016d\3\2\2\2\u016f\u0170\3\2\2\2\u0170\u0173\3\2\2\2\u0171"+
		"\u016f\3\2\2\2\u0172\u0164\3\2\2\2\u0172\u0165\3\2\2\2\u0173Z\3\2\2\2"+
		"\u0174\u0177\t\5\2\2\u0175\u0177\5i\65\2\u0176\u0174\3\2\2\2\u0176\u0175"+
		"\3\2\2\2\u0177\\\3\2\2\2\u0178\u0179\t\6\2\2\u0179\u017a\5Y-\2\u017a^"+
		"\3\2\2\2\u017b\u0181\7$\2\2\u017c\u0180\n\7\2\2\u017d\u017e\7^\2\2\u017e"+
		"\u0180\7$\2\2\u017f\u017c\3\2\2\2\u017f\u017d\3\2\2\2\u0180\u0183\3\2"+
		"\2\2\u0181\u017f\3\2\2\2\u0181\u0182\3\2\2\2\u0182\u0184\3\2\2\2\u0183"+
		"\u0181\3\2\2\2\u0184\u0190\7$\2\2\u0185\u018b\7)\2\2\u0186\u018a\n\b\2"+
		"\2\u0187\u0188\7^\2\2\u0188\u018a\7)\2\2\u0189\u0186\3\2\2\2\u0189\u0187"+
		"\3\2\2\2\u018a\u018d\3\2\2\2\u018b\u0189\3\2\2\2\u018b\u018c\3\2\2\2\u018c"+
		"\u018e\3\2\2\2\u018d\u018b\3\2\2\2\u018e\u0190\7)\2\2\u018f\u017b\3\2"+
		"\2\2\u018f\u0185\3\2\2\2\u0190`\3\2\2\2\u0191\u0193\t\4\2\2\u0192\u0191"+
		"\3\2\2\2\u0193\u0194\3\2\2\2\u0194\u0192\3\2\2\2\u0194\u0195\3\2\2\2\u0195"+
		"\u019d\3\2\2\2\u0196\u0198\t\t\2\2\u0197\u0199\t\4\2\2\u0198\u0197\3\2"+
		"\2\2\u0199\u019a\3\2\2\2\u019a\u0198\3\2\2\2\u019a\u019b\3\2\2\2\u019b"+
		"\u019d\3\2\2\2\u019c\u0192\3\2\2\2\u019c\u0196\3\2\2\2\u019db\3\2\2\2"+
		"\u019e\u01a2\5s:\2\u019f\u01a0\t\t\2\2\u01a0\u01a2\5s:\2\u01a1\u019e\3"+
		"\2\2\2\u01a1\u019f\3\2\2\2\u01a2d\3\2\2\2\u01a3\u01a5\t\n\2\2\u01a4\u01a3"+
		"\3\2\2\2\u01a5\u01a6\3\2\2\2\u01a6\u01a4\3\2\2\2\u01a6\u01a7\3\2\2\2\u01a7"+
		"\u01a8\3\2\2\2\u01a8\u01a9\b\63\2\2\u01a9f\3\2\2\2\u01aa\u01ac\7\17\2"+
		"\2\u01ab\u01ad\7\f\2\2\u01ac\u01ab\3\2\2\2\u01ac\u01ad\3\2\2\2\u01ad\u01b0"+
		"\3\2\2\2\u01ae\u01b0\7\f\2\2\u01af\u01aa\3\2\2\2\u01af\u01ae\3\2\2\2\u01b0"+
		"\u01b1\3\2\2\2\u01b1\u01b2\b\64\2\2\u01b2h\3\2\2\2\u01b3\u01b5\t\22\2"+
		"\2\u01b4\u01b3\3\2\2\2\u01b5\u01b6\3\2\2\2\u01b6\u01b4\3\2\2\2\u01b6\u01b7"+
		"\3\2\2\2\u01b7j\3\2\2\2\u01b8\u01b9\7\61\2\2\u01b9\u01ba\7,\2\2\u01ba"+
		"\u01be\3\2\2\2\u01bb\u01bd\13\2\2\2\u01bc\u01bb\3\2\2\2\u01bd\u01c0\3"+
		"\2\2\2\u01be\u01bf\3\2\2\2\u01be\u01bc\3\2\2\2\u01bf\u01c1\3\2\2\2\u01c0"+
		"\u01be\3\2\2\2\u01c1\u01c2\7,\2\2\u01c2\u01c3\7\61\2\2\u01c3\u01c4\3\2"+
		"\2\2\u01c4\u01c5\b\66\2\2\u01c5l\3\2\2\2\u01c6\u01c7\7\61\2\2\u01c7\u01c8"+
		"\7\61\2\2\u01c8\u01cc\3\2\2\2\u01c9\u01cb\n\13\2\2\u01ca\u01c9\3\2\2\2"+
		"\u01cb\u01ce\3\2\2\2\u01cc\u01ca\3\2\2\2\u01cc\u01cd\3\2\2\2\u01cd\u01cf"+
		"\3\2\2\2\u01ce\u01cc\3\2\2\2\u01cf\u01d0\b\67\2\2\u01d0n\3\2\2\2\u01d1"+
		"\u01dd\t\f\2\2\u01d2\u01d3\7g\2\2\u01d3\u01dd\7-\2\2\u01d4\u01d5\7G\2"+
		"\2\u01d5\u01dd\7-\2\2\u01d6\u01d7\7g\2\2\u01d7\u01dd\7/\2\2\u01d8\u01d9"+
		"\7G\2\2\u01d9\u01da\7/\2\2\u01da\u01db\3\2\2\2\u01db\u01dd\5q9\2\u01dc"+
		"\u01d1\3\2\2\2\u01dc\u01d2\3\2\2\2\u01dc\u01d4\3\2\2\2\u01dc\u01d6\3\2"+
		"\2\2\u01dc\u01d8\3\2\2\2\u01ddp\3\2\2\2\u01de\u01e0\t\r\2\2\u01df\u01de"+
		"\3\2\2\2\u01e0\u01e1\3\2\2\2\u01e1\u01df\3\2\2\2\u01e1\u01e2\3\2\2\2\u01e2"+
		"r\3\2\2\2\u01e3\u01e5\5\u008dG\2\u01e4\u01e6\5y=\2\u01e5\u01e4\3\2\2\2"+
		"\u01e5\u01e6\3\2\2\2\u01e6t\3\2\2\2\u01e7\u01e9\5}?\2\u01e8\u01ea\5{>"+
		"\2\u01e9\u01e8\3\2\2\2\u01e9\u01ea\3\2\2\2\u01eav\3\2\2\2\u01eb\u01ec"+
		"\t\16\2\2\u01ecx\3\2\2\2\u01ed\u01ee\7k\2\2\u01eez\3\2\2\2\u01ef\u01f9"+
		"\t\17\2\2\u01f0\u01f1\7N\2\2\u01f1\u01f9\7w\2\2\u01f2\u01f3\7N\2\2\u01f3"+
		"\u01f9\7W\2\2\u01f4\u01f5\7w\2\2\u01f5\u01f9\7N\2\2\u01f6\u01f7\7W\2\2"+
		"\u01f7\u01f9\7N\2\2\u01f8\u01ef\3\2\2\2\u01f8\u01f0\3\2\2\2\u01f8\u01f2"+
		"\3\2\2\2\u01f8\u01f4\3\2\2\2\u01f8\u01f6\3\2\2\2\u01f9|\3\2\2\2\u01fa"+
		"\u01ff\5\177@\2\u01fb\u01ff\5\u0081A\2\u01fc\u01ff\5\u0083B\2\u01fd\u01ff"+
		"\5\u0085C\2\u01fe\u01fa\3\2\2\2\u01fe\u01fb\3\2\2\2\u01fe\u01fc\3\2\2"+
		"\2\u01fe\u01fd\3\2\2\2\u01ff~\3\2\2\2\u0200\u020a\7\62\2\2\u0201\u0206"+
		"\4\63;\2\u0202\u0205\5\u0087D\2\u0203\u0205\7a\2\2\u0204\u0202\3\2\2\2"+
		"\u0204\u0203\3\2\2\2\u0205\u0208\3\2\2\2\u0206\u0204\3\2\2\2\u0206\u0207"+
		"\3\2\2\2\u0207\u020a\3\2\2\2\u0208\u0206\3\2\2\2\u0209\u0200\3\2\2\2\u0209"+
		"\u0201\3\2\2\2\u020a\u0080\3\2\2\2\u020b\u020c\7\62\2\2\u020c\u0210\7"+
		"d\2\2\u020d\u020e\7\62\2\2\u020e\u0210\7D\2\2\u020f\u020b\3\2\2\2\u020f"+
		"\u020d\3\2\2\2\u0210\u0212\3\2\2\2\u0211\u0213\t\20\2\2\u0212\u0211\3"+
		"\2\2\2\u0213\u0214\3\2\2\2\u0214\u0212\3\2\2\2\u0214\u0215\3\2\2\2\u0215"+
		"\u0082\3\2\2\2\u0216\u0219\7\62\2\2\u0217\u021a\5\u0089E\2\u0218\u021a"+
		"\7a\2\2\u0219\u0217\3\2\2\2\u0219\u0218\3\2\2\2\u021a\u021b\3\2\2\2\u021b"+
		"\u0219\3\2\2\2\u021b\u021c\3\2\2\2\u021c\u0084\3\2\2\2\u021d\u021e\7\62"+
		"\2\2\u021e\u0222\7z\2\2\u021f\u0220\7\62\2\2\u0220\u0222\7Z\2\2\u0221"+
		"\u021d\3\2\2\2\u0221\u021f\3\2\2\2\u0222\u0225\3\2\2\2\u0223\u0226\5\u008b"+
		"F\2\u0224\u0226\7a\2\2\u0225\u0223\3\2\2\2\u0225\u0224\3\2\2\2\u0226\u0227"+
		"\3\2\2\2\u0227\u0225\3\2\2\2\u0227\u0228\3\2\2\2\u0228\u0086\3\2\2\2\u0229"+
		"\u022a\4\62;\2\u022a\u0088\3\2\2\2\u022b\u022c\4\629\2\u022c\u008a\3\2"+
		"\2\2\u022d\u022e\t\21\2\2\u022e\u008c\3\2\2\2\u022f\u0236\5q9\2\u0230"+
		"\u0237\5w<\2\u0231\u0232\7\60\2\2\u0232\u0234\5q9\2\u0233\u0235\5o8\2"+
		"\u0234\u0233\3\2\2\2\u0234\u0235\3\2\2\2\u0235\u0237\3\2\2\2\u0236\u0230"+
		"\3\2\2\2\u0236\u0231\3\2\2\2\u0237\u023e\3\2\2\2\u0238\u0239\7\60\2\2"+
		"\u0239\u023b\5q9\2\u023a\u023c\5o8\2\u023b\u023a\3\2\2\2\u023b\u023c\3"+
		"\2\2\2\u023c\u023e\3\2\2\2\u023d\u022f\3\2\2\2\u023d\u0238\3\2\2\2\u023e"+
		"\u008e\3\2\2\2\u023f\u0243\5\u0091I\2\u0240\u0243\5\u0093J\2\u0241\u0243"+
		"\5\u0095K\2\u0242\u023f\3\2\2\2\u0242\u0240\3\2\2\2\u0242\u0241\3\2\2"+
		"\2\u0243\u0090\3\2\2\2\u0244\u0248\4\63;\2\u0245\u0247\4\62;\2\u0246\u0245"+
		"\3\2\2\2\u0247\u024a\3\2\2\2\u0248\u0246\3\2\2\2\u0248\u0249\3\2\2\2\u0249"+
		"\u0092\3\2\2\2\u024a\u0248\3\2\2\2\u024b\u024d\7\62\2\2\u024c\u024e\4"+
		"\629\2\u024d\u024c\3\2\2\2\u024e\u024f\3\2\2\2\u024f\u024d\3\2\2\2\u024f"+
		"\u0250\3\2\2\2\u0250\u0094\3\2\2\2\u0251\u0252\7\62\2\2\u0252\u0253\7"+
		"z\2\2\u0253\u0255\3\2\2\2\u0254\u0256\t\21\2\2\u0255\u0254\3\2\2\2\u0256"+
		"\u0257\3\2\2\2\u0257\u0255\3\2\2\2\u0257\u0258\3\2\2\2\u0258\u0096\3\2"+
		"\2\2\61\2\u015a\u0162\u016a\u016d\u016f\u0172\u0176\u017f\u0181\u0189"+
		"\u018b\u018f\u0194\u019a\u019c\u01a1\u01a6\u01ac\u01af\u01b6\u01be\u01cc"+
		"\u01dc\u01e1\u01e5\u01e9\u01f8\u01fe\u0204\u0206\u0209\u020f\u0214\u0219"+
		"\u021b\u0221\u0225\u0227\u0234\u0236\u023b\u023d\u0242\u0248\u024f\u0257"+
		"\3\b\2\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}