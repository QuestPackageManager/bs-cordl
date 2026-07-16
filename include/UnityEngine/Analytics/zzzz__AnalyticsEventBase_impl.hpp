#pragma once
// IWYU pragma private; include "UnityEngine/Analytics/AnalyticsEventBase.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Analytics/zzzz__SendEventOptions_impl.hpp"
#include "UnityEngine/Analytics/zzzz__AnalyticsEventBase_def.hpp"
#include "UnityEngine/Analytics/zzzz__SendEventOptions_def.hpp"
//  Writing Method size for method: ::UnityEngine::Analytics::AnalyticsEventBase._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Analytics::AnalyticsEventBase::*)(::StringW, int32_t, ::UnityEngine::Analytics::SendEventOptions, ::StringW)>(
    &::UnityEngine::Analytics::AnalyticsEventBase::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6b045fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Analytics::AnalyticsEventBase*>(),
                            { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Analytics::SendEventOptions>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::Analytics::AnalyticsEventBase::__cordl_internal_get_eventName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eventName;
}
constexpr ::StringW const& UnityEngine::Analytics::AnalyticsEventBase::__cordl_internal_get_eventName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eventName;
}
constexpr void UnityEngine::Analytics::AnalyticsEventBase::__cordl_internal_set_eventName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___eventName = value;
}
constexpr int32_t& UnityEngine::Analytics::AnalyticsEventBase::__cordl_internal_get_eventVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eventVersion;
}
constexpr int32_t const& UnityEngine::Analytics::AnalyticsEventBase::__cordl_internal_get_eventVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eventVersion;
}
constexpr void UnityEngine::Analytics::AnalyticsEventBase::__cordl_internal_set_eventVersion(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___eventVersion = value;
}
constexpr ::StringW& UnityEngine::Analytics::AnalyticsEventBase::__cordl_internal_get_eventPrefix() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eventPrefix;
}
constexpr ::StringW const& UnityEngine::Analytics::AnalyticsEventBase::__cordl_internal_get_eventPrefix() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eventPrefix;
}
constexpr void UnityEngine::Analytics::AnalyticsEventBase::__cordl_internal_set_eventPrefix(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___eventPrefix = value;
}
constexpr ::UnityEngine::Analytics::SendEventOptions& UnityEngine::Analytics::AnalyticsEventBase::__cordl_internal_get_sendEventOptions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sendEventOptions;
}
constexpr ::UnityEngine::Analytics::SendEventOptions const& UnityEngine::Analytics::AnalyticsEventBase::__cordl_internal_get_sendEventOptions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sendEventOptions;
}
constexpr void UnityEngine::Analytics::AnalyticsEventBase::__cordl_internal_set_sendEventOptions(::UnityEngine::Analytics::SendEventOptions value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sendEventOptions = value;
}
inline void UnityEngine::Analytics::AnalyticsEventBase::_ctor(::StringW eventName, int32_t eventVersion, ::UnityEngine::Analytics::SendEventOptions sendEventOptions, ::StringW eventPrefix) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Analytics::AnalyticsEventBase*>(),
                          { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Analytics::SendEventOptions>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventName, eventVersion, sendEventOptions, eventPrefix);
}
inline ::UnityEngine::Analytics::AnalyticsEventBase* UnityEngine::Analytics::AnalyticsEventBase::New_ctor(::StringW eventName, int32_t eventVersion,
                                                                                                          ::UnityEngine::Analytics::SendEventOptions sendEventOptions, ::StringW eventPrefix) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Analytics::AnalyticsEventBase*>(eventName, eventVersion, sendEventOptions, eventPrefix));
}
// Ctor Parameters []
constexpr ::UnityEngine::Analytics::AnalyticsEventBase::AnalyticsEventBase() {}
