#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/TimelinePlayable.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_impl.hpp"
#include "UnityEngine/Timeline/zzzz__TimelinePlayable_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/Animations/zzzz__AnimationPlayableOutput_def.hpp"
#include "UnityEngine/Playables/zzzz__FrameData_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableOutput_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/Playables/zzzz__ScriptPlayable_1_def.hpp"
#include "UnityEngine/Timeline/zzzz__AnimationTrack_def.hpp"
#include "UnityEngine/Timeline/zzzz__ITimelineEvaluateCallback_def.hpp"
#include "UnityEngine/Timeline/zzzz__IntervalTree_1_def.hpp"
#include "UnityEngine/Timeline/zzzz__RuntimeElement_def.hpp"
#include "UnityEngine/Timeline/zzzz__TimelinePlayable_def.hpp"
#include "UnityEngine/Timeline/zzzz__TrackAsset_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::UnityEngine::Timeline::TimelinePlayable_TrackCacheManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TimelinePlayable_TrackCacheManager::*)(
    ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Timeline::AnimationTrack>>*, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Timeline::RuntimeElement*>*)>(
    &::UnityEngine::Timeline::TimelinePlayable_TrackCacheManager::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6df5970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelinePlayable_TrackCacheManager>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Timeline::AnimationTrack>>*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Timeline::RuntimeElement*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelinePlayable_TrackCacheManager.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TimelinePlayable_TrackCacheManager::*)()>(
    &::UnityEngine::Timeline::TimelinePlayable_TrackCacheManager::Dispose)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6df60e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelinePlayable_TrackCacheManager>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelinePlayable_TrackCacheManager.GetTrackAssetsFromRuntimeElements
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TimelinePlayable_TrackCacheManager::*)(
    ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Timeline::RuntimeElement*>*)>(&::UnityEngine::Timeline::TimelinePlayable_TrackCacheManager::GetTrackAssetsFromRuntimeElements)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x6df5ecc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelinePlayable_TrackCacheManager>(),
                            { "GetTrackAssetsFromRuntimeElements", {}, { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Timeline::RuntimeElement*>*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Timeline::TimelinePlayable_TrackCacheManager::_ctor(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Timeline::AnimationTrack>>* cache,
                                                                             ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Timeline::RuntimeElement*>* activeRuntimeElements) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelinePlayable_TrackCacheManager>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Timeline::AnimationTrack>>*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Timeline::RuntimeElement*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, cache, activeRuntimeElements);
}
inline void UnityEngine::Timeline::TimelinePlayable_TrackCacheManager::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelinePlayable_TrackCacheManager>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::Timeline::TimelinePlayable_TrackCacheManager::GetTrackAssetsFromRuntimeElements(
    ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Timeline::RuntimeElement*>* activeRuntimeElements) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelinePlayable_TrackCacheManager>(),
                                       { "GetTrackAssetsFromRuntimeElements", {}, { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Timeline::RuntimeElement*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, activeRuntimeElements);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Timeline::TimelinePlayable_TrackCacheManager::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Timeline::TimelinePlayable_TrackCacheManager::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "trackCache", ty: "::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Timeline::AnimationTrack>>*", modifiers: "", def_value: Some("{}"), comment:
// None }]
constexpr ::UnityEngine::Timeline::TimelinePlayable_TrackCacheManager::TimelinePlayable_TrackCacheManager(
    ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Timeline::AnimationTrack>>* trackCache) noexcept {
  this->trackCache = trackCache;
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::TimelinePlayable_TrackCacheManager::TimelinePlayable_TrackCacheManager() {}
//  Writing Method size for method: ::UnityEngine::Timeline::TimelinePlayable.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::TimelinePlayable*> (*)(
    ::UnityEngine::Playables::PlayableGraph, ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Timeline::TrackAsset>>*, ::UnityEngine::GameObject*, bool, bool)>(
    &::UnityEngine::Timeline::TimelinePlayable::Create)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x6df34f4;

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
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x6df3718;

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
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x6df3a00;

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
  constexpr static std::size_t size = 0x698;
  constexpr static std::size_t addrs = 0x6df418c;

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
//  Writing Method size for method: ::UnityEngine::Timeline::TimelinePlayable.CreateTrackPlayable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::Playable (::UnityEngine::Timeline::TimelinePlayable::*)(
    ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Playables::Playable, ::UnityEngine::Timeline::TrackAsset*, ::UnityEngine::GameObject*, bool)>(
    &::UnityEngine::Timeline::TimelinePlayable::CreateTrackPlayable)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x6df3d8c;

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
  constexpr static std::size_t addrs = 0x6df48ec;

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
  constexpr static std::size_t size = 0x450;
  constexpr static std::size_t addrs = 0x6df4918;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelinePlayable*>(),
                                                             { "Evaluate", {}, { ::i2c::type_of<::UnityEngine::Playables::Playable>(), ::i2c::type_of<::UnityEngine::Playables::FrameData>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelinePlayable.CacheTrack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TimelinePlayable::*)(::UnityEngine::Timeline::TrackAsset*, ::UnityEngine::Playables::Playable)>(
    &::UnityEngine::Timeline::TimelinePlayable::CacheTrack)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6df4860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelinePlayable*>(),
                                                             { "CacheTrack", {}, { ::i2c::type_of<::UnityEngine::Timeline::TrackAsset*>(), ::i2c::type_of<::UnityEngine::Playables::Playable>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelinePlayable.ForAOTCompilationOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::Timeline::TimelinePlayable::ForAOTCompilationOnly)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6df55d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelinePlayable*>(), { "ForAOTCompilationOnly", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelinePlayable.AddPlayableOutputCallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TimelinePlayable::*)(::UnityEngine::Timeline::AnimationTrack*, ::UnityEngine::Playables::PlayableOutput)>(
    &::UnityEngine::Timeline::TimelinePlayable::AddPlayableOutputCallbacks)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6df4824;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelinePlayable*>(),
                            { "AddPlayableOutputCallbacks", {}, { ::i2c::type_of<::UnityEngine::Timeline::AnimationTrack*>(), ::i2c::type_of<::UnityEngine::Playables::PlayableOutput>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelinePlayable.AddOutputWeightProcessor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TimelinePlayable::*)(
    ::UnityEngine::Timeline::AnimationTrack*, ::UnityEngine::Animations::AnimationPlayableOutput)>(&::UnityEngine::Timeline::TimelinePlayable::AddOutputWeightProcessor)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x6df5634;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelinePlayable*>(),
                            { "AddOutputWeightProcessor", {}, { ::i2c::type_of<::UnityEngine::Timeline::AnimationTrack*>(), ::i2c::type_of<::UnityEngine::Animations::AnimationPlayableOutput>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelinePlayable.AddEvaluateCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TimelinePlayable::*)(
    ::UnityEngine::Timeline::AnimationTrack*, ::UnityEngine::Timeline::ITimelineEvaluateCallback*)>(&::UnityEngine::Timeline::TimelinePlayable::AddEvaluateCallback)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x6df5780;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelinePlayable*>(),
                            { "AddEvaluateCallback", {}, { ::i2c::type_of<::UnityEngine::Timeline::AnimationTrack*>(), ::i2c::type_of<::UnityEngine::Timeline::ITimelineEvaluateCallback*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelinePlayable.InvokeOutputCallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TimelinePlayable::*)(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Timeline::RuntimeElement*>*)>(
    &::UnityEngine::Timeline::TimelinePlayable::InvokeOutputCallbacks)> {
  constexpr static std::size_t size = 0x868;
  constexpr static std::size_t addrs = 0x6df4d68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelinePlayable*>(),
                                                { "InvokeOutputCallbacks", {}, { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Timeline::RuntimeElement*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelinePlayable.TryGetCallbackList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Timeline::TimelinePlayable::*)(
    ::UnityEngine::Timeline::AnimationTrack*, ::by_ref<::System::Collections::Generic::List_1<::UnityEngine::Timeline::ITimelineEvaluateCallback*>*>)>(
    &::UnityEngine::Timeline::TimelinePlayable::TryGetCallbackList)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x6df5980;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelinePlayable*>(),
                                                             { "TryGetCallbackList",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Timeline::AnimationTrack*>(),
                                                                 ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::UnityEngine::Timeline::ITimelineEvaluateCallback*>*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelinePlayable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TimelinePlayable::*)()>(&::UnityEngine::Timeline::TimelinePlayable::_ctor)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x6df5abc;

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
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Timeline::AnimationTrack>,
                                                       ::System::Collections::Generic::List_1<::UnityEngine::Timeline::ITimelineEvaluateCallback*>*>*&
UnityEngine::Timeline::TimelinePlayable::__cordl_internal_get_m_EvaluateCallbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EvaluateCallbacks;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Timeline::AnimationTrack>,
                                                       ::System::Collections::Generic::List_1<::UnityEngine::Timeline::ITimelineEvaluateCallback*>*>* const&
UnityEngine::Timeline::TimelinePlayable::__cordl_internal_get_m_EvaluateCallbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EvaluateCallbacks;
}
constexpr void UnityEngine::Timeline::TimelinePlayable::__cordl_internal_set_m_EvaluateCallbacks(
    ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Timeline::AnimationTrack>, ::System::Collections::Generic::List_1<::UnityEngine::Timeline::ITimelineEvaluateCallback*>*>*
        value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EvaluateCallbacks = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Timeline::ITimelineEvaluateCallback*>*& UnityEngine::Timeline::TimelinePlayable::__cordl_internal_get_m_AlwaysEvaluateCallbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AlwaysEvaluateCallbacks;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Timeline::ITimelineEvaluateCallback*>* const&
UnityEngine::Timeline::TimelinePlayable::__cordl_internal_get_m_AlwaysEvaluateCallbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AlwaysEvaluateCallbacks;
}
constexpr void
UnityEngine::Timeline::TimelinePlayable::__cordl_internal_set_m_AlwaysEvaluateCallbacks(::System::Collections::Generic::List_1<::UnityEngine::Timeline::ITimelineEvaluateCallback*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AlwaysEvaluateCallbacks = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::Timeline::ITimelineEvaluateCallback*>*& UnityEngine::Timeline::TimelinePlayable::__cordl_internal_get_m_ForceEvaluateNextEvaluate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ForceEvaluateNextEvaluate;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::Timeline::ITimelineEvaluateCallback*>* const&
UnityEngine::Timeline::TimelinePlayable::__cordl_internal_get_m_ForceEvaluateNextEvaluate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ForceEvaluateNextEvaluate;
}
constexpr void
UnityEngine::Timeline::TimelinePlayable::__cordl_internal_set_m_ForceEvaluateNextEvaluate(::System::Collections::Generic::HashSet_1<::UnityEngine::Timeline::ITimelineEvaluateCallback*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ForceEvaluateNextEvaluate = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::Timeline::ITimelineEvaluateCallback*>*& UnityEngine::Timeline::TimelinePlayable::__cordl_internal_get_m_InvokedThisFrame() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InvokedThisFrame;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::Timeline::ITimelineEvaluateCallback*>* const&
UnityEngine::Timeline::TimelinePlayable::__cordl_internal_get_m_InvokedThisFrame() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InvokedThisFrame;
}
constexpr void UnityEngine::Timeline::TimelinePlayable::__cordl_internal_set_m_InvokedThisFrame(::System::Collections::Generic::HashSet_1<::UnityEngine::Timeline::ITimelineEvaluateCallback*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InvokedThisFrame = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Timeline::AnimationTrack>>*& UnityEngine::Timeline::TimelinePlayable::__cordl_internal_get_m_ActiveTracksToEvaluateCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActiveTracksToEvaluateCache;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Timeline::AnimationTrack>>* const&
UnityEngine::Timeline::TimelinePlayable::__cordl_internal_get_m_ActiveTracksToEvaluateCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActiveTracksToEvaluateCache;
}
constexpr void
UnityEngine::Timeline::TimelinePlayable::__cordl_internal_set_m_ActiveTracksToEvaluateCache(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Timeline::AnimationTrack>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ActiveTracksToEvaluateCache = value;
}
inline void UnityEngine::Timeline::TimelinePlayable::setStaticF_k_CreateTimelineGraphMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_CreateTimelineGraphMarker", ::UnityEngine::Timeline::TimelinePlayable*>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::Timeline::TimelinePlayable::getStaticF_k_CreateTimelineGraphMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_CreateTimelineGraphMarker", ::UnityEngine::Timeline::TimelinePlayable*>();
}
inline void UnityEngine::Timeline::TimelinePlayable::setStaticF_k_CreateTimelineTrackMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_CreateTimelineTrackMarker", ::UnityEngine::Timeline::TimelinePlayable*>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::Timeline::TimelinePlayable::getStaticF_k_CreateTimelineTrackMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_CreateTimelineTrackMarker", ::UnityEngine::Timeline::TimelinePlayable*>();
}
inline void UnityEngine::Timeline::TimelinePlayable::setStaticF_k_CreateTimelineTrackOutputsMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_CreateTimelineTrackOutputsMarker", ::UnityEngine::Timeline::TimelinePlayable*>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::Timeline::TimelinePlayable::getStaticF_k_CreateTimelineTrackOutputsMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_CreateTimelineTrackOutputsMarker", ::UnityEngine::Timeline::TimelinePlayable*>();
}
inline void UnityEngine::Timeline::TimelinePlayable::setStaticF_m_findActiveClipsMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "m_findActiveClipsMarker", ::UnityEngine::Timeline::TimelinePlayable*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::Timeline::TimelinePlayable::getStaticF_m_findActiveClipsMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "m_findActiveClipsMarker", ::UnityEngine::Timeline::TimelinePlayable*>();
}
inline void UnityEngine::Timeline::TimelinePlayable::setStaticF_m_SetClipsLocalTimeMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "m_SetClipsLocalTimeMarker", ::UnityEngine::Timeline::TimelinePlayable*>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::Timeline::TimelinePlayable::getStaticF_m_SetClipsLocalTimeMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "m_SetClipsLocalTimeMarker", ::UnityEngine::Timeline::TimelinePlayable*>();
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
inline void UnityEngine::Timeline::TimelinePlayable::CacheTrack(::UnityEngine::Timeline::TrackAsset* track, ::UnityEngine::Playables::Playable playable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelinePlayable*>(),
                                                           { "CacheTrack", {}, { ::i2c::type_of<::UnityEngine::Timeline::TrackAsset*>(), ::i2c::type_of<::UnityEngine::Playables::Playable>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, track, playable);
}
inline void UnityEngine::Timeline::TimelinePlayable::ForAOTCompilationOnly() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelinePlayable*>(), { "ForAOTCompilationOnly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::Timeline::TimelinePlayable::AddPlayableOutputCallbacks(::UnityEngine::Timeline::AnimationTrack* track, ::UnityEngine::Playables::PlayableOutput playableOutput) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelinePlayable*>(),
                          { "AddPlayableOutputCallbacks", {}, { ::i2c::type_of<::UnityEngine::Timeline::AnimationTrack*>(), ::i2c::type_of<::UnityEngine::Playables::PlayableOutput>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, track, playableOutput);
}
inline void UnityEngine::Timeline::TimelinePlayable::AddOutputWeightProcessor(::UnityEngine::Timeline::AnimationTrack* track, ::UnityEngine::Animations::AnimationPlayableOutput animOutput) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelinePlayable*>(),
                          { "AddOutputWeightProcessor", {}, { ::i2c::type_of<::UnityEngine::Timeline::AnimationTrack*>(), ::i2c::type_of<::UnityEngine::Animations::AnimationPlayableOutput>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, track, animOutput);
}
inline void UnityEngine::Timeline::TimelinePlayable::AddEvaluateCallback(::UnityEngine::Timeline::AnimationTrack* track, ::UnityEngine::Timeline::ITimelineEvaluateCallback* callback) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelinePlayable*>(),
                          { "AddEvaluateCallback", {}, { ::i2c::type_of<::UnityEngine::Timeline::AnimationTrack*>(), ::i2c::type_of<::UnityEngine::Timeline::ITimelineEvaluateCallback*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, track, callback);
}
inline void UnityEngine::Timeline::TimelinePlayable::InvokeOutputCallbacks(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Timeline::RuntimeElement*>* activeRuntimeElements) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelinePlayable*>(),
                                              { "InvokeOutputCallbacks", {}, { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Timeline::RuntimeElement*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, activeRuntimeElements);
}
inline bool UnityEngine::Timeline::TimelinePlayable::TryGetCallbackList(::UnityEngine::Timeline::AnimationTrack* track,
                                                                        ::by_ref<::System::Collections::Generic::List_1<::UnityEngine::Timeline::ITimelineEvaluateCallback*>*> list) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelinePlayable*>(),
                                                           { "TryGetCallbackList",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Timeline::AnimationTrack*>(),
                                                               ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::UnityEngine::Timeline::ITimelineEvaluateCallback*>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, track, list);
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
