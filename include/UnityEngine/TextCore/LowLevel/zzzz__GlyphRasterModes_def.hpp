#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/LowLevel/GlyphRasterModes.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GlyphRasterModes)
// Forward declare root types
namespace UnityEngine::TextCore::LowLevel {
struct GlyphRasterModes;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::LowLevel::GlyphRasterModes);
DEFINE_IL2CPP_CLASS(::UnityEngine::TextCore::LowLevel::GlyphRasterModes, "UnityEngine.TextCore.LowLevel", "GlyphRasterModes");
// [VisibleToOtherModules(new[] { "UnityEngine.TextCoreTextEngineModule" })]
// [Flags]
// Dependencies
namespace UnityEngine::TextCore::LowLevel {
// Is value type: true
// CS Name: UnityEngine.TextCore.LowLevel.GlyphRasterModes
struct CORDL_TYPE GlyphRasterModes {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __GlyphRasterModes_Unwrapped
  enum struct __GlyphRasterModes_Unwrapped : int32_t {
    __E_RASTER_MODE_8BIT = static_cast<int32_t>(0x1),
    __E_RASTER_MODE_MONO = static_cast<int32_t>(0x2),
    __E_RASTER_MODE_NO_HINTING = static_cast<int32_t>(0x4),
    __E_RASTER_MODE_HINTED = static_cast<int32_t>(0x8),
    __E_RASTER_MODE_BITMAP = static_cast<int32_t>(0x10),
    __E_RASTER_MODE_SDF = static_cast<int32_t>(0x20),
    __E_RASTER_MODE_SDFAA = static_cast<int32_t>(0x40),
    __E_RASTER_MODE_STRONG = static_cast<int32_t>(0x80),
    __E_RASTER_MODE_MSDF = static_cast<int32_t>(0x100),
    __E_RASTER_MODE_MSDFA = static_cast<int32_t>(0x200),
    __E_RASTER_MODE_1X = static_cast<int32_t>(0x1000),
    __E_RASTER_MODE_8X = static_cast<int32_t>(0x2000),
    __E_RASTER_MODE_16X = static_cast<int32_t>(0x4000),
    __E_RASTER_MODE_32X = static_cast<int32_t>(0x8000),
    __E_RASTER_MODE_COLOR = static_cast<int32_t>(0x10000),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __GlyphRasterModes_Unwrapped() const noexcept {
    return static_cast<__GlyphRasterModes_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr GlyphRasterModes();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr GlyphRasterModes(int32_t value__) noexcept;

  /// @brief Field RASTER_MODE_16X value: I32(16384)
  static ::UnityEngine::TextCore::LowLevel::GlyphRasterModes const RASTER_MODE_16X;

  /// @brief Field RASTER_MODE_1X value: I32(4096)
  static ::UnityEngine::TextCore::LowLevel::GlyphRasterModes const RASTER_MODE_1X;

  /// @brief Field RASTER_MODE_32X value: I32(32768)
  static ::UnityEngine::TextCore::LowLevel::GlyphRasterModes const RASTER_MODE_32X;

  /// @brief Field RASTER_MODE_8BIT value: I32(1)
  static ::UnityEngine::TextCore::LowLevel::GlyphRasterModes const RASTER_MODE_8BIT;

  /// @brief Field RASTER_MODE_8X value: I32(8192)
  static ::UnityEngine::TextCore::LowLevel::GlyphRasterModes const RASTER_MODE_8X;

  /// @brief Field RASTER_MODE_BITMAP value: I32(16)
  static ::UnityEngine::TextCore::LowLevel::GlyphRasterModes const RASTER_MODE_BITMAP;

  /// @brief Field RASTER_MODE_COLOR value: I32(65536)
  static ::UnityEngine::TextCore::LowLevel::GlyphRasterModes const RASTER_MODE_COLOR;

  /// @brief Field RASTER_MODE_HINTED value: I32(8)
  static ::UnityEngine::TextCore::LowLevel::GlyphRasterModes const RASTER_MODE_HINTED;

  /// @brief Field RASTER_MODE_MONO value: I32(2)
  static ::UnityEngine::TextCore::LowLevel::GlyphRasterModes const RASTER_MODE_MONO;

  /// @brief Field RASTER_MODE_MSDF value: I32(256)
  static ::UnityEngine::TextCore::LowLevel::GlyphRasterModes const RASTER_MODE_MSDF;

  /// @brief Field RASTER_MODE_MSDFA value: I32(512)
  static ::UnityEngine::TextCore::LowLevel::GlyphRasterModes const RASTER_MODE_MSDFA;

  /// @brief Field RASTER_MODE_NO_HINTING value: I32(4)
  static ::UnityEngine::TextCore::LowLevel::GlyphRasterModes const RASTER_MODE_NO_HINTING;

  /// @brief Field RASTER_MODE_SDF value: I32(32)
  static ::UnityEngine::TextCore::LowLevel::GlyphRasterModes const RASTER_MODE_SDF;

  /// @brief Field RASTER_MODE_SDFAA value: I32(64)
  static ::UnityEngine::TextCore::LowLevel::GlyphRasterModes const RASTER_MODE_SDFAA;

  /// @brief Field RASTER_MODE_STRONG value: I32(128)
  static ::UnityEngine::TextCore::LowLevel::GlyphRasterModes const RASTER_MODE_STRONG;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22885 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextCore::LowLevel::GlyphRasterModes, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::TextCore::LowLevel::GlyphRasterModes) == 0x4, "Size mismatch!");

} // namespace UnityEngine::TextCore::LowLevel
