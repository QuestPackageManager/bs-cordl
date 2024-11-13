#pragma once
// IWYU pragma private; include "System/Reflection/AssemblyDescriptionAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AssemblyDescriptionAttribute)
// Forward declare root types
namespace System::Reflection {
class AssemblyDescriptionAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::AssemblyDescriptionAttribute);
// Type: System.Reflection::AssemblyDescriptionAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Reflection {
// Is value type: false
// CS Name: ::System.Reflection::AssemblyDescriptionAttribute*
class CORDL_TYPE AssemblyDescriptionAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field <Description>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Description_k__BackingField, put = __cordl_internal_set__Description_k__BackingField)) ::StringW _Description_k__BackingField;

  static inline ::System::Reflection::AssemblyDescriptionAttribute* New_ctor(::StringW description);

  constexpr ::StringW const& __cordl_internal_get__Description_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Description_k__BackingField();

  constexpr void __cordl_internal_set__Description_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x3cc071c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW description);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssemblyDescriptionAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AssemblyDescriptionAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssemblyDescriptionAttribute(AssemblyDescriptionAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssemblyDescriptionAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssemblyDescriptionAttribute(AssemblyDescriptionAttribute const&) = delete;

  /// @brief Field <Description>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Description_k__BackingField;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3449 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::AssemblyDescriptionAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Reflection::AssemblyDescriptionAttribute, ____Description_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace System::Reflection
NEED_NO_BOX(::System::Reflection::AssemblyDescriptionAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::AssemblyDescriptionAttribute*, "System.Reflection", "AssemblyDescriptionAttribute");
