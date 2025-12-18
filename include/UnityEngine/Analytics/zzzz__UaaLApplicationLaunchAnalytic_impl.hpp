#pragma once
// IWYU pragma private; include "UnityEngine/Analytics/UaaLApplicationLaunchAnalytic.hpp"
#include "UnityEngine/Analytics/zzzz__AnalyticsEventBase_impl.hpp"
#include "UnityEngine/Analytics/zzzz__UaaLApplicationLaunchAnalytic_def.hpp"
//  Writing Method size for method: ::UnityEngine::Analytics::UaaLApplicationLaunchAnalytic._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Analytics::UaaLApplicationLaunchAnalytic::*)()>(
    &::UnityEngine::Analytics::UaaLApplicationLaunchAnalytic::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x693c89c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::UaaLApplicationLaunchAnalytic*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Analytics::UaaLApplicationLaunchAnalytic.CreateUaaLApplicationLaunchAnalytic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Analytics::UaaLApplicationLaunchAnalytic* (*)()>(
    &::UnityEngine::Analytics::UaaLApplicationLaunchAnalytic::CreateUaaLApplicationLaunchAnalytic)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x693c914;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::UaaLApplicationLaunchAnalytic*>::get(),
                                                 "CreateUaaLApplicationLaunchAnalytic", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Analytics::UaaLApplicationLaunchAnalytic::__cordl_internal_get_launch_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___launch_type;
}
constexpr int32_t const& UnityEngine::Analytics::UaaLApplicationLaunchAnalytic::__cordl_internal_get_launch_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___launch_type;
}
constexpr void UnityEngine::Analytics::UaaLApplicationLaunchAnalytic::__cordl_internal_set_launch_type(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___launch_type = value;
}
constexpr int32_t& UnityEngine::Analytics::UaaLApplicationLaunchAnalytic::__cordl_internal_get_launch_process_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___launch_process_type;
}
constexpr int32_t const& UnityEngine::Analytics::UaaLApplicationLaunchAnalytic::__cordl_internal_get_launch_process_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___launch_process_type;
}
constexpr void UnityEngine::Analytics::UaaLApplicationLaunchAnalytic::__cordl_internal_set_launch_process_type(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___launch_process_type = value;
}
inline void UnityEngine::Analytics::UaaLApplicationLaunchAnalytic::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::UaaLApplicationLaunchAnalytic*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Analytics::UaaLApplicationLaunchAnalytic* UnityEngine::Analytics::UaaLApplicationLaunchAnalytic::CreateUaaLApplicationLaunchAnalytic() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::UaaLApplicationLaunchAnalytic*>::get(),
                                               "CreateUaaLApplicationLaunchAnalytic", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Analytics::UaaLApplicationLaunchAnalytic*, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::Analytics::UaaLApplicationLaunchAnalytic* UnityEngine::Analytics::UaaLApplicationLaunchAnalytic::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Analytics::UaaLApplicationLaunchAnalytic*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Analytics::UaaLApplicationLaunchAnalytic::UaaLApplicationLaunchAnalytic() {}
