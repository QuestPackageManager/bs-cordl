#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Application)
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
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13282))
// CS Name: ::Oculus.Platform::Application*
class CORDL_TYPE Application : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetVersion, addr 0x272a6b4, size 0x158, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::ApplicationVersion*>* GetVersion();

  /// @brief Method LaunchOtherApp, addr 0x272a80c, size 0x1b0, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::StringW>* LaunchOtherApp(uint64_t appID, ::Oculus::Platform::ApplicationOptions* deeplink_options);

  // Ctor Parameters [CppParam { name: "", ty: "Application", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Application(Application&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Application", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Application(Application const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Application();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Application, 0x10>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::Application);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Application*, "Oculus.Platform", "Application");
