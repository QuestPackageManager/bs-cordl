#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AssemblyFileVersionAttribute)
// Forward declare root types
namespace System::Reflection {
class AssemblyFileVersionAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::AssemblyFileVersionAttribute);
// Type: System.Reflection::AssemblyFileVersionAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3451))
// CS Name: ::System.Reflection::AssemblyFileVersionAttribute*
class CORDL_TYPE AssemblyFileVersionAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field <Version>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__Version_k__BackingField, put = __set__Version_k__BackingField))::StringW _Version_k__BackingField;

  constexpr ::StringW& __get__Version_k__BackingField();

  constexpr ::StringW const& __get__Version_k__BackingField() const;

  constexpr void __set__Version_k__BackingField(::StringW value);

  static inline ::System::Reflection::AssemblyFileVersionAttribute* New_ctor(::StringW version);

  /// @brief Method .ctor, addr 0x24e5f70, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::StringW version);

  // Ctor Parameters [CppParam { name: "", ty: "AssemblyFileVersionAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssemblyFileVersionAttribute(AssemblyFileVersionAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssemblyFileVersionAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssemblyFileVersionAttribute(AssemblyFileVersionAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssemblyFileVersionAttribute();

public:
  /// @brief Field <Version>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Version_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::AssemblyFileVersionAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Reflection::AssemblyFileVersionAttribute, ____Version_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace System::Reflection
NEED_NO_BOX(::System::Reflection::AssemblyFileVersionAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::AssemblyFileVersionAttribute*, "System.Reflection", "AssemblyFileVersionAttribute");
