#pragma once
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
// Type: UnityEngine.Timeline::ClipCaps
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13824))
// CS Name: ::UnityEngine.Timeline::ClipCaps
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ClipCaps(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr ClipCaps();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Timeline::ClipCaps const None;

  /// @brief Field Looping value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Timeline::ClipCaps const Looping;

  /// @brief Field Extrapolation value: static_cast<int32_t>(0x2)
  static ::UnityEngine::Timeline::ClipCaps const Extrapolation;

  /// @brief Field ClipIn value: static_cast<int32_t>(0x4)
  static ::UnityEngine::Timeline::ClipCaps const ClipIn;

  /// @brief Field SpeedMultiplier value: static_cast<int32_t>(0x8)
  static ::UnityEngine::Timeline::ClipCaps const SpeedMultiplier;

  /// @brief Field Blending value: static_cast<int32_t>(0x10)
  static ::UnityEngine::Timeline::ClipCaps const Blending;

  /// @brief Field AutoScale value: static_cast<int32_t>(0x28)
  static ::UnityEngine::Timeline::ClipCaps const AutoScale;

  /// @brief Field All value: static_cast<int32_t>(0xffffffff)
  static ::UnityEngine::Timeline::ClipCaps const All;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::ClipCaps, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::ClipCaps, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Timeline
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::ClipCaps, "UnityEngine.Timeline", "ClipCaps");
