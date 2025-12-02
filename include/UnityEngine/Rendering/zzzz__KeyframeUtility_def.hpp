#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/KeyframeUtility.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(KeyframeUtility)
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
struct Keyframe;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class KeyframeUtility;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::KeyframeUtility);
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.KeyframeUtility
class CORDL_TYPE KeyframeUtility : public ::System::Object {
public:
  // Declarations
  /// @brief Method EvalCurveSegmentAndDeriv, addr 0x65aa920, size 0xcc, virtual false, abstract: false, final false
  static inline void EvalCurveSegmentAndDeriv(::ByRef<float_t> dstValue, ::ByRef<float_t> dstDeriv, ::UnityEngine::Keyframe lhsKey, ::UnityEngine::Keyframe rhsKey, float_t desiredTime);

  /// @brief Method EvalKeyAtTime, addr 0x65aa9ec, size 0xa4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Keyframe EvalKeyAtTime(::Unity::Collections::NativeArray_1<::UnityEngine::Keyframe> keys, int32_t lhsIndex, int32_t rhsIndex, float_t startTime, float_t endTime,
                                                      float_t currTime);

  /// @brief Method FetchKeyFromIndexClampEdge, addr 0x65aa890, size 0x90, virtual false, abstract: false, final false
  static inline ::UnityEngine::Keyframe FetchKeyFromIndexClampEdge(::Unity::Collections::NativeArray_1<::UnityEngine::Keyframe> keys, int32_t index, float_t segmentStartTime, float_t segmentEndTime);

  /// @brief Method GetKeyframeAndClampEdge, addr 0x65aa7a0, size 0xf0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Keyframe GetKeyframeAndClampEdge(::Unity::Collections::NativeArray_1<::UnityEngine::Keyframe> keys, int32_t index);

  /// @brief Method InterpAnimationCurve, addr 0x65aaa90, size 0x578, virtual false, abstract: false, final false
  static inline void InterpAnimationCurve(::ByRef<::UnityEngine::AnimationCurve*> lhsAndResultCurve, ::UnityEngine::AnimationCurve* rhsCurve, float_t t);

  /// @brief Method LerpSingleKeyframe, addr 0x65aa748, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::Keyframe LerpSingleKeyframe(::UnityEngine::Keyframe lhs, ::UnityEngine::Keyframe rhs, float_t t);

  static inline ::UnityEngine::Rendering::KeyframeUtility* New_ctor();

  /// @brief Method ResetAnimationCurve, addr 0x65aa734, size 0x14, virtual false, abstract: false, final false
  static inline void ResetAnimationCurve(::UnityEngine::AnimationCurve* curve);

  /// @brief Method .ctor, addr 0x65ab008, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KeyframeUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "KeyframeUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KeyframeUtility(KeyframeUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KeyframeUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KeyframeUtility(KeyframeUtility const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12291 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::KeyframeUtility, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::KeyframeUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::KeyframeUtility*, "UnityEngine.Rendering", "KeyframeUtility");
