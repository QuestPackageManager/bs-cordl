#pragma once
// IWYU pragma private; include "UnityEngine/Experimental/Rendering/GraphicsFormat.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GraphicsFormat)
// Forward declare root types
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Experimental::Rendering::GraphicsFormat);
// Type: UnityEngine.Experimental.Rendering::GraphicsFormat
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering {
// Is value type: true
// CS Name: ::UnityEngine.Experimental.Rendering::GraphicsFormat
struct CORDL_TYPE GraphicsFormat {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __GraphicsFormat_Unwrapped
  enum struct __GraphicsFormat_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_R8_SRGB = static_cast<int32_t>(0x1),
    __E_R8G8_SRGB = static_cast<int32_t>(0x2),
    __E_R8G8B8_SRGB = static_cast<int32_t>(0x3),
    __E_R8G8B8A8_SRGB = static_cast<int32_t>(0x4),
    __E_R8_UNorm = static_cast<int32_t>(0x5),
    __E_R8G8_UNorm = static_cast<int32_t>(0x6),
    __E_R8G8B8_UNorm = static_cast<int32_t>(0x7),
    __E_R8G8B8A8_UNorm = static_cast<int32_t>(0x8),
    __E_R8_SNorm = static_cast<int32_t>(0x9),
    __E_R8G8_SNorm = static_cast<int32_t>(0xa),
    __E_R8G8B8_SNorm = static_cast<int32_t>(0xb),
    __E_R8G8B8A8_SNorm = static_cast<int32_t>(0xc),
    __E_R8_UInt = static_cast<int32_t>(0xd),
    __E_R8G8_UInt = static_cast<int32_t>(0xe),
    __E_R8G8B8_UInt = static_cast<int32_t>(0xf),
    __E_R8G8B8A8_UInt = static_cast<int32_t>(0x10),
    __E_R8_SInt = static_cast<int32_t>(0x11),
    __E_R8G8_SInt = static_cast<int32_t>(0x12),
    __E_R8G8B8_SInt = static_cast<int32_t>(0x13),
    __E_R8G8B8A8_SInt = static_cast<int32_t>(0x14),
    __E_R16_UNorm = static_cast<int32_t>(0x15),
    __E_R16G16_UNorm = static_cast<int32_t>(0x16),
    __E_R16G16B16_UNorm = static_cast<int32_t>(0x17),
    __E_R16G16B16A16_UNorm = static_cast<int32_t>(0x18),
    __E_R16_SNorm = static_cast<int32_t>(0x19),
    __E_R16G16_SNorm = static_cast<int32_t>(0x1a),
    __E_R16G16B16_SNorm = static_cast<int32_t>(0x1b),
    __E_R16G16B16A16_SNorm = static_cast<int32_t>(0x1c),
    __E_R16_UInt = static_cast<int32_t>(0x1d),
    __E_R16G16_UInt = static_cast<int32_t>(0x1e),
    __E_R16G16B16_UInt = static_cast<int32_t>(0x1f),
    __E_R16G16B16A16_UInt = static_cast<int32_t>(0x20),
    __E_R16_SInt = static_cast<int32_t>(0x21),
    __E_R16G16_SInt = static_cast<int32_t>(0x22),
    __E_R16G16B16_SInt = static_cast<int32_t>(0x23),
    __E_R16G16B16A16_SInt = static_cast<int32_t>(0x24),
    __E_R32_UInt = static_cast<int32_t>(0x25),
    __E_R32G32_UInt = static_cast<int32_t>(0x26),
    __E_R32G32B32_UInt = static_cast<int32_t>(0x27),
    __E_R32G32B32A32_UInt = static_cast<int32_t>(0x28),
    __E_R32_SInt = static_cast<int32_t>(0x29),
    __E_R32G32_SInt = static_cast<int32_t>(0x2a),
    __E_R32G32B32_SInt = static_cast<int32_t>(0x2b),
    __E_R32G32B32A32_SInt = static_cast<int32_t>(0x2c),
    __E_R16_SFloat = static_cast<int32_t>(0x2d),
    __E_R16G16_SFloat = static_cast<int32_t>(0x2e),
    __E_R16G16B16_SFloat = static_cast<int32_t>(0x2f),
    __E_R16G16B16A16_SFloat = static_cast<int32_t>(0x30),
    __E_R32_SFloat = static_cast<int32_t>(0x31),
    __E_R32G32_SFloat = static_cast<int32_t>(0x32),
    __E_R32G32B32_SFloat = static_cast<int32_t>(0x33),
    __E_R32G32B32A32_SFloat = static_cast<int32_t>(0x34),
    __E_B8G8R8_SRGB = static_cast<int32_t>(0x38),
    __E_B8G8R8A8_SRGB = static_cast<int32_t>(0x39),
    __E_B8G8R8_UNorm = static_cast<int32_t>(0x3a),
    __E_B8G8R8A8_UNorm = static_cast<int32_t>(0x3b),
    __E_B8G8R8_SNorm = static_cast<int32_t>(0x3c),
    __E_B8G8R8A8_SNorm = static_cast<int32_t>(0x3d),
    __E_B8G8R8_UInt = static_cast<int32_t>(0x3e),
    __E_B8G8R8A8_UInt = static_cast<int32_t>(0x3f),
    __E_B8G8R8_SInt = static_cast<int32_t>(0x40),
    __E_B8G8R8A8_SInt = static_cast<int32_t>(0x41),
    __E_R4G4B4A4_UNormPack16 = static_cast<int32_t>(0x42),
    __E_B4G4R4A4_UNormPack16 = static_cast<int32_t>(0x43),
    __E_R5G6B5_UNormPack16 = static_cast<int32_t>(0x44),
    __E_B5G6R5_UNormPack16 = static_cast<int32_t>(0x45),
    __E_R5G5B5A1_UNormPack16 = static_cast<int32_t>(0x46),
    __E_B5G5R5A1_UNormPack16 = static_cast<int32_t>(0x47),
    __E_A1R5G5B5_UNormPack16 = static_cast<int32_t>(0x48),
    __E_E5B9G9R9_UFloatPack32 = static_cast<int32_t>(0x49),
    __E_B10G11R11_UFloatPack32 = static_cast<int32_t>(0x4a),
    __E_A2B10G10R10_UNormPack32 = static_cast<int32_t>(0x4b),
    __E_A2B10G10R10_UIntPack32 = static_cast<int32_t>(0x4c),
    __E_A2B10G10R10_SIntPack32 = static_cast<int32_t>(0x4d),
    __E_A2R10G10B10_UNormPack32 = static_cast<int32_t>(0x4e),
    __E_A2R10G10B10_UIntPack32 = static_cast<int32_t>(0x4f),
    __E_A2R10G10B10_SIntPack32 = static_cast<int32_t>(0x50),
    __E_A2R10G10B10_XRSRGBPack32 = static_cast<int32_t>(0x51),
    __E_A2R10G10B10_XRUNormPack32 = static_cast<int32_t>(0x52),
    __E_R10G10B10_XRSRGBPack32 = static_cast<int32_t>(0x53),
    __E_R10G10B10_XRUNormPack32 = static_cast<int32_t>(0x54),
    __E_A10R10G10B10_XRSRGBPack32 = static_cast<int32_t>(0x55),
    __E_A10R10G10B10_XRUNormPack32 = static_cast<int32_t>(0x56),
    __E_D16_UNorm = static_cast<int32_t>(0x5a),
    __E_D24_UNorm = static_cast<int32_t>(0x5b),
    __E_D24_UNorm_S8_UInt = static_cast<int32_t>(0x5c),
    __E_D32_SFloat = static_cast<int32_t>(0x5d),
    __E_D32_SFloat_S8_UInt = static_cast<int32_t>(0x5e),
    __E_S8_UInt = static_cast<int32_t>(0x5f),
    __E_RGB_DXT1_SRGB = static_cast<int32_t>(0x60),
    __E_RGBA_DXT1_SRGB = static_cast<int32_t>(0x60),
    __E_RGB_DXT1_UNorm = static_cast<int32_t>(0x61),
    __E_RGBA_DXT1_UNorm = static_cast<int32_t>(0x61),
    __E_RGBA_DXT3_SRGB = static_cast<int32_t>(0x62),
    __E_RGBA_DXT3_UNorm = static_cast<int32_t>(0x63),
    __E_RGBA_DXT5_SRGB = static_cast<int32_t>(0x64),
    __E_RGBA_DXT5_UNorm = static_cast<int32_t>(0x65),
    __E_R_BC4_UNorm = static_cast<int32_t>(0x66),
    __E_R_BC4_SNorm = static_cast<int32_t>(0x67),
    __E_RG_BC5_UNorm = static_cast<int32_t>(0x68),
    __E_RG_BC5_SNorm = static_cast<int32_t>(0x69),
    __E_RGB_BC6H_UFloat = static_cast<int32_t>(0x6a),
    __E_RGB_BC6H_SFloat = static_cast<int32_t>(0x6b),
    __E_RGBA_BC7_SRGB = static_cast<int32_t>(0x6c),
    __E_RGBA_BC7_UNorm = static_cast<int32_t>(0x6d),
    __E_RGB_PVRTC_2Bpp_SRGB = static_cast<int32_t>(0x6e),
    __E_RGB_PVRTC_2Bpp_UNorm = static_cast<int32_t>(0x6f),
    __E_RGB_PVRTC_4Bpp_SRGB = static_cast<int32_t>(0x70),
    __E_RGB_PVRTC_4Bpp_UNorm = static_cast<int32_t>(0x71),
    __E_RGBA_PVRTC_2Bpp_SRGB = static_cast<int32_t>(0x72),
    __E_RGBA_PVRTC_2Bpp_UNorm = static_cast<int32_t>(0x73),
    __E_RGBA_PVRTC_4Bpp_SRGB = static_cast<int32_t>(0x74),
    __E_RGBA_PVRTC_4Bpp_UNorm = static_cast<int32_t>(0x75),
    __E_RGB_ETC_UNorm = static_cast<int32_t>(0x76),
    __E_RGB_ETC2_SRGB = static_cast<int32_t>(0x77),
    __E_RGB_ETC2_UNorm = static_cast<int32_t>(0x78),
    __E_RGB_A1_ETC2_SRGB = static_cast<int32_t>(0x79),
    __E_RGB_A1_ETC2_UNorm = static_cast<int32_t>(0x7a),
    __E_RGBA_ETC2_SRGB = static_cast<int32_t>(0x7b),
    __E_RGBA_ETC2_UNorm = static_cast<int32_t>(0x7c),
    __E_R_EAC_UNorm = static_cast<int32_t>(0x7d),
    __E_R_EAC_SNorm = static_cast<int32_t>(0x7e),
    __E_RG_EAC_UNorm = static_cast<int32_t>(0x7f),
    __E_RG_EAC_SNorm = static_cast<int32_t>(0x80),
    __E_RGBA_ASTC4X4_SRGB = static_cast<int32_t>(0x81),
    __E_RGBA_ASTC4X4_UNorm = static_cast<int32_t>(0x82),
    __E_RGBA_ASTC5X5_SRGB = static_cast<int32_t>(0x83),
    __E_RGBA_ASTC5X5_UNorm = static_cast<int32_t>(0x84),
    __E_RGBA_ASTC6X6_SRGB = static_cast<int32_t>(0x85),
    __E_RGBA_ASTC6X6_UNorm = static_cast<int32_t>(0x86),
    __E_RGBA_ASTC8X8_SRGB = static_cast<int32_t>(0x87),
    __E_RGBA_ASTC8X8_UNorm = static_cast<int32_t>(0x88),
    __E_RGBA_ASTC10X10_SRGB = static_cast<int32_t>(0x89),
    __E_RGBA_ASTC10X10_UNorm = static_cast<int32_t>(0x8a),
    __E_RGBA_ASTC12X12_SRGB = static_cast<int32_t>(0x8b),
    __E_RGBA_ASTC12X12_UNorm = static_cast<int32_t>(0x8c),
    __E_YUV2 = static_cast<int32_t>(0x8d),
    __E_DepthAuto = static_cast<int32_t>(0x8e),
    __E_ShadowAuto = static_cast<int32_t>(0x8f),
    __E_VideoAuto = static_cast<int32_t>(0x90),
    __E_RGBA_ASTC4X4_UFloat = static_cast<int32_t>(0x91),
    __E_RGBA_ASTC5X5_UFloat = static_cast<int32_t>(0x92),
    __E_RGBA_ASTC6X6_UFloat = static_cast<int32_t>(0x93),
    __E_RGBA_ASTC8X8_UFloat = static_cast<int32_t>(0x94),
    __E_RGBA_ASTC10X10_UFloat = static_cast<int32_t>(0x95),
    __E_RGBA_ASTC12X12_UFloat = static_cast<int32_t>(0x96),
    __E_D16_UNorm_S8_UInt = static_cast<int32_t>(0x97),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __GraphicsFormat_Unwrapped() const noexcept {
    return static_cast<__GraphicsFormat_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphicsFormat();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr GraphicsFormat(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field A10R10G10B10_XRSRGBPack32 value: static_cast<int32_t>(0x55)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const A10R10G10B10_XRSRGBPack32;

  /// @brief Field A10R10G10B10_XRUNormPack32 value: static_cast<int32_t>(0x56)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const A10R10G10B10_XRUNormPack32;

  /// @brief Field A1R5G5B5_UNormPack16 value: static_cast<int32_t>(0x48)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const A1R5G5B5_UNormPack16;

  /// @brief Field A2B10G10R10_SIntPack32 value: static_cast<int32_t>(0x4d)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const A2B10G10R10_SIntPack32;

  /// @brief Field A2B10G10R10_UIntPack32 value: static_cast<int32_t>(0x4c)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const A2B10G10R10_UIntPack32;

  /// @brief Field A2B10G10R10_UNormPack32 value: static_cast<int32_t>(0x4b)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const A2B10G10R10_UNormPack32;

  /// @brief Field A2R10G10B10_SIntPack32 value: static_cast<int32_t>(0x50)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const A2R10G10B10_SIntPack32;

  /// @brief Field A2R10G10B10_UIntPack32 value: static_cast<int32_t>(0x4f)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const A2R10G10B10_UIntPack32;

  /// @brief Field A2R10G10B10_UNormPack32 value: static_cast<int32_t>(0x4e)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const A2R10G10B10_UNormPack32;

  /// @brief Field A2R10G10B10_XRSRGBPack32 value: static_cast<int32_t>(0x51)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const A2R10G10B10_XRSRGBPack32;

  /// @brief Field A2R10G10B10_XRUNormPack32 value: static_cast<int32_t>(0x52)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const A2R10G10B10_XRUNormPack32;

  /// @brief Field B10G11R11_UFloatPack32 value: static_cast<int32_t>(0x4a)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const B10G11R11_UFloatPack32;

  /// @brief Field B4G4R4A4_UNormPack16 value: static_cast<int32_t>(0x43)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const B4G4R4A4_UNormPack16;

  /// @brief Field B5G5R5A1_UNormPack16 value: static_cast<int32_t>(0x47)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const B5G5R5A1_UNormPack16;

  /// @brief Field B5G6R5_UNormPack16 value: static_cast<int32_t>(0x45)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const B5G6R5_UNormPack16;

  /// @brief Field B8G8R8A8_SInt value: static_cast<int32_t>(0x41)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const B8G8R8A8_SInt;

  /// @brief Field B8G8R8A8_SNorm value: static_cast<int32_t>(0x3d)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const B8G8R8A8_SNorm;

  /// @brief Field B8G8R8A8_SRGB value: static_cast<int32_t>(0x39)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const B8G8R8A8_SRGB;

  /// @brief Field B8G8R8A8_UInt value: static_cast<int32_t>(0x3f)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const B8G8R8A8_UInt;

  /// @brief Field B8G8R8A8_UNorm value: static_cast<int32_t>(0x3b)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const B8G8R8A8_UNorm;

  /// @brief Field B8G8R8_SInt value: static_cast<int32_t>(0x40)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const B8G8R8_SInt;

  /// @brief Field B8G8R8_SNorm value: static_cast<int32_t>(0x3c)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const B8G8R8_SNorm;

  /// @brief Field B8G8R8_SRGB value: static_cast<int32_t>(0x38)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const B8G8R8_SRGB;

  /// @brief Field B8G8R8_UInt value: static_cast<int32_t>(0x3e)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const B8G8R8_UInt;

  /// @brief Field B8G8R8_UNorm value: static_cast<int32_t>(0x3a)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const B8G8R8_UNorm;

  /// @brief Field D16_UNorm value: static_cast<int32_t>(0x5a)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const D16_UNorm;

  /// @brief Field D16_UNorm_S8_UInt value: static_cast<int32_t>(0x97)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const D16_UNorm_S8_UInt;

  /// @brief Field D24_UNorm value: static_cast<int32_t>(0x5b)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const D24_UNorm;

  /// @brief Field D24_UNorm_S8_UInt value: static_cast<int32_t>(0x5c)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const D24_UNorm_S8_UInt;

  /// @brief Field D32_SFloat value: static_cast<int32_t>(0x5d)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const D32_SFloat;

  /// @brief Field D32_SFloat_S8_UInt value: static_cast<int32_t>(0x5e)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const D32_SFloat_S8_UInt;

  /// @brief Field DepthAuto value: static_cast<int32_t>(0x8e)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const DepthAuto;

  /// @brief Field E5B9G9R9_UFloatPack32 value: static_cast<int32_t>(0x49)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const E5B9G9R9_UFloatPack32;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const None;

  /// @brief Field R10G10B10_XRSRGBPack32 value: static_cast<int32_t>(0x53)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const R10G10B10_XRSRGBPack32;

  /// @brief Field R10G10B10_XRUNormPack32 value: static_cast<int32_t>(0x54)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const R10G10B10_XRUNormPack32;

  /// @brief Field R16G16B16A16_SFloat value: static_cast<int32_t>(0x30)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const R16G16B16A16_SFloat;

  /// @brief Field R16G16B16A16_SInt value: static_cast<int32_t>(0x24)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const R16G16B16A16_SInt;

  /// @brief Field R16G16B16A16_SNorm value: static_cast<int32_t>(0x1c)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const R16G16B16A16_SNorm;

  /// @brief Field R16G16B16A16_UInt value: static_cast<int32_t>(0x20)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const R16G16B16A16_UInt;

  /// @brief Field R16G16B16A16_UNorm value: static_cast<int32_t>(0x18)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const R16G16B16A16_UNorm;

  /// @brief Field R16G16B16_SFloat value: static_cast<int32_t>(0x2f)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const R16G16B16_SFloat;

  /// @brief Field R16G16B16_SInt value: static_cast<int32_t>(0x23)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const R16G16B16_SInt;

  /// @brief Field R16G16B16_SNorm value: static_cast<int32_t>(0x1b)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const R16G16B16_SNorm;

  /// @brief Field R16G16B16_UInt value: static_cast<int32_t>(0x1f)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const R16G16B16_UInt;

  /// @brief Field R16G16B16_UNorm value: static_cast<int32_t>(0x17)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const R16G16B16_UNorm;

  /// @brief Field R16G16_SFloat value: static_cast<int32_t>(0x2e)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const R16G16_SFloat;

  /// @brief Field R16G16_SInt value: static_cast<int32_t>(0x22)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const R16G16_SInt;

  /// @brief Field R16G16_SNorm value: static_cast<int32_t>(0x1a)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const R16G16_SNorm;

  /// @brief Field R16G16_UInt value: static_cast<int32_t>(0x1e)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const R16G16_UInt;

  /// @brief Field R16G16_UNorm value: static_cast<int32_t>(0x16)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const R16G16_UNorm;

  /// @brief Field R16_SFloat value: static_cast<int32_t>(0x2d)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const R16_SFloat;

  /// @brief Field R16_SInt value: static_cast<int32_t>(0x21)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const R16_SInt;

  /// @brief Field R16_SNorm value: static_cast<int32_t>(0x19)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const R16_SNorm;

  /// @brief Field R16_UInt value: static_cast<int32_t>(0x1d)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const R16_UInt;

  /// @brief Field R16_UNorm value: static_cast<int32_t>(0x15)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const R16_UNorm;

  /// @brief Field R32G32B32A32_SFloat value: static_cast<int32_t>(0x34)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const R32G32B32A32_SFloat;

  /// @brief Field R32G32B32A32_SInt value: static_cast<int32_t>(0x2c)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const R32G32B32A32_SInt;

  /// @brief Field R32G32B32A32_UInt value: static_cast<int32_t>(0x28)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const R32G32B32A32_UInt;

  /// @brief Field R32G32B32_SFloat value: static_cast<int32_t>(0x33)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const R32G32B32_SFloat;

  /// @brief Field R32G32B32_SInt value: static_cast<int32_t>(0x2b)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const R32G32B32_SInt;

  /// @brief Field R32G32B32_UInt value: static_cast<int32_t>(0x27)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const R32G32B32_UInt;

  /// @brief Field R32G32_SFloat value: static_cast<int32_t>(0x32)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const R32G32_SFloat;

  /// @brief Field R32G32_SInt value: static_cast<int32_t>(0x2a)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const R32G32_SInt;

  /// @brief Field R32G32_UInt value: static_cast<int32_t>(0x26)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const R32G32_UInt;

  /// @brief Field R32_SFloat value: static_cast<int32_t>(0x31)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const R32_SFloat;

  /// @brief Field R32_SInt value: static_cast<int32_t>(0x29)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const R32_SInt;

  /// @brief Field R32_UInt value: static_cast<int32_t>(0x25)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const R32_UInt;

  /// @brief Field R4G4B4A4_UNormPack16 value: static_cast<int32_t>(0x42)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const R4G4B4A4_UNormPack16;

  /// @brief Field R5G5B5A1_UNormPack16 value: static_cast<int32_t>(0x46)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const R5G5B5A1_UNormPack16;

  /// @brief Field R5G6B5_UNormPack16 value: static_cast<int32_t>(0x44)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const R5G6B5_UNormPack16;

  /// @brief Field R8G8B8A8_SInt value: static_cast<int32_t>(0x14)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const R8G8B8A8_SInt;

  /// @brief Field R8G8B8A8_SNorm value: static_cast<int32_t>(0xc)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const R8G8B8A8_SNorm;

  /// @brief Field R8G8B8A8_SRGB value: static_cast<int32_t>(0x4)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const R8G8B8A8_SRGB;

  /// @brief Field R8G8B8A8_UInt value: static_cast<int32_t>(0x10)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const R8G8B8A8_UInt;

  /// @brief Field R8G8B8A8_UNorm value: static_cast<int32_t>(0x8)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const R8G8B8A8_UNorm;

  /// @brief Field R8G8B8_SInt value: static_cast<int32_t>(0x13)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const R8G8B8_SInt;

  /// @brief Field R8G8B8_SNorm value: static_cast<int32_t>(0xb)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const R8G8B8_SNorm;

  /// @brief Field R8G8B8_SRGB value: static_cast<int32_t>(0x3)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const R8G8B8_SRGB;

  /// @brief Field R8G8B8_UInt value: static_cast<int32_t>(0xf)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const R8G8B8_UInt;

  /// @brief Field R8G8B8_UNorm value: static_cast<int32_t>(0x7)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const R8G8B8_UNorm;

  /// @brief Field R8G8_SInt value: static_cast<int32_t>(0x12)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const R8G8_SInt;

  /// @brief Field R8G8_SNorm value: static_cast<int32_t>(0xa)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const R8G8_SNorm;

  /// @brief Field R8G8_SRGB value: static_cast<int32_t>(0x2)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const R8G8_SRGB;

  /// @brief Field R8G8_UInt value: static_cast<int32_t>(0xe)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const R8G8_UInt;

  /// @brief Field R8G8_UNorm value: static_cast<int32_t>(0x6)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const R8G8_UNorm;

  /// @brief Field R8_SInt value: static_cast<int32_t>(0x11)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const R8_SInt;

  /// @brief Field R8_SNorm value: static_cast<int32_t>(0x9)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const R8_SNorm;

  /// @brief Field R8_SRGB value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const R8_SRGB;

  /// @brief Field R8_UInt value: static_cast<int32_t>(0xd)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const R8_UInt;

  /// @brief Field R8_UNorm value: static_cast<int32_t>(0x5)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const R8_UNorm;

  /// @brief Field RGBA_ASTC10X10_SRGB value: static_cast<int32_t>(0x89)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const RGBA_ASTC10X10_SRGB;

  /// @brief Field RGBA_ASTC10X10_UFloat value: static_cast<int32_t>(0x95)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const RGBA_ASTC10X10_UFloat;

  /// @brief Field RGBA_ASTC10X10_UNorm value: static_cast<int32_t>(0x8a)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const RGBA_ASTC10X10_UNorm;

  /// @brief Field RGBA_ASTC12X12_SRGB value: static_cast<int32_t>(0x8b)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const RGBA_ASTC12X12_SRGB;

  /// @brief Field RGBA_ASTC12X12_UFloat value: static_cast<int32_t>(0x96)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const RGBA_ASTC12X12_UFloat;

  /// @brief Field RGBA_ASTC12X12_UNorm value: static_cast<int32_t>(0x8c)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const RGBA_ASTC12X12_UNorm;

  /// @brief Field RGBA_ASTC4X4_SRGB value: static_cast<int32_t>(0x81)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const RGBA_ASTC4X4_SRGB;

  /// @brief Field RGBA_ASTC4X4_UFloat value: static_cast<int32_t>(0x91)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const RGBA_ASTC4X4_UFloat;

  /// @brief Field RGBA_ASTC4X4_UNorm value: static_cast<int32_t>(0x82)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const RGBA_ASTC4X4_UNorm;

  /// @brief Field RGBA_ASTC5X5_SRGB value: static_cast<int32_t>(0x83)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const RGBA_ASTC5X5_SRGB;

  /// @brief Field RGBA_ASTC5X5_UFloat value: static_cast<int32_t>(0x92)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const RGBA_ASTC5X5_UFloat;

  /// @brief Field RGBA_ASTC5X5_UNorm value: static_cast<int32_t>(0x84)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const RGBA_ASTC5X5_UNorm;

  /// @brief Field RGBA_ASTC6X6_SRGB value: static_cast<int32_t>(0x85)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const RGBA_ASTC6X6_SRGB;

  /// @brief Field RGBA_ASTC6X6_UFloat value: static_cast<int32_t>(0x93)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const RGBA_ASTC6X6_UFloat;

  /// @brief Field RGBA_ASTC6X6_UNorm value: static_cast<int32_t>(0x86)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const RGBA_ASTC6X6_UNorm;

  /// @brief Field RGBA_ASTC8X8_SRGB value: static_cast<int32_t>(0x87)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const RGBA_ASTC8X8_SRGB;

  /// @brief Field RGBA_ASTC8X8_UFloat value: static_cast<int32_t>(0x94)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const RGBA_ASTC8X8_UFloat;

  /// @brief Field RGBA_ASTC8X8_UNorm value: static_cast<int32_t>(0x88)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const RGBA_ASTC8X8_UNorm;

  /// @brief Field RGBA_BC7_SRGB value: static_cast<int32_t>(0x6c)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const RGBA_BC7_SRGB;

  /// @brief Field RGBA_BC7_UNorm value: static_cast<int32_t>(0x6d)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const RGBA_BC7_UNorm;

  /// @brief Field RGBA_DXT1_SRGB value: static_cast<int32_t>(0x60)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const RGBA_DXT1_SRGB;

  /// @brief Field RGBA_DXT1_UNorm value: static_cast<int32_t>(0x61)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const RGBA_DXT1_UNorm;

  /// @brief Field RGBA_DXT3_SRGB value: static_cast<int32_t>(0x62)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const RGBA_DXT3_SRGB;

  /// @brief Field RGBA_DXT3_UNorm value: static_cast<int32_t>(0x63)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const RGBA_DXT3_UNorm;

  /// @brief Field RGBA_DXT5_SRGB value: static_cast<int32_t>(0x64)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const RGBA_DXT5_SRGB;

  /// @brief Field RGBA_DXT5_UNorm value: static_cast<int32_t>(0x65)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const RGBA_DXT5_UNorm;

  /// @brief Field RGBA_ETC2_SRGB value: static_cast<int32_t>(0x7b)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const RGBA_ETC2_SRGB;

  /// @brief Field RGBA_ETC2_UNorm value: static_cast<int32_t>(0x7c)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const RGBA_ETC2_UNorm;

  /// @brief Field RGBA_PVRTC_2Bpp_SRGB value: static_cast<int32_t>(0x72)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const RGBA_PVRTC_2Bpp_SRGB;

  /// @brief Field RGBA_PVRTC_2Bpp_UNorm value: static_cast<int32_t>(0x73)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const RGBA_PVRTC_2Bpp_UNorm;

  /// @brief Field RGBA_PVRTC_4Bpp_SRGB value: static_cast<int32_t>(0x74)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const RGBA_PVRTC_4Bpp_SRGB;

  /// @brief Field RGBA_PVRTC_4Bpp_UNorm value: static_cast<int32_t>(0x75)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const RGBA_PVRTC_4Bpp_UNorm;

  /// @brief Field RGB_A1_ETC2_SRGB value: static_cast<int32_t>(0x79)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const RGB_A1_ETC2_SRGB;

  /// @brief Field RGB_A1_ETC2_UNorm value: static_cast<int32_t>(0x7a)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const RGB_A1_ETC2_UNorm;

  /// @brief Field RGB_BC6H_SFloat value: static_cast<int32_t>(0x6b)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const RGB_BC6H_SFloat;

  /// @brief Field RGB_BC6H_UFloat value: static_cast<int32_t>(0x6a)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const RGB_BC6H_UFloat;

  /// @brief Field RGB_DXT1_SRGB value: static_cast<int32_t>(0x60)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const RGB_DXT1_SRGB;

  /// @brief Field RGB_DXT1_UNorm value: static_cast<int32_t>(0x61)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const RGB_DXT1_UNorm;

  /// @brief Field RGB_ETC2_SRGB value: static_cast<int32_t>(0x77)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const RGB_ETC2_SRGB;

  /// @brief Field RGB_ETC2_UNorm value: static_cast<int32_t>(0x78)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const RGB_ETC2_UNorm;

  /// @brief Field RGB_ETC_UNorm value: static_cast<int32_t>(0x76)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const RGB_ETC_UNorm;

  /// @brief Field RGB_PVRTC_2Bpp_SRGB value: static_cast<int32_t>(0x6e)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const RGB_PVRTC_2Bpp_SRGB;

  /// @brief Field RGB_PVRTC_2Bpp_UNorm value: static_cast<int32_t>(0x6f)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const RGB_PVRTC_2Bpp_UNorm;

  /// @brief Field RGB_PVRTC_4Bpp_SRGB value: static_cast<int32_t>(0x70)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const RGB_PVRTC_4Bpp_SRGB;

  /// @brief Field RGB_PVRTC_4Bpp_UNorm value: static_cast<int32_t>(0x71)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const RGB_PVRTC_4Bpp_UNorm;

  /// @brief Field RG_BC5_SNorm value: static_cast<int32_t>(0x69)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const RG_BC5_SNorm;

  /// @brief Field RG_BC5_UNorm value: static_cast<int32_t>(0x68)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const RG_BC5_UNorm;

  /// @brief Field RG_EAC_SNorm value: static_cast<int32_t>(0x80)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const RG_EAC_SNorm;

  /// @brief Field RG_EAC_UNorm value: static_cast<int32_t>(0x7f)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const RG_EAC_UNorm;

  /// @brief Field R_BC4_SNorm value: static_cast<int32_t>(0x67)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const R_BC4_SNorm;

  /// @brief Field R_BC4_UNorm value: static_cast<int32_t>(0x66)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const R_BC4_UNorm;

  /// @brief Field R_EAC_SNorm value: static_cast<int32_t>(0x7e)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const R_EAC_SNorm;

  /// @brief Field R_EAC_UNorm value: static_cast<int32_t>(0x7d)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const R_EAC_UNorm;

  /// @brief Field S8_UInt value: static_cast<int32_t>(0x5f)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const S8_UInt;

  /// @brief Field ShadowAuto value: static_cast<int32_t>(0x8f)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const ShadowAuto;

  /// @brief Field VideoAuto value: static_cast<int32_t>(0x90)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const VideoAuto;

  /// @brief Field YUV2 value: static_cast<int32_t>(0x8d)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const YUV2;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11284 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::GraphicsFormat, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::GraphicsFormat, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Experimental::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::GraphicsFormat, "UnityEngine.Experimental.Rendering", "GraphicsFormat");
