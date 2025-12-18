#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion4/Chain.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Chain)
// Forward declare root types
namespace BeatmapSaveDataVersion4 {
struct Chain;
}
// Write type traits
MARK_VAL_T(::BeatmapSaveDataVersion4::Chain);
// Dependencies
namespace BeatmapSaveDataVersion4 {
// Is value type: true
// CS Name: BeatmapSaveDataVersion4.Chain
struct CORDL_TYPE Chain {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr Chain();

  // Ctor Parameters [CppParam { name: "tx", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "ty", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "c", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "s", ty: "float_t", modifiers: "", def_value: None }]
  constexpr Chain(int32_t tx, int32_t ty, int32_t c, float_t s) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15314 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field tx, offset: 0x0, size: 0x4, def value: None
  int32_t tx;

  /// @brief Field ty, offset: 0x4, size: 0x4, def value: None
  int32_t ty;

  /// @brief Field c, offset: 0x8, size: 0x4, def value: None
  int32_t c;

  /// @brief Field s, offset: 0xc, size: 0x4, def value: None
  float_t s;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatmapSaveDataVersion4::Chain, tx) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::Chain, ty) == 0x4, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::Chain, c) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::Chain, s) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion4::Chain, 0x10>, "Size mismatch!");

} // namespace BeatmapSaveDataVersion4
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion4::Chain, "BeatmapSaveDataVersion4", "Chain");
