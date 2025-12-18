#pragma once
// IWYU pragma private; include "UnityEngine/TextureFormat.hpp"
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
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.TextureFormat
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
    __E_R8_SIGNED = static_cast<int32_t>(0x4b),
    __E_RG16_SIGNED = static_cast<int32_t>(0x4c),
    __E_RGB24_SIGNED = static_cast<int32_t>(0x4d),
    __E_RGBA32_SIGNED = static_cast<int32_t>(0x4e),
    __E_R16_SIGNED = static_cast<int32_t>(0x4f),
    __E_RG32_SIGNED = static_cast<int32_t>(0x50),
    __E_RGB48_SIGNED = static_cast<int32_t>(0x51),
    __E_RGBA64_SIGNED = static_cast<int32_t>(0x52),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TextureFormat_Unwrapped() const noexcept {
    return static_cast<__TextureFormat_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TextureFormat();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TextureFormat(int32_t value__) noexcept;

  /// @brief Field ARGB32 value: I32(5)
  static ::UnityEngine::TextureFormat const ARGB32;

  /// @brief Field ARGB4444 value: I32(2)
  static ::UnityEngine::TextureFormat const ARGB4444;

  /// @brief Field ASTC_10x10 value: I32(52)
  static ::UnityEngine::TextureFormat const ASTC_10x10;

  /// @brief Field ASTC_12x12 value: I32(53)
  static ::UnityEngine::TextureFormat const ASTC_12x12;

  /// @brief Field ASTC_4x4 value: I32(48)
  static ::UnityEngine::TextureFormat const ASTC_4x4;

  /// @brief Field ASTC_5x5 value: I32(49)
  static ::UnityEngine::TextureFormat const ASTC_5x5;

  /// @brief Field ASTC_6x6 value: I32(50)
  static ::UnityEngine::TextureFormat const ASTC_6x6;

  /// @brief Field ASTC_8x8 value: I32(51)
  static ::UnityEngine::TextureFormat const ASTC_8x8;

  /// @brief Field ASTC_HDR_10x10 value: I32(70)
  static ::UnityEngine::TextureFormat const ASTC_HDR_10x10;

  /// @brief Field ASTC_HDR_12x12 value: I32(71)
  static ::UnityEngine::TextureFormat const ASTC_HDR_12x12;

  /// @brief Field ASTC_HDR_4x4 value: I32(66)
  static ::UnityEngine::TextureFormat const ASTC_HDR_4x4;

  /// @brief Field ASTC_HDR_5x5 value: I32(67)
  static ::UnityEngine::TextureFormat const ASTC_HDR_5x5;

  /// @brief Field ASTC_HDR_6x6 value: I32(68)
  static ::UnityEngine::TextureFormat const ASTC_HDR_6x6;

  /// @brief Field ASTC_HDR_8x8 value: I32(69)
  static ::UnityEngine::TextureFormat const ASTC_HDR_8x8;

  /// @brief Field Alpha8 value: I32(1)
  static ::UnityEngine::TextureFormat const Alpha8;

  /// @brief Field BC4 value: I32(26)
  static ::UnityEngine::TextureFormat const BC4;

  /// @brief Field BC5 value: I32(27)
  static ::UnityEngine::TextureFormat const BC5;

  /// @brief Field BC6H value: I32(24)
  static ::UnityEngine::TextureFormat const BC6H;

  /// @brief Field BC7 value: I32(25)
  static ::UnityEngine::TextureFormat const BC7;

  /// @brief Field BGRA32 value: I32(14)
  static ::UnityEngine::TextureFormat const BGRA32;

  /// @brief Field DXT1 value: I32(10)
  static ::UnityEngine::TextureFormat const DXT1;

  /// @brief Field DXT1Crunched value: I32(28)
  static ::UnityEngine::TextureFormat const DXT1Crunched;

  /// @brief Field DXT5 value: I32(12)
  static ::UnityEngine::TextureFormat const DXT5;

  /// @brief Field DXT5Crunched value: I32(29)
  static ::UnityEngine::TextureFormat const DXT5Crunched;

  /// @brief Field EAC_R value: I32(41)
  static ::UnityEngine::TextureFormat const EAC_R;

  /// @brief Field EAC_RG value: I32(43)
  static ::UnityEngine::TextureFormat const EAC_RG;

  /// @brief Field EAC_RG_SIGNED value: I32(44)
  static ::UnityEngine::TextureFormat const EAC_RG_SIGNED;

  /// @brief Field EAC_R_SIGNED value: I32(42)
  static ::UnityEngine::TextureFormat const EAC_R_SIGNED;

  /// @brief Field ETC2_RGB value: I32(45)
  static ::UnityEngine::TextureFormat const ETC2_RGB;

  /// @brief Field ETC2_RGBA1 value: I32(46)
  static ::UnityEngine::TextureFormat const ETC2_RGBA1;

  /// @brief Field ETC2_RGBA8 value: I32(47)
  static ::UnityEngine::TextureFormat const ETC2_RGBA8;

  /// @brief Field ETC2_RGBA8Crunched value: I32(65)
  static ::UnityEngine::TextureFormat const ETC2_RGBA8Crunched;

  /// @brief Field ETC_RGB4 value: I32(34)
  static ::UnityEngine::TextureFormat const ETC_RGB4;

  /// @brief Field ETC_RGB4Crunched value: I32(64)
  static ::UnityEngine::TextureFormat const ETC_RGB4Crunched;

  /// @brief Field PVRTC_RGB2 value: I32(30)
  static ::UnityEngine::TextureFormat const PVRTC_RGB2;

  /// @brief Field PVRTC_RGB4 value: I32(32)
  static ::UnityEngine::TextureFormat const PVRTC_RGB4;

  /// @brief Field PVRTC_RGBA2 value: I32(31)
  static ::UnityEngine::TextureFormat const PVRTC_RGBA2;

  /// @brief Field PVRTC_RGBA4 value: I32(33)
  static ::UnityEngine::TextureFormat const PVRTC_RGBA4;

  /// @brief Field R16 value: I32(9)
  static ::UnityEngine::TextureFormat const R16;

  /// @brief Field R16_SIGNED value: I32(79)
  static ::UnityEngine::TextureFormat const R16_SIGNED;

  /// @brief Field R8 value: I32(63)
  static ::UnityEngine::TextureFormat const R8;

  /// @brief Field R8_SIGNED value: I32(75)
  static ::UnityEngine::TextureFormat const R8_SIGNED;

  /// @brief Field RFloat value: I32(18)
  static ::UnityEngine::TextureFormat const RFloat;

  /// @brief Field RG16 value: I32(62)
  static ::UnityEngine::TextureFormat const RG16;

  /// @brief Field RG16_SIGNED value: I32(76)
  static ::UnityEngine::TextureFormat const RG16_SIGNED;

  /// @brief Field RG32 value: I32(72)
  static ::UnityEngine::TextureFormat const RG32;

  /// @brief Field RG32_SIGNED value: I32(80)
  static ::UnityEngine::TextureFormat const RG32_SIGNED;

  /// @brief Field RGB24 value: I32(3)
  static ::UnityEngine::TextureFormat const RGB24;

  /// @brief Field RGB24_SIGNED value: I32(77)
  static ::UnityEngine::TextureFormat const RGB24_SIGNED;

  /// @brief Field RGB48 value: I32(73)
  static ::UnityEngine::TextureFormat const RGB48;

  /// @brief Field RGB48_SIGNED value: I32(81)
  static ::UnityEngine::TextureFormat const RGB48_SIGNED;

  /// @brief Field RGB565 value: I32(7)
  static ::UnityEngine::TextureFormat const RGB565;

  /// @brief Field RGB9e5Float value: I32(22)
  static ::UnityEngine::TextureFormat const RGB9e5Float;

  /// @brief Field RGBA32 value: I32(4)
  static ::UnityEngine::TextureFormat const RGBA32;

  /// @brief Field RGBA32_SIGNED value: I32(78)
  static ::UnityEngine::TextureFormat const RGBA32_SIGNED;

  /// @brief Field RGBA4444 value: I32(13)
  static ::UnityEngine::TextureFormat const RGBA4444;

  /// @brief Field RGBA64 value: I32(74)
  static ::UnityEngine::TextureFormat const RGBA64;

  /// @brief Field RGBA64_SIGNED value: I32(82)
  static ::UnityEngine::TextureFormat const RGBA64_SIGNED;

  /// @brief Field RGBAFloat value: I32(20)
  static ::UnityEngine::TextureFormat const RGBAFloat;

  /// @brief Field RGBAHalf value: I32(17)
  static ::UnityEngine::TextureFormat const RGBAHalf;

  /// @brief Field RGFloat value: I32(19)
  static ::UnityEngine::TextureFormat const RGFloat;

  /// @brief Field RGHalf value: I32(16)
  static ::UnityEngine::TextureFormat const RGHalf;

  /// @brief Field RHalf value: I32(15)
  static ::UnityEngine::TextureFormat const RHalf;

  /// @brief Field YUY2 value: I32(21)
  static ::UnityEngine::TextureFormat const YUY2;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10175 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextureFormat, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TextureFormat, 0x4>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextureFormat, "UnityEngine", "TextureFormat");
