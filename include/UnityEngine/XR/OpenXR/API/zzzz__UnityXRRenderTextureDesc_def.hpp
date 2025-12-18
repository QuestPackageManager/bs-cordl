#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/API/UnityXRRenderTextureDesc.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/OpenXR/API/zzzz__UnityXRDepthTextureFormat_def.hpp"
#include "UnityEngine/XR/OpenXR/API/zzzz__UnityXRRenderTextureFormat_def.hpp"
#include "UnityEngine/XR/OpenXR/API/zzzz__UnityXRShadingRateFormat_def.hpp"
#include "UnityEngine/XR/OpenXR/API/zzzz__UnityXRTextureData_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnityXRRenderTextureDesc)
// Forward declare root types
namespace UnityEngine::XR::OpenXR::API {
struct UnityXRRenderTextureDesc;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::API::UnityXRRenderTextureDesc);
// Dependencies UnityEngine.XR.OpenXR.API.UnityXRDepthTextureFormat, UnityEngine.XR.OpenXR.API.UnityXRRenderTextureFormat, UnityEngine.XR.OpenXR.API.UnityXRShadingRateFormat,
// UnityEngine.XR.OpenXR.API.UnityXRTextureData
namespace UnityEngine::XR::OpenXR::API {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.API.UnityXRRenderTextureDesc
struct CORDL_TYPE UnityXRRenderTextureDesc {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnityXRRenderTextureDesc();

  // Ctor Parameters [CppParam { name: "colorFormat", ty: "::UnityEngine::XR::OpenXR::API::UnityXRRenderTextureFormat", modifiers: "", def_value: None }, CppParam { name: "color", ty:
  // "::UnityEngine::XR::OpenXR::API::UnityXRTextureData", modifiers: "", def_value: None }, CppParam { name: "depthFormat", ty: "::UnityEngine::XR::OpenXR::API::UnityXRDepthTextureFormat", modifiers:
  // "", def_value: None }, CppParam { name: "depth", ty: "::UnityEngine::XR::OpenXR::API::UnityXRTextureData", modifiers: "", def_value: None }, CppParam { name: "shadingRateFormat", ty:
  // "::UnityEngine::XR::OpenXR::API::UnityXRShadingRateFormat", modifiers: "", def_value: None }, CppParam { name: "shadingRate", ty: "::UnityEngine::XR::OpenXR::API::UnityXRTextureData", modifiers:
  // "", def_value: None }, CppParam { name: "width", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "height", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name:
  // "textureArrayLength", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "flags", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr UnityXRRenderTextureDesc(::UnityEngine::XR::OpenXR::API::UnityXRRenderTextureFormat colorFormat, ::UnityEngine::XR::OpenXR::API::UnityXRTextureData color,
                                     ::UnityEngine::XR::OpenXR::API::UnityXRDepthTextureFormat depthFormat, ::UnityEngine::XR::OpenXR::API::UnityXRTextureData depth,
                                     ::UnityEngine::XR::OpenXR::API::UnityXRShadingRateFormat shadingRateFormat, ::UnityEngine::XR::OpenXR::API::UnityXRTextureData shadingRate, uint32_t width,
                                     uint32_t height, uint32_t textureArrayLength, uint32_t flags) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18488 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  /// @brief Field colorFormat, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::XR::OpenXR::API::UnityXRRenderTextureFormat colorFormat;

  /// @brief Field color, offset: 0x8, size: 0x10, def value: None
  ::UnityEngine::XR::OpenXR::API::UnityXRTextureData color;

  /// @brief Field depthFormat, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::XR::OpenXR::API::UnityXRDepthTextureFormat depthFormat;

  /// @brief Field depth, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::XR::OpenXR::API::UnityXRTextureData depth;

  /// @brief Field shadingRateFormat, offset: 0x30, size: 0x4, def value: None
  ::UnityEngine::XR::OpenXR::API::UnityXRShadingRateFormat shadingRateFormat;

  /// @brief Field shadingRate, offset: 0x38, size: 0x10, def value: None
  ::UnityEngine::XR::OpenXR::API::UnityXRTextureData shadingRate;

  /// @brief Field width, offset: 0x48, size: 0x4, def value: None
  uint32_t width;

  /// @brief Field height, offset: 0x4c, size: 0x4, def value: None
  uint32_t height;

  /// @brief Field textureArrayLength, offset: 0x50, size: 0x4, def value: None
  uint32_t textureArrayLength;

  /// @brief Field flags, offset: 0x54, size: 0x4, def value: None
  uint32_t flags;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::API::UnityXRRenderTextureDesc, colorFormat) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::API::UnityXRRenderTextureDesc, color) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::API::UnityXRRenderTextureDesc, depthFormat) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::API::UnityXRRenderTextureDesc, depth) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::API::UnityXRRenderTextureDesc, shadingRateFormat) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::API::UnityXRRenderTextureDesc, shadingRate) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::API::UnityXRRenderTextureDesc, width) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::API::UnityXRRenderTextureDesc, height) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::API::UnityXRRenderTextureDesc, textureArrayLength) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::API::UnityXRRenderTextureDesc, flags) == 0x54, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::API::UnityXRRenderTextureDesc, 0x58>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::API
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::API::UnityXRRenderTextureDesc, "UnityEngine.XR.OpenXR.API", "UnityXRRenderTextureDesc");
