#pragma once
// IWYU pragma private; include "Oculus/Platform/Application.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
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
MARK_REF_T(::Oculus::Platform::Application*);
DEFINE_IL2CPP_CLASS(::Oculus::Platform::Application*, "Oculus.Platform", "Application");
// Dependencies System.Object
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.Application
class CORDL_TYPE Application : public ::System::Object {
public:
  // Declarations
  /// @brief Method CancelAppDownload, addr 0x5de2b90, size 0x158, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AppDownloadResult*>* CancelAppDownload();

  /// @brief Method CheckAppDownloadProgress, addr 0x5de2ce8, size 0x158, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AppDownloadProgressResult*>* CheckAppDownloadProgress();

  /// @brief Method GetVersion, addr 0x5de2e40, size 0x158, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::ApplicationVersion*>* GetVersion();

  /// @brief Method InstallAppUpdateAndRelaunch, addr 0x5de2f98, size 0x170, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AppDownloadResult*>* InstallAppUpdateAndRelaunch(::Oculus::Platform::ApplicationOptions* deeplink_options);

  /// @brief Method LaunchOtherApp, addr 0x5de3108, size 0x178, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::StringW>* LaunchOtherApp(uint64_t appID, ::Oculus::Platform::ApplicationOptions* deeplink_options);

  /// @brief Method StartAppDownload, addr 0x5de3280, size 0x158, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17921 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Platform::Application) == 0x10, "Size mismatch!");

} // namespace Oculus::Platform
