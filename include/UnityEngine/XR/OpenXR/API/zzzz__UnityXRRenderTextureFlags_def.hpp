#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/API/UnityXRRenderTextureFlags.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnityXRRenderTextureFlags)
// Forward declare root types
namespace UnityEngine::XR::OpenXR::API {
struct UnityXRRenderTextureFlags;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::API::UnityXRRenderTextureFlags);
// Dependencies
namespace UnityEngine::XR::OpenXR::API {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.API.UnityXRRenderTextureFlags
struct CORDL_TYPE UnityXRRenderTextureFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __UnityXRRenderTextureFlags_Unwrapped
  enum struct __UnityXRRenderTextureFlags_Unwrapped : int32_t {
    __E_kUnityXRRenderTextureFlagsUVDirectionTopToBottom = static_cast<int32_t>(0x1),
    __E_kUnityXRRenderTextureFlagsMultisampleAutoResolve = static_cast<int32_t>(0x2),
    __E_kUnityXRRenderTextureFlagsLockedWidthHeight = static_cast<int32_t>(0x4),
    __E_kUnityXRRenderTextureFlagsWriteOnly = static_cast<int32_t>(0x8),
    __E_kUnityXRRenderTextureFlagsSRGB = static_cast<int32_t>(0x10),
    __E_kUnityXRRenderTextureFlagsOptimizeBufferDiscards = static_cast<int32_t>(0x20),
    __E_kUnityXRRenderTextureFlagsMotionVectorTexture = static_cast<int32_t>(0x40),
    __E_kUnityXRRenderTextureFlagsFoveationOffset = static_cast<int32_t>(0x80),
    __E_kUnityXRRenderTextureFlagsViewportAsRenderArea = static_cast<int32_t>(0x100),
    __E_kUnityXRRenderTextureFlagsHDR = static_cast<int32_t>(0x200),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __UnityXRRenderTextureFlags_Unwrapped() const noexcept {
    return static_cast<__UnityXRRenderTextureFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr UnityXRRenderTextureFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr UnityXRRenderTextureFlags(int32_t value__) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18472 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field kUnityXRRenderTextureFlagsFoveationOffset value: I32(128)
  static ::UnityEngine::XR::OpenXR::API::UnityXRRenderTextureFlags const kUnityXRRenderTextureFlagsFoveationOffset;

  /// @brief Field kUnityXRRenderTextureFlagsHDR value: I32(512)
  static ::UnityEngine::XR::OpenXR::API::UnityXRRenderTextureFlags const kUnityXRRenderTextureFlagsHDR;

  /// @brief Field kUnityXRRenderTextureFlagsLockedWidthHeight value: I32(4)
  static ::UnityEngine::XR::OpenXR::API::UnityXRRenderTextureFlags const kUnityXRRenderTextureFlagsLockedWidthHeight;

  /// @brief Field kUnityXRRenderTextureFlagsMotionVectorTexture value: I32(64)
  static ::UnityEngine::XR::OpenXR::API::UnityXRRenderTextureFlags const kUnityXRRenderTextureFlagsMotionVectorTexture;

  /// @brief Field kUnityXRRenderTextureFlagsMultisampleAutoResolve value: I32(2)
  static ::UnityEngine::XR::OpenXR::API::UnityXRRenderTextureFlags const kUnityXRRenderTextureFlagsMultisampleAutoResolve;

  /// @brief Field kUnityXRRenderTextureFlagsOptimizeBufferDiscards value: I32(32)
  static ::UnityEngine::XR::OpenXR::API::UnityXRRenderTextureFlags const kUnityXRRenderTextureFlagsOptimizeBufferDiscards;

  /// @brief Field kUnityXRRenderTextureFlagsSRGB value: I32(16)
  static ::UnityEngine::XR::OpenXR::API::UnityXRRenderTextureFlags const kUnityXRRenderTextureFlagsSRGB;

  /// @brief Field kUnityXRRenderTextureFlagsUVDirectionTopToBottom value: I32(1)
  static ::UnityEngine::XR::OpenXR::API::UnityXRRenderTextureFlags const kUnityXRRenderTextureFlagsUVDirectionTopToBottom;

  /// @brief Field kUnityXRRenderTextureFlagsViewportAsRenderArea value: I32(256)
  static ::UnityEngine::XR::OpenXR::API::UnityXRRenderTextureFlags const kUnityXRRenderTextureFlagsViewportAsRenderArea;

  /// @brief Field kUnityXRRenderTextureFlagsWriteOnly value: I32(8)
  static ::UnityEngine::XR::OpenXR::API::UnityXRRenderTextureFlags const kUnityXRRenderTextureFlagsWriteOnly;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::API::UnityXRRenderTextureFlags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::API::UnityXRRenderTextureFlags, 0x4>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::API
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::API::UnityXRRenderTextureFlags, "UnityEngine.XR.OpenXR.API", "UnityXRRenderTextureFlags");
