#pragma once
// IWYU pragma private; include "UnityEngine\AnimationClip.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Motion_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
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
MARK_REF_T(::UnityEngine::AnimationClip*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AnimationClip*, "UnityEngine", "AnimationClip");
// Dependencies UnityEngine.Motion
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AnimationClip
class CORDL_TYPE AnimationClip : public ::UnityEngine::Motion {
public:
  // Declarations
  __declspec(property(get = get_empty)) bool empty;

  __declspec(property(get = get_events, put = set_events)) ::ArrayW<::UnityEngine::AnimationEvent*> events;

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

  /// @brief Method AddEvent, addr 0x6a3af48, size 0x100, virtual false, abstract: false, final false
  inline void AddEvent(::UnityEngine::AnimationEvent* evt);

  /// @brief Method AddEventInternal, addr 0x6a3b048, size 0x90, virtual false, abstract: false, final false
  inline void AddEventInternal(::System::Object* evt);

  /// @brief Method AddEventInternal_Injected, addr 0x6a3b0d8, size 0x44, virtual false, abstract: false, final false
  static inline void AddEventInternal_Injected(::System::IntPtr _unity_self, ::System::Object* evt);

  /// @brief Method ClearCurves, addr 0x6a3a500, size 0x80, virtual false, abstract: false, final false
  inline void ClearCurves();

  /// @brief Method ClearCurves_Injected, addr 0x6a3a580, size 0x3c, virtual false, abstract: false, final false
  static inline void ClearCurves_Injected(::System::IntPtr _unity_self);

  /// @brief Method EnsureQuaternionContinuity, addr 0x6a3a444, size 0x80, virtual false, abstract: false, final false
  inline void EnsureQuaternionContinuity();

  /// @brief Method EnsureQuaternionContinuity_Injected, addr 0x6a3a4c4, size 0x3c, virtual false, abstract: false, final false
  static inline void EnsureQuaternionContinuity_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetEventsInternal, addr 0x6a3b168, size 0x98, virtual false, abstract: false, final false
  inline void GetEventsInternal(::by_ref<::System::IntPtr> values, ::by_ref<int32_t> size);

  /// @brief Method GetEventsInternal_Injected, addr 0x6a3b450, size 0x54, virtual false, abstract: false, final false
  static inline void GetEventsInternal_Injected(::System::IntPtr _unity_self, ::by_ref<::System::IntPtr> values, ::by_ref<int32_t> size);

  /// @brief Method Internal_CreateAnimationClip, addr 0x6a39b28, size 0x3c, virtual false, abstract: false, final false
  static inline void Internal_CreateAnimationClip(::UnityEngine::AnimationClip* self);

  static inline ::UnityEngine::AnimationClip* New_ctor();

  /// @brief Method SampleAnimation, addr 0x6a39c20, size 0x128, virtual false, abstract: false, final false
  static inline void SampleAnimation(::UnityEngine::GameObject* go, ::UnityEngine::AnimationClip* clip, float_t inTime, ::UnityEngine::WrapMode wrapMode);

  /// @brief Method SampleAnimation, addr 0x6a39b64, size 0x3c, virtual false, abstract: false, final false
  inline void SampleAnimation(::UnityEngine::GameObject* go, float_t time);

  /// @brief Method SampleAnimation_Injected, addr 0x6a39d48, size 0x64, virtual false, abstract: false, final false
  static inline void SampleAnimation_Injected(::System::IntPtr go, ::System::IntPtr clip, float_t inTime, ::UnityEngine::WrapMode wrapMode);

  /// @brief Method SetCurve, addr 0x6a3a178, size 0x260, virtual false, abstract: false, final false
  inline void SetCurve(::StringW relativePath, ::System::Type* type, ::StringW propertyName, ::UnityEngine::AnimationCurve* curve);

  /// @brief Method SetCurve_Injected, addr 0x6a3a3d8, size 0x6c, virtual false, abstract: false, final false
  static inline void SetCurve_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> relativePath, ::System::Type* type,
                                       ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> propertyName, ::System::IntPtr curve);

  /// @brief Method SetEventsInternal, addr 0x6a3b364, size 0x98, virtual false, abstract: false, final false
  inline void SetEventsInternal(void* data, int32_t length);

  /// @brief Method SetEventsInternal_Injected, addr 0x6a3b3fc, size 0x54, virtual false, abstract: false, final false
  static inline void SetEventsInternal_Injected(::System::IntPtr _unity_self, void* data, int32_t length);

  /// @brief Method .ctor, addr 0x6a39a90, size 0x40, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_empty, addr 0x6a3aae0, size 0x80, virtual false, abstract: false, final false
  inline bool get_empty();

  /// @brief Method get_empty_Injected, addr 0x6a3ab60, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_empty_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_events, addr 0x6a3b11c, size 0x4c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::AnimationEvent*> get_events();

  /// @brief Method get_frameRate, addr 0x6a39fe0, size 0x80, virtual false, abstract: false, final false
  inline float_t get_frameRate();

  /// @brief Method get_frameRate_Injected, addr 0x6a3a060, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_frameRate_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_hasGenericRootTransform, addr 0x6a3ab9c, size 0x80, virtual false, abstract: false, final false
  inline bool get_hasGenericRootTransform();

  /// @brief Method get_hasGenericRootTransform_Injected, addr 0x6a3ac1c, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_hasGenericRootTransform_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_hasMotionCurves, addr 0x6a3ad14, size 0x80, virtual false, abstract: false, final false
  inline bool get_hasMotionCurves();

  /// @brief Method get_hasMotionCurves_Injected, addr 0x6a3ad94, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_hasMotionCurves_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_hasMotionFloatCurves, addr 0x6a3ac58, size 0x80, virtual false, abstract: false, final false
  inline bool get_hasMotionFloatCurves();

  /// @brief Method get_hasMotionFloatCurves_Injected, addr 0x6a3acd8, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_hasMotionFloatCurves_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_hasRootCurves, addr 0x6a3add0, size 0x80, virtual false, abstract: false, final false
  inline bool get_hasRootCurves();

  /// @brief Method get_hasRootCurves_Injected, addr 0x6a3ae50, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_hasRootCurves_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_hasRootMotion, addr 0x6a3ae8c, size 0x80, virtual false, abstract: false, final false
  inline bool get_hasRootMotion();

  /// @brief Method get_hasRootMotion_Injected, addr 0x6a3af0c, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_hasRootMotion_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_humanMotion, addr 0x6a3aa24, size 0x80, virtual false, abstract: false, final false
  inline bool get_humanMotion();

  /// @brief Method get_humanMotion_Injected, addr 0x6a3aaa4, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_humanMotion_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_legacy, addr 0x6a3a894, size 0x80, virtual false, abstract: false, final false
  inline bool get_legacy();

  /// @brief Method get_legacy_Injected, addr 0x6a3a914, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_legacy_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_length, addr 0x6a39dac, size 0x80, virtual false, abstract: false, final false
  inline float_t get_length();

  /// @brief Method get_length_Injected, addr 0x6a39e2c, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_length_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_localBounds, addr 0x6a3a6cc, size 0xb0, virtual false, abstract: false, final false
  inline ::UnityEngine::Bounds get_localBounds();

  /// @brief Method get_localBounds_Injected, addr 0x6a3a77c, size 0x44, virtual false, abstract: false, final false
  static inline void get_localBounds_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bounds> ret);

  /// @brief Method get_startTime, addr 0x6a39e68, size 0x80, virtual false, abstract: false, final false
  inline float_t get_startTime();

  /// @brief Method get_startTime_Injected, addr 0x6a39ee8, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_startTime_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_stopTime, addr 0x6a39f24, size 0x80, virtual false, abstract: false, final false
  inline float_t get_stopTime();

  /// @brief Method get_stopTime_Injected, addr 0x6a39fa4, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_stopTime_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_wrapMode, addr 0x6a39ba0, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::WrapMode get_wrapMode();

  /// @brief Method get_wrapMode_Injected, addr 0x6a3a5bc, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::WrapMode get_wrapMode_Injected(::System::IntPtr _unity_self);

  /// @brief Method set_events, addr 0x6a3b200, size 0x164, virtual false, abstract: false, final false
  inline void set_events(::ArrayW<::UnityEngine::AnimationEvent*> value);

  /// @brief Method set_frameRate, addr 0x6a3a09c, size 0x90, virtual false, abstract: false, final false
  inline void set_frameRate(float_t value);

  /// @brief Method set_frameRate_Injected, addr 0x6a3a12c, size 0x4c, virtual false, abstract: false, final false
  static inline void set_frameRate_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_legacy, addr 0x6a3a950, size 0x90, virtual false, abstract: false, final false
  inline void set_legacy(bool value);

  /// @brief Method set_legacy_Injected, addr 0x6a3a9e0, size 0x44, virtual false, abstract: false, final false
  static inline void set_legacy_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_localBounds, addr 0x6a3a7c0, size 0x90, virtual false, abstract: false, final false
  inline void set_localBounds(::UnityEngine::Bounds value);

  /// @brief Method set_localBounds_Injected, addr 0x6a3a850, size 0x44, virtual false, abstract: false, final false
  static inline void set_localBounds_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bounds> value);

  /// @brief Method set_wrapMode, addr 0x6a3a5f8, size 0x90, virtual false, abstract: false, final false
  inline void set_wrapMode(::UnityEngine::WrapMode value);

  /// @brief Method set_wrapMode_Injected, addr 0x6a3a688, size 0x44, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20212 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::AnimationClip) == 0x20, "Size mismatch!");

} // namespace UnityEngine
