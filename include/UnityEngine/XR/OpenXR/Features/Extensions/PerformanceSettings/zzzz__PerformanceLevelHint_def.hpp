#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/Features/Extensions/PerformanceSettings/PerformanceLevelHint.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PerformanceLevelHint)
// Forward declare root types
namespace UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings {
struct PerformanceLevelHint;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceLevelHint);
// Dependencies
namespace UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.Features.Extensions.PerformanceSettings.PerformanceLevelHint
struct CORDL_TYPE PerformanceLevelHint {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PerformanceLevelHint_Unwrapped
  enum struct __PerformanceLevelHint_Unwrapped : int32_t {
    __E_PowerSavings = static_cast<int32_t>(0x0),
    __E_SustainedLow = static_cast<int32_t>(0x19),
    __E_SustainedHigh = static_cast<int32_t>(0x32),
    __E_Boost = static_cast<int32_t>(0x4b),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PerformanceLevelHint_Unwrapped() const noexcept {
    return static_cast<__PerformanceLevelHint_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PerformanceLevelHint();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PerformanceLevelHint(int32_t value__) noexcept;

  /// @brief Field Boost value: I32(75)
  static ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceLevelHint const Boost;

  /// @brief Field PowerSavings value: I32(0)
  static ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceLevelHint const PowerSavings;

  /// @brief Field SustainedHigh value: I32(50)
  static ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceLevelHint const SustainedHigh;

  /// @brief Field SustainedLow value: I32(25)
  static ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceLevelHint const SustainedLow;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18569 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceLevelHint, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceLevelHint, 0x4>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceLevelHint, "UnityEngine.XR.OpenXR.Features.Extensions.PerformanceSettings",
                       "PerformanceLevelHint");
