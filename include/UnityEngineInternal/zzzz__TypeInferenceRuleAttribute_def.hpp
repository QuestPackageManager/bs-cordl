#pragma once
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
// Type: UnityEngineInternal::TypeInferenceRuleAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngineInternal {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2545))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9890))
// CS Name: ::UnityEngineInternal::TypeInferenceRuleAttribute*
class CORDL_TYPE TypeInferenceRuleAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field _rule, offset 0x10, size 0x8
  __declspec(property(get = __get__rule, put = __set__rule))::StringW _rule;

  constexpr ::StringW& __get__rule();

  constexpr ::StringW const& __get__rule() const;

  constexpr void __set__rule(::StringW value);

  static inline ::UnityEngineInternal::TypeInferenceRuleAttribute* New_ctor(::UnityEngineInternal::TypeInferenceRules rule);

  /// @brief Method .ctor addr 0x2b387dc size 0x84 virtual false final false
  inline void _ctor(::UnityEngineInternal::TypeInferenceRules rule);

  static inline ::UnityEngineInternal::TypeInferenceRuleAttribute* New_ctor(::StringW rule);

  /// @brief Method .ctor addr 0x2b38860 size 0x28 virtual false final false
  inline void _ctor(::StringW rule);

  /// @brief Method ToString addr 0x2b38888 size 0x8 virtual true final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "", ty: "TypeInferenceRuleAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeInferenceRuleAttribute(TypeInferenceRuleAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeInferenceRuleAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeInferenceRuleAttribute(TypeInferenceRuleAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeInferenceRuleAttribute();

public:
  /// @brief Field _rule, offset: 0x10, size: 0x8, def value: None
  ::StringW ____rule;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngineInternal::TypeInferenceRuleAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngineInternal::TypeInferenceRuleAttribute, ____rule) == 0x10, "Offset mismatch!");

} // namespace UnityEngineInternal
NEED_NO_BOX(::UnityEngineInternal::TypeInferenceRuleAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngineInternal::TypeInferenceRuleAttribute*, "UnityEngineInternal", "TypeInferenceRuleAttribute");
