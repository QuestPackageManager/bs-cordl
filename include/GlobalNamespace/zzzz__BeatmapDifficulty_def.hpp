#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapDifficulty.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapDifficulty)
// Forward declare root types
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BeatmapDifficulty);
// Type: ::BeatmapDifficulty
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::BeatmapDifficulty
struct CORDL_TYPE BeatmapDifficulty {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __BeatmapDifficulty_Unwrapped
  enum struct __BeatmapDifficulty_Unwrapped : int32_t {
    __E_Easy = static_cast<int32_t>(0x0),
    __E_Normal = static_cast<int32_t>(0x1),
    __E_Hard = static_cast<int32_t>(0x2),
    __E_Expert = static_cast<int32_t>(0x3),
    __E_ExpertPlus = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __BeatmapDifficulty_Unwrapped() const noexcept {
    return static_cast<__BeatmapDifficulty_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDifficulty();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr BeatmapDifficulty(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Easy value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::BeatmapDifficulty const Easy;

  /// @brief Field Expert value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::BeatmapDifficulty const Expert;

  /// @brief Field ExpertPlus value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::BeatmapDifficulty const ExpertPlus;

  /// @brief Field Hard value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::BeatmapDifficulty const Hard;

  /// @brief Field Normal value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::BeatmapDifficulty const Normal;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16993 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapDifficulty, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDifficulty, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDifficulty, "", "BeatmapDifficulty");
