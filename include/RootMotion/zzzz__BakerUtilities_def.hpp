#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BakerUtilities)
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
struct Keyframe;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace RootMotion {
class BakerUtilities;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::BakerUtilities);
// Type: RootMotion::BakerUtilities
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace RootMotion {
// Is value type: false
// CS Name: ::RootMotion::BakerUtilities*
class CORDL_TYPE BakerUtilities : public ::System::Object {
public:
  // Declarations
  /// @brief Method EnsureQuaternionContinuity, addr 0x1337150, size 0x194, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion EnsureQuaternionContinuity(::UnityEngine::Quaternion lastQ, ::UnityEngine::Quaternion q);

  /// @brief Method GetReducedKeyframes, addr 0x1336ba8, size 0x3c4, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Keyframe, ::Array<::UnityEngine::Keyframe>*> GetReducedKeyframes(::UnityEngine::AnimationCurve* curve, float_t maxError);

  /// @brief Method ReduceKeyframes, addr 0x1336b70, size 0x38, virtual false, abstract: false, final false
  static inline void ReduceKeyframes(::UnityEngine::AnimationCurve* curve, float_t maxError);

  /// @brief Method SetLoopFrame, addr 0x1336f6c, size 0x1e0, virtual false, abstract: false, final false
  static inline void SetLoopFrame(float_t time, ::UnityEngine::AnimationCurve* curve);

  /// @brief Method SetTangentMode, addr 0x133714c, size 0x4, virtual false, abstract: false, final false
  static inline void SetTangentMode(::UnityEngine::AnimationCurve* curve);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BakerUtilities();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BakerUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BakerUtilities(BakerUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BakerUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BakerUtilities(BakerUtilities const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::BakerUtilities, 0x10>, "Size mismatch!");

} // namespace RootMotion
NEED_NO_BOX(::RootMotion::BakerUtilities);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::BakerUtilities*, "RootMotion", "BakerUtilities");
