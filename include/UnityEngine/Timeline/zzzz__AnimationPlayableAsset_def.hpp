#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/AnimationPlayableAsset.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableAsset_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBinding_def.hpp"
#include "UnityEngine/Timeline/zzzz__AppliedOffsetMode_def.hpp"
#include "UnityEngine/Timeline/zzzz__IPropertyPreview_def.hpp"
#include "UnityEngine/Timeline/zzzz__ITimelineClipAsset_def.hpp"
#include "UnityEngine/Timeline/zzzz__MatchTargetFields_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AnimationPlayableAsset)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
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
class AnimationPlayableAsset_AnimationPlayableAssetUpgrade;
}
namespace UnityEngine::Timeline {
struct AnimationPlayableAsset_LoopMode;
}
namespace UnityEngine::Timeline {
struct AnimationPlayableAsset_Versions;
}
namespace UnityEngine::Timeline {
class AnimationPlayableAsset__get_outputs_d__45;
}
namespace UnityEngine::Timeline {
struct AppliedOffsetMode;
}
namespace UnityEngine::Timeline {
struct ClipCaps;
}
namespace UnityEngine::Timeline {
class IPropertyCollector;
}
namespace UnityEngine::Timeline {
struct MatchTargetFields;
}
namespace UnityEngine {
class AnimationClip;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::Timeline {
struct AnimationPlayableAsset_LoopMode;
}
namespace UnityEngine::Timeline {
struct AnimationPlayableAsset_Versions;
}
namespace UnityEngine::Timeline {
class AnimationPlayableAsset;
}
namespace UnityEngine::Timeline {
class AnimationPlayableAsset_AnimationPlayableAssetUpgrade;
}
namespace UnityEngine::Timeline {
class AnimationPlayableAsset__get_outputs_d__45;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Timeline::AnimationPlayableAsset_LoopMode);
MARK_VAL_T(::UnityEngine::Timeline::AnimationPlayableAsset_Versions);
MARK_REF_PTR_T(::UnityEngine::Timeline::AnimationPlayableAsset);
MARK_REF_PTR_T(::UnityEngine::Timeline::AnimationPlayableAsset_AnimationPlayableAssetUpgrade);
MARK_REF_PTR_T(::UnityEngine::Timeline::AnimationPlayableAsset__get_outputs_d__45);
// Dependencies
namespace UnityEngine::Timeline {
// Is value type: true
// CS Name: UnityEngine.Timeline.AnimationPlayableAsset/LoopMode
struct CORDL_TYPE AnimationPlayableAsset_LoopMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AnimationPlayableAsset_LoopMode_Unwrapped
  enum struct __AnimationPlayableAsset_LoopMode_Unwrapped : int32_t {
    __E_UseSourceAsset = static_cast<int32_t>(0x0),
    __E_On = static_cast<int32_t>(0x1),
    __E_Off = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AnimationPlayableAsset_LoopMode_Unwrapped() const noexcept {
    return static_cast<__AnimationPlayableAsset_LoopMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AnimationPlayableAsset_LoopMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AnimationPlayableAsset_LoopMode(int32_t value__) noexcept;

  /// @brief Field Off value: I32(2)
  static ::UnityEngine::Timeline::AnimationPlayableAsset_LoopMode const Off;

  /// @brief Field On value: I32(1)
  static ::UnityEngine::Timeline::AnimationPlayableAsset_LoopMode const On;

  /// @brief Field UseSourceAsset value: I32(0)
  static ::UnityEngine::Timeline::AnimationPlayableAsset_LoopMode const UseSourceAsset;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15793 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Timeline::AnimationPlayableAsset_LoopMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::AnimationPlayableAsset_LoopMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Timeline
// Dependencies
namespace UnityEngine::Timeline {
// Is value type: true
// CS Name: UnityEngine.Timeline.AnimationPlayableAsset/Versions
struct CORDL_TYPE AnimationPlayableAsset_Versions {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AnimationPlayableAsset_Versions_Unwrapped
  enum struct __AnimationPlayableAsset_Versions_Unwrapped : int32_t {
    __E_Initial = static_cast<int32_t>(0x0),
    __E_RotationAsEuler = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AnimationPlayableAsset_Versions_Unwrapped() const noexcept {
    return static_cast<__AnimationPlayableAsset_Versions_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AnimationPlayableAsset_Versions();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AnimationPlayableAsset_Versions(int32_t value__) noexcept;

  /// @brief Field Initial value: I32(0)
  static ::UnityEngine::Timeline::AnimationPlayableAsset_Versions const Initial;

  /// @brief Field RotationAsEuler value: I32(1)
  static ::UnityEngine::Timeline::AnimationPlayableAsset_Versions const RotationAsEuler;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15794 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Timeline::AnimationPlayableAsset_Versions, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::AnimationPlayableAsset_Versions, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Timeline
// Dependencies System.Object
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: UnityEngine.Timeline.AnimationPlayableAsset/AnimationPlayableAssetUpgrade
class CORDL_TYPE AnimationPlayableAsset_AnimationPlayableAssetUpgrade : public ::System::Object {
public:
  // Declarations
  /// @brief Method ConvertRotationToEuler, addr 0x481232c, size 0x4c, virtual false, abstract: false, final false
  static inline void ConvertRotationToEuler(::UnityEngine::Timeline::AnimationPlayableAsset* asset);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AnimationPlayableAsset_AnimationPlayableAssetUpgrade();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AnimationPlayableAsset_AnimationPlayableAssetUpgrade", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AnimationPlayableAsset_AnimationPlayableAssetUpgrade(AnimationPlayableAsset_AnimationPlayableAssetUpgrade&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AnimationPlayableAsset_AnimationPlayableAssetUpgrade", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AnimationPlayableAsset_AnimationPlayableAssetUpgrade(AnimationPlayableAsset_AnimationPlayableAssetUpgrade const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15795 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::AnimationPlayableAsset_AnimationPlayableAssetUpgrade, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Timeline
// Dependencies System.Collections.Generic.IEnumerable`1<T>, System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerable, System.Collections.IEnumerator, System.IDisposable,
// System.Object, UnityEngine.Playables.PlayableBinding
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: UnityEngine.Timeline.AnimationPlayableAsset/<get_outputs>d__45
class CORDL_TYPE AnimationPlayableAsset__get_outputs_d__45 : public ::System::Object {
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
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::UnityEngine::Timeline::AnimationPlayableAsset> __4__this;

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

  /// @brief Method MoveNext, addr 0x48124cc, size 0x90, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::UnityEngine::Timeline::AnimationPlayableAsset__get_outputs_d__45* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.Playables.PlayableBinding>.GetEnumerator, addr 0x4812604, size 0x9c, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>* System_Collections_Generic_IEnumerable_UnityEngine_Playables_PlayableBinding__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.Playables.PlayableBinding>.get_Current, addr 0x481255c, size 0x10, virtual true, abstract: false, final true
  inline ::UnityEngine::Playables::PlayableBinding System_Collections_Generic_IEnumerator_UnityEngine_Playables_PlayableBinding__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x48126a0, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x481256c, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x48125a4, size 0x60, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x48124c8, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::UnityEngine::Playables::PlayableBinding const& __cordl_internal_get___2__current() const;

  constexpr ::UnityEngine::Playables::PlayableBinding& __cordl_internal_get___2__current();

  constexpr ::UnityW<::UnityEngine::Timeline::AnimationPlayableAsset> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::UnityEngine::Timeline::AnimationPlayableAsset>& __cordl_internal_get___4__this();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::UnityEngine::Playables::PlayableBinding value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::UnityEngine::Timeline::AnimationPlayableAsset> value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  /// @brief Method .ctor, addr 0x4811acc, size 0x34, virtual false, abstract: false, final false
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
  constexpr AnimationPlayableAsset__get_outputs_d__45();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AnimationPlayableAsset__get_outputs_d__45", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AnimationPlayableAsset__get_outputs_d__45(AnimationPlayableAsset__get_outputs_d__45&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AnimationPlayableAsset__get_outputs_d__45", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AnimationPlayableAsset__get_outputs_d__45(AnimationPlayableAsset__get_outputs_d__45 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15796 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x20, def value: None
  ::UnityEngine::Playables::PlayableBinding _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x38, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field <>4__this, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Timeline::AnimationPlayableAsset> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Timeline::AnimationPlayableAsset__get_outputs_d__45, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::AnimationPlayableAsset__get_outputs_d__45, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::AnimationPlayableAsset__get_outputs_d__45, _____l__initialThreadId) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::AnimationPlayableAsset__get_outputs_d__45, _____4__this) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::AnimationPlayableAsset__get_outputs_d__45, 0x48>, "Size mismatch!");

} // namespace UnityEngine::Timeline
// Dependencies UnityEngine.ISerializationCallbackReceiver, UnityEngine.Playables.PlayableAsset, UnityEngine.Quaternion, UnityEngine.Timeline.AnimationPlayableAsset::LoopMode,
// UnityEngine.Timeline.AppliedOffsetMode, UnityEngine.Timeline.IPropertyPreview, UnityEngine.Timeline.ITimelineClipAsset, UnityEngine.Timeline.MatchTargetFields, UnityEngine.Vector3
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: UnityEngine.Timeline.AnimationPlayableAsset
class CORDL_TYPE AnimationPlayableAsset : public ::UnityEngine::Playables::PlayableAsset {
public:
  // Declarations
  using AnimationPlayableAssetUpgrade = ::UnityEngine::Timeline::AnimationPlayableAsset_AnimationPlayableAssetUpgrade;

  using LoopMode = ::UnityEngine::Timeline::AnimationPlayableAsset_LoopMode;

  using Versions = ::UnityEngine::Timeline::AnimationPlayableAsset_Versions;

  using _get_outputs_d__45 = ::UnityEngine::Timeline::AnimationPlayableAsset__get_outputs_d__45;

  /// @brief Field <appliedOffsetMode>k__BackingField, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__appliedOffsetMode_k__BackingField,
                      put = __cordl_internal_set__appliedOffsetMode_k__BackingField)) ::UnityEngine::Timeline::AppliedOffsetMode _appliedOffsetMode_k__BackingField;

  __declspec(property(get = get_appliedOffsetMode, put = set_appliedOffsetMode)) ::UnityEngine::Timeline::AppliedOffsetMode appliedOffsetMode;

  __declspec(property(get = get_applyFootIK, put = set_applyFootIK)) bool applyFootIK;

  __declspec(property(get = get_clip, put = set_clip)) ::UnityW<::UnityEngine::AnimationClip> clip;

  __declspec(property(get = get_clipCaps)) ::UnityEngine::Timeline::ClipCaps clipCaps;

  __declspec(property(get = get_duration)) double_t duration;

  __declspec(property(get = get_eulerAngles, put = set_eulerAngles)) ::UnityEngine::Vector3 eulerAngles;

  __declspec(property(get = get_hasRootTransforms)) bool hasRootTransforms;

  /// @brief Field k_LatestVersion, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_k_LatestVersion, put = setStaticF_k_LatestVersion)) int32_t k_LatestVersion;

  __declspec(property(get = get_loop, put = set_loop)) ::UnityEngine::Timeline::AnimationPlayableAsset_LoopMode loop;

  /// @brief Field m_ApplyFootIK, offset 0x41, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ApplyFootIK, put = __cordl_internal_set_m_ApplyFootIK)) bool m_ApplyFootIK;

  /// @brief Field m_Clip, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Clip, put = __cordl_internal_set_m_Clip)) ::UnityW<::UnityEngine::AnimationClip> m_Clip;

  /// @brief Field m_EulerAngles, offset 0x2c, size 0xc
  __declspec(property(get = __cordl_internal_get_m_EulerAngles, put = __cordl_internal_set_m_EulerAngles)) ::UnityEngine::Vector3 m_EulerAngles;

  /// @brief Field m_Loop, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Loop, put = __cordl_internal_set_m_Loop)) ::UnityEngine::Timeline::AnimationPlayableAsset_LoopMode m_Loop;

  /// @brief Field m_MatchTargetFields, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MatchTargetFields, put = __cordl_internal_set_m_MatchTargetFields)) ::UnityEngine::Timeline::MatchTargetFields m_MatchTargetFields;

  /// @brief Field m_Position, offset 0x20, size 0xc
  __declspec(property(get = __cordl_internal_get_m_Position, put = __cordl_internal_set_m_Position)) ::UnityEngine::Vector3 m_Position;

  /// @brief Field m_RemoveStartOffset, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_m_RemoveStartOffset, put = __cordl_internal_set_m_RemoveStartOffset)) bool m_RemoveStartOffset;

  /// @brief Field m_Rotation, offset 0x50, size 0x10
  __declspec(property(get = __cordl_internal_get_m_Rotation, put = __cordl_internal_set_m_Rotation)) ::UnityEngine::Quaternion m_Rotation;

  /// @brief Field m_UseTrackMatchFields, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_m_UseTrackMatchFields, put = __cordl_internal_set_m_UseTrackMatchFields)) bool m_UseTrackMatchFields;

  /// @brief Field m_Version, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Version, put = __cordl_internal_set_m_Version)) int32_t m_Version;

  __declspec(property(get = get_matchTargetFields, put = set_matchTargetFields)) ::UnityEngine::Timeline::MatchTargetFields matchTargetFields;

  __declspec(property(get = get_outputs)) ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>* outputs;

  __declspec(property(get = get_position, put = set_position)) ::UnityEngine::Vector3 position;

  __declspec(property(get = get_removeStartOffset, put = set_removeStartOffset)) bool removeStartOffset;

  __declspec(property(get = get_rotation, put = set_rotation)) ::UnityEngine::Quaternion rotation;

  __declspec(property(get = get_useTrackMatchFields, put = set_useTrackMatchFields)) bool useTrackMatchFields;

  /// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

  /// @brief Convert operator to "::UnityEngine::Timeline::IPropertyPreview"
  constexpr operator ::UnityEngine::Timeline::IPropertyPreview*() noexcept;

  /// @brief Convert operator to "::UnityEngine::Timeline::ITimelineClipAsset"
  constexpr operator ::UnityEngine::Timeline::ITimelineClipAsset*() noexcept;

  /// @brief Method CreatePlayable, addr 0x4811bd8, size 0x3c4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::AnimationClip* clip, ::UnityEngine::Vector3 positionOffset,
                                                                  ::UnityEngine::Vector3 eulerOffset, bool removeStartOffset, ::UnityEngine::Timeline::AppliedOffsetMode mode, bool applyFootIK,
                                                                  ::UnityEngine::Timeline::AnimationPlayableAsset_LoopMode loop);

  /// @brief Method CreatePlayable, addr 0x4811b00, size 0xd8, virtual true, abstract: false, final false
  inline ::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go);

  /// @brief Method GatherProperties, addr 0x481218c, size 0xac, virtual true, abstract: false, final true
  inline void GatherProperties(::UnityEngine::Playables::PlayableDirector* director, ::UnityEngine::Timeline::IPropertyCollector* driver);

  /// @brief Method HasRootTransforms, addr 0x4811834, size 0xcc, virtual false, abstract: false, final false
  static inline bool HasRootTransforms(::UnityEngine::AnimationClip* clip);

  static inline ::UnityEngine::Timeline::AnimationPlayableAsset* New_ctor();

  /// @brief Method OnUpgradeFromVersion, addr 0x481231c, size 0x10, virtual false, abstract: false, final false
  inline void OnUpgradeFromVersion(int32_t oldVersion);

  /// @brief Method ResetOffsets, addr 0x4812120, size 0x6c, virtual false, abstract: false, final false
  inline void ResetOffsets();

  /// @brief Method ShouldApplyOffset, addr 0x4811fc4, size 0x74, virtual false, abstract: false, final false
  static inline bool ShouldApplyOffset(::UnityEngine::Timeline::AppliedOffsetMode mode, ::UnityEngine::AnimationClip* clip);

  /// @brief Method ShouldApplyScaleRemove, addr 0x4811f9c, size 0x28, virtual false, abstract: false, final false
  static inline bool ShouldApplyScaleRemove(::UnityEngine::Timeline::AppliedOffsetMode mode);

  /// @brief Method UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize, addr 0x4812298, size 0x84, virtual true, abstract: false, final true
  inline void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize();

  /// @brief Method UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize, addr 0x4812238, size 0x60, virtual true, abstract: false, final true
  inline void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize();

  constexpr ::UnityEngine::Timeline::AppliedOffsetMode const& __cordl_internal_get__appliedOffsetMode_k__BackingField() const;

  constexpr ::UnityEngine::Timeline::AppliedOffsetMode& __cordl_internal_get__appliedOffsetMode_k__BackingField();

  constexpr bool const& __cordl_internal_get_m_ApplyFootIK() const;

  constexpr bool& __cordl_internal_get_m_ApplyFootIK();

  constexpr ::UnityW<::UnityEngine::AnimationClip> const& __cordl_internal_get_m_Clip() const;

  constexpr ::UnityW<::UnityEngine::AnimationClip>& __cordl_internal_get_m_Clip();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_EulerAngles() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_EulerAngles();

  constexpr ::UnityEngine::Timeline::AnimationPlayableAsset_LoopMode const& __cordl_internal_get_m_Loop() const;

  constexpr ::UnityEngine::Timeline::AnimationPlayableAsset_LoopMode& __cordl_internal_get_m_Loop();

  constexpr ::UnityEngine::Timeline::MatchTargetFields const& __cordl_internal_get_m_MatchTargetFields() const;

  constexpr ::UnityEngine::Timeline::MatchTargetFields& __cordl_internal_get_m_MatchTargetFields();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_Position() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_Position();

  constexpr bool const& __cordl_internal_get_m_RemoveStartOffset() const;

  constexpr bool& __cordl_internal_get_m_RemoveStartOffset();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_m_Rotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_m_Rotation();

  constexpr bool const& __cordl_internal_get_m_UseTrackMatchFields() const;

  constexpr bool& __cordl_internal_get_m_UseTrackMatchFields();

  constexpr int32_t const& __cordl_internal_get_m_Version() const;

  constexpr int32_t& __cordl_internal_get_m_Version();

  constexpr void __cordl_internal_set__appliedOffsetMode_k__BackingField(::UnityEngine::Timeline::AppliedOffsetMode value);

  constexpr void __cordl_internal_set_m_ApplyFootIK(bool value);

  constexpr void __cordl_internal_set_m_Clip(::UnityW<::UnityEngine::AnimationClip> value);

  constexpr void __cordl_internal_set_m_EulerAngles(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_Loop(::UnityEngine::Timeline::AnimationPlayableAsset_LoopMode value);

  constexpr void __cordl_internal_set_m_MatchTargetFields(::UnityEngine::Timeline::MatchTargetFields value);

  constexpr void __cordl_internal_set_m_Position(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_RemoveStartOffset(bool value);

  constexpr void __cordl_internal_set_m_Rotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_m_UseTrackMatchFields(bool value);

  constexpr void __cordl_internal_set_m_Version(int32_t value);

  /// @brief Method .ctor, addr 0x4812378, size 0x104, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF_k_LatestVersion();

  /// @brief Method get_appliedOffsetMode, addr 0x4811900, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Timeline::AppliedOffsetMode get_appliedOffsetMode();

  /// @brief Method get_applyFootIK, addr 0x481176c, size 0x8, virtual false, abstract: false, final false
  inline bool get_applyFootIK();

  /// @brief Method get_clip, addr 0x4811910, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::AnimationClip> get_clip();

  /// @brief Method get_clipCaps, addr 0x4812038, size 0xe8, virtual true, abstract: false, final true
  inline ::UnityEngine::Timeline::ClipCaps get_clipCaps();

  /// @brief Method get_duration, addr 0x48119d8, size 0x84, virtual true, abstract: false, final false
  inline double_t get_duration();

  /// @brief Method get_eulerAngles, addr 0x481171c, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_eulerAngles();

  /// @brief Method get_hasRootTransforms, addr 0x4811790, size 0xa4, virtual false, abstract: false, final false
  inline bool get_hasRootTransforms();

  /// @brief Method get_loop, addr 0x4811780, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Timeline::AnimationPlayableAsset_LoopMode get_loop();

  /// @brief Method get_matchTargetFields, addr 0x4811748, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Timeline::MatchTargetFields get_matchTargetFields();

  /// @brief Method get_outputs, addr 0x4811a5c, size 0x70, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>* get_outputs();

  /// @brief Method get_position, addr 0x48116a4, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_position();

  /// @brief Method get_removeStartOffset, addr 0x4811758, size 0x8, virtual false, abstract: false, final false
  inline bool get_removeStartOffset();

  /// @brief Method get_rotation, addr 0x48116bc, size 0x24, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_rotation();

  /// @brief Method get_useTrackMatchFields, addr 0x4811734, size 0x8, virtual false, abstract: false, final false
  inline bool get_useTrackMatchFields();

  /// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

  /// @brief Convert to "::UnityEngine::Timeline::IPropertyPreview"
  constexpr ::UnityEngine::Timeline::IPropertyPreview* i___UnityEngine__Timeline__IPropertyPreview() noexcept;

  /// @brief Convert to "::UnityEngine::Timeline::ITimelineClipAsset"
  constexpr ::UnityEngine::Timeline::ITimelineClipAsset* i___UnityEngine__Timeline__ITimelineClipAsset() noexcept;

  static inline void setStaticF_k_LatestVersion(int32_t value);

  /// @brief Method set_appliedOffsetMode, addr 0x4811908, size 0x8, virtual false, abstract: false, final false
  inline void set_appliedOffsetMode(::UnityEngine::Timeline::AppliedOffsetMode value);

  /// @brief Method set_applyFootIK, addr 0x4811774, size 0xc, virtual false, abstract: false, final false
  inline void set_applyFootIK(bool value);

  /// @brief Method set_clip, addr 0x4811918, size 0xc0, virtual false, abstract: false, final false
  inline void set_clip(::UnityEngine::AnimationClip* value);

  /// @brief Method set_eulerAngles, addr 0x4811728, size 0xc, virtual false, abstract: false, final false
  inline void set_eulerAngles(::UnityEngine::Vector3 value);

  /// @brief Method set_loop, addr 0x4811788, size 0x8, virtual false, abstract: false, final false
  inline void set_loop(::UnityEngine::Timeline::AnimationPlayableAsset_LoopMode value);

  /// @brief Method set_matchTargetFields, addr 0x4811750, size 0x8, virtual false, abstract: false, final false
  inline void set_matchTargetFields(::UnityEngine::Timeline::MatchTargetFields value);

  /// @brief Method set_position, addr 0x48116b0, size 0xc, virtual false, abstract: false, final false
  inline void set_position(::UnityEngine::Vector3 value);

  /// @brief Method set_removeStartOffset, addr 0x4811760, size 0xc, virtual false, abstract: false, final false
  inline void set_removeStartOffset(bool value);

  /// @brief Method set_rotation, addr 0x48116e0, size 0x3c, virtual false, abstract: false, final false
  inline void set_rotation(::UnityEngine::Quaternion value);

  /// @brief Method set_useTrackMatchFields, addr 0x481173c, size 0xc, virtual false, abstract: false, final false
  inline void set_useTrackMatchFields(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AnimationPlayableAsset();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AnimationPlayableAsset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AnimationPlayableAsset(AnimationPlayableAsset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AnimationPlayableAsset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AnimationPlayableAsset(AnimationPlayableAsset const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15797 };

  /// @brief Field m_Clip, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AnimationClip> ___m_Clip;

  /// @brief Field m_Position, offset: 0x20, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_Position;

  /// @brief Field m_EulerAngles, offset: 0x2c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_EulerAngles;

  /// @brief Field m_UseTrackMatchFields, offset: 0x38, size: 0x1, def value: None
  bool ___m_UseTrackMatchFields;

  /// @brief Field m_MatchTargetFields, offset: 0x3c, size: 0x4, def value: None
  ::UnityEngine::Timeline::MatchTargetFields ___m_MatchTargetFields;

  /// @brief Field m_RemoveStartOffset, offset: 0x40, size: 0x1, def value: None
  bool ___m_RemoveStartOffset;

  /// @brief Field m_ApplyFootIK, offset: 0x41, size: 0x1, def value: None
  bool ___m_ApplyFootIK;

  /// @brief Field m_Loop, offset: 0x44, size: 0x4, def value: None
  ::UnityEngine::Timeline::AnimationPlayableAsset_LoopMode ___m_Loop;

  /// @brief Field <appliedOffsetMode>k__BackingField, offset: 0x48, size: 0x4, def value: None
  ::UnityEngine::Timeline::AppliedOffsetMode ____appliedOffsetMode_k__BackingField;

  /// @brief Field m_Version, offset: 0x4c, size: 0x4, def value: None
  int32_t ___m_Version;

  /// @brief Field m_Rotation, offset: 0x50, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___m_Rotation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Timeline::AnimationPlayableAsset, ___m_Clip) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::AnimationPlayableAsset, ___m_Position) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::AnimationPlayableAsset, ___m_EulerAngles) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::AnimationPlayableAsset, ___m_UseTrackMatchFields) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::AnimationPlayableAsset, ___m_MatchTargetFields) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::AnimationPlayableAsset, ___m_RemoveStartOffset) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::AnimationPlayableAsset, ___m_ApplyFootIK) == 0x41, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::AnimationPlayableAsset, ___m_Loop) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::AnimationPlayableAsset, ____appliedOffsetMode_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::AnimationPlayableAsset, ___m_Version) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::AnimationPlayableAsset, ___m_Rotation) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::AnimationPlayableAsset, 0x60>, "Size mismatch!");

} // namespace UnityEngine::Timeline
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::AnimationPlayableAsset_LoopMode, "UnityEngine.Timeline", "AnimationPlayableAsset/LoopMode");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::AnimationPlayableAsset_Versions, "UnityEngine.Timeline", "AnimationPlayableAsset/Versions");
NEED_NO_BOX(::UnityEngine::Timeline::AnimationPlayableAsset);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::AnimationPlayableAsset*, "UnityEngine.Timeline", "AnimationPlayableAsset");
NEED_NO_BOX(::UnityEngine::Timeline::AnimationPlayableAsset_AnimationPlayableAssetUpgrade);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::AnimationPlayableAsset_AnimationPlayableAssetUpgrade*, "UnityEngine.Timeline", "AnimationPlayableAsset/AnimationPlayableAssetUpgrade");
NEED_NO_BOX(::UnityEngine::Timeline::AnimationPlayableAsset__get_outputs_d__45);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::AnimationPlayableAsset__get_outputs_d__45*, "UnityEngine.Timeline", "AnimationPlayableAsset/<get_outputs>d__45");
