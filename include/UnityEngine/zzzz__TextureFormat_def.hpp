#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextureFormat)
// Forward declare root types
namespace UnityEngine {
struct TextureFormat;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextureFormat);
// Type: UnityEngine::TextureFormat
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10043))
// CS Name: ::UnityEngine::TextureFormat
struct CORDL_TYPE TextureFormat {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TextureFormat_Unwrapped
  enum struct __TextureFormat_Unwrapped : int32_t {
    __E_Alpha8 = static_cast<int32_t>(0x1),
    __E_ARGB4444 = static_cast<int32_t>(0x2),
    __E_RGB24 = static_cast<int32_t>(0x3),
    __E_RGBA32 = static_cast<int32_t>(0x4),
    __E_ARGB32 = static_cast<int32_t>(0x5),
    __E_RGB565 = static_cast<int32_t>(0x7),
    __E_R16 = static_cast<int32_t>(0x9),
    __E_DXT1 = static_cast<int32_t>(0xa),
    __E_DXT5 = static_cast<int32_t>(0xc),
    __E_RGBA4444 = static_cast<int32_t>(0xd),
    __E_BGRA32 = static_cast<int32_t>(0xe),
    __E_RHalf = static_cast<int32_t>(0xf),
    __E_RGHalf = static_cast<int32_t>(0x10),
    __E_RGBAHalf = static_cast<int32_t>(0x11),
    __E_RFloat = static_cast<int32_t>(0x12),
    __E_RGFloat = static_cast<int32_t>(0x13),
    __E_RGBAFloat = static_cast<int32_t>(0x14),
    __E_YUY2 = static_cast<int32_t>(0x15),
    __E_RGB9e5Float = static_cast<int32_t>(0x16),
    __E_BC4 = static_cast<int32_t>(0x1a),
    __E_BC5 = static_cast<int32_t>(0x1b),
    __E_BC6H = static_cast<int32_t>(0x18),
    __E_BC7 = static_cast<int32_t>(0x19),
    __E_DXT1Crunched = static_cast<int32_t>(0x1c),
    __E_DXT5Crunched = static_cast<int32_t>(0x1d),
    __E_PVRTC_RGB2 = static_cast<int32_t>(0x1e),
    __E_PVRTC_RGBA2 = static_cast<int32_t>(0x1f),
    __E_PVRTC_RGB4 = static_cast<int32_t>(0x20),
    __E_PVRTC_RGBA4 = static_cast<int32_t>(0x21),
    __E_ETC_RGB4 = static_cast<int32_t>(0x22),
    __E_EAC_R = static_cast<int32_t>(0x29),
    __E_EAC_R_SIGNED = static_cast<int32_t>(0x2a),
    __E_EAC_RG = static_cast<int32_t>(0x2b),
    __E_EAC_RG_SIGNED = static_cast<int32_t>(0x2c),
    __E_ETC2_RGB = static_cast<int32_t>(0x2d),
    __E_ETC2_RGBA1 = static_cast<int32_t>(0x2e),
    __E_ETC2_RGBA8 = static_cast<int32_t>(0x2f),
    __E_ASTC_4x4 = static_cast<int32_t>(0x30),
    __E_ASTC_5x5 = static_cast<int32_t>(0x31),
    __E_ASTC_6x6 = static_cast<int32_t>(0x32),
    __E_ASTC_8x8 = static_cast<int32_t>(0x33),
    __E_ASTC_10x10 = static_cast<int32_t>(0x34),
    __E_ASTC_12x12 = static_cast<int32_t>(0x35),
    __E_ETC_RGB4_3DS = static_cast<int32_t>(0x3c),
    __E_ETC_RGBA8_3DS = static_cast<int32_t>(0x3d),
    __E_RG16 = static_cast<int32_t>(0x3e),
    __E_R8 = static_cast<int32_t>(0x3f),
    __E_ETC_RGB4Crunched = static_cast<int32_t>(0x40),
    __E_ETC2_RGBA8Crunched = static_cast<int32_t>(0x41),
    __E_ASTC_HDR_4x4 = static_cast<int32_t>(0x42),
    __E_ASTC_HDR_5x5 = static_cast<int32_t>(0x43),
    __E_ASTC_HDR_6x6 = static_cast<int32_t>(0x44),
    __E_ASTC_HDR_8x8 = static_cast<int32_t>(0x45),
    __E_ASTC_HDR_10x10 = static_cast<int32_t>(0x46),
    __E_ASTC_HDR_12x12 = static_cast<int32_t>(0x47),
    __E_RG32 = static_cast<int32_t>(0x48),
    __E_RGB48 = static_cast<int32_t>(0x49),
    __E_RGBA64 = static_cast<int32_t>(0x4a),
    __E_ASTC_RGB_4x4 = static_cast<int32_t>(0x30),
    __E_ASTC_RGB_5x5 = static_cast<int32_t>(0x31),
    __E_ASTC_RGB_6x6 = static_cast<int32_t>(0x32),
    __E_ASTC_RGB_8x8 = static_cast<int32_t>(0x33),
    __E_ASTC_RGB_10x10 = static_cast<int32_t>(0x34),
    __E_ASTC_RGB_12x12 = static_cast<int32_t>(0x35),
    __E_ASTC_RGBA_4x4 = static_cast<int32_t>(0x36),
    __E_ASTC_RGBA_5x5 = static_cast<int32_t>(0x37),
    __E_ASTC_RGBA_6x6 = static_cast<int32_t>(0x38),
    __E_ASTC_RGBA_8x8 = static_cast<int32_t>(0x39),
    __E_ASTC_RGBA_10x10 = static_cast<int32_t>(0x3a),
    __E_ASTC_RGBA_12x12 = static_cast<int32_t>(0x3b),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TextureFormat_Unwrapped() const noexcept {
    return static_cast<__TextureFormat_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TextureFormat(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr TextureFormat();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Alpha8 value: static_cast<int32_t>(0x1)
  static ::UnityEngine::TextureFormat const Alpha8;

  /// @brief Field ARGB4444 value: static_cast<int32_t>(0x2)
  static ::UnityEngine::TextureFormat const ARGB4444;

  /// @brief Field RGB24 value: static_cast<int32_t>(0x3)
  static ::UnityEngine::TextureFormat const RGB24;

  /// @brief Field RGBA32 value: static_cast<int32_t>(0x4)
  static ::UnityEngine::TextureFormat const RGBA32;

  /// @brief Field ARGB32 value: static_cast<int32_t>(0x5)
  static ::UnityEngine::TextureFormat const ARGB32;

  /// @brief Field RGB565 value: static_cast<int32_t>(0x7)
  static ::UnityEngine::TextureFormat const RGB565;

  /// @brief Field R16 value: static_cast<int32_t>(0x9)
  static ::UnityEngine::TextureFormat const R16;

  /// @brief Field DXT1 value: static_cast<int32_t>(0xa)
  static ::UnityEngine::TextureFormat const DXT1;

  /// @brief Field DXT5 value: static_cast<int32_t>(0xc)
  static ::UnityEngine::TextureFormat const DXT5;

  /// @brief Field RGBA4444 value: static_cast<int32_t>(0xd)
  static ::UnityEngine::TextureFormat const RGBA4444;

  /// @brief Field BGRA32 value: static_cast<int32_t>(0xe)
  static ::UnityEngine::TextureFormat const BGRA32;

  /// @brief Field RHalf value: static_cast<int32_t>(0xf)
  static ::UnityEngine::TextureFormat const RHalf;

  /// @brief Field RGHalf value: static_cast<int32_t>(0x10)
  static ::UnityEngine::TextureFormat const RGHalf;

  /// @brief Field RGBAHalf value: static_cast<int32_t>(0x11)
  static ::UnityEngine::TextureFormat const RGBAHalf;

  /// @brief Field RFloat value: static_cast<int32_t>(0x12)
  static ::UnityEngine::TextureFormat const RFloat;

  /// @brief Field RGFloat value: static_cast<int32_t>(0x13)
  static ::UnityEngine::TextureFormat const RGFloat;

  /// @brief Field RGBAFloat value: static_cast<int32_t>(0x14)
  static ::UnityEngine::TextureFormat const RGBAFloat;

  /// @brief Field YUY2 value: static_cast<int32_t>(0x15)
  static ::UnityEngine::TextureFormat const YUY2;

  /// @brief Field RGB9e5Float value: static_cast<int32_t>(0x16)
  static ::UnityEngine::TextureFormat const RGB9e5Float;

  /// @brief Field BC4 value: static_cast<int32_t>(0x1a)
  static ::UnityEngine::TextureFormat const BC4;

  /// @brief Field BC5 value: static_cast<int32_t>(0x1b)
  static ::UnityEngine::TextureFormat const BC5;

  /// @brief Field BC6H value: static_cast<int32_t>(0x18)
  static ::UnityEngine::TextureFormat const BC6H;

  /// @brief Field BC7 value: static_cast<int32_t>(0x19)
  static ::UnityEngine::TextureFormat const BC7;

  /// @brief Field DXT1Crunched value: static_cast<int32_t>(0x1c)
  static ::UnityEngine::TextureFormat const DXT1Crunched;

  /// @brief Field DXT5Crunched value: static_cast<int32_t>(0x1d)
  static ::UnityEngine::TextureFormat const DXT5Crunched;

  /// @brief Field PVRTC_RGB2 value: static_cast<int32_t>(0x1e)
  static ::UnityEngine::TextureFormat const PVRTC_RGB2;

  /// @brief Field PVRTC_RGBA2 value: static_cast<int32_t>(0x1f)
  static ::UnityEngine::TextureFormat const PVRTC_RGBA2;

  /// @brief Field PVRTC_RGB4 value: static_cast<int32_t>(0x20)
  static ::UnityEngine::TextureFormat const PVRTC_RGB4;

  /// @brief Field PVRTC_RGBA4 value: static_cast<int32_t>(0x21)
  static ::UnityEngine::TextureFormat const PVRTC_RGBA4;

  /// @brief Field ETC_RGB4 value: static_cast<int32_t>(0x22)
  static ::UnityEngine::TextureFormat const ETC_RGB4;

  /// @brief Field EAC_R value: static_cast<int32_t>(0x29)
  static ::UnityEngine::TextureFormat const EAC_R;

  /// @brief Field EAC_R_SIGNED value: static_cast<int32_t>(0x2a)
  static ::UnityEngine::TextureFormat const EAC_R_SIGNED;

  /// @brief Field EAC_RG value: static_cast<int32_t>(0x2b)
  static ::UnityEngine::TextureFormat const EAC_RG;

  /// @brief Field EAC_RG_SIGNED value: static_cast<int32_t>(0x2c)
  static ::UnityEngine::TextureFormat const EAC_RG_SIGNED;

  /// @brief Field ETC2_RGB value: static_cast<int32_t>(0x2d)
  static ::UnityEngine::TextureFormat const ETC2_RGB;

  /// @brief Field ETC2_RGBA1 value: static_cast<int32_t>(0x2e)
  static ::UnityEngine::TextureFormat const ETC2_RGBA1;

  /// @brief Field ETC2_RGBA8 value: static_cast<int32_t>(0x2f)
  static ::UnityEngine::TextureFormat const ETC2_RGBA8;

  /// @brief Field ASTC_4x4 value: static_cast<int32_t>(0x30)
  static ::UnityEngine::TextureFormat const ASTC_4x4;

  /// @brief Field ASTC_5x5 value: static_cast<int32_t>(0x31)
  static ::UnityEngine::TextureFormat const ASTC_5x5;

  /// @brief Field ASTC_6x6 value: static_cast<int32_t>(0x32)
  static ::UnityEngine::TextureFormat const ASTC_6x6;

  /// @brief Field ASTC_8x8 value: static_cast<int32_t>(0x33)
  static ::UnityEngine::TextureFormat const ASTC_8x8;

  /// @brief Field ASTC_10x10 value: static_cast<int32_t>(0x34)
  static ::UnityEngine::TextureFormat const ASTC_10x10;

  /// @brief Field ASTC_12x12 value: static_cast<int32_t>(0x35)
  static ::UnityEngine::TextureFormat const ASTC_12x12;

  /// @brief Field ETC_RGB4_3DS value: static_cast<int32_t>(0x3c)
  static ::UnityEngine::TextureFormat const ETC_RGB4_3DS;

  /// @brief Field ETC_RGBA8_3DS value: static_cast<int32_t>(0x3d)
  static ::UnityEngine::TextureFormat const ETC_RGBA8_3DS;

  /// @brief Field RG16 value: static_cast<int32_t>(0x3e)
  static ::UnityEngine::TextureFormat const RG16;

  /// @brief Field R8 value: static_cast<int32_t>(0x3f)
  static ::UnityEngine::TextureFormat const R8;

  /// @brief Field ETC_RGB4Crunched value: static_cast<int32_t>(0x40)
  static ::UnityEngine::TextureFormat const ETC_RGB4Crunched;

  /// @brief Field ETC2_RGBA8Crunched value: static_cast<int32_t>(0x41)
  static ::UnityEngine::TextureFormat const ETC2_RGBA8Crunched;

  /// @brief Field ASTC_HDR_4x4 value: static_cast<int32_t>(0x42)
  static ::UnityEngine::TextureFormat const ASTC_HDR_4x4;

  /// @brief Field ASTC_HDR_5x5 value: static_cast<int32_t>(0x43)
  static ::UnityEngine::TextureFormat const ASTC_HDR_5x5;

  /// @brief Field ASTC_HDR_6x6 value: static_cast<int32_t>(0x44)
  static ::UnityEngine::TextureFormat const ASTC_HDR_6x6;

  /// @brief Field ASTC_HDR_8x8 value: static_cast<int32_t>(0x45)
  static ::UnityEngine::TextureFormat const ASTC_HDR_8x8;

  /// @brief Field ASTC_HDR_10x10 value: static_cast<int32_t>(0x46)
  static ::UnityEngine::TextureFormat const ASTC_HDR_10x10;

  /// @brief Field ASTC_HDR_12x12 value: static_cast<int32_t>(0x47)
  static ::UnityEngine::TextureFormat const ASTC_HDR_12x12;

  /// @brief Field RG32 value: static_cast<int32_t>(0x48)
  static ::UnityEngine::TextureFormat const RG32;

  /// @brief Field RGB48 value: static_cast<int32_t>(0x49)
  static ::UnityEngine::TextureFormat const RGB48;

  /// @brief Field RGBA64 value: static_cast<int32_t>(0x4a)
  static ::UnityEngine::TextureFormat const RGBA64;

  /// @brief Field ASTC_RGB_4x4 value: static_cast<int32_t>(0x30)
  static ::UnityEngine::TextureFormat const ASTC_RGB_4x4;

  /// @brief Field ASTC_RGB_5x5 value: static_cast<int32_t>(0x31)
  static ::UnityEngine::TextureFormat const ASTC_RGB_5x5;

  /// @brief Field ASTC_RGB_6x6 value: static_cast<int32_t>(0x32)
  static ::UnityEngine::TextureFormat const ASTC_RGB_6x6;

  /// @brief Field ASTC_RGB_8x8 value: static_cast<int32_t>(0x33)
  static ::UnityEngine::TextureFormat const ASTC_RGB_8x8;

  /// @brief Field ASTC_RGB_10x10 value: static_cast<int32_t>(0x34)
  static ::UnityEngine::TextureFormat const ASTC_RGB_10x10;

  /// @brief Field ASTC_RGB_12x12 value: static_cast<int32_t>(0x35)
  static ::UnityEngine::TextureFormat const ASTC_RGB_12x12;

  /// @brief Field ASTC_RGBA_4x4 value: static_cast<int32_t>(0x36)
  static ::UnityEngine::TextureFormat const ASTC_RGBA_4x4;

  /// @brief Field ASTC_RGBA_5x5 value: static_cast<int32_t>(0x37)
  static ::UnityEngine::TextureFormat const ASTC_RGBA_5x5;

  /// @brief Field ASTC_RGBA_6x6 value: static_cast<int32_t>(0x38)
  static ::UnityEngine::TextureFormat const ASTC_RGBA_6x6;

  /// @brief Field ASTC_RGBA_8x8 value: static_cast<int32_t>(0x39)
  static ::UnityEngine::TextureFormat const ASTC_RGBA_8x8;

  /// @brief Field ASTC_RGBA_10x10 value: static_cast<int32_t>(0x3a)
  static ::UnityEngine::TextureFormat const ASTC_RGBA_10x10;

  /// @brief Field ASTC_RGBA_12x12 value: static_cast<int32_t>(0x3b)
  static ::UnityEngine::TextureFormat const ASTC_RGBA_12x12;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextureFormat, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::TextureFormat, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextureFormat, "UnityEngine", "TextureFormat");
