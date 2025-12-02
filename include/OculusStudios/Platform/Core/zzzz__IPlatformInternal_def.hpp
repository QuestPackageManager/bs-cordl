#pragma once
// IWYU pragma private; include "OculusStudios/Platform/Core/IPlatformInternal.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
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
MARK_REF_PTR_T(::OculusStudios::Platform::Core::IPlatformInternal);
// Dependencies
namespace OculusStudios::Platform::Core {
// Is value type: false
// CS Name: OculusStudios.Platform.Core.IPlatformInternal
class CORDL_TYPE IPlatformInternal {
public:
  // Declarations
  /// @brief Method InitializeAsync, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* InitializeAsync(::OculusStudios::Platform::Core::PlatformInitParams* initParams);

  // Ctor Parameters [CppParam { name: "", ty: "IPlatformInternal", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPlatformInternal(IPlatformInternal const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22166 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace OculusStudios::Platform::Core
NEED_NO_BOX(::OculusStudios::Platform::Core::IPlatformInternal);
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::Platform::Core::IPlatformInternal*, "OculusStudios.Platform.Core", "IPlatformInternal");
