#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBinding_def.hpp"
#include "UnityEngine/Timeline/zzzz__AnimationPlayableAsset_def.hpp"
#include "UnityEngine/Timeline/zzzz__MatchTargetFields_def.hpp"
#include "UnityEngine/Timeline/zzzz__TimelineClip_def.hpp"
#include "UnityEngine/Timeline/zzzz__TrackAsset_def.hpp"
#include "UnityEngine/Timeline/zzzz__TrackOffset_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AnimationTrack)
namespace UnityEngine {
class Animator;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Timeline {
struct AppliedOffsetMode;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine::Timeline {
struct TrackOffset;
}
namespace UnityEngine::Playables {
class PlayableDirector;
}
namespace UnityEngine::Timeline {
struct __AnimationPlayableAsset__LoopMode;
}
namespace UnityEngine::Timeline {
class TimelineClip;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class AnimationClip;
}
namespace UnityEngine::Animations {
struct AnimationLayerMixerPlayable;
}
namespace UnityEngine::Timeline {
template <typename T> class IntervalTree_1;
}
namespace UnityEngine::Timeline {
class IPropertyCollector;
}
namespace UnityEngine::Timeline {
class __AnimationTrack__AnimationTrackUpgrade;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::Timeline {
class __AnimationTrack___get_outputs_d__49;
}
namespace UnityEngine {
class AvatarMask;
}
namespace System::Collections::Generic {
template <typename T> class Queue_1;
}
namespace UnityEngine::Playables {
struct PlayableBinding;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::Timeline {
class ILayerable;
}
namespace UnityEngine::Timeline {
struct MatchTargetFields;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine::Timeline {
struct __TimelineClip__ClipExtrapolation;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine::Timeline {
class RuntimeElement;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class AnimationTrack;
}
namespace UnityEngine::Timeline {
class __AnimationTrack__AnimationTrackUpgrade;
}
namespace UnityEngine::Timeline {
class __AnimationTrack___get_outputs_d__49;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::AnimationTrack);
MARK_REF_PTR_T(::UnityEngine::Timeline::__AnimationTrack__AnimationTrackUpgrade);
MARK_REF_PTR_T(::UnityEngine::Timeline::__AnimationTrack___get_outputs_d__49);
// Type: ::AnimationTrackUpgrade
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13841))
// CS Name: ::AnimationTrack::AnimationTrackUpgrade*
class CORDL_TYPE __AnimationTrack__AnimationTrackUpgrade : public ::System::Object {
public:
  // Declarations
  /// @brief Method ConvertRotationsToEuler addr 0x2c54d44 size 0x9c virtual false final false
  static inline void ConvertRotationsToEuler(::UnityEngine::Timeline::AnimationTrack* track);

  /// @brief Method ConvertRootMotion addr 0x2c54de0 size 0x84 virtual false final false
  static inline void ConvertRootMotion(::UnityEngine::Timeline::AnimationTrack* track);

  /// @brief Method ConvertInfiniteTrack addr 0x2c54e64 size 0x20 virtual false final false
  static inline void ConvertInfiniteTrack(::UnityEngine::Timeline::AnimationTrack* track);

  // Ctor Parameters [CppParam { name: "", ty: "__AnimationTrack__AnimationTrackUpgrade", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AnimationTrack__AnimationTrackUpgrade(__AnimationTrack__AnimationTrackUpgrade&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AnimationTrack__AnimationTrackUpgrade", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AnimationTrack__AnimationTrackUpgrade(__AnimationTrack__AnimationTrackUpgrade const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AnimationTrack__AnimationTrackUpgrade();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::__AnimationTrack__AnimationTrackUpgrade, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Timeline
// Type: ::<get_outputs>d__49
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(10431))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13842))
// CS Name: ::AnimationTrack::<get_outputs>d__49*
class CORDL_TYPE __AnimationTrack___get_outputs_d__49 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x20
  __declspec(property(get = __get___2__current, put = __set___2__current))::UnityEngine::Playables::PlayableBinding __2__current;

  /// @brief Field <>l__initialThreadId, offset 0x38, size 0x4
  __declspec(property(get = __get___l__initialThreadId, put = __set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <>4__this, offset 0x40, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::UnityEngine::Timeline::AnimationTrack* __4__this;

  __declspec(property(get = System_Collections_Generic_IEnumerator_UnityEngine_Playables_PlayableBinding__get_Current))::UnityEngine::Playables::PlayableBinding
      System_Collections_Generic_IEnumerator_UnityEngine_Playables_PlayableBinding__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::UnityEngine::Playables::PlayableBinding& __get___2__current();

  constexpr ::UnityEngine::Playables::PlayableBinding const& __get___2__current() const;

  constexpr void __set___2__current(::UnityEngine::Playables::PlayableBinding value);

  constexpr int32_t& __get___l__initialThreadId();

  constexpr int32_t const& __get___l__initialThreadId() const;

  constexpr void __set___l__initialThreadId(int32_t value);

  constexpr ::UnityEngine::Timeline::AnimationTrack*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Timeline::AnimationTrack*> const& __get___4__this() const;

  constexpr void __set___4__this(::UnityEngine::Timeline::AnimationTrack* value);

  static inline ::UnityEngine::Timeline::__AnimationTrack___get_outputs_d__49* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x2c51044 size 0x34 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x2c550a4 size 0x4 virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x2c550a8 size 0x90 virtual true final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.Playables.PlayableBinding>.get_Current addr 0x2c55138 size 0x10 virtual true final true
  inline ::UnityEngine::Playables::PlayableBinding System_Collections_Generic_IEnumerator_UnityEngine_Playables_PlayableBinding__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x2c55148 size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x2c55188 size 0x60 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.Playables.PlayableBinding>.GetEnumerator addr 0x2c551e8 size 0xa4 virtual true final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>* System_Collections_Generic_IEnumerable_UnityEngine_Playables_PlayableBinding__GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2c5528c size 0x4 virtual true final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  // Ctor Parameters [CppParam { name: "", ty: "__AnimationTrack___get_outputs_d__49", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AnimationTrack___get_outputs_d__49(__AnimationTrack___get_outputs_d__49&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AnimationTrack___get_outputs_d__49", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AnimationTrack___get_outputs_d__49(__AnimationTrack___get_outputs_d__49 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AnimationTrack___get_outputs_d__49();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x20, def value: None
  ::UnityEngine::Playables::PlayableBinding _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x38, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field <>4__this, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Timeline::AnimationTrack* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::__AnimationTrack___get_outputs_d__49, 0x48>, "Size mismatch!");

} // namespace UnityEngine::Timeline
// Type: UnityEngine.Timeline::AnimationTrack
// SizeInfo { instance_size: 304, native_size: -1, calculated_instance_size: 304, calculated_native_size: 297, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13847)), TypeDefinitionIndex(TypeDefinitionIndex(10252)), TypeDefinitionIndex(TypeDefinitionIndex(10249)),
// TypeDefinitionIndex(TypeDefinitionIndex(13837)), TypeDefinitionIndex(TypeDefinitionIndex(13831)), TypeDefinitionIndex(TypeDefinitionIndex(13862)), TypeDefinitionIndex(TypeDefinitionIndex(13838))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13843))
// CS Name: ::UnityEngine.Timeline::AnimationTrack*
class CORDL_TYPE AnimationTrack : public ::UnityEngine::Timeline::TrackAsset {
public:
  // Declarations
  using _get_outputs_d__49 = ::UnityEngine::Timeline::__AnimationTrack___get_outputs_d__49;

  using AnimationTrackUpgrade = ::UnityEngine::Timeline::__AnimationTrack__AnimationTrackUpgrade;

  /// @brief Field m_InfiniteClipPreExtrapolation, offset 0xa0, size 0x4
  __declspec(property(get = __get_m_InfiniteClipPreExtrapolation, put = __set_m_InfiniteClipPreExtrapolation))::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation m_InfiniteClipPreExtrapolation;

  /// @brief Field m_InfiniteClipPostExtrapolation, offset 0xa4, size 0x4
  __declspec(property(get = __get_m_InfiniteClipPostExtrapolation,
                      put = __set_m_InfiniteClipPostExtrapolation))::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation m_InfiniteClipPostExtrapolation;

  /// @brief Field m_InfiniteClipOffsetPosition, offset 0xa8, size 0xc
  __declspec(property(get = __get_m_InfiniteClipOffsetPosition, put = __set_m_InfiniteClipOffsetPosition))::UnityEngine::Vector3 m_InfiniteClipOffsetPosition;

  /// @brief Field m_InfiniteClipOffsetEulerAngles, offset 0xb4, size 0xc
  __declspec(property(get = __get_m_InfiniteClipOffsetEulerAngles, put = __set_m_InfiniteClipOffsetEulerAngles))::UnityEngine::Vector3 m_InfiniteClipOffsetEulerAngles;

  /// @brief Field m_InfiniteClipTimeOffset, offset 0xc0, size 0x8
  __declspec(property(get = __get_m_InfiniteClipTimeOffset, put = __set_m_InfiniteClipTimeOffset)) double_t m_InfiniteClipTimeOffset;

  /// @brief Field m_InfiniteClipRemoveOffset, offset 0xc8, size 0x1
  __declspec(property(get = __get_m_InfiniteClipRemoveOffset, put = __set_m_InfiniteClipRemoveOffset)) bool m_InfiniteClipRemoveOffset;

  /// @brief Field m_InfiniteClipApplyFootIK, offset 0xc9, size 0x1
  __declspec(property(get = __get_m_InfiniteClipApplyFootIK, put = __set_m_InfiniteClipApplyFootIK)) bool m_InfiniteClipApplyFootIK;

  /// @brief Field mInfiniteClipLoop, offset 0xcc, size 0x4
  __declspec(property(get = __get_mInfiniteClipLoop, put = __set_mInfiniteClipLoop))::UnityEngine::Timeline::__AnimationPlayableAsset__LoopMode mInfiniteClipLoop;

  /// @brief Field m_MatchTargetFields, offset 0xd0, size 0x4
  __declspec(property(get = __get_m_MatchTargetFields, put = __set_m_MatchTargetFields))::UnityEngine::Timeline::MatchTargetFields m_MatchTargetFields;

  /// @brief Field m_Position, offset 0xd4, size 0xc
  __declspec(property(get = __get_m_Position, put = __set_m_Position))::UnityEngine::Vector3 m_Position;

  /// @brief Field m_EulerAngles, offset 0xe0, size 0xc
  __declspec(property(get = __get_m_EulerAngles, put = __set_m_EulerAngles))::UnityEngine::Vector3 m_EulerAngles;

  /// @brief Field m_AvatarMask, offset 0xf0, size 0x8
  __declspec(property(get = __get_m_AvatarMask, put = __set_m_AvatarMask))::UnityEngine::AvatarMask* m_AvatarMask;

  /// @brief Field m_ApplyAvatarMask, offset 0xf8, size 0x1
  __declspec(property(get = __get_m_ApplyAvatarMask, put = __set_m_ApplyAvatarMask)) bool m_ApplyAvatarMask;

  /// @brief Field m_TrackOffset, offset 0xfc, size 0x4
  __declspec(property(get = __get_m_TrackOffset, put = __set_m_TrackOffset))::UnityEngine::Timeline::TrackOffset m_TrackOffset;

  /// @brief Field m_InfiniteClip, offset 0x100, size 0x8
  __declspec(property(get = __get_m_InfiniteClip, put = __set_m_InfiniteClip))::UnityEngine::AnimationClip* m_InfiniteClip;

  /// @brief Field m_OpenClipOffsetRotation, offset 0x108, size 0x10
  __declspec(property(get = __get_m_OpenClipOffsetRotation, put = __set_m_OpenClipOffsetRotation))::UnityEngine::Quaternion m_OpenClipOffsetRotation;

  /// @brief Field m_Rotation, offset 0x118, size 0x10
  __declspec(property(get = __get_m_Rotation, put = __set_m_Rotation))::UnityEngine::Quaternion m_Rotation;

  /// @brief Field m_ApplyOffsets, offset 0x128, size 0x1
  __declspec(property(get = __get_m_ApplyOffsets, put = __set_m_ApplyOffsets)) bool m_ApplyOffsets;

  /// @brief Field s_CachedQueue, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_CachedQueue, put = setStaticF_s_CachedQueue))::System::Collections::Generic::Queue_1<::UnityEngine::Transform*>* s_CachedQueue;

  __declspec(property(get = get_position, put = set_position))::UnityEngine::Vector3 position;

  __declspec(property(get = get_rotation, put = set_rotation))::UnityEngine::Quaternion rotation;

  __declspec(property(get = get_eulerAngles, put = set_eulerAngles))::UnityEngine::Vector3 eulerAngles;

  __declspec(property(get = get_applyOffsets, put = set_applyOffsets)) bool applyOffsets;

  __declspec(property(get = get_trackOffset, put = set_trackOffset))::UnityEngine::Timeline::TrackOffset trackOffset;

  __declspec(property(get = get_matchTargetFields, put = set_matchTargetFields))::UnityEngine::Timeline::MatchTargetFields matchTargetFields;

  __declspec(property(get = get_infiniteClip, put = set_infiniteClip))::UnityEngine::AnimationClip* infiniteClip;

  __declspec(property(get = get_infiniteClipRemoveOffset, put = set_infiniteClipRemoveOffset)) bool infiniteClipRemoveOffset;

  __declspec(property(get = get_avatarMask, put = set_avatarMask))::UnityEngine::AvatarMask* avatarMask;

  __declspec(property(get = get_applyAvatarMask, put = set_applyAvatarMask)) bool applyAvatarMask;

  __declspec(property(get = get_outputs))::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>* outputs;

  __declspec(property(get = get_inClipMode)) bool inClipMode;

  __declspec(property(get = get_infiniteClipOffsetPosition, put = set_infiniteClipOffsetPosition))::UnityEngine::Vector3 infiniteClipOffsetPosition;

  __declspec(property(get = get_infiniteClipOffsetRotation, put = set_infiniteClipOffsetRotation))::UnityEngine::Quaternion infiniteClipOffsetRotation;

  __declspec(property(get = get_infiniteClipOffsetEulerAngles, put = set_infiniteClipOffsetEulerAngles))::UnityEngine::Vector3 infiniteClipOffsetEulerAngles;

  __declspec(property(get = get_infiniteClipApplyFootIK, put = set_infiniteClipApplyFootIK)) bool infiniteClipApplyFootIK;

  __declspec(property(get = get_infiniteClipTimeOffset, put = set_infiniteClipTimeOffset)) double_t infiniteClipTimeOffset;

  __declspec(property(get = get_infiniteClipPreExtrapolation, put = set_infiniteClipPreExtrapolation))::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation infiniteClipPreExtrapolation;

  __declspec(property(get = get_infiniteClipPostExtrapolation, put = set_infiniteClipPostExtrapolation))::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation infiniteClipPostExtrapolation;

  __declspec(property(get = get_infiniteClipLoop, put = set_infiniteClipLoop))::UnityEngine::Timeline::__AnimationPlayableAsset__LoopMode infiniteClipLoop;

  __declspec(property(get = get_openClipOffsetPosition, put = set_openClipOffsetPosition))::UnityEngine::Vector3 openClipOffsetPosition;

  __declspec(property(get = get_openClipOffsetRotation, put = set_openClipOffsetRotation))::UnityEngine::Quaternion openClipOffsetRotation;

  __declspec(property(get = get_openClipOffsetEulerAngles, put = set_openClipOffsetEulerAngles))::UnityEngine::Vector3 openClipOffsetEulerAngles;

  __declspec(property(get = get_openClipPreExtrapolation, put = set_openClipPreExtrapolation))::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation openClipPreExtrapolation;

  __declspec(property(get = get_openClipPostExtrapolation, put = set_openClipPostExtrapolation))::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation openClipPostExtrapolation;

  /// @brief Convert operator to "::UnityEngine::Timeline::ILayerable"
  constexpr operator ::UnityEngine::Timeline::ILayerable*() noexcept;

  constexpr ::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation& __get_m_InfiniteClipPreExtrapolation();

  constexpr ::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation const& __get_m_InfiniteClipPreExtrapolation() const;

  constexpr void __set_m_InfiniteClipPreExtrapolation(::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation value);

  constexpr ::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation& __get_m_InfiniteClipPostExtrapolation();

  constexpr ::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation const& __get_m_InfiniteClipPostExtrapolation() const;

  constexpr void __set_m_InfiniteClipPostExtrapolation(::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation value);

  constexpr ::UnityEngine::Vector3& __get_m_InfiniteClipOffsetPosition();

  constexpr ::UnityEngine::Vector3 const& __get_m_InfiniteClipOffsetPosition() const;

  constexpr void __set_m_InfiniteClipOffsetPosition(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get_m_InfiniteClipOffsetEulerAngles();

  constexpr ::UnityEngine::Vector3 const& __get_m_InfiniteClipOffsetEulerAngles() const;

  constexpr void __set_m_InfiniteClipOffsetEulerAngles(::UnityEngine::Vector3 value);

  constexpr double_t& __get_m_InfiniteClipTimeOffset();

  constexpr double_t const& __get_m_InfiniteClipTimeOffset() const;

  constexpr void __set_m_InfiniteClipTimeOffset(double_t value);

  constexpr bool& __get_m_InfiniteClipRemoveOffset();

  constexpr bool const& __get_m_InfiniteClipRemoveOffset() const;

  constexpr void __set_m_InfiniteClipRemoveOffset(bool value);

  constexpr bool& __get_m_InfiniteClipApplyFootIK();

  constexpr bool const& __get_m_InfiniteClipApplyFootIK() const;

  constexpr void __set_m_InfiniteClipApplyFootIK(bool value);

  constexpr ::UnityEngine::Timeline::__AnimationPlayableAsset__LoopMode& __get_mInfiniteClipLoop();

  constexpr ::UnityEngine::Timeline::__AnimationPlayableAsset__LoopMode const& __get_mInfiniteClipLoop() const;

  constexpr void __set_mInfiniteClipLoop(::UnityEngine::Timeline::__AnimationPlayableAsset__LoopMode value);

  constexpr ::UnityEngine::Timeline::MatchTargetFields& __get_m_MatchTargetFields();

  constexpr ::UnityEngine::Timeline::MatchTargetFields const& __get_m_MatchTargetFields() const;

  constexpr void __set_m_MatchTargetFields(::UnityEngine::Timeline::MatchTargetFields value);

  constexpr ::UnityEngine::Vector3& __get_m_Position();

  constexpr ::UnityEngine::Vector3 const& __get_m_Position() const;

  constexpr void __set_m_Position(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get_m_EulerAngles();

  constexpr ::UnityEngine::Vector3 const& __get_m_EulerAngles() const;

  constexpr void __set_m_EulerAngles(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::AvatarMask*& __get_m_AvatarMask();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AvatarMask*> const& __get_m_AvatarMask() const;

  constexpr void __set_m_AvatarMask(::UnityEngine::AvatarMask* value);

  constexpr bool& __get_m_ApplyAvatarMask();

  constexpr bool const& __get_m_ApplyAvatarMask() const;

  constexpr void __set_m_ApplyAvatarMask(bool value);

  constexpr ::UnityEngine::Timeline::TrackOffset& __get_m_TrackOffset();

  constexpr ::UnityEngine::Timeline::TrackOffset const& __get_m_TrackOffset() const;

  constexpr void __set_m_TrackOffset(::UnityEngine::Timeline::TrackOffset value);

  constexpr ::UnityEngine::AnimationClip*& __get_m_InfiniteClip();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationClip*> const& __get_m_InfiniteClip() const;

  constexpr void __set_m_InfiniteClip(::UnityEngine::AnimationClip* value);

  constexpr ::UnityEngine::Quaternion& __get_m_OpenClipOffsetRotation();

  constexpr ::UnityEngine::Quaternion const& __get_m_OpenClipOffsetRotation() const;

  constexpr void __set_m_OpenClipOffsetRotation(::UnityEngine::Quaternion value);

  constexpr ::UnityEngine::Quaternion& __get_m_Rotation();

  constexpr ::UnityEngine::Quaternion const& __get_m_Rotation() const;

  constexpr void __set_m_Rotation(::UnityEngine::Quaternion value);

  constexpr bool& __get_m_ApplyOffsets();

  constexpr bool const& __get_m_ApplyOffsets() const;

  constexpr void __set_m_ApplyOffsets(bool value);

  static inline void setStaticF_s_CachedQueue(::System::Collections::Generic::Queue_1<::UnityEngine::Transform*>* value);

  static inline ::System::Collections::Generic::Queue_1<::UnityEngine::Transform*>* getStaticF_s_CachedQueue();

  /// @brief Method get_position addr 0x2c50da4 size 0xc virtual false final false
  inline ::UnityEngine::Vector3 get_position();

  /// @brief Method set_position addr 0x2c50db0 size 0xc virtual false final false
  inline void set_position(::UnityEngine::Vector3 value);

  /// @brief Method get_rotation addr 0x2c50dbc size 0x24 virtual false final false
  inline ::UnityEngine::Quaternion get_rotation();

  /// @brief Method set_rotation addr 0x2c50de0 size 0x3c virtual false final false
  inline void set_rotation(::UnityEngine::Quaternion value);

  /// @brief Method get_eulerAngles addr 0x2c50e1c size 0xc virtual false final false
  inline ::UnityEngine::Vector3 get_eulerAngles();

  /// @brief Method set_eulerAngles addr 0x2c50e28 size 0xc virtual false final false
  inline void set_eulerAngles(::UnityEngine::Vector3 value);

  /// @brief Method get_applyOffsets addr 0x2c50e34 size 0x8 virtual false final false
  inline bool get_applyOffsets();

  /// @brief Method set_applyOffsets addr 0x2c50e3c size 0x4 virtual false final false
  inline void set_applyOffsets(bool value);

  /// @brief Method get_trackOffset addr 0x2c50e40 size 0x8 virtual false final false
  inline ::UnityEngine::Timeline::TrackOffset get_trackOffset();

  /// @brief Method set_trackOffset addr 0x2c50e48 size 0x8 virtual false final false
  inline void set_trackOffset(::UnityEngine::Timeline::TrackOffset value);

  /// @brief Method get_matchTargetFields addr 0x2c50e50 size 0x8 virtual false final false
  inline ::UnityEngine::Timeline::MatchTargetFields get_matchTargetFields();

  /// @brief Method set_matchTargetFields addr 0x2c50e58 size 0x70 virtual false final false
  inline void set_matchTargetFields(::UnityEngine::Timeline::MatchTargetFields value);

  /// @brief Method get_infiniteClip addr 0x2c50ec8 size 0x8 virtual false final false
  inline ::UnityEngine::AnimationClip* get_infiniteClip();

  /// @brief Method set_infiniteClip addr 0x2c50ed0 size 0x8 virtual false final false
  inline void set_infiniteClip(::UnityEngine::AnimationClip* value);

  /// @brief Method get_infiniteClipRemoveOffset addr 0x2c50ed8 size 0x8 virtual false final false
  inline bool get_infiniteClipRemoveOffset();

  /// @brief Method set_infiniteClipRemoveOffset addr 0x2c50ee0 size 0xc virtual false final false
  inline void set_infiniteClipRemoveOffset(bool value);

  /// @brief Method get_avatarMask addr 0x2c50eec size 0x8 virtual false final false
  inline ::UnityEngine::AvatarMask* get_avatarMask();

  /// @brief Method set_avatarMask addr 0x2c50ef4 size 0x8 virtual false final false
  inline void set_avatarMask(::UnityEngine::AvatarMask* value);

  /// @brief Method get_applyAvatarMask addr 0x2c50efc size 0x8 virtual false final false
  inline bool get_applyAvatarMask();

  /// @brief Method set_applyAvatarMask addr 0x2c50f04 size 0xc virtual false final false
  inline void set_applyAvatarMask(bool value);

  /// @brief Method CanCompileClips addr 0x2c50f10 size 0xbc virtual true final false
  inline bool CanCompileClips();

  /// @brief Method get_outputs addr 0x2c50fcc size 0x78 virtual true final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>* get_outputs();

  /// @brief Method get_inClipMode addr 0x2c51078 size 0x34 virtual false final false
  inline bool get_inClipMode();

  /// @brief Method get_infiniteClipOffsetPosition addr 0x2c5115c size 0xc virtual false final false
  inline ::UnityEngine::Vector3 get_infiniteClipOffsetPosition();

  /// @brief Method set_infiniteClipOffsetPosition addr 0x2c51168 size 0xc virtual false final false
  inline void set_infiniteClipOffsetPosition(::UnityEngine::Vector3 value);

  /// @brief Method get_infiniteClipOffsetRotation addr 0x2c51174 size 0x24 virtual false final false
  inline ::UnityEngine::Quaternion get_infiniteClipOffsetRotation();

  /// @brief Method set_infiniteClipOffsetRotation addr 0x2c51198 size 0x3c virtual false final false
  inline void set_infiniteClipOffsetRotation(::UnityEngine::Quaternion value);

  /// @brief Method get_infiniteClipOffsetEulerAngles addr 0x2c511d4 size 0xc virtual false final false
  inline ::UnityEngine::Vector3 get_infiniteClipOffsetEulerAngles();

  /// @brief Method set_infiniteClipOffsetEulerAngles addr 0x2c511e0 size 0xc virtual false final false
  inline void set_infiniteClipOffsetEulerAngles(::UnityEngine::Vector3 value);

  /// @brief Method get_infiniteClipApplyFootIK addr 0x2c511ec size 0x8 virtual false final false
  inline bool get_infiniteClipApplyFootIK();

  /// @brief Method set_infiniteClipApplyFootIK addr 0x2c511f4 size 0xc virtual false final false
  inline void set_infiniteClipApplyFootIK(bool value);

  /// @brief Method get_infiniteClipTimeOffset addr 0x2c51200 size 0x8 virtual false final false
  inline double_t get_infiniteClipTimeOffset();

  /// @brief Method set_infiniteClipTimeOffset addr 0x2c51208 size 0x8 virtual false final false
  inline void set_infiniteClipTimeOffset(double_t value);

  /// @brief Method get_infiniteClipPreExtrapolation addr 0x2c51210 size 0x8 virtual false final false
  inline ::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation get_infiniteClipPreExtrapolation();

  /// @brief Method set_infiniteClipPreExtrapolation addr 0x2c51218 size 0x8 virtual false final false
  inline void set_infiniteClipPreExtrapolation(::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation value);

  /// @brief Method get_infiniteClipPostExtrapolation addr 0x2c51220 size 0x8 virtual false final false
  inline ::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation get_infiniteClipPostExtrapolation();

  /// @brief Method set_infiniteClipPostExtrapolation addr 0x2c51228 size 0x8 virtual false final false
  inline void set_infiniteClipPostExtrapolation(::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation value);

  /// @brief Method get_infiniteClipLoop addr 0x2c51230 size 0x8 virtual false final false
  inline ::UnityEngine::Timeline::__AnimationPlayableAsset__LoopMode get_infiniteClipLoop();

  /// @brief Method set_infiniteClipLoop addr 0x2c51238 size 0x8 virtual false final false
  inline void set_infiniteClipLoop(::UnityEngine::Timeline::__AnimationPlayableAsset__LoopMode value);

  /// @brief Method ResetOffsets addr 0x2c51240 size 0x6c virtual false final false
  inline void ResetOffsets();

  /// @brief Method CreateClip addr 0x2c512b0 size 0xa8 virtual false final false
  inline ::UnityEngine::Timeline::TimelineClip* CreateClip(::UnityEngine::AnimationClip* clip);

  /// @brief Method CreateInfiniteClip addr 0x2c515ac size 0x104 virtual false final false
  inline void CreateInfiniteClip(::StringW infiniteClipName);

  /// @brief Method CreateRecordableClip addr 0x2c516b0 size 0x140 virtual false final false
  inline ::UnityEngine::Timeline::TimelineClip* CreateRecordableClip(::StringW animClipName);

  /// @brief Method OnCreateClip addr 0x2c519a0 size 0x40 virtual true final false
  inline void OnCreateClip(::UnityEngine::Timeline::TimelineClip* clip);

  /// @brief Method CalculateItemsHash addr 0x2c51b68 size 0x74 virtual true final false
  inline int32_t CalculateItemsHash();

  /// @brief Method UpdateClipOffsets addr 0x2c512ac size 0x4 virtual false final false
  inline void UpdateClipOffsets();

  /// @brief Method CompileTrackPlayable addr 0x2c51d50 size 0x424 virtual false final false
  inline ::UnityEngine::Playables::Playable CompileTrackPlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Timeline::AnimationTrack* track, ::UnityEngine::GameObject* go,
                                                                 ::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>* tree,
                                                                 ::UnityEngine::Timeline::AppliedOffsetMode mode);

  /// @brief Method UnityEngine.Timeline.ILayerable.CreateLayerMixer addr 0x2c5276c size 0x50 virtual true final true
  inline ::UnityEngine::Playables::Playable UnityEngine_Timeline_ILayerable_CreateLayerMixer(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go, int32_t inputCount);

  /// @brief Method CreateMixerPlayableGraph addr 0x2c527bc size 0x99c virtual true final false
  inline ::UnityEngine::Playables::Playable CreateMixerPlayableGraph(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go,
                                                                     ::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>* tree);

  /// @brief Method GetDefaultBlendCount addr 0x2c5362c size 0x8 virtual false final false
  inline int32_t GetDefaultBlendCount();

  /// @brief Method AttachDefaultBlend addr 0x2c53b30 size 0x4 virtual false final false
  inline void AttachDefaultBlend(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Animations::AnimationLayerMixerPlayable mixer, bool requireOffset);

  /// @brief Method AttachOffsetPlayable addr 0x2c53b4c size 0x158 virtual false final false
  inline ::UnityEngine::Playables::Playable AttachOffsetPlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Playables::Playable playable, ::UnityEngine::Vector3 pos,
                                                                 ::UnityEngine::Quaternion rot);

  /// @brief Method RequiresMotionXPlayable addr 0x2c53a20 size 0x110 virtual false final false
  inline bool RequiresMotionXPlayable(::UnityEngine::Timeline::AppliedOffsetMode mode, ::UnityEngine::GameObject* gameObject);

  /// @brief Method UsesAbsoluteMotion addr 0x2c53b34 size 0x18 virtual false final false
  static inline bool UsesAbsoluteMotion(::UnityEngine::Timeline::AppliedOffsetMode mode);

  /// @brief Method HasController addr 0x2c53e88 size 0x120 virtual false final false
  inline bool HasController(::UnityEngine::GameObject* gameObject);

  /// @brief Method GetBinding addr 0x2c53ca4 size 0x1e4 virtual false final false
  inline ::UnityEngine::Animator* GetBinding(::UnityEngine::Playables::PlayableDirector* director);

  /// @brief Method CreateGroupMixer addr 0x2c53634 size 0x70 virtual false final false
  static inline ::UnityEngine::Animations::AnimationLayerMixerPlayable CreateGroupMixer(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go, int32_t inputCount);

  /// @brief Method CreateInfiniteTrackPlayable addr 0x2c536a4 size 0x37c virtual false final false
  inline ::UnityEngine::Playables::Playable CreateInfiniteTrackPlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go,
                                                                        ::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>* tree,
                                                                        ::UnityEngine::Timeline::AppliedOffsetMode mode);

  /// @brief Method ApplyTrackOffset addr 0x2c525b4 size 0x1b8 virtual false final false
  inline ::UnityEngine::Playables::Playable ApplyTrackOffset(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Playables::Playable root, ::UnityEngine::GameObject* go,
                                                             ::UnityEngine::Timeline::AppliedOffsetMode mode);

  /// @brief Method GetEvaluationTime addr 0x2c53fd4 size 0x9c virtual true final false
  inline void GetEvaluationTime(ByRef<double_t> outStart, ByRef<double_t> outDuration);

  /// @brief Method GetSequenceTime addr 0x2c542cc size 0xfc virtual true final false
  inline void GetSequenceTime(ByRef<double_t> outStart, ByRef<double_t> outDuration);

  /// @brief Method AssignAnimationClip addr 0x2c51358 size 0x254 virtual false final false
  inline void AssignAnimationClip(::UnityEngine::Timeline::TimelineClip* clip, ::UnityEngine::AnimationClip* animClip);

  /// @brief Method GatherProperties addr 0x2c5453c size 0x4 virtual true final false
  inline void GatherProperties(::UnityEngine::Playables::PlayableDirector* director, ::UnityEngine::Timeline::IPropertyCollector* driver);

  /// @brief Method GetAnimationClips addr 0x2c54540 size 0x564 virtual false final false
  inline void GetAnimationClips(::System::Collections::Generic::List_1<::UnityEngine::AnimationClip*>* animClips);

  /// @brief Method GetOffsetMode addr 0x2c535bc size 0x70 virtual false final false
  inline ::UnityEngine::Timeline::AppliedOffsetMode GetOffsetMode(::UnityEngine::GameObject* go, bool animatesRootTransform);

  /// @brief Method IsRootTransformDisabledByMask addr 0x2c53340 size 0x264 virtual false final false
  inline bool IsRootTransformDisabledByMask(::UnityEngine::GameObject* gameObject, ::UnityEngine::Transform* genericRootNode);

  /// @brief Method GetGenericRootNode addr 0x2c53158 size 0x1e8 virtual false final false
  inline ::UnityEngine::Transform* GetGenericRootNode(::UnityEngine::GameObject* gameObject);

  /// @brief Method AnimatesRootTransform addr 0x2c521d0 size 0x3e4 virtual false final false
  inline bool AnimatesRootTransform();

  /// @brief Method FindInHierarchyBreadthFirst addr 0x2c54aa4 size 0x1d4 virtual false final false
  static inline ::UnityEngine::Transform* FindInHierarchyBreadthFirst(::UnityEngine::Transform* t, ::StringW name);

  /// @brief Method get_openClipOffsetPosition addr 0x2c54c7c size 0xc virtual false final false
  inline ::UnityEngine::Vector3 get_openClipOffsetPosition();

  /// @brief Method set_openClipOffsetPosition addr 0x2c54c88 size 0xc virtual false final false
  inline void set_openClipOffsetPosition(::UnityEngine::Vector3 value);

  /// @brief Method get_openClipOffsetRotation addr 0x2c54c94 size 0x24 virtual false final false
  inline ::UnityEngine::Quaternion get_openClipOffsetRotation();

  /// @brief Method set_openClipOffsetRotation addr 0x2c54cb8 size 0x4 virtual false final false
  inline void set_openClipOffsetRotation(::UnityEngine::Quaternion value);

  /// @brief Method get_openClipOffsetEulerAngles addr 0x2c54cbc size 0xc virtual false final false
  inline ::UnityEngine::Vector3 get_openClipOffsetEulerAngles();

  /// @brief Method set_openClipOffsetEulerAngles addr 0x2c54cc8 size 0xc virtual false final false
  inline void set_openClipOffsetEulerAngles(::UnityEngine::Vector3 value);

  /// @brief Method get_openClipPreExtrapolation addr 0x2c54cd4 size 0x8 virtual false final false
  inline ::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation get_openClipPreExtrapolation();

  /// @brief Method set_openClipPreExtrapolation addr 0x2c54cdc size 0x8 virtual false final false
  inline void set_openClipPreExtrapolation(::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation value);

  /// @brief Method get_openClipPostExtrapolation addr 0x2c54ce4 size 0x8 virtual false final false
  inline ::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation get_openClipPostExtrapolation();

  /// @brief Method set_openClipPostExtrapolation addr 0x2c54cec size 0x8 virtual false final false
  inline void set_openClipPostExtrapolation(::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation value);

  /// @brief Method OnUpgradeFromVersion addr 0x2c54cf4 size 0x50 virtual true final false
  inline void OnUpgradeFromVersion(int32_t oldVersion);

  static inline ::UnityEngine::Timeline::AnimationTrack* New_ctor();

  /// @brief Method .ctor addr 0x2c54e84 size 0x190 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "AnimationTrack", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AnimationTrack(AnimationTrack&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AnimationTrack", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AnimationTrack(AnimationTrack const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AnimationTrack();

public:
  /// @brief Field m_InfiniteClipPreExtrapolation, offset: 0xa0, size: 0x4, def value: None
  ::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation ___m_InfiniteClipPreExtrapolation;

  /// @brief Field m_InfiniteClipPostExtrapolation, offset: 0xa4, size: 0x4, def value: None
  ::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation ___m_InfiniteClipPostExtrapolation;

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
  ::UnityEngine::Timeline::__AnimationPlayableAsset__LoopMode ___mInfiniteClipLoop;

  /// @brief Field m_MatchTargetFields, offset: 0xd0, size: 0x4, def value: None
  ::UnityEngine::Timeline::MatchTargetFields ___m_MatchTargetFields;

  /// @brief Field m_Position, offset: 0xd4, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_Position;

  /// @brief Field m_EulerAngles, offset: 0xe0, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_EulerAngles;

  /// @brief Field m_AvatarMask, offset: 0xf0, size: 0x8, def value: None
  ::UnityEngine::AvatarMask* ___m_AvatarMask;

  /// @brief Field m_ApplyAvatarMask, offset: 0xf8, size: 0x1, def value: None
  bool ___m_ApplyAvatarMask;

  /// @brief Field m_TrackOffset, offset: 0xfc, size: 0x4, def value: None
  ::UnityEngine::Timeline::TrackOffset ___m_TrackOffset;

  /// @brief Field m_InfiniteClip, offset: 0x100, size: 0x8, def value: None
  ::UnityEngine::AnimationClip* ___m_InfiniteClip;

  /// @brief Field m_OpenClipOffsetRotation, offset: 0x108, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___m_OpenClipOffsetRotation;

  /// @brief Field m_Rotation, offset: 0x118, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___m_Rotation;

  /// @brief Field m_ApplyOffsets, offset: 0x128, size: 0x1, def value: None
  bool ___m_ApplyOffsets;

  /// @brief Field k_DefaultInfiniteClipName offset 0xffffffff size 0x8
  static constexpr ::ConstString k_DefaultInfiniteClipName{ u"Recorded" };

  /// @brief Field k_DefaultRecordableClipName offset 0xffffffff size 0x8
  static constexpr ::ConstString k_DefaultRecordableClipName{ u"Recorded" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::AnimationTrack, 0x130>, "Size mismatch!");

} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::AnimationTrack);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::AnimationTrack*, "UnityEngine.Timeline", "AnimationTrack");
NEED_NO_BOX(::UnityEngine::Timeline::__AnimationTrack__AnimationTrackUpgrade);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::__AnimationTrack__AnimationTrackUpgrade*, "UnityEngine.Timeline", "AnimationTrack/AnimationTrackUpgrade");
NEED_NO_BOX(::UnityEngine::Timeline::__AnimationTrack___get_outputs_d__49);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::__AnimationTrack___get_outputs_d__49*, "UnityEngine.Timeline", "AnimationTrack/<get_outputs>d__49");
