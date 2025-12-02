#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/LowLevel/GlyphRenderMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GlyphRenderMode)
// Forward declare root types
namespace UnityEngine::TextCore::LowLevel {
struct GlyphRenderMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::LowLevel::GlyphRenderMode);
// Dependencies
namespace UnityEngine::TextCore::LowLevel {
// Is value type: true
// CS Name: UnityEngine.TextCore.LowLevel.GlyphRenderMode
struct CORDL_TYPE GlyphRenderMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __GlyphRenderMode_Unwrapped
  enum struct __GlyphRenderMode_Unwrapped : int32_t {
    __E_SMOOTH_HINTED = static_cast<int32_t>(0x1019),
    __E_SMOOTH = static_cast<int32_t>(0x1015),
    __E_COLOR_HINTED = static_cast<int32_t>(0x11018),
    __E_COLOR = static_cast<int32_t>(0x11014),
    __E_RASTER_HINTED = static_cast<int32_t>(0x101a),
    __E_RASTER = static_cast<int32_t>(0x1016),
    __E_SDF = static_cast<int32_t>(0x1026),
    __E_SDF8 = static_cast<int32_t>(0x2026),
    __E_SDF16 = static_cast<int32_t>(0x4026),
    __E_SDF32 = static_cast<int32_t>(0x8026),
    __E_SDFAA_HINTED = static_cast<int32_t>(0x1049),
    __E_SDFAA = static_cast<int32_t>(0x1045),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __GlyphRenderMode_Unwrapped() const noexcept {
    return static_cast<__GlyphRenderMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr GlyphRenderMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr GlyphRenderMode(int32_t value__) noexcept;

  /// @brief Field COLOR value: I32(69652)
  static ::UnityEngine::TextCore::LowLevel::GlyphRenderMode const COLOR;

  /// @brief Field COLOR_HINTED value: I32(69656)
  static ::UnityEngine::TextCore::LowLevel::GlyphRenderMode const COLOR_HINTED;

  /// @brief Field RASTER value: I32(4118)
  static ::UnityEngine::TextCore::LowLevel::GlyphRenderMode const RASTER;

  /// @brief Field RASTER_HINTED value: I32(4122)
  static ::UnityEngine::TextCore::LowLevel::GlyphRenderMode const RASTER_HINTED;

  /// @brief Field SDF value: I32(4134)
  static ::UnityEngine::TextCore::LowLevel::GlyphRenderMode const SDF;

  /// @brief Field SDF16 value: I32(16422)
  static ::UnityEngine::TextCore::LowLevel::GlyphRenderMode const SDF16;

  /// @brief Field SDF32 value: I32(32806)
  static ::UnityEngine::TextCore::LowLevel::GlyphRenderMode const SDF32;

  /// @brief Field SDF8 value: I32(8230)
  static ::UnityEngine::TextCore::LowLevel::GlyphRenderMode const SDF8;

  /// @brief Field SDFAA value: I32(4165)
  static ::UnityEngine::TextCore::LowLevel::GlyphRenderMode const SDFAA;

  /// @brief Field SDFAA_HINTED value: I32(4169)
  static ::UnityEngine::TextCore::LowLevel::GlyphRenderMode const SDFAA_HINTED;

  /// @brief Field SMOOTH value: I32(4117)
  static ::UnityEngine::TextCore::LowLevel::GlyphRenderMode const SMOOTH;

  /// @brief Field SMOOTH_HINTED value: I32(4121)
  static ::UnityEngine::TextCore::LowLevel::GlyphRenderMode const SMOOTH_HINTED;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21644 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextCore::LowLevel::GlyphRenderMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::LowLevel::GlyphRenderMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine::TextCore::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::LowLevel::GlyphRenderMode, "UnityEngine.TextCore.LowLevel", "GlyphRenderMode");
