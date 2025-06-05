#pragma once
// IWYU pragma private; include "UnityEngine/Animation.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Animation)
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
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
// Dependencies System.Collections.IEnumerator, System.Object
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

  /// @brief Method MoveNext, addr 0x484d7d4, size 0x60, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::UnityEngine::Animation_Enumerator* New_ctor(::UnityEngine::Animation* outer);

  /// @brief Method Reset, addr 0x484d834, size 0xc, virtual true, abstract: false, final true
  inline void Reset();

  constexpr int32_t const& __cordl_internal_get_m_CurrentIndex() const;

  constexpr int32_t& __cordl_internal_get_m_CurrentIndex();

  constexpr ::UnityW<::UnityEngine::Animation> const& __cordl_internal_get_m_Outer() const;

  constexpr ::UnityW<::UnityEngine::Animation>& __cordl_internal_get_m_Outer();

  constexpr void __cordl_internal_set_m_CurrentIndex(int32_t value);

  constexpr void __cordl_internal_set_m_Outer(::UnityW<::UnityEngine::Animation> value);

  /// @brief Method .ctor, addr 0x484d34c, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Animation* outer);

  /// @brief Method get_Current, addr 0x484d788, size 0x4c, virtual true, abstract: false, final true
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16861 };

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
// Dependencies System.Collections.IEnumerable, UnityEngine.Behaviour
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

  __declspec(property(get = get_wrapMode, put = set_wrapMode)) ::UnityEngine::WrapMode wrapMode;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method AddClip, addr 0x484cfc0, size 0x60, virtual false, abstract: false, final false
  inline void AddClip(::UnityEngine::AnimationClip* clip, ::StringW newName);

  /// @brief Method AddClip, addr 0x484d020, size 0x70, virtual false, abstract: false, final false
  inline void AddClip(::UnityEngine::AnimationClip* clip, ::StringW newName, int32_t firstFrame, int32_t lastFrame);

  /// @brief Method AddClip, addr 0x484d090, size 0x74, virtual false, abstract: false, final false
  inline void AddClip(::UnityEngine::AnimationClip* clip, ::StringW newName, int32_t firstFrame, int32_t lastFrame, bool addLoopFrame);

  /// @brief Method Blend, addr 0x484cc34, size 0x50, virtual false, abstract: false, final false
  inline void Blend(::StringW animation);

  /// @brief Method Blend, addr 0x484cc84, size 0x5c, virtual false, abstract: false, final false
  inline void Blend(::StringW animation, float_t targetWeight);

  /// @brief Method Blend, addr 0x484cce0, size 0x5c, virtual false, abstract: false, final false
  inline void Blend(::StringW animation, float_t targetWeight, float_t fadeLength);

  /// @brief Method CrossFade, addr 0x484cb28, size 0x50, virtual false, abstract: false, final false
  inline void CrossFade(::StringW animation);

  /// @brief Method CrossFade, addr 0x484cb78, size 0x58, virtual false, abstract: false, final false
  inline void CrossFade(::StringW animation, float_t fadeLength);

  /// @brief Method CrossFade, addr 0x484cbd0, size 0x64, virtual false, abstract: false, final false
  inline void CrossFade(::StringW animation, float_t fadeLength, ::UnityEngine::PlayMode mode);

  /// @brief Method CrossFadeQueued, addr 0x484cd3c, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimationState* CrossFadeQueued(::StringW animation);

  /// @brief Method CrossFadeQueued, addr 0x484cd90, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimationState* CrossFadeQueued(::StringW animation, float_t fadeLength);

  /// @brief Method CrossFadeQueued, addr 0x484cdec, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimationState* CrossFadeQueued(::StringW animation, float_t fadeLength, ::UnityEngine::QueueMode queue);

  /// @brief Method CrossFadeQueued, addr 0x484ce54, size 0x6c, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimationState* CrossFadeQueued(::StringW animation, float_t fadeLength, ::UnityEngine::QueueMode queue, ::UnityEngine::PlayMode mode);

  /// @brief Method GetClip, addr 0x484d3fc, size 0x94, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::AnimationClip> GetClip(::StringW name);

  /// @brief Method GetClipCount, addr 0x484d1d0, size 0x3c, virtual false, abstract: false, final false
  inline int32_t GetClipCount();

  /// @brief Method GetEnumerator, addr 0x484d2e8, size 0x64, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* GetEnumerator();

  /// @brief Method GetState, addr 0x484c980, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimationState* GetState(::StringW name);

  /// @brief Method GetStateAtIndex, addr 0x484d37c, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimationState* GetStateAtIndex(int32_t index);

  /// @brief Method GetStateCount, addr 0x484d3c0, size 0x3c, virtual false, abstract: false, final false
  inline int32_t GetStateCount();

  /// @brief Method IsPlaying, addr 0x484c8f8, size 0x44, virtual false, abstract: false, final false
  inline bool IsPlaying(::StringW name);

  static inline ::UnityEngine::Animation* New_ctor();

  /// @brief Method Play, addr 0x484c9c4, size 0x40, virtual false, abstract: false, final false
  inline bool Play();

  /// @brief Method Play, addr 0x484ca8c, size 0x48, virtual false, abstract: false, final false
  inline bool Play(::StringW animation);

  /// @brief Method Play, addr 0x484d250, size 0x54, virtual false, abstract: false, final false
  inline bool Play(::StringW animation, ::UnityEngine::AnimationPlayMode mode);

  /// @brief Method Play, addr 0x484cad4, size 0x54, virtual false, abstract: false, final false
  inline bool Play(::StringW animation, ::UnityEngine::PlayMode mode);

  /// @brief Method Play, addr 0x484d20c, size 0x44, virtual false, abstract: false, final false
  inline bool Play(::UnityEngine::AnimationPlayMode mode);

  /// @brief Method Play, addr 0x484ca04, size 0x44, virtual false, abstract: false, final false
  inline bool Play(::UnityEngine::PlayMode mode);

  /// @brief Method PlayDefaultAnimation, addr 0x484ca48, size 0x44, virtual false, abstract: false, final false
  inline bool PlayDefaultAnimation(::UnityEngine::PlayMode mode);

  /// @brief Method PlayQueued, addr 0x484cec0, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimationState* PlayQueued(::StringW animation);

  /// @brief Method PlayQueued, addr 0x484cf0c, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimationState* PlayQueued(::StringW animation, ::UnityEngine::QueueMode queue);

  /// @brief Method PlayQueued, addr 0x484cf64, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimationState* PlayQueued(::StringW animation, ::UnityEngine::QueueMode queue, ::UnityEngine::PlayMode mode);

  /// @brief Method RemoveClip, addr 0x484d104, size 0x44, virtual false, abstract: false, final false
  inline void RemoveClip(::UnityEngine::AnimationClip* clip);

  /// @brief Method RemoveClip, addr 0x484d148, size 0x44, virtual false, abstract: false, final false
  inline void RemoveClip(::StringW clipName);

  /// @brief Method RemoveClipNamed, addr 0x484d18c, size 0x44, virtual false, abstract: false, final false
  inline void RemoveClipNamed(::StringW clipName);

  /// @brief Method Rewind, addr 0x484c7bc, size 0x3c, virtual false, abstract: false, final false
  inline void Rewind();

  /// @brief Method Rewind, addr 0x484c7f8, size 0x44, virtual false, abstract: false, final false
  inline void Rewind(::StringW name);

  /// @brief Method RewindNamed, addr 0x484c83c, size 0x44, virtual false, abstract: false, final false
  inline void RewindNamed(::StringW name);

  /// @brief Method Sample, addr 0x484c880, size 0x3c, virtual false, abstract: false, final false
  inline void Sample();

  /// @brief Method Stop, addr 0x484c6f8, size 0x3c, virtual false, abstract: false, final false
  inline void Stop();

  /// @brief Method Stop, addr 0x484c734, size 0x44, virtual false, abstract: false, final false
  inline void Stop(::StringW name);

  /// @brief Method StopNamed, addr 0x484c778, size 0x44, virtual false, abstract: false, final false
  inline void StopNamed(::StringW name);

  /// @brief Method SyncLayer, addr 0x484d2a4, size 0x44, virtual false, abstract: false, final false
  inline void SyncLayer(int32_t layer);

  /// @brief Method .ctor, addr 0x484d780, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Item, addr 0x484c93c, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimationState* get_Item(::StringW name);

  /// @brief Method get_animateOnlyIfVisible, addr 0x484d54c, size 0x3c, virtual false, abstract: false, final false
  inline bool get_animateOnlyIfVisible();

  /// @brief Method get_animatePhysics, addr 0x484d4cc, size 0x3c, virtual false, abstract: false, final false
  inline bool get_animatePhysics();

  /// @brief Method get_clip, addr 0x484c578, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::AnimationClip> get_clip();

  /// @brief Method get_cullingType, addr 0x484d5cc, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimationCullingType get_cullingType();

  /// @brief Method get_isPlaying, addr 0x484c8bc, size 0x3c, virtual false, abstract: false, final false
  inline bool get_isPlaying();

  /// @brief Method get_localBounds, addr 0x484d64c, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::Bounds get_localBounds();

  /// @brief Method get_localBounds_Injected, addr 0x484d6b4, size 0x44, virtual false, abstract: false, final false
  inline void get_localBounds_Injected(::ByRef<::UnityEngine::Bounds> ret);

  /// @brief Method get_playAutomatically, addr 0x484c5f8, size 0x3c, virtual false, abstract: false, final false
  inline bool get_playAutomatically();

  /// @brief Method get_wrapMode, addr 0x484c678, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::WrapMode get_wrapMode();

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Method set_animateOnlyIfVisible, addr 0x484d588, size 0x44, virtual false, abstract: false, final false
  inline void set_animateOnlyIfVisible(bool value);

  /// @brief Method set_animatePhysics, addr 0x484d508, size 0x44, virtual false, abstract: false, final false
  inline void set_animatePhysics(bool value);

  /// @brief Method set_clip, addr 0x484c5b4, size 0x44, virtual false, abstract: false, final false
  inline void set_clip(::UnityEngine::AnimationClip* value);

  /// @brief Method set_cullingType, addr 0x484d608, size 0x44, virtual false, abstract: false, final false
  inline void set_cullingType(::UnityEngine::AnimationCullingType value);

  /// @brief Method set_localBounds, addr 0x484d6f8, size 0x44, virtual false, abstract: false, final false
  inline void set_localBounds(::UnityEngine::Bounds value);

  /// @brief Method set_localBounds_Injected, addr 0x484d73c, size 0x44, virtual false, abstract: false, final false
  inline void set_localBounds_Injected(::ByRef<::UnityEngine::Bounds> value);

  /// @brief Method set_playAutomatically, addr 0x484c634, size 0x44, virtual false, abstract: false, final false
  inline void set_playAutomatically(bool value);

  /// @brief Method set_wrapMode, addr 0x484c6b4, size 0x44, virtual false, abstract: false, final false
  inline void set_wrapMode(::UnityEngine::WrapMode value);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16862 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Animation, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Animation);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animation*, "UnityEngine", "Animation");
NEED_NO_BOX(::UnityEngine::Animation_Enumerator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animation_Enumerator*, "UnityEngine", "Animation/Enumerator");
