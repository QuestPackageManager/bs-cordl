#pragma once
#include "BGNet/Core/zzzz__IAnalyticsManager_def.hpp"
#include "GlobalNamespace/zzzz__IPollable_def.hpp"
#include "GlobalNamespace/zzzz__MetricIdentifier_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "BGNet/Core/zzzz__AnalyticsMetricUnit_def.hpp"
//  Writing Method size for method: ::BGNet::Core::IAnalyticsManager.UpdateState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::BGNet::Core::IAnalyticsManager::*)(::GlobalNamespace::MetricIdentifier, int64_t, ::BGNet::Core::AnalyticsMetricUnit, bool)>(&::BGNet::Core::IAnalyticsManager::UpdateState)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::IAnalyticsManager*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::IAnalyticsManager*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::IAnalyticsManager.UpdateAverage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::IAnalyticsManager::*)(
    ::GlobalNamespace::MetricIdentifier, double_t, ::BGNet::Core::AnalyticsMetricUnit, bool)>(&::BGNet::Core::IAnalyticsManager::UpdateAverage)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::IAnalyticsManager*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::IAnalyticsManager*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::IAnalyticsManager.IncrementCounter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::BGNet::Core::IAnalyticsManager::*)(::GlobalNamespace::MetricIdentifier, int64_t, ::BGNet::Core::AnalyticsMetricUnit)>(&::BGNet::Core::IAnalyticsManager::IncrementCounter)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::IAnalyticsManager*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::IAnalyticsManager*>::get(), 2));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IPollable"
constexpr BGNet::Core::IAnalyticsManager::operator ::GlobalNamespace::IPollable*() noexcept {
  return static_cast<::GlobalNamespace::IPollable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr BGNet::Core::IAnalyticsManager::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @param unit: ::BGNet::Core::AnalyticsMetricUnit (default: static_cast<int32_t>(0x0))
/// @param alarmMetric: bool (default: false)
inline void BGNet::Core::IAnalyticsManager::UpdateState(::GlobalNamespace::MetricIdentifier metricIdentifier, int64_t state, ::BGNet::Core::AnalyticsMetricUnit unit, bool alarmMetric) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::IAnalyticsManager*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, metricIdentifier, state, unit, alarmMetric);
}
/// @param unit: ::BGNet::Core::AnalyticsMetricUnit (default: static_cast<int32_t>(0x0))
/// @param alarmMetric: bool (default: false)
inline void BGNet::Core::IAnalyticsManager::UpdateAverage(::GlobalNamespace::MetricIdentifier metricIdentifier, double_t value, ::BGNet::Core::AnalyticsMetricUnit unit, bool alarmMetric) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::IAnalyticsManager*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, metricIdentifier, value, unit, alarmMetric);
}
/// @param incrementAmount: int64_t (default: static_cast<int64_t>(0x1))
/// @param unit: ::BGNet::Core::AnalyticsMetricUnit (default: static_cast<int32_t>(0x1))
inline void BGNet::Core::IAnalyticsManager::IncrementCounter(::GlobalNamespace::MetricIdentifier metricIdentifier, int64_t incrementAmount, ::BGNet::Core::AnalyticsMetricUnit unit) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::IAnalyticsManager*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, metricIdentifier, incrementAmount, unit);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
