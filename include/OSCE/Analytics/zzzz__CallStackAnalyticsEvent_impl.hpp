#pragma once
// IWYU pragma private; include "OSCE\Analytics\CallStackAnalyticsEvent.hpp"
#include "OSCE/Analytics/zzzz__UserSessionAnalyticsEvent_impl.hpp"
#include "OSCE/Analytics/zzzz__CallStackAnalyticsEvent_def.hpp"
#include "GlobalNamespace/zzzz__IDType_def.hpp"
#include "OSCE/Analytics/zzzz__AnalyticsManager_def.hpp"
//  Writing Method size for method: ::OSCE::Analytics::CallStackAnalyticsEvent.GetIDType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::IDType (::OSCE::Analytics::CallStackAnalyticsEvent::*)()>(&::OSCE::Analytics::CallStackAnalyticsEvent::GetIDType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f39784;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OSCE::Analytics::CallStackAnalyticsEvent*>(), { ::i2c::class_of<::OSCE::Analytics::CallStackAnalyticsEvent*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::CallStackAnalyticsEvent.ApplyBasicFields
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OSCE::Analytics::CallStackAnalyticsEvent::*)(::OSCE::Analytics::AnalyticsManager*)>(
    &::OSCE::Analytics::CallStackAnalyticsEvent::ApplyBasicFields)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5f3978c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OSCE::Analytics::CallStackAnalyticsEvent*>(), { ::i2c::class_of<::OSCE::Analytics::CallStackAnalyticsEvent*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::CallStackAnalyticsEvent.ReturnEventToPool
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OSCE::Analytics::CallStackAnalyticsEvent::*)()>(&::OSCE::Analytics::CallStackAnalyticsEvent::ReturnEventToPool)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5f3982c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OSCE::Analytics::CallStackAnalyticsEvent*>(), { ::i2c::class_of<::OSCE::Analytics::CallStackAnalyticsEvent*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::CallStackAnalyticsEvent.ReturnedToPool
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OSCE::Analytics::CallStackAnalyticsEvent::*)()>(&::OSCE::Analytics::CallStackAnalyticsEvent::ReturnedToPool)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5f398a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OSCE::Analytics::CallStackAnalyticsEvent*>(), { ::i2c::class_of<::OSCE::Analytics::CallStackAnalyticsEvent*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::CallStackAnalyticsEvent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OSCE::Analytics::CallStackAnalyticsEvent::*)()>(&::OSCE::Analytics::CallStackAnalyticsEvent::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f3997c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::CallStackAnalyticsEvent*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& OSCE::Analytics::CallStackAnalyticsEvent::__cordl_internal_get_build_id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___build_id;
}
constexpr ::StringW const& OSCE::Analytics::CallStackAnalyticsEvent::__cordl_internal_get_build_id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___build_id;
}
constexpr void OSCE::Analytics::CallStackAnalyticsEvent::__cordl_internal_set_build_id(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___build_id = value;
}
constexpr ::StringW& OSCE::Analytics::CallStackAnalyticsEvent::__cordl_internal_get_environment() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environment;
}
constexpr ::StringW const& OSCE::Analytics::CallStackAnalyticsEvent::__cordl_internal_get_environment() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environment;
}
constexpr void OSCE::Analytics::CallStackAnalyticsEvent::__cordl_internal_set_environment(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___environment = value;
}
constexpr ::StringW& OSCE::Analytics::CallStackAnalyticsEvent::__cordl_internal_get_event_message() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___event_message;
}
constexpr ::StringW const& OSCE::Analytics::CallStackAnalyticsEvent::__cordl_internal_get_event_message() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___event_message;
}
constexpr void OSCE::Analytics::CallStackAnalyticsEvent::__cordl_internal_set_event_message(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___event_message = value;
}
constexpr ::StringW& OSCE::Analytics::CallStackAnalyticsEvent::__cordl_internal_get_call_stack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___call_stack;
}
constexpr ::StringW const& OSCE::Analytics::CallStackAnalyticsEvent::__cordl_internal_get_call_stack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___call_stack;
}
constexpr void OSCE::Analytics::CallStackAnalyticsEvent::__cordl_internal_set_call_stack(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___call_stack = value;
}
inline ::GlobalNamespace::IDType OSCE::Analytics::CallStackAnalyticsEvent::GetIDType() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OSCE::Analytics::CallStackAnalyticsEvent*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IDType>(this, ___internal_method);
}
inline void OSCE::Analytics::CallStackAnalyticsEvent::ApplyBasicFields(::OSCE::Analytics::AnalyticsManager* manager) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OSCE::Analytics::CallStackAnalyticsEvent*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, manager);
}
inline void OSCE::Analytics::CallStackAnalyticsEvent::ReturnEventToPool() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OSCE::Analytics::CallStackAnalyticsEvent*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void OSCE::Analytics::CallStackAnalyticsEvent::ReturnedToPool() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OSCE::Analytics::CallStackAnalyticsEvent*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void OSCE::Analytics::CallStackAnalyticsEvent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::CallStackAnalyticsEvent*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::OSCE::Analytics::CallStackAnalyticsEvent* OSCE::Analytics::CallStackAnalyticsEvent::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OSCE::Analytics::CallStackAnalyticsEvent*>());
}
// Ctor Parameters []
constexpr ::OSCE::Analytics::CallStackAnalyticsEvent::CallStackAnalyticsEvent() {}
