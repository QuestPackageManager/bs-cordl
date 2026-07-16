#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/KeyframeUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
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
MARK_REF_T(::UnityEngine::Rendering::KeyframeUtility*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::KeyframeUtility*, "UnityEngine.Rendering", "KeyframeUtility");
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.KeyframeUtility
class CORDL_TYPE KeyframeUtility : public ::System::Object {
public:
  // Declarations
  /// @brief Method EvalCurveSegmentAndDeriv, addr 0x67c3dfc, size 0xcc, virtual false, abstract: false, final false
  static inline void EvalCurveSegmentAndDeriv(::by_ref<float_t> dstValue, ::by_ref<float_t> dstDeriv, ::UnityEngine::Keyframe lhsKey, ::UnityEngine::Keyframe rhsKey, float_t desiredTime);

  /// @brief Method EvalKeyAtTime, addr 0x67c3ec8, size 0xa4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Keyframe EvalKeyAtTime(::Unity::Collections::NativeArray_1<::UnityEngine::Keyframe> keys, int32_t lhsIndex, int32_t rhsIndex, float_t startTime, float_t endTime,
                                                      float_t currTime);

  /// @brief Method FetchKeyFromIndexClampEdge, addr 0x67c3d6c, size 0x90, virtual false, abstract: false, final false
  static inline ::UnityEngine::Keyframe FetchKeyFromIndexClampEdge(::Unity::Collections::NativeArray_1<::UnityEngine::Keyframe> keys, int32_t index, float_t segmentStartTime, float_t segmentEndTime);

  /// @brief Method GetKeyframeAndClampEdge, addr 0x67c3c7c, size 0xf0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Keyframe GetKeyframeAndClampEdge(::Unity::Collections::NativeArray_1<::UnityEngine::Keyframe> keys, int32_t index);

  /// @brief Method InterpAnimationCurve, addr 0x67c3f6c, size 0x578, virtual false, abstract: false, final false
  static inline void InterpAnimationCurve(::by_ref<::UnityEngine::AnimationCurve*> lhsAndResultCurve, ::UnityEngine::AnimationCurve* rhsCurve, float_t t);

  /// @brief Method LerpSingleKeyframe, addr 0x67c3c24, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::Keyframe LerpSingleKeyframe(::UnityEngine::Keyframe lhs, ::UnityEngine::Keyframe rhs, float_t t);

  static inline ::UnityEngine::Rendering::KeyframeUtility* New_ctor();

  /// @brief Method ResetAnimationCurve, addr 0x67c3c10, size 0x14, virtual false, abstract: false, final false
  static inline void ResetAnimationCurve(::UnityEngine::AnimationCurve* curve);

  /// @brief Method .ctor, addr 0x67c44e4, size 0x4, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12293 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::KeyframeUtility) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering
