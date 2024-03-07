#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
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
namespace UnityEngine {
class __Animation__Enumerator;
}
// Forward declare root types
namespace UnityEngine {
class Animation;
}
namespace UnityEngine {
class __Animation__Enumerator;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Animation);
MARK_REF_PTR_T(::UnityEngine::__Animation__Enumerator);
// Type: ::Enumerator
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::Animation::Enumerator*
class CORDL_TYPE __Animation__Enumerator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Current))::System::Object* Current;

  /// @brief Field m_CurrentIndex, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CurrentIndex, put = __cordl_internal_set_m_CurrentIndex)) int32_t m_CurrentIndex;

  /// @brief Field m_Outer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Outer, put = __cordl_internal_set_m_Outer))::UnityW<::UnityEngine::Animation> m_Outer;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Method MoveNext, addr 0x2dd48ac, size 0x60, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::UnityEngine::__Animation__Enumerator* New_ctor(::UnityEngine::Animation* outer);

  /// @brief Method Reset, addr 0x2dd490c, size 0xc, virtual true, abstract: false, final true
  inline void Reset();

  constexpr int32_t const& __cordl_internal_get_m_CurrentIndex() const;

  constexpr int32_t& __cordl_internal_get_m_CurrentIndex();

  constexpr ::UnityW<::UnityEngine::Animation> const& __cordl_internal_get_m_Outer() const;

  constexpr ::UnityW<::UnityEngine::Animation>& __cordl_internal_get_m_Outer();

  constexpr void __cordl_internal_set_m_CurrentIndex(int32_t value);

  constexpr void __cordl_internal_set_m_Outer(::UnityW<::UnityEngine::Animation> value);

  /// @brief Method .ctor, addr 0x2dd4424, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Animation* outer);

  /// @brief Method get_Current, addr 0x2dd4860, size 0x4c, virtual true, abstract: false, final true
  inline ::System::Object* get_Current();

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Animation__Enumerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Animation__Enumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Animation__Enumerator(__Animation__Enumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Animation__Enumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Animation__Enumerator(__Animation__Enumerator const&) = delete;

  /// @brief Field m_Outer, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Animation> ___m_Outer;

  /// @brief Field m_CurrentIndex, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_CurrentIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__Animation__Enumerator, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__Animation__Enumerator, ___m_Outer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__Animation__Enumerator, ___m_CurrentIndex) == 0x18, "Offset mismatch!");

} // namespace UnityEngine
// Type: UnityEngine::Animation
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::Animation*
class CORDL_TYPE Animation : public ::UnityEngine::Behaviour {
public:
  // Declarations
  using Enumerator = ::UnityEngine::__Animation__Enumerator;

  __declspec(property(get = get_Item))::UnityEngine::AnimationState* Item[];

  __declspec(property(get = get_animateOnlyIfVisible, put = set_animateOnlyIfVisible)) bool animateOnlyIfVisible;

  __declspec(property(get = get_animatePhysics, put = set_animatePhysics)) bool animatePhysics;

  __declspec(property(get = get_clip, put = set_clip))::UnityW<::UnityEngine::AnimationClip> clip;

  __declspec(property(get = get_cullingType, put = set_cullingType))::UnityEngine::AnimationCullingType cullingType;

  __declspec(property(get = get_isPlaying)) bool isPlaying;

  __declspec(property(get = get_localBounds, put = set_localBounds))::UnityEngine::Bounds localBounds;

  __declspec(property(get = get_playAutomatically, put = set_playAutomatically)) bool playAutomatically;

  __declspec(property(get = get_wrapMode, put = set_wrapMode))::UnityEngine::WrapMode wrapMode;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method AddClip, addr 0x2dd4090, size 0x60, virtual false, abstract: false, final false
  inline void AddClip(::UnityEngine::AnimationClip* clip, ::StringW newName);

  /// @brief Method AddClip, addr 0x2dd40f0, size 0x70, virtual false, abstract: false, final false
  inline void AddClip(::UnityEngine::AnimationClip* clip, ::StringW newName, int32_t firstFrame, int32_t lastFrame);

  /// @brief Method AddClip, addr 0x2dd4160, size 0x74, virtual false, abstract: false, final false
  inline void AddClip(::UnityEngine::AnimationClip* clip, ::StringW newName, int32_t firstFrame, int32_t lastFrame, bool addLoopFrame);

  /// @brief Method Blend, addr 0x2dd3d04, size 0x50, virtual false, abstract: false, final false
  inline void Blend(::StringW animation);

  /// @brief Method Blend, addr 0x2dd3d54, size 0x5c, virtual false, abstract: false, final false
  inline void Blend(::StringW animation, float_t targetWeight);

  /// @brief Method Blend, addr 0x2dd3db0, size 0x5c, virtual false, abstract: false, final false
  inline void Blend(::StringW animation, float_t targetWeight, float_t fadeLength);

  /// @brief Method CrossFade, addr 0x2dd3bf8, size 0x50, virtual false, abstract: false, final false
  inline void CrossFade(::StringW animation);

  /// @brief Method CrossFade, addr 0x2dd3c48, size 0x58, virtual false, abstract: false, final false
  inline void CrossFade(::StringW animation, float_t fadeLength);

  /// @brief Method CrossFade, addr 0x2dd3ca0, size 0x64, virtual false, abstract: false, final false
  inline void CrossFade(::StringW animation, float_t fadeLength, ::UnityEngine::PlayMode mode);

  /// @brief Method CrossFadeQueued, addr 0x2dd3e0c, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimationState* CrossFadeQueued(::StringW animation);

  /// @brief Method CrossFadeQueued, addr 0x2dd3e60, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimationState* CrossFadeQueued(::StringW animation, float_t fadeLength);

  /// @brief Method CrossFadeQueued, addr 0x2dd3ebc, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimationState* CrossFadeQueued(::StringW animation, float_t fadeLength, ::UnityEngine::QueueMode queue);

  /// @brief Method CrossFadeQueued, addr 0x2dd3f24, size 0x6c, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimationState* CrossFadeQueued(::StringW animation, float_t fadeLength, ::UnityEngine::QueueMode queue, ::UnityEngine::PlayMode mode);

  /// @brief Method GetClip, addr 0x2dd44d4, size 0x94, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::AnimationClip> GetClip(::StringW name);

  /// @brief Method GetClipCount, addr 0x2dd42a0, size 0x3c, virtual false, abstract: false, final false
  inline int32_t GetClipCount();

  /// @brief Method GetEnumerator, addr 0x2dd43b8, size 0x6c, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* GetEnumerator();

  /// @brief Method GetState, addr 0x2dd3a50, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimationState* GetState(::StringW name);

  /// @brief Method GetStateAtIndex, addr 0x2dd4454, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimationState* GetStateAtIndex(int32_t index);

  /// @brief Method GetStateCount, addr 0x2dd4498, size 0x3c, virtual false, abstract: false, final false
  inline int32_t GetStateCount();

  /// @brief Method IsPlaying, addr 0x2dd39c8, size 0x44, virtual false, abstract: false, final false
  inline bool IsPlaying(::StringW name);

  static inline ::UnityEngine::Animation* New_ctor();

  /// @brief Method Play, addr 0x2dd3a94, size 0x40, virtual false, abstract: false, final false
  inline bool Play();

  /// @brief Method Play, addr 0x2dd3b5c, size 0x48, virtual false, abstract: false, final false
  inline bool Play(::StringW animation);

  /// @brief Method Play, addr 0x2dd4320, size 0x54, virtual false, abstract: false, final false
  inline bool Play(::StringW animation, ::UnityEngine::AnimationPlayMode mode);

  /// @brief Method Play, addr 0x2dd3ba4, size 0x54, virtual false, abstract: false, final false
  inline bool Play(::StringW animation, ::UnityEngine::PlayMode mode);

  /// @brief Method Play, addr 0x2dd42dc, size 0x44, virtual false, abstract: false, final false
  inline bool Play(::UnityEngine::AnimationPlayMode mode);

  /// @brief Method Play, addr 0x2dd3ad4, size 0x44, virtual false, abstract: false, final false
  inline bool Play(::UnityEngine::PlayMode mode);

  /// @brief Method PlayDefaultAnimation, addr 0x2dd3b18, size 0x44, virtual false, abstract: false, final false
  inline bool PlayDefaultAnimation(::UnityEngine::PlayMode mode);

  /// @brief Method PlayQueued, addr 0x2dd3f90, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimationState* PlayQueued(::StringW animation);

  /// @brief Method PlayQueued, addr 0x2dd3fdc, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimationState* PlayQueued(::StringW animation, ::UnityEngine::QueueMode queue);

  /// @brief Method PlayQueued, addr 0x2dd4034, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimationState* PlayQueued(::StringW animation, ::UnityEngine::QueueMode queue, ::UnityEngine::PlayMode mode);

  /// @brief Method RemoveClip, addr 0x2dd41d4, size 0x44, virtual false, abstract: false, final false
  inline void RemoveClip(::UnityEngine::AnimationClip* clip);

  /// @brief Method RemoveClip, addr 0x2dd4218, size 0x44, virtual false, abstract: false, final false
  inline void RemoveClip(::StringW clipName);

  /// @brief Method RemoveClipNamed, addr 0x2dd425c, size 0x44, virtual false, abstract: false, final false
  inline void RemoveClipNamed(::StringW clipName);

  /// @brief Method Rewind, addr 0x2dd388c, size 0x3c, virtual false, abstract: false, final false
  inline void Rewind();

  /// @brief Method Rewind, addr 0x2dd38c8, size 0x44, virtual false, abstract: false, final false
  inline void Rewind(::StringW name);

  /// @brief Method RewindNamed, addr 0x2dd390c, size 0x44, virtual false, abstract: false, final false
  inline void RewindNamed(::StringW name);

  /// @brief Method Sample, addr 0x2dd3950, size 0x3c, virtual false, abstract: false, final false
  inline void Sample();

  /// @brief Method Stop, addr 0x2dd37c8, size 0x3c, virtual false, abstract: false, final false
  inline void Stop();

  /// @brief Method Stop, addr 0x2dd3804, size 0x44, virtual false, abstract: false, final false
  inline void Stop(::StringW name);

  /// @brief Method StopNamed, addr 0x2dd3848, size 0x44, virtual false, abstract: false, final false
  inline void StopNamed(::StringW name);

  /// @brief Method SyncLayer, addr 0x2dd4374, size 0x44, virtual false, abstract: false, final false
  inline void SyncLayer(int32_t layer);

  /// @brief Method .ctor, addr 0x2dd4858, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Item, addr 0x2dd3a0c, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimationState* get_Item(::StringW name);

  /// @brief Method get_animateOnlyIfVisible, addr 0x2dd4624, size 0x3c, virtual false, abstract: false, final false
  inline bool get_animateOnlyIfVisible();

  /// @brief Method get_animatePhysics, addr 0x2dd45a4, size 0x3c, virtual false, abstract: false, final false
  inline bool get_animatePhysics();

  /// @brief Method get_clip, addr 0x2dd3648, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::AnimationClip> get_clip();

  /// @brief Method get_cullingType, addr 0x2dd46a4, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimationCullingType get_cullingType();

  /// @brief Method get_isPlaying, addr 0x2dd398c, size 0x3c, virtual false, abstract: false, final false
  inline bool get_isPlaying();

  /// @brief Method get_localBounds, addr 0x2dd4724, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::Bounds get_localBounds();

  /// @brief Method get_localBounds_Injected, addr 0x2dd478c, size 0x44, virtual false, abstract: false, final false
  inline void get_localBounds_Injected(ByRef<::UnityEngine::Bounds> ret);

  /// @brief Method get_playAutomatically, addr 0x2dd36c8, size 0x3c, virtual false, abstract: false, final false
  inline bool get_playAutomatically();

  /// @brief Method get_wrapMode, addr 0x2dd3748, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::WrapMode get_wrapMode();

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Method set_animateOnlyIfVisible, addr 0x2dd4660, size 0x44, virtual false, abstract: false, final false
  inline void set_animateOnlyIfVisible(bool value);

  /// @brief Method set_animatePhysics, addr 0x2dd45e0, size 0x44, virtual false, abstract: false, final false
  inline void set_animatePhysics(bool value);

  /// @brief Method set_clip, addr 0x2dd3684, size 0x44, virtual false, abstract: false, final false
  inline void set_clip(::UnityEngine::AnimationClip* value);

  /// @brief Method set_cullingType, addr 0x2dd46e0, size 0x44, virtual false, abstract: false, final false
  inline void set_cullingType(::UnityEngine::AnimationCullingType value);

  /// @brief Method set_localBounds, addr 0x2dd47d0, size 0x44, virtual false, abstract: false, final false
  inline void set_localBounds(::UnityEngine::Bounds value);

  /// @brief Method set_localBounds_Injected, addr 0x2dd4814, size 0x44, virtual false, abstract: false, final false
  inline void set_localBounds_Injected(ByRef<::UnityEngine::Bounds> value);

  /// @brief Method set_playAutomatically, addr 0x2dd3704, size 0x44, virtual false, abstract: false, final false
  inline void set_playAutomatically(bool value);

  /// @brief Method set_wrapMode, addr 0x2dd3784, size 0x44, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Animation, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Animation);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animation*, "UnityEngine", "Animation");
NEED_NO_BOX(::UnityEngine::__Animation__Enumerator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__Animation__Enumerator*, "UnityEngine", "Animation/Enumerator");
