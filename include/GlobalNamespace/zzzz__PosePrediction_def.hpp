#pragma once
// IWYU pragma private; include "GlobalNamespace/PosePrediction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PosePrediction)
namespace GlobalNamespace {
struct PoseSerializable;
}
namespace UnityEngine {
struct Pose;
}
// Forward declare root types
namespace GlobalNamespace {
class PosePrediction;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PosePrediction);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PosePrediction
class CORDL_TYPE PosePrediction : public ::System::Object {
public:
  // Declarations
  /// @brief Method InterpolatePose, addr 0x22e9118, size 0x2fc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Pose InterpolatePose(::UnityEngine::Pose prev, ::UnityEngine::Pose curr, float_t t);

  /// @brief Method InterpolatePoseSerializable, addr 0x22e94f4, size 0xf0, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::PoseSerializable InterpolatePoseSerializable(::GlobalNamespace::PoseSerializable a, ::GlobalNamespace::PoseSerializable b, float_t t);

  static inline ::GlobalNamespace::PosePrediction* New_ctor();

  /// @brief Method PredictPose, addr 0x22e9028, size 0xf0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Pose PredictPose(::UnityEngine::Pose prev, int64_t prevTime, ::UnityEngine::Pose curr, int64_t currTime, int64_t time);

  /// @brief Method PredictPoseSerializable, addr 0x22e9414, size 0xe0, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::PoseSerializable PredictPoseSerializable(::GlobalNamespace::PoseSerializable prev, int64_t prevTime, ::GlobalNamespace::PoseSerializable curr, int64_t currTime,
                                                                            int64_t time);

  /// @brief Method .ctor, addr 0x22e95e4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PosePrediction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PosePrediction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PosePrediction(PosePrediction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PosePrediction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PosePrediction(PosePrediction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14985 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PosePrediction, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PosePrediction);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PosePrediction*, "", "PosePrediction");
