#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/TimelinePlayable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TimelinePlayable)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
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
struct Playable;
}
namespace UnityEngine::Playables {
template <typename T> struct ScriptPlayable_1;
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
class TrackAsset;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class TimelinePlayable;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::TimelinePlayable);
// Dependencies UnityEngine.Playables.PlayableBehaviour
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: UnityEngine.Timeline.TimelinePlayable
class CORDL_TYPE TimelinePlayable : public ::UnityEngine::Playables::PlayableBehaviour {
public:
  // Declarations
  /// @brief Field m_ActiveBit, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ActiveBit, put = __cordl_internal_set_m_ActiveBit)) int32_t m_ActiveBit;

  /// @brief Field m_ActiveClips, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ActiveClips,
                      put = __cordl_internal_set_m_ActiveClips)) ::System::Collections::Generic::List_1<::UnityEngine::Timeline::RuntimeElement*>* m_ActiveClips;

  /// @brief Field m_CurrentListOfActiveClips, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CurrentListOfActiveClips,
                      put = __cordl_internal_set_m_CurrentListOfActiveClips)) ::System::Collections::Generic::List_1<::UnityEngine::Timeline::RuntimeElement*>* m_CurrentListOfActiveClips;

  /// @brief Field m_EvaluateCallbacks, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_EvaluateCallbacks,
                      put = __cordl_internal_set_m_EvaluateCallbacks)) ::System::Collections::Generic::List_1<::UnityEngine::Timeline::ITimelineEvaluateCallback*>* m_EvaluateCallbacks;

  /// @brief Field m_IntervalTree, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_IntervalTree,
                      put = __cordl_internal_set_m_IntervalTree)) ::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>* m_IntervalTree;

  /// @brief Field m_PlayableCache, offset 0x38, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_PlayableCache,
      put = __cordl_internal_set_m_PlayableCache)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Timeline::TrackAsset>, ::UnityEngine::Playables::Playable>* m_PlayableCache;

  /// @brief Field muteAudioScrubbing, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_muteAudioScrubbing, put = setStaticF_muteAudioScrubbing)) bool muteAudioScrubbing;

  /// @brief Method CacheTrack, addr 0x482bec8, size 0x70, virtual false, abstract: false, final false
  inline void CacheTrack(::UnityEngine::Timeline::TrackAsset* track, ::UnityEngine::Playables::Playable playable, int32_t port, ::UnityEngine::Playables::Playable parent);

  /// @brief Method Compile, addr 0x482ac24, size 0x290, virtual false, abstract: false, final false
  inline void Compile(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Playables::Playable timelinePlayable,
                      ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Timeline::TrackAsset>>* tracks, ::UnityEngine::GameObject* go, bool autoRebalance, bool createOutputs);

  /// @brief Method CompileTrackList, addr 0x482aeb4, size 0x398, virtual false, abstract: false, final false
  inline void CompileTrackList(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Playables::Playable timelinePlayable,
                               ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Timeline::TrackAsset>>* tracks, ::UnityEngine::GameObject* go, bool createOutputs);

  /// @brief Method Create, addr 0x482aa10, size 0x214, virtual false, abstract: false, final false
  static inline ::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::TimelinePlayable*>
  Create(::UnityEngine::Playables::PlayableGraph graph, ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Timeline::TrackAsset>>* tracks, ::UnityEngine::GameObject* go,
         bool autoRebalance, bool createOutputs);

  /// @brief Method CreateTrackOutput, addr 0x482b63c, size 0x6bc, virtual false, abstract: false, final false
  inline void CreateTrackOutput(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Timeline::TrackAsset* track, ::UnityEngine::GameObject* go, ::UnityEngine::Playables::Playable playable,
                                int32_t port);

  /// @brief Method CreateTrackPlayable, addr 0x482b24c, size 0x3f0, virtual false, abstract: false, final false
  inline ::UnityEngine::Playables::Playable CreateTrackPlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Playables::Playable timelinePlayable,
                                                                ::UnityEngine::Timeline::TrackAsset* track, ::UnityEngine::GameObject* go, bool createOutputs);

  /// @brief Method Evaluate, addr 0x482bf64, size 0x5b8, virtual false, abstract: false, final false
  inline void Evaluate(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData frameData);

  /// @brief Method EvaluateAnimationPreviewUpdateCallback, addr 0x482bde0, size 0xe8, virtual false, abstract: false, final false
  inline void EvaluateAnimationPreviewUpdateCallback(::UnityEngine::Timeline::TrackAsset* track, ::UnityEngine::Animations::AnimationPlayableOutput animOutput);

  /// @brief Method EvaluateWeightsForAnimationPlayableOutput, addr 0x482bcf8, size 0xe8, virtual false, abstract: false, final false
  inline void EvaluateWeightsForAnimationPlayableOutput(::UnityEngine::Timeline::TrackAsset* track, ::UnityEngine::Animations::AnimationPlayableOutput animOutput);

  /// @brief Method ForAOTCompilationOnly, addr 0x482c51c, size 0x5c, virtual false, abstract: false, final false
  static inline void ForAOTCompilationOnly();

  static inline ::UnityEngine::Timeline::TimelinePlayable* New_ctor();

  /// @brief Method PrepareFrame, addr 0x482bf38, size 0x2c, virtual true, abstract: false, final false
  inline void PrepareFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info);

  constexpr int32_t const& __cordl_internal_get_m_ActiveBit() const;

  constexpr int32_t& __cordl_internal_get_m_ActiveBit();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Timeline::RuntimeElement*>* const& __cordl_internal_get_m_ActiveClips() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Timeline::RuntimeElement*>*& __cordl_internal_get_m_ActiveClips();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Timeline::RuntimeElement*>* const& __cordl_internal_get_m_CurrentListOfActiveClips() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Timeline::RuntimeElement*>*& __cordl_internal_get_m_CurrentListOfActiveClips();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Timeline::ITimelineEvaluateCallback*>* const& __cordl_internal_get_m_EvaluateCallbacks() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Timeline::ITimelineEvaluateCallback*>*& __cordl_internal_get_m_EvaluateCallbacks();

  constexpr ::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>* const& __cordl_internal_get_m_IntervalTree() const;

  constexpr ::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>*& __cordl_internal_get_m_IntervalTree();

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Timeline::TrackAsset>, ::UnityEngine::Playables::Playable>* const& __cordl_internal_get_m_PlayableCache() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Timeline::TrackAsset>, ::UnityEngine::Playables::Playable>*& __cordl_internal_get_m_PlayableCache();

  constexpr void __cordl_internal_set_m_ActiveBit(int32_t value);

  constexpr void __cordl_internal_set_m_ActiveClips(::System::Collections::Generic::List_1<::UnityEngine::Timeline::RuntimeElement*>* value);

  constexpr void __cordl_internal_set_m_CurrentListOfActiveClips(::System::Collections::Generic::List_1<::UnityEngine::Timeline::RuntimeElement*>* value);

  constexpr void __cordl_internal_set_m_EvaluateCallbacks(::System::Collections::Generic::List_1<::UnityEngine::Timeline::ITimelineEvaluateCallback*>* value);

  constexpr void __cordl_internal_set_m_IntervalTree(::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>* value);

  constexpr void __cordl_internal_set_m_PlayableCache(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Timeline::TrackAsset>, ::UnityEngine::Playables::Playable>* value);

  /// @brief Method .ctor, addr 0x482c578, size 0x154, virtual false, abstract: false, final false
  inline void _ctor();

  static inline bool getStaticF_muteAudioScrubbing();

  static inline void setStaticF_muteAudioScrubbing(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimelinePlayable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TimelinePlayable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimelinePlayable(TimelinePlayable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimelinePlayable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimelinePlayable(TimelinePlayable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15896 };

  /// @brief Field m_IntervalTree, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>* ___m_IntervalTree;

  /// @brief Field m_ActiveClips, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Timeline::RuntimeElement*>* ___m_ActiveClips;

  /// @brief Field m_CurrentListOfActiveClips, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Timeline::RuntimeElement*>* ___m_CurrentListOfActiveClips;

  /// @brief Field m_ActiveBit, offset: 0x28, size: 0x4, def value: None
  int32_t ___m_ActiveBit;

  /// @brief Field m_EvaluateCallbacks, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Timeline::ITimelineEvaluateCallback*>* ___m_EvaluateCallbacks;

  /// @brief Field m_PlayableCache, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Timeline::TrackAsset>, ::UnityEngine::Playables::Playable>* ___m_PlayableCache;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Timeline::TimelinePlayable, ___m_IntervalTree) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimelinePlayable, ___m_ActiveClips) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimelinePlayable, ___m_CurrentListOfActiveClips) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimelinePlayable, ___m_ActiveBit) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimelinePlayable, ___m_EvaluateCallbacks) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimelinePlayable, ___m_PlayableCache) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::TimelinePlayable, 0x40>, "Size mismatch!");

} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::TimelinePlayable);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::TimelinePlayable*, "UnityEngine.Timeline", "TimelinePlayable");
