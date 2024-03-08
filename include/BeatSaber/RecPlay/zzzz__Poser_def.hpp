#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Poser)
namespace UnityEngine {
struct Pose;
}
// Forward declare root types
namespace BeatSaber::RecPlay {
class Poser;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::RecPlay::Poser);
// Type: BeatSaber.RecPlay::Poser
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace BeatSaber::RecPlay {
// Is value type: false
// CS Name: ::BeatSaber.RecPlay::Poser*
class CORDL_TYPE Poser : public ::System::Object {
public:
  // Declarations
  /// @brief Method InterpolatePose, addr 0xe9e794, size 0x8c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Pose InterpolatePose(ByRef<::UnityEngine::Pose> a, ByRef<::UnityEngine::Pose> b, float_t t);

  /// @brief Method InvertPose, addr 0xe9eae4, size 0x68, virtual false, abstract: false, final false
  static inline ::UnityEngine::Pose InvertPose(::UnityEngine::Pose pose);

  /// @brief Method MirrorPoseYZ, addr 0xe9eb4c, size 0x34, virtual false, abstract: false, final false
  static inline ::UnityEngine::Pose MirrorPoseYZ(::UnityEngine::Pose pose);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Poser();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Poser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Poser(Poser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Poser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Poser(Poser const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::RecPlay::Poser, 0x10>, "Size mismatch!");

} // namespace BeatSaber::RecPlay
NEED_NO_BOX(::BeatSaber::RecPlay::Poser);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::RecPlay::Poser*, "BeatSaber.RecPlay", "Poser");
