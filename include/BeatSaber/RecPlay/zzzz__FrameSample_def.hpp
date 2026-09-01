#pragma once
// IWYU pragma private; include "BeatSaber\RecPlay\FrameSample.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FrameSample)
// Forward declare root types
namespace BeatSaber::RecPlay {
struct FrameSample;
}
// Write type traits
MARK_VAL_T(::BeatSaber::RecPlay::FrameSample);
DEFINE_IL2CPP_CLASS(::BeatSaber::RecPlay::FrameSample, "BeatSaber.RecPlay", "FrameSample");
// Dependencies
namespace BeatSaber::RecPlay {
// Is value type: true
// CS Name: BeatSaber.RecPlay.FrameSample
struct CORDL_TYPE FrameSample {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr FrameSample();

  // Ctor Parameters [CppParam { name: "previous", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "next", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "alpha",
  // ty: "float_t", modifiers: "", def_value: None }]
  constexpr FrameSample(int32_t previous, int32_t next, float_t alpha) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23297 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  /// @brief Field previous, offset: 0x0, size: 0x4, def value: None
  int32_t previous;

  /// @brief Field next, offset: 0x4, size: 0x4, def value: None
  int32_t next;

  /// @brief Field alpha, offset: 0x8, size: 0x4, def value: None
  float_t alpha;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::RecPlay::FrameSample, previous) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::RecPlay::FrameSample, next) == 0x4, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::RecPlay::FrameSample, alpha) == 0x8, "Offset mismatch!");

static_assert(sizeof(::BeatSaber::RecPlay::FrameSample) == 0xc, "Size mismatch!");

} // namespace BeatSaber::RecPlay
