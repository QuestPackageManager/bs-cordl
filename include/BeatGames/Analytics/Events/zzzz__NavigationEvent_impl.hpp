#pragma once
// IWYU pragma private; include "BeatGames/Analytics/Events/NavigationEvent.hpp"
#include "BeatGames/Analytics/Events/zzzz__BasePlatformSessionAnalyticsEvent_impl.hpp"
#include "BeatGames/Analytics/Events/zzzz__NavigationEvent_def.hpp"
//  Writing Method size for method: ::BeatGames::Analytics::Events::NavigationEvent.SetEventData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatGames::Analytics::Events::NavigationEvent::*)(::StringW, ::StringW, ::StringW, ::StringW)>(
    &::BeatGames::Analytics::Events::NavigationEvent::SetEventData)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3257620;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatGames::Analytics::Events::NavigationEvent*>(),
                                                { "SetEventData", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatGames::Analytics::Events::NavigationEvent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatGames::Analytics::Events::NavigationEvent::*)()>(&::BeatGames::Analytics::Events::NavigationEvent::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x3258018;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatGames::Analytics::Events::NavigationEvent*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatGames::Analytics::Events::NavigationEvent.ReturnedToPool
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatGames::Analytics::Events::NavigationEvent::*)()>(&::BeatGames::Analytics::Events::NavigationEvent::ReturnedToPool)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x32580a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatGames::Analytics::Events::NavigationEvent*>(), { ::i2c::class_of<::BeatGames::Analytics::Events::NavigationEvent*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatGames::Analytics::Events::NavigationEvent.ReturnEventToPool
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatGames::Analytics::Events::NavigationEvent::*)()>(&::BeatGames::Analytics::Events::NavigationEvent::ReturnEventToPool)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x32580f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatGames::Analytics::Events::NavigationEvent*>(), { ::i2c::class_of<::BeatGames::Analytics::Events::NavigationEvent*>(), 10 }));
    return ___internal_method;
  }
};
constexpr ::StringW& BeatGames::Analytics::Events::NavigationEvent::__cordl_internal_get_button_id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___button_id;
}
constexpr ::StringW const& BeatGames::Analytics::Events::NavigationEvent::__cordl_internal_get_button_id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___button_id;
}
constexpr void BeatGames::Analytics::Events::NavigationEvent::__cordl_internal_set_button_id(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___button_id = value;
}
constexpr ::StringW& BeatGames::Analytics::Events::NavigationEvent::__cordl_internal_get_screen_id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___screen_id;
}
constexpr ::StringW const& BeatGames::Analytics::Events::NavigationEvent::__cordl_internal_get_screen_id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___screen_id;
}
constexpr void BeatGames::Analytics::Events::NavigationEvent::__cordl_internal_set_screen_id(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___screen_id = value;
}
constexpr ::StringW& BeatGames::Analytics::Events::NavigationEvent::__cordl_internal_get_content_id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___content_id;
}
constexpr ::StringW const& BeatGames::Analytics::Events::NavigationEvent::__cordl_internal_get_content_id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___content_id;
}
constexpr void BeatGames::Analytics::Events::NavigationEvent::__cordl_internal_set_content_id(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___content_id = value;
}
constexpr ::StringW& BeatGames::Analytics::Events::NavigationEvent::__cordl_internal_get_event() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___event;
}
constexpr ::StringW const& BeatGames::Analytics::Events::NavigationEvent::__cordl_internal_get_event() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___event;
}
constexpr void BeatGames::Analytics::Events::NavigationEvent::__cordl_internal_set_event(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___event = value;
}
inline void BeatGames::Analytics::Events::NavigationEvent::SetEventData(::StringW buttonID, ::StringW screenID, ::StringW contentID, ::StringW eventType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatGames::Analytics::Events::NavigationEvent*>(),
                                              { "SetEventData", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buttonID, screenID, contentID, eventType);
}
inline void BeatGames::Analytics::Events::NavigationEvent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatGames::Analytics::Events::NavigationEvent*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatGames::Analytics::Events::NavigationEvent::ReturnedToPool() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatGames::Analytics::Events::NavigationEvent*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatGames::Analytics::Events::NavigationEvent::ReturnEventToPool() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatGames::Analytics::Events::NavigationEvent*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatGames::Analytics::Events::NavigationEvent* BeatGames::Analytics::Events::NavigationEvent::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatGames::Analytics::Events::NavigationEvent*>());
}
// Ctor Parameters []
constexpr ::BeatGames::Analytics::Events::NavigationEvent::NavigationEvent() {}
