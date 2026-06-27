#pragma once
// IWYU pragma private; include "Oculus/Platform/ApplicationLifecycle.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/zzzz__ApplicationLifecycle_def.hpp"
#include "Oculus/Platform/Models/zzzz__LaunchDetails_def.hpp"
#include "Oculus/Platform/zzzz__LaunchResult_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::ApplicationLifecycle.GetLaunchDetails
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::LaunchDetails* (*)()>(&::Oculus::Platform::ApplicationLifecycle::GetLaunchDetails)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5ca4da8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::ApplicationLifecycle*>::get(),
                        "GetLaunchDetails",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::ApplicationLifecycle.LogDeeplinkResult
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::Oculus::Platform::LaunchResult)>(&::Oculus::Platform::ApplicationLifecycle::LogDeeplinkResult)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5ca4e38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::ApplicationLifecycle*>::get(),
                        "LogDeeplinkResult",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::LaunchResult>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::ApplicationLifecycle.SetLaunchIntentChangedNotificationCallback
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Oculus::Platform::Message_1_Callback<::StringW>*)>(&::Oculus::Platform::ApplicationLifecycle::SetLaunchIntentChangedNotificationCallback)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5ca4ea0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::ApplicationLifecycle*>::get(),
                        "SetLaunchIntentChangedNotificationCallback",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1_Callback<::StringW>*>::get()}
                    )));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::Models::LaunchDetails* Oculus::Platform::ApplicationLifecycle::GetLaunchDetails()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::ApplicationLifecycle*>::get(),
                        "GetLaunchDetails",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::LaunchDetails*, false>(nullptr, ___internal_method);
}
inline void Oculus::Platform::ApplicationLifecycle::LogDeeplinkResult(::StringW  trackingID, ::Oculus::Platform::LaunchResult  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::ApplicationLifecycle*>::get(),
                        "LogDeeplinkResult",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::LaunchResult>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, trackingID, result);
}
inline void Oculus::Platform::ApplicationLifecycle::SetLaunchIntentChangedNotificationCallback(::Oculus::Platform::Message_1_Callback<::StringW>*  callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::ApplicationLifecycle*>::get(),
                        "SetLaunchIntentChangedNotificationCallback",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1_Callback<::StringW>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, callback);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::ApplicationLifecycle::ApplicationLifecycle()   {
}
