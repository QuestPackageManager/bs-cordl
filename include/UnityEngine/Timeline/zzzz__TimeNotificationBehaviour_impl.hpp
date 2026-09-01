#pragma once
// IWYU pragma private; include "UnityEngine\Timeline\TimeNotificationBehaviour.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_impl.hpp"
#include "UnityEngine/Playables/zzzz__Playable_impl.hpp"
#include "UnityEngine/Timeline/zzzz__NotificationFlags_impl.hpp"
#include "UnityEngine/Timeline/zzzz__TimeNotificationBehaviour_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "UnityEngine/Playables/zzzz__DirectorWrapMode_def.hpp"
#include "UnityEngine/Playables/zzzz__FrameData_def.hpp"
#include "UnityEngine/Playables/zzzz__INotification_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableOutput_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/Playables/zzzz__ScriptPlayable_1_def.hpp"
#include "UnityEngine/Timeline/zzzz__NotificationFlags_def.hpp"
#include "UnityEngine/Timeline/zzzz__TimeNotificationBehaviour_def.hpp"
//  Writing Method size for method: ::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry.get_triggerInEditor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry::*)()>(
    &::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry::get_triggerInEditor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x69cb1b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry>(), { "get_triggerInEditor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry.get_prewarm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry::*)()>(
    &::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry::get_prewarm)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x69cb1a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry>(), { "get_prewarm", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry.get_triggerOnce
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry::*)()>(
    &::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry::get_triggerOnce)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x69ca930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry>(), { "get_triggerOnce", {}, {} })));
    return ___internal_method;
  }
};
inline bool UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry::get_triggerInEditor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry>(), { "get_triggerInEditor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry::get_prewarm() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry>(), { "get_prewarm", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry::get_triggerOnce() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry>(), { "get_triggerOnce", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "time", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "payload", ty: "::UnityEngine::Playables::INotification*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "notificationFired", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "flags", ty: "::UnityEngine::Timeline::NotificationFlags",
// modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry::TimeNotificationBehaviour_NotificationEntry(double_t time, ::UnityEngine::Playables::INotification* payload,
                                                                                                                            bool notificationFired,
                                                                                                                            ::UnityEngine::Timeline::NotificationFlags flags) noexcept {
  this->time = time;
  this->payload = payload;
  this->notificationFired = notificationFired;
  this->flags = flags;
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry::TimeNotificationBehaviour_NotificationEntry() {}
//  Writing Method size for method: ::UnityEngine::Timeline::TimeNotificationBehaviour___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TimeNotificationBehaviour___c::*)()>(&::UnityEngine::Timeline::TimeNotificationBehaviour___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69cb288;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimeNotificationBehaviour___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimeNotificationBehaviour___c._SortNotifications_b__12_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Timeline::TimeNotificationBehaviour___c::*)(::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry,
                                                                                                                           ::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry)>(
    &::UnityEngine::Timeline::TimeNotificationBehaviour___c::_SortNotifications_b__12_0)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x69cb28c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimeNotificationBehaviour___c*>(),
                                                                                           { "<SortNotifications>b__12_0",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry>(),
                                                                                               ::i2c::type_of<::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Timeline::TimeNotificationBehaviour___c::setStaticF___9(::UnityEngine::Timeline::TimeNotificationBehaviour___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Timeline::TimeNotificationBehaviour___c*, "<>9", ::UnityEngine::Timeline::TimeNotificationBehaviour___c*>(
      std::forward<::UnityEngine::Timeline::TimeNotificationBehaviour___c*>(value));
}
inline ::UnityEngine::Timeline::TimeNotificationBehaviour___c* UnityEngine::Timeline::TimeNotificationBehaviour___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Timeline::TimeNotificationBehaviour___c*, "<>9", ::UnityEngine::Timeline::TimeNotificationBehaviour___c*>();
}
inline void UnityEngine::Timeline::TimeNotificationBehaviour___c::setStaticF___9__12_0(::System::Comparison_1<::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry>* value) {
  ::cordl_internals::setStaticField<::System::Comparison_1<::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry>*, "<>9__12_0",
                                    ::UnityEngine::Timeline::TimeNotificationBehaviour___c*>(
      std::forward<::System::Comparison_1<::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry>*>(value));
}
inline ::System::Comparison_1<::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry>* UnityEngine::Timeline::TimeNotificationBehaviour___c::getStaticF___9__12_0() {
  return ::cordl_internals::getStaticField<::System::Comparison_1<::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry>*, "<>9__12_0",
                                           ::UnityEngine::Timeline::TimeNotificationBehaviour___c*>();
}
inline void UnityEngine::Timeline::TimeNotificationBehaviour___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimeNotificationBehaviour___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::Timeline::TimeNotificationBehaviour___c::_SortNotifications_b__12_0(::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry x,
                                                                                                ::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry y) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimeNotificationBehaviour___c*>(),
                                                                                         { "<SortNotifications>b__12_0",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry>(),
                                                                                             ::i2c::type_of<::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x, y);
}
inline ::UnityEngine::Timeline::TimeNotificationBehaviour___c* UnityEngine::Timeline::TimeNotificationBehaviour___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Timeline::TimeNotificationBehaviour___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::TimeNotificationBehaviour___c::TimeNotificationBehaviour___c() {}
//  Writing Method size for method: ::UnityEngine::Timeline::TimeNotificationBehaviour.set_timeSource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TimeNotificationBehaviour::*)(::UnityEngine::Playables::Playable)>(
    &::UnityEngine::Timeline::TimeNotificationBehaviour::set_timeSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69ca43c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimeNotificationBehaviour*>(), { "set_timeSource", {}, { ::i2c::type_of<::UnityEngine::Playables::Playable>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimeNotificationBehaviour.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::TimeNotificationBehaviour*> (*)(
    ::UnityEngine::Playables::PlayableGraph, double_t, ::UnityEngine::Playables::DirectorWrapMode)>(&::UnityEngine::Timeline::TimeNotificationBehaviour::Create)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x69ca444;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::Timeline::TimeNotificationBehaviour*>(),
                         { "Create", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<double_t>(), ::i2c::type_of<::UnityEngine::Playables::DirectorWrapMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimeNotificationBehaviour.AddNotification
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TimeNotificationBehaviour::*)(
    double_t, ::UnityEngine::Playables::INotification*, ::UnityEngine::Timeline::NotificationFlags)>(&::UnityEngine::Timeline::TimeNotificationBehaviour::AddNotification)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x69ca56c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Timeline::TimeNotificationBehaviour*>(),
            { "AddNotification", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<::UnityEngine::Playables::INotification*>(), ::i2c::type_of<::UnityEngine::Timeline::NotificationFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimeNotificationBehaviour.OnGraphStart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TimeNotificationBehaviour::*)(::UnityEngine::Playables::Playable)>(
    &::UnityEngine::Timeline::TimeNotificationBehaviour::OnGraphStart)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x69ca660;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimeNotificationBehaviour*>(), { ::i2c::class_of<::UnityEngine::Timeline::TimeNotificationBehaviour*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimeNotificationBehaviour.OnBehaviourPause
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TimeNotificationBehaviour::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData)>(
    &::UnityEngine::Timeline::TimeNotificationBehaviour::OnBehaviourPause)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x69ca93c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimeNotificationBehaviour*>(), { ::i2c::class_of<::UnityEngine::Timeline::TimeNotificationBehaviour*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimeNotificationBehaviour.PrepareFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TimeNotificationBehaviour::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData)>(
    &::UnityEngine::Timeline::TimeNotificationBehaviour::PrepareFrame)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x69cab5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimeNotificationBehaviour*>(), { ::i2c::class_of<::UnityEngine::Timeline::TimeNotificationBehaviour*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimeNotificationBehaviour.SortNotifications
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TimeNotificationBehaviour::*)()>(&::UnityEngine::Timeline::TimeNotificationBehaviour::SortNotifications)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x69ca814;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimeNotificationBehaviour*>(), { "SortNotifications", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimeNotificationBehaviour.CanRestoreNotification
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry, ::UnityEngine::Playables::FrameData, double_t, double_t)>(
    &::UnityEngine::Timeline::TimeNotificationBehaviour::CanRestoreNotification)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x69cb168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimeNotificationBehaviour*>(),
                                                             { "CanRestoreNotification",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry>(),
                                                                 ::i2c::type_of<::UnityEngine::Playables::FrameData>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimeNotificationBehaviour.TriggerNotificationsInRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TimeNotificationBehaviour::*)(
    double_t, double_t, ::UnityEngine::Playables::FrameData, ::UnityEngine::Playables::Playable, bool)>(&::UnityEngine::Timeline::TimeNotificationBehaviour::TriggerNotificationsInRange)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x69caf88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimeNotificationBehaviour*>(),
                                                             { "TriggerNotificationsInRange",
                                                               {},
                                                               { ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<::UnityEngine::Playables::FrameData>(),
                                                                 ::i2c::type_of<::UnityEngine::Playables::Playable>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimeNotificationBehaviour.SyncDurationWithExternalSource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TimeNotificationBehaviour::*)(::UnityEngine::Playables::Playable)>(
    &::UnityEngine::Timeline::TimeNotificationBehaviour::SyncDurationWithExternalSource)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x69cae7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimeNotificationBehaviour*>(),
                                                                                           { "SyncDurationWithExternalSource", {}, { ::i2c::type_of<::UnityEngine::Playables::Playable>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimeNotificationBehaviour.Trigger_internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::PlayableOutput, ::by_ref<::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry>)>(
        &::UnityEngine::Timeline::TimeNotificationBehaviour::Trigger_internal)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x69caad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimeNotificationBehaviour*>(),
                                                             { "Trigger_internal",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Playables::Playable>(), ::i2c::type_of<::UnityEngine::Playables::PlayableOutput>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimeNotificationBehaviour.Restore_internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry>)>(
    &::UnityEngine::Timeline::TimeNotificationBehaviour::Restore_internal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69cb1a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimeNotificationBehaviour*>(),
                                                             { "Restore_internal", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimeNotificationBehaviour._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TimeNotificationBehaviour::*)()>(&::UnityEngine::Timeline::TimeNotificationBehaviour::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x69cb1c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimeNotificationBehaviour*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry>*&
UnityEngine::Timeline::TimeNotificationBehaviour::__cordl_internal_get_m_Notifications() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Notifications;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry>* const&
UnityEngine::Timeline::TimeNotificationBehaviour::__cordl_internal_get_m_Notifications() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Notifications;
}
constexpr void UnityEngine::Timeline::TimeNotificationBehaviour::__cordl_internal_set_m_Notifications(
    ::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Notifications = value;
}
constexpr double_t& UnityEngine::Timeline::TimeNotificationBehaviour::__cordl_internal_get_m_PreviousTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviousTime;
}
constexpr double_t const& UnityEngine::Timeline::TimeNotificationBehaviour::__cordl_internal_get_m_PreviousTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviousTime;
}
constexpr void UnityEngine::Timeline::TimeNotificationBehaviour::__cordl_internal_set_m_PreviousTime(double_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PreviousTime = value;
}
constexpr bool& UnityEngine::Timeline::TimeNotificationBehaviour::__cordl_internal_get_m_NeedSortNotifications() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NeedSortNotifications;
}
constexpr bool const& UnityEngine::Timeline::TimeNotificationBehaviour::__cordl_internal_get_m_NeedSortNotifications() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NeedSortNotifications;
}
constexpr void UnityEngine::Timeline::TimeNotificationBehaviour::__cordl_internal_set_m_NeedSortNotifications(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_NeedSortNotifications = value;
}
constexpr ::UnityEngine::Playables::Playable& UnityEngine::Timeline::TimeNotificationBehaviour::__cordl_internal_get_m_TimeSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TimeSource;
}
constexpr ::UnityEngine::Playables::Playable const& UnityEngine::Timeline::TimeNotificationBehaviour::__cordl_internal_get_m_TimeSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TimeSource;
}
constexpr void UnityEngine::Timeline::TimeNotificationBehaviour::__cordl_internal_set_m_TimeSource(::UnityEngine::Playables::Playable value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TimeSource = value;
}
inline void UnityEngine::Timeline::TimeNotificationBehaviour::set_timeSource(::UnityEngine::Playables::Playable value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimeNotificationBehaviour*>(), { "set_timeSource", {}, { ::i2c::type_of<::UnityEngine::Playables::Playable>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::TimeNotificationBehaviour*>
UnityEngine::Timeline::TimeNotificationBehaviour::Create(::UnityEngine::Playables::PlayableGraph graph, double_t duration, ::UnityEngine::Playables::DirectorWrapMode loopMode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimeNotificationBehaviour*>(),
                          { "Create", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<double_t>(), ::i2c::type_of<::UnityEngine::Playables::DirectorWrapMode>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::TimeNotificationBehaviour*>>(nullptr, ___internal_method, graph, duration, loopMode);
}
inline void UnityEngine::Timeline::TimeNotificationBehaviour::AddNotification(double_t time, ::UnityEngine::Playables::INotification* payload, ::UnityEngine::Timeline::NotificationFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Timeline::TimeNotificationBehaviour*>(),
          { "AddNotification", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<::UnityEngine::Playables::INotification*>(), ::i2c::type_of<::UnityEngine::Timeline::NotificationFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, time, payload, flags);
}
inline void UnityEngine::Timeline::TimeNotificationBehaviour::OnGraphStart(::UnityEngine::Playables::Playable playable) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::TimeNotificationBehaviour*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playable);
}
inline void UnityEngine::Timeline::TimeNotificationBehaviour::OnBehaviourPause(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::TimeNotificationBehaviour*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playable, info);
}
inline void UnityEngine::Timeline::TimeNotificationBehaviour::PrepareFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::TimeNotificationBehaviour*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playable, info);
}
inline void UnityEngine::Timeline::TimeNotificationBehaviour::SortNotifications() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimeNotificationBehaviour*>(), { "SortNotifications", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Timeline::TimeNotificationBehaviour::CanRestoreNotification(::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry e, ::UnityEngine::Playables::FrameData info,
                                                                                     double_t currentTime, double_t previousTime) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimeNotificationBehaviour*>(),
                                                           { "CanRestoreNotification",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry>(),
                                                               ::i2c::type_of<::UnityEngine::Playables::FrameData>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, e, info, currentTime, previousTime);
}
inline void UnityEngine::Timeline::TimeNotificationBehaviour::TriggerNotificationsInRange(double_t start, double_t end, ::UnityEngine::Playables::FrameData info,
                                                                                          ::UnityEngine::Playables::Playable playable, bool checkState) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimeNotificationBehaviour*>(),
                                                           { "TriggerNotificationsInRange",
                                                             {},
                                                             { ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<::UnityEngine::Playables::FrameData>(),
                                                               ::i2c::type_of<::UnityEngine::Playables::Playable>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, start, end, info, playable, checkState);
}
inline void UnityEngine::Timeline::TimeNotificationBehaviour::SyncDurationWithExternalSource(::UnityEngine::Playables::Playable playable) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimeNotificationBehaviour*>(),
                                                                                         { "SyncDurationWithExternalSource", {}, { ::i2c::type_of<::UnityEngine::Playables::Playable>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playable);
}
inline void UnityEngine::Timeline::TimeNotificationBehaviour::Trigger_internal(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::PlayableOutput output,
                                                                               ::by_ref<::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry> e) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimeNotificationBehaviour*>(),
                                                           { "Trigger_internal",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Playables::Playable>(), ::i2c::type_of<::UnityEngine::Playables::PlayableOutput>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, playable, output, e);
}
inline void UnityEngine::Timeline::TimeNotificationBehaviour::Restore_internal(::by_ref<::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry> e) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimeNotificationBehaviour*>(),
                                                           { "Restore_internal", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, e);
}
inline void UnityEngine::Timeline::TimeNotificationBehaviour::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimeNotificationBehaviour*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Timeline::TimeNotificationBehaviour* UnityEngine::Timeline::TimeNotificationBehaviour::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Timeline::TimeNotificationBehaviour*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::TimeNotificationBehaviour::TimeNotificationBehaviour() {}
