#pragma once
// IWYU pragma private; include "BeatSaber/RecPlay/PoseSampler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PoseSampler)
namespace BeatSaber::RecPlay {
struct FrameSample;
}
namespace BeatSaber::RecPlay {
struct PoseFrame;
}
namespace UnityEngine {
struct Pose;
}
// Forward declare root types
namespace BeatSaber::RecPlay {
class PoseSampler;
}
// Write type traits
MARK_REF_T(::BeatSaber::RecPlay::PoseSampler*);
DEFINE_IL2CPP_CLASS(::BeatSaber::RecPlay::PoseSampler*, "BeatSaber.RecPlay", "PoseSampler");
// Dependencies System.Object
namespace BeatSaber::RecPlay {
// Is value type: false
// CS Name: BeatSaber.RecPlay.PoseSampler
class CORDL_TYPE PoseSampler : public ::System::Object {
public:
  // Declarations
  /// @brief Method FindPoseSample, addr 0x32c3fd4, size 0x148, virtual false, abstract: false, final false
  static inline ::BeatSaber::RecPlay::FrameSample FindPoseSample(::ArrayW<::BeatSaber::RecPlay::PoseFrame> frames, float_t time, int32_t nearest);

  /// @brief Method InterpolatePoseSample, addr 0x32c411c, size 0x94, virtual false, abstract: false, final false
  static inline ::UnityEngine::Pose InterpolatePoseSample(::ArrayW<::BeatSaber::RecPlay::PoseFrame> frames, ::by_ref<::BeatSaber::RecPlay::FrameSample> sample);

  /// @brief Method SamplePose, addr 0x32c3d5c, size 0x70, virtual false, abstract: false, final false
  static inline ::UnityEngine::Pose SamplePose(::ArrayW<::BeatSaber::RecPlay::PoseFrame> frames, float_t time, ::by_ref<int32_t> nearest);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PoseSampler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PoseSampler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PoseSampler(PoseSampler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PoseSampler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PoseSampler(PoseSampler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23246 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::BeatSaber::RecPlay::PoseSampler) == 0x10, "Size mismatch!");

} // namespace BeatSaber::RecPlay
