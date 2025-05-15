#pragma once
// IWYU pragma private; include "BeatmapLevelSaveDataVersion4/LufsData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LufsData)
// Forward declare root types
namespace BeatmapLevelSaveDataVersion4 {
struct LufsData;
}
// Write type traits
MARK_VAL_T(::BeatmapLevelSaveDataVersion4::LufsData);
// Dependencies
namespace BeatmapLevelSaveDataVersion4 {
// Is value type: true
// CS Name: BeatmapLevelSaveDataVersion4.LufsData
struct CORDL_TYPE LufsData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr LufsData();

  // Ctor Parameters [CppParam { name: "si", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "ei", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "l", ty:
  // "float_t", modifiers: "", def_value: None }]
  constexpr LufsData(int32_t si, int32_t ei, float_t l) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13471 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  /// @brief Field si, offset: 0x0, size: 0x4, def value: None
  int32_t si;

  /// @brief Field ei, offset: 0x4, size: 0x4, def value: None
  int32_t ei;

  /// @brief Field l, offset: 0x8, size: 0x4, def value: None
  float_t l;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatmapLevelSaveDataVersion4::LufsData, si) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatmapLevelSaveDataVersion4::LufsData, ei) == 0x4, "Offset mismatch!");

static_assert(offsetof(::BeatmapLevelSaveDataVersion4::LufsData, l) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatmapLevelSaveDataVersion4::LufsData, 0xc>, "Size mismatch!");

} // namespace BeatmapLevelSaveDataVersion4
DEFINE_IL2CPP_ARG_TYPE(::BeatmapLevelSaveDataVersion4::LufsData, "BeatmapLevelSaveDataVersion4", "LufsData");
