#pragma once
// IWYU pragma private; include "System/Linq/Expressions/CachedReflectionInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CachedReflectionInfo)
namespace System::Reflection {
class MethodInfo;
}
// Forward declare root types
namespace System::Linq::Expressions {
class CachedReflectionInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::CachedReflectionInfo);
// Dependencies System.Object
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: System.Linq.Expressions.CachedReflectionInfo
class CORDL_TYPE CachedReflectionInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_CallSiteOps_AddRule, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_CallSiteOps_AddRule, put = setStaticF_s_CallSiteOps_AddRule)) ::System::Reflection::MethodInfo* s_CallSiteOps_AddRule;

  /// @brief Field s_CallSiteOps_Bind, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_CallSiteOps_Bind, put = setStaticF_s_CallSiteOps_Bind)) ::System::Reflection::MethodInfo* s_CallSiteOps_Bind;

  /// @brief Field s_CallSiteOps_ClearMatch, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_CallSiteOps_ClearMatch, put = setStaticF_s_CallSiteOps_ClearMatch)) ::System::Reflection::MethodInfo* s_CallSiteOps_ClearMatch;

  /// @brief Field s_CallSiteOps_CreateMatchmaker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_CallSiteOps_CreateMatchmaker, put = setStaticF_s_CallSiteOps_CreateMatchmaker)) ::System::Reflection::MethodInfo* s_CallSiteOps_CreateMatchmaker;

  /// @brief Field s_CallSiteOps_GetCachedRules, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_CallSiteOps_GetCachedRules, put = setStaticF_s_CallSiteOps_GetCachedRules)) ::System::Reflection::MethodInfo* s_CallSiteOps_GetCachedRules;

  /// @brief Field s_CallSiteOps_GetMatch, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_CallSiteOps_GetMatch, put = setStaticF_s_CallSiteOps_GetMatch)) ::System::Reflection::MethodInfo* s_CallSiteOps_GetMatch;

  /// @brief Field s_CallSiteOps_GetRuleCache, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_CallSiteOps_GetRuleCache, put = setStaticF_s_CallSiteOps_GetRuleCache)) ::System::Reflection::MethodInfo* s_CallSiteOps_GetRuleCache;

  /// @brief Field s_CallSiteOps_GetRules, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_CallSiteOps_GetRules, put = setStaticF_s_CallSiteOps_GetRules)) ::System::Reflection::MethodInfo* s_CallSiteOps_GetRules;

  /// @brief Field s_CallSiteOps_MoveRule, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_CallSiteOps_MoveRule, put = setStaticF_s_CallSiteOps_MoveRule)) ::System::Reflection::MethodInfo* s_CallSiteOps_MoveRule;

  /// @brief Field s_CallSiteOps_SetNotMatched, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_CallSiteOps_SetNotMatched, put = setStaticF_s_CallSiteOps_SetNotMatched)) ::System::Reflection::MethodInfo* s_CallSiteOps_SetNotMatched;

  /// @brief Field s_CallSiteOps_UpdateRules, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_CallSiteOps_UpdateRules, put = setStaticF_s_CallSiteOps_UpdateRules)) ::System::Reflection::MethodInfo* s_CallSiteOps_UpdateRules;

  /// @brief Field s_Math_Pow_Double_Double, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Math_Pow_Double_Double, put = setStaticF_s_Math_Pow_Double_Double)) ::System::Reflection::MethodInfo* s_Math_Pow_Double_Double;

  /// @brief Field s_String_op_Equality_String_String, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_String_op_Equality_String_String, put = setStaticF_s_String_op_Equality_String_String)) ::System::Reflection::MethodInfo* s_String_op_Equality_String_String;

  static inline ::System::Reflection::MethodInfo* getStaticF_s_CallSiteOps_AddRule();

  static inline ::System::Reflection::MethodInfo* getStaticF_s_CallSiteOps_Bind();

  static inline ::System::Reflection::MethodInfo* getStaticF_s_CallSiteOps_ClearMatch();

  static inline ::System::Reflection::MethodInfo* getStaticF_s_CallSiteOps_CreateMatchmaker();

  static inline ::System::Reflection::MethodInfo* getStaticF_s_CallSiteOps_GetCachedRules();

  static inline ::System::Reflection::MethodInfo* getStaticF_s_CallSiteOps_GetMatch();

  static inline ::System::Reflection::MethodInfo* getStaticF_s_CallSiteOps_GetRuleCache();

  static inline ::System::Reflection::MethodInfo* getStaticF_s_CallSiteOps_GetRules();

  static inline ::System::Reflection::MethodInfo* getStaticF_s_CallSiteOps_MoveRule();

  static inline ::System::Reflection::MethodInfo* getStaticF_s_CallSiteOps_SetNotMatched();

  static inline ::System::Reflection::MethodInfo* getStaticF_s_CallSiteOps_UpdateRules();

  static inline ::System::Reflection::MethodInfo* getStaticF_s_Math_Pow_Double_Double();

  static inline ::System::Reflection::MethodInfo* getStaticF_s_String_op_Equality_String_String();

  /// @brief Method get_CallSiteOps_AddRule, addr 0x40918ec, size 0xc8, virtual false, abstract: false, final false
  static inline ::System::Reflection::MethodInfo* get_CallSiteOps_AddRule();

  /// @brief Method get_CallSiteOps_Bind, addr 0x4091a7c, size 0xc8, virtual false, abstract: false, final false
  static inline ::System::Reflection::MethodInfo* get_CallSiteOps_Bind();

  /// @brief Method get_CallSiteOps_ClearMatch, addr 0x4091504, size 0xc8, virtual false, abstract: false, final false
  static inline ::System::Reflection::MethodInfo* get_CallSiteOps_ClearMatch();

  /// @brief Method get_CallSiteOps_CreateMatchmaker, addr 0x4091374, size 0xc8, virtual false, abstract: false, final false
  static inline ::System::Reflection::MethodInfo* get_CallSiteOps_CreateMatchmaker();

  /// @brief Method get_CallSiteOps_GetCachedRules, addr 0x4091824, size 0xc8, virtual false, abstract: false, final false
  static inline ::System::Reflection::MethodInfo* get_CallSiteOps_GetCachedRules();

  /// @brief Method get_CallSiteOps_GetMatch, addr 0x409143c, size 0xc8, virtual false, abstract: false, final false
  static inline ::System::Reflection::MethodInfo* get_CallSiteOps_GetMatch();

  /// @brief Method get_CallSiteOps_GetRuleCache, addr 0x409175c, size 0xc8, virtual false, abstract: false, final false
  static inline ::System::Reflection::MethodInfo* get_CallSiteOps_GetRuleCache();

  /// @brief Method get_CallSiteOps_GetRules, addr 0x4091694, size 0xc8, virtual false, abstract: false, final false
  static inline ::System::Reflection::MethodInfo* get_CallSiteOps_GetRules();

  /// @brief Method get_CallSiteOps_MoveRule, addr 0x40919b4, size 0xc8, virtual false, abstract: false, final false
  static inline ::System::Reflection::MethodInfo* get_CallSiteOps_MoveRule();

  /// @brief Method get_CallSiteOps_SetNotMatched, addr 0x40912ac, size 0xc8, virtual false, abstract: false, final false
  static inline ::System::Reflection::MethodInfo* get_CallSiteOps_SetNotMatched();

  /// @brief Method get_CallSiteOps_UpdateRules, addr 0x40915cc, size 0xc8, virtual false, abstract: false, final false
  static inline ::System::Reflection::MethodInfo* get_CallSiteOps_UpdateRules();

  /// @brief Method get_Math_Pow_Double_Double, addr 0x4091ccc, size 0x19c, virtual false, abstract: false, final false
  static inline ::System::Reflection::MethodInfo* get_Math_Pow_Double_Double();

  /// @brief Method get_String_op_Equality_String_String, addr 0x4091b44, size 0x188, virtual false, abstract: false, final false
  static inline ::System::Reflection::MethodInfo* get_String_op_Equality_String_String();

  static inline void setStaticF_s_CallSiteOps_AddRule(::System::Reflection::MethodInfo* value);

  static inline void setStaticF_s_CallSiteOps_Bind(::System::Reflection::MethodInfo* value);

  static inline void setStaticF_s_CallSiteOps_ClearMatch(::System::Reflection::MethodInfo* value);

  static inline void setStaticF_s_CallSiteOps_CreateMatchmaker(::System::Reflection::MethodInfo* value);

  static inline void setStaticF_s_CallSiteOps_GetCachedRules(::System::Reflection::MethodInfo* value);

  static inline void setStaticF_s_CallSiteOps_GetMatch(::System::Reflection::MethodInfo* value);

  static inline void setStaticF_s_CallSiteOps_GetRuleCache(::System::Reflection::MethodInfo* value);

  static inline void setStaticF_s_CallSiteOps_GetRules(::System::Reflection::MethodInfo* value);

  static inline void setStaticF_s_CallSiteOps_MoveRule(::System::Reflection::MethodInfo* value);

  static inline void setStaticF_s_CallSiteOps_SetNotMatched(::System::Reflection::MethodInfo* value);

  static inline void setStaticF_s_CallSiteOps_UpdateRules(::System::Reflection::MethodInfo* value);

  static inline void setStaticF_s_Math_Pow_Double_Double(::System::Reflection::MethodInfo* value);

  static inline void setStaticF_s_String_op_Equality_String_String(::System::Reflection::MethodInfo* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CachedReflectionInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CachedReflectionInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CachedReflectionInfo(CachedReflectionInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CachedReflectionInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CachedReflectionInfo(CachedReflectionInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13606 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::CachedReflectionInfo, 0x10>, "Size mismatch!");

} // namespace System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::CachedReflectionInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::CachedReflectionInfo*, "System.Linq.Expressions", "CachedReflectionInfo");
