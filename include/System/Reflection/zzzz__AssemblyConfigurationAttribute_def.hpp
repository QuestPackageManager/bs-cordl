#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AssemblyConfigurationAttribute)
// Forward declare root types
namespace System::Reflection {
class AssemblyConfigurationAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::AssemblyConfigurationAttribute);
// Type: System.Reflection::AssemblyConfigurationAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2545))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3440))
// CS Name: ::System.Reflection::AssemblyConfigurationAttribute*
class CORDL_TYPE AssemblyConfigurationAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field <Configuration>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__Configuration_k__BackingField, put = __set__Configuration_k__BackingField))::StringW _Configuration_k__BackingField;

  constexpr ::StringW& __get__Configuration_k__BackingField();

  constexpr ::StringW const& __get__Configuration_k__BackingField() const;

  constexpr void __set__Configuration_k__BackingField(::StringW value);

  static inline ::System::Reflection::AssemblyConfigurationAttribute* New_ctor(::StringW configuration);

  /// @brief Method .ctor addr 0x238c3f0 size 0x28 virtual false final false
  inline void _ctor(::StringW configuration);

  // Ctor Parameters [CppParam { name: "", ty: "AssemblyConfigurationAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssemblyConfigurationAttribute(AssemblyConfigurationAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssemblyConfigurationAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssemblyConfigurationAttribute(AssemblyConfigurationAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssemblyConfigurationAttribute();

public:
  /// @brief Field <Configuration>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Configuration_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::AssemblyConfigurationAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Reflection::AssemblyConfigurationAttribute, ____Configuration_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace System::Reflection
NEED_NO_BOX(::System::Reflection::AssemblyConfigurationAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::AssemblyConfigurationAttribute*, "System.Reflection", "AssemblyConfigurationAttribute");
