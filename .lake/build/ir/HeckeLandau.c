// Lean compiler output
// Module: HeckeLandau
// Imports: public import Init public meta import Init public import Mathlib
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesIdent(lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_hecke_x2dlandau___private_HeckeLandau_0__term_U0001d4aa__K___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* lp_hecke_x2dlandau___private_HeckeLandau_0__term_U0001d4aa__K___closed__0 = (const lean_object*)&lp_hecke_x2dlandau___private_HeckeLandau_0__term_U0001d4aa__K___closed__0_value;
static const lean_ctor_object lp_hecke_x2dlandau___private_HeckeLandau_0__term_U0001d4aa__K___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_hecke_x2dlandau___private_HeckeLandau_0__term_U0001d4aa__K___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* lp_hecke_x2dlandau___private_HeckeLandau_0__term_U0001d4aa__K___closed__1 = (const lean_object*)&lp_hecke_x2dlandau___private_HeckeLandau_0__term_U0001d4aa__K___closed__1_value;
static const lean_string_object lp_hecke_x2dlandau___private_HeckeLandau_0__term_U0001d4aa__K___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "HeckeLandau"};
static const lean_object* lp_hecke_x2dlandau___private_HeckeLandau_0__term_U0001d4aa__K___closed__2 = (const lean_object*)&lp_hecke_x2dlandau___private_HeckeLandau_0__term_U0001d4aa__K___closed__2_value;
static const lean_ctor_object lp_hecke_x2dlandau___private_HeckeLandau_0__term_U0001d4aa__K___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_hecke_x2dlandau___private_HeckeLandau_0__term_U0001d4aa__K___closed__1_value),((lean_object*)&lp_hecke_x2dlandau___private_HeckeLandau_0__term_U0001d4aa__K___closed__2_value),LEAN_SCALAR_PTR_LITERAL(187, 77, 16, 41, 204, 17, 234, 43)}};
static const lean_object* lp_hecke_x2dlandau___private_HeckeLandau_0__term_U0001d4aa__K___closed__3 = (const lean_object*)&lp_hecke_x2dlandau___private_HeckeLandau_0__term_U0001d4aa__K___closed__3_value;
static const lean_ctor_object lp_hecke_x2dlandau___private_HeckeLandau_0__term_U0001d4aa__K___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&lp_hecke_x2dlandau___private_HeckeLandau_0__term_U0001d4aa__K___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(198, 108, 176, 108, 221, 210, 71, 141)}};
static const lean_object* lp_hecke_x2dlandau___private_HeckeLandau_0__term_U0001d4aa__K___closed__4 = (const lean_object*)&lp_hecke_x2dlandau___private_HeckeLandau_0__term_U0001d4aa__K___closed__4_value;
static const lean_string_object lp_hecke_x2dlandau___private_HeckeLandau_0__term_U0001d4aa__K___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 7, .m_data = "term𝒪_K"};
static const lean_object* lp_hecke_x2dlandau___private_HeckeLandau_0__term_U0001d4aa__K___closed__5 = (const lean_object*)&lp_hecke_x2dlandau___private_HeckeLandau_0__term_U0001d4aa__K___closed__5_value;
static const lean_ctor_object lp_hecke_x2dlandau___private_HeckeLandau_0__term_U0001d4aa__K___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_hecke_x2dlandau___private_HeckeLandau_0__term_U0001d4aa__K___closed__4_value),((lean_object*)&lp_hecke_x2dlandau___private_HeckeLandau_0__term_U0001d4aa__K___closed__5_value),LEAN_SCALAR_PTR_LITERAL(24, 147, 128, 236, 42, 114, 100, 118)}};
static const lean_object* lp_hecke_x2dlandau___private_HeckeLandau_0__term_U0001d4aa__K___closed__6 = (const lean_object*)&lp_hecke_x2dlandau___private_HeckeLandau_0__term_U0001d4aa__K___closed__6_value;
static const lean_string_object lp_hecke_x2dlandau___private_HeckeLandau_0__term_U0001d4aa__K___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 3, .m_data = "𝒪_K"};
static const lean_object* lp_hecke_x2dlandau___private_HeckeLandau_0__term_U0001d4aa__K___closed__7 = (const lean_object*)&lp_hecke_x2dlandau___private_HeckeLandau_0__term_U0001d4aa__K___closed__7_value;
static const lean_ctor_object lp_hecke_x2dlandau___private_HeckeLandau_0__term_U0001d4aa__K___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&lp_hecke_x2dlandau___private_HeckeLandau_0__term_U0001d4aa__K___closed__7_value)}};
static const lean_object* lp_hecke_x2dlandau___private_HeckeLandau_0__term_U0001d4aa__K___closed__8 = (const lean_object*)&lp_hecke_x2dlandau___private_HeckeLandau_0__term_U0001d4aa__K___closed__8_value;
static const lean_ctor_object lp_hecke_x2dlandau___private_HeckeLandau_0__term_U0001d4aa__K___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&lp_hecke_x2dlandau___private_HeckeLandau_0__term_U0001d4aa__K___closed__6_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&lp_hecke_x2dlandau___private_HeckeLandau_0__term_U0001d4aa__K___closed__8_value)}};
static const lean_object* lp_hecke_x2dlandau___private_HeckeLandau_0__term_U0001d4aa__K___closed__9 = (const lean_object*)&lp_hecke_x2dlandau___private_HeckeLandau_0__term_U0001d4aa__K___closed__9_value;
LEAN_EXPORT const lean_object* lp_hecke_x2dlandau___private_HeckeLandau_0__term_U0001d4aa__K = (const lean_object*)&lp_hecke_x2dlandau___private_HeckeLandau_0__term_U0001d4aa__K___closed__9_value;
static const lean_string_object lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__0 = (const lean_object*)&lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__0_value;
static const lean_string_object lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__1 = (const lean_object*)&lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__1_value;
static const lean_string_object lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__2 = (const lean_object*)&lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__2_value;
static const lean_string_object lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__3 = (const lean_object*)&lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__3_value;
static const lean_ctor_object lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__4_value_aux_0),((lean_object*)&lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__4_value_aux_1),((lean_object*)&lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__4_value_aux_2),((lean_object*)&lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__4 = (const lean_object*)&lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__4_value;
static const lean_string_object lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "NumberField.RingOfIntegers"};
static const lean_object* lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__5 = (const lean_object*)&lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__5_value;
static lean_once_cell_t lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__6;
static const lean_string_object lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "NumberField"};
static const lean_object* lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__7 = (const lean_object*)&lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__7_value;
static const lean_string_object lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "RingOfIntegers"};
static const lean_object* lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__8 = (const lean_object*)&lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__8_value;
static const lean_ctor_object lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(55, 203, 65, 122, 201, 69, 101, 228)}};
static const lean_ctor_object lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__9_value_aux_0),((lean_object*)&lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__8_value),LEAN_SCALAR_PTR_LITERAL(252, 130, 8, 27, 22, 126, 83, 217)}};
static const lean_object* lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__9 = (const lean_object*)&lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__9_value;
static const lean_ctor_object lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__9_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__10 = (const lean_object*)&lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__10_value;
static const lean_ctor_object lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__9_value)}};
static const lean_object* lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__11 = (const lean_object*)&lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__11_value;
static const lean_ctor_object lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__11_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__12 = (const lean_object*)&lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__12_value;
static const lean_ctor_object lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__10_value),((lean_object*)&lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__12_value)}};
static const lean_object* lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__13 = (const lean_object*)&lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__13_value;
static const lean_string_object lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__14 = (const lean_object*)&lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__14_value;
static const lean_ctor_object lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__14_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__15 = (const lean_object*)&lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__15_value;
static const lean_string_object lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "K"};
static const lean_object* lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__16 = (const lean_object*)&lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__16_value;
static lean_once_cell_t lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__17;
static const lean_ctor_object lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__16_value),LEAN_SCALAR_PTR_LITERAL(172, 5, 232, 185, 185, 3, 202, 197)}};
static const lean_object* lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__18 = (const lean_object*)&lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__18_value;
static const lean_ctor_object lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__16_value),LEAN_SCALAR_PTR_LITERAL(172, 5, 232, 185, 185, 3, 202, 197)}};
static const lean_object* lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__19 = (const lean_object*)&lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__19_value;
static const lean_string_object lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__20 = (const lean_object*)&lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__20_value;
static const lean_ctor_object lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__19_value),((lean_object*)&lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__20_value),LEAN_SCALAR_PTR_LITERAL(5, 188, 214, 60, 13, 237, 90, 109)}};
static const lean_object* lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__21 = (const lean_object*)&lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__21_value;
static const lean_ctor_object lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__21_value),((lean_object*)&lp_hecke_x2dlandau___private_HeckeLandau_0__term_U0001d4aa__K___closed__2_value),LEAN_SCALAR_PTR_LITERAL(113, 48, 23, 185, 140, 181, 35, 188)}};
static const lean_object* lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__22 = (const lean_object*)&lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__22_value;
static lean_once_cell_t lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__23;
static const lean_string_object lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__24 = (const lean_object*)&lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__24_value;
static lean_once_cell_t lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__25;
static const lean_string_object lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__26 = (const lean_object*)&lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__26_value;
static lean_once_cell_t lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__27;
static lean_once_cell_t lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__28;
static lean_once_cell_t lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__29;
static lean_once_cell_t lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__30;
LEAN_EXPORT lean_object* lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______unexpand__NumberField__RingOfIntegers__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______unexpand__NumberField__RingOfIntegers__1___closed__0 = (const lean_object*)&lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______unexpand__NumberField__RingOfIntegers__1___closed__0_value;
static const lean_ctor_object lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______unexpand__NumberField__RingOfIntegers__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______unexpand__NumberField__RingOfIntegers__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______unexpand__NumberField__RingOfIntegers__1___closed__1 = (const lean_object*)&lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______unexpand__NumberField__RingOfIntegers__1___closed__1_value;
LEAN_EXPORT lean_object* lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______unexpand__NumberField__RingOfIntegers__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______unexpand__NumberField__RingOfIntegers__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* _init_lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__6(void){
_start:
{
lean_object* v___x_34_; lean_object* v___x_35_; 
v___x_34_ = ((lean_object*)(lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__5));
v___x_35_ = l_String_toRawSubstring_x27(v___x_34_);
return v___x_35_;
}
}
static lean_object* _init_lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__17(void){
_start:
{
lean_object* v___x_56_; lean_object* v___x_57_; 
v___x_56_ = ((lean_object*)(lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__16));
v___x_57_ = l_String_toRawSubstring_x27(v___x_56_);
return v___x_57_;
}
}
static lean_object* _init_lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__23(void){
_start:
{
lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; 
v___x_70_ = lean_unsigned_to_nat(3532148991u);
v___x_71_ = ((lean_object*)(lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__22));
v___x_72_ = l_Lean_Name_num___override(v___x_71_, v___x_70_);
return v___x_72_;
}
}
static lean_object* _init_lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__25(void){
_start:
{
lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; 
v___x_74_ = ((lean_object*)(lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__24));
v___x_75_ = lean_obj_once(&lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__23, &lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__23_once, _init_lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__23);
v___x_76_ = l_Lean_Name_str___override(v___x_75_, v___x_74_);
return v___x_76_;
}
}
static lean_object* _init_lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__27(void){
_start:
{
lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; 
v___x_78_ = ((lean_object*)(lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__26));
v___x_79_ = lean_obj_once(&lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__25, &lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__25_once, _init_lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__25);
v___x_80_ = l_Lean_Name_str___override(v___x_79_, v___x_78_);
return v___x_80_;
}
}
static lean_object* _init_lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__28(void){
_start:
{
lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; 
v___x_81_ = lean_unsigned_to_nat(10u);
v___x_82_ = lean_obj_once(&lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__27, &lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__27_once, _init_lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__27);
v___x_83_ = l_Lean_Name_num___override(v___x_82_, v___x_81_);
return v___x_83_;
}
}
static lean_object* _init_lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__29(void){
_start:
{
lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; 
v___x_84_ = lean_box(0);
v___x_85_ = lean_obj_once(&lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__28, &lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__28_once, _init_lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__28);
v___x_86_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_86_, 0, v___x_85_);
lean_ctor_set(v___x_86_, 1, v___x_84_);
return v___x_86_;
}
}
static lean_object* _init_lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__30(void){
_start:
{
lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; 
v___x_87_ = lean_box(0);
v___x_88_ = lean_obj_once(&lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__29, &lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__29_once, _init_lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__29);
v___x_89_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_89_, 0, v___x_88_);
lean_ctor_set(v___x_89_, 1, v___x_87_);
return v___x_89_;
}
}
LEAN_EXPORT lean_object* lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1(lean_object* v_x_90_, lean_object* v_a_91_, lean_object* v_a_92_){
_start:
{
lean_object* v___x_93_; uint8_t v___x_94_; 
v___x_93_ = ((lean_object*)(lp_hecke_x2dlandau___private_HeckeLandau_0__term_U0001d4aa__K___closed__6));
v___x_94_ = l_Lean_Syntax_isOfKind(v_x_90_, v___x_93_);
if (v___x_94_ == 0)
{
lean_object* v___x_95_; lean_object* v___x_96_; 
v___x_95_ = lean_box(1);
v___x_96_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_96_, 0, v___x_95_);
lean_ctor_set(v___x_96_, 1, v_a_92_);
return v___x_96_;
}
else
{
lean_object* v_quotContext_97_; lean_object* v_currMacroScope_98_; lean_object* v_ref_99_; uint8_t v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; 
v_quotContext_97_ = lean_ctor_get(v_a_91_, 1);
v_currMacroScope_98_ = lean_ctor_get(v_a_91_, 2);
v_ref_99_ = lean_ctor_get(v_a_91_, 5);
v___x_100_ = 0;
v___x_101_ = l_Lean_SourceInfo_fromRef(v_ref_99_, v___x_100_);
v___x_102_ = ((lean_object*)(lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__4));
v___x_103_ = lean_obj_once(&lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__6, &lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__6_once, _init_lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__6);
v___x_104_ = ((lean_object*)(lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__9));
lean_inc_n(v_currMacroScope_98_, 2);
lean_inc_n(v_quotContext_97_, 2);
v___x_105_ = l_Lean_addMacroScope(v_quotContext_97_, v___x_104_, v_currMacroScope_98_);
v___x_106_ = ((lean_object*)(lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__13));
lean_inc_n(v___x_101_, 3);
v___x_107_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_107_, 0, v___x_101_);
lean_ctor_set(v___x_107_, 1, v___x_103_);
lean_ctor_set(v___x_107_, 2, v___x_105_);
lean_ctor_set(v___x_107_, 3, v___x_106_);
v___x_108_ = ((lean_object*)(lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__15));
v___x_109_ = lean_obj_once(&lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__17, &lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__17_once, _init_lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__17);
v___x_110_ = ((lean_object*)(lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__18));
v___x_111_ = l_Lean_addMacroScope(v_quotContext_97_, v___x_110_, v_currMacroScope_98_);
v___x_112_ = lean_obj_once(&lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__30, &lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__30_once, _init_lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__30);
v___x_113_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_113_, 0, v___x_101_);
lean_ctor_set(v___x_113_, 1, v___x_109_);
lean_ctor_set(v___x_113_, 2, v___x_111_);
lean_ctor_set(v___x_113_, 3, v___x_112_);
v___x_114_ = l_Lean_Syntax_node1(v___x_101_, v___x_108_, v___x_113_);
v___x_115_ = l_Lean_Syntax_node2(v___x_101_, v___x_102_, v___x_107_, v___x_114_);
v___x_116_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_116_, 0, v___x_115_);
lean_ctor_set(v___x_116_, 1, v_a_92_);
return v___x_116_;
}
}
}
LEAN_EXPORT lean_object* lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___boxed(lean_object* v_x_117_, lean_object* v_a_118_, lean_object* v_a_119_){
_start:
{
lean_object* v_res_120_; 
v_res_120_ = lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1(v_x_117_, v_a_118_, v_a_119_);
lean_dec_ref(v_a_118_);
return v_res_120_;
}
}
LEAN_EXPORT lean_object* lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______unexpand__NumberField__RingOfIntegers__1(lean_object* v_x_124_, lean_object* v_a_125_, lean_object* v_a_126_){
_start:
{
lean_object* v___x_127_; uint8_t v___x_128_; 
v___x_127_ = ((lean_object*)(lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__4));
lean_inc(v_x_124_);
v___x_128_ = l_Lean_Syntax_isOfKind(v_x_124_, v___x_127_);
if (v___x_128_ == 0)
{
lean_object* v___x_129_; lean_object* v___x_130_; 
lean_dec(v_x_124_);
v___x_129_ = lean_box(0);
v___x_130_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_130_, 0, v___x_129_);
lean_ctor_set(v___x_130_, 1, v_a_126_);
return v___x_130_;
}
else
{
lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; uint8_t v___x_134_; 
v___x_131_ = lean_unsigned_to_nat(0u);
v___x_132_ = l_Lean_Syntax_getArg(v_x_124_, v___x_131_);
v___x_133_ = ((lean_object*)(lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______unexpand__NumberField__RingOfIntegers__1___closed__1));
lean_inc(v___x_132_);
v___x_134_ = l_Lean_Syntax_isOfKind(v___x_132_, v___x_133_);
if (v___x_134_ == 0)
{
lean_object* v___x_135_; lean_object* v___x_136_; 
lean_dec(v___x_132_);
lean_dec(v_x_124_);
v___x_135_ = lean_box(0);
v___x_136_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_136_, 0, v___x_135_);
lean_ctor_set(v___x_136_, 1, v_a_126_);
return v___x_136_;
}
else
{
lean_object* v___x_137_; lean_object* v___x_138_; uint8_t v___x_139_; 
v___x_137_ = lean_unsigned_to_nat(1u);
v___x_138_ = l_Lean_Syntax_getArg(v_x_124_, v___x_137_);
lean_dec(v_x_124_);
lean_inc(v___x_138_);
v___x_139_ = l_Lean_Syntax_matchesNull(v___x_138_, v___x_137_);
if (v___x_139_ == 0)
{
lean_object* v___x_140_; lean_object* v___x_141_; 
lean_dec(v___x_138_);
lean_dec(v___x_132_);
v___x_140_ = lean_box(0);
v___x_141_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_141_, 0, v___x_140_);
lean_ctor_set(v___x_141_, 1, v_a_126_);
return v___x_141_;
}
else
{
lean_object* v___x_142_; lean_object* v___x_143_; uint8_t v___x_144_; 
v___x_142_ = l_Lean_Syntax_getArg(v___x_138_, v___x_131_);
lean_dec(v___x_138_);
v___x_143_ = ((lean_object*)(lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______macroRules____private__HeckeLandau__0__term_U0001d4aa__K__1___closed__18));
v___x_144_ = l_Lean_Syntax_matchesIdent(v___x_142_, v___x_143_);
lean_dec(v___x_142_);
if (v___x_144_ == 0)
{
lean_object* v___x_145_; lean_object* v___x_146_; 
lean_dec(v___x_132_);
v___x_145_ = lean_box(0);
v___x_146_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_146_, 0, v___x_145_);
lean_ctor_set(v___x_146_, 1, v_a_126_);
return v___x_146_;
}
else
{
lean_object* v_ref_147_; uint8_t v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; 
v_ref_147_ = l_Lean_replaceRef(v___x_132_, v_a_125_);
lean_dec(v___x_132_);
v___x_148_ = 0;
v___x_149_ = l_Lean_SourceInfo_fromRef(v_ref_147_, v___x_148_);
lean_dec(v_ref_147_);
v___x_150_ = ((lean_object*)(lp_hecke_x2dlandau___private_HeckeLandau_0__term_U0001d4aa__K___closed__6));
v___x_151_ = ((lean_object*)(lp_hecke_x2dlandau___private_HeckeLandau_0__term_U0001d4aa__K___closed__7));
lean_inc(v___x_149_);
v___x_152_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_152_, 0, v___x_149_);
lean_ctor_set(v___x_152_, 1, v___x_151_);
v___x_153_ = l_Lean_Syntax_node1(v___x_149_, v___x_150_, v___x_152_);
v___x_154_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_154_, 0, v___x_153_);
lean_ctor_set(v___x_154_, 1, v_a_126_);
return v___x_154_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______unexpand__NumberField__RingOfIntegers__1___boxed(lean_object* v_x_155_, lean_object* v_a_156_, lean_object* v_a_157_){
_start:
{
lean_object* v_res_158_; 
v_res_158_ = lp_hecke_x2dlandau___private_HeckeLandau_0____aux__HeckeLandau______unexpand__NumberField__RingOfIntegers__1(v_x_155_, v_a_156_, v_a_157_);
lean_dec(v_a_156_);
return v_res_158_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_hecke_x2dlandau_HeckeLandau(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_mathlib_Mathlib(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
