#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ApplicationLifecycle)
namespace Oculus::Platform::Models {
class LaunchDetails;
}
namespace Oculus::Platform {
struct LaunchResult;
}
namespace Oculus::Platform {
template <typename T> class __Message_1__Callback;
}
// Forward declare root types
namespace Oculus::Platform {
class ApplicationLifecycle;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::ApplicationLifecycle);
// Type: Oculus.Platform::ApplicationLifecycle
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13349))
// CS Name: ::Oculus.Platform::ApplicationLifecycle*
class CORDL_TYPE ApplicationLifecycle : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetLaunchDetails, addr 0x26f5aac, size 0x90, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Models::LaunchDetails* GetLaunchDetails();

  /// @brief Method LogDeeplinkResult, addr 0x26f5b3c, size 0x64, virtual false, abstract: false, final false
  static inline void LogDeeplinkResult(::StringW trackingID, ::Oculus::Platform::LaunchResult result);

  /// @brief Method SetLaunchIntentChangedNotificationCallback, addr 0x26f5ba0, size 0x74, virtual false, abstract: false, final false
  static inline void SetLaunchIntentChangedNotificationCallback(::Oculus::Platform::__Message_1__Callback<::StringW>* callback);

  // Ctor Parameters [CppParam { name: "", ty: "ApplicationLifecycle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ApplicationLifecycle(ApplicationLifecycle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ApplicationLifecycle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ApplicationLifecycle(ApplicationLifecycle const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ApplicationLifecycle();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::ApplicationLifecycle, 0x10>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::ApplicationLifecycle);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::ApplicationLifecycle*, "Oculus.Platform", "ApplicationLifecycle");
