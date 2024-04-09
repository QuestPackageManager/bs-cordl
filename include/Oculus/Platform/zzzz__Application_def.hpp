#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Application)
namespace Oculus::Platform::Models {
class AppDownloadProgressResult;
}
namespace Oculus::Platform::Models {
class AppDownloadResult;
}
namespace Oculus::Platform::Models {
class ApplicationVersion;
}
namespace Oculus::Platform {
class ApplicationOptions;
}
namespace Oculus::Platform {
template <typename T> class Request_1;
}
// Forward declare root types
namespace Oculus::Platform {
class Application;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Application);
// Type: Oculus.Platform::Application
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// CS Name: ::Oculus.Platform::Application*
class CORDL_TYPE Application : public ::System::Object {
public:
  // Declarations
  /// @brief Method CancelAppDownload, addr 0x29d16d0, size 0x158, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AppDownloadResult*>* CancelAppDownload();

  /// @brief Method CheckAppDownloadProgress, addr 0x29d1828, size 0x158, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AppDownloadProgressResult*>* CheckAppDownloadProgress();

  /// @brief Method GetVersion, addr 0x29d1980, size 0x158, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::ApplicationVersion*>* GetVersion();

  /// @brief Method InstallAppUpdateAndRelaunch, addr 0x29d1ad8, size 0x1a0, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AppDownloadResult*>* InstallAppUpdateAndRelaunch(::Oculus::Platform::ApplicationOptions* deeplink_options);

  /// @brief Method LaunchOtherApp, addr 0x29d1c78, size 0x1b0, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::StringW>* LaunchOtherApp(uint64_t appID, ::Oculus::Platform::ApplicationOptions* deeplink_options);

  /// @brief Method StartAppDownload, addr 0x29d1e28, size 0x158, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AppDownloadResult*>* StartAppDownload();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Application();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Application", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Application(Application&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Application", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Application(Application const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Application, 0x10>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::Application);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Application*, "Oculus.Platform", "Application");
