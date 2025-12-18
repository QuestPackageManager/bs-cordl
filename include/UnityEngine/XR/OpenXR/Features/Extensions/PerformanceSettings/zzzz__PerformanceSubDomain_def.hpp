#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/Features/Extensions/PerformanceSettings/PerformanceSubDomain.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PerformanceSubDomain)
// Forward declare root types
namespace UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings {
struct PerformanceSubDomain;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceSubDomain);
// Dependencies
namespace UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.Features.Extensions.PerformanceSettings.PerformanceSubDomain
struct CORDL_TYPE PerformanceSubDomain {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PerformanceSubDomain_Unwrapped
  enum struct __PerformanceSubDomain_Unwrapped : int32_t {
    __E_Compositing = static_cast<int32_t>(0x1),
    __E_Rendering = static_cast<int32_t>(0x2),
    __E_Thermal = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PerformanceSubDomain_Unwrapped() const noexcept {
    return static_cast<__PerformanceSubDomain_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PerformanceSubDomain();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PerformanceSubDomain(int32_t value__) noexcept;

  /// @brief Field Compositing value: I32(1)
  static ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceSubDomain const Compositing;

  /// @brief Field Rendering value: I32(2)
  static ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceSubDomain const Rendering;

  /// @brief Field Thermal value: I32(3)
  static ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceSubDomain const Thermal;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18568 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceSubDomain, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceSubDomain, 0x4>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceSubDomain, "UnityEngine.XR.OpenXR.Features.Extensions.PerformanceSettings",
                       "PerformanceSubDomain");
