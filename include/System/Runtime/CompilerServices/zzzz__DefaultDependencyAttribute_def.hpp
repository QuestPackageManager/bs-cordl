#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/DefaultDependencyAttribute.hpp"
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
// CS Name: ::System.Runtime.CompilerServices::DefaultDependencyAttribute*
class CORDL_TYPE DefaultDependencyAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field loadHint, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_loadHint, put = __cordl_internal_set_loadHint))::System::Runtime::CompilerServices::LoadHint loadHint;

  static inline ::System::Runtime::CompilerServices::DefaultDependencyAttribute* New_ctor(::System::Runtime::CompilerServices::LoadHint loadHintArgument);

  constexpr ::System::Runtime::CompilerServices::LoadHint const& __cordl_internal_get_loadHint() const;

  constexpr ::System::Runtime::CompilerServices::LoadHint& __cordl_internal_get_loadHint();

  constexpr void __cordl_internal_set_loadHint(::System::Runtime::CompilerServices::LoadHint value);

  /// @brief Method .ctor, addr 0x2877be8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::CompilerServices::LoadHint loadHintArgument);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultDependencyAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DefaultDependencyAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultDependencyAttribute(DefaultDependencyAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultDependencyAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultDependencyAttribute(DefaultDependencyAttribute const&) = delete;

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
