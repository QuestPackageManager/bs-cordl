#pragma once
// IWYU pragma private; include "UnityEngine/Animation.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Animation)
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
class AnimationClip;
}
namespace UnityEngine {
struct AnimationCullingType;
}
namespace UnityEngine {
struct AnimationPlayMode;
}
namespace UnityEngine {
class AnimationState;
}
namespace UnityEngine {
struct AnimationUpdateMode;
}
namespace UnityEngine {
class Animation_Enumerator;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct PlayMode;
}
namespace UnityEngine {
struct QueueMode;
}
namespace UnityEngine {
struct WrapMode;
}
// Forward declare root types
namespace UnityEngine {
class Animation;
}
namespace UnityEngine {
class Animation_Enumerator;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Animation);
MARK_REF_PTR_T(::UnityEngine::Animation_Enumerator);
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Animation/Enumerator
class CORDL_TYPE Animation_Enumerator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Current)) ::System::Object* Current;

  /// @brief Field m_CurrentIndex, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CurrentIndex, put = __cordl_internal_set_m_CurrentIndex)) int32_t m_CurrentIndex;

  /// @brief Field m_Outer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Outer, put = __cordl_internal_set_m_Outer)) ::UnityW<::UnityEngine::Animation> m_Outer;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Method MoveNext, addr 0x6868340, size 0x34, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::UnityEngine::Animation_Enumerator* New_ctor(::UnityEngine::Animation* outer);

  /// @brief Method Reset, addr 0x6868374, size 0xc, virtual true, abstract: false, final true
  inline void Reset();

  constexpr int32_t const& __cordl_internal_get_m_CurrentIndex() const;

  constexpr int32_t& __cordl_internal_get_m_CurrentIndex();

  constexpr ::UnityW<::UnityEngine::Animation> const& __cordl_internal_get_m_Outer() const;

  constexpr ::UnityW<::UnityEngine::Animation>& __cordl_internal_get_m_Outer();

  constexpr void __cordl_internal_set_m_CurrentIndex(int32_t value);

  constexpr void __cordl_internal_set_m_Outer(::UnityW<::UnityEngine::Animation> value);

  /// @brief Method .ctor, addr 0x68677d0, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Animation* outer);

  /// @brief Method get_Current, addr 0x6868324, size 0x1c, virtual true, abstract: false, final true
  inline ::System::Object* get_Current();

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Animation_Enumerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Animation_Enumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Animation_Enumerator(Animation_Enumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Animation_Enumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Animation_Enumerator(Animation_Enumerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19976 };

  /// @brief Field m_Outer, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Animation> ___m_Outer;

  /// @brief Field m_CurrentIndex, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_CurrentIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Animation_Enumerator, ___m_Outer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Animation_Enumerator, ___m_CurrentIndex) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Animation_Enumerator, 0x20>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies UnityEngine.Behaviour
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Animation
class CORDL_TYPE Animation : public ::UnityEngine::Behaviour {
public:
  // Declarations
  using Enumerator = ::UnityEngine::Animation_Enumerator;

  __declspec(property(get = get_Item)) ::UnityEngine::AnimationState* Item[];

  __declspec(property(get = get_animateOnlyIfVisible, put = set_animateOnlyIfVisible)) bool animateOnlyIfVisible;

  __declspec(property(get = get_animatePhysics, put = set_animatePhysics)) bool animatePhysics;

  __declspec(property(get = get_clip, put = set_clip)) ::UnityW<::UnityEngine::AnimationClip> clip;

  __declspec(property(get = get_cullingType, put = set_cullingType)) ::UnityEngine::AnimationCullingType cullingType;

  __declspec(property(get = get_isPlaying)) bool isPlaying;

  __declspec(property(get = get_localBounds, put = set_localBounds)) ::UnityEngine::Bounds localBounds;

  __declspec(property(get = get_playAutomatically, put = set_playAutomatically)) bool playAutomatically;

  __declspec(property(get = get_updateMode, put = set_updateMode)) ::UnityEngine::AnimationUpdateMode updateMode;

  __declspec(property(get = get_wrapMode, put = set_wrapMode)) ::UnityEngine::WrapMode wrapMode;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method AddClip, addr 0x6867080, size 0x10, virtual false, abstract: false, final false
  inline void AddClip(::UnityEngine::AnimationClip* clip, ::StringW newName);

  /// @brief Method AddClip, addr 0x6867090, size 0x8, virtual false, abstract: false, final false
  inline void AddClip(::UnityEngine::AnimationClip* clip, ::StringW newName, int32_t firstFrame, int32_t lastFrame);

  /// @brief Method AddClip, addr 0x6867098, size 0x1fc, virtual false, abstract: false, final false
  inline void AddClip(::UnityEngine::AnimationClip* clip, ::StringW newName, int32_t firstFrame, int32_t lastFrame, bool addLoopFrame);

  /// @brief Method AddClip_Injected, addr 0x6867294, size 0x74, virtual false, abstract: false, final false
  static inline void AddClip_Injected(::System::IntPtr _unity_self, ::System::IntPtr clip, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> newName, int32_t firstFrame, int32_t lastFrame,
                                      bool addLoopFrame);

  /// @brief Method Blend, addr 0x6866a58, size 0x10, virtual false, abstract: false, final false
  inline void Blend(::StringW animation);

  /// @brief Method Blend, addr 0x6866a68, size 0xc, virtual false, abstract: false, final false
  inline void Blend(::StringW animation, float_t targetWeight);

  /// @brief Method Blend, addr 0x6866a74, size 0x184, virtual false, abstract: false, final false
  inline void Blend(::StringW animation, float_t targetWeight, float_t fadeLength);

  /// @brief Method Blend_Injected, addr 0x6866bf8, size 0x5c, virtual false, abstract: false, final false
  static inline void Blend_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> animation, float_t targetWeight, float_t fadeLength);

  /// @brief Method CrossFade, addr 0x6866858, size 0x10, virtual false, abstract: false, final false
  inline void CrossFade(::StringW animation);

  /// @brief Method CrossFade, addr 0x6866868, size 0x8, virtual false, abstract: false, final false
  inline void CrossFade(::StringW animation, float_t fadeLength);

  /// @brief Method CrossFade, addr 0x6866870, size 0x184, virtual false, abstract: false, final false
  inline void CrossFade(::StringW animation, float_t fadeLength, ::UnityEngine::PlayMode mode);

  /// @brief Method CrossFadeQueued, addr 0x6866c54, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimationState* CrossFadeQueued(::StringW animation);

  /// @brief Method CrossFadeQueued, addr 0x6866c68, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimationState* CrossFadeQueued(::StringW animation, float_t fadeLength);

  /// @brief Method CrossFadeQueued, addr 0x6866c74, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimationState* CrossFadeQueued(::StringW animation, float_t fadeLength, ::UnityEngine::QueueMode queue);

  /// @brief Method CrossFadeQueued, addr 0x6866c7c, size 0x19c, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimationState* CrossFadeQueued(::StringW animation, float_t fadeLength, ::UnityEngine::QueueMode queue, ::UnityEngine::PlayMode mode);

  /// @brief Method CrossFadeQueued_Injected, addr 0x6866e18, size 0x6c, virtual false, abstract: false, final false
  static inline ::UnityEngine::AnimationState* CrossFadeQueued_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> animation, float_t fadeLength,
                                                                        ::UnityEngine::QueueMode queue, ::UnityEngine::PlayMode mode);

  /// @brief Method CrossFade_Injected, addr 0x68669f4, size 0x64, virtual false, abstract: false, final false
  static inline void CrossFade_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> animation, float_t fadeLength, ::UnityEngine::PlayMode mode);

  /// @brief Method GetClip, addr 0x68679b4, size 0x28, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::AnimationClip> GetClip(::StringW name);

  /// @brief Method GetClipCount, addr 0x68675e0, size 0x80, virtual false, abstract: false, final false
  inline int32_t GetClipCount();

  /// @brief Method GetClipCount_Injected, addr 0x6867660, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetClipCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetEnumerator, addr 0x6867778, size 0x58, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* GetEnumerator();

  /// @brief Method GetState, addr 0x6866428, size 0x174, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimationState* GetState(::StringW name);

  /// @brief Method GetStateAtIndex, addr 0x6867824, size 0x90, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimationState* GetStateAtIndex(int32_t index);

  /// @brief Method GetStateAtIndex_Injected, addr 0x68678b4, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::AnimationState* GetStateAtIndex_Injected(::System::IntPtr _unity_self, int32_t index);

  /// @brief Method GetStateCount, addr 0x68678f8, size 0x80, virtual false, abstract: false, final false
  inline int32_t GetStateCount();

  /// @brief Method GetStateCount_Injected, addr 0x6867978, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetStateCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetState_Injected, addr 0x68677e0, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::AnimationState* GetState_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> name);

  /// @brief Method IsPlaying, addr 0x6866268, size 0x178, virtual false, abstract: false, final false
  inline bool IsPlaying(::StringW name);

  /// @brief Method IsPlaying_Injected, addr 0x68663e0, size 0x44, virtual false, abstract: false, final false
  static inline bool IsPlaying_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> name);

  static inline ::UnityEngine::Animation* New_ctor();

  /// @brief Method Play, addr 0x686659c, size 0x8, virtual false, abstract: false, final false
  inline bool Play();

  /// @brief Method Play, addr 0x686667c, size 0x8, virtual false, abstract: false, final false
  inline bool Play(::StringW animation);

  /// @brief Method Play, addr 0x68676a0, size 0x4, virtual false, abstract: false, final false
  inline bool Play(::StringW animation, ::UnityEngine::AnimationPlayMode mode);

  /// @brief Method Play, addr 0x6866684, size 0x180, virtual false, abstract: false, final false
  inline bool Play(::StringW animation, ::UnityEngine::PlayMode mode);

  /// @brief Method Play, addr 0x686769c, size 0x4, virtual false, abstract: false, final false
  inline bool Play(::UnityEngine::AnimationPlayMode mode);

  /// @brief Method Play, addr 0x68665a4, size 0x4, virtual false, abstract: false, final false
  inline bool Play(::UnityEngine::PlayMode mode);

  /// @brief Method PlayDefaultAnimation, addr 0x68665a8, size 0x90, virtual false, abstract: false, final false
  inline bool PlayDefaultAnimation(::UnityEngine::PlayMode mode);

  /// @brief Method PlayDefaultAnimation_Injected, addr 0x6866638, size 0x44, virtual false, abstract: false, final false
  static inline bool PlayDefaultAnimation_Injected(::System::IntPtr _unity_self, ::UnityEngine::PlayMode mode);

  /// @brief Method PlayQueued, addr 0x6866e84, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimationState* PlayQueued(::StringW animation);

  /// @brief Method PlayQueued, addr 0x6866e90, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimationState* PlayQueued(::StringW animation, ::UnityEngine::QueueMode queue);

  /// @brief Method PlayQueued, addr 0x6866e98, size 0x18c, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimationState* PlayQueued(::StringW animation, ::UnityEngine::QueueMode queue, ::UnityEngine::PlayMode mode);

  /// @brief Method PlayQueued_Injected, addr 0x6867024, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityEngine::AnimationState* PlayQueued_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> animation, ::UnityEngine::QueueMode queue,
                                                                   ::UnityEngine::PlayMode mode);

  /// @brief Method Play_Injected, addr 0x6866804, size 0x54, virtual false, abstract: false, final false
  static inline bool Play_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> animation, ::UnityEngine::PlayMode mode);

  /// @brief Method RemoveClip, addr 0x6867308, size 0xe4, virtual false, abstract: false, final false
  inline void RemoveClip(::UnityEngine::AnimationClip* clip);

  /// @brief Method RemoveClip, addr 0x6867430, size 0x4, virtual false, abstract: false, final false
  inline void RemoveClip(::StringW clipName);

  /// @brief Method RemoveClipNamed, addr 0x6867434, size 0x168, virtual false, abstract: false, final false
  inline void RemoveClipNamed(::StringW clipName);

  /// @brief Method RemoveClipNamed_Injected, addr 0x686759c, size 0x44, virtual false, abstract: false, final false
  static inline void RemoveClipNamed_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> clipName);

  /// @brief Method RemoveClip_Injected, addr 0x68673ec, size 0x44, virtual false, abstract: false, final false
  static inline void RemoveClip_Injected(::System::IntPtr _unity_self, ::System::IntPtr clip);

  /// @brief Method Rewind, addr 0x6865e84, size 0x80, virtual false, abstract: false, final false
  inline void Rewind();

  /// @brief Method Rewind, addr 0x6865f40, size 0x4, virtual false, abstract: false, final false
  inline void Rewind(::StringW name);

  /// @brief Method RewindNamed, addr 0x6865f44, size 0x168, virtual false, abstract: false, final false
  inline void RewindNamed(::StringW name);

  /// @brief Method RewindNamed_Injected, addr 0x68660ac, size 0x44, virtual false, abstract: false, final false
  static inline void RewindNamed_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> name);

  /// @brief Method Rewind_Injected, addr 0x6865f04, size 0x3c, virtual false, abstract: false, final false
  static inline void Rewind_Injected(::System::IntPtr _unity_self);

  /// @brief Method Sample, addr 0x68660f0, size 0x80, virtual false, abstract: false, final false
  inline void Sample();

  /// @brief Method Sample_Injected, addr 0x6866170, size 0x3c, virtual false, abstract: false, final false
  static inline void Sample_Injected(::System::IntPtr _unity_self);

  /// @brief Method Stop, addr 0x6865c18, size 0x80, virtual false, abstract: false, final false
  inline void Stop();

  /// @brief Method Stop, addr 0x6865cd4, size 0x4, virtual false, abstract: false, final false
  inline void Stop(::StringW name);

  /// @brief Method StopNamed, addr 0x6865cd8, size 0x168, virtual false, abstract: false, final false
  inline void StopNamed(::StringW name);

  /// @brief Method StopNamed_Injected, addr 0x6865e40, size 0x44, virtual false, abstract: false, final false
  static inline void StopNamed_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> name);

  /// @brief Method Stop_Injected, addr 0x6865c98, size 0x3c, virtual false, abstract: false, final false
  static inline void Stop_Injected(::System::IntPtr _unity_self);

  /// @brief Method SyncLayer, addr 0x68676a4, size 0x90, virtual false, abstract: false, final false
  inline void SyncLayer(int32_t layer);

  /// @brief Method SyncLayer_Injected, addr 0x6867734, size 0x44, virtual false, abstract: false, final false
  static inline void SyncLayer_Injected(::System::IntPtr _unity_self, int32_t layer);

  /// @brief Method .ctor, addr 0x6868320, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Item, addr 0x6866424, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimationState* get_Item(::StringW name);

  /// @brief Method get_animateOnlyIfVisible, addr 0x6867e38, size 0x80, virtual false, abstract: false, final false
  inline bool get_animateOnlyIfVisible();

  /// @brief Method get_animateOnlyIfVisible_Injected, addr 0x6867eb8, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_animateOnlyIfVisible_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_animatePhysics, addr 0x6867b18, size 0x80, virtual false, abstract: false, final false
  inline bool get_animatePhysics();

  /// @brief Method get_animatePhysics_Injected, addr 0x6867b98, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_animatePhysics_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_clip, addr 0x6865668, size 0x150, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::AnimationClip> get_clip();

  /// @brief Method get_clip_Injected, addr 0x68657b8, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_clip_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_cullingType, addr 0x6867fc8, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimationCullingType get_cullingType();

  /// @brief Method get_cullingType_Injected, addr 0x6868048, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::AnimationCullingType get_cullingType_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_isPlaying, addr 0x68661ac, size 0x80, virtual false, abstract: false, final false
  inline bool get_isPlaying();

  /// @brief Method get_isPlaying_Injected, addr 0x686622c, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_isPlaying_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_localBounds, addr 0x6868158, size 0xb0, virtual false, abstract: false, final false
  inline ::UnityEngine::Bounds get_localBounds();

  /// @brief Method get_localBounds_Injected, addr 0x6868208, size 0x44, virtual false, abstract: false, final false
  static inline void get_localBounds_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bounds> ret);

  /// @brief Method get_playAutomatically, addr 0x68658f8, size 0x80, virtual false, abstract: false, final false
  inline bool get_playAutomatically();

  /// @brief Method get_playAutomatically_Injected, addr 0x6865978, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_playAutomatically_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_updateMode, addr 0x6867ca8, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimationUpdateMode get_updateMode();

  /// @brief Method get_updateMode_Injected, addr 0x6867d28, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::AnimationUpdateMode get_updateMode_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_wrapMode, addr 0x6865a88, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::WrapMode get_wrapMode();

  /// @brief Method get_wrapMode_Injected, addr 0x6865b08, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::WrapMode get_wrapMode_Injected(::System::IntPtr _unity_self);

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Method set_animateOnlyIfVisible, addr 0x6867ef4, size 0x90, virtual false, abstract: false, final false
  inline void set_animateOnlyIfVisible(bool value);

  /// @brief Method set_animateOnlyIfVisible_Injected, addr 0x6867f84, size 0x44, virtual false, abstract: false, final false
  static inline void set_animateOnlyIfVisible_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_animatePhysics, addr 0x6867bd4, size 0x90, virtual false, abstract: false, final false
  inline void set_animatePhysics(bool value);

  /// @brief Method set_animatePhysics_Injected, addr 0x6867c64, size 0x44, virtual false, abstract: false, final false
  static inline void set_animatePhysics_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_clip, addr 0x68657f4, size 0xc0, virtual false, abstract: false, final false
  inline void set_clip(::UnityEngine::AnimationClip* value);

  /// @brief Method set_clip_Injected, addr 0x68658b4, size 0x44, virtual false, abstract: false, final false
  static inline void set_clip_Injected(::System::IntPtr _unity_self, ::System::IntPtr value);

  /// @brief Method set_cullingType, addr 0x6868084, size 0x90, virtual false, abstract: false, final false
  inline void set_cullingType(::UnityEngine::AnimationCullingType value);

  /// @brief Method set_cullingType_Injected, addr 0x6868114, size 0x44, virtual false, abstract: false, final false
  static inline void set_cullingType_Injected(::System::IntPtr _unity_self, ::UnityEngine::AnimationCullingType value);

  /// @brief Method set_localBounds, addr 0x686824c, size 0x90, virtual false, abstract: false, final false
  inline void set_localBounds(::UnityEngine::Bounds value);

  /// @brief Method set_localBounds_Injected, addr 0x68682dc, size 0x44, virtual false, abstract: false, final false
  static inline void set_localBounds_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bounds> value);

  /// @brief Method set_playAutomatically, addr 0x68659b4, size 0x90, virtual false, abstract: false, final false
  inline void set_playAutomatically(bool value);

  /// @brief Method set_playAutomatically_Injected, addr 0x6865a44, size 0x44, virtual false, abstract: false, final false
  static inline void set_playAutomatically_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_updateMode, addr 0x6867d64, size 0x90, virtual false, abstract: false, final false
  inline void set_updateMode(::UnityEngine::AnimationUpdateMode value);

  /// @brief Method set_updateMode_Injected, addr 0x6867df4, size 0x44, virtual false, abstract: false, final false
  static inline void set_updateMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::AnimationUpdateMode value);

  /// @brief Method set_wrapMode, addr 0x6865b44, size 0x90, virtual false, abstract: false, final false
  inline void set_wrapMode(::UnityEngine::WrapMode value);

  /// @brief Method set_wrapMode_Injected, addr 0x6865bd4, size 0x44, virtual false, abstract: false, final false
  static inline void set_wrapMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::WrapMode value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Animation();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Animation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Animation(Animation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Animation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Animation(Animation const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19977 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Animation, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Animation);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animation*, "UnityEngine", "Animation");
NEED_NO_BOX(::UnityEngine::Animation_Enumerator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animation_Enumerator*, "UnityEngine", "Animation/Enumerator");
