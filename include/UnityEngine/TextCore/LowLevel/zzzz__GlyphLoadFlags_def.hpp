#pragma once
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
// Type: UnityEngine.TextCore.LowLevel::GlyphLoadFlags
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::TextCore::LowLevel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15516))
// CS Name: ::UnityEngine.TextCore.LowLevel::GlyphLoadFlags
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr GlyphLoadFlags(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr GlyphLoadFlags();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field LOAD_DEFAULT value: static_cast<int32_t>(0x0)
  static ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags const LOAD_DEFAULT;

  /// @brief Field LOAD_NO_SCALE value: static_cast<int32_t>(0x1)
  static ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags const LOAD_NO_SCALE;

  /// @brief Field LOAD_NO_HINTING value: static_cast<int32_t>(0x2)
  static ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags const LOAD_NO_HINTING;

  /// @brief Field LOAD_RENDER value: static_cast<int32_t>(0x4)
  static ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags const LOAD_RENDER;

  /// @brief Field LOAD_NO_BITMAP value: static_cast<int32_t>(0x8)
  static ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags const LOAD_NO_BITMAP;

  /// @brief Field LOAD_FORCE_AUTOHINT value: static_cast<int32_t>(0x20)
  static ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags const LOAD_FORCE_AUTOHINT;

  /// @brief Field LOAD_MONOCHROME value: static_cast<int32_t>(0x1000)
  static ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags const LOAD_MONOCHROME;

  /// @brief Field LOAD_NO_AUTOHINT value: static_cast<int32_t>(0x8000)
  static ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags const LOAD_NO_AUTOHINT;

  /// @brief Field LOAD_COLOR value: static_cast<int32_t>(0x100000)
  static ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags const LOAD_COLOR;

  /// @brief Field LOAD_COMPUTE_METRICS value: static_cast<int32_t>(0x200000)
  static ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags const LOAD_COMPUTE_METRICS;

  /// @brief Field LOAD_BITMAP_METRICS_ONLY value: static_cast<int32_t>(0x400000)
  static ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags const LOAD_BITMAP_METRICS_ONLY;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::LowLevel::GlyphLoadFlags, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::LowLevel::GlyphLoadFlags, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::TextCore::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::LowLevel::GlyphLoadFlags, "UnityEngine.TextCore.LowLevel", "GlyphLoadFlags");
