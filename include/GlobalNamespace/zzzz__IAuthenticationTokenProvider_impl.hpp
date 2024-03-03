#pragma once
#include "GlobalNamespace/zzzz__IAuthenticationTokenProvider_def.hpp"
#include "GlobalNamespace/zzzz__AuthenticationToken_def.hpp"
#include "GlobalNamespace/zzzz__PlatformEnvironment_def.hpp"
#include "GlobalNamespace/zzzz__XPlatformAccessTokenData_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IAuthenticationTokenProvider.GetAuthenticationToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>* (
    ::GlobalNamespace::IAuthenticationTokenProvider::*)()>(&::GlobalNamespace::IAuthenticationTokenProvider::GetAuthenticationToken)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IAuthenticationTokenProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IAuthenticationTokenProvider*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IAuthenticationTokenProvider.GetTokenPlatform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__AuthenticationToken__Platform (::GlobalNamespace::IAuthenticationTokenProvider::*)(
    ::GlobalNamespace::PlatformEnvironment)>(&::GlobalNamespace::IAuthenticationTokenProvider::GetTokenPlatform)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IAuthenticationTokenProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IAuthenticationTokenProvider*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IAuthenticationTokenProvider.GetXPlatformAccessToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData>* (
    ::GlobalNamespace::IAuthenticationTokenProvider::*)(::System::Threading::CancellationToken, bool)>(&::GlobalNamespace::IAuthenticationTokenProvider::GetXPlatformAccessToken)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IAuthenticationTokenProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IAuthenticationTokenProvider*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IAuthenticationTokenProvider.get_hashedUserId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::IAuthenticationTokenProvider::*)()>(
    &::GlobalNamespace::IAuthenticationTokenProvider::get_hashedUserId)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IAuthenticationTokenProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IAuthenticationTokenProvider*>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IAuthenticationTokenProvider.get_userName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::IAuthenticationTokenProvider::*)()>(
    &::GlobalNamespace::IAuthenticationTokenProvider::get_userName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IAuthenticationTokenProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IAuthenticationTokenProvider*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IAuthenticationTokenProvider.get_platform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__AuthenticationToken__Platform (::GlobalNamespace::IAuthenticationTokenProvider::*)()>(
    &::GlobalNamespace::IAuthenticationTokenProvider::get_platform)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IAuthenticationTokenProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IAuthenticationTokenProvider*>::get(), 5));
    return ___internal_method;
  }
};
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>* GlobalNamespace::IAuthenticationTokenProvider::GetAuthenticationToken() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IAuthenticationTokenProvider*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__AuthenticationToken__Platform GlobalNamespace::IAuthenticationTokenProvider::GetTokenPlatform(::GlobalNamespace::PlatformEnvironment tokenPlatformEnvironment) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IAuthenticationTokenProvider*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__AuthenticationToken__Platform, false>(this, ___internal_method, tokenPlatformEnvironment);
}
/// @param skipCache: bool (default: false)
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData>*
GlobalNamespace::IAuthenticationTokenProvider::GetXPlatformAccessToken(::System::Threading::CancellationToken cancellationToken, bool skipCache) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IAuthenticationTokenProvider*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData>*, false>(this, ___internal_method, cancellationToken, skipCache);
}
inline ::StringW GlobalNamespace::IAuthenticationTokenProvider::get_hashedUserId() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IAuthenticationTokenProvider*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::IAuthenticationTokenProvider::get_userName() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IAuthenticationTokenProvider*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__AuthenticationToken__Platform GlobalNamespace::IAuthenticationTokenProvider::get_platform() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IAuthenticationTokenProvider*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__AuthenticationToken__Platform, false>(this, ___internal_method);
}
