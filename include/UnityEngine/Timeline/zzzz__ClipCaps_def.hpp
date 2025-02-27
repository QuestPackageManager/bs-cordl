#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/ClipCaps.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ClipCaps)
// Forward declare root types
namespace UnityEngine::Timeline {
struct ClipCaps;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Timeline::ClipCaps);
// Dependencies
namespace UnityEngine::Timeline {
// Is value type: true
// CS Name: UnityEngine.Timeline.ClipCaps
struct CORDL_TYPE ClipCaps {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ClipCaps_Unwrapped
  enum struct __ClipCaps_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Looping = static_cast<int32_t>(0x1),
    __E_Extrapolation = static_cast<int32_t>(0x2),
    __E_ClipIn = static_cast<int32_t>(0x4),
    __E_SpeedMultiplier = static_cast<int32_t>(0x8),
    __E_Blending = static_cast<int32_t>(0x10),
    __E_AutoScale = static_cast<int32_t>(0x28),
    __E_All = static_cast<int32_t>(0xffffffff),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ClipCaps_Unwrapped() const noexcept {
    return static_cast<__ClipCaps_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ClipCaps();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ClipCaps(int32_t value__) noexcept;

  /// @brief Field All value: I32(-1)
  static ::UnityEngine::Timeline::ClipCaps const All;

  /// @brief Field AutoScale value: I32(40)
  static ::UnityEngine::Timeline::ClipCaps const AutoScale;

  /// @brief Field Blending value: I32(16)
  static ::UnityEngine::Timeline::ClipCaps const Blending;

  /// @brief Field ClipIn value: I32(4)
  static ::UnityEngine::Timeline::ClipCaps const ClipIn;

  /// @brief Field Extrapolation value: I32(2)
  static ::UnityEngine::Timeline::ClipCaps const Extrapolation;

  /// @brief Field Looping value: I32(1)
  static ::UnityEngine::Timeline::ClipCaps const Looping;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::Timeline::ClipCaps const None;

  /// @brief Field SpeedMultiplier value: I32(8)
  static ::UnityEngine::Timeline::ClipCaps const SpeedMultiplier;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15838 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Timeline::ClipCaps, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::ClipCaps, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Timeline
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::ClipCaps, "UnityEngine.Timeline", "ClipCaps");
