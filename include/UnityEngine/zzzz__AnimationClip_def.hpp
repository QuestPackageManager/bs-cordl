#pragma once
// IWYU pragma private; include "UnityEngine/AnimationClip.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Motion_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AnimationClip)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
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

  /// @brief Method AddEvent, addr 0x6802a5c, size 0x100, virtual false, abstract: false, final false
  inline void AddEvent(::UnityEngine::AnimationEvent* evt);

  /// @brief Method AddEventInternal, addr 0x6802b5c, size 0x90, virtual false, abstract: false, final false
  inline void AddEventInternal(::System::Object* evt);

  /// @brief Method AddEventInternal_Injected, addr 0x6802bec, size 0x44, virtual false, abstract: false, final false
  static inline void AddEventInternal_Injected(::System::IntPtr _unity_self, ::System::Object* evt);

  /// @brief Method ClearCurves, addr 0x6802014, size 0x80, virtual false, abstract: false, final false
  inline void ClearCurves();

  /// @brief Method ClearCurves_Injected, addr 0x6802094, size 0x3c, virtual false, abstract: false, final false
  static inline void ClearCurves_Injected(::System::IntPtr _unity_self);

  /// @brief Method EnsureQuaternionContinuity, addr 0x6801f58, size 0x80, virtual false, abstract: false, final false
  inline void EnsureQuaternionContinuity();

  /// @brief Method EnsureQuaternionContinuity_Injected, addr 0x6801fd8, size 0x3c, virtual false, abstract: false, final false
  static inline void EnsureQuaternionContinuity_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetEventsInternal, addr 0x6802c7c, size 0x98, virtual false, abstract: false, final false
  inline void GetEventsInternal(::ByRef<::System::IntPtr> values, ::ByRef<int32_t> size);

  /// @brief Method GetEventsInternal_Injected, addr 0x6802f64, size 0x54, virtual false, abstract: false, final false
  static inline void GetEventsInternal_Injected(::System::IntPtr _unity_self, ::ByRef<::System::IntPtr> values, ::ByRef<int32_t> size);

  /// @brief Method Internal_CreateAnimationClip, addr 0x680163c, size 0x3c, virtual false, abstract: false, final false
  static inline void Internal_CreateAnimationClip(::UnityEngine::AnimationClip* self);

  static inline ::UnityEngine::AnimationClip* New_ctor();

  /// @brief Method SampleAnimation, addr 0x6801734, size 0x128, virtual false, abstract: false, final false
  static inline void SampleAnimation(::UnityEngine::GameObject* go, ::UnityEngine::AnimationClip* clip, float_t inTime, ::UnityEngine::WrapMode wrapMode);

  /// @brief Method SampleAnimation, addr 0x6801678, size 0x3c, virtual false, abstract: false, final false
  inline void SampleAnimation(::UnityEngine::GameObject* go, float_t time);

  /// @brief Method SampleAnimation_Injected, addr 0x680185c, size 0x64, virtual false, abstract: false, final false
  static inline void SampleAnimation_Injected(::System::IntPtr go, ::System::IntPtr clip, float_t inTime, ::UnityEngine::WrapMode wrapMode);

  /// @brief Method SetCurve, addr 0x6801c8c, size 0x260, virtual false, abstract: false, final false
  inline void SetCurve(::StringW relativePath, ::System::Type* type, ::StringW propertyName, ::UnityEngine::AnimationCurve* curve);

  /// @brief Method SetCurve_Injected, addr 0x6801eec, size 0x6c, virtual false, abstract: false, final false
  static inline void SetCurve_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> relativePath, ::System::Type* type,
                                       ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> propertyName, ::System::IntPtr curve);

  /// @brief Method SetEventsInternal, addr 0x6802e78, size 0x98, virtual false, abstract: false, final false
  inline void SetEventsInternal(void* data, int32_t length);

  /// @brief Method SetEventsInternal_Injected, addr 0x6802f10, size 0x54, virtual false, abstract: false, final false
  static inline void SetEventsInternal_Injected(::System::IntPtr _unity_self, void* data, int32_t length);

  /// @brief Method .ctor, addr 0x68015a4, size 0x40, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_empty, addr 0x68025f4, size 0x80, virtual false, abstract: false, final false
  inline bool get_empty();

  /// @brief Method get_empty_Injected, addr 0x6802674, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_empty_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_events, addr 0x6802c30, size 0x4c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::AnimationEvent*, ::Array<::UnityEngine::AnimationEvent*>*> get_events();

  /// @brief Method get_frameRate, addr 0x6801af4, size 0x80, virtual false, abstract: false, final false
  inline float_t get_frameRate();

  /// @brief Method get_frameRate_Injected, addr 0x6801b74, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_frameRate_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_hasGenericRootTransform, addr 0x68026b0, size 0x80, virtual false, abstract: false, final false
  inline bool get_hasGenericRootTransform();

  /// @brief Method get_hasGenericRootTransform_Injected, addr 0x6802730, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_hasGenericRootTransform_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_hasMotionCurves, addr 0x6802828, size 0x80, virtual false, abstract: false, final false
  inline bool get_hasMotionCurves();

  /// @brief Method get_hasMotionCurves_Injected, addr 0x68028a8, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_hasMotionCurves_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_hasMotionFloatCurves, addr 0x680276c, size 0x80, virtual false, abstract: false, final false
  inline bool get_hasMotionFloatCurves();

  /// @brief Method get_hasMotionFloatCurves_Injected, addr 0x68027ec, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_hasMotionFloatCurves_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_hasRootCurves, addr 0x68028e4, size 0x80, virtual false, abstract: false, final false
  inline bool get_hasRootCurves();

  /// @brief Method get_hasRootCurves_Injected, addr 0x6802964, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_hasRootCurves_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_hasRootMotion, addr 0x68029a0, size 0x80, virtual false, abstract: false, final false
  inline bool get_hasRootMotion();

  /// @brief Method get_hasRootMotion_Injected, addr 0x6802a20, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_hasRootMotion_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_humanMotion, addr 0x6802538, size 0x80, virtual false, abstract: false, final false
  inline bool get_humanMotion();

  /// @brief Method get_humanMotion_Injected, addr 0x68025b8, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_humanMotion_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_legacy, addr 0x68023a8, size 0x80, virtual false, abstract: false, final false
  inline bool get_legacy();

  /// @brief Method get_legacy_Injected, addr 0x6802428, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_legacy_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_length, addr 0x68018c0, size 0x80, virtual false, abstract: false, final false
  inline float_t get_length();

  /// @brief Method get_length_Injected, addr 0x6801940, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_length_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_localBounds, addr 0x68021e0, size 0xb0, virtual false, abstract: false, final false
  inline ::UnityEngine::Bounds get_localBounds();

  /// @brief Method get_localBounds_Injected, addr 0x6802290, size 0x44, virtual false, abstract: false, final false
  static inline void get_localBounds_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bounds> ret);

  /// @brief Method get_startTime, addr 0x680197c, size 0x80, virtual false, abstract: false, final false
  inline float_t get_startTime();

  /// @brief Method get_startTime_Injected, addr 0x68019fc, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_startTime_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_stopTime, addr 0x6801a38, size 0x80, virtual false, abstract: false, final false
  inline float_t get_stopTime();

  /// @brief Method get_stopTime_Injected, addr 0x6801ab8, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_stopTime_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_wrapMode, addr 0x68016b4, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::WrapMode get_wrapMode();

  /// @brief Method get_wrapMode_Injected, addr 0x68020d0, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::WrapMode get_wrapMode_Injected(::System::IntPtr _unity_self);

  /// @brief Method set_events, addr 0x6802d14, size 0x164, virtual false, abstract: false, final false
  inline void set_events(::ArrayW<::UnityEngine::AnimationEvent*, ::Array<::UnityEngine::AnimationEvent*>*> value);

  /// @brief Method set_frameRate, addr 0x6801bb0, size 0x90, virtual false, abstract: false, final false
  inline void set_frameRate(float_t value);

  /// @brief Method set_frameRate_Injected, addr 0x6801c40, size 0x4c, virtual false, abstract: false, final false
  static inline void set_frameRate_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_legacy, addr 0x6802464, size 0x90, virtual false, abstract: false, final false
  inline void set_legacy(bool value);

  /// @brief Method set_legacy_Injected, addr 0x68024f4, size 0x44, virtual false, abstract: false, final false
  static inline void set_legacy_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_localBounds, addr 0x68022d4, size 0x90, virtual false, abstract: false, final false
  inline void set_localBounds(::UnityEngine::Bounds value);

  /// @brief Method set_localBounds_Injected, addr 0x6802364, size 0x44, virtual false, abstract: false, final false
  static inline void set_localBounds_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bounds> value);

  /// @brief Method set_wrapMode, addr 0x680210c, size 0x90, virtual false, abstract: false, final false
  inline void set_wrapMode(::UnityEngine::WrapMode value);

  /// @brief Method set_wrapMode_Injected, addr 0x680219c, size 0x44, virtual false, abstract: false, final false
  static inline void set_wrapMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::WrapMode value);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19955 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AnimationClip, 0x20>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::AnimationClip);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AnimationClip*, "UnityEngine", "AnimationClip");
