#pragma once
// IWYU pragma private; include "BeatSaber/RecPlay/PoseSampler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
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
MARK_REF_PTR_T(::BeatSaber::RecPlay::PoseSampler);
// Dependencies System.Object
namespace BeatSaber::RecPlay {
// Is value type: false
// CS Name: BeatSaber.RecPlay.PoseSampler
class CORDL_TYPE PoseSampler : public ::System::Object {
public:
  // Declarations
  /// @brief Method FindPoseSample, addr 0x22804b0, size 0x15c, virtual false, abstract: false, final false
  static inline ::BeatSaber::RecPlay::FrameSample FindPoseSample(::ArrayW<::BeatSaber::RecPlay::PoseFrame, ::Array<::BeatSaber::RecPlay::PoseFrame>*> frames, float_t time, int32_t nearest);

  /// @brief Method InterpolatePoseSample, addr 0x228060c, size 0x70, virtual false, abstract: false, final false
  static inline ::UnityEngine::Pose InterpolatePoseSample(::ArrayW<::BeatSaber::RecPlay::PoseFrame, ::Array<::BeatSaber::RecPlay::PoseFrame>*> frames,
                                                          ::ByRef<::BeatSaber::RecPlay::FrameSample> sample);

  /// @brief Method SamplePose, addr 0x22801cc, size 0x70, virtual false, abstract: false, final false
  static inline ::UnityEngine::Pose SamplePose(::ArrayW<::BeatSaber::RecPlay::PoseFrame, ::Array<::BeatSaber::RecPlay::PoseFrame>*> frames, float_t time, ::ByRef<int32_t> nearest);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18901 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::RecPlay::PoseSampler, 0x10>, "Size mismatch!");

} // namespace BeatSaber::RecPlay
NEED_NO_BOX(::BeatSaber::RecPlay::PoseSampler);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::RecPlay::PoseSampler*, "BeatSaber.RecPlay", "PoseSampler");
