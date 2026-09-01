#pragma once
// IWYU pragma private; include "LufsMetering\LoudnessData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(LoudnessData)
// Forward declare root types
namespace LufsMetering {
struct LoudnessData;
}
// Write type traits
MARK_VAL_T(::LufsMetering::LoudnessData);
DEFINE_IL2CPP_CLASS(::LufsMetering::LoudnessData, "LufsMetering", "LoudnessData");
// Dependencies
namespace LufsMetering {
// Is value type: true
// CS Name: LufsMetering.LoudnessData
struct CORDL_TYPE LoudnessData {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x3268260, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(float_t lufs, ::ArrayW<float_t> momentaryValues, float_t blockDuration);

  // Ctor Parameters []
  // @brief default ctor
  constexpr LoudnessData();

  // Ctor Parameters [CppParam { name: "lufs", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "blockDuration", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "momentaryValues", ty: "::ArrayW<float_t>", modifiers: "", def_value: None }]
  constexpr LoudnessData(float_t lufs, float_t blockDuration, ::ArrayW<float_t> momentaryValues) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22643 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field lufs, offset: 0x0, size: 0x4, def value: None
  float_t lufs;

  /// @brief Field blockDuration, offset: 0x4, size: 0x4, def value: None
  float_t blockDuration;

  /// @brief Field momentaryValues, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<float_t> momentaryValues;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::LufsMetering::LoudnessData, lufs) == 0x0, "Offset mismatch!");

static_assert(offsetof(::LufsMetering::LoudnessData, blockDuration) == 0x4, "Offset mismatch!");

static_assert(offsetof(::LufsMetering::LoudnessData, momentaryValues) == 0x8, "Offset mismatch!");

static_assert(sizeof(::LufsMetering::LoudnessData) == 0x10, "Size mismatch!");

} // namespace LufsMetering
