#pragma once
// IWYU pragma private; include "UnityEngineInternal/TypeInferenceRuleAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TypeInferenceRuleAttribute)
namespace UnityEngineInternal {
struct TypeInferenceRules;
}
// Forward declare root types
namespace UnityEngineInternal {
class TypeInferenceRuleAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngineInternal::TypeInferenceRuleAttribute);
// Dependencies System.Attribute
namespace UnityEngineInternal {
// Is value type: false
// CS Name: UnityEngineInternal.TypeInferenceRuleAttribute
class CORDL_TYPE TypeInferenceRuleAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field _rule, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__rule, put = __cordl_internal_set__rule)) ::StringW _rule;

  static inline ::UnityEngineInternal::TypeInferenceRuleAttribute* New_ctor(::StringW rule);

  static inline ::UnityEngineInternal::TypeInferenceRuleAttribute* New_ctor(::UnityEngineInternal::TypeInferenceRules rule);

  /// @brief Method ToString, addr 0x485fb28, size 0x8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::StringW const& __cordl_internal_get__rule() const;

  constexpr ::StringW& __cordl_internal_get__rule();

  constexpr void __cordl_internal_set__rule(::StringW value);

  /// @brief Method .ctor, addr 0x485fb00, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW rule);

  /// @brief Method .ctor, addr 0x485fa7c, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngineInternal::TypeInferenceRules rule);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeInferenceRuleAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TypeInferenceRuleAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeInferenceRuleAttribute(TypeInferenceRuleAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeInferenceRuleAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeInferenceRuleAttribute(TypeInferenceRuleAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10541 };

  /// @brief Field _rule, offset: 0x10, size: 0x8, def value: None
  ::StringW ____rule;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngineInternal::TypeInferenceRuleAttribute, ____rule) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngineInternal::TypeInferenceRuleAttribute, 0x18>, "Size mismatch!");

} // namespace UnityEngineInternal
NEED_NO_BOX(::UnityEngineInternal::TypeInferenceRuleAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngineInternal::TypeInferenceRuleAttribute*, "UnityEngineInternal", "TypeInferenceRuleAttribute");
