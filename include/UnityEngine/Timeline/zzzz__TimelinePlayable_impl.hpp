#pragma once
// IWYU pragma private; include "UnityEngine\Timeline\TimelinePlayable.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_impl.hpp"
#include "UnityEngine/Timeline/zzzz__TimelinePlayable_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Animations/zzzz__AnimationPlayableOutput_def.hpp"
#include "UnityEngine/Playables/zzzz__FrameData_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/Playables/zzzz__ScriptPlayable_1_def.hpp"
#include "UnityEngine/Timeline/zzzz__ITimelineEvaluateCallback_def.hpp"
#include "UnityEngine/Timeline/zzzz__IntervalTree_1_def.hpp"
#include "UnityEngine/Timeline/zzzz__RuntimeElement_def.hpp"
#include "UnityEngine/Timeline/zzzz__TrackAsset_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::UnityEngine::Timeline::TimelinePlayable.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::TimelinePlayable*> (*)(
    ::UnityEngine::Playables::PlayableGraph, ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Timeline::TrackAsset>>*, ::UnityEngine::GameObject*, bool, bool)>(
    &::UnityEngine::Timeline::TimelinePlayable::Create)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x69cb488;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelinePlayable*>(),
                                                             { "Create",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Timeline::TrackAsset>>*>(),
                                                                 ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelinePlayable.Compile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TimelinePlayable::*)(
    ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Playables::Playable, ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Timeline::TrackAsset>>*,
    ::UnityEngine::GameObject*, bool, bool)>(&::UnityEngine::Timeline::TimelinePlayable::Compile)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x69cb6ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelinePlayable*>(),
                                                             { "Compile",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::UnityEngine::Playables::Playable>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Timeline::TrackAsset>>*>(),
                                                                 ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelinePlayable.CompileTrackList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TimelinePlayable::*)(
    ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Playables::Playable, ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Timeline::TrackAsset>>*,
    ::UnityEngine::GameObject*, bool)>(&::UnityEngine::Timeline::TimelinePlayable::CompileTrackList)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x69cb96c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelinePlayable*>(),
                                                             { "CompileTrackList",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::UnityEngine::Playables::Playable>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Timeline::TrackAsset>>*>(),
                                                                 ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelinePlayable.CreateTrackOutput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TimelinePlayable::*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Timeline::TrackAsset*,
                                                                                                           ::UnityEngine::GameObject*, ::UnityEngine::Playables::Playable, int32_t)>(
    &::UnityEngine::Timeline::TimelinePlayable::CreateTrackOutput)> {
  constexpr static std::size_t size = 0x6c8;
  constexpr static std::size_t addrs = 0x69cc0fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelinePlayable*>(),
                                                             { "CreateTrackOutput",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::UnityEngine::Timeline::TrackAsset*>(),
                                                                 ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Playables::Playable>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelinePlayable.EvaluateWeightsForAnimationPlayableOutput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TimelinePlayable::*)(::UnityEngine::Timeline::TrackAsset*, ::UnityEngine::Animations::AnimationPlayableOutput)>(
    &::UnityEngine::Timeline::TimelinePlayable::EvaluateWeightsForAnimationPlayableOutput)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x69cc7c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Timeline::TimelinePlayable*>(),
            { "EvaluateWeightsForAnimationPlayableOutput", {}, { ::i2c::type_of<::UnityEngine::Timeline::TrackAsset*>(), ::i2c::type_of<::UnityEngine::Animations::AnimationPlayableOutput>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelinePlayable.EvaluateAnimationPreviewUpdateCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TimelinePlayable::*)(::UnityEngine::Timeline::TrackAsset*, ::UnityEngine::Animations::AnimationPlayableOutput)>(
    &::UnityEngine::Timeline::TimelinePlayable::EvaluateAnimationPreviewUpdateCallback)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x69cc8b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Timeline::TimelinePlayable*>(),
            { "EvaluateAnimationPreviewUpdateCallback", {}, { ::i2c::type_of<::UnityEngine::Timeline::TrackAsset*>(), ::i2c::type_of<::UnityEngine::Animations::AnimationPlayableOutput>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelinePlayable.CreateTrackPlayable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::Playable (::UnityEngine::Timeline::TimelinePlayable::*)(
    ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Playables::Playable, ::UnityEngine::Timeline::TrackAsset*, ::UnityEngine::GameObject*, bool)>(
    &::UnityEngine::Timeline::TimelinePlayable::CreateTrackPlayable)> {
  constexpr static std::size_t size = 0x418;
  constexpr static std::size_t addrs = 0x69cbce4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelinePlayable*>(),
                                                             { "CreateTrackPlayable",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::UnityEngine::Playables::Playable>(),
                                                                 ::i2c::type_of<::UnityEngine::Timeline::TrackAsset*>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelinePlayable.PrepareFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TimelinePlayable::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData)>(
    &::UnityEngine::Timeline::TimelinePlayable::PrepareFrame)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x69cca30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelinePlayable*>(), { ::i2c::class_of<::UnityEngine::Timeline::TimelinePlayable*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelinePlayable.Evaluate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TimelinePlayable::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData)>(
    &::UnityEngine::Timeline::TimelinePlayable::Evaluate)> {
  constexpr static std::size_t size = 0x520;
  constexpr static std::size_t addrs = 0x69cca5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelinePlayable*>(),
                                                             { "Evaluate", {}, { ::i2c::type_of<::UnityEngine::Playables::Playable>(), ::i2c::type_of<::UnityEngine::Playables::FrameData>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelinePlayable.CacheTrack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TimelinePlayable::*)(
    ::UnityEngine::Timeline::TrackAsset*, ::UnityEngine::Playables::Playable, int32_t, ::UnityEngine::Playables::Playable)>(&::UnityEngine::Timeline::TimelinePlayable::CacheTrack)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x69cc9a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelinePlayable*>(),
                                                             { "CacheTrack",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Timeline::TrackAsset*>(), ::i2c::type_of<::UnityEngine::Playables::Playable>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Playables::Playable>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelinePlayable.ForAOTCompilationOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::Timeline::TimelinePlayable::ForAOTCompilationOnly)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x69ccf7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelinePlayable*>(), { "ForAOTCompilationOnly", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelinePlayable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TimelinePlayable::*)()>(&::UnityEngine::Timeline::TimelinePlayable::_ctor)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x69ccfe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelinePlayable*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>*& UnityEngine::Timeline::TimelinePlayable::__cordl_internal_get_m_IntervalTree() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IntervalTree;
}
constexpr ::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>* const& UnityEngine::Timeline::TimelinePlayable::__cordl_internal_get_m_IntervalTree() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IntervalTree;
}
constexpr void UnityEngine::Timeline::TimelinePlayable::__cordl_internal_set_m_IntervalTree(::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IntervalTree = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Timeline::RuntimeElement*>*& UnityEngine::Timeline::TimelinePlayable::__cordl_internal_get_m_ActiveClips() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActiveClips;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Timeline::RuntimeElement*>* const& UnityEngine::Timeline::TimelinePlayable::__cordl_internal_get_m_ActiveClips() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActiveClips;
}
constexpr void UnityEngine::Timeline::TimelinePlayable::__cordl_internal_set_m_ActiveClips(::System::Collections::Generic::List_1<::UnityEngine::Timeline::RuntimeElement*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ActiveClips = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Timeline::RuntimeElement*>*& UnityEngine::Timeline::TimelinePlayable::__cordl_internal_get_m_CurrentListOfActiveClips() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentListOfActiveClips;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Timeline::RuntimeElement*>* const& UnityEngine::Timeline::TimelinePlayable::__cordl_internal_get_m_CurrentListOfActiveClips() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentListOfActiveClips;
}
constexpr void UnityEngine::Timeline::TimelinePlayable::__cordl_internal_set_m_CurrentListOfActiveClips(::System::Collections::Generic::List_1<::UnityEngine::Timeline::RuntimeElement*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CurrentListOfActiveClips = value;
}
constexpr int32_t& UnityEngine::Timeline::TimelinePlayable::__cordl_internal_get_m_ActiveBit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActiveBit;
}
constexpr int32_t const& UnityEngine::Timeline::TimelinePlayable::__cordl_internal_get_m_ActiveBit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActiveBit;
}
constexpr void UnityEngine::Timeline::TimelinePlayable::__cordl_internal_set_m_ActiveBit(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ActiveBit = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Timeline::ITimelineEvaluateCallback*>*& UnityEngine::Timeline::TimelinePlayable::__cordl_internal_get_m_EvaluateCallbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EvaluateCallbacks;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Timeline::ITimelineEvaluateCallback*>* const&
UnityEngine::Timeline::TimelinePlayable::__cordl_internal_get_m_EvaluateCallbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EvaluateCallbacks;
}
constexpr void UnityEngine::Timeline::TimelinePlayable::__cordl_internal_set_m_EvaluateCallbacks(::System::Collections::Generic::List_1<::UnityEngine::Timeline::ITimelineEvaluateCallback*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EvaluateCallbacks = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Timeline::TrackAsset>, ::UnityEngine::Playables::Playable>*&
UnityEngine::Timeline::TimelinePlayable::__cordl_internal_get_m_PlayableCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PlayableCache;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Timeline::TrackAsset>, ::UnityEngine::Playables::Playable>* const&
UnityEngine::Timeline::TimelinePlayable::__cordl_internal_get_m_PlayableCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PlayableCache;
}
constexpr void UnityEngine::Timeline::TimelinePlayable::__cordl_internal_set_m_PlayableCache(
    ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Timeline::TrackAsset>, ::UnityEngine::Playables::Playable>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PlayableCache = value;
}
inline void UnityEngine::Timeline::TimelinePlayable::setStaticF_muteAudioScrubbing(bool value) {
  ::cordl_internals::setStaticField<bool, "muteAudioScrubbing", ::UnityEngine::Timeline::TimelinePlayable*>(std::forward<bool>(value));
}
inline bool UnityEngine::Timeline::TimelinePlayable::getStaticF_muteAudioScrubbing() {
  return ::cordl_internals::getStaticField<bool, "muteAudioScrubbing", ::UnityEngine::Timeline::TimelinePlayable*>();
}
inline ::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::TimelinePlayable*>
UnityEngine::Timeline::TimelinePlayable::Create(::UnityEngine::Playables::PlayableGraph graph, ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Timeline::TrackAsset>>* tracks,
                                                ::UnityEngine::GameObject* go, bool autoRebalance, bool createOutputs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelinePlayable*>(),
                                                           { "Create",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(),
                                                               ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Timeline::TrackAsset>>*>(),
                                                               ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::TimelinePlayable*>>(nullptr, ___internal_method, graph, tracks, go, autoRebalance,
                                                                                                                                     createOutputs);
}
inline void UnityEngine::Timeline::TimelinePlayable::Compile(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Playables::Playable timelinePlayable,
                                                             ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Timeline::TrackAsset>>* tracks, ::UnityEngine::GameObject* go,
                                                             bool autoRebalance, bool createOutputs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelinePlayable*>(),
                                                           { "Compile",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::UnityEngine::Playables::Playable>(),
                                                               ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Timeline::TrackAsset>>*>(),
                                                               ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, graph, timelinePlayable, tracks, go, autoRebalance, createOutputs);
}
inline void UnityEngine::Timeline::TimelinePlayable::CompileTrackList(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Playables::Playable timelinePlayable,
                                                                      ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Timeline::TrackAsset>>* tracks,
                                                                      ::UnityEngine::GameObject* go, bool createOutputs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelinePlayable*>(),
                                                           { "CompileTrackList",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::UnityEngine::Playables::Playable>(),
                                                               ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Timeline::TrackAsset>>*>(),
                                                               ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, graph, timelinePlayable, tracks, go, createOutputs);
}
inline void UnityEngine::Timeline::TimelinePlayable::CreateTrackOutput(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Timeline::TrackAsset* track, ::UnityEngine::GameObject* go,
                                                                       ::UnityEngine::Playables::Playable playable, int32_t port) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelinePlayable*>(),
                                                           { "CreateTrackOutput",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::UnityEngine::Timeline::TrackAsset*>(),
                                                               ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Playables::Playable>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, graph, track, go, playable, port);
}
inline void UnityEngine::Timeline::TimelinePlayable::EvaluateWeightsForAnimationPlayableOutput(::UnityEngine::Timeline::TrackAsset* track,
                                                                                               ::UnityEngine::Animations::AnimationPlayableOutput animOutput) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Timeline::TimelinePlayable*>(),
          { "EvaluateWeightsForAnimationPlayableOutput", {}, { ::i2c::type_of<::UnityEngine::Timeline::TrackAsset*>(), ::i2c::type_of<::UnityEngine::Animations::AnimationPlayableOutput>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, track, animOutput);
}
inline void UnityEngine::Timeline::TimelinePlayable::EvaluateAnimationPreviewUpdateCallback(::UnityEngine::Timeline::TrackAsset* track, ::UnityEngine::Animations::AnimationPlayableOutput animOutput) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Timeline::TimelinePlayable*>(),
          { "EvaluateAnimationPreviewUpdateCallback", {}, { ::i2c::type_of<::UnityEngine::Timeline::TrackAsset*>(), ::i2c::type_of<::UnityEngine::Animations::AnimationPlayableOutput>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, track, animOutput);
}
inline ::UnityEngine::Playables::Playable UnityEngine::Timeline::TimelinePlayable::CreateTrackPlayable(::UnityEngine::Playables::PlayableGraph graph,
                                                                                                       ::UnityEngine::Playables::Playable timelinePlayable, ::UnityEngine::Timeline::TrackAsset* track,
                                                                                                       ::UnityEngine::GameObject* go, bool createOutputs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelinePlayable*>(),
                                                           { "CreateTrackPlayable",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::UnityEngine::Playables::Playable>(),
                                                               ::i2c::type_of<::UnityEngine::Timeline::TrackAsset*>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable>(this, ___internal_method, graph, timelinePlayable, track, go, createOutputs);
}
inline void UnityEngine::Timeline::TimelinePlayable::PrepareFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::TimelinePlayable*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playable, info);
}
inline void UnityEngine::Timeline::TimelinePlayable::Evaluate(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData frameData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelinePlayable*>(),
                                                           { "Evaluate", {}, { ::i2c::type_of<::UnityEngine::Playables::Playable>(), ::i2c::type_of<::UnityEngine::Playables::FrameData>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playable, frameData);
}
inline void UnityEngine::Timeline::TimelinePlayable::CacheTrack(::UnityEngine::Timeline::TrackAsset* track, ::UnityEngine::Playables::Playable playable, int32_t port,
                                                                ::UnityEngine::Playables::Playable parent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelinePlayable*>(),
                                                           { "CacheTrack",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Timeline::TrackAsset*>(), ::i2c::type_of<::UnityEngine::Playables::Playable>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::UnityEngine::Playables::Playable>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, track, playable, port, parent);
}
inline void UnityEngine::Timeline::TimelinePlayable::ForAOTCompilationOnly() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelinePlayable*>(), { "ForAOTCompilationOnly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::Timeline::TimelinePlayable::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelinePlayable*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Timeline::TimelinePlayable* UnityEngine::Timeline::TimelinePlayable::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Timeline::TimelinePlayable*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::TimelinePlayable::TimelinePlayable() {}
