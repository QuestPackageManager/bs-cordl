#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__LoadHint_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(DefaultDependencyAttribute)
namespace System::Runtime::CompilerServices {
struct LoadHint;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
class DefaultDependencyAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::CompilerServices::DefaultDependencyAttribute);
// Type: System.Runtime.CompilerServices::DefaultDependencyAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Runtime::CompilerServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3411)), TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3412))
// CS Name: ::System.Runtime.CompilerServices::DefaultDependencyAttribute*
class CORDL_TYPE DefaultDependencyAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field loadHint, offset 0x10, size 0x4
  __declspec(property(get = __get_loadHint, put = __set_loadHint))::System::Runtime::CompilerServices::LoadHint loadHint;

  constexpr ::System::Runtime::CompilerServices::LoadHint& __get_loadHint();

  constexpr ::System::Runtime::CompilerServices::LoadHint const& __get_loadHint() const;

  constexpr void __set_loadHint(::System::Runtime::CompilerServices::LoadHint value);

  static inline ::System::Runtime::CompilerServices::DefaultDependencyAttribute* New_ctor(::System::Runtime::CompilerServices::LoadHint loadHintArgument);

  /// @brief Method .ctor, addr 0x24debb4, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::CompilerServices::LoadHint loadHintArgument);

  // Ctor Parameters [CppParam { name: "", ty: "DefaultDependencyAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultDependencyAttribute(DefaultDependencyAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultDependencyAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultDependencyAttribute(DefaultDependencyAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultDependencyAttribute();

public:
  /// @brief Field loadHint, offset: 0x10, size: 0x4, def value: None
  ::System::Runtime::CompilerServices::LoadHint ___loadHint;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::DefaultDependencyAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::CompilerServices::DefaultDependencyAttribute, ___loadHint) == 0x10, "Offset mismatch!");

} // namespace System::Runtime::CompilerServices
NEED_NO_BOX(::System::Runtime::CompilerServices::DefaultDependencyAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::DefaultDependencyAttribute*, "System.Runtime.CompilerServices", "DefaultDependencyAttribute");
