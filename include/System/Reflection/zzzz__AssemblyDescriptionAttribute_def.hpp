#pragma once
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
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3450))
// CS Name: ::System.Reflection::AssemblyDescriptionAttribute*
class CORDL_TYPE AssemblyDescriptionAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field <Description>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__Description_k__BackingField, put = __set__Description_k__BackingField))::StringW _Description_k__BackingField;

  constexpr ::StringW& __get__Description_k__BackingField();

  constexpr ::StringW const& __get__Description_k__BackingField() const;

  constexpr void __set__Description_k__BackingField(::StringW value);

  static inline ::System::Reflection::AssemblyDescriptionAttribute* New_ctor(::StringW description);

  /// @brief Method .ctor, addr 0x24e5f48, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW description);

  // Ctor Parameters [CppParam { name: "", ty: "AssemblyDescriptionAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssemblyDescriptionAttribute(AssemblyDescriptionAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssemblyDescriptionAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssemblyDescriptionAttribute(AssemblyDescriptionAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssemblyDescriptionAttribute();

public:
  /// @brief Field <Description>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Description_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::AssemblyDescriptionAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Reflection::AssemblyDescriptionAttribute, ____Description_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace System::Reflection
NEED_NO_BOX(::System::Reflection::AssemblyDescriptionAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::AssemblyDescriptionAttribute*, "System.Reflection", "AssemblyDescriptionAttribute");
