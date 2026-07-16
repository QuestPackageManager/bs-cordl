#pragma once
// IWYU pragma private; include "GlobalNamespace/TimelinePauseReceiver.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__TimelinePauseReceiver_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Playables/zzzz__INotificationReceiver_def.hpp"
#include "UnityEngine/Playables/zzzz__INotification_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TimelinePauseReceiver.add_timelinePauseEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimelinePauseReceiver::*)(::System::Action*)>(&::GlobalNamespace::TimelinePauseReceiver::add_timelinePauseEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x585bf8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TimelinePauseReceiver*>(), { "add_timelinePauseEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimelinePauseReceiver.remove_timelinePauseEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimelinePauseReceiver::*)(::System::Action*)>(&::GlobalNamespace::TimelinePauseReceiver::remove_timelinePauseEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x585c038;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TimelinePauseReceiver*>(), { "remove_timelinePauseEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimelinePauseReceiver.OnNotify
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimelinePauseReceiver::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::INotification*,
                                                                                                          ::System::Object*)>(&::GlobalNamespace::TimelinePauseReceiver::OnNotify)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x585c0e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::TimelinePauseReceiver*>(),
            { "OnNotify", {}, { ::i2c::type_of<::UnityEngine::Playables::Playable>(), ::i2c::type_of<::UnityEngine::Playables::INotification*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimelinePauseReceiver._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimelinePauseReceiver::*)()>(&::GlobalNamespace::TimelinePauseReceiver::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x585c188;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TimelinePauseReceiver*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Action*& GlobalNamespace::TimelinePauseReceiver::__cordl_internal_get_timelinePauseEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___timelinePauseEvent;
}
constexpr ::System::Action* const& GlobalNamespace::TimelinePauseReceiver::__cordl_internal_get_timelinePauseEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___timelinePauseEvent;
}
constexpr void GlobalNamespace::TimelinePauseReceiver::__cordl_internal_set_timelinePauseEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___timelinePauseEvent = value;
}
inline void GlobalNamespace::TimelinePauseReceiver::add_timelinePauseEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TimelinePauseReceiver*>(), { "add_timelinePauseEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::TimelinePauseReceiver::remove_timelinePauseEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TimelinePauseReceiver*>(), { "remove_timelinePauseEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::TimelinePauseReceiver::OnNotify(::UnityEngine::Playables::Playable origin, ::UnityEngine::Playables::INotification* notification, ::System::Object* context) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::GlobalNamespace::TimelinePauseReceiver*>(),
                       { "OnNotify", {}, { ::i2c::type_of<::UnityEngine::Playables::Playable>(), ::i2c::type_of<::UnityEngine::Playables::INotification*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, origin, notification, context);
}
inline void GlobalNamespace::TimelinePauseReceiver::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TimelinePauseReceiver*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TimelinePauseReceiver* GlobalNamespace::TimelinePauseReceiver::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TimelinePauseReceiver*>());
}
/// @brief Convert operator to "::UnityEngine::Playables::INotificationReceiver"
constexpr GlobalNamespace::TimelinePauseReceiver::operator ::UnityEngine::Playables::INotificationReceiver*() noexcept {
  return static_cast<::UnityEngine::Playables::INotificationReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Playables::INotificationReceiver"
constexpr ::UnityEngine::Playables::INotificationReceiver* GlobalNamespace::TimelinePauseReceiver::i___UnityEngine__Playables__INotificationReceiver() noexcept {
  return static_cast<::UnityEngine::Playables::INotificationReceiver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TimelinePauseReceiver::TimelinePauseReceiver() {}
