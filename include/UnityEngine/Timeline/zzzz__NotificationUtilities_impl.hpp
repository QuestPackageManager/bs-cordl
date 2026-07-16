#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/NotificationUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Timeline/zzzz__NotificationUtilities_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/Playables/zzzz__IPlayableAsset_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableDirector_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Playables/zzzz__ScriptPlayable_1_def.hpp"
#include "UnityEngine/Timeline/zzzz__IMarker_def.hpp"
#include "UnityEngine/Timeline/zzzz__TimeNotificationBehaviour_def.hpp"
#include "UnityEngine/Timeline/zzzz__TimelineAsset_def.hpp"
//  Writing Method size for method: ::UnityEngine::Timeline::NotificationUtilities.CreateNotificationsPlayable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::TimeNotificationBehaviour*> (*)(
    ::UnityEngine::Playables::PlayableGraph, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::IMarker*>*, ::UnityEngine::Playables::PlayableDirector*)>(
    &::UnityEngine::Timeline::NotificationUtilities::CreateNotificationsPlayable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x69c819c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::NotificationUtilities*>(),
                                                                                           { "CreateNotificationsPlayable",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(),
                                                                                               ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::IMarker*>*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Playables::PlayableDirector*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::NotificationUtilities.CreateNotificationsPlayable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::TimeNotificationBehaviour*> (*)(
    ::UnityEngine::Playables::PlayableGraph, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::IMarker*>*, ::UnityEngine::Timeline::TimelineAsset*)>(
    &::UnityEngine::Timeline::NotificationUtilities::CreateNotificationsPlayable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69c89b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::NotificationUtilities*>(),
                                                                                           { "CreateNotificationsPlayable",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(),
                                                                                               ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::IMarker*>*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Timeline::TimelineAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::NotificationUtilities.CreateNotificationsPlayable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::TimeNotificationBehaviour*> (*)(
    ::UnityEngine::Playables::PlayableGraph, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::IMarker*>*, ::UnityEngine::Playables::IPlayableAsset*,
    ::UnityEngine::Playables::PlayableDirector*)>(&::UnityEngine::Timeline::NotificationUtilities::CreateNotificationsPlayable)> {
  constexpr static std::size_t size = 0x80c;
  constexpr static std::size_t addrs = 0x69c81a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::NotificationUtilities*>(),
                            { "CreateNotificationsPlayable",
                              {},
                              { ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::IMarker*>*>(),
                                ::i2c::type_of<::UnityEngine::Playables::IPlayableAsset*>(), ::i2c::type_of<::UnityEngine::Playables::PlayableDirector*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::NotificationUtilities.TrackTypeSupportsNotifications
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::UnityEngine::Timeline::NotificationUtilities::TrackTypeSupportsNotifications)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x69c89bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::NotificationUtilities*>(), { "TrackTypeSupportsNotifications", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::TimeNotificationBehaviour*> UnityEngine::Timeline::NotificationUtilities::CreateNotificationsPlayable(
    ::UnityEngine::Playables::PlayableGraph graph, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::IMarker*>* markers, ::UnityEngine::Playables::PlayableDirector* director) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::NotificationUtilities*>(),
                                                                                         { "CreateNotificationsPlayable",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(),
                                                                                             ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::IMarker*>*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Playables::PlayableDirector*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::TimeNotificationBehaviour*>>(nullptr, ___internal_method, graph, markers, director);
}
inline ::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::TimeNotificationBehaviour*> UnityEngine::Timeline::NotificationUtilities::CreateNotificationsPlayable(
    ::UnityEngine::Playables::PlayableGraph graph, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::IMarker*>* markers, ::UnityEngine::Timeline::TimelineAsset* timelineAsset) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::NotificationUtilities*>(),
                                                                                         { "CreateNotificationsPlayable",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(),
                                                                                             ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::IMarker*>*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Timeline::TimelineAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::TimeNotificationBehaviour*>>(nullptr, ___internal_method, graph, markers,
                                                                                                                                              timelineAsset);
}
inline ::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::TimeNotificationBehaviour*>
UnityEngine::Timeline::NotificationUtilities::CreateNotificationsPlayable(::UnityEngine::Playables::PlayableGraph graph,
                                                                          ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::IMarker*>* markers,
                                                                          ::UnityEngine::Playables::IPlayableAsset* asset, ::UnityEngine::Playables::PlayableDirector* director) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::NotificationUtilities*>(),
                          { "CreateNotificationsPlayable",
                            {},
                            { ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::IMarker*>*>(),
                              ::i2c::type_of<::UnityEngine::Playables::IPlayableAsset*>(), ::i2c::type_of<::UnityEngine::Playables::PlayableDirector*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::TimeNotificationBehaviour*>>(nullptr, ___internal_method, graph, markers, asset,
                                                                                                                                              director);
}
inline bool UnityEngine::Timeline::NotificationUtilities::TrackTypeSupportsNotifications(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::NotificationUtilities*>(), { "TrackTypeSupportsNotifications", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::NotificationUtilities::NotificationUtilities() {}
