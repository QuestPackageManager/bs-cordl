#pragma once
// IWYU pragma private; include "System/Reflection/AssemblyMetadataAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AssemblyMetadataAttribute)
// Forward declare root types
namespace System::Reflection {
class AssemblyMetadataAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::AssemblyMetadataAttribute);
// Type: System.Reflection::AssemblyMetadataAttribute
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Reflection {
// Is value type: false
// CS Name: ::System.Reflection::AssemblyMetadataAttribute*
class CORDL_TYPE AssemblyMetadataAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field <Key>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Key_k__BackingField, put = __cordl_internal_set__Key_k__BackingField))::StringW _Key_k__BackingField;

  /// @brief Field <Value>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Value_k__BackingField, put = __cordl_internal_set__Value_k__BackingField))::StringW _Value_k__BackingField;

  static inline ::System::Reflection::AssemblyMetadataAttribute* New_ctor(::StringW key, ::StringW value);

  constexpr ::StringW const& __cordl_internal_get__Key_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Key_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Value_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Value_k__BackingField();

  constexpr void __cordl_internal_set__Key_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Value_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x2893a84, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::StringW key, ::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssemblyMetadataAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AssemblyMetadataAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssemblyMetadataAttribute(AssemblyMetadataAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssemblyMetadataAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssemblyMetadataAttribute(AssemblyMetadataAttribute const&) = delete;

  /// @brief Field <Key>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Key_k__BackingField;

  /// @brief Field <Value>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Value_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::AssemblyMetadataAttribute, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Reflection::AssemblyMetadataAttribute, ____Key_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::AssemblyMetadataAttribute, ____Value_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace System::Reflection
NEED_NO_BOX(::System::Reflection::AssemblyMetadataAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::AssemblyMetadataAttribute*, "System.Reflection", "AssemblyMetadataAttribute");
