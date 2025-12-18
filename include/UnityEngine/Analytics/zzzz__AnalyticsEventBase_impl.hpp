#pragma once
// IWYU pragma private; include "UnityEngine/Analytics/AnalyticsEventBase.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Analytics/zzzz__SendEventOptions_impl.hpp"
#include "UnityEngine/Analytics/zzzz__AnalyticsEventBase_def.hpp"
#include "UnityEngine/Analytics/zzzz__SendEventOptions_def.hpp"
//  Writing Method size for method: ::UnityEngine::Analytics::AnalyticsEventBase._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Analytics::AnalyticsEventBase::*)(
    ::StringW, int32_t, ::UnityEngine::Analytics::SendEventOptions, ::StringW)>(&::UnityEngine::Analytics::AnalyticsEventBase::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x693c7bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::AnalyticsEventBase*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Analytics::SendEventOptions>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___eventName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___eventPrefix)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::AnalyticsEventBase*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Analytics::SendEventOptions>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventName, eventVersion, sendEventOptions, eventPrefix);
}
inline ::UnityEngine::Analytics::AnalyticsEventBase* UnityEngine::Analytics::AnalyticsEventBase::New_ctor(::StringW eventName, int32_t eventVersion,
                                                                                                          ::UnityEngine::Analytics::SendEventOptions sendEventOptions, ::StringW eventPrefix) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Analytics::AnalyticsEventBase*>(eventName, eventVersion, sendEventOptions, eventPrefix));
}
// Ctor Parameters []
constexpr ::UnityEngine::Analytics::AnalyticsEventBase::AnalyticsEventBase() {}
