#pragma once
// IWYU pragma private; include "System/Reflection/AssemblyDefaultAliasAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AssemblyDefaultAliasAttribute)
// Forward declare root types
namespace System::Reflection {
class AssemblyDefaultAliasAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::AssemblyDefaultAliasAttribute);
// Dependencies System.Attribute
namespace System::Reflection {
// Is value type: false
// CS Name: System.Reflection.AssemblyDefaultAliasAttribute
class CORDL_TYPE AssemblyDefaultAliasAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field <DefaultAlias>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__DefaultAlias_k__BackingField, put = __cordl_internal_set__DefaultAlias_k__BackingField)) ::StringW _DefaultAlias_k__BackingField;

  static inline ::System::Reflection::AssemblyDefaultAliasAttribute* New_ctor(::StringW defaultAlias);

  constexpr ::StringW const& __cordl_internal_get__DefaultAlias_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__DefaultAlias_k__BackingField();

  constexpr void __cordl_internal_set__DefaultAlias_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x3d20840, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW defaultAlias);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssemblyDefaultAliasAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AssemblyDefaultAliasAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssemblyDefaultAliasAttribute(AssemblyDefaultAliasAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssemblyDefaultAliasAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssemblyDefaultAliasAttribute(AssemblyDefaultAliasAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3447 };

  /// @brief Field <DefaultAlias>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____DefaultAlias_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Reflection::AssemblyDefaultAliasAttribute, ____DefaultAlias_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Reflection::AssemblyDefaultAliasAttribute, 0x18>, "Size mismatch!");

} // namespace System::Reflection
NEED_NO_BOX(::System::Reflection::AssemblyDefaultAliasAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::AssemblyDefaultAliasAttribute*, "System.Reflection", "AssemblyDefaultAliasAttribute");
