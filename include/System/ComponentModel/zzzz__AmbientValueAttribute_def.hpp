#pragma once
// IWYU pragma private; include "System/ComponentModel/AmbientValueAttribute.hpp"
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
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::AmbientValueAttribute*
class CORDL_TYPE AmbientValueAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_Value)) ::System::Object* Value;

  /// @brief Field <Value>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Value_k__BackingField, put = __cordl_internal_set__Value_k__BackingField)) ::System::Object* _Value_k__BackingField;

  constexpr ::System::Object*& __cordl_internal_get__Value_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__Value_k__BackingField() const;

  constexpr void __cordl_internal_set__Value_k__BackingField(::System::Object* value);

  /// @brief Method get_Value, addr 0x43d0e90, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_Value();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AmbientValueAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AmbientValueAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AmbientValueAttribute(AmbientValueAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AmbientValueAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AmbientValueAttribute(AmbientValueAttribute const&) = delete;

  /// @brief Field <Value>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ____Value_k__BackingField;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9324 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::AmbientValueAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::AmbientValueAttribute, ____Value_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::AmbientValueAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::AmbientValueAttribute*, "System.ComponentModel", "AmbientValueAttribute");
