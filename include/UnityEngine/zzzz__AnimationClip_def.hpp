#pragma once
// IWYU pragma private; include "UnityEngine/AnimationClip.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Motion_def.hpp"
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
// Dependencies UnityEngine.Motion
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AnimationClip
class CORDL_TYPE AnimationClip : public ::UnityEngine::Motion {
public:
  // Declarations
  __declspec(property(get = get_empty)) bool empty;

  __declspec(property(get = get_events, put = set_events)) ::ArrayW<::UnityEngine::AnimationEvent*, ::Array<::UnityEngine::AnimationEvent*>*> events;

  __declspec(property(get = get_frameRate, put = set_frameRate)) float_t frameRate;

  __declspec(property(get = get_hasGenericRootTransform)) bool hasGenericRootTransform;

  __declspec(property(get = get_hasMotionCurves)) bool hasMotionCurves;

  __declspec(property(get = get_hasMotionFloatCurves)) bool hasMotionFloatCurves;

  __declspec(property(get = get_hasRootCurves)) bool hasRootCurves;

  __declspec(property(get = get_hasRootMotion)) bool hasRootMotion;

  __declspec(property(get = get_humanMotion)) bool humanMotion;

  __declspec(property(get = get_legacy, put = set_legacy)) bool legacy;

  __declspec(property(get = get_length)) float_t length;

  __declspec(property(get = get_localBounds, put = set_localBounds)) ::UnityEngine::Bounds localBounds;

  __declspec(property(get = get_startTime)) float_t startTime;

  __declspec(property(get = get_stopTime)) float_t stopTime;

  __declspec(property(get = get_wrapMode, put = set_wrapMode)) ::UnityEngine::WrapMode wrapMode;

  /// @brief Method AddEvent, addr 0x484e1c4, size 0x90, virtual false, abstract: false, final false
  inline void AddEvent(::UnityEngine::AnimationEvent* evt);

  /// @brief Method AddEventInternal, addr 0x484e254, size 0x44, virtual false, abstract: false, final false
  inline void AddEventInternal(::System::Object* evt);

  /// @brief Method ClearCurves, addr 0x484ddec, size 0x3c, virtual false, abstract: false, final false
  inline void ClearCurves();

  /// @brief Method EnsureQuaternionContinuity, addr 0x484ddb0, size 0x3c, virtual false, abstract: false, final false
  inline void EnsureQuaternionContinuity();

  /// @brief Method GetEventsInternal, addr 0x484e324, size 0x3c, virtual false, abstract: false, final false
  inline ::System::Array* GetEventsInternal();

  /// @brief Method Internal_CreateAnimationClip, addr 0x484daa0, size 0x3c, virtual false, abstract: false, final false
  static inline void Internal_CreateAnimationClip(::UnityEngine::AnimationClip* self);

  static inline ::UnityEngine::AnimationClip* New_ctor();

  /// @brief Method SampleAnimation, addr 0x484dba4, size 0x64, virtual false, abstract: false, final false
  static inline void SampleAnimation(::UnityEngine::GameObject* go, ::UnityEngine::AnimationClip* clip, float_t inTime, ::UnityEngine::WrapMode wrapMode);

  /// @brief Method SampleAnimation, addr 0x484dadc, size 0x8c, virtual false, abstract: false, final false
  inline void SampleAnimation(::UnityEngine::GameObject* go, float_t time);

  /// @brief Method SetCurve, addr 0x484dd44, size 0x6c, virtual false, abstract: false, final false
  inline void SetCurve(::StringW relativePath, ::System::Type* type, ::StringW propertyName, ::UnityEngine::AnimationCurve* curve);

  /// @brief Method SetEventsInternal, addr 0x484e3a4, size 0x44, virtual false, abstract: false, final false
  inline void SetEventsInternal(::System::Array* value);

  /// @brief Method .ctor, addr 0x484da08, size 0x40, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_empty, addr 0x484e05c, size 0x3c, virtual false, abstract: false, final false
  inline bool get_empty();

  /// @brief Method get_events, addr 0x484e298, size 0x8c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::AnimationEvent*, ::Array<::UnityEngine::AnimationEvent*>*> get_events();

  /// @brief Method get_frameRate, addr 0x484dcbc, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_frameRate();

  /// @brief Method get_hasGenericRootTransform, addr 0x484e098, size 0x3c, virtual false, abstract: false, final false
  inline bool get_hasGenericRootTransform();

  /// @brief Method get_hasMotionCurves, addr 0x484e110, size 0x3c, virtual false, abstract: false, final false
  inline bool get_hasMotionCurves();

  /// @brief Method get_hasMotionFloatCurves, addr 0x484e0d4, size 0x3c, virtual false, abstract: false, final false
  inline bool get_hasMotionFloatCurves();

  /// @brief Method get_hasRootCurves, addr 0x484e14c, size 0x3c, virtual false, abstract: false, final false
  inline bool get_hasRootCurves();

  /// @brief Method get_hasRootMotion, addr 0x484e188, size 0x3c, virtual false, abstract: false, final false
  inline bool get_hasRootMotion();

  /// @brief Method get_humanMotion, addr 0x484e020, size 0x3c, virtual false, abstract: false, final false
  inline bool get_humanMotion();

  /// @brief Method get_legacy, addr 0x484dfa0, size 0x3c, virtual false, abstract: false, final false
  inline bool get_legacy();

  /// @brief Method get_length, addr 0x484dc08, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_length();

  /// @brief Method get_localBounds, addr 0x484de6c, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::Bounds get_localBounds();

  /// @brief Method get_localBounds_Injected, addr 0x484ded4, size 0x44, virtual false, abstract: false, final false
  inline void get_localBounds_Injected(::ByRef<::UnityEngine::Bounds> ret);

  /// @brief Method get_startTime, addr 0x484dc44, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_startTime();

  /// @brief Method get_stopTime, addr 0x484dc80, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_stopTime();

  /// @brief Method get_wrapMode, addr 0x484db68, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::WrapMode get_wrapMode();

  /// @brief Method set_events, addr 0x484e360, size 0x44, virtual false, abstract: false, final false
  inline void set_events(::ArrayW<::UnityEngine::AnimationEvent*, ::Array<::UnityEngine::AnimationEvent*>*> value);

  /// @brief Method set_frameRate, addr 0x484dcf8, size 0x4c, virtual false, abstract: false, final false
  inline void set_frameRate(float_t value);

  /// @brief Method set_legacy, addr 0x484dfdc, size 0x44, virtual false, abstract: false, final false
  inline void set_legacy(bool value);

  /// @brief Method set_localBounds, addr 0x484df18, size 0x44, virtual false, abstract: false, final false
  inline void set_localBounds(::UnityEngine::Bounds value);

  /// @brief Method set_localBounds_Injected, addr 0x484df5c, size 0x44, virtual false, abstract: false, final false
  inline void set_localBounds_Injected(::ByRef<::UnityEngine::Bounds> value);

  /// @brief Method set_wrapMode, addr 0x484de28, size 0x44, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16865 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AnimationClip, 0x20>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::AnimationClip);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AnimationClip*, "UnityEngine", "AnimationClip");
