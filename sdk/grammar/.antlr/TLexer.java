// Generated from /home/user/projects/sdk/sdk/grammar/TLexer.g4 by ANTLR 4.8
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
		Use=1, Var=2, If=3, Elif=4, Else=5, For=6, End=7, Attr=8, Point=9, TwoPoint=10, 
		TwoTwoPoint=11, Separator=12, OpenArIndex=13, CloseArIndex=14, OpenBlock=15, 
		CloseBlock=16, OpenOp=17, CloseOp=18, ArithmeticOperator=19, AssignmentOperator=20, 
		Not=21, IncDecOperators=22, Identifier=23, IDPrefix=24, TypeSpec=25, String=26, 
		Integer=27, Float=28, Whitespace=29, Newline=30, Words=31, BlockComment=32, 
		LineComment=33;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	private static String[] makeRuleNames() {
		return new String[] {
			"Use", "Var", "If", "Elif", "Else", "For", "End", "Attr", "Point", "TwoPoint", 
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
			null, "'use'", "'var'", "'if'", "'elif'", "'else'", "'for'", "';'", "'='", 
			"'.'", "':'", "'::'", "','", "'['", "']'", "'{'", "'}'", "'('", "')'", 
			null, null, "'!'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, "Use", "Var", "If", "Elif", "Else", "For", "End", "Attr", "Point", 
			"TwoPoint", "TwoTwoPoint", "Separator", "OpenArIndex", "CloseArIndex", 
			"OpenBlock", "CloseBlock", "OpenOp", "CloseOp", "ArithmeticOperator", 
			"AssignmentOperator", "Not", "IncDecOperators", "Identifier", "IDPrefix", 
			"TypeSpec", "String", "Integer", "Float", "Whitespace", "Newline", "Words", 
			"BlockComment", "LineComment"
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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2#\u01ac\b\1\4\2\t"+
		"\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t \4!"+
		"\t!\4\"\t\"\4#\t#\4$\t$\4%\t%\4&\t&\4\'\t\'\4(\t(\4)\t)\4*\t*\4+\t+\4"+
		",\t,\4-\t-\4.\t.\4/\t/\4\60\t\60\4\61\t\61\4\62\t\62\4\63\t\63\4\64\t"+
		"\64\4\65\t\65\4\66\t\66\3\2\3\2\3\2\3\2\3\3\3\3\3\3\3\3\3\4\3\4\3\4\3"+
		"\5\3\5\3\5\3\5\3\5\3\6\3\6\3\6\3\6\3\6\3\7\3\7\3\7\3\7\3\b\3\b\3\t\3\t"+
		"\3\n\3\n\3\13\3\13\3\f\3\f\3\f\3\r\3\r\3\16\3\16\3\17\3\17\3\20\3\20\3"+
		"\21\3\21\3\22\3\22\3\23\3\23\3\24\3\24\3\25\3\25\3\25\3\25\3\25\3\25\3"+
		"\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3"+
		"\25\3\25\3\25\5\25\u00b9\n\25\3\26\3\26\3\27\3\27\3\27\3\27\5\27\u00c1"+
		"\n\27\3\30\3\30\3\30\3\30\6\30\u00c7\n\30\r\30\16\30\u00c8\3\30\7\30\u00cc"+
		"\n\30\f\30\16\30\u00cf\13\30\5\30\u00d1\n\30\3\31\3\31\5\31\u00d5\n\31"+
		"\3\32\3\32\3\32\3\33\3\33\3\33\3\33\7\33\u00de\n\33\f\33\16\33\u00e1\13"+
		"\33\3\33\3\33\3\33\3\33\3\33\7\33\u00e8\n\33\f\33\16\33\u00eb\13\33\3"+
		"\33\5\33\u00ee\n\33\3\34\6\34\u00f1\n\34\r\34\16\34\u00f2\3\35\3\35\3"+
		"\36\6\36\u00f8\n\36\r\36\16\36\u00f9\3\36\3\36\3\37\3\37\5\37\u0100\n"+
		"\37\3\37\5\37\u0103\n\37\3\37\3\37\3 \6 \u0108\n \r \16 \u0109\3!\3!\3"+
		"!\3!\7!\u0110\n!\f!\16!\u0113\13!\3!\3!\3!\3!\3!\3\"\3\"\3\"\3\"\7\"\u011e"+
		"\n\"\f\"\16\"\u0121\13\"\3\"\3\"\3#\3#\3#\3#\3#\3#\3#\3#\3#\3#\3#\5#\u0130"+
		"\n#\3$\6$\u0133\n$\r$\16$\u0134\3%\3%\5%\u0139\n%\3&\3&\5&\u013d\n&\3"+
		"\'\3\'\3(\3(\3)\3)\3)\3)\3)\3)\3)\3)\3)\5)\u014c\n)\3*\3*\3*\3*\5*\u0152"+
		"\n*\3+\3+\3+\3+\7+\u0158\n+\f+\16+\u015b\13+\5+\u015d\n+\3,\3,\3,\3,\5"+
		",\u0163\n,\3,\6,\u0166\n,\r,\16,\u0167\3-\3-\3-\6-\u016d\n-\r-\16-\u016e"+
		"\3.\3.\3.\3.\5.\u0175\n.\3.\3.\6.\u0179\n.\r.\16.\u017a\3/\3/\3\60\3\60"+
		"\3\61\3\61\3\62\3\62\3\62\3\62\3\62\5\62\u0188\n\62\5\62\u018a\n\62\3"+
		"\62\3\62\3\62\5\62\u018f\n\62\5\62\u0191\n\62\3\63\3\63\3\63\5\63\u0196"+
		"\n\63\3\64\3\64\7\64\u019a\n\64\f\64\16\64\u019d\13\64\3\65\3\65\6\65"+
		"\u01a1\n\65\r\65\16\65\u01a2\3\66\3\66\3\66\3\66\6\66\u01a9\n\66\r\66"+
		"\16\66\u01aa\3\u0111\2\67\3\3\5\4\7\5\t\6\13\7\r\b\17\t\21\n\23\13\25"+
		"\f\27\r\31\16\33\17\35\20\37\21!\22#\23%\24\'\25)\26+\27-\30/\31\61\32"+
		"\63\33\65\34\67\359\36;\37= ?!A\"C#E\2G\2I\2K\2M\2O\2Q\2S\2U\2W\2Y\2["+
		"\2]\2_\2a\2c\2e\2g\2i\2k\2\3\2\21\6\2\'\',-//\61\61\4\2>>@@\3\2\62;\3"+
		"\2aa\3\2<<\3\2$$\3\2))\4\2\13\13\"\"\4\2\f\f\17\17\4\2GGgg\4\2\62;aa\5"+
		"\2HHNNhh\5\2NNWWww\4\2\62\63aa\5\2\62;CHch\3\5\2C\2\\\2c\2|\2\u0082\2"+
		"\1\22\u01d6\2\3\3\2\2\2\2\5\3\2\2\2\2\7\3\2\2\2\2\t\3\2\2\2\2\13\3\2\2"+
		"\2\2\r\3\2\2\2\2\17\3\2\2\2\2\21\3\2\2\2\2\23\3\2\2\2\2\25\3\2\2\2\2\27"+
		"\3\2\2\2\2\31\3\2\2\2\2\33\3\2\2\2\2\35\3\2\2\2\2\37\3\2\2\2\2!\3\2\2"+
		"\2\2#\3\2\2\2\2%\3\2\2\2\2\'\3\2\2\2\2)\3\2\2\2\2+\3\2\2\2\2-\3\2\2\2"+
		"\2/\3\2\2\2\2\61\3\2\2\2\2\63\3\2\2\2\2\65\3\2\2\2\2\67\3\2\2\2\29\3\2"+
		"\2\2\2;\3\2\2\2\2=\3\2\2\2\2?\3\2\2\2\2A\3\2\2\2\2C\3\2\2\2\3m\3\2\2\2"+
		"\5q\3\2\2\2\7u\3\2\2\2\tx\3\2\2\2\13}\3\2\2\2\r\u0082\3\2\2\2\17\u0086"+
		"\3\2\2\2\21\u0088\3\2\2\2\23\u008a\3\2\2\2\25\u008c\3\2\2\2\27\u008e\3"+
		"\2\2\2\31\u0091\3\2\2\2\33\u0093\3\2\2\2\35\u0095\3\2\2\2\37\u0097\3\2"+
		"\2\2!\u0099\3\2\2\2#\u009b\3\2\2\2%\u009d\3\2\2\2\'\u009f\3\2\2\2)\u00b8"+
		"\3\2\2\2+\u00ba\3\2\2\2-\u00c0\3\2\2\2/\u00d0\3\2\2\2\61\u00d4\3\2\2\2"+
		"\63\u00d6\3\2\2\2\65\u00ed\3\2\2\2\67\u00f0\3\2\2\29\u00f4\3\2\2\2;\u00f7"+
		"\3\2\2\2=\u0102\3\2\2\2?\u0107\3\2\2\2A\u010b\3\2\2\2C\u0119\3\2\2\2E"+
		"\u012f\3\2\2\2G\u0132\3\2\2\2I\u0136\3\2\2\2K\u013a\3\2\2\2M\u013e\3\2"+
		"\2\2O\u0140\3\2\2\2Q\u014b\3\2\2\2S\u0151\3\2\2\2U\u015c\3\2\2\2W\u0162"+
		"\3\2\2\2Y\u0169\3\2\2\2[\u0174\3\2\2\2]\u017c\3\2\2\2_\u017e\3\2\2\2a"+
		"\u0180\3\2\2\2c\u0190\3\2\2\2e\u0195\3\2\2\2g\u0197\3\2\2\2i\u019e\3\2"+
		"\2\2k\u01a4\3\2\2\2mn\7w\2\2no\7u\2\2op\7g\2\2p\4\3\2\2\2qr\7x\2\2rs\7"+
		"c\2\2st\7t\2\2t\6\3\2\2\2uv\7k\2\2vw\7h\2\2w\b\3\2\2\2xy\7g\2\2yz\7n\2"+
		"\2z{\7k\2\2{|\7h\2\2|\n\3\2\2\2}~\7g\2\2~\177\7n\2\2\177\u0080\7u\2\2"+
		"\u0080\u0081\7g\2\2\u0081\f\3\2\2\2\u0082\u0083\7h\2\2\u0083\u0084\7q"+
		"\2\2\u0084\u0085\7t\2\2\u0085\16\3\2\2\2\u0086\u0087\7=\2\2\u0087\20\3"+
		"\2\2\2\u0088\u0089\7?\2\2\u0089\22\3\2\2\2\u008a\u008b\7\60\2\2\u008b"+
		"\24\3\2\2\2\u008c\u008d\7<\2\2\u008d\26\3\2\2\2\u008e\u008f\7<\2\2\u008f"+
		"\u0090\7<\2\2\u0090\30\3\2\2\2\u0091\u0092\7.\2\2\u0092\32\3\2\2\2\u0093"+
		"\u0094\7]\2\2\u0094\34\3\2\2\2\u0095\u0096\7_\2\2\u0096\36\3\2\2\2\u0097"+
		"\u0098\7}\2\2\u0098 \3\2\2\2\u0099\u009a\7\177\2\2\u009a\"\3\2\2\2\u009b"+
		"\u009c\7*\2\2\u009c$\3\2\2\2\u009d\u009e\7+\2\2\u009e&\3\2\2\2\u009f\u00a0"+
		"\t\2\2\2\u00a0(\3\2\2\2\u00a1\u00a2\7-\2\2\u00a2\u00b9\7?\2\2\u00a3\u00a4"+
		"\7/\2\2\u00a4\u00b9\7?\2\2\u00a5\u00a6\7,\2\2\u00a6\u00b9\7?\2\2\u00a7"+
		"\u00a8\7\61\2\2\u00a8\u00b9\7?\2\2\u00a9\u00aa\7\'\2\2\u00aa\u00b9\7?"+
		"\2\2\u00ab\u00b9\t\3\2\2\u00ac\u00ad\7@\2\2\u00ad\u00b9\7?\2\2\u00ae\u00af"+
		"\7>\2\2\u00af\u00b9\7?\2\2\u00b0\u00b1\7(\2\2\u00b1\u00b9\7(\2\2\u00b2"+
		"\u00b3\7~\2\2\u00b3\u00b9\7~\2\2\u00b4\u00b5\7?\2\2\u00b5\u00b9\7?\2\2"+
		"\u00b6\u00b7\7#\2\2\u00b7\u00b9\7?\2\2\u00b8\u00a1\3\2\2\2\u00b8\u00a3"+
		"\3\2\2\2\u00b8\u00a5\3\2\2\2\u00b8\u00a7\3\2\2\2\u00b8\u00a9\3\2\2\2\u00b8"+
		"\u00ab\3\2\2\2\u00b8\u00ac\3\2\2\2\u00b8\u00ae\3\2\2\2\u00b8\u00b0\3\2"+
		"\2\2\u00b8\u00b2\3\2\2\2\u00b8\u00b4\3\2\2\2\u00b8\u00b6\3\2\2\2\u00b9"+
		"*\3\2\2\2\u00ba\u00bb\7#\2\2\u00bb,\3\2\2\2\u00bc\u00bd\7-\2\2\u00bd\u00c1"+
		"\7-\2\2\u00be\u00bf\7/\2\2\u00bf\u00c1\7/\2\2\u00c0\u00bc\3\2\2\2\u00c0"+
		"\u00be\3\2\2\2\u00c1.\3\2\2\2\u00c2\u00d1\5\61\31\2\u00c3\u00cd\5\61\31"+
		"\2\u00c4\u00cc\5? \2\u00c5\u00c7\t\4\2\2\u00c6\u00c5\3\2\2\2\u00c7\u00c8"+
		"\3\2\2\2\u00c8\u00c6\3\2\2\2\u00c8\u00c9\3\2\2\2\u00c9\u00cc\3\2\2\2\u00ca"+
		"\u00cc\t\5\2\2\u00cb\u00c4\3\2\2\2\u00cb\u00c6\3\2\2\2\u00cb\u00ca\3\2"+
		"\2\2\u00cc\u00cf\3\2\2\2\u00cd\u00cb\3\2\2\2\u00cd\u00ce\3\2\2\2\u00ce"+
		"\u00d1\3\2\2\2\u00cf\u00cd\3\2\2\2\u00d0\u00c2\3\2\2\2\u00d0\u00c3\3\2"+
		"\2\2\u00d1\60\3\2\2\2\u00d2\u00d5\t\5\2\2\u00d3\u00d5\5? \2\u00d4\u00d2"+
		"\3\2\2\2\u00d4\u00d3\3\2\2\2\u00d5\62\3\2\2\2\u00d6\u00d7\t\6\2\2\u00d7"+
		"\u00d8\5/\30\2\u00d8\64\3\2\2\2\u00d9\u00df\7$\2\2\u00da\u00de\n\7\2\2"+
		"\u00db\u00dc\7^\2\2\u00dc\u00de\7$\2\2\u00dd\u00da\3\2\2\2\u00dd\u00db"+
		"\3\2\2\2\u00de\u00e1\3\2\2\2\u00df\u00dd\3\2\2\2\u00df\u00e0\3\2\2\2\u00e0"+
		"\u00e2\3\2\2\2\u00e1\u00df\3\2\2\2\u00e2\u00ee\7$\2\2\u00e3\u00e9\7)\2"+
		"\2\u00e4\u00e8\n\b\2\2\u00e5\u00e6\7^\2\2\u00e6\u00e8\7)\2\2\u00e7\u00e4"+
		"\3\2\2\2\u00e7\u00e5\3\2\2\2\u00e8\u00eb\3\2\2\2\u00e9\u00e7\3\2\2\2\u00e9"+
		"\u00ea\3\2\2\2\u00ea\u00ec\3\2\2\2\u00eb\u00e9\3\2\2\2\u00ec\u00ee\7)"+
		"\2\2\u00ed\u00d9\3\2\2\2\u00ed\u00e3\3\2\2\2\u00ee\66\3\2\2\2\u00ef\u00f1"+
		"\t\4\2\2\u00f0\u00ef\3\2\2\2\u00f1\u00f2\3\2\2\2\u00f2\u00f0\3\2\2\2\u00f2"+
		"\u00f3\3\2\2\2\u00f38\3\2\2\2\u00f4\u00f5\5I%\2\u00f5:\3\2\2\2\u00f6\u00f8"+
		"\t\t\2\2\u00f7\u00f6\3\2\2\2\u00f8\u00f9\3\2\2\2\u00f9\u00f7\3\2\2\2\u00f9"+
		"\u00fa\3\2\2\2\u00fa\u00fb\3\2\2\2\u00fb\u00fc\b\36\2\2\u00fc<\3\2\2\2"+
		"\u00fd\u00ff\7\17\2\2\u00fe\u0100\7\f\2\2\u00ff\u00fe\3\2\2\2\u00ff\u0100"+
		"\3\2\2\2\u0100\u0103\3\2\2\2\u0101\u0103\7\f\2\2\u0102\u00fd\3\2\2\2\u0102"+
		"\u0101\3\2\2\2\u0103\u0104\3\2\2\2\u0104\u0105\b\37\2\2\u0105>\3\2\2\2"+
		"\u0106\u0108\t\21\2\2\u0107\u0106\3\2\2\2\u0108\u0109\3\2\2\2\u0109\u0107"+
		"\3\2\2\2\u0109\u010a\3\2\2\2\u010a@\3\2\2\2\u010b\u010c\7\61\2\2\u010c"+
		"\u010d\7,\2\2\u010d\u0111\3\2\2\2\u010e\u0110\13\2\2\2\u010f\u010e\3\2"+
		"\2\2\u0110\u0113\3\2\2\2\u0111\u0112\3\2\2\2\u0111\u010f\3\2\2\2\u0112"+
		"\u0114\3\2\2\2\u0113\u0111\3\2\2\2\u0114\u0115\7,\2\2\u0115\u0116\7\61"+
		"\2\2\u0116\u0117\3\2\2\2\u0117\u0118\b!\2\2\u0118B\3\2\2\2\u0119\u011a"+
		"\7\61\2\2\u011a\u011b\7\61\2\2\u011b\u011f\3\2\2\2\u011c\u011e\n\n\2\2"+
		"\u011d\u011c\3\2\2\2\u011e\u0121\3\2\2\2\u011f\u011d\3\2\2\2\u011f\u0120"+
		"\3\2\2\2\u0120\u0122\3\2\2\2\u0121\u011f\3\2\2\2\u0122\u0123\b\"\2\2\u0123"+
		"D\3\2\2\2\u0124\u0130\t\13\2\2\u0125\u0126\7g\2\2\u0126\u0130\7-\2\2\u0127"+
		"\u0128\7G\2\2\u0128\u0130\7-\2\2\u0129\u012a\7g\2\2\u012a\u0130\7/\2\2"+
		"\u012b\u012c\7G\2\2\u012c\u012d\7/\2\2\u012d\u012e\3\2\2\2\u012e\u0130"+
		"\5G$\2\u012f\u0124\3\2\2\2\u012f\u0125\3\2\2\2\u012f\u0127\3\2\2\2\u012f"+
		"\u0129\3\2\2\2\u012f\u012b\3\2\2\2\u0130F\3\2\2\2\u0131\u0133\t\f\2\2"+
		"\u0132\u0131\3\2\2\2\u0133\u0134\3\2\2\2\u0134\u0132\3\2\2\2\u0134\u0135"+
		"\3\2\2\2\u0135H\3\2\2\2\u0136\u0138\5c\62\2\u0137\u0139\5O(\2\u0138\u0137"+
		"\3\2\2\2\u0138\u0139\3\2\2\2\u0139J\3\2\2\2\u013a\u013c\5S*\2\u013b\u013d"+
		"\5Q)\2\u013c\u013b\3\2\2\2\u013c\u013d\3\2\2\2\u013dL\3\2\2\2\u013e\u013f"+
		"\t\r\2\2\u013fN\3\2\2\2\u0140\u0141\7k\2\2\u0141P\3\2\2\2\u0142\u014c"+
		"\t\16\2\2\u0143\u0144\7N\2\2\u0144\u014c\7w\2\2\u0145\u0146\7N\2\2\u0146"+
		"\u014c\7W\2\2\u0147\u0148\7w\2\2\u0148\u014c\7N\2\2\u0149\u014a\7W\2\2"+
		"\u014a\u014c\7N\2\2\u014b\u0142\3\2\2\2\u014b\u0143\3\2\2\2\u014b\u0145"+
		"\3\2\2\2\u014b\u0147\3\2\2\2\u014b\u0149\3\2\2\2\u014cR\3\2\2\2\u014d"+
		"\u0152\5U+\2\u014e\u0152\5W,\2\u014f\u0152\5Y-\2\u0150\u0152\5[.\2\u0151"+
		"\u014d\3\2\2\2\u0151\u014e\3\2\2\2\u0151\u014f\3\2\2\2\u0151\u0150\3\2"+
		"\2\2\u0152T\3\2\2\2\u0153\u015d\7\62\2\2\u0154\u0159\4\63;\2\u0155\u0158"+
		"\5]/\2\u0156\u0158\7a\2\2\u0157\u0155\3\2\2\2\u0157\u0156\3\2\2\2\u0158"+
		"\u015b\3\2\2\2\u0159\u0157\3\2\2\2\u0159\u015a\3\2\2\2\u015a\u015d\3\2"+
		"\2\2\u015b\u0159\3\2\2\2\u015c\u0153\3\2\2\2\u015c\u0154\3\2\2\2\u015d"+
		"V\3\2\2\2\u015e\u015f\7\62\2\2\u015f\u0163\7d\2\2\u0160\u0161\7\62\2\2"+
		"\u0161\u0163\7D\2\2\u0162\u015e\3\2\2\2\u0162\u0160\3\2\2\2\u0163\u0165"+
		"\3\2\2\2\u0164\u0166\t\17\2\2\u0165\u0164\3\2\2\2\u0166\u0167\3\2\2\2"+
		"\u0167\u0165\3\2\2\2\u0167\u0168\3\2\2\2\u0168X\3\2\2\2\u0169\u016c\7"+
		"\62\2\2\u016a\u016d\5_\60\2\u016b\u016d\7a\2\2\u016c\u016a\3\2\2\2\u016c"+
		"\u016b\3\2\2\2\u016d\u016e\3\2\2\2\u016e\u016c\3\2\2\2\u016e\u016f\3\2"+
		"\2\2\u016fZ\3\2\2\2\u0170\u0171\7\62\2\2\u0171\u0175\7z\2\2\u0172\u0173"+
		"\7\62\2\2\u0173\u0175\7Z\2\2\u0174\u0170\3\2\2\2\u0174\u0172\3\2\2\2\u0175"+
		"\u0178\3\2\2\2\u0176\u0179\5a\61\2\u0177\u0179\7a\2\2\u0178\u0176\3\2"+
		"\2\2\u0178\u0177\3\2\2\2\u0179\u017a\3\2\2\2\u017a\u0178\3\2\2\2\u017a"+
		"\u017b\3\2\2\2\u017b\\\3\2\2\2\u017c\u017d\4\62;\2\u017d^\3\2\2\2\u017e"+
		"\u017f\4\629\2\u017f`\3\2\2\2\u0180\u0181\t\20\2\2\u0181b\3\2\2\2\u0182"+
		"\u0189\5G$\2\u0183\u018a\5M\'\2\u0184\u0185\7\60\2\2\u0185\u0187\5G$\2"+
		"\u0186\u0188\5E#\2\u0187\u0186\3\2\2\2\u0187\u0188\3\2\2\2\u0188\u018a"+
		"\3\2\2\2\u0189\u0183\3\2\2\2\u0189\u0184\3\2\2\2\u018a\u0191\3\2\2\2\u018b"+
		"\u018c\7\60\2\2\u018c\u018e\5G$\2\u018d\u018f\5E#\2\u018e\u018d\3\2\2"+
		"\2\u018e\u018f\3\2\2\2\u018f\u0191\3\2\2\2\u0190\u0182\3\2\2\2\u0190\u018b"+
		"\3\2\2\2\u0191d\3\2\2\2\u0192\u0196\5g\64\2\u0193\u0196\5i\65\2\u0194"+
		"\u0196\5k\66\2\u0195\u0192\3\2\2\2\u0195\u0193\3\2\2\2\u0195\u0194\3\2"+
		"\2\2\u0196f\3\2\2\2\u0197\u019b\4\63;\2\u0198\u019a\4\62;\2\u0199\u0198"+
		"\3\2\2\2\u019a\u019d\3\2\2\2\u019b\u0199\3\2\2\2\u019b\u019c\3\2\2\2\u019c"+
		"h\3\2\2\2\u019d\u019b\3\2\2\2\u019e\u01a0\7\62\2\2\u019f\u01a1\4\629\2"+
		"\u01a0\u019f\3\2\2\2\u01a1\u01a2\3\2\2\2\u01a2\u01a0\3\2\2\2\u01a2\u01a3"+
		"\3\2\2\2\u01a3j\3\2\2\2\u01a4\u01a5\7\62\2\2\u01a5\u01a6\7z\2\2\u01a6"+
		"\u01a8\3\2\2\2\u01a7\u01a9\t\20\2\2\u01a8\u01a7\3\2\2\2\u01a9\u01aa\3"+
		"\2\2\2\u01aa\u01a8\3\2\2\2\u01aa\u01ab\3\2\2\2\u01abl\3\2\2\2.\2\u00b8"+
		"\u00c0\u00c8\u00cb\u00cd\u00d0\u00d4\u00dd\u00df\u00e7\u00e9\u00ed\u00f2"+
		"\u00f9\u00ff\u0102\u0109\u0111\u011f\u012f\u0134\u0138\u013c\u014b\u0151"+
		"\u0157\u0159\u015c\u0162\u0167\u016c\u016e\u0174\u0178\u017a\u0187\u0189"+
		"\u018e\u0190\u0195\u019b\u01a2\u01aa\3\b\2\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}