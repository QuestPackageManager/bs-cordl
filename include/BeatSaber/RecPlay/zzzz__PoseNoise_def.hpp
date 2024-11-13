#pragma once
// IWYU pragma private; include "BeatSaber/RecPlay/PoseNoise.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(PoseNoise)
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace BeatSaber::RecPlay {
struct PoseNoise;
}
// Write type traits
MARK_VAL_T(::BeatSaber::RecPlay::PoseNoise);
// Type: BeatSaber.RecPlay::PoseNoise
// SizeInfo { instance_size: 12, native_size: 12, calculated_instance_size: 12, calculated_native_size: 28, minimum_alignment: 4, packing: None, specified_packing: None }
namespace BeatSaber::RecPlay {
// Is value type: true
// CS Name: ::BeatSaber.RecPlay::PoseNoise
struct CORDL_TYPE PoseNoise {
public:
  // Declarations
  /// @brief Method Sample, addr 0x2248560, size 0xbc, virtual false, abstract: false, final false
  inline ::UnityEngine::Pose Sample(float_t time);

  /// @brief Method SampleLemniscateOfBernoulli, addr 0x224861c, size 0x40, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 SampleLemniscateOfBernoulli(float_t time);

  // Ctor Parameters []
  // @brief default ctor
  constexpr PoseNoise();

  // Ctor Parameters [CppParam { name: "frequency", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "move", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "rotate", ty: "float_t", modifiers: "", def_value: None }]
  constexpr PoseNoise(float_t frequency, float_t move, float_t rotate) noexcept;

  /// @brief Field frequency, offset: 0x0, size: 0x4, def value: None
  float_t frequency;

  /// @brief Field move, offset: 0x4, size: 0x4, def value: None
  float_t move;

  /// @brief Field rotate, offset: 0x8, size: 0x4, def value: None
  float_t rotate;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19010 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::RecPlay::PoseNoise, 0xc>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::RecPlay::PoseNoise, frequency) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::RecPlay::PoseNoise, move) == 0x4, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::RecPlay::PoseNoise, rotate) == 0x8, "Offset mismatch!");

} // namespace BeatSaber::RecPlay
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::RecPlay::PoseNoise, "BeatSaber.RecPlay", "PoseNoise");
