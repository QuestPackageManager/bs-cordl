#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/TrackOffset.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TrackOffset)
// Forward declare root types
namespace UnityEngine::Timeline {
struct TrackOffset;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Timeline::TrackOffset);
// Dependencies
namespace UnityEngine::Timeline {
// Is value type: true
// CS Name: UnityEngine.Timeline.TrackOffset
struct CORDL_TYPE TrackOffset {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TrackOffset_Unwrapped
  enum struct __TrackOffset_Unwrapped : int32_t {
    __E_ApplyTransformOffsets = static_cast<int32_t>(0x0),
    __E_ApplySceneOffsets = static_cast<int32_t>(0x1),
    __E_Auto = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TrackOffset_Unwrapped() const noexcept {
    return static_cast<__TrackOffset_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TrackOffset();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TrackOffset(int32_t value__) noexcept;

  /// @brief Field ApplySceneOffsets value: I32(1)
  static ::UnityEngine::Timeline::TrackOffset const ApplySceneOffsets;

  /// @brief Field ApplyTransformOffsets value: I32(0)
  static ::UnityEngine::Timeline::TrackOffset const ApplyTransformOffsets;

  /// @brief Field Auto value: I32(2)
  static ::UnityEngine::Timeline::TrackOffset const Auto;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15796 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Timeline::TrackOffset, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::TrackOffset, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Timeline
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::TrackOffset, "UnityEngine.Timeline", "TrackOffset");
