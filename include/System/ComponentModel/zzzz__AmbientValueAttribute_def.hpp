#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(AmbientValueAttribute)
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class AmbientValueAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::AmbientValueAttribute);
// Type: System.ComponentModel::AmbientValueAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9401))
// CS Name: ::System.ComponentModel::AmbientValueAttribute*
class CORDL_TYPE AmbientValueAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field <Value>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__Value_k__BackingField, put = __set__Value_k__BackingField))::System::Object* _Value_k__BackingField;

  __declspec(property(get = get_Value))::System::Object* Value;

  constexpr ::System::Object*& __get__Value_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get__Value_k__BackingField() const;

  constexpr void __set__Value_k__BackingField(::System::Object* value);

  /// @brief Method get_Value, addr 0x2905164, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_Value();

  // Ctor Parameters [CppParam { name: "", ty: "AmbientValueAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AmbientValueAttribute(AmbientValueAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AmbientValueAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AmbientValueAttribute(AmbientValueAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AmbientValueAttribute();

public:
  /// @brief Field <Value>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ____Value_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::AmbientValueAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::AmbientValueAttribute, ____Value_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::AmbientValueAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::AmbientValueAttribute*, "System.ComponentModel", "AmbientValueAttribute");
