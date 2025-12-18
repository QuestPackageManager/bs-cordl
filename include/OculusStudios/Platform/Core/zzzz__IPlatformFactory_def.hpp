#pragma once
// IWYU pragma private; include "OculusStudios/Platform/Core/IPlatformFactory.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPlatformFactory)
namespace OculusStudios::Platform::Core {
class IPlatform;
}
namespace OculusStudios::Platform::Core {
class PlatformInitParams;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
// Forward declare root types
namespace OculusStudios::Platform::Core {
class IPlatformFactory;
}
// Write type traits
MARK_REF_PTR_T(::OculusStudios::Platform::Core::IPlatformFactory);
// Dependencies
namespace OculusStudios::Platform::Core {
// Is value type: false
// CS Name: OculusStudios.Platform.Core.IPlatformFactory
class CORDL_TYPE IPlatformFactory {
public:
  // Declarations
  /// @brief Method CreateAsync, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::OculusStudios::Platform::Core::IPlatform*>* CreateAsync(::OculusStudios::Platform::Core::PlatformInitParams* initParams);

  // Ctor Parameters [CppParam { name: "", ty: "IPlatformFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPlatformFactory(IPlatformFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22191 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace OculusStudios::Platform::Core
NEED_NO_BOX(::OculusStudios::Platform::Core::IPlatformFactory);
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::Platform::Core::IPlatformFactory*, "OculusStudios.Platform.Core", "IPlatformFactory");
