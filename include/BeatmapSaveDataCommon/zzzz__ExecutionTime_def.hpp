#pragma once
// IWYU pragma private; include "BeatmapSaveDataCommon/ExecutionTime.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ExecutionTime)
// Forward declare root types
namespace BeatmapSaveDataCommon {
struct ExecutionTime;
}
// Write type traits
MARK_VAL_T(::BeatmapSaveDataCommon::ExecutionTime);
// Dependencies
namespace BeatmapSaveDataCommon {
// Is value type: true
// CS Name: BeatmapSaveDataCommon.ExecutionTime
struct CORDL_TYPE ExecutionTime {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ExecutionTime_Unwrapped
  enum struct __ExecutionTime_Unwrapped : int32_t {
    __E_Early = static_cast<int32_t>(0x0),
    __E_Late = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ExecutionTime_Unwrapped() const noexcept {
    return static_cast<__ExecutionTime_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ExecutionTime();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ExecutionTime(int32_t value__) noexcept;

  /// @brief Field Early value: I32(0)
  static ::BeatmapSaveDataCommon::ExecutionTime const Early;

  /// @brief Field Late value: I32(1)
  static ::BeatmapSaveDataCommon::ExecutionTime const Late;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13452 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatmapSaveDataCommon::ExecutionTime, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataCommon::ExecutionTime, 0x4>, "Size mismatch!");

} // namespace BeatmapSaveDataCommon
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataCommon::ExecutionTime, "BeatmapSaveDataCommon", "ExecutionTime");
