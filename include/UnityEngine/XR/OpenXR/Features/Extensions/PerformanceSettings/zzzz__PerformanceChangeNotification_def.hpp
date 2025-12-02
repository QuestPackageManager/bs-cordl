#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/Features/Extensions/PerformanceSettings/PerformanceChangeNotification.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/OpenXR/Features/Extensions/PerformanceSettings/zzzz__PerformanceDomain_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/Extensions/PerformanceSettings/zzzz__PerformanceNotificationLevel_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/Extensions/PerformanceSettings/zzzz__PerformanceSubDomain_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(PerformanceChangeNotification)
// Forward declare root types
namespace UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings {
struct PerformanceChangeNotification;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceChangeNotification);
// Dependencies UnityEngine.XR.OpenXR.Features.Extensions.PerformanceSettings.PerformanceDomain, UnityEngine.XR.OpenXR.Features.Extensions.PerformanceSettings.PerformanceNotificationLevel,
// UnityEngine.XR.OpenXR.Features.Extensions.PerformanceSettings.PerformanceSubDomain
namespace UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.Features.Extensions.PerformanceSettings.PerformanceChangeNotification
struct CORDL_TYPE PerformanceChangeNotification {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr PerformanceChangeNotification();

  // Ctor Parameters [CppParam { name: "domain", ty: "::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceDomain", modifiers: "", def_value: None }, CppParam { name:
  // "subDomain", ty: "::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceSubDomain", modifiers: "", def_value: None }, CppParam { name: "fromLevel", ty:
  // "::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceNotificationLevel", modifiers: "", def_value: None }, CppParam { name: "toLevel", ty:
  // "::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceNotificationLevel", modifiers: "", def_value: None }]
  constexpr PerformanceChangeNotification(::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceDomain domain,
                                          ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceSubDomain subDomain,
                                          ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceNotificationLevel fromLevel,
                                          ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceNotificationLevel toLevel) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18556 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field domain, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceDomain domain;

  /// @brief Field subDomain, offset: 0x4, size: 0x4, def value: None
  ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceSubDomain subDomain;

  /// @brief Field fromLevel, offset: 0x8, size: 0x4, def value: None
  ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceNotificationLevel fromLevel;

  /// @brief Field toLevel, offset: 0xc, size: 0x4, def value: None
  ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceNotificationLevel toLevel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceChangeNotification, domain) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceChangeNotification, subDomain) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceChangeNotification, fromLevel) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceChangeNotification, toLevel) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceChangeNotification, 0x10>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceChangeNotification, "UnityEngine.XR.OpenXR.Features.Extensions.PerformanceSettings",
                       "PerformanceChangeNotification");
