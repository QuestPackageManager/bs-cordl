#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/TypeForwardedFromAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TypeForwardedFromAttribute)
// Forward declare root types
namespace System::Runtime::CompilerServices {
class TypeForwardedFromAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::CompilerServices::TypeForwardedFromAttribute);
// Dependencies System.Attribute
namespace System::Runtime::CompilerServices {
// Is value type: false
// CS Name: System.Runtime.CompilerServices.TypeForwardedFromAttribute
class CORDL_TYPE TypeForwardedFromAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_AssemblyFullName)) ::StringW AssemblyFullName;

  /// @brief Field <AssemblyFullName>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__AssemblyFullName_k__BackingField, put = __cordl_internal_set__AssemblyFullName_k__BackingField)) ::StringW _AssemblyFullName_k__BackingField;

  static inline ::System::Runtime::CompilerServices::TypeForwardedFromAttribute* New_ctor(::StringW assemblyFullName);

  constexpr ::StringW const& __cordl_internal_get__AssemblyFullName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__AssemblyFullName_k__BackingField();

  constexpr void __cordl_internal_set__AssemblyFullName_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x3d18ce0, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::StringW assemblyFullName);

  /// @brief Method get_AssemblyFullName, addr 0x3d18d60, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_AssemblyFullName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeForwardedFromAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TypeForwardedFromAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeForwardedFromAttribute(TypeForwardedFromAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeForwardedFromAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeForwardedFromAttribute(TypeForwardedFromAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3387 };

  /// @brief Field <AssemblyFullName>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____AssemblyFullName_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::CompilerServices::TypeForwardedFromAttribute, ____AssemblyFullName_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::TypeForwardedFromAttribute, 0x18>, "Size mismatch!");

} // namespace System::Runtime::CompilerServices
NEED_NO_BOX(::System::Runtime::CompilerServices::TypeForwardedFromAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::TypeForwardedFromAttribute*, "System.Runtime.CompilerServices", "TypeForwardedFromAttribute");
