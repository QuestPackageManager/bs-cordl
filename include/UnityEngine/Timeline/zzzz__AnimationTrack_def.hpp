#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/AnimationTrack.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBinding_def.hpp"
#include "UnityEngine/Timeline/zzzz__AnimationPlayableAsset_def.hpp"
#include "UnityEngine/Timeline/zzzz__ILayerable_def.hpp"
#include "UnityEngine/Timeline/zzzz__MatchTargetFields_def.hpp"
#include "UnityEngine/Timeline/zzzz__TimelineClip_def.hpp"
#include "UnityEngine/Timeline/zzzz__TrackAsset_def.hpp"
#include "UnityEngine/Timeline/zzzz__TrackOffset_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AnimationTrack)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::Generic {
template <typename T> class Queue_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace UnityEngine::Animations {
struct AnimationLayerMixerPlayable;
}
namespace UnityEngine::Playables {
struct PlayableBinding;
}
namespace UnityEngine::Playables {
class PlayableDirector;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine::Timeline {
struct AnimationPlayableAsset_LoopMode;
}
namespace UnityEngine::Timeline {
class AnimationTrack_AnimationTrackUpgrade;
}
namespace UnityEngine::Timeline {
class AnimationTrack__get_outputs_d__49;
}
namespace UnityEngine::Timeline {
struct AppliedOffsetMode;
}
namespace UnityEngine::Timeline {
class IPropertyCollector;
}
namespace UnityEngine::Timeline {
template <typename T> class IntervalTree_1;
}
namespace UnityEngine::Timeline {
struct MatchTargetFields;
}
namespace UnityEngine::Timeline {
class RuntimeElement;
}
namespace UnityEngine::Timeline {
struct TimelineClip_ClipExtrapolation;
}
namespace UnityEngine::Timeline {
class TimelineClip;
}
namespace UnityEngine::Timeline {
struct TrackOffset;
}
namespace UnityEngine {
class AnimationClip;
}
namespace UnityEngine {
class Animator;
}
namespace UnityEngine {
class AvatarMask;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class AnimationTrack;
}
namespace UnityEngine::Timeline {
class AnimationTrack_AnimationTrackUpgrade;
}
namespace UnityEngine::Timeline {
class AnimationTrack__get_outputs_d__49;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::AnimationTrack);
MARK_REF_PTR_T(::UnityEngine::Timeline::AnimationTrack_AnimationTrackUpgrade);
MARK_REF_PTR_T(::UnityEngine::Timeline::AnimationTrack__get_outputs_d__49);
// Dependencies System.Object
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: UnityEngine.Timeline.AnimationTrack/AnimationTrackUpgrade
class CORDL_TYPE AnimationTrack_AnimationTrackUpgrade : public ::System::Object {
public:
  // Declarations
  /// @brief Method ConvertInfiniteTrack, addr 0x4812334, size 0x20, virtual false, abstract: false, final false
  static inline void ConvertInfiniteTrack(::UnityEngine::Timeline::AnimationTrack* track);

  /// @brief Method ConvertRootMotion, addr 0x48122b0, size 0x84, virtual false, abstract: false, final false
  static inline void ConvertRootMotion(::UnityEngine::Timeline::AnimationTrack* track);

  /// @brief Method ConvertRotationsToEuler, addr 0x4812214, size 0x9c, virtual false, abstract: false, final false
  static inline void ConvertRotationsToEuler(::UnityEngine::Timeline::AnimationTrack* track);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AnimationTrack_AnimationTrackUpgrade();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AnimationTrack_AnimationTrackUpgrade", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AnimationTrack_AnimationTrackUpgrade(AnimationTrack_AnimationTrackUpgrade&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AnimationTrack_AnimationTrackUpgrade", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AnimationTrack_AnimationTrackUpgrade(AnimationTrack_AnimationTrackUpgrade const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15808 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::AnimationTrack_AnimationTrackUpgrade, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Timeline
// Dependencies System.Collections.Generic.IEnumerable`1<T>, System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerable, System.Collections.IEnumerator, System.IDisposable,
// System.Object, UnityEngine.Playables.PlayableBinding
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: UnityEngine.Timeline.AnimationTrack/<get_outputs>d__49
class CORDL_TYPE AnimationTrack__get_outputs_d__49 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_UnityEngine_Playables_PlayableBinding__get_Current)) ::UnityEngine::Playables::PlayableBinding
      System_Collections_Generic_IEnumerator_UnityEngine_Playables_PlayableBinding__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x20
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::UnityEngine::Playables::PlayableBinding __2__current;

  /// @brief Field <>4__this, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::UnityEngine::Timeline::AnimationTrack> __4__this;

  /// @brief Field <>l__initialThreadId, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x4812578, size 0x90, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::UnityEngine::Timeline::AnimationTrack__get_outputs_d__49* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.Playables.PlayableBinding>.GetEnumerator, addr 0x48126b0, size 0x9c, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>* System_Collections_Generic_IEnumerable_UnityEngine_Playables_PlayableBinding__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.Playables.PlayableBinding>.get_Current, addr 0x4812608, size 0x10, virtual true, abstract: false, final true
  inline ::UnityEngine::Playables::PlayableBinding System_Collections_Generic_IEnumerator_UnityEngine_Playables_PlayableBinding__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x481274c, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x4812618, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x4812650, size 0x60, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x4812574, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::UnityEngine::Playables::PlayableBinding const& __cordl_internal_get___2__current() const;

  constexpr ::UnityEngine::Playables::PlayableBinding& __cordl_internal_get___2__current();

  constexpr ::UnityW<::UnityEngine::Timeline::AnimationTrack> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::UnityEngine::Timeline::AnimationTrack>& __cordl_internal_get___4__this();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::UnityEngine::Playables::PlayableBinding value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::UnityEngine::Timeline::AnimationTrack> value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  /// @brief Method .ctor, addr 0x480e584, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>*
  i___System__Collections__Generic__IEnumerable_1___UnityEngine__Playables__PlayableBinding_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>*
  i___System__Collections__Generic__IEnumerator_1___UnityEngine__Playables__PlayableBinding_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AnimationTrack__get_outputs_d__49();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AnimationTrack__get_outputs_d__49", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AnimationTrack__get_outputs_d__49(AnimationTrack__get_outputs_d__49&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AnimationTrack__get_outputs_d__49", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AnimationTrack__get_outputs_d__49(AnimationTrack__get_outputs_d__49 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15809 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x20, def value: None
  ::UnityEngine::Playables::PlayableBinding _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x38, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field <>4__this, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Timeline::AnimationTrack> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Timeline::AnimationTrack__get_outputs_d__49, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::AnimationTrack__get_outputs_d__49, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::AnimationTrack__get_outputs_d__49, _____l__initialThreadId) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::AnimationTrack__get_outputs_d__49, _____4__this) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::AnimationTrack__get_outputs_d__49, 0x48>, "Size mismatch!");

} // namespace UnityEngine::Timeline
// Dependencies UnityEngine.Quaternion, UnityEngine.Timeline.AnimationPlayableAsset::LoopMode, UnityEngine.Timeline.ILayerable, UnityEngine.Timeline.MatchTargetFields,
// UnityEngine.Timeline.TimelineClip::ClipExtrapolation, UnityEngine.Timeline.TrackAsset, UnityEngine.Timeline.TrackOffset, UnityEngine.Vector3
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: UnityEngine.Timeline.AnimationTrack
class CORDL_TYPE AnimationTrack : public ::UnityEngine::Timeline::TrackAsset {
public:
  // Declarations
  using AnimationTrackUpgrade = ::UnityEngine::Timeline::AnimationTrack_AnimationTrackUpgrade;

  using _get_outputs_d__49 = ::UnityEngine::Timeline::AnimationTrack__get_outputs_d__49;

  __declspec(property(get = get_applyAvatarMask, put = set_applyAvatarMask)) bool applyAvatarMask;

  __declspec(property(get = get_applyOffsets, put = set_applyOffsets)) bool applyOffsets;

  __declspec(property(get = get_avatarMask, put = set_avatarMask)) ::UnityW<::UnityEngine::AvatarMask> avatarMask;

  __declspec(property(get = get_eulerAngles, put = set_eulerAngles)) ::UnityEngine::Vector3 eulerAngles;

  __declspec(property(get = get_inClipMode)) bool inClipMode;

  __declspec(property(get = get_infiniteClip, put = set_infiniteClip)) ::UnityW<::UnityEngine::AnimationClip> infiniteClip;

  __declspec(property(get = get_infiniteClipApplyFootIK, put = set_infiniteClipApplyFootIK)) bool infiniteClipApplyFootIK;

  __declspec(property(get = get_infiniteClipLoop, put = set_infiniteClipLoop)) ::UnityEngine::Timeline::AnimationPlayableAsset_LoopMode infiniteClipLoop;

  __declspec(property(get = get_infiniteClipOffsetEulerAngles, put = set_infiniteClipOffsetEulerAngles)) ::UnityEngine::Vector3 infiniteClipOffsetEulerAngles;

  __declspec(property(get = get_infiniteClipOffsetPosition, put = set_infiniteClipOffsetPosition)) ::UnityEngine::Vector3 infiniteClipOffsetPosition;

  __declspec(property(get = get_infiniteClipOffsetRotation, put = set_infiniteClipOffsetRotation)) ::UnityEngine::Quaternion infiniteClipOffsetRotation;

  __declspec(property(get = get_infiniteClipPostExtrapolation, put = set_infiniteClipPostExtrapolation)) ::UnityEngine::Timeline::TimelineClip_ClipExtrapolation infiniteClipPostExtrapolation;

  __declspec(property(get = get_infiniteClipPreExtrapolation, put = set_infiniteClipPreExtrapolation)) ::UnityEngine::Timeline::TimelineClip_ClipExtrapolation infiniteClipPreExtrapolation;

  __declspec(property(get = get_infiniteClipRemoveOffset, put = set_infiniteClipRemoveOffset)) bool infiniteClipRemoveOffset;

  __declspec(property(get = get_infiniteClipTimeOffset, put = set_infiniteClipTimeOffset)) double_t infiniteClipTimeOffset;

  /// @brief Field mInfiniteClipLoop, offset 0xcc, size 0x4
  __declspec(property(get = __cordl_internal_get_mInfiniteClipLoop, put = __cordl_internal_set_mInfiniteClipLoop)) ::UnityEngine::Timeline::AnimationPlayableAsset_LoopMode mInfiniteClipLoop;

  /// @brief Field m_ApplyAvatarMask, offset 0xf8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ApplyAvatarMask, put = __cordl_internal_set_m_ApplyAvatarMask)) bool m_ApplyAvatarMask;

  /// @brief Field m_ApplyOffsets, offset 0x128, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ApplyOffsets, put = __cordl_internal_set_m_ApplyOffsets)) bool m_ApplyOffsets;

  /// @brief Field m_AvatarMask, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AvatarMask, put = __cordl_internal_set_m_AvatarMask)) ::UnityW<::UnityEngine::AvatarMask> m_AvatarMask;

  /// @brief Field m_EulerAngles, offset 0xe0, size 0xc
  __declspec(property(get = __cordl_internal_get_m_EulerAngles, put = __cordl_internal_set_m_EulerAngles)) ::UnityEngine::Vector3 m_EulerAngles;

  /// @brief Field m_InfiniteClip, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get_m_InfiniteClip, put = __cordl_internal_set_m_InfiniteClip)) ::UnityW<::UnityEngine::AnimationClip> m_InfiniteClip;

  /// @brief Field m_InfiniteClipApplyFootIK, offset 0xc9, size 0x1
  __declspec(property(get = __cordl_internal_get_m_InfiniteClipApplyFootIK, put = __cordl_internal_set_m_InfiniteClipApplyFootIK)) bool m_InfiniteClipApplyFootIK;

  /// @brief Field m_InfiniteClipOffsetEulerAngles, offset 0xb4, size 0xc
  __declspec(property(get = __cordl_internal_get_m_InfiniteClipOffsetEulerAngles, put = __cordl_internal_set_m_InfiniteClipOffsetEulerAngles)) ::UnityEngine::Vector3 m_InfiniteClipOffsetEulerAngles;

  /// @brief Field m_InfiniteClipOffsetPosition, offset 0xa8, size 0xc
  __declspec(property(get = __cordl_internal_get_m_InfiniteClipOffsetPosition, put = __cordl_internal_set_m_InfiniteClipOffsetPosition)) ::UnityEngine::Vector3 m_InfiniteClipOffsetPosition;

  /// @brief Field m_InfiniteClipPostExtrapolation, offset 0xa4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_InfiniteClipPostExtrapolation,
                      put = __cordl_internal_set_m_InfiniteClipPostExtrapolation)) ::UnityEngine::Timeline::TimelineClip_ClipExtrapolation m_InfiniteClipPostExtrapolation;

  /// @brief Field m_InfiniteClipPreExtrapolation, offset 0xa0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_InfiniteClipPreExtrapolation,
                      put = __cordl_internal_set_m_InfiniteClipPreExtrapolation)) ::UnityEngine::Timeline::TimelineClip_ClipExtrapolation m_InfiniteClipPreExtrapolation;

  /// @brief Field m_InfiniteClipRemoveOffset, offset 0xc8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_InfiniteClipRemoveOffset, put = __cordl_internal_set_m_InfiniteClipRemoveOffset)) bool m_InfiniteClipRemoveOffset;

  /// @brief Field m_InfiniteClipTimeOffset, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_InfiniteClipTimeOffset, put = __cordl_internal_set_m_InfiniteClipTimeOffset)) double_t m_InfiniteClipTimeOffset;

  /// @brief Field m_MatchTargetFields, offset 0xd0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MatchTargetFields, put = __cordl_internal_set_m_MatchTargetFields)) ::UnityEngine::Timeline::MatchTargetFields m_MatchTargetFields;

  /// @brief Field m_OpenClipOffsetRotation, offset 0x108, size 0x10
  __declspec(property(get = __cordl_internal_get_m_OpenClipOffsetRotation, put = __cordl_internal_set_m_OpenClipOffsetRotation)) ::UnityEngine::Quaternion m_OpenClipOffsetRotation;

  /// @brief Field m_Position, offset 0xd4, size 0xc
  __declspec(property(get = __cordl_internal_get_m_Position, put = __cordl_internal_set_m_Position)) ::UnityEngine::Vector3 m_Position;

  /// @brief Field m_Rotation, offset 0x118, size 0x10
  __declspec(property(get = __cordl_internal_get_m_Rotation, put = __cordl_internal_set_m_Rotation)) ::UnityEngine::Quaternion m_Rotation;

  /// @brief Field m_TrackOffset, offset 0xfc, size 0x4
  __declspec(property(get = __cordl_internal_get_m_TrackOffset, put = __cordl_internal_set_m_TrackOffset)) ::UnityEngine::Timeline::TrackOffset m_TrackOffset;

  __declspec(property(get = get_matchTargetFields, put = set_matchTargetFields)) ::UnityEngine::Timeline::MatchTargetFields matchTargetFields;

  __declspec(property(get = get_openClipOffsetEulerAngles, put = set_openClipOffsetEulerAngles)) ::UnityEngine::Vector3 openClipOffsetEulerAngles;

  __declspec(property(get = get_openClipOffsetPosition, put = set_openClipOffsetPosition)) ::UnityEngine::Vector3 openClipOffsetPosition;

  __declspec(property(get = get_openClipOffsetRotation, put = set_openClipOffsetRotation)) ::UnityEngine::Quaternion openClipOffsetRotation;

  __declspec(property(get = get_openClipPostExtrapolation, put = set_openClipPostExtrapolation)) ::UnityEngine::Timeline::TimelineClip_ClipExtrapolation openClipPostExtrapolation;

  __declspec(property(get = get_openClipPreExtrapolation, put = set_openClipPreExtrapolation)) ::UnityEngine::Timeline::TimelineClip_ClipExtrapolation openClipPreExtrapolation;

  __declspec(property(get = get_outputs)) ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>* outputs;

  __declspec(property(get = get_position, put = set_position)) ::UnityEngine::Vector3 position;

  __declspec(property(get = get_rotation, put = set_rotation)) ::UnityEngine::Quaternion rotation;

  /// @brief Field s_CachedQueue, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_CachedQueue, put = setStaticF_s_CachedQueue)) ::System::Collections::Generic::Queue_1<::UnityW<::UnityEngine::Transform>>* s_CachedQueue;

  __declspec(property(get = get_trackOffset, put = set_trackOffset)) ::UnityEngine::Timeline::TrackOffset trackOffset;

  /// @brief Convert operator to "::UnityEngine::Timeline::ILayerable"
  constexpr operator ::UnityEngine::Timeline::ILayerable*() noexcept;

  /// @brief Method AnimatesRootTransform, addr 0x480f698, size 0x3cc, virtual false, abstract: false, final false
  inline bool AnimatesRootTransform();

  /// @brief Method ApplyTrackOffset, addr 0x480fa64, size 0x1b0, virtual false, abstract: false, final false
  inline ::UnityEngine::Playables::Playable ApplyTrackOffset(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Playables::Playable root, ::UnityEngine::GameObject* go,
                                                             ::UnityEngine::Timeline::AppliedOffsetMode mode);

  /// @brief Method AssignAnimationClip, addr 0x480e894, size 0x218, virtual false, abstract: false, final false
  inline void AssignAnimationClip(::UnityEngine::Timeline::TimelineClip* clip, ::UnityEngine::AnimationClip* animClip);

  /// @brief Method AttachDefaultBlend, addr 0x4811074, size 0x4, virtual false, abstract: false, final false
  inline void AttachDefaultBlend(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Animations::AnimationLayerMixerPlayable mixer, bool requireOffset);

  /// @brief Method AttachOffsetPlayable, addr 0x4811090, size 0x158, virtual false, abstract: false, final false
  inline ::UnityEngine::Playables::Playable AttachOffsetPlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Playables::Playable playable, ::UnityEngine::Vector3 pos,
                                                                 ::UnityEngine::Quaternion rot);

  /// @brief Method CalculateItemsHash, addr 0x480f068, size 0x74, virtual true, abstract: false, final false
  inline int32_t CalculateItemsHash();

  /// @brief Method CanCompileClips, addr 0x480e458, size 0xbc, virtual true, abstract: false, final false
  inline bool CanCompileClips();

  /// @brief Method CompileTrackPlayable, addr 0x480f24c, size 0x3f0, virtual false, abstract: false, final false
  inline ::UnityEngine::Playables::Playable CompileTrackPlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Timeline::AnimationTrack* track, ::UnityEngine::GameObject* go,
                                                                 ::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>* tree,
                                                                 ::UnityEngine::Timeline::AppliedOffsetMode mode);

  /// @brief Method CreateClip, addr 0x480e7ec, size 0xa8, virtual false, abstract: false, final false
  inline ::UnityEngine::Timeline::TimelineClip* CreateClip(::UnityEngine::AnimationClip* clip);

  /// @brief Method CreateGroupMixer, addr 0x4810b78, size 0x74, virtual false, abstract: false, final false
  static inline ::UnityEngine::Animations::AnimationLayerMixerPlayable CreateGroupMixer(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go, int32_t inputCount);

  /// @brief Method CreateInfiniteClip, addr 0x480eaac, size 0x104, virtual false, abstract: false, final false
  inline void CreateInfiniteClip(::StringW infiniteClipName);

  /// @brief Method CreateInfiniteTrackPlayable, addr 0x4810bec, size 0x378, virtual false, abstract: false, final false
  inline ::UnityEngine::Playables::Playable CreateInfiniteTrackPlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go,
                                                                        ::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>* tree,
                                                                        ::UnityEngine::Timeline::AppliedOffsetMode mode);

  /// @brief Method CreateMixerPlayableGraph, addr 0x480fc64, size 0x9c4, virtual true, abstract: false, final false
  inline ::UnityEngine::Playables::Playable CreateMixerPlayableGraph(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go,
                                                                     ::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>* tree);

  /// @brief Method CreateRecordableClip, addr 0x480ebb0, size 0x140, virtual false, abstract: false, final false
  inline ::UnityEngine::Timeline::TimelineClip* CreateRecordableClip(::StringW animClipName);

  /// @brief Method FindInHierarchyBreadthFirst, addr 0x4811f74, size 0x1d4, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Transform> FindInHierarchyBreadthFirst(::UnityEngine::Transform* t, ::StringW name);

  /// @brief Method GatherProperties, addr 0x4811a18, size 0x4, virtual true, abstract: false, final false
  inline void GatherProperties(::UnityEngine::Playables::PlayableDirector* director, ::UnityEngine::Timeline::IPropertyCollector* driver);

  /// @brief Method GetAnimationClips, addr 0x4811a1c, size 0x558, virtual false, abstract: false, final false
  inline void GetAnimationClips(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AnimationClip>>* animClips);

  /// @brief Method GetBinding, addr 0x48111e8, size 0x1e4, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Animator> GetBinding(::UnityEngine::Playables::PlayableDirector* director);

  /// @brief Method GetDefaultBlendCount, addr 0x4810b70, size 0x8, virtual false, abstract: false, final false
  inline int32_t GetDefaultBlendCount();

  /// @brief Method GetEvaluationTime, addr 0x4811518, size 0x9c, virtual true, abstract: false, final false
  inline void GetEvaluationTime(::ByRef<double_t> outStart, ::ByRef<double_t> outDuration);

  /// @brief Method GetGenericRootNode, addr 0x4810628, size 0x1e8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> GetGenericRootNode(::UnityEngine::GameObject* gameObject);

  /// @brief Method GetOffsetMode, addr 0x4810a8c, size 0xe4, virtual false, abstract: false, final false
  inline ::UnityEngine::Timeline::AppliedOffsetMode GetOffsetMode(::UnityEngine::GameObject* go, bool animatesRootTransform);

  /// @brief Method GetSequenceTime, addr 0x48117a8, size 0xfc, virtual true, abstract: false, final false
  inline void GetSequenceTime(::ByRef<double_t> outStart, ::ByRef<double_t> outDuration);

  /// @brief Method HasController, addr 0x48113cc, size 0x120, virtual false, abstract: false, final false
  inline bool HasController(::UnityEngine::GameObject* gameObject);

  /// @brief Method IsRootTransformDisabledByMask, addr 0x4810810, size 0x264, virtual false, abstract: false, final false
  inline bool IsRootTransformDisabledByMask(::UnityEngine::GameObject* gameObject, ::UnityEngine::Transform* genericRootNode);

  static inline ::UnityEngine::Timeline::AnimationTrack* New_ctor();

  /// @brief Method OnCreateClip, addr 0x480eea0, size 0x40, virtual true, abstract: false, final false
  inline void OnCreateClip(::UnityEngine::Timeline::TimelineClip* clip);

  /// @brief Method OnUpgradeFromVersion, addr 0x48121c4, size 0x50, virtual true, abstract: false, final false
  inline void OnUpgradeFromVersion(int32_t oldVersion);

  /// @brief Method RequiresMotionXPlayable, addr 0x4810f64, size 0x110, virtual false, abstract: false, final false
  inline bool RequiresMotionXPlayable(::UnityEngine::Timeline::AppliedOffsetMode mode, ::UnityEngine::GameObject* gameObject);

  /// @brief Method ResetOffsets, addr 0x480e77c, size 0x6c, virtual false, abstract: false, final false
  inline void ResetOffsets();

  /// @brief Method UnityEngine.Timeline.ILayerable.CreateLayerMixer, addr 0x480fc14, size 0x50, virtual true, abstract: false, final true
  inline ::UnityEngine::Playables::Playable UnityEngine_Timeline_ILayerable_CreateLayerMixer(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go, int32_t inputCount);

  /// @brief Method UpdateClipOffsets, addr 0x480e7e8, size 0x4, virtual false, abstract: false, final false
  inline void UpdateClipOffsets();

  /// @brief Method UsesAbsoluteMotion, addr 0x4811078, size 0x18, virtual false, abstract: false, final false
  static inline bool UsesAbsoluteMotion(::UnityEngine::Timeline::AppliedOffsetMode mode);

  constexpr ::UnityEngine::Timeline::AnimationPlayableAsset_LoopMode const& __cordl_internal_get_mInfiniteClipLoop() const;

  constexpr ::UnityEngine::Timeline::AnimationPlayableAsset_LoopMode& __cordl_internal_get_mInfiniteClipLoop();

  constexpr bool const& __cordl_internal_get_m_ApplyAvatarMask() const;

  constexpr bool& __cordl_internal_get_m_ApplyAvatarMask();

  constexpr bool const& __cordl_internal_get_m_ApplyOffsets() const;

  constexpr bool& __cordl_internal_get_m_ApplyOffsets();

  constexpr ::UnityW<::UnityEngine::AvatarMask> const& __cordl_internal_get_m_AvatarMask() const;

  constexpr ::UnityW<::UnityEngine::AvatarMask>& __cordl_internal_get_m_AvatarMask();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_EulerAngles() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_EulerAngles();

  constexpr ::UnityW<::UnityEngine::AnimationClip> const& __cordl_internal_get_m_InfiniteClip() const;

  constexpr ::UnityW<::UnityEngine::AnimationClip>& __cordl_internal_get_m_InfiniteClip();

  constexpr bool const& __cordl_internal_get_m_InfiniteClipApplyFootIK() const;

  constexpr bool& __cordl_internal_get_m_InfiniteClipApplyFootIK();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_InfiniteClipOffsetEulerAngles() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_InfiniteClipOffsetEulerAngles();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_InfiniteClipOffsetPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_InfiniteClipOffsetPosition();

  constexpr ::UnityEngine::Timeline::TimelineClip_ClipExtrapolation const& __cordl_internal_get_m_InfiniteClipPostExtrapolation() const;

  constexpr ::UnityEngine::Timeline::TimelineClip_ClipExtrapolation& __cordl_internal_get_m_InfiniteClipPostExtrapolation();

  constexpr ::UnityEngine::Timeline::TimelineClip_ClipExtrapolation const& __cordl_internal_get_m_InfiniteClipPreExtrapolation() const;

  constexpr ::UnityEngine::Timeline::TimelineClip_ClipExtrapolation& __cordl_internal_get_m_InfiniteClipPreExtrapolation();

  constexpr bool const& __cordl_internal_get_m_InfiniteClipRemoveOffset() const;

  constexpr bool& __cordl_internal_get_m_InfiniteClipRemoveOffset();

  constexpr double_t const& __cordl_internal_get_m_InfiniteClipTimeOffset() const;

  constexpr double_t& __cordl_internal_get_m_InfiniteClipTimeOffset();

  constexpr ::UnityEngine::Timeline::MatchTargetFields const& __cordl_internal_get_m_MatchTargetFields() const;

  constexpr ::UnityEngine::Timeline::MatchTargetFields& __cordl_internal_get_m_MatchTargetFields();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_m_OpenClipOffsetRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_m_OpenClipOffsetRotation();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_Position() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_Position();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_m_Rotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_m_Rotation();

  constexpr ::UnityEngine::Timeline::TrackOffset const& __cordl_internal_get_m_TrackOffset() const;

  constexpr ::UnityEngine::Timeline::TrackOffset& __cordl_internal_get_m_TrackOffset();

  constexpr void __cordl_internal_set_mInfiniteClipLoop(::UnityEngine::Timeline::AnimationPlayableAsset_LoopMode value);

  constexpr void __cordl_internal_set_m_ApplyAvatarMask(bool value);

  constexpr void __cordl_internal_set_m_ApplyOffsets(bool value);

  constexpr void __cordl_internal_set_m_AvatarMask(::UnityW<::UnityEngine::AvatarMask> value);

  constexpr void __cordl_internal_set_m_EulerAngles(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_InfiniteClip(::UnityW<::UnityEngine::AnimationClip> value);

  constexpr void __cordl_internal_set_m_InfiniteClipApplyFootIK(bool value);

  constexpr void __cordl_internal_set_m_InfiniteClipOffsetEulerAngles(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_InfiniteClipOffsetPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_InfiniteClipPostExtrapolation(::UnityEngine::Timeline::TimelineClip_ClipExtrapolation value);

  constexpr void __cordl_internal_set_m_InfiniteClipPreExtrapolation(::UnityEngine::Timeline::TimelineClip_ClipExtrapolation value);

  constexpr void __cordl_internal_set_m_InfiniteClipRemoveOffset(bool value);

  constexpr void __cordl_internal_set_m_InfiniteClipTimeOffset(double_t value);

  constexpr void __cordl_internal_set_m_MatchTargetFields(::UnityEngine::Timeline::MatchTargetFields value);

  constexpr void __cordl_internal_set_m_OpenClipOffsetRotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_m_Position(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_Rotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_m_TrackOffset(::UnityEngine::Timeline::TrackOffset value);

  /// @brief Method .ctor, addr 0x4812354, size 0x190, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::Queue_1<::UnityW<::UnityEngine::Transform>>* getStaticF_s_CachedQueue();

  /// @brief Method get_applyAvatarMask, addr 0x480e444, size 0x8, virtual false, abstract: false, final false
  inline bool get_applyAvatarMask();

  /// @brief Method get_applyOffsets, addr 0x480e37c, size 0x8, virtual false, abstract: false, final false
  inline bool get_applyOffsets();

  /// @brief Method get_avatarMask, addr 0x480e434, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::AvatarMask> get_avatarMask();

  /// @brief Method get_eulerAngles, addr 0x480e364, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_eulerAngles();

  /// @brief Method get_inClipMode, addr 0x480e5b8, size 0x34, virtual false, abstract: false, final false
  inline bool get_inClipMode();

  /// @brief Method get_infiniteClip, addr 0x480e410, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::AnimationClip> get_infiniteClip();

  /// @brief Method get_infiniteClipApplyFootIK, addr 0x480e728, size 0x8, virtual false, abstract: false, final false
  inline bool get_infiniteClipApplyFootIK();

  /// @brief Method get_infiniteClipLoop, addr 0x480e76c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Timeline::AnimationPlayableAsset_LoopMode get_infiniteClipLoop();

  /// @brief Method get_infiniteClipOffsetEulerAngles, addr 0x480e710, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_infiniteClipOffsetEulerAngles();

  /// @brief Method get_infiniteClipOffsetPosition, addr 0x480e698, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_infiniteClipOffsetPosition();

  /// @brief Method get_infiniteClipOffsetRotation, addr 0x480e6b0, size 0x24, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_infiniteClipOffsetRotation();

  /// @brief Method get_infiniteClipPostExtrapolation, addr 0x480e75c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Timeline::TimelineClip_ClipExtrapolation get_infiniteClipPostExtrapolation();

  /// @brief Method get_infiniteClipPreExtrapolation, addr 0x480e74c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Timeline::TimelineClip_ClipExtrapolation get_infiniteClipPreExtrapolation();

  /// @brief Method get_infiniteClipRemoveOffset, addr 0x480e420, size 0x8, virtual false, abstract: false, final false
  inline bool get_infiniteClipRemoveOffset();

  /// @brief Method get_infiniteClipTimeOffset, addr 0x480e73c, size 0x8, virtual false, abstract: false, final false
  inline double_t get_infiniteClipTimeOffset();

  /// @brief Method get_matchTargetFields, addr 0x480e398, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Timeline::MatchTargetFields get_matchTargetFields();

  /// @brief Method get_openClipOffsetEulerAngles, addr 0x481218c, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_openClipOffsetEulerAngles();

  /// @brief Method get_openClipOffsetPosition, addr 0x481214c, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_openClipOffsetPosition();

  /// @brief Method get_openClipOffsetRotation, addr 0x4812164, size 0x24, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_openClipOffsetRotation();

  /// @brief Method get_openClipPostExtrapolation, addr 0x48121b4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Timeline::TimelineClip_ClipExtrapolation get_openClipPostExtrapolation();

  /// @brief Method get_openClipPreExtrapolation, addr 0x48121a4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Timeline::TimelineClip_ClipExtrapolation get_openClipPreExtrapolation();

  /// @brief Method get_outputs, addr 0x480e514, size 0x70, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>* get_outputs();

  /// @brief Method get_position, addr 0x480e2ec, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_position();

  /// @brief Method get_rotation, addr 0x480e304, size 0x24, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_rotation();

  /// @brief Method get_trackOffset, addr 0x480e388, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Timeline::TrackOffset get_trackOffset();

  /// @brief Convert to "::UnityEngine::Timeline::ILayerable"
  constexpr ::UnityEngine::Timeline::ILayerable* i___UnityEngine__Timeline__ILayerable() noexcept;

  static inline void setStaticF_s_CachedQueue(::System::Collections::Generic::Queue_1<::UnityW<::UnityEngine::Transform>>* value);

  /// @brief Method set_applyAvatarMask, addr 0x480e44c, size 0xc, virtual false, abstract: false, final false
  inline void set_applyAvatarMask(bool value);

  /// @brief Method set_applyOffsets, addr 0x480e384, size 0x4, virtual false, abstract: false, final false
  inline void set_applyOffsets(bool value);

  /// @brief Method set_avatarMask, addr 0x480e43c, size 0x8, virtual false, abstract: false, final false
  inline void set_avatarMask(::UnityEngine::AvatarMask* value);

  /// @brief Method set_eulerAngles, addr 0x480e370, size 0xc, virtual false, abstract: false, final false
  inline void set_eulerAngles(::UnityEngine::Vector3 value);

  /// @brief Method set_infiniteClip, addr 0x480e418, size 0x8, virtual false, abstract: false, final false
  inline void set_infiniteClip(::UnityEngine::AnimationClip* value);

  /// @brief Method set_infiniteClipApplyFootIK, addr 0x480e730, size 0xc, virtual false, abstract: false, final false
  inline void set_infiniteClipApplyFootIK(bool value);

  /// @brief Method set_infiniteClipLoop, addr 0x480e774, size 0x8, virtual false, abstract: false, final false
  inline void set_infiniteClipLoop(::UnityEngine::Timeline::AnimationPlayableAsset_LoopMode value);

  /// @brief Method set_infiniteClipOffsetEulerAngles, addr 0x480e71c, size 0xc, virtual false, abstract: false, final false
  inline void set_infiniteClipOffsetEulerAngles(::UnityEngine::Vector3 value);

  /// @brief Method set_infiniteClipOffsetPosition, addr 0x480e6a4, size 0xc, virtual false, abstract: false, final false
  inline void set_infiniteClipOffsetPosition(::UnityEngine::Vector3 value);

  /// @brief Method set_infiniteClipOffsetRotation, addr 0x480e6d4, size 0x3c, virtual false, abstract: false, final false
  inline void set_infiniteClipOffsetRotation(::UnityEngine::Quaternion value);

  /// @brief Method set_infiniteClipPostExtrapolation, addr 0x480e764, size 0x8, virtual false, abstract: false, final false
  inline void set_infiniteClipPostExtrapolation(::UnityEngine::Timeline::TimelineClip_ClipExtrapolation value);

  /// @brief Method set_infiniteClipPreExtrapolation, addr 0x480e754, size 0x8, virtual false, abstract: false, final false
  inline void set_infiniteClipPreExtrapolation(::UnityEngine::Timeline::TimelineClip_ClipExtrapolation value);

  /// @brief Method set_infiniteClipRemoveOffset, addr 0x480e428, size 0xc, virtual false, abstract: false, final false
  inline void set_infiniteClipRemoveOffset(bool value);

  /// @brief Method set_infiniteClipTimeOffset, addr 0x480e744, size 0x8, virtual false, abstract: false, final false
  inline void set_infiniteClipTimeOffset(double_t value);

  /// @brief Method set_matchTargetFields, addr 0x480e3a0, size 0x70, virtual false, abstract: false, final false
  inline void set_matchTargetFields(::UnityEngine::Timeline::MatchTargetFields value);

  /// @brief Method set_openClipOffsetEulerAngles, addr 0x4812198, size 0xc, virtual false, abstract: false, final false
  inline void set_openClipOffsetEulerAngles(::UnityEngine::Vector3 value);

  /// @brief Method set_openClipOffsetPosition, addr 0x4812158, size 0xc, virtual false, abstract: false, final false
  inline void set_openClipOffsetPosition(::UnityEngine::Vector3 value);

  /// @brief Method set_openClipOffsetRotation, addr 0x4812188, size 0x4, virtual false, abstract: false, final false
  inline void set_openClipOffsetRotation(::UnityEngine::Quaternion value);

  /// @brief Method set_openClipPostExtrapolation, addr 0x48121bc, size 0x8, virtual false, abstract: false, final false
  inline void set_openClipPostExtrapolation(::UnityEngine::Timeline::TimelineClip_ClipExtrapolation value);

  /// @brief Method set_openClipPreExtrapolation, addr 0x48121ac, size 0x8, virtual false, abstract: false, final false
  inline void set_openClipPreExtrapolation(::UnityEngine::Timeline::TimelineClip_ClipExtrapolation value);

  /// @brief Method set_position, addr 0x480e2f8, size 0xc, virtual false, abstract: false, final false
  inline void set_position(::UnityEngine::Vector3 value);

  /// @brief Method set_rotation, addr 0x480e328, size 0x3c, virtual false, abstract: false, final false
  inline void set_rotation(::UnityEngine::Quaternion value);

  /// @brief Method set_trackOffset, addr 0x480e390, size 0x8, virtual false, abstract: false, final false
  inline void set_trackOffset(::UnityEngine::Timeline::TrackOffset value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AnimationTrack();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AnimationTrack", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AnimationTrack(AnimationTrack&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AnimationTrack", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AnimationTrack(AnimationTrack const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15810 };

  /// @brief Field k_DefaultInfiniteClipName offset 0xffffffff size 0x8
  static constexpr ::ConstString k_DefaultInfiniteClipName{ u"Recorded" };

  /// @brief Field k_DefaultRecordableClipName offset 0xffffffff size 0x8
  static constexpr ::ConstString k_DefaultRecordableClipName{ u"Recorded" };

  /// @brief Field m_InfiniteClipPreExtrapolation, offset: 0xa0, size: 0x4, def value: None
  ::UnityEngine::Timeline::TimelineClip_ClipExtrapolation ___m_InfiniteClipPreExtrapolation;

  /// @brief Field m_InfiniteClipPostExtrapolation, offset: 0xa4, size: 0x4, def value: None
  ::UnityEngine::Timeline::TimelineClip_ClipExtrapolation ___m_InfiniteClipPostExtrapolation;

  /// @brief Field m_InfiniteClipOffsetPosition, offset: 0xa8, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_InfiniteClipOffsetPosition;

  /// @brief Field m_InfiniteClipOffsetEulerAngles, offset: 0xb4, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_InfiniteClipOffsetEulerAngles;

  /// @brief Field m_InfiniteClipTimeOffset, offset: 0xc0, size: 0x8, def value: None
  double_t ___m_InfiniteClipTimeOffset;

  /// @brief Field m_InfiniteClipRemoveOffset, offset: 0xc8, size: 0x1, def value: None
  bool ___m_InfiniteClipRemoveOffset;

  /// @brief Field m_InfiniteClipApplyFootIK, offset: 0xc9, size: 0x1, def value: None
  bool ___m_InfiniteClipApplyFootIK;

  /// @brief Field mInfiniteClipLoop, offset: 0xcc, size: 0x4, def value: None
  ::UnityEngine::Timeline::AnimationPlayableAsset_LoopMode ___mInfiniteClipLoop;

  /// @brief Field m_MatchTargetFields, offset: 0xd0, size: 0x4, def value: None
  ::UnityEngine::Timeline::MatchTargetFields ___m_MatchTargetFields;

  /// @brief Field m_Position, offset: 0xd4, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_Position;

  /// @brief Field m_EulerAngles, offset: 0xe0, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_EulerAngles;

  /// @brief Field m_AvatarMask, offset: 0xf0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AvatarMask> ___m_AvatarMask;

  /// @brief Field m_ApplyAvatarMask, offset: 0xf8, size: 0x1, def value: None
  bool ___m_ApplyAvatarMask;

  /// @brief Field m_TrackOffset, offset: 0xfc, size: 0x4, def value: None
  ::UnityEngine::Timeline::TrackOffset ___m_TrackOffset;

  /// @brief Field m_InfiniteClip, offset: 0x100, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AnimationClip> ___m_InfiniteClip;

  /// @brief Field m_OpenClipOffsetRotation, offset: 0x108, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___m_OpenClipOffsetRotation;

  /// @brief Field m_Rotation, offset: 0x118, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___m_Rotation;

  /// @brief Field m_ApplyOffsets, offset: 0x128, size: 0x1, def value: None
  bool ___m_ApplyOffsets;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Timeline::AnimationTrack, ___m_InfiniteClipPreExtrapolation) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::AnimationTrack, ___m_InfiniteClipPostExtrapolation) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::AnimationTrack, ___m_InfiniteClipOffsetPosition) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::AnimationTrack, ___m_InfiniteClipOffsetEulerAngles) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::AnimationTrack, ___m_InfiniteClipTimeOffset) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::AnimationTrack, ___m_InfiniteClipRemoveOffset) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::AnimationTrack, ___m_InfiniteClipApplyFootIK) == 0xc9, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::AnimationTrack, ___mInfiniteClipLoop) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::AnimationTrack, ___m_MatchTargetFields) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::AnimationTrack, ___m_Position) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::AnimationTrack, ___m_EulerAngles) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::AnimationTrack, ___m_AvatarMask) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::AnimationTrack, ___m_ApplyAvatarMask) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::AnimationTrack, ___m_TrackOffset) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::AnimationTrack, ___m_InfiniteClip) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::AnimationTrack, ___m_OpenClipOffsetRotation) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::AnimationTrack, ___m_Rotation) == 0x118, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::AnimationTrack, ___m_ApplyOffsets) == 0x128, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::AnimationTrack, 0x130>, "Size mismatch!");

} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::AnimationTrack);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::AnimationTrack*, "UnityEngine.Timeline", "AnimationTrack");
NEED_NO_BOX(::UnityEngine::Timeline::AnimationTrack_AnimationTrackUpgrade);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::AnimationTrack_AnimationTrackUpgrade*, "UnityEngine.Timeline", "AnimationTrack/AnimationTrackUpgrade");
NEED_NO_BOX(::UnityEngine::Timeline::AnimationTrack__get_outputs_d__49);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::AnimationTrack__get_outputs_d__49*, "UnityEngine.Timeline", "AnimationTrack/<get_outputs>d__49");
