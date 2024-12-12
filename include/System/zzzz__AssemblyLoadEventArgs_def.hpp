#pragma once
// IWYU pragma private; include "System/AssemblyLoadEventArgs.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__EventArgs_def.hpp"
CORDL_MODULE_EXPORT(AssemblyLoadEventArgs)
namespace System::Reflection {
class Assembly;
}
// Forward declare root types
namespace System {
class AssemblyLoadEventArgs;
}
// Write type traits
MARK_REF_PTR_T(::System::AssemblyLoadEventArgs);
// Dependencies System.EventArgs
namespace System {
// Is value type: false
// CS Name: System.AssemblyLoadEventArgs
class CORDL_TYPE AssemblyLoadEventArgs : public ::System::EventArgs {
public:
  // Declarations
  /// @brief Field <LoadedAssembly>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__LoadedAssembly_k__BackingField,
                      put = __cordl_internal_set__LoadedAssembly_k__BackingField)) ::System::Reflection::Assembly* _LoadedAssembly_k__BackingField;

  static inline ::System::AssemblyLoadEventArgs* New_ctor(::System::Reflection::Assembly* loadedAssembly);

  constexpr ::System::Reflection::Assembly* const& __cordl_internal_get__LoadedAssembly_k__BackingField() const;

  constexpr ::System::Reflection::Assembly*& __cordl_internal_get__LoadedAssembly_k__BackingField();

  constexpr void __cordl_internal_set__LoadedAssembly_k__BackingField(::System::Reflection::Assembly* value);

  /// @brief Method .ctor, addr 0x3d55008, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Reflection::Assembly* loadedAssembly);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssemblyLoadEventArgs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AssemblyLoadEventArgs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssemblyLoadEventArgs(AssemblyLoadEventArgs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssemblyLoadEventArgs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssemblyLoadEventArgs(AssemblyLoadEventArgs const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2353 };

  /// @brief Field <LoadedAssembly>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Reflection::Assembly* ____LoadedAssembly_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::AssemblyLoadEventArgs, ____LoadedAssembly_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::AssemblyLoadEventArgs, 0x18>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::AssemblyLoadEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::AssemblyLoadEventArgs*, "System", "AssemblyLoadEventArgs");
