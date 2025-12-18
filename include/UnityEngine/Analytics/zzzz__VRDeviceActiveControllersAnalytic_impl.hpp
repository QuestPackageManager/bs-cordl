#pragma once
// IWYU pragma private; include "UnityEngine/Analytics/VRDeviceActiveControllersAnalytic.hpp"
#include "UnityEngine/Analytics/zzzz__VRDeviceAnalyticBase_impl.hpp"
#include "UnityEngine/Analytics/zzzz__VRDeviceActiveControllersAnalytic_def.hpp"
//  Writing Method size for method: ::UnityEngine::Analytics::VRDeviceActiveControllersAnalytic.CreateVRDeviceActiveControllersAnalytic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Analytics::VRDeviceActiveControllersAnalytic* (*)()>(
    &::UnityEngine::Analytics::VRDeviceActiveControllersAnalytic::CreateVRDeviceActiveControllersAnalytic)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6c59334;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::VRDeviceActiveControllersAnalytic*>::get(),
                                                 "CreateVRDeviceActiveControllersAnalytic", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Analytics::VRDeviceActiveControllersAnalytic._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Analytics::VRDeviceActiveControllersAnalytic::*)()>(
    &::UnityEngine::Analytics::VRDeviceActiveControllersAnalytic::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6c59388;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::VRDeviceActiveControllersAnalytic*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& UnityEngine::Analytics::VRDeviceActiveControllersAnalytic::__cordl_internal_get_vr_active_controllers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vr_active_controllers;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& UnityEngine::Analytics::VRDeviceActiveControllersAnalytic::__cordl_internal_get_vr_active_controllers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vr_active_controllers;
}
constexpr void UnityEngine::Analytics::VRDeviceActiveControllersAnalytic::__cordl_internal_set_vr_active_controllers(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___vr_active_controllers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::Analytics::VRDeviceActiveControllersAnalytic* UnityEngine::Analytics::VRDeviceActiveControllersAnalytic::CreateVRDeviceActiveControllersAnalytic() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::VRDeviceActiveControllersAnalytic*>::get(),
                                               "CreateVRDeviceActiveControllersAnalytic", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Analytics::VRDeviceActiveControllersAnalytic*, false>(nullptr, ___internal_method);
}
inline void UnityEngine::Analytics::VRDeviceActiveControllersAnalytic::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::VRDeviceActiveControllersAnalytic*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Analytics::VRDeviceActiveControllersAnalytic* UnityEngine::Analytics::VRDeviceActiveControllersAnalytic::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Analytics::VRDeviceActiveControllersAnalytic*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Analytics::VRDeviceActiveControllersAnalytic::VRDeviceActiveControllersAnalytic() {}
