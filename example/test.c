#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/* PROTOTYPES */
void target_15(char *input, int *xtmp);
void target_14(char *input, int *xtmp);
void target_13(char *input, int *xtmp);
void target_12(char *input, int *xtmp);
void target_11(char *input, int *xtmp);
void target_10(char *input, int *xtmp);
void target_9(char *input);
void target_8(char *input);
void target_7(char *input);
void target_6(char *input);
void target_5(char *input);
void target_4(char *input);
void target_3(char *input);
void target_2(char *input);
void target_1(char *input);
void func_1(char *input);
void func_2(char *input);
void func_3(char *input);
void func_4(char *input);
void func_5(char *input);
void func_6(char *input);
void func_7(char *input);
void func_8(char *input);
void func_9(char *input);
void func_10(char *input);
void func_11(char *input);
void func_12(char *input);
void func_13(char *input);
void func_14(char *input);
void func_15(char *input);
void func_16(char *input);
void func_17(char *input);
void func_18(char *input);
void func_19(char *input);
void func_20(char *input);
void func_21(char *input);
void func_22(char *input);
void func_23(char *input);
void func_24(char *input);
void func_25(char *input);
void func_26(char *input);
void func_27(char *input);
void func_28(char *input);
void func_29(char *input);
void func_30(char *input);
void func_31(char *input);
void func_32(char *input);
void func_33(char *input);
void func_34(char *input);
void func_35(char *input);
void func_36(char *input);
void func_37(char *input);
void func_38(char *input);
void func_39(char *input);
void func_40(char *input);
void func_41(char *input);
void func_42(char *input);
void func_43(char *input);
void func_44(char *input);
void func_45(char *input);
void func_46(char *input);
void func_47(char *input);
void func_48(char *input);
void func_49(char *input);
void func_50(char *input);
void func_51(char *input);
void func_52(char *input);
void func_53(char *input);
void func_54(char *input);
void func_55(char *input);
void func_56(char *input);
void func_57(char *input);
void func_58(char *input);
void func_59(char *input);
void func_60(char *input);
void func_61(char *input);
void func_62(char *input);
void func_63(char *input);
void func_64(char *input);
void func_65(char *input);
void func_66(char *input);
void func_67(char *input);
void func_68(char *input);
void func_69(char *input);
void func_70(char *input);
void func_71(char *input);
void func_72(char *input);
void func_73(char *input);
void func_74(char *input);
void func_75(char *input);
void func_76(char *input);
void func_77(char *input);
void func_78(char *input);
void func_79(char *input);
void func_80(char *input);
void func_81(char *input);
void func_82(char *input);
void func_83(char *input);
void func_84(char *input);
void func_85(char *input);
void func_86(char *input);
void func_87(char *input);
void func_88(char *input);
void func_89(char *input);
void func_90(char *input);
void func_91(char *input);
void func_92(char *input);
void func_93(char *input);
void func_94(char *input);
void func_95(char *input);
void func_96(char *input);
void func_97(char *input);
void func_98(char *input);
void func_99(char *input);
void func_100(char *input);
void func_101(char *input);
void func_102(char *input);
void func_103(char *input);
void func_104(char *input);
void func_105(char *input);
void func_106(char *input);
void func_107(char *input);
void func_108(char *input);
void func_109(char *input);
void func_110(char *input);
void func_111(char *input);
void func_112(char *input);
void func_113(char *input);
void func_114(char *input);
void func_115(char *input);
void func_116(char *input);
void func_117(char *input);
void func_118(char *input);
void func_119(char *input);
void func_120(char *input);
void func_121(char *input);
void func_122(char *input);
void func_123(char *input);
void func_124(char *input);
void func_125(char *input);
void func_126(char *input);
void func_127(char *input);
void func_128(char *input);
void func_129(char *input);
void func_130(char *input);
void func_131(char *input);
void func_132(char *input);
void func_133(char *input);
void func_134(char *input);
void func_135(char *input);
void func_136(char *input);
void func_137(char *input);
void func_138(char *input);
void func_139(char *input);
void func_140(char *input);
void func_141(char *input);
void func_142(char *input);
void func_143(char *input);
void func_144(char *input);
void func_145(char *input);
void func_146(char *input);
void func_147(char *input);
void func_148(char *input);
void func_149(char *input);
void func_150(char *input);
void func_151(char *input);
void func_152(char *input);
void func_153(char *input);
void func_154(char *input);
void func_155(char *input);
void func_156(char *input);
void func_157(char *input);
void func_158(char *input);
void func_159(char *input);
void func_160(char *input);
void func_161(char *input);
void func_162(char *input);
void func_163(char *input);
void func_164(char *input);
void func_165(char *input);
void func_166(char *input);
void func_167(char *input);
void func_168(char *input);
void func_169(char *input);
void func_170(char *input);
void func_171(char *input);
void func_172(char *input);
void func_173(char *input);
void func_174(char *input);
void func_175(char *input);
void func_176(char *input);
void func_177(char *input);
void func_178(char *input);
void func_179(char *input);
void func_180(char *input);
void func_181(char *input);
void func_182(char *input);
void func_183(char *input);
void func_184(char *input);
void func_185(char *input);
void func_186(char *input);
void func_187(char *input);
void func_188(char *input);
void func_189(char *input);
void func_190(char *input);
void func_191(char *input);
void func_192(char *input);
void func_193(char *input);
void func_194(char *input);
void func_195(char *input);
void func_196(char *input);
void func_197(char *input);
void func_198(char *input);
void func_199(char *input);
void func_200(char *input);
void func_201(char *input);
void func_202(char *input);
void func_203(char *input);
void func_204(char *input);
void func_205(char *input);
void func_206(char *input);
void func_207(char *input);
void func_208(char *input);
void func_209(char *input);
void func_210(char *input);
void func_211(char *input);
void func_212(char *input);
void func_213(char *input);
void func_214(char *input);
void func_215(char *input);
void func_216(char *input);
void func_217(char *input);
void func_218(char *input);
void func_219(char *input);
void func_220(char *input);
void func_221(char *input);
void func_222(char *input);
void func_223(char *input);
void func_224(char *input);
void func_225(char *input);
void func_226(char *input);
void func_227(char *input);
void func_228(char *input);
void func_229(char *input);
void func_230(char *input);
void func_231(char *input);
void func_232(char *input);
void func_233(char *input);
void func_234(char *input);
void func_235(char *input);
void func_236(char *input);
void func_237(char *input);
void func_238(char *input);
void func_239(char *input);
void func_240(char *input);
void func_241(char *input);
void func_242(char *input);
void func_243(char *input);
void func_244(char *input);
void func_245(char *input);
void func_246(char *input);
void func_247(char *input);
void func_248(char *input);
void func_249(char *input);
void func_250(char *input);
void func_251(char *input);
void func_252(char *input);
void func_253(char *input);
void func_254(char *input);
void func_255(char *input);
void func_256(char *input);
void func_257(char *input);
void func_258(char *input);
void func_259(char *input);
void func_260(char *input);
void func_261(char *input);
void func_262(char *input);
void func_263(char *input);
void func_264(char *input);
void func_265(char *input);
void func_266(char *input);
void func_267(char *input);
void func_268(char *input);
void func_269(char *input);
void func_270(char *input);
void func_271(char *input);
void func_272(char *input);
void func_273(char *input);
void func_274(char *input);
void func_275(char *input);
void func_276(char *input);
void func_277(char *input);
void func_278(char *input);
void func_279(char *input);
void func_280(char *input);
void func_281(char *input);
void func_282(char *input);
void func_283(char *input);
void func_284(char *input);
void func_285(char *input);
void func_286(char *input);
void func_287(char *input);
void func_288(char *input);
void func_289(char *input);
void func_290(char *input);
void func_291(char *input);
void func_292(char *input);
void func_293(char *input);
void func_294(char *input);
void func_295(char *input);
void func_296(char *input);
void func_297(char *input);
void func_298(char *input);
void func_299(char *input);
void func_300(char *input);
void func_301(char *input);
void func_302(char *input);
void func_303(char *input);
void func_304(char *input);
void func_305(char *input);
void func_306(char *input);
void func_307(char *input);
void func_308(char *input);
void func_309(char *input);
void func_310(char *input);
void func_311(char *input);
void func_312(char *input);
void func_313(char *input);
void func_314(char *input);
void func_315(char *input);
void func_316(char *input);
void func_317(char *input);
void func_318(char *input);
void func_319(char *input);
void func_320(char *input);
void func_321(char *input);
void func_322(char *input);
void func_323(char *input);
void func_324(char *input);
void func_325(char *input);
void func_326(char *input);
void func_327(char *input);
void func_328(char *input);
void func_329(char *input);
void func_330(char *input);
void func_331(char *input);
void func_332(char *input);
void func_333(char *input);
void func_334(char *input);
void func_335(char *input);
void func_336(char *input);
void func_337(char *input);
void func_338(char *input);

/* FUNCTIONS */
void target_15(char *input, int *xtmp) {
  if (input[15] == 'J') {
    free(xtmp);
    printf("%d", *xtmp);
  }
}

void func_1(char *input) {}

void func_2(char *input) {}

void func_3(char *input) {}

void target_14(char *input, int *xtmp) {
  if (input[14] == 'S') {
    func_1(input);
  }
  if (input[14] == 'v') {
    func_2(input);
  }
  if (input[14] == 'U') {
    target_15(input, xtmp);
  }
  if (input[14] == 'x') {
    func_3(input);
  }
}

void func_4(char *input) {}

void func_6(char *input) {}

void func_7(char *input) {}

void func_8(char *input) {}

void func_9(char *input) {}

void func_10(char *input) {}

void func_11(char *input) {}

void func_12(char *input) {}

void func_13(char *input) {}

void func_14(char *input) {}

void func_5(char *input) {
  if (input[14] == 'Y') {
    func_6(input);
  }
  if (input[14] == '=') {
    func_7(input);
  }
  if (input[14] == '8') {
    func_8(input);
  }
  if (input[14] == 'P') {
    func_9(input);
  }
  if (input[14] == 'b') {
    func_10(input);
  }
  if (input[14] == 'A') {
    func_11(input);
  }
  if (input[14] == 'a') {
    func_12(input);
  }
  if (input[14] == 's') {
    func_13(input);
  }
  if (input[14] == 'g') {
    func_14(input);
  }
}

void func_15(char *input) {}

void func_16(char *input) {}

void func_17(char *input) {}

void func_18(char *input) {}

void func_19(char *input) {}

void func_20(char *input) {}

void func_21(char *input) {}

void target_13(char *input, int *xtmp) {
  if (input[13] == 'N') {
    target_14(input, xtmp);
  }
  if (input[13] == '0') {
    func_4(input);
  }
  if (input[13] == 'M') {
    func_5(input);
  }
  if (input[13] == '1') {
    func_15(input);
  }
  if (input[13] == 'e') {
    func_16(input);
  }
  if (input[13] == 'n') {
    func_17(input);
  }
  if (input[13] == '6') {
    func_18(input);
  }
  if (input[13] == 'H') {
    func_19(input);
  }
  if (input[13] == '$') {
    func_20(input);
  }
  if (input[13] == '`') {
    func_21(input);
  }
}

void func_22(char *input) {}

void func_24(char *input) {}

void func_25(char *input) {}

void func_27(char *input) {}

void func_28(char *input) {}

void func_29(char *input) {}

void func_30(char *input) {}

void func_31(char *input) {}

void func_26(char *input) {
  if (input[14] == '}') {
    func_27(input);
  }
  if (input[14] == ',') {
    func_28(input);
  }
  if (input[14] == 'P') {
    func_29(input);
  }
  if (input[14] == 'N') {
    func_30(input);
  }
  if (input[14] == '|') {
    func_31(input);
  }
}

void func_32(char *input) {}

void func_33(char *input) {}

void func_34(char *input) {}

void func_36(char *input) {}

void func_37(char *input) {}

void func_38(char *input) {}

void func_39(char *input) {}

void func_40(char *input) {}

void func_35(char *input) {
  if (input[14] == '(') {
    func_36(input);
  }
  if (input[14] == '.') {
    func_37(input);
  }
  if (input[14] == 'Q') {
    func_38(input);
  }
  if (input[14] == '}') {
    func_39(input);
  }
  if (input[14] == 'k') {
    func_40(input);
  }
}

void func_41(char *input) {}

void func_42(char *input) {}

void func_43(char *input) {}

void func_23(char *input) {
  if (input[13] == 'd') {
    func_24(input);
  }
  if (input[13] == 'y') {
    func_25(input);
  }
  if (input[13] == '`') {
    func_26(input);
  }
  if (input[13] == 'L') {
    func_32(input);
  }
  if (input[13] == 'o') {
    func_33(input);
  }
  if (input[13] == '.') {
    func_34(input);
  }
  if (input[13] == '3') {
    func_35(input);
  }
  if (input[13] == 'l') {
    func_41(input);
  }
  if (input[13] == ']') {
    func_42(input);
  }
  if (input[13] == 't') {
    func_43(input);
  }
}

void func_44(char *input) {}

void func_45(char *input) {}

void func_46(char *input) {}

void func_48(char *input) {}

void func_49(char *input) {}

void func_50(char *input) {}

void func_47(char *input) {
  if (input[13] == '_') {
    func_48(input);
  }
  if (input[13] == '3') {
    func_49(input);
  }
  if (input[13] == '/') {
    func_50(input);
  }
}

void func_51(char *input) {}

void func_52(char *input) {}

void func_53(char *input) {}

void func_54(char *input) {}

void target_12(char *input, int *xtmp) {
  if (input[12] == 'D') {
    func_22(input);
  }
  if (input[12] == '^') {
    func_23(input);
  }
  if (input[12] == 'A') {
    target_13(input, xtmp);
  }
  if (input[12] == '!') {
    func_44(input);
  }
  if (input[12] == 'K') {
    func_45(input);
  }
  if (input[12] == '4') {
    func_46(input);
  }
  if (input[12] == 'L') {
    func_47(input);
  }
  if (input[12] == '5') {
    func_51(input);
  }
  if (input[12] == 'O') {
    func_52(input);
  }
  if (input[12] == '(') {
    func_53(input);
  }
  if (input[12] == 'o') {
    func_54(input);
  }
}

void func_56(char *input) {}

void func_58(char *input) {}

void func_59(char *input) {}

void func_57(char *input) {
  if (input[13] == 'U') {
    func_58(input);
  }
  if (input[13] == 'P') {
    func_59(input);
  }
}

void func_60(char *input) {}

void func_61(char *input) {}

void func_62(char *input) {}

void func_64(char *input) {}

void func_65(char *input) {}

void func_67(char *input) {}

void func_68(char *input) {}

void func_69(char *input) {}

void func_70(char *input) {}

void func_71(char *input) {}

void func_72(char *input) {}

void func_73(char *input) {}

void func_74(char *input) {}

void func_75(char *input) {}

void func_76(char *input) {}

void func_66(char *input) {
  if (input[14] == 'P') {
    func_67(input);
  }
  if (input[14] == '-') {
    func_68(input);
  }
  if (input[14] == 'n') {
    func_69(input);
  }
  if (input[14] == '}') {
    func_70(input);
  }
  if (input[14] == ';') {
    func_71(input);
  }
  if (input[14] == ' ') {
    func_72(input);
  }
  if (input[14] == 'r') {
    func_73(input);
  }
  if (input[14] == '9') {
    func_74(input);
  }
  if (input[14] == 'x') {
    func_75(input);
  }
  if (input[14] == ')') {
    func_76(input);
  }
}

void func_63(char *input) {
  if (input[13] == '9') {
    func_64(input);
  }
  if (input[13] == 'h') {
    func_65(input);
  }
  if (input[13] == 'y') {
    func_66(input);
  }
}

void func_77(char *input) {}

void func_78(char *input) {}

void func_79(char *input) {}

void func_80(char *input) {}

void func_55(char *input) {
  if (input[12] == 'T') {
    func_56(input);
  }
  if (input[12] == 'S') {
    func_57(input);
  }
  if (input[12] == '-') {
    func_60(input);
  }
  if (input[12] == '4') {
    func_61(input);
  }
  if (input[12] == 'i') {
    func_62(input);
  }
  if (input[12] == 'v') {
    func_63(input);
  }
  if (input[12] == 'r') {
    func_77(input);
  }
  if (input[12] == 'K') {
    func_78(input);
  }
  if (input[12] == 'u') {
    func_79(input);
  }
  if (input[12] == 'N') {
    func_80(input);
  }
}

void func_81(char *input) {}

void target_11(char *input, int *xtmp) {
  if (input[11] == '>') {
    func_55(input);
  }
  if (input[11] == '#') {
    target_12(input, xtmp);
  }
  if (input[11] == '=') {
    func_81(input);
  }
}

void func_82(char *input) {}

void func_83(char *input) {}

void func_84(char *input) {}

void func_85(char *input) {}

void func_86(char *input) {}

void target_10(char *input, int *xtmp) {
  if (input[10] == '&') {
    func_82(input);
  }
  if (input[10] == '@') {
    target_11(input, xtmp);
  }
  if (input[10] == '*') {
    func_83(input);
  }
  if (input[10] == 'L') {
    func_84(input);
  }
  if (input[10] == '1') {
    func_85(input);
  }
  if (input[10] == 'y') {
    func_86(input);
  }
}

void func_87(char *input) {}

void func_88(char *input) {}

void func_89(char *input) {}

void target_9(char *input) {
  if (input[9] == 'R') {
    int *xtmp = (int *)malloc(sizeof(int));
    target_10(input, xtmp);
  }
  if (input[9] == 'W') {
    func_87(input);
  }
  if (input[9] == '*') {
    func_88(input);
  }
  if (input[9] == 'Q') {
    func_89(input);
  }
}

void func_90(char *input) {}

void func_91(char *input) {}

void func_92(char *input) {}

void func_93(char *input) {}

void func_94(char *input) {}

void target_8(char *input) {
  if (input[8] == ']') {
    target_9(input);
  }
  if (input[8] == 'N') {
    func_90(input);
  }
  if (input[8] == 'b') {
    func_91(input);
  }
  if (input[8] == 'Z') {
    func_92(input);
  }
  if (input[8] == '<') {
    func_93(input);
  }
  if (input[8] == 'T') {
    func_94(input);
  }
}

void func_95(char *input) {}

void func_96(char *input) {}

void func_97(char *input) {}

void func_98(char *input) {}

void target_7(char *input) {
  if (input[7] == 'g') {
    func_95(input);
  }
  if (input[7] == '6') {
    target_8(input);
  }
  if (input[7] == 'v') {
    func_96(input);
  }
  if (input[7] == 'Y') {
    func_97(input);
  }
  if (input[7] == '0') {
    func_98(input);
  }
}

void func_99(char *input) {}

void func_101(char *input) {}

void func_102(char *input) {}

void func_103(char *input) {}

void func_104(char *input) {}

void func_105(char *input) {}

void func_106(char *input) {}

void func_107(char *input) {}

void func_100(char *input) {
  if (input[7] == 'r') {
    func_101(input);
  }
  if (input[7] == 'b') {
    func_102(input);
  }
  if (input[7] == '=') {
    func_103(input);
  }
  if (input[7] == 'K') {
    func_104(input);
  }
  if (input[7] == '?') {
    func_105(input);
  }
  if (input[7] == 'l') {
    func_106(input);
  }
  if (input[7] == 'M') {
    func_107(input);
  }
}

void func_108(char *input) {}

void func_109(char *input) {}

void func_110(char *input) {}

void func_111(char *input) {}

void func_112(char *input) {}

void func_114(char *input) {}

void func_113(char *input) {
  if (input[7] == '5') {
    func_114(input);
  }
}

void target_6(char *input) {
  if (input[6] == '0') {
    func_99(input);
  }
  if (input[6] == '(') {
    target_7(input);
  }
  if (input[6] == ']') {
    func_100(input);
  }
  if (input[6] == 'k') {
    func_108(input);
  }
  if (input[6] == '>') {
    func_109(input);
  }
  if (input[6] == 'K') {
    func_110(input);
  }
  if (input[6] == 'J') {
    func_111(input);
  }
  if (input[6] == ':') {
    func_112(input);
  }
  if (input[6] == 'm') {
    func_113(input);
  }
}

void func_115(char *input) {}

void func_117(char *input) {}

void func_118(char *input) {}

void func_119(char *input) {}

void func_120(char *input) {}

void func_121(char *input) {}

void func_122(char *input) {}

void func_116(char *input) {
  if (input[6] == '(') {
    func_117(input);
  }
  if (input[6] == 'y') {
    func_118(input);
  }
  if (input[6] == 'a') {
    func_119(input);
  }
  if (input[6] == 'q') {
    func_120(input);
  }
  if (input[6] == 'Q') {
    func_121(input);
  }
  if (input[6] == 'X') {
    func_122(input);
  }
}

void func_123(char *input) {}

void func_124(char *input) {}

void func_126(char *input) {}

void func_127(char *input) {}

void func_128(char *input) {}

void func_131(char *input) {}

void func_133(char *input) {}

void func_135(char *input) {}

void func_136(char *input) {}

void func_137(char *input) {}

void func_138(char *input) {}

void func_139(char *input) {}

void func_140(char *input) {}

void func_141(char *input) {}

void func_142(char *input) {}

void func_143(char *input) {}

void func_144(char *input) {}

void func_134(char *input) {
  if (input[10] == 'A') {
    func_135(input);
  }
  if (input[10] == '$') {
    func_136(input);
  }
  if (input[10] == 'r') {
    func_137(input);
  }
  if (input[10] == '@') {
    func_138(input);
  }
  if (input[10] == 'B') {
    func_139(input);
  }
  if (input[10] == 'c') {
    func_140(input);
  }
  if (input[10] == 'R') {
    func_141(input);
  }
  if (input[10] == 'b') {
    func_142(input);
  }
  if (input[10] == 'P') {
    func_143(input);
  }
  if (input[10] == 'Y') {
    func_144(input);
  }
}

void func_145(char *input) {}

void func_146(char *input) {}

void func_147(char *input) {}

void func_149(char *input) {}

void func_150(char *input) {}

void func_151(char *input) {}

void func_152(char *input) {}

void func_153(char *input) {}

void func_154(char *input) {}

void func_148(char *input) {
  if (input[10] == 's') {
    func_149(input);
  }
  if (input[10] == 'E') {
    func_150(input);
  }
  if (input[10] == '/') {
    func_151(input);
  }
  if (input[10] == 'o') {
    func_152(input);
  }
  if (input[10] == '4') {
    func_153(input);
  }
  if (input[10] == 'b') {
    func_154(input);
  }
}

void func_155(char *input) {}

void func_156(char *input) {}

void func_132(char *input) {
  if (input[9] == '7') {
    func_133(input);
  }
  if (input[9] == 'z') {
    func_134(input);
  }
  if (input[9] == 'L') {
    func_145(input);
  }
  if (input[9] == ':') {
    func_146(input);
  }
  if (input[9] == '|') {
    func_147(input);
  }
  if (input[9] == 'P') {
    func_148(input);
  }
  if (input[9] == 'X') {
    func_155(input);
  }
  if (input[9] == '[') {
    func_156(input);
  }
}

void func_157(char *input) {}

void func_130(char *input) {
  if (input[8] == '7') {
    func_131(input);
  }
  if (input[8] == 'v') {
    func_132(input);
  }
  if (input[8] == 'S') {
    func_157(input);
  }
}

void func_158(char *input) {}

void func_129(char *input) {
  if (input[7] == 'P') {
    func_130(input);
  }
  if (input[7] == 'G') {
    func_158(input);
  }
}

void func_159(char *input) {}

void func_125(char *input) {
  if (input[6] == 'p') {
    func_126(input);
  }
  if (input[6] == '-') {
    func_127(input);
  }
  if (input[6] == ',') {
    func_128(input);
  }
  if (input[6] == 'G') {
    func_129(input);
  }
  if (input[6] == '&') {
    func_159(input);
  }
}

void func_160(char *input) {}

void target_5(char *input) {
  if (input[5] == 'z') {
    func_115(input);
  }
  if (input[5] == '>') {
    target_6(input);
  }
  if (input[5] == 'O') {
    func_116(input);
  }
  if (input[5] == '-') {
    func_123(input);
  }
  if (input[5] == '3') {
    func_124(input);
  }
  if (input[5] == 'X') {
    func_125(input);
  }
  if (input[5] == 'D') {
    func_160(input);
  }
}

void func_161(char *input) {}

void func_162(char *input) {}

void func_163(char *input) {}

void func_164(char *input) {}

void target_4(char *input) {
  if (input[4] == 'M') {
    func_161(input);
  }
  if (input[4] == 'm') {
    func_162(input);
  }
  if (input[4] == 'J') {
    target_5(input);
  }
  if (input[4] == 'z') {
    func_163(input);
  }
  if (input[4] == '7') {
    func_164(input);
  }
}

void func_165(char *input) {}

void func_166(char *input) {}

void func_167(char *input) {}

void func_169(char *input) {}

void func_170(char *input) {}

void func_171(char *input) {}

void func_172(char *input) {}

void func_173(char *input) {}

void func_176(char *input) {}

void func_177(char *input) {}

void func_178(char *input) {}

void func_179(char *input) {}

void func_180(char *input) {}

void func_175(char *input) {
  if (input[6] == '8') {
    func_176(input);
  }
  if (input[6] == 'w') {
    func_177(input);
  }
  if (input[6] == '|') {
    func_178(input);
  }
  if (input[6] == 'c') {
    func_179(input);
  }
  if (input[6] == '+') {
    func_180(input);
  }
}

void func_181(char *input) {}

void func_182(char *input) {}

void func_183(char *input) {}

void func_184(char *input) {}

void func_174(char *input) {
  if (input[5] == 'y') {
    func_175(input);
  }
  if (input[5] == 'B') {
    func_181(input);
  }
  if (input[5] == 'Q') {
    func_182(input);
  }
  if (input[5] == '~') {
    func_183(input);
  }
  if (input[5] == '/') {
    func_184(input);
  }
}

void func_185(char *input) {}

void func_186(char *input) {}

void func_188(char *input) {}

void func_189(char *input) {}

void func_191(char *input) {}

void func_192(char *input) {}

void func_193(char *input) {}

void func_190(char *input) {
  if (input[6] == '6') {
    func_191(input);
  }
  if (input[6] == 'm') {
    func_192(input);
  }
  if (input[6] == '-') {
    func_193(input);
  }
}

void func_194(char *input) {}

void func_195(char *input) {}

void func_187(char *input) {
  if (input[5] == 'g') {
    func_188(input);
  }
  if (input[5] == '|') {
    func_189(input);
  }
  if (input[5] == 'M') {
    func_190(input);
  }
  if (input[5] == 'U') {
    func_194(input);
  }
  if (input[5] == 'E') {
    func_195(input);
  }
}

void func_196(char *input) {}

void func_168(char *input) {
  if (input[4] == 't') {
    func_169(input);
  }
  if (input[4] == 'w') {
    func_170(input);
  }
  if (input[4] == 'p') {
    func_171(input);
  }
  if (input[4] == '<') {
    func_172(input);
  }
  if (input[4] == ']') {
    func_173(input);
  }
  if (input[4] == 'e') {
    func_174(input);
  }
  if (input[4] == 'z') {
    func_185(input);
  }
  if (input[4] == 'J') {
    func_186(input);
  }
  if (input[4] == '"') {
    func_187(input);
  }
  if (input[4] == 'v') {
    func_196(input);
  }
}

void func_198(char *input) {}

void func_199(char *input) {}

void func_197(char *input) {
  if (input[4] == '|') {
    func_198(input);
  }
  if (input[4] == 'S') {
    func_199(input);
  }
}

void func_200(char *input) {}

void func_201(char *input) {}

void func_202(char *input) {}

void func_203(char *input) {}

void target_3(char *input) {
  if (input[3] == 'o') {
    func_165(input);
  }
  if (input[3] == '{') {
    func_166(input);
  }
  if (input[3] == 'P') {
    func_167(input);
  }
  if (input[3] == '9') {
    func_168(input);
  }
  if (input[3] == 'f') {
    func_197(input);
  }
  if (input[3] == 'J') {
    target_4(input);
  }
  if (input[3] == 'c') {
    func_200(input);
  }
  if (input[3] == '4') {
    func_201(input);
  }
  if (input[3] == 'h') {
    func_202(input);
  }
  if (input[3] == 'd') {
    func_203(input);
  }
}

void func_204(char *input) {}

void func_206(char *input) {}

void func_207(char *input) {}

void func_205(char *input) {
  if (input[3] == '{') {
    func_206(input);
  }
  if (input[3] == 'C') {
    func_207(input);
  }
}

void func_208(char *input) {}

void func_209(char *input) {}

void func_210(char *input) {}

void target_2(char *input) {
  if (input[2] == 'I') {
    func_204(input);
  }
  if (input[2] == '-') {
    func_205(input);
  }
  if (input[2] == '{') {
    func_208(input);
  }
  if (input[2] == '>') {
    func_209(input);
  }
  if (input[2] == '4') {
    target_3(input);
  }
  if (input[2] == '}') {
    func_210(input);
  }
}

void func_212(char *input) {}

void func_214(char *input) {}

void func_215(char *input) {}

void func_216(char *input) {}

void func_217(char *input) {}

void func_219(char *input) {}

void func_220(char *input) {}

void func_221(char *input) {}

void func_222(char *input) {}

void func_224(char *input) {}

void func_225(char *input) {}

void func_226(char *input) {}

void func_227(char *input) {}

void func_229(char *input) {}

void func_228(char *input) {
  if (input[6] == '&') {
    func_229(input);
  }
}

void func_230(char *input) {}

void func_223(char *input) {
  if (input[5] == 'w') {
    func_224(input);
  }
  if (input[5] == '*') {
    func_225(input);
  }
  if (input[5] == 'I') {
    func_226(input);
  }
  if (input[5] == 'y') {
    func_227(input);
  }
  if (input[5] == 'l') {
    func_228(input);
  }
  if (input[5] == 'i') {
    func_230(input);
  }
}

void func_231(char *input) {}

void func_218(char *input) {
  if (input[4] == '=') {
    func_219(input);
  }
  if (input[4] == 'w') {
    func_220(input);
  }
  if (input[4] == 'v') {
    func_221(input);
  }
  if (input[4] == 'P') {
    func_222(input);
  }
  if (input[4] == ' ') {
    func_223(input);
  }
  if (input[4] == '"') {
    func_231(input);
  }
}

void func_233(char *input) {}

void func_235(char *input) {}

void func_236(char *input) {}

void func_237(char *input) {}

void func_238(char *input) {}

void func_239(char *input) {}

void func_234(char *input) {
  if (input[5] == 'C') {
    func_235(input);
  }
  if (input[5] == 'f') {
    func_236(input);
  }
  if (input[5] == 'g') {
    func_237(input);
  }
  if (input[5] == 'A') {
    func_238(input);
  }
  if (input[5] == 'p') {
    func_239(input);
  }
}

void func_241(char *input) {}

void func_242(char *input) {}

void func_243(char *input) {}

void func_240(char *input) {
  if (input[5] == 'l') {
    func_241(input);
  }
  if (input[5] == 's') {
    func_242(input);
  }
  if (input[5] == '-') {
    func_243(input);
  }
}

void func_244(char *input) {}

void func_246(char *input) {}

void func_247(char *input) {}

void func_245(char *input) {
  if (input[5] == '>') {
    func_246(input);
  }
  if (input[5] == ']') {
    func_247(input);
  }
}

void func_248(char *input) {}

void func_249(char *input) {}

void func_252(char *input) {}

void func_253(char *input) {}

void func_255(char *input) {}

void func_254(char *input) {
  if (input[7] == 'C') {
    func_255(input);
  }
}

void func_256(char *input) {}

void func_257(char *input) {}

void func_259(char *input) {}

void func_258(char *input) {
  if (input[7] == '$') {
    func_259(input);
  }
}

void func_260(char *input) {}

void func_261(char *input) {}

void func_262(char *input) {}

void func_251(char *input) {
  if (input[6] == 'n') {
    func_252(input);
  }
  if (input[6] == '5') {
    func_253(input);
  }
  if (input[6] == '=') {
    func_254(input);
  }
  if (input[6] == '|') {
    func_256(input);
  }
  if (input[6] == 'I') {
    func_257(input);
  }
  if (input[6] == 'w') {
    func_258(input);
  }
  if (input[6] == '3') {
    func_260(input);
  }
  if (input[6] == '1') {
    func_261(input);
  }
  if (input[6] == 'D') {
    func_262(input);
  }
}

void func_263(char *input) {}

void func_264(char *input) {}

void func_266(char *input) {}

void func_265(char *input) {
  if (input[6] == 'S') {
    func_266(input);
  }
}

void func_267(char *input) {}

void func_268(char *input) {}

void func_250(char *input) {
  if (input[5] == '4') {
    func_251(input);
  }
  if (input[5] == 'i') {
    func_263(input);
  }
  if (input[5] == '5') {
    func_264(input);
  }
  if (input[5] == 'W') {
    func_265(input);
  }
  if (input[5] == 'z') {
    func_267(input);
  }
  if (input[5] == 'u') {
    func_268(input);
  }
}

void func_270(char *input) {}

void func_271(char *input) {}

void func_272(char *input) {}

void func_274(char *input) {}

void func_275(char *input) {}

void func_276(char *input) {}

void func_277(char *input) {}

void func_278(char *input) {}

void func_279(char *input) {}

void func_280(char *input) {}

void func_281(char *input) {}

void func_282(char *input) {}

void func_283(char *input) {}

void func_273(char *input) {
  if (input[6] == 'b') {
    func_274(input);
  }
  if (input[6] == ' ') {
    func_275(input);
  }
  if (input[6] == 'r') {
    func_276(input);
  }
  if (input[6] == 'j') {
    func_277(input);
  }
  if (input[6] == ',') {
    func_278(input);
  }
  if (input[6] == 'Q') {
    func_279(input);
  }
  if (input[6] == 'R') {
    func_280(input);
  }
  if (input[6] == 'y') {
    func_281(input);
  }
  if (input[6] == '=') {
    func_282(input);
  }
  if (input[6] == '6') {
    func_283(input);
  }
}

void func_284(char *input) {}

void func_286(char *input) {}

void func_287(char *input) {}

void func_288(char *input) {}

void func_289(char *input) {}

void func_290(char *input) {}

void func_291(char *input) {}

void func_292(char *input) {}

void func_293(char *input) {}

void func_294(char *input) {}

void func_285(char *input) {
  if (input[6] == '&') {
    func_286(input);
  }
  if (input[6] == 'g') {
    func_287(input);
  }
  if (input[6] == 'z') {
    func_288(input);
  }
  if (input[6] == 'v') {
    func_289(input);
  }
  if (input[6] == '(') {
    func_290(input);
  }
  if (input[6] == 'F') {
    func_291(input);
  }
  if (input[6] == 'r') {
    func_292(input);
  }
  if (input[6] == '"') {
    func_293(input);
  }
  if (input[6] == '0') {
    func_294(input);
  }
}

void func_295(char *input) {}

void func_296(char *input) {}

void func_269(char *input) {
  if (input[5] == '^') {
    func_270(input);
  }
  if (input[5] == '4') {
    func_271(input);
  }
  if (input[5] == 'l') {
    func_272(input);
  }
  if (input[5] == 'X') {
    func_273(input);
  }
  if (input[5] == ']') {
    func_284(input);
  }
  if (input[5] == '-') {
    func_285(input);
  }
  if (input[5] == 'c') {
    func_295(input);
  }
  if (input[5] == '+') {
    func_296(input);
  }
}

void func_232(char *input) {
  if (input[4] == '8') {
    func_233(input);
  }
  if (input[4] == '-') {
    func_234(input);
  }
  if (input[4] == 'd') {
    func_240(input);
  }
  if (input[4] == 'l') {
    func_244(input);
  }
  if (input[4] == 'O') {
    func_245(input);
  }
  if (input[4] == 'S') {
    func_248(input);
  }
  if (input[4] == '.') {
    func_249(input);
  }
  if (input[4] == 'V') {
    func_250(input);
  }
  if (input[4] == 't') {
    func_269(input);
  }
}

void func_297(char *input) {}

void func_298(char *input) {}

void func_213(char *input) {
  if (input[3] == '_') {
    func_214(input);
  }
  if (input[3] == '+') {
    func_215(input);
  }
  if (input[3] == 'N') {
    func_216(input);
  }
  if (input[3] == 'A') {
    func_217(input);
  }
  if (input[3] == 'X') {
    func_218(input);
  }
  if (input[3] == 'J') {
    func_232(input);
  }
  if (input[3] == '"') {
    func_297(input);
  }
  if (input[3] == 'w') {
    func_298(input);
  }
}

void func_299(char *input) {}

void func_300(char *input) {}

void func_301(char *input) {}

void func_302(char *input) {}

void func_303(char *input) {}

void func_304(char *input) {}

void func_305(char *input) {}

void func_211(char *input) {
  if (input[2] == '`') {
    func_212(input);
  }
  if (input[2] == 'r') {
    func_213(input);
  }
  if (input[2] == '9') {
    func_299(input);
  }
  if (input[2] == '[') {
    func_300(input);
  }
  if (input[2] == 'I') {
    func_301(input);
  }
  if (input[2] == '$') {
    func_302(input);
  }
  if (input[2] == '<') {
    func_303(input);
  }
  if (input[2] == '@') {
    func_304(input);
  }
  if (input[2] == '2') {
    func_305(input);
  }
}

void func_306(char *input) {}

void func_307(char *input) {}

void func_308(char *input) {}

void func_309(char *input) {}

void func_310(char *input) {}

void target_1(char *input) {
  if (input[1] == '-') {
    func_211(input);
  }
  if (input[1] == '#') {
    func_306(input);
  }
  if (input[1] == 'V') {
    func_307(input);
  }
  if (input[1] == '@') {
    func_308(input);
  }
  if (input[1] == 'm') {
    func_309(input);
  }
  if (input[1] == 'J') {
    target_2(input);
  }
  if (input[1] == '4') {
    func_310(input);
  }
}

void func_311(char *input) {}

void func_312(char *input) {}

void func_314(char *input) {}

void func_315(char *input) {}

void func_316(char *input) {}

void func_317(char *input) {}

void func_318(char *input) {}

void func_321(char *input) {}

void func_322(char *input) {}

void func_323(char *input) {}

void func_320(char *input) {
  if (input[3] == '9') {
    func_321(input);
  }
  if (input[3] == 'F') {
    func_322(input);
  }
  if (input[3] == '1') {
    func_323(input);
  }
}

void func_324(char *input) {}

void func_325(char *input) {}

void func_326(char *input) {}

void func_327(char *input) {}

void func_328(char *input) {}

void func_329(char *input) {}

void func_330(char *input) {}

void func_319(char *input) {
  if (input[2] == 'k') {
    func_320(input);
  }
  if (input[2] == '4') {
    func_324(input);
  }
  if (input[2] == '<') {
    func_325(input);
  }
  if (input[2] == 'o') {
    func_326(input);
  }
  if (input[2] == 'L') {
    func_327(input);
  }
  if (input[2] == '}') {
    func_328(input);
  }
  if (input[2] == 'E') {
    func_329(input);
  }
  if (input[2] == 'a') {
    func_330(input);
  }
}

void func_331(char *input) {}

void func_313(char *input) {
  if (input[1] == 'D') {
    func_314(input);
  }
  if (input[1] == '3') {
    func_315(input);
  }
  if (input[1] == ':') {
    func_316(input);
  }
  if (input[1] == 'F') {
    func_317(input);
  }
  if (input[1] == 's') {
    func_318(input);
  }
  if (input[1] == 'n') {
    func_319(input);
  }
  if (input[1] == 'T') {
    func_331(input);
  }
}

void func_332(char *input) {}

void func_333(char *input) {}

void func_334(char *input) {}

void func_335(char *input) {}

void func_336(char *input) {}

void func_337(char *input) {}

void func_338(char *input) {}

#define BUFF_SIZE 128
int main(int argc, char **argv) {
  char input[BUFF_SIZE];
  read(STDIN_FILENO, input, BUFF_SIZE);
  if (input[0] == 'd') {
    func_311(input);
  }
  if (input[0] == 'N') {
    func_312(input);
  }
  if (input[0] == '_') {
    func_313(input);
  }
  if (input[0] == ':') {
    func_332(input);
  }
  if (input[0] == 'S') {
    func_333(input);
  }
  if (input[0] == 's') {
    func_334(input);
  }
  if (input[0] == '|') {
    func_335(input);
  }
  if (input[0] == '1') {
    func_336(input);
  }
  if (input[0] == 'p') {
    func_337(input);
  }
  if (input[0] == 'J') {
    target_1(input);
  }
  if (input[0] == 'G') {
    func_338(input);
  }
  return 0;
}