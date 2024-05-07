#pragma once
// IWYU pragma private; include "UnityEngine/AnimationClip.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Motion_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AnimationClip)
namespace System {
class Array;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class AnimationEvent;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct WrapMode;
}
// Forward declare root types
namespace UnityEngine {
class AnimationClip;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AnimationClip);
// Type: UnityEngine::AnimationClip
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::AnimationClip*
class CORDL_TYPE AnimationClip : public ::UnityEngine::Motion {
public:
  // Declarations
  __declspec(property(get = get_empty)) bool empty;

  __declspec(property(get = get_events, put = set_events))::ArrayW<::UnityEngine::AnimationEvent*, ::Array<::UnityEngine::AnimationEvent*>*> events;

  __declspec(property(get = get_frameRate, put = set_frameRate)) float_t frameRate;

  __declspec(property(get = get_hasGenericRootTransform)) bool hasGenericRootTransform;

  __declspec(property(get = get_hasMotionCurves)) bool hasMotionCurves;

  __declspec(property(get = get_hasMotionFloatCurves)) bool hasMotionFloatCurves;

  __declspec(property(get = get_hasRootCurves)) bool hasRootCurves;

  __declspec(property(get = get_hasRootMotion)) bool hasRootMotion;

  __declspec(property(get = get_humanMotion)) bool humanMotion;

  __declspec(property(get = get_legacy, put = set_legacy)) bool legacy;

  __declspec(property(get = get_length)) float_t length;

  __declspec(property(get = get_localBounds, put = set_localBounds))::UnityEngine::Bounds localBounds;

  __declspec(property(get = get_startTime)) float_t startTime;

  __declspec(property(get = get_stopTime)) float_t stopTime;

  __declspec(property(get = get_wrapMode, put = set_wrapMode))::UnityEngine::WrapMode wrapMode;

  /// @brief Method AddEvent, addr 0x33c9d7c, size 0x94, virtual false, abstract: false, final false
  inline void AddEvent(::UnityEngine::AnimationEvent* evt);

  /// @brief Method AddEventInternal, addr 0x33c9e10, size 0x44, virtual false, abstract: false, final false
  inline void AddEventInternal(::System::Object* evt);

  /// @brief Method ClearCurves, addr 0x33c99a4, size 0x3c, virtual false, abstract: false, final false
  inline void ClearCurves();

  /// @brief Method EnsureQuaternionContinuity, addr 0x33c9968, size 0x3c, virtual false, abstract: false, final false
  inline void EnsureQuaternionContinuity();

  /// @brief Method GetEventsInternal, addr 0x33c9ee0, size 0x3c, virtual false, abstract: false, final false
  inline ::System::Array* GetEventsInternal();

  /// @brief Method Internal_CreateAnimationClip, addr 0x33c9658, size 0x3c, virtual false, abstract: false, final false
  static inline void Internal_CreateAnimationClip(::UnityEngine::AnimationClip* self);

  static inline ::UnityEngine::AnimationClip* New_ctor();

  /// @brief Method SampleAnimation, addr 0x33c975c, size 0x64, virtual false, abstract: false, final false
  static inline void SampleAnimation(::UnityEngine::GameObject* go, ::UnityEngine::AnimationClip* clip, float_t inTime, ::UnityEngine::WrapMode wrapMode);

  /// @brief Method SampleAnimation, addr 0x33c9694, size 0x8c, virtual false, abstract: false, final false
  inline void SampleAnimation(::UnityEngine::GameObject* go, float_t time);

  /// @brief Method SetCurve, addr 0x33c98fc, size 0x6c, virtual false, abstract: false, final false
  inline void SetCurve(::StringW relativePath, ::System::Type* type, ::StringW propertyName, ::UnityEngine::AnimationCurve* curve);

  /// @brief Method SetEventsInternal, addr 0x33c9f60, size 0x44, virtual false, abstract: false, final false
  inline void SetEventsInternal(::System::Array* value);

  /// @brief Method .ctor, addr 0x33c9618, size 0x40, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_empty, addr 0x33c9c14, size 0x3c, virtual false, abstract: false, final false
  inline bool get_empty();

  /// @brief Method get_events, addr 0x33c9e54, size 0x8c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::AnimationEvent*, ::Array<::UnityEngine::AnimationEvent*>*> get_events();

  /// @brief Method get_frameRate, addr 0x33c9874, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_frameRate();

  /// @brief Method get_hasGenericRootTransform, addr 0x33c9c50, size 0x3c, virtual false, abstract: false, final false
  inline bool get_hasGenericRootTransform();

  /// @brief Method get_hasMotionCurves, addr 0x33c9cc8, size 0x3c, virtual false, abstract: false, final false
  inline bool get_hasMotionCurves();

  /// @brief Method get_hasMotionFloatCurves, addr 0x33c9c8c, size 0x3c, virtual false, abstract: false, final false
  inline bool get_hasMotionFloatCurves();

  /// @brief Method get_hasRootCurves, addr 0x33c9d04, size 0x3c, virtual false, abstract: false, final false
  inline bool get_hasRootCurves();

  /// @brief Method get_hasRootMotion, addr 0x33c9d40, size 0x3c, virtual false, abstract: false, final false
  inline bool get_hasRootMotion();

  /// @brief Method get_humanMotion, addr 0x33c9bd8, size 0x3c, virtual false, abstract: false, final false
  inline bool get_humanMotion();

  /// @brief Method get_legacy, addr 0x33c9b58, size 0x3c, virtual false, abstract: false, final false
  inline bool get_legacy();

  /// @brief Method get_length, addr 0x33c97c0, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_length();

  /// @brief Method get_localBounds, addr 0x33c9a24, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::Bounds get_localBounds();

  /// @brief Method get_localBounds_Injected, addr 0x33c9a8c, size 0x44, virtual false, abstract: false, final false
  inline void get_localBounds_Injected(ByRef<::UnityEngine::Bounds> ret);

  /// @brief Method get_startTime, addr 0x33c97fc, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_startTime();

  /// @brief Method get_stopTime, addr 0x33c9838, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_stopTime();

  /// @brief Method get_wrapMode, addr 0x33c9720, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::WrapMode get_wrapMode();

  /// @brief Method set_events, addr 0x33c9f1c, size 0x44, virtual false, abstract: false, final false
  inline void set_events(::ArrayW<::UnityEngine::AnimationEvent*, ::Array<::UnityEngine::AnimationEvent*>*> value);

  /// @brief Method set_frameRate, addr 0x33c98b0, size 0x4c, virtual false, abstract: false, final false
  inline void set_frameRate(float_t value);

  /// @brief Method set_legacy, addr 0x33c9b94, size 0x44, virtual false, abstract: false, final false
  inline void set_legacy(bool value);

  /// @brief Method set_localBounds, addr 0x33c9ad0, size 0x44, virtual false, abstract: false, final false
  inline void set_localBounds(::UnityEngine::Bounds value);

  /// @brief Method set_localBounds_Injected, addr 0x33c9b14, size 0x44, virtual false, abstract: false, final false
  inline void set_localBounds_Injected(ByRef<::UnityEngine::Bounds> value);

  /// @brief Method set_wrapMode, addr 0x33c99e0, size 0x44, virtual false, abstract: false, final false
  inline void set_wrapMode(::UnityEngine::WrapMode value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AnimationClip();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AnimationClip", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AnimationClip(AnimationClip&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AnimationClip", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AnimationClip(AnimationClip const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AnimationClip, 0x20>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::AnimationClip);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AnimationClip*, "UnityEngine", "AnimationClip");
