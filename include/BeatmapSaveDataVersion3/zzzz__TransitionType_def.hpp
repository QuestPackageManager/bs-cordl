#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion3/TransitionType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TransitionType)
// Forward declare root types
namespace BeatmapSaveDataVersion3 {
struct TransitionType;
}
// Write type traits
MARK_VAL_T(::BeatmapSaveDataVersion3::TransitionType);
// Dependencies
namespace BeatmapSaveDataVersion3 {
// Is value type: true
// CS Name: BeatmapSaveDataVersion3.TransitionType
struct CORDL_TYPE TransitionType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TransitionType_Unwrapped
  enum struct __TransitionType_Unwrapped : int32_t {
    __E_Instant = static_cast<int32_t>(0x0),
    __E_Interpolate = static_cast<int32_t>(0x1),
    __E_Extend = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TransitionType_Unwrapped() const noexcept {
    return static_cast<__TransitionType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TransitionType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TransitionType(int32_t value__) noexcept;

  /// @brief Field Extend value: I32(2)
  static ::BeatmapSaveDataVersion3::TransitionType const Extend;

  /// @brief Field Instant value: I32(0)
  static ::BeatmapSaveDataVersion3::TransitionType const Instant;

  /// @brief Field Interpolate value: I32(1)
  static ::BeatmapSaveDataVersion3::TransitionType const Interpolate;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13399 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatmapSaveDataVersion3::TransitionType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion3::TransitionType, 0x4>, "Size mismatch!");

} // namespace BeatmapSaveDataVersion3
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::TransitionType, "BeatmapSaveDataVersion3", "TransitionType");
