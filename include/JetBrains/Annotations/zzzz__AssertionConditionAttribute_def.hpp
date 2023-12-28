#pragma once
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
// Type: JetBrains.Annotations::AssertionConditionAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547)), TypeDefinitionIndex(TypeDefinitionIndex(15787))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15786))
// CS Name: ::JetBrains.Annotations::AssertionConditionAttribute*
class CORDL_TYPE AssertionConditionAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field <ConditionType>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __get__ConditionType_k__BackingField, put = __set__ConditionType_k__BackingField))::JetBrains::Annotations::AssertionConditionType _ConditionType_k__BackingField;

  __declspec(property(get = get_ConditionType, put = set_ConditionType))::JetBrains::Annotations::AssertionConditionType ConditionType;

  constexpr ::JetBrains::Annotations::AssertionConditionType& __get__ConditionType_k__BackingField();

  constexpr ::JetBrains::Annotations::AssertionConditionType const& __get__ConditionType_k__BackingField() const;

  constexpr void __set__ConditionType_k__BackingField(::JetBrains::Annotations::AssertionConditionType value);

  static inline ::JetBrains::Annotations::AssertionConditionAttribute* New_ctor(::JetBrains::Annotations::AssertionConditionType conditionType);

  /// @brief Method .ctor addr 0x2eba71c size 0x28 virtual false final false
  inline void _ctor(::JetBrains::Annotations::AssertionConditionType conditionType);

  /// @brief Method get_ConditionType addr 0x2eba744 size 0x8 virtual false final false
  inline ::JetBrains::Annotations::AssertionConditionType get_ConditionType();

  /// @brief Method set_ConditionType addr 0x2eba74c size 0x8 virtual false final false
  inline void set_ConditionType(::JetBrains::Annotations::AssertionConditionType value);

  // Ctor Parameters [CppParam { name: "", ty: "AssertionConditionAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssertionConditionAttribute(AssertionConditionAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssertionConditionAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssertionConditionAttribute(AssertionConditionAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssertionConditionAttribute();

public:
  /// @brief Field <ConditionType>k__BackingField, offset: 0x10, size: 0x4, def value: None
  ::JetBrains::Annotations::AssertionConditionType ____ConditionType_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::AssertionConditionAttribute, 0x18>, "Size mismatch!");

} // namespace JetBrains::Annotations
NEED_NO_BOX(::JetBrains::Annotations::AssertionConditionAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::AssertionConditionAttribute*, "JetBrains.Annotations", "AssertionConditionAttribute");
