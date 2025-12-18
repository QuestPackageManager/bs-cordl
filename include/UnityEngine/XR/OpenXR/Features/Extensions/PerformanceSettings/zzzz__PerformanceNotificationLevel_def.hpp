#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/Features/Extensions/PerformanceSettings/PerformanceNotificationLevel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PerformanceNotificationLevel)
// Forward declare root types
namespace UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings {
struct PerformanceNotificationLevel;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceNotificationLevel);
// Dependencies
namespace UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.Features.Extensions.PerformanceSettings.PerformanceNotificationLevel
struct CORDL_TYPE PerformanceNotificationLevel {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PerformanceNotificationLevel_Unwrapped
  enum struct __PerformanceNotificationLevel_Unwrapped : int32_t {
    __E_Normal = static_cast<int32_t>(0x0),
    __E_Warning = static_cast<int32_t>(0x19),
    __E_Impaired = static_cast<int32_t>(0x4b),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PerformanceNotificationLevel_Unwrapped() const noexcept {
    return static_cast<__PerformanceNotificationLevel_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PerformanceNotificationLevel();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PerformanceNotificationLevel(int32_t value__) noexcept;

  /// @brief Field Impaired value: I32(75)
  static ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceNotificationLevel const Impaired;

  /// @brief Field Normal value: I32(0)
  static ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceNotificationLevel const Normal;

  /// @brief Field Warning value: I32(25)
  static ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceNotificationLevel const Warning;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18570 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceNotificationLevel, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceNotificationLevel, 0x4>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceNotificationLevel, "UnityEngine.XR.OpenXR.Features.Extensions.PerformanceSettings",
                       "PerformanceNotificationLevel");
