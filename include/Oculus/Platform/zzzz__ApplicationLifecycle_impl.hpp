#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/zzzz__ApplicationLifecycle_def.hpp"
#include "Oculus/Platform/Models/zzzz__LaunchDetails_def.hpp"
#include "Oculus/Platform/zzzz__LaunchResult_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::ApplicationLifecycle.GetLaunchDetails
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::LaunchDetails* (*)()>(&::Oculus::Platform::ApplicationLifecycle::GetLaunchDetails)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2acbc60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::ApplicationLifecycle*>::get(),
                                                                               "GetLaunchDetails", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::ApplicationLifecycle.LogDeeplinkResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::Oculus::Platform::LaunchResult)>(
    &::Oculus::Platform::ApplicationLifecycle::LogDeeplinkResult)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2acbcf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::ApplicationLifecycle*>::get(), "LogDeeplinkResult", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::LaunchResult>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::ApplicationLifecycle.SetLaunchIntentChangedNotificationCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Oculus::Platform::__Message_1__Callback<::StringW>*)>(
    &::Oculus::Platform::ApplicationLifecycle::SetLaunchIntentChangedNotificationCallback)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2acbd54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::ApplicationLifecycle*>::get(), "SetLaunchIntentChangedNotificationCallback",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::__Message_1__Callback<::StringW>*>::get() })));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::Models::LaunchDetails* Oculus::Platform::ApplicationLifecycle::GetLaunchDetails() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::ApplicationLifecycle*>::get(),
                                                                             "GetLaunchDetails", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::LaunchDetails*, false>(nullptr, ___internal_method);
}
inline void Oculus::Platform::ApplicationLifecycle::LogDeeplinkResult(::StringW trackingID, ::Oculus::Platform::LaunchResult result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::ApplicationLifecycle*>::get(), "LogDeeplinkResult", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::LaunchResult>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, trackingID, result);
}
inline void Oculus::Platform::ApplicationLifecycle::SetLaunchIntentChangedNotificationCallback(::Oculus::Platform::__Message_1__Callback<::StringW>* callback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::ApplicationLifecycle*>::get(), "SetLaunchIntentChangedNotificationCallback", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::__Message_1__Callback<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, callback);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::ApplicationLifecycle::ApplicationLifecycle() {}
