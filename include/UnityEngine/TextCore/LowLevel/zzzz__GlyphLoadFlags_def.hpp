#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/LowLevel/GlyphLoadFlags.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GlyphLoadFlags)
// Forward declare root types
namespace UnityEngine::TextCore::LowLevel {
struct GlyphLoadFlags;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::LowLevel::GlyphLoadFlags);
// Dependencies
namespace UnityEngine::TextCore::LowLevel {
// Is value type: true
// CS Name: UnityEngine.TextCore.LowLevel.GlyphLoadFlags
struct CORDL_TYPE GlyphLoadFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __GlyphLoadFlags_Unwrapped
  enum struct __GlyphLoadFlags_Unwrapped : int32_t {
    __E_LOAD_DEFAULT = static_cast<int32_t>(0x0),
    __E_LOAD_NO_SCALE = static_cast<int32_t>(0x1),
    __E_LOAD_NO_HINTING = static_cast<int32_t>(0x2),
    __E_LOAD_RENDER = static_cast<int32_t>(0x4),
    __E_LOAD_NO_BITMAP = static_cast<int32_t>(0x8),
    __E_LOAD_FORCE_AUTOHINT = static_cast<int32_t>(0x20),
    __E_LOAD_MONOCHROME = static_cast<int32_t>(0x1000),
    __E_LOAD_NO_AUTOHINT = static_cast<int32_t>(0x8000),
    __E_LOAD_COLOR = static_cast<int32_t>(0x100000),
    __E_LOAD_COMPUTE_METRICS = static_cast<int32_t>(0x200000),
    __E_LOAD_BITMAP_METRICS_ONLY = static_cast<int32_t>(0x400000),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __GlyphLoadFlags_Unwrapped() const noexcept {
    return static_cast<__GlyphLoadFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr GlyphLoadFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr GlyphLoadFlags(int32_t value__) noexcept;

  /// @brief Field LOAD_BITMAP_METRICS_ONLY value: I32(4194304)
  static ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags const LOAD_BITMAP_METRICS_ONLY;

  /// @brief Field LOAD_COLOR value: I32(1048576)
  static ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags const LOAD_COLOR;

  /// @brief Field LOAD_COMPUTE_METRICS value: I32(2097152)
  static ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags const LOAD_COMPUTE_METRICS;

  /// @brief Field LOAD_DEFAULT value: I32(0)
  static ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags const LOAD_DEFAULT;

  /// @brief Field LOAD_FORCE_AUTOHINT value: I32(32)
  static ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags const LOAD_FORCE_AUTOHINT;

  /// @brief Field LOAD_MONOCHROME value: I32(4096)
  static ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags const LOAD_MONOCHROME;

  /// @brief Field LOAD_NO_AUTOHINT value: I32(32768)
  static ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags const LOAD_NO_AUTOHINT;

  /// @brief Field LOAD_NO_BITMAP value: I32(8)
  static ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags const LOAD_NO_BITMAP;

  /// @brief Field LOAD_NO_HINTING value: I32(2)
  static ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags const LOAD_NO_HINTING;

  /// @brief Field LOAD_NO_SCALE value: I32(1)
  static ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags const LOAD_NO_SCALE;

  /// @brief Field LOAD_RENDER value: I32(4)
  static ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags const LOAD_RENDER;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18177 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextCore::LowLevel::GlyphLoadFlags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::LowLevel::GlyphLoadFlags, 0x4>, "Size mismatch!");

} // namespace UnityEngine::TextCore::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::LowLevel::GlyphLoadFlags, "UnityEngine.TextCore.LowLevel", "GlyphLoadFlags");
