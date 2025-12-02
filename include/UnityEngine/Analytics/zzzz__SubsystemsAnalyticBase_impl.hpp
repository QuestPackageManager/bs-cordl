#pragma once
// IWYU pragma private; include "UnityEngine/Analytics/SubsystemsAnalyticBase.hpp"
#include "UnityEngine/Analytics/zzzz__AnalyticsEventBase_impl.hpp"
#include "UnityEngine/Analytics/zzzz__SubsystemsAnalyticBase_def.hpp"
//  Writing Method size for method: ::UnityEngine::Analytics::SubsystemsAnalyticBase._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Analytics::SubsystemsAnalyticBase::*)(::StringW)>(
    &::UnityEngine::Analytics::SubsystemsAnalyticBase::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6bf0010;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::SubsystemsAnalyticBase*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::Analytics::SubsystemsAnalyticBase::__cordl_internal_get_subsystem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subsystem;
}
constexpr ::StringW const& UnityEngine::Analytics::SubsystemsAnalyticBase::__cordl_internal_get_subsystem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subsystem;
}
constexpr void UnityEngine::Analytics::SubsystemsAnalyticBase::__cordl_internal_set_subsystem(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___subsystem)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Analytics::SubsystemsAnalyticBase::_ctor(::StringW eventName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::SubsystemsAnalyticBase*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventName);
}
inline ::UnityEngine::Analytics::SubsystemsAnalyticBase* UnityEngine::Analytics::SubsystemsAnalyticBase::New_ctor(::StringW eventName) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Analytics::SubsystemsAnalyticBase*>(eventName));
}
// Ctor Parameters []
constexpr ::UnityEngine::Analytics::SubsystemsAnalyticBase::SubsystemsAnalyticBase() {}
