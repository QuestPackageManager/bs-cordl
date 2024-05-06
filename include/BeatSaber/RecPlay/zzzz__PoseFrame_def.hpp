#pragma once
// IWYU pragma private; include "BeatSaber/RecPlay/PoseFrame.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Pose_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(PoseFrame)
namespace UnityEngine {
struct Pose;
}
// Forward declare root types
namespace BeatSaber::RecPlay {
struct PoseFrame;
}
// Write type traits
MARK_VAL_T(::BeatSaber::RecPlay::PoseFrame);
// Type: BeatSaber.RecPlay::PoseFrame
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace BeatSaber::RecPlay {
// Is value type: true
// CS Name: ::BeatSaber.RecPlay::PoseFrame
struct CORDL_TYPE PoseFrame {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr PoseFrame();

  // Ctor Parameters [CppParam { name: "time", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "pose", ty: "::UnityEngine::Pose", modifiers: "", def_value: None }]
  constexpr PoseFrame(float_t time, ::UnityEngine::Pose pose) noexcept;

  /// @brief Field time, offset: 0x0, size: 0x4, def value: None
  float_t time;

  /// @brief Field pose, offset: 0x4, size: 0x1c, def value: None
  ::UnityEngine::Pose pose;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::RecPlay::PoseFrame, 0x20>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::RecPlay::PoseFrame, time) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::RecPlay::PoseFrame, pose) == 0x4, "Offset mismatch!");

} // namespace BeatSaber::RecPlay
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::RecPlay::PoseFrame, "BeatSaber.RecPlay", "PoseFrame");
