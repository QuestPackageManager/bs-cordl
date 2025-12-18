#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/API/UnityXRRenderTextureFormat.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnityXRRenderTextureFormat)
// Forward declare root types
namespace UnityEngine::XR::OpenXR::API {
struct UnityXRRenderTextureFormat;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::API::UnityXRRenderTextureFormat);
// Dependencies
namespace UnityEngine::XR::OpenXR::API {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.API.UnityXRRenderTextureFormat
struct CORDL_TYPE UnityXRRenderTextureFormat {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __UnityXRRenderTextureFormat_Unwrapped
  enum struct __UnityXRRenderTextureFormat_Unwrapped : int32_t {
    __E_kUnityXRRenderTextureFormatRGBA32 = static_cast<int32_t>(0x0),
    __E_kUnityXRRenderTextureFormatBGRA32 = static_cast<int32_t>(0x1),
    __E_kUnityXRRenderTextureFormatRGB565 = static_cast<int32_t>(0x2),
    __E_kUnityXRRenderTextureFormatR16G16B16A16_SFloat = static_cast<int32_t>(0x3),
    __E_kUnityXRRenderTextureFormatRGBA1010102 = static_cast<int32_t>(0x4),
    __E_kUnityXRRenderTextureFormatBGRA1010102 = static_cast<int32_t>(0x5),
    __E_kUnityXRRenderTextureFormatR11G11B10_UFloat = static_cast<int32_t>(0x6),
    __E_kUnityXRRenderTextureFormatReference = static_cast<int32_t>(0x40),
    __E_kUnityXRRenderTextureFormatSoftReferenceMSAA = static_cast<int32_t>(0x41),
    __E_kUnityXRRenderTextureFormatNone = static_cast<int32_t>(0x42),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __UnityXRRenderTextureFormat_Unwrapped() const noexcept {
    return static_cast<__UnityXRRenderTextureFormat_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr UnityXRRenderTextureFormat();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr UnityXRRenderTextureFormat(int32_t value__) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18483 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field kUnityXRRenderTextureFormatBGRA1010102 value: I32(5)
  static ::UnityEngine::XR::OpenXR::API::UnityXRRenderTextureFormat const kUnityXRRenderTextureFormatBGRA1010102;

  /// @brief Field kUnityXRRenderTextureFormatBGRA32 value: I32(1)
  static ::UnityEngine::XR::OpenXR::API::UnityXRRenderTextureFormat const kUnityXRRenderTextureFormatBGRA32;

  /// @brief Field kUnityXRRenderTextureFormatNone value: I32(66)
  static ::UnityEngine::XR::OpenXR::API::UnityXRRenderTextureFormat const kUnityXRRenderTextureFormatNone;

  /// @brief Field kUnityXRRenderTextureFormatR11G11B10_UFloat value: I32(6)
  static ::UnityEngine::XR::OpenXR::API::UnityXRRenderTextureFormat const kUnityXRRenderTextureFormatR11G11B10_UFloat;

  /// @brief Field kUnityXRRenderTextureFormatR16G16B16A16_SFloat value: I32(3)
  static ::UnityEngine::XR::OpenXR::API::UnityXRRenderTextureFormat const kUnityXRRenderTextureFormatR16G16B16A16_SFloat;

  /// @brief Field kUnityXRRenderTextureFormatRGB565 value: I32(2)
  static ::UnityEngine::XR::OpenXR::API::UnityXRRenderTextureFormat const kUnityXRRenderTextureFormatRGB565;

  /// @brief Field kUnityXRRenderTextureFormatRGBA1010102 value: I32(4)
  static ::UnityEngine::XR::OpenXR::API::UnityXRRenderTextureFormat const kUnityXRRenderTextureFormatRGBA1010102;

  /// @brief Field kUnityXRRenderTextureFormatRGBA32 value: I32(0)
  static ::UnityEngine::XR::OpenXR::API::UnityXRRenderTextureFormat const kUnityXRRenderTextureFormatRGBA32;

  /// @brief Field kUnityXRRenderTextureFormatReference value: I32(64)
  static ::UnityEngine::XR::OpenXR::API::UnityXRRenderTextureFormat const kUnityXRRenderTextureFormatReference;

  /// @brief Field kUnityXRRenderTextureFormatSoftReferenceMSAA value: I32(65)
  static ::UnityEngine::XR::OpenXR::API::UnityXRRenderTextureFormat const kUnityXRRenderTextureFormatSoftReferenceMSAA;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::API::UnityXRRenderTextureFormat, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::API::UnityXRRenderTextureFormat, 0x4>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::API
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::API::UnityXRRenderTextureFormat, "UnityEngine.XR.OpenXR.API", "UnityXRRenderTextureFormat");
