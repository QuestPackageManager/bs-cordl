#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/API/UnityXRDepthTextureFormat.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnityXRDepthTextureFormat)
// Forward declare root types
namespace UnityEngine::XR::OpenXR::API {
struct UnityXRDepthTextureFormat;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::API::UnityXRDepthTextureFormat);
// Dependencies
namespace UnityEngine::XR::OpenXR::API {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.API.UnityXRDepthTextureFormat
struct CORDL_TYPE UnityXRDepthTextureFormat {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __UnityXRDepthTextureFormat_Unwrapped
  enum struct __UnityXRDepthTextureFormat_Unwrapped : int32_t {
    __E_kUnityXRDepthTextureFormat24bitOrGreater = static_cast<int32_t>(0x0),
    __E_kUnityXRDepthTextureFormat16bit = static_cast<int32_t>(0x1),
    __E_kUnityXRDepthTextureFormatReference = static_cast<int32_t>(0x2),
    __E_kUnityXRDepthTextureFormatNone = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __UnityXRDepthTextureFormat_Unwrapped() const noexcept {
    return static_cast<__UnityXRDepthTextureFormat_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr UnityXRDepthTextureFormat();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr UnityXRDepthTextureFormat(int32_t value__) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18485 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field kUnityXRDepthTextureFormat16bit value: I32(1)
  static ::UnityEngine::XR::OpenXR::API::UnityXRDepthTextureFormat const kUnityXRDepthTextureFormat16bit;

  /// @brief Field kUnityXRDepthTextureFormat24bitOrGreater value: I32(0)
  static ::UnityEngine::XR::OpenXR::API::UnityXRDepthTextureFormat const kUnityXRDepthTextureFormat24bitOrGreater;

  /// @brief Field kUnityXRDepthTextureFormatNone value: I32(3)
  static ::UnityEngine::XR::OpenXR::API::UnityXRDepthTextureFormat const kUnityXRDepthTextureFormatNone;

  /// @brief Field kUnityXRDepthTextureFormatReference value: I32(2)
  static ::UnityEngine::XR::OpenXR::API::UnityXRDepthTextureFormat const kUnityXRDepthTextureFormatReference;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::API::UnityXRDepthTextureFormat, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::API::UnityXRDepthTextureFormat, 0x4>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::API
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::API::UnityXRDepthTextureFormat, "UnityEngine.XR.OpenXR.API", "UnityXRDepthTextureFormat");
