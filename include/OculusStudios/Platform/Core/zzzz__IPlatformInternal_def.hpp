#pragma once
// IWYU pragma private; include "OculusStudios/Platform/Core/IPlatformInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPlatformInternal)
namespace OculusStudios::Platform::Core {
class PlatformInitParams;
}
namespace System::Threading::Tasks {
class Task;
}
// Forward declare root types
namespace OculusStudios::Platform::Core {
class IPlatformInternal;
}
// Write type traits
MARK_REF_T(::OculusStudios::Platform::Core::IPlatformInternal*);
DEFINE_IL2CPP_CLASS(::OculusStudios::Platform::Core::IPlatformInternal*, "OculusStudios.Platform.Core", "IPlatformInternal");
// [NullableContext(1)]
// Dependencies
namespace OculusStudios::Platform::Core {
// Is value type: false
// CS Name: OculusStudios.Platform.Core.IPlatformInternal
class CORDL_TYPE IPlatformInternal {
public:
  // Declarations
  /// @brief Method InitializeAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task* InitializeAsync(::OculusStudios::Platform::Core::PlatformInitParams* initParams);

  // Ctor Parameters [CppParam { name: "", ty: "IPlatformInternal", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPlatformInternal(IPlatformInternalconst&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22463 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace OculusStudios::Platform::Core
