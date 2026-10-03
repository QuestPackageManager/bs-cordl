#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/TimelinePlayable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TimelinePlayable)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::Animations {
struct AnimationPlayableOutput;
}
namespace UnityEngine::Playables {
struct FrameData;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
struct PlayableOutput;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine::Playables {
template <typename T> struct ScriptPlayable_1;
}
namespace UnityEngine::Timeline {
class AnimationTrack;
}
namespace UnityEngine::Timeline {
class ITimelineEvaluateCallback;
}
namespace UnityEngine::Timeline {
template <typename T> class IntervalTree_1;
}
namespace UnityEngine::Timeline {
class RuntimeElement;
}
namespace UnityEngine::Timeline {
struct TimelinePlayable_TrackCacheManager;
}
namespace UnityEngine::Timeline {
class TrackAsset;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class TimelinePlayable;
}
namespace UnityEngine::Timeline {
struct TimelinePlayable_TrackCacheManager;
}
// Write type traits
MARK_REF_T(::UnityEngine::Timeline::TimelinePlayable*);
MARK_VAL_T(::UnityEngine::Timeline::TimelinePlayable_TrackCacheManager);
DEFINE_IL2CPP_CLASS(::UnityEngine::Timeline::TimelinePlayable*, "UnityEngine.Timeline", "TimelinePlayable");
DEFINE_IL2CPP_CLASS(::UnityEngine::Timeline::TimelinePlayable_TrackCacheManager, "UnityEngine.Timeline", "TimelinePlayable/TrackCacheManager");
// [IsReadOnly]
// Dependencies
namespace UnityEngine::Timeline {
// Is value type: true
// CS Name: UnityEngine.Timeline.TimelinePlayable/TrackCacheManager
struct CORDL_TYPE TimelinePlayable_TrackCacheManager {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x6df60e8, size 0x54, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method GetTrackAssetsFromRuntimeElements, addr 0x6df5ecc, size 0x21c, virtual false, abstract: false, final false
  inline void GetTrackAssetsFromRuntimeElements(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Timeline::RuntimeElement*>* activeRuntimeElements);

  /// @brief Method .ctor, addr 0x6df5970, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Timeline::AnimationTrack>>* cache,
                    ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Timeline::RuntimeElement*>* activeRuntimeElements);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr TimelinePlayable_TrackCacheManager();

  // Ctor Parameters [CppParam { name: "trackCache", ty: "::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Timeline::AnimationTrack>>*", modifiers: "", def_value: None, comment: None
  // }]
  constexpr TimelinePlayable_TrackCacheManager(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Timeline::AnimationTrack>>* trackCache) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19364 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field trackCache, offset: 0x0, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Timeline::AnimationTrack>>* trackCache;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Timeline::TimelinePlayable_TrackCacheManager, trackCache) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Timeline::TimelinePlayable_TrackCacheManager) == 0x8, "Size mismatch!");

} // namespace UnityEngine::Timeline
// Dependencies Unity.Profiling.ProfilerMarker, UnityEngine.Playables.PlayableBehaviour
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: UnityEngine.Timeline.TimelinePlayable
class CORDL_TYPE TimelinePlayable : public ::UnityEngine::Playables::PlayableBehaviour {
public:
  // Declarations
  using TrackCacheManager = ::UnityEngine::Timeline::TimelinePlayable_TrackCacheManager;

  /// @brief Field k_CreateTimelineGraphMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_CreateTimelineGraphMarker, put = setStaticF_k_CreateTimelineGraphMarker)) ::Unity::Profiling::ProfilerMarker k_CreateTimelineGraphMarker;

  /// @brief Field k_CreateTimelineTrackMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_CreateTimelineTrackMarker, put = setStaticF_k_CreateTimelineTrackMarker)) ::Unity::Profiling::ProfilerMarker k_CreateTimelineTrackMarker;

  /// @brief Field k_CreateTimelineTrackOutputsMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_CreateTimelineTrackOutputsMarker, put = setStaticF_k_CreateTimelineTrackOutputsMarker)) ::Unity::Profiling::ProfilerMarker k_CreateTimelineTrackOutputsMarker;

  /// @brief Field m_ActiveBit, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ActiveBit, put = __cordl_internal_set_m_ActiveBit)) int32_t m_ActiveBit;

  /// @brief Field m_ActiveClips, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ActiveClips,
                      put = __cordl_internal_set_m_ActiveClips)) ::System::Collections::Generic::List_1<::UnityEngine::Timeline::RuntimeElement*>* m_ActiveClips;

  /// @brief Field m_ActiveTracksToEvaluateCache, offset 0x58, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_ActiveTracksToEvaluateCache,
      put = __cordl_internal_set_m_ActiveTracksToEvaluateCache)) ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Timeline::AnimationTrack>>* m_ActiveTracksToEvaluateCache;

  /// @brief Field m_AlwaysEvaluateCallbacks, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AlwaysEvaluateCallbacks,
                      put = __cordl_internal_set_m_AlwaysEvaluateCallbacks)) ::System::Collections::Generic::List_1<::UnityEngine::Timeline::ITimelineEvaluateCallback*>* m_AlwaysEvaluateCallbacks;

  /// @brief Field m_CurrentListOfActiveClips, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CurrentListOfActiveClips,
                      put = __cordl_internal_set_m_CurrentListOfActiveClips)) ::System::Collections::Generic::List_1<::UnityEngine::Timeline::RuntimeElement*>* m_CurrentListOfActiveClips;

  /// @brief Field m_EvaluateCallbacks, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_EvaluateCallbacks, put = __cordl_internal_set_m_EvaluateCallbacks)) ::System::Collections::Generic::Dictionary_2<
      ::UnityW<::UnityEngine::Timeline::AnimationTrack>, ::System::Collections::Generic::List_1<::UnityEngine::Timeline::ITimelineEvaluateCallback*>*>* m_EvaluateCallbacks;

  /// @brief Field m_ForceEvaluateNextEvaluate, offset 0x48, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_ForceEvaluateNextEvaluate,
      put = __cordl_internal_set_m_ForceEvaluateNextEvaluate)) ::System::Collections::Generic::HashSet_1<::UnityEngine::Timeline::ITimelineEvaluateCallback*>* m_ForceEvaluateNextEvaluate;

  /// @brief Field m_IntervalTree, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_IntervalTree,
                      put = __cordl_internal_set_m_IntervalTree)) ::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>* m_IntervalTree;

  /// @brief Field m_InvokedThisFrame, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_InvokedThisFrame,
                      put = __cordl_internal_set_m_InvokedThisFrame)) ::System::Collections::Generic::HashSet_1<::UnityEngine::Timeline::ITimelineEvaluateCallback*>* m_InvokedThisFrame;

  /// @brief Field m_PlayableCache, offset 0x30, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_PlayableCache,
      put = __cordl_internal_set_m_PlayableCache)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Timeline::TrackAsset>, ::UnityEngine::Playables::Playable>* m_PlayableCache;

  /// @brief Field m_SetClipsLocalTimeMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_SetClipsLocalTimeMarker, put = setStaticF_m_SetClipsLocalTimeMarker)) ::Unity::Profiling::ProfilerMarker m_SetClipsLocalTimeMarker;

  /// @brief Field m_findActiveClipsMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_findActiveClipsMarker, put = setStaticF_m_findActiveClipsMarker)) ::Unity::Profiling::ProfilerMarker m_findActiveClipsMarker;

  /// @brief Field muteAudioScrubbing, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_muteAudioScrubbing, put = setStaticF_muteAudioScrubbing)) bool muteAudioScrubbing;

  /// @brief Method AddEvaluateCallback, addr 0x6df5780, size 0x1f0, virtual false, abstract: false, final false
  inline void AddEvaluateCallback(::UnityEngine::Timeline::AnimationTrack* track, ::UnityEngine::Timeline::ITimelineEvaluateCallback* callback);

  /// @brief Method AddOutputWeightProcessor, addr 0x6df5634, size 0x14c, virtual false, abstract: false, final false
  inline void AddOutputWeightProcessor(::UnityEngine::Timeline::AnimationTrack* track, ::UnityEngine::Animations::AnimationPlayableOutput animOutput);

  /// @brief Method AddPlayableOutputCallbacks, addr 0x6df4824, size 0x3c, virtual false, abstract: false, final false
  inline void AddPlayableOutputCallbacks(::UnityEngine::Timeline::AnimationTrack* track, ::UnityEngine::Playables::PlayableOutput playableOutput);

  /// @brief Method CacheTrack, addr 0x6df4860, size 0x8c, virtual false, abstract: false, final false
  inline void CacheTrack(::UnityEngine::Timeline::TrackAsset* track, ::UnityEngine::Playables::Playable playable);

  /// @brief Method Compile, addr 0x6df3718, size 0x2e8, virtual false, abstract: false, final false
  inline void Compile(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Playables::Playable timelinePlayable,
                      ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Timeline::TrackAsset>>* tracks, ::UnityEngine::GameObject* go, bool autoRebalance, bool createOutputs);

  /// @brief Method CompileTrackList, addr 0x6df3a00, size 0x38c, virtual false, abstract: false, final false
  inline void CompileTrackList(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Playables::Playable timelinePlayable,
                               ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Timeline::TrackAsset>>* tracks, ::UnityEngine::GameObject* go, bool createOutputs);

  /// @brief Method Create, addr 0x6df34f4, size 0x224, virtual false, abstract: false, final false
  static inline ::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::TimelinePlayable*>
  Create(::UnityEngine::Playables::PlayableGraph graph, ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Timeline::TrackAsset>>* tracks, ::UnityEngine::GameObject* go,
         bool autoRebalance, bool createOutputs);

  /// @brief Method CreateTrackOutput, addr 0x6df418c, size 0x698, virtual false, abstract: false, final false
  inline void CreateTrackOutput(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Timeline::TrackAsset* track, ::UnityEngine::GameObject* go, ::UnityEngine::Playables::Playable playable,
                                int32_t port);

  /// @brief Method CreateTrackPlayable, addr 0x6df3d8c, size 0x400, virtual false, abstract: false, final false
  inline ::UnityEngine::Playables::Playable CreateTrackPlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Playables::Playable timelinePlayable,
                                                                ::UnityEngine::Timeline::TrackAsset* track, ::UnityEngine::GameObject* go, bool createOutputs);

  /// @brief Method Evaluate, addr 0x6df4918, size 0x450, virtual false, abstract: false, final false
  inline void Evaluate(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData frameData);

  /// @brief Method ForAOTCompilationOnly, addr 0x6df55d0, size 0x64, virtual false, abstract: false, final false
  static inline void ForAOTCompilationOnly();

  /// @brief Method InvokeOutputCallbacks, addr 0x6df4d68, size 0x868, virtual false, abstract: false, final false
  inline void InvokeOutputCallbacks(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Timeline::RuntimeElement*>* activeRuntimeElements);

  static inline ::UnityEngine::Timeline::TimelinePlayable* New_ctor();

  /// @brief Method PrepareFrame, addr 0x6df48ec, size 0x2c, virtual true, abstract: false, final false
  inline void PrepareFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info);

  /// @brief Method TryGetCallbackList, addr 0x6df5980, size 0x13c, virtual false, abstract: false, final false
  inline bool TryGetCallbackList(::UnityEngine::Timeline::AnimationTrack* track, ::by_ref<::System::Collections::Generic::List_1<::UnityEngine::Timeline::ITimelineEvaluateCallback*>*> list);

  constexpr int32_t const& __cordl_internal_get_m_ActiveBit() const;

  constexpr int32_t& __cordl_internal_get_m_ActiveBit();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Timeline::RuntimeElement*>* const& __cordl_internal_get_m_ActiveClips() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Timeline::RuntimeElement*>*& __cordl_internal_get_m_ActiveClips();

  constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Timeline::AnimationTrack>>* const& __cordl_internal_get_m_ActiveTracksToEvaluateCache() const;

  constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Timeline::AnimationTrack>>*& __cordl_internal_get_m_ActiveTracksToEvaluateCache();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Timeline::ITimelineEvaluateCallback*>* const& __cordl_internal_get_m_AlwaysEvaluateCallbacks() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Timeline::ITimelineEvaluateCallback*>*& __cordl_internal_get_m_AlwaysEvaluateCallbacks();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Timeline::RuntimeElement*>* const& __cordl_internal_get_m_CurrentListOfActiveClips() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Timeline::RuntimeElement*>*& __cordl_internal_get_m_CurrentListOfActiveClips();

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Timeline::AnimationTrack>,
                                                         ::System::Collections::Generic::List_1<::UnityEngine::Timeline::ITimelineEvaluateCallback*>*>* const&
  __cordl_internal_get_m_EvaluateCallbacks() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Timeline::AnimationTrack>,
                                                         ::System::Collections::Generic::List_1<::UnityEngine::Timeline::ITimelineEvaluateCallback*>*>*&
  __cordl_internal_get_m_EvaluateCallbacks();

  constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::Timeline::ITimelineEvaluateCallback*>* const& __cordl_internal_get_m_ForceEvaluateNextEvaluate() const;

  constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::Timeline::ITimelineEvaluateCallback*>*& __cordl_internal_get_m_ForceEvaluateNextEvaluate();

  constexpr ::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>* const& __cordl_internal_get_m_IntervalTree() const;

  constexpr ::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>*& __cordl_internal_get_m_IntervalTree();

  constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::Timeline::ITimelineEvaluateCallback*>* const& __cordl_internal_get_m_InvokedThisFrame() const;

  constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::Timeline::ITimelineEvaluateCallback*>*& __cordl_internal_get_m_InvokedThisFrame();

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Timeline::TrackAsset>, ::UnityEngine::Playables::Playable>* const& __cordl_internal_get_m_PlayableCache() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Timeline::TrackAsset>, ::UnityEngine::Playables::Playable>*& __cordl_internal_get_m_PlayableCache();

  constexpr void __cordl_internal_set_m_ActiveBit(int32_t value);

  constexpr void __cordl_internal_set_m_ActiveClips(::System::Collections::Generic::List_1<::UnityEngine::Timeline::RuntimeElement*>* value);

  constexpr void __cordl_internal_set_m_ActiveTracksToEvaluateCache(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Timeline::AnimationTrack>>* value);

  constexpr void __cordl_internal_set_m_AlwaysEvaluateCallbacks(::System::Collections::Generic::List_1<::UnityEngine::Timeline::ITimelineEvaluateCallback*>* value);

  constexpr void __cordl_internal_set_m_CurrentListOfActiveClips(::System::Collections::Generic::List_1<::UnityEngine::Timeline::RuntimeElement*>* value);

  constexpr void
  __cordl_internal_set_m_EvaluateCallbacks(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Timeline::AnimationTrack>,
                                                                                        ::System::Collections::Generic::List_1<::UnityEngine::Timeline::ITimelineEvaluateCallback*>*>* value);

  constexpr void __cordl_internal_set_m_ForceEvaluateNextEvaluate(::System::Collections::Generic::HashSet_1<::UnityEngine::Timeline::ITimelineEvaluateCallback*>* value);

  constexpr void __cordl_internal_set_m_IntervalTree(::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>* value);

  constexpr void __cordl_internal_set_m_InvokedThisFrame(::System::Collections::Generic::HashSet_1<::UnityEngine::Timeline::ITimelineEvaluateCallback*>* value);

  constexpr void __cordl_internal_set_m_PlayableCache(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Timeline::TrackAsset>, ::UnityEngine::Playables::Playable>* value);

  /// @brief Method .ctor, addr 0x6df5abc, size 0x28c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_CreateTimelineGraphMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_CreateTimelineTrackMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_CreateTimelineTrackOutputsMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_m_SetClipsLocalTimeMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_m_findActiveClipsMarker();

  static inline bool getStaticF_muteAudioScrubbing();

  static inline void setStaticF_k_CreateTimelineGraphMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_CreateTimelineTrackMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_CreateTimelineTrackOutputsMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_m_SetClipsLocalTimeMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_m_findActiveClipsMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_muteAudioScrubbing(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimelinePlayable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TimelinePlayable", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimelinePlayable(TimelinePlayable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimelinePlayable", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimelinePlayable(TimelinePlayable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19365 };

  /// @brief Field m_IntervalTree, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>* ___m_IntervalTree;

  /// @brief Field m_ActiveClips, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Timeline::RuntimeElement*>* ___m_ActiveClips;

  /// @brief Field m_CurrentListOfActiveClips, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Timeline::RuntimeElement*>* ___m_CurrentListOfActiveClips;

  /// @brief Field m_ActiveBit, offset: 0x28, size: 0x4, def value: None
  int32_t ___m_ActiveBit;

  /// @brief Field m_PlayableCache, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Timeline::TrackAsset>, ::UnityEngine::Playables::Playable>* ___m_PlayableCache;

  /// @brief Field m_EvaluateCallbacks, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Timeline::AnimationTrack>, ::System::Collections::Generic::List_1<::UnityEngine::Timeline::ITimelineEvaluateCallback*>*>*
      ___m_EvaluateCallbacks;

  /// @brief Field m_AlwaysEvaluateCallbacks, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Timeline::ITimelineEvaluateCallback*>* ___m_AlwaysEvaluateCallbacks;

  /// @brief Field m_ForceEvaluateNextEvaluate, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::UnityEngine::Timeline::ITimelineEvaluateCallback*>* ___m_ForceEvaluateNextEvaluate;

  /// @brief Field m_InvokedThisFrame, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::UnityEngine::Timeline::ITimelineEvaluateCallback*>* ___m_InvokedThisFrame;

  /// @brief Field m_ActiveTracksToEvaluateCache, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Timeline::AnimationTrack>>* ___m_ActiveTracksToEvaluateCache;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Timeline::TimelinePlayable, ___m_IntervalTree) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimelinePlayable, ___m_ActiveClips) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimelinePlayable, ___m_CurrentListOfActiveClips) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimelinePlayable, ___m_ActiveBit) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimelinePlayable, ___m_PlayableCache) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimelinePlayable, ___m_EvaluateCallbacks) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimelinePlayable, ___m_AlwaysEvaluateCallbacks) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimelinePlayable, ___m_ForceEvaluateNextEvaluate) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimelinePlayable, ___m_InvokedThisFrame) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimelinePlayable, ___m_ActiveTracksToEvaluateCache) == 0x58, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Timeline::TimelinePlayable) == 0x60, "Size mismatch!");

} // namespace UnityEngine::Timeline
