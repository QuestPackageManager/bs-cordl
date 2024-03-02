#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AssemblyTitleAttribute)
// Forward declare root types
namespace System::Reflection {
class AssemblyTitleAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::AssemblyTitleAttribute);
// Type: System.Reflection::AssemblyTitleAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Reflection {
// Is value type: false
// CS Name: ::System.Reflection::AssemblyTitleAttribute*
class CORDL_TYPE AssemblyTitleAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field <Title>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Title_k__BackingField, put = __cordl_internal_set__Title_k__BackingField))::StringW _Title_k__BackingField;

  static inline ::System::Reflection::AssemblyTitleAttribute* New_ctor(::StringW title);

  constexpr ::StringW const& __cordl_internal_get__Title_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Title_k__BackingField();

  constexpr void __cordl_internal_set__Title_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x25d6dcc, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW title);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssemblyTitleAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AssemblyTitleAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssemblyTitleAttribute(AssemblyTitleAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssemblyTitleAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssemblyTitleAttribute(AssemblyTitleAttribute const&) = delete;

  /// @brief Field <Title>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Title_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::AssemblyTitleAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Reflection::AssemblyTitleAttribute, ____Title_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace System::Reflection
NEED_NO_BOX(::System::Reflection::AssemblyTitleAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::AssemblyTitleAttribute*, "System.Reflection", "AssemblyTitleAttribute");
