#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/BuiltinShaderDefine.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BuiltinShaderDefine)
// Forward declare root types
namespace UnityEngine::Rendering {
struct BuiltinShaderDefine;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::BuiltinShaderDefine);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.BuiltinShaderDefine
struct CORDL_TYPE BuiltinShaderDefine {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __BuiltinShaderDefine_Unwrapped
  enum struct __BuiltinShaderDefine_Unwrapped : int32_t {
    __E_UNITY_NO_DXT5nm = static_cast<int32_t>(0x0),
    __E_UNITY_NO_RGBM = static_cast<int32_t>(0x1),
    __E_UNITY_USE_NATIVE_HDR = static_cast<int32_t>(0x2),
    __E_UNITY_ENABLE_REFLECTION_BUFFERS = static_cast<int32_t>(0x3),
    __E_UNITY_FRAMEBUFFER_FETCH_AVAILABLE = static_cast<int32_t>(0x4),
    __E_UNITY_ENABLE_NATIVE_SHADOW_LOOKUPS = static_cast<int32_t>(0x5),
    __E_UNITY_METAL_SHADOWS_USE_POINT_FILTERING = static_cast<int32_t>(0x6),
    __E_UNITY_NO_CUBEMAP_ARRAY = static_cast<int32_t>(0x7),
    __E_UNITY_NO_SCREENSPACE_SHADOWS = static_cast<int32_t>(0x8),
    __E_UNITY_USE_DITHER_MASK_FOR_ALPHABLENDED_SHADOWS = static_cast<int32_t>(0x9),
    __E_UNITY_PBS_USE_BRDF1 = static_cast<int32_t>(0xa),
    __E_UNITY_PBS_USE_BRDF2 = static_cast<int32_t>(0xb),
    __E_UNITY_PBS_USE_BRDF3 = static_cast<int32_t>(0xc),
    __E_UNITY_NO_FULL_STANDARD_SHADER = static_cast<int32_t>(0xd),
    __E_UNITY_SPECCUBE_BOX_PROJECTION = static_cast<int32_t>(0xe),
    __E_UNITY_SPECCUBE_BLENDING = static_cast<int32_t>(0xf),
    __E_UNITY_ENABLE_DETAIL_NORMALMAP = static_cast<int32_t>(0x10),
    __E_SHADER_API_MOBILE = static_cast<int32_t>(0x11),
    __E_SHADER_API_DESKTOP = static_cast<int32_t>(0x12),
    __E_UNITY_HARDWARE_TIER1 = static_cast<int32_t>(0x13),
    __E_UNITY_HARDWARE_TIER2 = static_cast<int32_t>(0x14),
    __E_UNITY_HARDWARE_TIER3 = static_cast<int32_t>(0x15),
    __E_UNITY_COLORSPACE_GAMMA = static_cast<int32_t>(0x16),
    __E_UNITY_LIGHT_PROBE_PROXY_VOLUME = static_cast<int32_t>(0x17),
    __E_UNITY_HALF_PRECISION_FRAGMENT_SHADER_REGISTERS = static_cast<int32_t>(0x18),
    __E_UNITY_LIGHTMAP_DLDR_ENCODING = static_cast<int32_t>(0x19),
    __E_UNITY_LIGHTMAP_RGBM_ENCODING = static_cast<int32_t>(0x1a),
    __E_UNITY_LIGHTMAP_FULL_HDR = static_cast<int32_t>(0x1b),
    __E_UNITY_VIRTUAL_TEXTURING = static_cast<int32_t>(0x1c),
    __E_UNITY_PRETRANSFORM_TO_DISPLAY_ORIENTATION = static_cast<int32_t>(0x1d),
    __E_UNITY_ASTC_NORMALMAP_ENCODING = static_cast<int32_t>(0x1e),
    __E_SHADER_API_GLES30 = static_cast<int32_t>(0x1f),
    __E_UNITY_UNIFIED_SHADER_PRECISION_MODEL = static_cast<int32_t>(0x20),
    __E_UNITY_PLATFORM_SUPPORTS_WAVE_32 = static_cast<int32_t>(0x21),
    __E_UNITY_PLATFORM_SUPPORTS_WAVE_64 = static_cast<int32_t>(0x22),
    __E_UNITY_NEEDS_RENDERPASS_FBFETCH_FALLBACK = static_cast<int32_t>(0x23),
    __E_UNITY_PLATFORM_SUPPORTS_DEPTH_FETCH = static_cast<int32_t>(0x24),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __BuiltinShaderDefine_Unwrapped() const noexcept {
    return static_cast<__BuiltinShaderDefine_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr BuiltinShaderDefine();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr BuiltinShaderDefine(int32_t value__) noexcept;

  /// @brief Field SHADER_API_DESKTOP value: I32(18)
  static ::UnityEngine::Rendering::BuiltinShaderDefine const SHADER_API_DESKTOP;

  /// @brief Field SHADER_API_GLES30 value: I32(31)
  static ::UnityEngine::Rendering::BuiltinShaderDefine const SHADER_API_GLES30;

  /// @brief Field SHADER_API_MOBILE value: I32(17)
  static ::UnityEngine::Rendering::BuiltinShaderDefine const SHADER_API_MOBILE;

  /// @brief Field UNITY_ASTC_NORMALMAP_ENCODING value: I32(30)
  static ::UnityEngine::Rendering::BuiltinShaderDefine const UNITY_ASTC_NORMALMAP_ENCODING;

  /// @brief Field UNITY_COLORSPACE_GAMMA value: I32(22)
  static ::UnityEngine::Rendering::BuiltinShaderDefine const UNITY_COLORSPACE_GAMMA;

  /// @brief Field UNITY_ENABLE_DETAIL_NORMALMAP value: I32(16)
  static ::UnityEngine::Rendering::BuiltinShaderDefine const UNITY_ENABLE_DETAIL_NORMALMAP;

  /// @brief Field UNITY_ENABLE_NATIVE_SHADOW_LOOKUPS value: I32(5)
  static ::UnityEngine::Rendering::BuiltinShaderDefine const UNITY_ENABLE_NATIVE_SHADOW_LOOKUPS;

  /// @brief Field UNITY_ENABLE_REFLECTION_BUFFERS value: I32(3)
  static ::UnityEngine::Rendering::BuiltinShaderDefine const UNITY_ENABLE_REFLECTION_BUFFERS;

  /// @brief Field UNITY_FRAMEBUFFER_FETCH_AVAILABLE value: I32(4)
  static ::UnityEngine::Rendering::BuiltinShaderDefine const UNITY_FRAMEBUFFER_FETCH_AVAILABLE;

  /// @brief Field UNITY_HALF_PRECISION_FRAGMENT_SHADER_REGISTERS value: I32(24)
  static ::UnityEngine::Rendering::BuiltinShaderDefine const UNITY_HALF_PRECISION_FRAGMENT_SHADER_REGISTERS;

  /// @brief Field UNITY_HARDWARE_TIER1 value: I32(19)
  static ::UnityEngine::Rendering::BuiltinShaderDefine const UNITY_HARDWARE_TIER1;

  /// @brief Field UNITY_HARDWARE_TIER2 value: I32(20)
  static ::UnityEngine::Rendering::BuiltinShaderDefine const UNITY_HARDWARE_TIER2;

  /// @brief Field UNITY_HARDWARE_TIER3 value: I32(21)
  static ::UnityEngine::Rendering::BuiltinShaderDefine const UNITY_HARDWARE_TIER3;

  /// @brief Field UNITY_LIGHTMAP_DLDR_ENCODING value: I32(25)
  static ::UnityEngine::Rendering::BuiltinShaderDefine const UNITY_LIGHTMAP_DLDR_ENCODING;

  /// @brief Field UNITY_LIGHTMAP_FULL_HDR value: I32(27)
  static ::UnityEngine::Rendering::BuiltinShaderDefine const UNITY_LIGHTMAP_FULL_HDR;

  /// @brief Field UNITY_LIGHTMAP_RGBM_ENCODING value: I32(26)
  static ::UnityEngine::Rendering::BuiltinShaderDefine const UNITY_LIGHTMAP_RGBM_ENCODING;

  /// @brief Field UNITY_LIGHT_PROBE_PROXY_VOLUME value: I32(23)
  static ::UnityEngine::Rendering::BuiltinShaderDefine const UNITY_LIGHT_PROBE_PROXY_VOLUME;

  /// @brief Field UNITY_METAL_SHADOWS_USE_POINT_FILTERING value: I32(6)
  static ::UnityEngine::Rendering::BuiltinShaderDefine const UNITY_METAL_SHADOWS_USE_POINT_FILTERING;

  /// @brief Field UNITY_NEEDS_RENDERPASS_FBFETCH_FALLBACK value: I32(35)
  static ::UnityEngine::Rendering::BuiltinShaderDefine const UNITY_NEEDS_RENDERPASS_FBFETCH_FALLBACK;

  /// @brief Field UNITY_NO_CUBEMAP_ARRAY value: I32(7)
  static ::UnityEngine::Rendering::BuiltinShaderDefine const UNITY_NO_CUBEMAP_ARRAY;

  /// @brief Field UNITY_NO_DXT5nm value: I32(0)
  static ::UnityEngine::Rendering::BuiltinShaderDefine const UNITY_NO_DXT5nm;

  /// @brief Field UNITY_NO_FULL_STANDARD_SHADER value: I32(13)
  static ::UnityEngine::Rendering::BuiltinShaderDefine const UNITY_NO_FULL_STANDARD_SHADER;

  /// @brief Field UNITY_NO_RGBM value: I32(1)
  static ::UnityEngine::Rendering::BuiltinShaderDefine const UNITY_NO_RGBM;

  /// @brief Field UNITY_NO_SCREENSPACE_SHADOWS value: I32(8)
  static ::UnityEngine::Rendering::BuiltinShaderDefine const UNITY_NO_SCREENSPACE_SHADOWS;

  /// @brief Field UNITY_PBS_USE_BRDF1 value: I32(10)
  static ::UnityEngine::Rendering::BuiltinShaderDefine const UNITY_PBS_USE_BRDF1;

  /// @brief Field UNITY_PBS_USE_BRDF2 value: I32(11)
  static ::UnityEngine::Rendering::BuiltinShaderDefine const UNITY_PBS_USE_BRDF2;

  /// @brief Field UNITY_PBS_USE_BRDF3 value: I32(12)
  static ::UnityEngine::Rendering::BuiltinShaderDefine const UNITY_PBS_USE_BRDF3;

  /// @brief Field UNITY_PLATFORM_SUPPORTS_DEPTH_FETCH value: I32(36)
  static ::UnityEngine::Rendering::BuiltinShaderDefine const UNITY_PLATFORM_SUPPORTS_DEPTH_FETCH;

  /// @brief Field UNITY_PLATFORM_SUPPORTS_WAVE_32 value: I32(33)
  static ::UnityEngine::Rendering::BuiltinShaderDefine const UNITY_PLATFORM_SUPPORTS_WAVE_32;

  /// @brief Field UNITY_PLATFORM_SUPPORTS_WAVE_64 value: I32(34)
  static ::UnityEngine::Rendering::BuiltinShaderDefine const UNITY_PLATFORM_SUPPORTS_WAVE_64;

  /// @brief Field UNITY_PRETRANSFORM_TO_DISPLAY_ORIENTATION value: I32(29)
  static ::UnityEngine::Rendering::BuiltinShaderDefine const UNITY_PRETRANSFORM_TO_DISPLAY_ORIENTATION;

  /// @brief Field UNITY_SPECCUBE_BLENDING value: I32(15)
  static ::UnityEngine::Rendering::BuiltinShaderDefine const UNITY_SPECCUBE_BLENDING;

  /// @brief Field UNITY_SPECCUBE_BOX_PROJECTION value: I32(14)
  static ::UnityEngine::Rendering::BuiltinShaderDefine const UNITY_SPECCUBE_BOX_PROJECTION;

  /// @brief Field UNITY_UNIFIED_SHADER_PRECISION_MODEL value: I32(32)
  static ::UnityEngine::Rendering::BuiltinShaderDefine const UNITY_UNIFIED_SHADER_PRECISION_MODEL;

  /// @brief Field UNITY_USE_DITHER_MASK_FOR_ALPHABLENDED_SHADOWS value: I32(9)
  static ::UnityEngine::Rendering::BuiltinShaderDefine const UNITY_USE_DITHER_MASK_FOR_ALPHABLENDED_SHADOWS;

  /// @brief Field UNITY_USE_NATIVE_HDR value: I32(2)
  static ::UnityEngine::Rendering::BuiltinShaderDefine const UNITY_USE_NATIVE_HDR;

  /// @brief Field UNITY_VIRTUAL_TEXTURING value: I32(28)
  static ::UnityEngine::Rendering::BuiltinShaderDefine const UNITY_VIRTUAL_TEXTURING;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10722 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::BuiltinShaderDefine, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::BuiltinShaderDefine, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::BuiltinShaderDefine, "UnityEngine.Rendering", "BuiltinShaderDefine");
