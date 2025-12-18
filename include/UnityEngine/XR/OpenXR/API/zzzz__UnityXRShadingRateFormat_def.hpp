#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/API/UnityXRShadingRateFormat.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnityXRShadingRateFormat)
// Forward declare root types
namespace UnityEngine::XR::OpenXR::API {
struct UnityXRShadingRateFormat;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::API::UnityXRShadingRateFormat);
// Dependencies
namespace UnityEngine::XR::OpenXR::API {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.API.UnityXRShadingRateFormat
struct CORDL_TYPE UnityXRShadingRateFormat {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __UnityXRShadingRateFormat_Unwrapped
  enum struct __UnityXRShadingRateFormat_Unwrapped : int32_t {
    __E_kUnityXRShadingRateFormatNone = static_cast<int32_t>(0x0),
    __E_kUnityXRShadingRateR8G8 = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __UnityXRShadingRateFormat_Unwrapped() const noexcept {
    return static_cast<__UnityXRShadingRateFormat_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr UnityXRShadingRateFormat();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr UnityXRShadingRateFormat(int32_t value__) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18486 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field kUnityXRShadingRateFormatNone value: I32(0)
  static ::UnityEngine::XR::OpenXR::API::UnityXRShadingRateFormat const kUnityXRShadingRateFormatNone;

  /// @brief Field kUnityXRShadingRateR8G8 value: I32(1)
  static ::UnityEngine::XR::OpenXR::API::UnityXRShadingRateFormat const kUnityXRShadingRateR8G8;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::API::UnityXRShadingRateFormat, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::API::UnityXRShadingRateFormat, 0x4>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::API
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::API::UnityXRShadingRateFormat, "UnityEngine.XR.OpenXR.API", "UnityXRShadingRateFormat");
