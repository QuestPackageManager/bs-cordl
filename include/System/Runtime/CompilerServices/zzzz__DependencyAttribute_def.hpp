#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/DependencyAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__LoadHint_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DependencyAttribute)
namespace System::Runtime::CompilerServices {
struct LoadHint;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
class DependencyAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::CompilerServices::DependencyAttribute);
// Dependencies System.Attribute, System.Runtime.CompilerServices.LoadHint
namespace System::Runtime::CompilerServices {
// Is value type: false
// CS Name: System.Runtime.CompilerServices.DependencyAttribute
class CORDL_TYPE DependencyAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field dependentAssembly, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_dependentAssembly, put = __cordl_internal_set_dependentAssembly)) ::StringW dependentAssembly;

  /// @brief Field loadHint, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_loadHint, put = __cordl_internal_set_loadHint)) ::System::Runtime::CompilerServices::LoadHint loadHint;

  static inline ::System::Runtime::CompilerServices::DependencyAttribute* New_ctor(::StringW dependentAssemblyArgument, ::System::Runtime::CompilerServices::LoadHint loadHintArgument);

  constexpr ::StringW const& __cordl_internal_get_dependentAssembly() const;

  constexpr ::StringW& __cordl_internal_get_dependentAssembly();

  constexpr ::System::Runtime::CompilerServices::LoadHint const& __cordl_internal_get_loadHint() const;

  constexpr ::System::Runtime::CompilerServices::LoadHint& __cordl_internal_get_loadHint();

  constexpr void __cordl_internal_set_dependentAssembly(::StringW value);

  constexpr void __cordl_internal_set_loadHint(::System::Runtime::CompilerServices::LoadHint value);

  /// @brief Method .ctor, addr 0x3d1b060, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::StringW dependentAssemblyArgument, ::System::Runtime::CompilerServices::LoadHint loadHintArgument);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DependencyAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DependencyAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DependencyAttribute(DependencyAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DependencyAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DependencyAttribute(DependencyAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3411 };

  /// @brief Field dependentAssembly, offset: 0x10, size: 0x8, def value: None
  ::StringW ___dependentAssembly;

  /// @brief Field loadHint, offset: 0x18, size: 0x4, def value: None
  ::System::Runtime::CompilerServices::LoadHint ___loadHint;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::CompilerServices::DependencyAttribute, ___dependentAssembly) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::CompilerServices::DependencyAttribute, ___loadHint) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::DependencyAttribute, 0x20>, "Size mismatch!");

} // namespace System::Runtime::CompilerServices
NEED_NO_BOX(::System::Runtime::CompilerServices::DependencyAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::DependencyAttribute*, "System.Runtime.CompilerServices", "DependencyAttribute");
