#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TimelinePlayable)
namespace UnityEngine::Playables {
struct FrameData;
}
namespace UnityEngine::Animations {
struct AnimationPlayableOutput;
}
namespace UnityEngine::Timeline {
class RuntimeElement;
}
namespace UnityEngine::Timeline {
class ITimelineEvaluateCallback;
}
namespace UnityEngine::Timeline {
template <typename T> class IntervalTree_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace UnityEngine {
class GameObject;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::Timeline {
class TrackAsset;
}
namespace UnityEngine::Playables {
template <typename T> struct ScriptPlayable_1;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace UnityEngine::Playables {
struct Playable;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class TimelinePlayable;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::TimelinePlayable);
// Type: UnityEngine.Timeline::TimelinePlayable
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10347))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14200))
// CS Name: ::UnityEngine.Timeline::TimelinePlayable*
class CORDL_TYPE TimelinePlayable : public ::UnityEngine::Playables::PlayableBehaviour {
public:
  // Declarations
  /// @brief Field m_IntervalTree, offset 0x10, size 0x8
  __declspec(property(get = __get_m_IntervalTree, put = __set_m_IntervalTree))::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>* m_IntervalTree;

  /// @brief Field m_ActiveClips, offset 0x18, size 0x8
  __declspec(property(get = __get_m_ActiveClips, put = __set_m_ActiveClips))::System::Collections::Generic::List_1<::UnityEngine::Timeline::RuntimeElement*>* m_ActiveClips;

  /// @brief Field m_CurrentListOfActiveClips, offset 0x20, size 0x8
  __declspec(property(get = __get_m_CurrentListOfActiveClips,
                      put = __set_m_CurrentListOfActiveClips))::System::Collections::Generic::List_1<::UnityEngine::Timeline::RuntimeElement*>* m_CurrentListOfActiveClips;

  /// @brief Field m_ActiveBit, offset 0x28, size 0x4
  __declspec(property(get = __get_m_ActiveBit, put = __set_m_ActiveBit)) int32_t m_ActiveBit;

  /// @brief Field m_EvaluateCallbacks, offset 0x30, size 0x8
  __declspec(property(get = __get_m_EvaluateCallbacks,
                      put = __set_m_EvaluateCallbacks))::System::Collections::Generic::List_1<::UnityEngine::Timeline::ITimelineEvaluateCallback*>* m_EvaluateCallbacks;

  /// @brief Field m_PlayableCache, offset 0x38, size 0x8
  __declspec(property(get = __get_m_PlayableCache,
                      put = __set_m_PlayableCache))::System::Collections::Generic::Dictionary_2<::UnityEngine::Timeline::TrackAsset*, ::UnityEngine::Playables::Playable>* m_PlayableCache;

  /// @brief Field muteAudioScrubbing, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_muteAudioScrubbing, put = setStaticF_muteAudioScrubbing)) bool muteAudioScrubbing;

  constexpr ::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>*& __get_m_IntervalTree();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>*> const& __get_m_IntervalTree() const;

  constexpr void __set_m_IntervalTree(::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>* value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Timeline::RuntimeElement*>*& __get_m_ActiveClips();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Timeline::RuntimeElement*>*> const& __get_m_ActiveClips() const;

  constexpr void __set_m_ActiveClips(::System::Collections::Generic::List_1<::UnityEngine::Timeline::RuntimeElement*>* value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Timeline::RuntimeElement*>*& __get_m_CurrentListOfActiveClips();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Timeline::RuntimeElement*>*> const& __get_m_CurrentListOfActiveClips() const;

  constexpr void __set_m_CurrentListOfActiveClips(::System::Collections::Generic::List_1<::UnityEngine::Timeline::RuntimeElement*>* value);

  constexpr int32_t& __get_m_ActiveBit();

  constexpr int32_t const& __get_m_ActiveBit() const;

  constexpr void __set_m_ActiveBit(int32_t value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Timeline::ITimelineEvaluateCallback*>*& __get_m_EvaluateCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Timeline::ITimelineEvaluateCallback*>*> const& __get_m_EvaluateCallbacks() const;

  constexpr void __set_m_EvaluateCallbacks(::System::Collections::Generic::List_1<::UnityEngine::Timeline::ITimelineEvaluateCallback*>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Timeline::TrackAsset*, ::UnityEngine::Playables::Playable>*& __get_m_PlayableCache();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::Timeline::TrackAsset*, ::UnityEngine::Playables::Playable>*> const&
  __get_m_PlayableCache() const;

  constexpr void __set_m_PlayableCache(::System::Collections::Generic::Dictionary_2<::UnityEngine::Timeline::TrackAsset*, ::UnityEngine::Playables::Playable>* value);

  static inline void setStaticF_muteAudioScrubbing(bool value);

  static inline bool getStaticF_muteAudioScrubbing();

  /// @brief Method Create addr 0x2aeaae0 size 0x220 virtual false final false
  static inline ::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::TimelinePlayable*>
  Create(::UnityEngine::Playables::PlayableGraph graph, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>* tracks, ::UnityEngine::GameObject* go, bool autoRebalance,
         bool createOutputs);

  /// @brief Method Compile addr 0x2aead00 size 0x290 virtual false final false
  inline void Compile(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Playables::Playable timelinePlayable,
                      ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>* tracks, ::UnityEngine::GameObject* go, bool autoRebalance, bool createOutputs);

  /// @brief Method CompileTrackList addr 0x2aeaf90 size 0x39c virtual false final false
  inline void CompileTrackList(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Playables::Playable timelinePlayable,
                               ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>* tracks, ::UnityEngine::GameObject* go, bool createOutputs);

  /// @brief Method CreateTrackOutput addr 0x2aeb74c size 0x680 virtual false final false
  inline void CreateTrackOutput(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Timeline::TrackAsset* track, ::UnityEngine::GameObject* go, ::UnityEngine::Playables::Playable playable,
                                int32_t port);

  /// @brief Method EvaluateWeightsForAnimationPlayableOutput addr 0x2aebdcc size 0xf0 virtual false final false
  inline void EvaluateWeightsForAnimationPlayableOutput(::UnityEngine::Timeline::TrackAsset* track, ::UnityEngine::Animations::AnimationPlayableOutput animOutput);

  /// @brief Method EvaluateAnimationPreviewUpdateCallback addr 0x2aebebc size 0xf0 virtual false final false
  inline void EvaluateAnimationPreviewUpdateCallback(::UnityEngine::Timeline::TrackAsset* track, ::UnityEngine::Animations::AnimationPlayableOutput animOutput);

  /// @brief Method CreateTrackPlayable addr 0x2aeb32c size 0x420 virtual false final false
  inline ::UnityEngine::Playables::Playable CreateTrackPlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Playables::Playable timelinePlayable,
                                                                ::UnityEngine::Timeline::TrackAsset* track, ::UnityEngine::GameObject* go, bool createOutputs);

  /// @brief Method PrepareFrame addr 0x2aec01c size 0x2c virtual true final false
  inline void PrepareFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info);

  /// @brief Method Evaluate addr 0x2aec048 size 0x5ec virtual false final false
  inline void Evaluate(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData frameData);

  /// @brief Method CacheTrack addr 0x2aebfac size 0x70 virtual false final false
  inline void CacheTrack(::UnityEngine::Timeline::TrackAsset* track, ::UnityEngine::Playables::Playable playable, int32_t port, ::UnityEngine::Playables::Playable parent);

  /// @brief Method ForAOTCompilationOnly addr 0x2aec634 size 0x64 virtual false final false
  static inline void ForAOTCompilationOnly();

  static inline ::UnityEngine::Timeline::TimelinePlayable* New_ctor();

  /// @brief Method .ctor addr 0x2aec698 size 0x148 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TimelinePlayable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimelinePlayable(TimelinePlayable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimelinePlayable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimelinePlayable(TimelinePlayable const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimelinePlayable();

public:
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
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::Timeline::TrackAsset*, ::UnityEngine::Playables::Playable>* ___m_PlayableCache;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::TimelinePlayable, 0x40>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimelinePlayable, ___m_IntervalTree) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimelinePlayable, ___m_ActiveClips) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimelinePlayable, ___m_CurrentListOfActiveClips) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimelinePlayable, ___m_ActiveBit) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimelinePlayable, ___m_EvaluateCallbacks) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimelinePlayable, ___m_PlayableCache) == 0x38, "Offset mismatch!");

} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::TimelinePlayable);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::TimelinePlayable*, "UnityEngine.Timeline", "TimelinePlayable");
