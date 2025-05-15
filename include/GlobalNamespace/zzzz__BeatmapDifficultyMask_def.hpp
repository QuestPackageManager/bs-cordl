#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapDifficultyMask.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapDifficultyMask)
// Forward declare root types
namespace GlobalNamespace {
struct BeatmapDifficultyMask;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BeatmapDifficultyMask);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: BeatmapDifficultyMask
struct CORDL_TYPE BeatmapDifficultyMask {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct __BeatmapDifficultyMask_Unwrapped
  enum struct __BeatmapDifficultyMask_Unwrapped : uint8_t {
    __E_Easy = static_cast<uint8_t>(0x1u),
    __E_Normal = static_cast<uint8_t>(0x2u),
    __E_Hard = static_cast<uint8_t>(0x4u),
    __E_Expert = static_cast<uint8_t>(0x8u),
    __E_ExpertPlus = static_cast<uint8_t>(0x10u),
    __E_All = static_cast<uint8_t>(0x1fu),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __BeatmapDifficultyMask_Unwrapped() const noexcept {
    return static_cast<__BeatmapDifficultyMask_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint8_t() const noexcept {
    return static_cast<uint8_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDifficultyMask();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr BeatmapDifficultyMask(uint8_t value__) noexcept;

  /// @brief Field All value: U8(31)
  static ::GlobalNamespace::BeatmapDifficultyMask const All;

  /// @brief Field Easy value: U8(1)
  static ::GlobalNamespace::BeatmapDifficultyMask const Easy;

  /// @brief Field Expert value: U8(8)
  static ::GlobalNamespace::BeatmapDifficultyMask const Expert;

  /// @brief Field ExpertPlus value: U8(16)
  static ::GlobalNamespace::BeatmapDifficultyMask const ExpertPlus;

  /// @brief Field Hard value: U8(4)
  static ::GlobalNamespace::BeatmapDifficultyMask const Hard;

  /// @brief Field Normal value: U8(2)
  static ::GlobalNamespace::BeatmapDifficultyMask const Normal;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17045 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapDifficultyMask, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapDifficultyMask, 0x1>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDifficultyMask, "", "BeatmapDifficultyMask");
