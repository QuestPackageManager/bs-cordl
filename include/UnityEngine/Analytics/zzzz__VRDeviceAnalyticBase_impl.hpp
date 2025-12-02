#pragma once
// IWYU pragma private; include "UnityEngine/Analytics/VRDeviceAnalyticBase.hpp"
#include "UnityEngine/Analytics/zzzz__AnalyticsEventBase_impl.hpp"
#include "UnityEngine/Analytics/zzzz__VRDeviceAnalyticBase_def.hpp"
//  Writing Method size for method: ::UnityEngine::Analytics::VRDeviceAnalyticBase._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Analytics::VRDeviceAnalyticBase::*)()>(&::UnityEngine::Analytics::VRDeviceAnalyticBase::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6bf0330;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::VRDeviceAnalyticBase*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::Analytics::VRDeviceAnalyticBase::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::VRDeviceAnalyticBase*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Analytics::VRDeviceAnalyticBase* UnityEngine::Analytics::VRDeviceAnalyticBase::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Analytics::VRDeviceAnalyticBase*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Analytics::VRDeviceAnalyticBase::VRDeviceAnalyticBase() {}
