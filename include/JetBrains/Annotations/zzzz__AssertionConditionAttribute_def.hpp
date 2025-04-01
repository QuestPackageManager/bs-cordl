#pragma once
// IWYU pragma private; include "JetBrains/Annotations/AssertionConditionAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "JetBrains/Annotations/zzzz__AssertionConditionType_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(AssertionConditionAttribute)
namespace JetBrains::Annotations {
struct AssertionConditionType;
}
// Forward declare root types
namespace JetBrains::Annotations {
class AssertionConditionAttribute;
}
// Write type traits
MARK_REF_PTR_T(::JetBrains::Annotations::AssertionConditionAttribute);
// Dependencies JetBrains.Annotations.AssertionConditionType, System.Attribute
namespace JetBrains::Annotations {
// Is value type: false
// CS Name: JetBrains.Annotations.AssertionConditionAttribute
class CORDL_TYPE AssertionConditionAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_ConditionType, put = set_ConditionType)) ::JetBrains::Annotations::AssertionConditionType ConditionType;

  /// @brief Field <ConditionType>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__ConditionType_k__BackingField,
                      put = __cordl_internal_set__ConditionType_k__BackingField)) ::JetBrains::Annotations::AssertionConditionType _ConditionType_k__BackingField;

  static inline ::JetBrains::Annotations::AssertionConditionAttribute* New_ctor(::JetBrains::Annotations::AssertionConditionType conditionType);

  constexpr ::JetBrains::Annotations::AssertionConditionType const& __cordl_internal_get__ConditionType_k__BackingField() const;

  constexpr ::JetBrains::Annotations::AssertionConditionType& __cordl_internal_get__ConditionType_k__BackingField();

  constexpr void __cordl_internal_set__ConditionType_k__BackingField(::JetBrains::Annotations::AssertionConditionType value);

  /// @brief Method .ctor, addr 0x4aeda90, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::JetBrains::Annotations::AssertionConditionType conditionType);

  /// @brief Method get_ConditionType, addr 0x4aedab8, size 0x8, virtual false, abstract: false, final false
  inline ::JetBrains::Annotations::AssertionConditionType get_ConditionType();

  /// @brief Method set_ConditionType, addr 0x4aedac0, size 0x8, virtual false, abstract: false, final false
  inline void set_ConditionType(::JetBrains::Annotations::AssertionConditionType value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssertionConditionAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AssertionConditionAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssertionConditionAttribute(AssertionConditionAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssertionConditionAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssertionConditionAttribute(AssertionConditionAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18501 };

  /// @brief Field <ConditionType>k__BackingField, offset: 0x10, size: 0x4, def value: None
  ::JetBrains::Annotations::AssertionConditionType ____ConditionType_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JetBrains::Annotations::AssertionConditionAttribute, ____ConditionType_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::AssertionConditionAttribute, 0x18>, "Size mismatch!");

} // namespace JetBrains::Annotations
NEED_NO_BOX(::JetBrains::Annotations::AssertionConditionAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::AssertionConditionAttribute*, "JetBrains.Annotations", "AssertionConditionAttribute");
