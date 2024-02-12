#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/zzzz__Application_def.hpp"
#include "Oculus/Platform/Models/zzzz__ApplicationVersion_def.hpp"
#include "Oculus/Platform/zzzz__ApplicationOptions_def.hpp"
#include "Oculus/Platform/zzzz__Request_1_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Application.GetVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::ApplicationVersion*>* (*)()>(
    &::Oculus::Platform::Application::GetVersion)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x272a6b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Application*>::get(), "GetVersion",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Application.LaunchOtherApp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::StringW>* (*)(uint64_t, ::Oculus::Platform::ApplicationOptions*)>(
    &::Oculus::Platform::Application::LaunchOtherApp)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x272a80c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Application*>::get(), "LaunchOtherApp", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::ApplicationOptions*>::get() })));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::ApplicationVersion*>* Oculus::Platform::Application::GetVersion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Application*>::get(), "GetVersion",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::ApplicationVersion*>*, false>(nullptr, ___internal_method);
}
/// @param deeplink_options: ::Oculus::Platform::ApplicationOptions* (default: nullptr)
inline ::Oculus::Platform::Request_1<::StringW>* Oculus::Platform::Application::LaunchOtherApp(uint64_t appID, ::Oculus::Platform::ApplicationOptions* deeplink_options) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Application*>::get(), "LaunchOtherApp", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::ApplicationOptions*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::StringW>*, false>(nullptr, ___internal_method, appID, deeplink_options);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Application::Application() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
