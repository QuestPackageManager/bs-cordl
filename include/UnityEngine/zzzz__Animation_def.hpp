#pragma once
// IWYU pragma private; include "UnityEngine/Animation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
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
MARK_REF_T(::UnityEngine::Animation*);
MARK_REF_T(::UnityEngine::Animation_Enumerator*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Animation*, "UnityEngine", "Animation");
DEFINE_IL2CPP_CLASS(::UnityEngine::Animation_Enumerator*, "UnityEngine", "Animation/Enumerator");
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

  /// @brief Method MoveNext, addr 0x6a3349c, size 0x34, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::UnityEngine::Animation_Enumerator* New_ctor(::UnityEngine::Animation* outer);

  /// @brief Method Reset, addr 0x6a334d0, size 0xc, virtual true, abstract: false, final true
  inline void Reset();

  constexpr int32_t const& __cordl_internal_get_m_CurrentIndex() const;

  constexpr int32_t& __cordl_internal_get_m_CurrentIndex();

  constexpr ::UnityW<::UnityEngine::Animation> const& __cordl_internal_get_m_Outer() const;

  constexpr ::UnityW<::UnityEngine::Animation>& __cordl_internal_get_m_Outer();

  constexpr void __cordl_internal_set_m_CurrentIndex(int32_t value);

  constexpr void __cordl_internal_set_m_Outer(::UnityW<::UnityEngine::Animation> value);

  /// @brief Method .ctor, addr 0x6a3292c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Animation* outer);

  /// @brief Method get_Current, addr 0x6a33480, size 0x1c, virtual true, abstract: false, final true
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20173 };

  /// @brief Field m_Outer, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Animation> ___m_Outer;

  /// @brief Field m_CurrentIndex, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_CurrentIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Animation_Enumerator, ___m_Outer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Animation_Enumerator, ___m_CurrentIndex) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Animation_Enumerator) == 0x20, "Size mismatch!");

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

  /// @brief Method AddClip, addr 0x6a321dc, size 0x10, virtual false, abstract: false, final false
  inline void AddClip(::UnityEngine::AnimationClip* clip, ::StringW newName);

  /// @brief Method AddClip, addr 0x6a321ec, size 0x8, virtual false, abstract: false, final false
  inline void AddClip(::UnityEngine::AnimationClip* clip, ::StringW newName, int32_t firstFrame, int32_t lastFrame);

  /// @brief Method AddClip, addr 0x6a321f4, size 0x1fc, virtual false, abstract: false, final false
  inline void AddClip(::UnityEngine::AnimationClip* clip, ::StringW newName, int32_t firstFrame, int32_t lastFrame, bool addLoopFrame);

  /// @brief Method AddClip_Injected, addr 0x6a323f0, size 0x74, virtual false, abstract: false, final false
  static inline void AddClip_Injected(::System::IntPtr _unity_self, ::System::IntPtr clip, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> newName, int32_t firstFrame, int32_t lastFrame,
                                      bool addLoopFrame);

  /// @brief Method Blend, addr 0x6a31bb4, size 0x10, virtual false, abstract: false, final false
  inline void Blend(::StringW animation);

  /// @brief Method Blend, addr 0x6a31bc4, size 0xc, virtual false, abstract: false, final false
  inline void Blend(::StringW animation, float_t targetWeight);

  /// @brief Method Blend, addr 0x6a31bd0, size 0x184, virtual false, abstract: false, final false
  inline void Blend(::StringW animation, float_t targetWeight, float_t fadeLength);

  /// @brief Method Blend_Injected, addr 0x6a31d54, size 0x5c, virtual false, abstract: false, final false
  static inline void Blend_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> animation, float_t targetWeight, float_t fadeLength);

  /// @brief Method CrossFade, addr 0x6a319b4, size 0x10, virtual false, abstract: false, final false
  inline void CrossFade(::StringW animation);

  /// @brief Method CrossFade, addr 0x6a319c4, size 0x8, virtual false, abstract: false, final false
  inline void CrossFade(::StringW animation, float_t fadeLength);

  /// @brief Method CrossFade, addr 0x6a319cc, size 0x184, virtual false, abstract: false, final false
  inline void CrossFade(::StringW animation, float_t fadeLength, ::UnityEngine::PlayMode mode);

  /// @brief Method CrossFadeQueued, addr 0x6a31db0, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimationState* CrossFadeQueued(::StringW animation);

  /// @brief Method CrossFadeQueued, addr 0x6a31dc4, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimationState* CrossFadeQueued(::StringW animation, float_t fadeLength);

  /// @brief Method CrossFadeQueued, addr 0x6a31dd0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimationState* CrossFadeQueued(::StringW animation, float_t fadeLength, ::UnityEngine::QueueMode queue);

  /// @brief Method CrossFadeQueued, addr 0x6a31dd8, size 0x19c, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimationState* CrossFadeQueued(::StringW animation, float_t fadeLength, ::UnityEngine::QueueMode queue, ::UnityEngine::PlayMode mode);

  /// @brief Method CrossFadeQueued_Injected, addr 0x6a31f74, size 0x6c, virtual false, abstract: false, final false
  static inline ::UnityEngine::AnimationState* CrossFadeQueued_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> animation, float_t fadeLength,
                                                                        ::UnityEngine::QueueMode queue, ::UnityEngine::PlayMode mode);

  /// @brief Method CrossFade_Injected, addr 0x6a31b50, size 0x64, virtual false, abstract: false, final false
  static inline void CrossFade_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> animation, float_t fadeLength, ::UnityEngine::PlayMode mode);

  /// @brief Method GetClip, addr 0x6a32b10, size 0x28, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::AnimationClip> GetClip(::StringW name);

  /// @brief Method GetClipCount, addr 0x6a3273c, size 0x80, virtual false, abstract: false, final false
  inline int32_t GetClipCount();

  /// @brief Method GetClipCount_Injected, addr 0x6a327bc, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetClipCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetEnumerator, addr 0x6a328d4, size 0x58, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* GetEnumerator();

  /// @brief Method GetState, addr 0x6a31584, size 0x174, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimationState* GetState(::StringW name);

  /// @brief Method GetStateAtIndex, addr 0x6a32980, size 0x90, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimationState* GetStateAtIndex(int32_t index);

  /// @brief Method GetStateAtIndex_Injected, addr 0x6a32a10, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::AnimationState* GetStateAtIndex_Injected(::System::IntPtr _unity_self, int32_t index);

  /// @brief Method GetStateCount, addr 0x6a32a54, size 0x80, virtual false, abstract: false, final false
  inline int32_t GetStateCount();

  /// @brief Method GetStateCount_Injected, addr 0x6a32ad4, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetStateCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetState_Injected, addr 0x6a3293c, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::AnimationState* GetState_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name);

  /// @brief Method IsPlaying, addr 0x6a313c4, size 0x178, virtual false, abstract: false, final false
  inline bool IsPlaying(::StringW name);

  /// @brief Method IsPlaying_Injected, addr 0x6a3153c, size 0x44, virtual false, abstract: false, final false
  static inline bool IsPlaying_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name);

  static inline ::UnityEngine::Animation* New_ctor();

  /// @brief Method Play, addr 0x6a316f8, size 0x8, virtual false, abstract: false, final false
  inline bool Play();

  /// @brief Method Play, addr 0x6a317d8, size 0x8, virtual false, abstract: false, final false
  inline bool Play(::StringW animation);

  /// @brief Method Play, addr 0x6a327fc, size 0x4, virtual false, abstract: false, final false
  inline bool Play(::StringW animation, ::UnityEngine::AnimationPlayMode mode);

  /// @brief Method Play, addr 0x6a317e0, size 0x180, virtual false, abstract: false, final false
  inline bool Play(::StringW animation, ::UnityEngine::PlayMode mode);

  /// @brief Method Play, addr 0x6a327f8, size 0x4, virtual false, abstract: false, final false
  inline bool Play(::UnityEngine::AnimationPlayMode mode);

  /// @brief Method Play, addr 0x6a31700, size 0x4, virtual false, abstract: false, final false
  inline bool Play(::UnityEngine::PlayMode mode);

  /// @brief Method PlayDefaultAnimation, addr 0x6a31704, size 0x90, virtual false, abstract: false, final false
  inline bool PlayDefaultAnimation(::UnityEngine::PlayMode mode);

  /// @brief Method PlayDefaultAnimation_Injected, addr 0x6a31794, size 0x44, virtual false, abstract: false, final false
  static inline bool PlayDefaultAnimation_Injected(::System::IntPtr _unity_self, ::UnityEngine::PlayMode mode);

  /// @brief Method PlayQueued, addr 0x6a31fe0, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimationState* PlayQueued(::StringW animation);

  /// @brief Method PlayQueued, addr 0x6a31fec, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimationState* PlayQueued(::StringW animation, ::UnityEngine::QueueMode queue);

  /// @brief Method PlayQueued, addr 0x6a31ff4, size 0x18c, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimationState* PlayQueued(::StringW animation, ::UnityEngine::QueueMode queue, ::UnityEngine::PlayMode mode);

  /// @brief Method PlayQueued_Injected, addr 0x6a32180, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityEngine::AnimationState* PlayQueued_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> animation, ::UnityEngine::QueueMode queue,
                                                                   ::UnityEngine::PlayMode mode);

  /// @brief Method Play_Injected, addr 0x6a31960, size 0x54, virtual false, abstract: false, final false
  static inline bool Play_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> animation, ::UnityEngine::PlayMode mode);

  /// @brief Method RemoveClip, addr 0x6a32464, size 0xe4, virtual false, abstract: false, final false
  inline void RemoveClip(::UnityEngine::AnimationClip* clip);

  /// @brief Method RemoveClip, addr 0x6a3258c, size 0x4, virtual false, abstract: false, final false
  inline void RemoveClip(::StringW clipName);

  /// @brief Method RemoveClipNamed, addr 0x6a32590, size 0x168, virtual false, abstract: false, final false
  inline void RemoveClipNamed(::StringW clipName);

  /// @brief Method RemoveClipNamed_Injected, addr 0x6a326f8, size 0x44, virtual false, abstract: false, final false
  static inline void RemoveClipNamed_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> clipName);

  /// @brief Method RemoveClip_Injected, addr 0x6a32548, size 0x44, virtual false, abstract: false, final false
  static inline void RemoveClip_Injected(::System::IntPtr _unity_self, ::System::IntPtr clip);

  /// @brief Method Rewind, addr 0x6a30fe0, size 0x80, virtual false, abstract: false, final false
  inline void Rewind();

  /// @brief Method Rewind, addr 0x6a3109c, size 0x4, virtual false, abstract: false, final false
  inline void Rewind(::StringW name);

  /// @brief Method RewindNamed, addr 0x6a310a0, size 0x168, virtual false, abstract: false, final false
  inline void RewindNamed(::StringW name);

  /// @brief Method RewindNamed_Injected, addr 0x6a31208, size 0x44, virtual false, abstract: false, final false
  static inline void RewindNamed_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name);

  /// @brief Method Rewind_Injected, addr 0x6a31060, size 0x3c, virtual false, abstract: false, final false
  static inline void Rewind_Injected(::System::IntPtr _unity_self);

  /// @brief Method Sample, addr 0x6a3124c, size 0x80, virtual false, abstract: false, final false
  inline void Sample();

  /// @brief Method Sample_Injected, addr 0x6a312cc, size 0x3c, virtual false, abstract: false, final false
  static inline void Sample_Injected(::System::IntPtr _unity_self);

  /// @brief Method Stop, addr 0x6a30d74, size 0x80, virtual false, abstract: false, final false
  inline void Stop();

  /// @brief Method Stop, addr 0x6a30e30, size 0x4, virtual false, abstract: false, final false
  inline void Stop(::StringW name);

  /// @brief Method StopNamed, addr 0x6a30e34, size 0x168, virtual false, abstract: false, final false
  inline void StopNamed(::StringW name);

  /// @brief Method StopNamed_Injected, addr 0x6a30f9c, size 0x44, virtual false, abstract: false, final false
  static inline void StopNamed_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name);

  /// @brief Method Stop_Injected, addr 0x6a30df4, size 0x3c, virtual false, abstract: false, final false
  static inline void Stop_Injected(::System::IntPtr _unity_self);

  /// @brief Method SyncLayer, addr 0x6a32800, size 0x90, virtual false, abstract: false, final false
  inline void SyncLayer(int32_t layer);

  /// @brief Method SyncLayer_Injected, addr 0x6a32890, size 0x44, virtual false, abstract: false, final false
  static inline void SyncLayer_Injected(::System::IntPtr _unity_self, int32_t layer);

  /// @brief Method .ctor, addr 0x6a3347c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Item, addr 0x6a31580, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimationState* get_Item(::StringW name);

  /// @brief Method get_animateOnlyIfVisible, addr 0x6a32f94, size 0x80, virtual false, abstract: false, final false
  inline bool get_animateOnlyIfVisible();

  /// @brief Method get_animateOnlyIfVisible_Injected, addr 0x6a33014, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_animateOnlyIfVisible_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_animatePhysics, addr 0x6a32c74, size 0x80, virtual false, abstract: false, final false
  inline bool get_animatePhysics();

  /// @brief Method get_animatePhysics_Injected, addr 0x6a32cf4, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_animatePhysics_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_clip, addr 0x6a307c4, size 0x150, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::AnimationClip> get_clip();

  /// @brief Method get_clip_Injected, addr 0x6a30914, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_clip_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_cullingType, addr 0x6a33124, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimationCullingType get_cullingType();

  /// @brief Method get_cullingType_Injected, addr 0x6a331a4, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::AnimationCullingType get_cullingType_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_isPlaying, addr 0x6a31308, size 0x80, virtual false, abstract: false, final false
  inline bool get_isPlaying();

  /// @brief Method get_isPlaying_Injected, addr 0x6a31388, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_isPlaying_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_localBounds, addr 0x6a332b4, size 0xb0, virtual false, abstract: false, final false
  inline ::UnityEngine::Bounds get_localBounds();

  /// @brief Method get_localBounds_Injected, addr 0x6a33364, size 0x44, virtual false, abstract: false, final false
  static inline void get_localBounds_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bounds> ret);

  /// @brief Method get_playAutomatically, addr 0x6a30a54, size 0x80, virtual false, abstract: false, final false
  inline bool get_playAutomatically();

  /// @brief Method get_playAutomatically_Injected, addr 0x6a30ad4, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_playAutomatically_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_updateMode, addr 0x6a32e04, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimationUpdateMode get_updateMode();

  /// @brief Method get_updateMode_Injected, addr 0x6a32e84, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::AnimationUpdateMode get_updateMode_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_wrapMode, addr 0x6a30be4, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::WrapMode get_wrapMode();

  /// @brief Method get_wrapMode_Injected, addr 0x6a30c64, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::WrapMode get_wrapMode_Injected(::System::IntPtr _unity_self);

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Method set_animateOnlyIfVisible, addr 0x6a33050, size 0x90, virtual false, abstract: false, final false
  inline void set_animateOnlyIfVisible(bool value);

  /// @brief Method set_animateOnlyIfVisible_Injected, addr 0x6a330e0, size 0x44, virtual false, abstract: false, final false
  static inline void set_animateOnlyIfVisible_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_animatePhysics, addr 0x6a32d30, size 0x90, virtual false, abstract: false, final false
  inline void set_animatePhysics(bool value);

  /// @brief Method set_animatePhysics_Injected, addr 0x6a32dc0, size 0x44, virtual false, abstract: false, final false
  static inline void set_animatePhysics_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_clip, addr 0x6a30950, size 0xc0, virtual false, abstract: false, final false
  inline void set_clip(::UnityEngine::AnimationClip* value);

  /// @brief Method set_clip_Injected, addr 0x6a30a10, size 0x44, virtual false, abstract: false, final false
  static inline void set_clip_Injected(::System::IntPtr _unity_self, ::System::IntPtr value);

  /// @brief Method set_cullingType, addr 0x6a331e0, size 0x90, virtual false, abstract: false, final false
  inline void set_cullingType(::UnityEngine::AnimationCullingType value);

  /// @brief Method set_cullingType_Injected, addr 0x6a33270, size 0x44, virtual false, abstract: false, final false
  static inline void set_cullingType_Injected(::System::IntPtr _unity_self, ::UnityEngine::AnimationCullingType value);

  /// @brief Method set_localBounds, addr 0x6a333a8, size 0x90, virtual false, abstract: false, final false
  inline void set_localBounds(::UnityEngine::Bounds value);

  /// @brief Method set_localBounds_Injected, addr 0x6a33438, size 0x44, virtual false, abstract: false, final false
  static inline void set_localBounds_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bounds> value);

  /// @brief Method set_playAutomatically, addr 0x6a30b10, size 0x90, virtual false, abstract: false, final false
  inline void set_playAutomatically(bool value);

  /// @brief Method set_playAutomatically_Injected, addr 0x6a30ba0, size 0x44, virtual false, abstract: false, final false
  static inline void set_playAutomatically_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_updateMode, addr 0x6a32ec0, size 0x90, virtual false, abstract: false, final false
  inline void set_updateMode(::UnityEngine::AnimationUpdateMode value);

  /// @brief Method set_updateMode_Injected, addr 0x6a32f50, size 0x44, virtual false, abstract: false, final false
  static inline void set_updateMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::AnimationUpdateMode value);

  /// @brief Method set_wrapMode, addr 0x6a30ca0, size 0x90, virtual false, abstract: false, final false
  inline void set_wrapMode(::UnityEngine::WrapMode value);

  /// @brief Method set_wrapMode_Injected, addr 0x6a30d30, size 0x44, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20174 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Animation) == 0x18, "Size mismatch!");

} // namespace UnityEngine
