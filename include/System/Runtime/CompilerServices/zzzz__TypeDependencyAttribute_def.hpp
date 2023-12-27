#pragma once
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
// Type: System.Runtime.CompilerServices::TypeDependencyAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::CompilerServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3417))
// CS Name: ::System.Runtime.CompilerServices::TypeDependencyAttribute*
class CORDL_TYPE TypeDependencyAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field typeName, offset 0x10, size 0x8
  __declspec(property(get = __get_typeName, put = __set_typeName))::StringW typeName;

  constexpr ::StringW& __get_typeName();

  constexpr ::StringW const& __get_typeName() const;

  constexpr void __set_typeName(::StringW value);

  static inline ::System::Runtime::CompilerServices::TypeDependencyAttribute* New_ctor(::StringW typeName);

  /// @brief Method .ctor addr 0x24dec78 size 0x78 virtual false final false
  inline void _ctor(::StringW typeName);

  // Ctor Parameters [CppParam { name: "", ty: "TypeDependencyAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeDependencyAttribute(TypeDependencyAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeDependencyAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeDependencyAttribute(TypeDependencyAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeDependencyAttribute();

public:
  /// @brief Field typeName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___typeName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::TypeDependencyAttribute, 0x18>, "Size mismatch!");

} // namespace System::Runtime::CompilerServices
NEED_NO_BOX(::System::Runtime::CompilerServices::TypeDependencyAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::TypeDependencyAttribute*, "System.Runtime.CompilerServices", "TypeDependencyAttribute");
