#pragma once
// IWYU pragma private; include "GlobalNamespace/AuthenticationTokenPlatformExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__AuthenticationTokenPlatformExtensions_def.hpp"
#include "GlobalNamespace/zzzz__AuthenticationToken_def.hpp"
#include "GlobalNamespace/zzzz__UserInfo_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AuthenticationTokenPlatformExtensions.ToAuthenticationTokenPlatform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__AuthenticationToken__Platform (*)(::GlobalNamespace::__UserInfo__Platform)>(
    &::GlobalNamespace::AuthenticationTokenPlatformExtensions::ToAuthenticationTokenPlatform)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2bf1d1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AuthenticationTokenPlatformExtensions*>::get(), "ToAuthenticationTokenPlatform",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__UserInfo__Platform>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AuthenticationTokenPlatformExtensions.ToUserInfoPlatform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__UserInfo__Platform (*)(::GlobalNamespace::__AuthenticationToken__Platform)>(
    &::GlobalNamespace::AuthenticationTokenPlatformExtensions::ToUserInfoPlatform)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2bf1d44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AuthenticationTokenPlatformExtensions*>::get(), "ToUserInfoPlatform", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__AuthenticationToken__Platform>::get() })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__AuthenticationToken__Platform GlobalNamespace::AuthenticationTokenPlatformExtensions::ToAuthenticationTokenPlatform(::GlobalNamespace::__UserInfo__Platform platform) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AuthenticationTokenPlatformExtensions*>::get(), "ToAuthenticationTokenPlatform",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__UserInfo__Platform>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__AuthenticationToken__Platform, false>(nullptr, ___internal_method, platform);
}
inline ::GlobalNamespace::__UserInfo__Platform GlobalNamespace::AuthenticationTokenPlatformExtensions::ToUserInfoPlatform(::GlobalNamespace::__AuthenticationToken__Platform platform) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AuthenticationTokenPlatformExtensions*>::get(), "ToUserInfoPlatform", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__AuthenticationToken__Platform>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__UserInfo__Platform, false>(nullptr, ___internal_method, platform);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AuthenticationTokenPlatformExtensions::AuthenticationTokenPlatformExtensions() {}
