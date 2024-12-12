#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/TypeDependencyAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TypeDependencyAttribute)
// Forward declare root types
namespace System::Runtime::CompilerServices {
class TypeDependencyAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::CompilerServices::TypeDependencyAttribute);
// Dependencies System.Attribute
namespace System::Runtime::CompilerServices {
// Is value type: false
// CS Name: System.Runtime.CompilerServices.TypeDependencyAttribute
class CORDL_TYPE TypeDependencyAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field typeName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_typeName, put = __cordl_internal_set_typeName)) ::StringW typeName;

  static inline ::System::Runtime::CompilerServices::TypeDependencyAttribute* New_ctor(::StringW typeName);

  constexpr ::StringW const& __cordl_internal_get_typeName() const;

  constexpr ::StringW& __cordl_internal_get_typeName();

  constexpr void __cordl_internal_set_typeName(::StringW value);

  /// @brief Method .ctor, addr 0x3d198fc, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::StringW typeName);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeDependencyAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TypeDependencyAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeDependencyAttribute(TypeDependencyAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeDependencyAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeDependencyAttribute(TypeDependencyAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3416 };

  /// @brief Field typeName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___typeName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::CompilerServices::TypeDependencyAttribute, ___typeName) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::TypeDependencyAttribute, 0x18>, "Size mismatch!");

} // namespace System::Runtime::CompilerServices
NEED_NO_BOX(::System::Runtime::CompilerServices::TypeDependencyAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::TypeDependencyAttribute*, "System.Runtime.CompilerServices", "TypeDependencyAttribute");
