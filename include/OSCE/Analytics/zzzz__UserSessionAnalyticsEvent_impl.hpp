#pragma once
// IWYU pragma private; include "OSCE/Analytics/UserSessionAnalyticsEvent.hpp"
#include "OSCE/Analytics/zzzz__BaseAnalyticsEvent_impl.hpp"
#include "OSCE/Analytics/zzzz__UserSessionAnalyticsEvent_def.hpp"
#include "GlobalNamespace/zzzz__IDType_def.hpp"
#include "OSCE/Analytics/zzzz__AnalyticsManager_def.hpp"
//  Writing Method size for method: ::OSCE::Analytics::UserSessionAnalyticsEvent.GetIDType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::IDType (::OSCE::Analytics::UserSessionAnalyticsEvent::*)()>(&::OSCE::Analytics::UserSessionAnalyticsEvent::GetIDType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f37620;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OSCE::Analytics::UserSessionAnalyticsEvent*>(), { ::i2c::class_of<::OSCE::Analytics::UserSessionAnalyticsEvent*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::UserSessionAnalyticsEvent.EventRequiresAnalyticsID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OSCE::Analytics::UserSessionAnalyticsEvent::*)()>(&::OSCE::Analytics::UserSessionAnalyticsEvent::EventRequiresAnalyticsID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f37628;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OSCE::Analytics::UserSessionAnalyticsEvent*>(), { ::i2c::class_of<::OSCE::Analytics::UserSessionAnalyticsEvent*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::UserSessionAnalyticsEvent.ReturnEventToPool
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OSCE::Analytics::UserSessionAnalyticsEvent::*)()>(&::OSCE::Analytics::UserSessionAnalyticsEvent::ReturnEventToPool)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5f37630;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OSCE::Analytics::UserSessionAnalyticsEvent*>(), { ::i2c::class_of<::OSCE::Analytics::UserSessionAnalyticsEvent*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::UserSessionAnalyticsEvent.ReturnedToPool
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OSCE::Analytics::UserSessionAnalyticsEvent::*)()>(&::OSCE::Analytics::UserSessionAnalyticsEvent::ReturnedToPool)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5f37594;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OSCE::Analytics::UserSessionAnalyticsEvent*>(), { ::i2c::class_of<::OSCE::Analytics::UserSessionAnalyticsEvent*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::UserSessionAnalyticsEvent.ApplyTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OSCE::Analytics::UserSessionAnalyticsEvent::*)(::OSCE::Analytics::AnalyticsManager*, int32_t)>(
    &::OSCE::Analytics::UserSessionAnalyticsEvent::ApplyTime)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5f376a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OSCE::Analytics::UserSessionAnalyticsEvent*>(), { ::i2c::class_of<::OSCE::Analytics::UserSessionAnalyticsEvent*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::UserSessionAnalyticsEvent.ApplyBasicFields
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OSCE::Analytics::UserSessionAnalyticsEvent::*)(::OSCE::Analytics::AnalyticsManager*)>(
    &::OSCE::Analytics::UserSessionAnalyticsEvent::ApplyBasicFields)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5f3745c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OSCE::Analytics::UserSessionAnalyticsEvent*>(), { ::i2c::class_of<::OSCE::Analytics::UserSessionAnalyticsEvent*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::UserSessionAnalyticsEvent.GetIDForEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::OSCE::Analytics::UserSessionAnalyticsEvent::*)(::OSCE::Analytics::AnalyticsManager*)>(
    &::OSCE::Analytics::UserSessionAnalyticsEvent::GetIDForEvent)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5f37714;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::UserSessionAnalyticsEvent*>(), { "GetIDForEvent", {}, { ::i2c::type_of<::OSCE::Analytics::AnalyticsManager*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::UserSessionAnalyticsEvent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OSCE::Analytics::UserSessionAnalyticsEvent::*)()>(&::OSCE::Analytics::UserSessionAnalyticsEvent::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f3761c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::UserSessionAnalyticsEvent*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& OSCE::Analytics::UserSessionAnalyticsEvent::__cordl_internal_get_user_id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___user_id;
}
constexpr ::StringW const& OSCE::Analytics::UserSessionAnalyticsEvent::__cordl_internal_get_user_id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___user_id;
}
constexpr void OSCE::Analytics::UserSessionAnalyticsEvent::__cordl_internal_set_user_id(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___user_id = value;
}
constexpr ::StringW& OSCE::Analytics::UserSessionAnalyticsEvent::__cordl_internal_get_session_id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___session_id;
}
constexpr ::StringW const& OSCE::Analytics::UserSessionAnalyticsEvent::__cordl_internal_get_session_id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___session_id;
}
constexpr void OSCE::Analytics::UserSessionAnalyticsEvent::__cordl_internal_set_session_id(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___session_id = value;
}
constexpr int64_t& OSCE::Analytics::UserSessionAnalyticsEvent::__cordl_internal_get_session_time() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___session_time;
}
constexpr int64_t const& OSCE::Analytics::UserSessionAnalyticsEvent::__cordl_internal_get_session_time() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___session_time;
}
constexpr void OSCE::Analytics::UserSessionAnalyticsEvent::__cordl_internal_set_session_time(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___session_time = value;
}
constexpr uint32_t& OSCE::Analytics::UserSessionAnalyticsEvent::__cordl_internal_get_session_order() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___session_order;
}
constexpr uint32_t const& OSCE::Analytics::UserSessionAnalyticsEvent::__cordl_internal_get_session_order() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___session_order;
}
constexpr void OSCE::Analytics::UserSessionAnalyticsEvent::__cordl_internal_set_session_order(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___session_order = value;
}
inline ::GlobalNamespace::IDType OSCE::Analytics::UserSessionAnalyticsEvent::GetIDType() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OSCE::Analytics::UserSessionAnalyticsEvent*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IDType>(this, ___internal_method);
}
inline bool OSCE::Analytics::UserSessionAnalyticsEvent::EventRequiresAnalyticsID() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OSCE::Analytics::UserSessionAnalyticsEvent*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void OSCE::Analytics::UserSessionAnalyticsEvent::ReturnEventToPool() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OSCE::Analytics::UserSessionAnalyticsEvent*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void OSCE::Analytics::UserSessionAnalyticsEvent::ReturnedToPool() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OSCE::Analytics::UserSessionAnalyticsEvent*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void OSCE::Analytics::UserSessionAnalyticsEvent::ApplyTime(::OSCE::Analytics::AnalyticsManager* manager, int32_t timestamp) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OSCE::Analytics::UserSessionAnalyticsEvent*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, manager, timestamp);
}
inline void OSCE::Analytics::UserSessionAnalyticsEvent::ApplyBasicFields(::OSCE::Analytics::AnalyticsManager* manager) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OSCE::Analytics::UserSessionAnalyticsEvent*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, manager);
}
inline ::StringW OSCE::Analytics::UserSessionAnalyticsEvent::GetIDForEvent(::OSCE::Analytics::AnalyticsManager* manager) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::UserSessionAnalyticsEvent*>(), { "GetIDForEvent", {}, { ::i2c::type_of<::OSCE::Analytics::AnalyticsManager*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, manager);
}
inline void OSCE::Analytics::UserSessionAnalyticsEvent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::UserSessionAnalyticsEvent*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::OSCE::Analytics::UserSessionAnalyticsEvent* OSCE::Analytics::UserSessionAnalyticsEvent::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OSCE::Analytics::UserSessionAnalyticsEvent*>());
}
// Ctor Parameters []
constexpr ::OSCE::Analytics::UserSessionAnalyticsEvent::UserSessionAnalyticsEvent() {}
