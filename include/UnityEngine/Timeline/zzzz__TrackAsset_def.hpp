#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableAsset_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBinding_def.hpp"
#include "UnityEngine/Timeline/zzzz__DiscreteTime_def.hpp"
#include "UnityEngine/Timeline/zzzz__MarkerList_def.hpp"
#include "UnityEngine/Timeline/zzzz__TrackAsset_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TrackAsset)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template <typename T1, typename T2, typename T3> class Action_3;
}
namespace System {
template <typename T> class Comparison_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine::Playables {
class IPlayableAsset;
}
namespace UnityEngine::Playables {
class PlayableAsset;
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
class ICurvesOwner;
}
namespace UnityEngine::Timeline {
class IMarker;
}
namespace UnityEngine::Timeline {
class IPropertyCollector;
}
namespace UnityEngine::Timeline {
class IPropertyPreview;
}
namespace UnityEngine::Timeline {
template <typename T> class IntervalTree_1;
}
namespace UnityEngine::Timeline {
class RuntimeElement;
}
namespace UnityEngine::Timeline {
class TimelineAsset;
}
namespace UnityEngine::Timeline {
class TimelineClip;
}
namespace UnityEngine::Timeline {
class TrackBindingTypeAttribute;
}
namespace UnityEngine::Timeline {
class __TrackAsset__TrackAssetUpgrade;
}
namespace UnityEngine::Timeline {
struct __TrackAsset__TransientBuildData;
}
namespace UnityEngine::Timeline {
struct __TrackAsset__Versions;
}
namespace UnityEngine::Timeline {
class __TrackAsset____c;
}
namespace UnityEngine::Timeline {
class __TrackAsset___get_outputs_d__65;
}
namespace UnityEngine {
class AnimationClip;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class ScriptableObject;
}
// Forward declare root types
namespace UnityEngine::Timeline {
struct __TrackAsset__Versions;
}
namespace UnityEngine::Timeline {
class TrackAsset;
}
namespace UnityEngine::Timeline {
class __TrackAsset__TrackAssetUpgrade;
}
namespace UnityEngine::Timeline {
class __TrackAsset____c;
}
namespace UnityEngine::Timeline {
class __TrackAsset___get_outputs_d__65;
}
namespace UnityEngine::Timeline {
struct __TrackAsset__TransientBuildData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Timeline::__TrackAsset__Versions);
MARK_REF_PTR_T(::UnityEngine::Timeline::TrackAsset);
MARK_REF_PTR_T(::UnityEngine::Timeline::__TrackAsset__TrackAssetUpgrade);
MARK_REF_PTR_T(::UnityEngine::Timeline::__TrackAsset____c);
MARK_REF_PTR_T(::UnityEngine::Timeline::__TrackAsset___get_outputs_d__65);
MARK_VAL_T(::UnityEngine::Timeline::__TrackAsset__TransientBuildData);
// Type: ::Versions
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: true
// CS Name: ::TrackAsset::Versions
struct CORDL_TYPE __TrackAsset__Versions {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____TrackAsset__Versions_Unwrapped
  enum struct ____TrackAsset__Versions_Unwrapped : int32_t {
    __E_Initial = static_cast<int32_t>(0x0),
    __E_RotationAsEuler = static_cast<int32_t>(0x1),
    __E_RootMotionUpgrade = static_cast<int32_t>(0x2),
    __E_AnimatedTrackProperties = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____TrackAsset__Versions_Unwrapped() const noexcept {
    return static_cast<____TrackAsset__Versions_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TrackAsset__Versions();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __TrackAsset__Versions(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field AnimatedTrackProperties value: static_cast<int32_t>(0x3)
  static ::UnityEngine::Timeline::__TrackAsset__Versions const AnimatedTrackProperties;

  /// @brief Field Initial value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Timeline::__TrackAsset__Versions const Initial;

  /// @brief Field RootMotionUpgrade value: static_cast<int32_t>(0x2)
  static ::UnityEngine::Timeline::__TrackAsset__Versions const RootMotionUpgrade;

  /// @brief Field RotationAsEuler value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Timeline::__TrackAsset__Versions const RotationAsEuler;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::__TrackAsset__Versions, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::__TrackAsset__Versions, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Timeline
// Type: ::TrackAssetUpgrade
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: ::TrackAsset::TrackAssetUpgrade*
class CORDL_TYPE __TrackAsset__TrackAssetUpgrade : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TrackAsset__TrackAssetUpgrade();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TrackAsset__TrackAssetUpgrade", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TrackAsset__TrackAssetUpgrade(__TrackAsset__TrackAssetUpgrade&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TrackAsset__TrackAssetUpgrade", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TrackAsset__TrackAssetUpgrade(__TrackAsset__TrackAssetUpgrade const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::__TrackAsset__TrackAssetUpgrade, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Timeline
// Type: ::TransientBuildData
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: true
// CS Name: ::TrackAsset::TransientBuildData
struct CORDL_TYPE __TrackAsset__TransientBuildData {
public:
  // Declarations
  /// @brief Method Clear, addr 0x2d46c5c, size 0xe0, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Create, addr 0x2d4915c, size 0x10c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Timeline::__TrackAsset__TransientBuildData Create();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TrackAsset__TransientBuildData();

  // Ctor Parameters [CppParam { name: "trackList", ty: "::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Timeline::TrackAsset>>*", modifiers: "", def_value: None }, CppParam { name:
  // "clipList", ty: "::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineClip*>*", modifiers: "", def_value: None }, CppParam { name: "markerList", ty:
  // "::System::Collections::Generic::List_1<::UnityEngine::Timeline::IMarker*>*", modifiers: "", def_value: None }]
  constexpr __TrackAsset__TransientBuildData(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Timeline::TrackAsset>>* trackList,
                                             ::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineClip*>* clipList,
                                             ::System::Collections::Generic::List_1<::UnityEngine::Timeline::IMarker*>* markerList) noexcept;

  /// @brief Field trackList, offset: 0x0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Timeline::TrackAsset>>* trackList;

  /// @brief Field clipList, offset: 0x8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineClip*>* clipList;

  /// @brief Field markerList, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Timeline::IMarker*>* markerList;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::__TrackAsset__TransientBuildData, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::__TrackAsset__TransientBuildData, trackList) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::__TrackAsset__TransientBuildData, clipList) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::__TrackAsset__TransientBuildData, markerList) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::Timeline
// Type: ::<get_outputs>d__65
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: ::TrackAsset::<get_outputs>d__65*
class CORDL_TYPE __TrackAsset___get_outputs_d__65 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_UnityEngine_Playables_PlayableBinding__get_Current))::UnityEngine::Playables::PlayableBinding
      System_Collections_Generic_IEnumerator_UnityEngine_Playables_PlayableBinding__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x20
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::UnityEngine::Playables::PlayableBinding __2__current;

  /// @brief Field <>4__this, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::UnityEngine::Timeline::TrackAsset> __4__this;

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

  /// @brief Method MoveNext, addr 0x2d4926c, size 0x244, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::UnityEngine::Timeline::__TrackAsset___get_outputs_d__65* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.Playables.PlayableBinding>.GetEnumerator, addr 0x2d49560, size 0xa4, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>* System_Collections_Generic_IEnumerable_UnityEngine_Playables_PlayableBinding__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.Playables.PlayableBinding>.get_Current, addr 0x2d494b0, size 0x10, virtual true, abstract: false, final true
  inline ::UnityEngine::Playables::PlayableBinding System_Collections_Generic_IEnumerator_UnityEngine_Playables_PlayableBinding__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x2d49604, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x2d494c0, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2d49500, size 0x60, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x2d49268, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::UnityEngine::Playables::PlayableBinding const& __cordl_internal_get___2__current() const;

  constexpr ::UnityEngine::Playables::PlayableBinding& __cordl_internal_get___2__current();

  constexpr ::UnityW<::UnityEngine::Timeline::TrackAsset> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::UnityEngine::Timeline::TrackAsset>& __cordl_internal_get___4__this();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::UnityEngine::Playables::PlayableBinding value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::UnityEngine::Timeline::TrackAsset> value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  /// @brief Method .ctor, addr 0x2d43c6c, size 0x34, virtual false, abstract: false, final false
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
  constexpr __TrackAsset___get_outputs_d__65();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TrackAsset___get_outputs_d__65", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TrackAsset___get_outputs_d__65(__TrackAsset___get_outputs_d__65&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TrackAsset___get_outputs_d__65", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TrackAsset___get_outputs_d__65(__TrackAsset___get_outputs_d__65 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x20, def value: None
  ::UnityEngine::Playables::PlayableBinding _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x38, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field <>4__this, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Timeline::TrackAsset> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::__TrackAsset___get_outputs_d__65, 0x48>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::__TrackAsset___get_outputs_d__65, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::__TrackAsset___get_outputs_d__65, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::__TrackAsset___get_outputs_d__65, _____l__initialThreadId) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::__TrackAsset___get_outputs_d__65, _____4__this) == 0x40, "Offset mismatch!");

} // namespace UnityEngine::Timeline
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: ::TrackAsset::<>c*
class CORDL_TYPE __TrackAsset____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::Timeline::__TrackAsset____c* __9;

  /// @brief Field <>9__121_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__121_0, put = setStaticF___9__121_0))::System::Comparison_1<::UnityEngine::Timeline::TimelineClip*>* __9__121_0;

  static inline ::UnityEngine::Timeline::__TrackAsset____c* New_ctor();

  /// @brief Method <SortClips>b__121_0, addr 0x2d49674, size 0x34, virtual false, abstract: false, final false
  inline int32_t _SortClips_b__121_0(::UnityEngine::Timeline::TimelineClip* clip1, ::UnityEngine::Timeline::TimelineClip* clip2);

  /// @brief Method .ctor, addr 0x2d4966c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Timeline::__TrackAsset____c* getStaticF___9();

  static inline ::System::Comparison_1<::UnityEngine::Timeline::TimelineClip*>* getStaticF___9__121_0();

  static inline void setStaticF___9(::UnityEngine::Timeline::__TrackAsset____c* value);

  static inline void setStaticF___9__121_0(::System::Comparison_1<::UnityEngine::Timeline::TimelineClip*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TrackAsset____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TrackAsset____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TrackAsset____c(__TrackAsset____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TrackAsset____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TrackAsset____c(__TrackAsset____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::__TrackAsset____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Timeline
// Type: UnityEngine.Timeline::TrackAsset
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 160, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: ::UnityEngine.Timeline::TrackAsset*
class CORDL_TYPE TrackAsset : public ::UnityEngine::Playables::PlayableAsset {
public:
  // Declarations
  using TrackAssetUpgrade = ::UnityEngine::Timeline::__TrackAsset__TrackAssetUpgrade;

  using TransientBuildData = ::UnityEngine::Timeline::__TrackAsset__TransientBuildData;

  using Versions = ::UnityEngine::Timeline::__TrackAsset__Versions;

  using __c = ::UnityEngine::Timeline::__TrackAsset____c;

  using _get_outputs_d__65 = ::UnityEngine::Timeline::__TrackAsset___get_outputs_d__65;

  /// @brief Field OnClipPlayableCreate, offset 0xffffffff, size 0x8
  static __declspec(property(
      get = getStaticF_OnClipPlayableCreate,
      put = setStaticF_OnClipPlayableCreate))::System::Action_3<::UnityEngine::Timeline::TimelineClip*, ::UnityW<::UnityEngine::GameObject>, ::UnityEngine::Playables::Playable>* OnClipPlayableCreate;

  /// @brief Field OnTrackAnimationPlayableCreate, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_OnTrackAnimationPlayableCreate,
                             put = setStaticF_OnTrackAnimationPlayableCreate))::System::Action_3<::UnityW<::UnityEngine::Timeline::TrackAsset>, ::UnityW<::UnityEngine::GameObject>,
                                                                                                 ::UnityEngine::Playables::Playable>* OnTrackAnimationPlayableCreate;

  __declspec(property(get = UnityEngine_Timeline_ICurvesOwner_get_asset))::UnityW<::UnityEngine::Object> UnityEngine_Timeline_ICurvesOwner_asset;

  __declspec(property(get = UnityEngine_Timeline_ICurvesOwner_get_assetOwner))::UnityW<::UnityEngine::Object> UnityEngine_Timeline_ICurvesOwner_assetOwner;

  __declspec(property(get = UnityEngine_Timeline_ICurvesOwner_get_defaultCurvesName))::StringW UnityEngine_Timeline_ICurvesOwner_defaultCurvesName;

  __declspec(property(get = UnityEngine_Timeline_ICurvesOwner_get_targetTrack))::UnityW<::UnityEngine::Timeline::TrackAsset> UnityEngine_Timeline_ICurvesOwner_targetTrack;

  __declspec(property(get = get_clips))::ArrayW<::UnityEngine::Timeline::TimelineClip*, ::Array<::UnityEngine::Timeline::TimelineClip*>*> clips;

  __declspec(property(get = get_curves, put = set_curves))::UnityW<::UnityEngine::AnimationClip> curves;

  __declspec(property(get = get_customPlayableTypename, put = set_customPlayableTypename))::StringW customPlayableTypename;

  __declspec(property(get = get_duration)) double_t duration;

  __declspec(property(get = get_end)) double_t end;

  __declspec(property(get = get_hasClips)) bool hasClips;

  __declspec(property(get = get_hasCurves)) bool hasCurves;

  __declspec(property(get = get_isEmpty)) bool isEmpty;

  __declspec(property(get = get_isSubTrack)) bool isSubTrack;

  __declspec(property(get = get_locked, put = set_locked)) bool locked;

  __declspec(property(get = get_lockedInHierarchy)) bool lockedInHierarchy;

  /// @brief Field m_AnimClip, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AnimClip, put = __cordl_internal_set_m_AnimClip))::UnityW<::UnityEngine::AnimationClip> m_AnimClip;

  /// @brief Field m_CacheSorted, offset 0x70, size 0x1
  __declspec(property(get = __cordl_internal_get_m_CacheSorted, put = __cordl_internal_set_m_CacheSorted)) bool m_CacheSorted;

  /// @brief Field m_ChildTrackCache, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ChildTrackCache,
                      put = __cordl_internal_set_m_ChildTrackCache))::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Timeline::TrackAsset>>* m_ChildTrackCache;

  /// @brief Field m_Children, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Children, put = __cordl_internal_set_m_Children))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ScriptableObject>>* m_Children;

  /// @brief Field m_Clips, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Clips, put = __cordl_internal_set_m_Clips))::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineClip*>* m_Clips;

  /// @brief Field m_ClipsCache, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ClipsCache,
                      put = __cordl_internal_set_m_ClipsCache))::ArrayW<::UnityEngine::Timeline::TimelineClip*, ::Array<::UnityEngine::Timeline::TimelineClip*>*> m_ClipsCache;

  /// @brief Field m_Curves, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Curves, put = __cordl_internal_set_m_Curves))::UnityW<::UnityEngine::AnimationClip> m_Curves;

  /// @brief Field m_CustomPlayableFullTypename, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CustomPlayableFullTypename, put = __cordl_internal_set_m_CustomPlayableFullTypename))::StringW m_CustomPlayableFullTypename;

  /// @brief Field m_End, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_m_End, put = __cordl_internal_set_m_End))::UnityEngine::Timeline::DiscreteTime m_End;

  /// @brief Field m_ItemsHash, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ItemsHash, put = __cordl_internal_set_m_ItemsHash)) int32_t m_ItemsHash;

  /// @brief Field m_Locked, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Locked, put = __cordl_internal_set_m_Locked)) bool m_Locked;

  /// @brief Field m_Markers, offset 0x88, size 0x18
  __declspec(property(get = __cordl_internal_get_m_Markers, put = __cordl_internal_set_m_Markers))::UnityEngine::Timeline::MarkerList m_Markers;

  /// @brief Field m_Muted, offset 0x29, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Muted, put = __cordl_internal_set_m_Muted)) bool m_Muted;

  /// @brief Field m_Parent, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Parent, put = __cordl_internal_set_m_Parent))::UnityW<::UnityEngine::Playables::PlayableAsset> m_Parent;

  /// @brief Field m_Start, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Start, put = __cordl_internal_set_m_Start))::UnityEngine::Timeline::DiscreteTime m_Start;

  /// @brief Field m_SupportsNotifications, offset 0x71, size 0x2
  __declspec(property(get = __cordl_internal_get_m_SupportsNotifications, put = __cordl_internal_set_m_SupportsNotifications))::System::Nullable_1<bool> m_SupportsNotifications;

  /// @brief Field m_Version, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Version, put = __cordl_internal_set_m_Version)) int32_t m_Version;

  __declspec(property(get = get_muted, put = set_muted)) bool muted;

  __declspec(property(get = get_mutedInHierarchy)) bool mutedInHierarchy;

  __declspec(property(get = get_outputs))::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>* outputs;

  __declspec(property(get = get_parent, put = set_parent))::UnityW<::UnityEngine::Playables::PlayableAsset> parent;

  /// @brief Field s_BuildData, offset 0xffffffff, size 0x18
  static __declspec(property(get = getStaticF_s_BuildData, put = setStaticF_s_BuildData))::UnityEngine::Timeline::__TrackAsset__TransientBuildData s_BuildData;

  /// @brief Field s_EmptyCache, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_EmptyCache,
                             put = setStaticF_s_EmptyCache))::ArrayW<::UnityW<::UnityEngine::Timeline::TrackAsset>, ::Array<::UnityW<::UnityEngine::Timeline::TrackAsset>>*> s_EmptyCache;

  /// @brief Field s_TrackBindingTypeAttributeCache, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_TrackBindingTypeAttributeCache, put = setStaticF_s_TrackBindingTypeAttributeCache))::System::Collections::Generic::Dictionary_2<
      ::System::Type*, ::UnityEngine::Timeline::TrackBindingTypeAttribute*>* s_TrackBindingTypeAttributeCache;

  __declspec(property(get = get_start)) double_t start;

  __declspec(property(get = get_subTracksObjects))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ScriptableObject>>* subTracksObjects;

  __declspec(property(get = get_supportsNotifications)) bool supportsNotifications;

  __declspec(property(get = get_timelineAsset))::UnityW<::UnityEngine::Timeline::TimelineAsset> timelineAsset;

  /// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

  /// @brief Convert operator to "::UnityEngine::Timeline::ICurvesOwner"
  constexpr operator ::UnityEngine::Timeline::ICurvesOwner*() noexcept;

  /// @brief Convert operator to "::UnityEngine::Timeline::IPropertyPreview"
  constexpr operator ::UnityEngine::Timeline::IPropertyPreview*() noexcept;

  /// @brief Method AddChild, addr 0x2d42360, size 0x104, virtual false, abstract: false, final false
  inline void AddChild(::UnityEngine::Timeline::TrackAsset* child);

  /// @brief Method AddClip, addr 0x2d3d878, size 0xd4, virtual false, abstract: false, final false
  inline void AddClip(::UnityEngine::Timeline::TimelineClip* newClip);

  /// @brief Method AddMarker, addr 0x2d45b1c, size 0x8, virtual false, abstract: false, final false
  inline void AddMarker(::UnityEngine::ScriptableObject* e);

  /// @brief Method CalculateItemsHash, addr 0x2d39908, size 0x88, virtual true, abstract: false, final false
  inline int32_t CalculateItemsHash();

  /// @brief Method CanCompileClips, addr 0x2d36a04, size 0x5c, virtual true, abstract: false, final false
  inline bool CanCompileClips();

  /// @brief Method CanCompileNotifications, addr 0x2d47694, size 0x34, virtual false, abstract: false, final false
  inline bool CanCompileNotifications();

  /// @brief Method CanCreateMixerRecursive, addr 0x2d46928, size 0x334, virtual false, abstract: false, final false
  inline bool CanCreateMixerRecursive();

  /// @brief Method CanCreateTrackMixer, addr 0x2d48b74, size 0x10, virtual true, abstract: false, final false
  inline bool CanCreateTrackMixer();

  /// @brief Method ClearClipsInternal, addr 0x2d47d98, size 0x78, virtual false, abstract: false, final false
  inline void ClearClipsInternal();

  /// @brief Method ClearMarkers, addr 0x2d45aa4, size 0x8, virtual false, abstract: false, final false
  inline void ClearMarkers();

  /// @brief Method ClearSubTracksInternal, addr 0x2d47e10, size 0x78, virtual false, abstract: false, final false
  inline void ClearSubTracksInternal();

  /// @brief Method CompileClips, addr 0x2d46d3c, size 0x428, virtual true, abstract: false, final false
  inline ::UnityEngine::Playables::Playable CompileClips(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go,
                                                         ::System::Collections::Generic::IList_1<::UnityEngine::Timeline::TimelineClip*>* timelineClips,
                                                         ::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>* tree);

  /// @brief Method ConfigureTrackAnimation, addr 0x2d47164, size 0x15c, virtual false, abstract: false, final false
  inline void ConfigureTrackAnimation(::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>* tree, ::UnityEngine::GameObject* go, ::UnityEngine::Playables::Playable blend);

  /// @brief Method CreateAndAddNewClipOfType, addr 0x2d44680, size 0x30, virtual false, abstract: false, final false
  inline ::UnityEngine::Timeline::TimelineClip* CreateAndAddNewClipOfType(::System::Type* requestedType);

  /// @brief Method CreateClip, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::UnityEngine::Timeline::TimelineClip* CreateClip();

  /// @brief Method CreateClip, addr 0x2d44d8c, size 0x130, virtual false, abstract: false, final false
  inline ::UnityEngine::Timeline::TimelineClip* CreateClip(::System::Type* requestedType);

  /// @brief Method CreateClipFromAsset, addr 0x2d4531c, size 0x2a0, virtual false, abstract: false, final false
  inline ::UnityEngine::Timeline::TimelineClip* CreateClipFromAsset(::UnityEngine::ScriptableObject* playableAsset);

  /// @brief Method CreateClipFromPlayableAsset, addr 0x2d455bc, size 0x284, virtual false, abstract: false, final false
  inline ::UnityEngine::Timeline::TimelineClip* CreateClipFromPlayableAsset(::UnityEngine::Playables::IPlayableAsset* asset);

  /// @brief Method CreateClipOfType, addr 0x2d4513c, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::Timeline::TimelineClip* CreateClipOfType(::System::Type* requestedType);

  /// @brief Method CreateCurves, addr 0x2d44240, size 0xb4, virtual true, abstract: false, final true
  inline void CreateCurves(::StringW curvesClipName);

  /// @brief Method CreateDefaultClip, addr 0x2d443b4, size 0x2cc, virtual false, abstract: false, final false
  inline ::UnityEngine::Timeline::TimelineClip* CreateDefaultClip();

  /// @brief Method CreateMarker, addr 0x2d447c4, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Timeline::IMarker* CreateMarker(::System::Type* type, double_t time);

  /// @brief Method CreateMarker, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T CreateMarker(double_t time);

  /// @brief Method CreateMixerPlayableGraph, addr 0x2d476c8, size 0x5a8, virtual true, abstract: false, final false
  inline ::UnityEngine::Playables::Playable CreateMixerPlayableGraph(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go,
                                                                     ::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>* tree);

  /// @brief Method CreateNewClipContainerInternal, addr 0x2d45840, size 0x25c, virtual false, abstract: false, final false
  inline ::UnityEngine::Timeline::TimelineClip* CreateNewClipContainerInternal();

  /// @brief Method CreateNotificationsPlayable, addr 0x2d46018, size 0x2d0, virtual false, abstract: false, final false
  inline ::UnityEngine::Playables::Playable CreateNotificationsPlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Playables::Playable mixerPlayable, ::UnityEngine::GameObject* go,
                                                                        ::UnityEngine::Playables::Playable timelinePlayable);

  /// @brief Method CreatePlayable, addr 0x2d488d0, size 0x2a4, virtual true, abstract: false, final false
  inline ::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* gameObject, ::UnityEngine::Timeline::TimelineClip* clip);

  /// @brief Method CreatePlayable, addr 0x2d44364, size 0x50, virtual true, abstract: false, final true
  inline ::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go);

  /// @brief Method CreatePlayableGraph, addr 0x2d46668, size 0x2c0, virtual false, abstract: false, final false
  inline ::UnityEngine::Playables::Playable CreatePlayableGraph(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go,
                                                                ::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>* tree,
                                                                ::UnityEngine::Playables::Playable timelinePlayable);

  /// @brief Method CreateTrackMixer, addr 0x2d442f4, size 0x70, virtual true, abstract: false, final false
  inline ::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go, int32_t inputCount);

  /// @brief Method DeleteClip, addr 0x2d446b0, size 0x114, virtual false, abstract: false, final false
  inline bool DeleteClip(::UnityEngine::Timeline::TimelineClip* clip);

  /// @brief Method DeleteMarker, addr 0x2d44ad0, size 0x8, virtual false, abstract: false, final false
  inline bool DeleteMarker(::UnityEngine::Timeline::IMarker* marker);

  /// @brief Method DeleteMarkerRaw, addr 0x2d45c10, size 0x34, virtual false, abstract: false, final false
  inline bool DeleteMarkerRaw(::UnityEngine::ScriptableObject* marker);

  /// @brief Method GatherCompilableTracks, addr 0x2d472c0, size 0x3d4, virtual false, abstract: false, final false
  inline void GatherCompilableTracks(::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Timeline::TrackAsset>>* tracks);

  /// @brief Method GatherNotifications, addr 0x2d462e8, size 0x380, virtual false, abstract: false, final false
  inline void GatherNotifications(::System::Collections::Generic::List_1<::UnityEngine::Timeline::IMarker*>* markers);

  /// @brief Method GatherProperties, addr 0x2d48094, size 0x6d4, virtual true, abstract: false, final false
  inline void GatherProperties(::UnityEngine::Playables::PlayableDirector* director, ::UnityEngine::Timeline::IPropertyCollector* driver);

  /// @brief Method GetAnimationClipHash, addr 0x2d3981c, size 0xec, virtual false, abstract: false, final false
  static inline int32_t GetAnimationClipHash(::UnityEngine::AnimationClip* clip);

  /// @brief Method GetChildTracks, addr 0x2d3b1e4, size 0x18, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Timeline::TrackAsset>>* GetChildTracks();

  /// @brief Method GetClips, addr 0x2d3c8b8, size 0x4, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TimelineClip*>* GetClips();

  /// @brief Method GetClipsHash, addr 0x2d48768, size 0x168, virtual false, abstract: false, final false
  inline int32_t GetClipsHash();

  /// @brief Method GetEvaluationTime, addr 0x2d3bcb0, size 0x25c, virtual true, abstract: false, final false
  inline void GetEvaluationTime(ByRef<double_t> outStart, ByRef<double_t> outDuration);

  /// @brief Method GetGameObjectBinding, addr 0x2d36ca0, size 0x178, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> GetGameObjectBinding(::UnityEngine::Playables::PlayableDirector* director);

  /// @brief Method GetMarker, addr 0x2d44d24, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Timeline::IMarker* GetMarker(int32_t idx);

  /// @brief Method GetMarkerCount, addr 0x2d43bec, size 0x8, virtual false, abstract: false, final false
  inline int32_t GetMarkerCount();

  /// @brief Method GetMarkers, addr 0x2d43510, size 0x1c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::IMarker*>* GetMarkers();

  /// @brief Method GetMarkersRaw, addr 0x2d45a9c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::ScriptableObject>>* GetMarkersRaw();

  /// @brief Method GetNotificationDuration, addr 0x2d3c018, size 0x164, virtual false, abstract: false, final false
  inline double_t GetNotificationDuration();

  /// @brief Method GetSequenceTime, addr 0x2d3c008, size 0x10, virtual true, abstract: false, final false
  inline void GetSequenceTime(ByRef<double_t> outStart, ByRef<double_t> outDuration);

  /// @brief Method GetTimeRangeHash, addr 0x2d45d04, size 0x314, virtual false, abstract: false, final false
  inline int32_t GetTimeRangeHash();

  /// @brief Method HasNotifications, addr 0x2d48078, size 0x1c, virtual false, abstract: false, final false
  inline bool HasNotifications();

  /// @brief Method Hash, addr 0x2d48f50, size 0x38, virtual true, abstract: false, final false
  inline int32_t Hash();

  /// @brief Method Invalidate, addr 0x2d43484, size 0x88, virtual false, abstract: false, final false
  inline void Invalidate();

  /// @brief Method IsCompilable, addr 0x2d48b84, size 0x3cc, virtual false, abstract: false, final false
  inline bool IsCompilable();

  /// @brief Method MoveLastTrackBefore, addr 0x2d47e88, size 0x1f0, virtual false, abstract: false, final false
  inline void MoveLastTrackBefore(::UnityEngine::Timeline::TrackAsset* asset);

  static inline ::UnityEngine::Timeline::TrackAsset* New_ctor();

  /// @brief Method OnAfterTrackDeserialize, addr 0x2d42f64, size 0x4, virtual true, abstract: false, final false
  inline void OnAfterTrackDeserialize();

  /// @brief Method OnBeforeTrackSerialize, addr 0x2d42f60, size 0x4, virtual true, abstract: false, final false
  inline void OnBeforeTrackSerialize();

  /// @brief Method OnClipMove, addr 0x2d3d4fc, size 0x8, virtual false, abstract: false, final false
  inline void OnClipMove();

  /// @brief Method OnCreateClip, addr 0x2d36e68, size 0x4, virtual true, abstract: false, final false
  inline void OnCreateClip(::UnityEngine::Timeline::TimelineClip* clip);

  /// @brief Method OnUpgradeFromVersion, addr 0x2d42f68, size 0x4, virtual true, abstract: false, final false
  inline void OnUpgradeFromVersion(int32_t oldVersion);

  /// @brief Method RemoveClip, addr 0x2d3d818, size 0x60, virtual false, abstract: false, final false
  inline void RemoveClip(::UnityEngine::Timeline::TimelineClip* clip);

  /// @brief Method RemoveSubTrack, addr 0x2d4061c, size 0x7c, virtual false, abstract: false, final false
  inline bool RemoveSubTrack(::UnityEngine::Timeline::TrackAsset* child);

  /// @brief Method SortClips, addr 0x2d47c70, size 0x128, virtual false, abstract: false, final false
  inline void SortClips();

  /// @brief Method UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize, addr 0x2d430c8, size 0x3bc, virtual true, abstract: false, final true
  inline void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize();

  /// @brief Method UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize, addr 0x2d42f6c, size 0x15c, virtual true, abstract: false, final true
  inline void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize();

  /// @brief Method UnityEngine.Timeline.ICurvesOwner.get_asset, addr 0x2d43f0c, size 0x4, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::Object> UnityEngine_Timeline_ICurvesOwner_get_asset();

  /// @brief Method UnityEngine.Timeline.ICurvesOwner.get_assetOwner, addr 0x2d43f10, size 0x4, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::Object> UnityEngine_Timeline_ICurvesOwner_get_assetOwner();

  /// @brief Method UnityEngine.Timeline.ICurvesOwner.get_defaultCurvesName, addr 0x2d43ecc, size 0x40, virtual true, abstract: false, final true
  inline ::StringW UnityEngine_Timeline_ICurvesOwner_get_defaultCurvesName();

  /// @brief Method UnityEngine.Timeline.ICurvesOwner.get_targetTrack, addr 0x2d43f14, size 0x4, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::Timeline::TrackAsset> UnityEngine_Timeline_ICurvesOwner_get_targetTrack();

  /// @brief Method UpdateChildTrackCache, addr 0x2d43ca0, size 0x20c, virtual false, abstract: false, final false
  inline void UpdateChildTrackCache();

  /// @brief Method UpdateDuration, addr 0x2d4395c, size 0x10c, virtual false, abstract: false, final false
  inline void UpdateDuration();

  /// @brief Method UpgradeToLatestVersion, addr 0x2d4350c, size 0x4, virtual false, abstract: false, final false
  inline void UpgradeToLatestVersion();

  /// @brief Method ValidateClipType, addr 0x2d44ebc, size 0x280, virtual false, abstract: false, final false
  inline bool ValidateClipType(::System::Type* clipType);

  constexpr ::UnityW<::UnityEngine::AnimationClip> const& __cordl_internal_get_m_AnimClip() const;

  constexpr ::UnityW<::UnityEngine::AnimationClip>& __cordl_internal_get_m_AnimClip();

  constexpr bool const& __cordl_internal_get_m_CacheSorted() const;

  constexpr bool& __cordl_internal_get_m_CacheSorted();

  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Timeline::TrackAsset>>*& __cordl_internal_get_m_ChildTrackCache();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Timeline::TrackAsset>>*> const& __cordl_internal_get_m_ChildTrackCache() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ScriptableObject>>*& __cordl_internal_get_m_Children();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ScriptableObject>>*> const& __cordl_internal_get_m_Children() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineClip*>*& __cordl_internal_get_m_Clips();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineClip*>*> const& __cordl_internal_get_m_Clips() const;

  constexpr ::ArrayW<::UnityEngine::Timeline::TimelineClip*, ::Array<::UnityEngine::Timeline::TimelineClip*>*> const& __cordl_internal_get_m_ClipsCache() const;

  constexpr ::ArrayW<::UnityEngine::Timeline::TimelineClip*, ::Array<::UnityEngine::Timeline::TimelineClip*>*>& __cordl_internal_get_m_ClipsCache();

  constexpr ::UnityW<::UnityEngine::AnimationClip> const& __cordl_internal_get_m_Curves() const;

  constexpr ::UnityW<::UnityEngine::AnimationClip>& __cordl_internal_get_m_Curves();

  constexpr ::StringW const& __cordl_internal_get_m_CustomPlayableFullTypename() const;

  constexpr ::StringW& __cordl_internal_get_m_CustomPlayableFullTypename();

  constexpr ::UnityEngine::Timeline::DiscreteTime const& __cordl_internal_get_m_End() const;

  constexpr ::UnityEngine::Timeline::DiscreteTime& __cordl_internal_get_m_End();

  constexpr int32_t const& __cordl_internal_get_m_ItemsHash() const;

  constexpr int32_t& __cordl_internal_get_m_ItemsHash();

  constexpr bool const& __cordl_internal_get_m_Locked() const;

  constexpr bool& __cordl_internal_get_m_Locked();

  constexpr ::UnityEngine::Timeline::MarkerList const& __cordl_internal_get_m_Markers() const;

  constexpr ::UnityEngine::Timeline::MarkerList& __cordl_internal_get_m_Markers();

  constexpr bool const& __cordl_internal_get_m_Muted() const;

  constexpr bool& __cordl_internal_get_m_Muted();

  constexpr ::UnityW<::UnityEngine::Playables::PlayableAsset> const& __cordl_internal_get_m_Parent() const;

  constexpr ::UnityW<::UnityEngine::Playables::PlayableAsset>& __cordl_internal_get_m_Parent();

  constexpr ::UnityEngine::Timeline::DiscreteTime const& __cordl_internal_get_m_Start() const;

  constexpr ::UnityEngine::Timeline::DiscreteTime& __cordl_internal_get_m_Start();

  constexpr ::System::Nullable_1<bool> const& __cordl_internal_get_m_SupportsNotifications() const;

  constexpr ::System::Nullable_1<bool>& __cordl_internal_get_m_SupportsNotifications();

  constexpr int32_t const& __cordl_internal_get_m_Version() const;

  constexpr int32_t& __cordl_internal_get_m_Version();

  constexpr void __cordl_internal_set_m_AnimClip(::UnityW<::UnityEngine::AnimationClip> value);

  constexpr void __cordl_internal_set_m_CacheSorted(bool value);

  constexpr void __cordl_internal_set_m_ChildTrackCache(::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Timeline::TrackAsset>>* value);

  constexpr void __cordl_internal_set_m_Children(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ScriptableObject>>* value);

  constexpr void __cordl_internal_set_m_Clips(::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineClip*>* value);

  constexpr void __cordl_internal_set_m_ClipsCache(::ArrayW<::UnityEngine::Timeline::TimelineClip*, ::Array<::UnityEngine::Timeline::TimelineClip*>*> value);

  constexpr void __cordl_internal_set_m_Curves(::UnityW<::UnityEngine::AnimationClip> value);

  constexpr void __cordl_internal_set_m_CustomPlayableFullTypename(::StringW value);

  constexpr void __cordl_internal_set_m_End(::UnityEngine::Timeline::DiscreteTime value);

  constexpr void __cordl_internal_set_m_ItemsHash(int32_t value);

  constexpr void __cordl_internal_set_m_Locked(bool value);

  constexpr void __cordl_internal_set_m_Markers(::UnityEngine::Timeline::MarkerList value);

  constexpr void __cordl_internal_set_m_Muted(bool value);

  constexpr void __cordl_internal_set_m_Parent(::UnityW<::UnityEngine::Playables::PlayableAsset> value);

  constexpr void __cordl_internal_set_m_Start(::UnityEngine::Timeline::DiscreteTime value);

  constexpr void __cordl_internal_set_m_SupportsNotifications(::System::Nullable_1<bool> value);

  constexpr void __cordl_internal_set_m_Version(int32_t value);

  /// @brief Method __internalAwake, addr 0x2d44174, size 0xcc, virtual false, abstract: false, final false
  inline void __internalAwake();

  /// @brief Method .ctor, addr 0x2d36ec8, size 0xd0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_OnClipPlayableCreate, addr 0x2d4352c, size 0xf4, virtual false, abstract: false, final false
  static inline void add_OnClipPlayableCreate(::System::Action_3<::UnityEngine::Timeline::TimelineClip*, ::UnityW<::UnityEngine::GameObject>, ::UnityEngine::Playables::Playable>* value);

  /// @brief Method add_OnTrackAnimationPlayableCreate, addr 0x2d43714, size 0xf4, virtual false, abstract: false, final false
  static inline void
  add_OnTrackAnimationPlayableCreate(::System::Action_3<::UnityW<::UnityEngine::Timeline::TrackAsset>, ::UnityW<::UnityEngine::GameObject>, ::UnityEngine::Playables::Playable>* value);

  static inline ::System::Action_3<::UnityEngine::Timeline::TimelineClip*, ::UnityW<::UnityEngine::GameObject>, ::UnityEngine::Playables::Playable>* getStaticF_OnClipPlayableCreate();

  static inline ::System::Action_3<::UnityW<::UnityEngine::Timeline::TrackAsset>, ::UnityW<::UnityEngine::GameObject>, ::UnityEngine::Playables::Playable>* getStaticF_OnTrackAnimationPlayableCreate();

  static inline ::UnityEngine::Timeline::__TrackAsset__TransientBuildData getStaticF_s_BuildData();

  static inline ::ArrayW<::UnityW<::UnityEngine::Timeline::TrackAsset>, ::Array<::UnityW<::UnityEngine::Timeline::TrackAsset>>*> getStaticF_s_EmptyCache();

  static inline ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::Timeline::TrackBindingTypeAttribute*>* getStaticF_s_TrackBindingTypeAttributeCache();

  /// @brief Method get_clips, addr 0x2d38cec, size 0xb0, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Timeline::TimelineClip*, ::Array<::UnityEngine::Timeline::TimelineClip*>*> get_clips();

  /// @brief Method get_curves, addr 0x2d43ebc, size 0x8, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::AnimationClip> get_curves();

  /// @brief Method get_customPlayableTypename, addr 0x2d43eac, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_customPlayableTypename();

  /// @brief Method get_duration, addr 0x2d43a68, size 0x60, virtual true, abstract: false, final true
  inline double_t get_duration();

  /// @brief Method get_end, addr 0x2d41020, size 0x60, virtual false, abstract: false, final false
  inline double_t get_end();

  /// @brief Method get_hasClips, addr 0x2d369b0, size 0x54, virtual false, abstract: false, final false
  inline bool get_hasClips();

  /// @brief Method get_hasCurves, addr 0x2d43b60, size 0x8c, virtual true, abstract: false, final true
  inline bool get_hasCurves();

  /// @brief Method get_isEmpty, addr 0x2d43af4, size 0x6c, virtual true, abstract: false, final false
  inline bool get_isEmpty();

  /// @brief Method get_isSubTrack, addr 0x2d39620, size 0x120, virtual false, abstract: false, final false
  inline bool get_isSubTrack();

  /// @brief Method get_locked, addr 0x2d43f20, size 0x8, virtual false, abstract: false, final false
  inline bool get_locked();

  /// @brief Method get_lockedInHierarchy, addr 0x2d43f34, size 0x18c, virtual false, abstract: false, final false
  inline bool get_lockedInHierarchy();

  /// @brief Method get_muted, addr 0x2d43ad0, size 0x8, virtual false, abstract: false, final false
  inline bool get_muted();

  /// @brief Method get_mutedInHierarchy, addr 0x2d40cf4, size 0x18c, virtual false, abstract: false, final false
  inline bool get_mutedInHierarchy();

  /// @brief Method get_outputs, addr 0x2d43bf4, size 0x78, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>* get_outputs();

  /// @brief Method get_parent, addr 0x2d43ae4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Playables::PlayableAsset> get_parent();

  /// @brief Method get_start, addr 0x2d438fc, size 0x60, virtual false, abstract: false, final false
  inline double_t get_start();

  /// @brief Method get_subTracksObjects, addr 0x2d43f18, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ScriptableObject>>* get_subTracksObjects();

  /// @brief Method get_supportsNotifications, addr 0x2d440c0, size 0xb4, virtual false, abstract: false, final false
  inline bool get_supportsNotifications();

  /// @brief Method get_timelineAsset, addr 0x2d413f0, size 0x16c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Timeline::TimelineAsset> get_timelineAsset();

  /// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

  /// @brief Convert to "::UnityEngine::Timeline::ICurvesOwner"
  constexpr ::UnityEngine::Timeline::ICurvesOwner* i___UnityEngine__Timeline__ICurvesOwner() noexcept;

  /// @brief Convert to "::UnityEngine::Timeline::IPropertyPreview"
  constexpr ::UnityEngine::Timeline::IPropertyPreview* i___UnityEngine__Timeline__IPropertyPreview() noexcept;

  /// @brief Method remove_OnClipPlayableCreate, addr 0x2d43620, size 0xf4, virtual false, abstract: false, final false
  static inline void remove_OnClipPlayableCreate(::System::Action_3<::UnityEngine::Timeline::TimelineClip*, ::UnityW<::UnityEngine::GameObject>, ::UnityEngine::Playables::Playable>* value);

  /// @brief Method remove_OnTrackAnimationPlayableCreate, addr 0x2d43808, size 0xf4, virtual false, abstract: false, final false
  static inline void
  remove_OnTrackAnimationPlayableCreate(::System::Action_3<::UnityW<::UnityEngine::Timeline::TrackAsset>, ::UnityW<::UnityEngine::GameObject>, ::UnityEngine::Playables::Playable>* value);

  static inline void setStaticF_OnClipPlayableCreate(::System::Action_3<::UnityEngine::Timeline::TimelineClip*, ::UnityW<::UnityEngine::GameObject>, ::UnityEngine::Playables::Playable>* value);

  static inline void
  setStaticF_OnTrackAnimationPlayableCreate(::System::Action_3<::UnityW<::UnityEngine::Timeline::TrackAsset>, ::UnityW<::UnityEngine::GameObject>, ::UnityEngine::Playables::Playable>* value);

  static inline void setStaticF_s_BuildData(::UnityEngine::Timeline::__TrackAsset__TransientBuildData value);

  static inline void setStaticF_s_EmptyCache(::ArrayW<::UnityW<::UnityEngine::Timeline::TrackAsset>, ::Array<::UnityW<::UnityEngine::Timeline::TrackAsset>>*> value);

  static inline void setStaticF_s_TrackBindingTypeAttributeCache(::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::Timeline::TrackBindingTypeAttribute*>* value);

  /// @brief Method set_curves, addr 0x2d43ec4, size 0x8, virtual false, abstract: false, final false
  inline void set_curves(::UnityEngine::AnimationClip* value);

  /// @brief Method set_customPlayableTypename, addr 0x2d43eb4, size 0x8, virtual false, abstract: false, final false
  inline void set_customPlayableTypename(::StringW value);

  /// @brief Method set_locked, addr 0x2d43f28, size 0xc, virtual false, abstract: false, final false
  inline void set_locked(bool value);

  /// @brief Method set_muted, addr 0x2d43ad8, size 0xc, virtual false, abstract: false, final false
  inline void set_muted(bool value);

  /// @brief Method set_parent, addr 0x2d43aec, size 0x8, virtual false, abstract: false, final false
  inline void set_parent(::UnityEngine::Playables::PlayableAsset* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TrackAsset();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TrackAsset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TrackAsset(TrackAsset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TrackAsset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TrackAsset(TrackAsset const&) = delete;

  /// @brief Field m_Version, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_Version;

  /// @brief Field m_AnimClip, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AnimationClip> ___m_AnimClip;

  /// @brief Field m_Locked, offset: 0x28, size: 0x1, def value: None
  bool ___m_Locked;

  /// @brief Field m_Muted, offset: 0x29, size: 0x1, def value: None
  bool ___m_Muted;

  /// @brief Field m_CustomPlayableFullTypename, offset: 0x30, size: 0x8, def value: None
  ::StringW ___m_CustomPlayableFullTypename;

  /// @brief Field m_Curves, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AnimationClip> ___m_Curves;

  /// @brief Field m_Parent, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Playables::PlayableAsset> ___m_Parent;

  /// @brief Field m_Children, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ScriptableObject>>* ___m_Children;

  /// @brief Field m_ItemsHash, offset: 0x50, size: 0x4, def value: None
  int32_t ___m_ItemsHash;

  /// @brief Field m_ClipsCache, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Timeline::TimelineClip*, ::Array<::UnityEngine::Timeline::TimelineClip*>*> ___m_ClipsCache;

  /// @brief Field m_Start, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::Timeline::DiscreteTime ___m_Start;

  /// @brief Field m_End, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::Timeline::DiscreteTime ___m_End;

  /// @brief Field m_CacheSorted, offset: 0x70, size: 0x1, def value: None
  bool ___m_CacheSorted;

  /// @brief Field m_SupportsNotifications, offset: 0x71, size: 0x2, def value: None
  ::System::Nullable_1<bool> ___m_SupportsNotifications;

  /// @brief Field m_ChildTrackCache, offset: 0x78, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Timeline::TrackAsset>>* ___m_ChildTrackCache;

  /// @brief Field m_Clips, offset: 0x80, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineClip*>* ___m_Clips;

  /// @brief Field m_Markers, offset: 0x88, size: 0x18, def value: None
  ::UnityEngine::Timeline::MarkerList ___m_Markers;

  /// @brief Field kDefaultCurvesName offset 0xffffffff size 0x8
  static constexpr ::ConstString kDefaultCurvesName{ u"Track Parameters" };

  /// @brief Field k_LatestVersion offset 0xffffffff size 0x4
  static constexpr int32_t k_LatestVersion{ static_cast<int32_t>(0x3) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::TrackAsset, 0xa0>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TrackAsset, ___m_Version) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TrackAsset, ___m_AnimClip) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TrackAsset, ___m_Locked) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TrackAsset, ___m_Muted) == 0x29, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TrackAsset, ___m_CustomPlayableFullTypename) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TrackAsset, ___m_Curves) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TrackAsset, ___m_Parent) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TrackAsset, ___m_Children) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TrackAsset, ___m_ItemsHash) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TrackAsset, ___m_ClipsCache) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TrackAsset, ___m_Start) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TrackAsset, ___m_End) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TrackAsset, ___m_CacheSorted) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TrackAsset, ___m_SupportsNotifications) == 0x71, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TrackAsset, ___m_ChildTrackCache) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TrackAsset, ___m_Clips) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TrackAsset, ___m_Markers) == 0x88, "Offset mismatch!");

} // namespace UnityEngine::Timeline
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::__TrackAsset__Versions, "UnityEngine.Timeline", "TrackAsset/Versions");
NEED_NO_BOX(::UnityEngine::Timeline::TrackAsset);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::TrackAsset*, "UnityEngine.Timeline", "TrackAsset");
NEED_NO_BOX(::UnityEngine::Timeline::__TrackAsset__TrackAssetUpgrade);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::__TrackAsset__TrackAssetUpgrade*, "UnityEngine.Timeline", "TrackAsset/TrackAssetUpgrade");
NEED_NO_BOX(::UnityEngine::Timeline::__TrackAsset____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::__TrackAsset____c*, "UnityEngine.Timeline", "TrackAsset/<>c");
NEED_NO_BOX(::UnityEngine::Timeline::__TrackAsset___get_outputs_d__65);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::__TrackAsset___get_outputs_d__65*, "UnityEngine.Timeline", "TrackAsset/<get_outputs>d__65");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::__TrackAsset__TransientBuildData, "UnityEngine.Timeline", "TrackAsset/TransientBuildData");
