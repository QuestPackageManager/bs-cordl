#pragma once
// IWYU pragma private; include "BeatGames/Analytics/Events/SessionEvent.hpp"
#include "BeatGames/Analytics/Events/zzzz__BasePlatformSessionAnalyticsEvent_impl.hpp"
#include "BeatGames/Analytics/Events/zzzz__SessionEvent_def.hpp"
#include "GlobalNamespace/zzzz__IDType_def.hpp"
//  Writing Method size for method: ::BeatGames::Analytics::Events::SessionEvent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatGames::Analytics::Events::SessionEvent::*)()>(&::BeatGames::Analytics::Events::SessionEvent::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x3258254;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatGames::Analytics::Events::SessionEvent*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatGames::Analytics::Events::SessionEvent.GetIDType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::IDType (::BeatGames::Analytics::Events::SessionEvent::*)()>(&::BeatGames::Analytics::Events::SessionEvent::GetIDType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32582b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatGames::Analytics::Events::SessionEvent*>(), { ::i2c::class_of<::BeatGames::Analytics::Events::SessionEvent*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatGames::Analytics::Events::SessionEvent.ReturnEventToPool
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatGames::Analytics::Events::SessionEvent::*)()>(&::BeatGames::Analytics::Events::SessionEvent::ReturnEventToPool)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x32582c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatGames::Analytics::Events::SessionEvent*>(), { ::i2c::class_of<::BeatGames::Analytics::Events::SessionEvent*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatGames::Analytics::Events::SessionEvent.ReturnedToPool
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatGames::Analytics::Events::SessionEvent::*)()>(&::BeatGames::Analytics::Events::SessionEvent::ReturnedToPool)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3258334;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatGames::Analytics::Events::SessionEvent*>(), { ::i2c::class_of<::BeatGames::Analytics::Events::SessionEvent*>(), 9 }));
    return ___internal_method;
  }
};
constexpr ::StringW& BeatGames::Analytics::Events::SessionEvent::__cordl_internal_get_event_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___event_type;
}
constexpr ::StringW const& BeatGames::Analytics::Events::SessionEvent::__cordl_internal_get_event_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___event_type;
}
constexpr void BeatGames::Analytics::Events::SessionEvent::__cordl_internal_set_event_type(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___event_type = value;
}
inline void BeatGames::Analytics::Events::SessionEvent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatGames::Analytics::Events::SessionEvent*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::IDType BeatGames::Analytics::Events::SessionEvent::GetIDType() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatGames::Analytics::Events::SessionEvent*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IDType>(this, ___internal_method);
}
inline void BeatGames::Analytics::Events::SessionEvent::ReturnEventToPool() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatGames::Analytics::Events::SessionEvent*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatGames::Analytics::Events::SessionEvent::ReturnedToPool() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatGames::Analytics::Events::SessionEvent*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatGames::Analytics::Events::SessionEvent* BeatGames::Analytics::Events::SessionEvent::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatGames::Analytics::Events::SessionEvent*>());
}
// Ctor Parameters []
constexpr ::BeatGames::Analytics::Events::SessionEvent::SessionEvent() {}
