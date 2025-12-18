#pragma once
// IWYU pragma private; include "GlobalNamespace/AuthenticationTokenPlatformExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__AuthenticationTokenPlatformExtensions_def.hpp"
#include "GlobalNamespace/zzzz__AuthenticationToken_def.hpp"
#include "GlobalNamespace/zzzz__UserInfo_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AuthenticationTokenPlatformExtensions.ToAuthenticationTokenPlatform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::AuthenticationToken_PlatformType (*)(::GlobalNamespace::UserInfo_Platform)>(
    &::GlobalNamespace::AuthenticationTokenPlatformExtensions::ToAuthenticationTokenPlatform)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5d92030;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AuthenticationTokenPlatformExtensions*>::get(), "ToAuthenticationTokenPlatform",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::UserInfo_Platform>::get() })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::AuthenticationToken_PlatformType GlobalNamespace::AuthenticationTokenPlatformExtensions::ToAuthenticationTokenPlatform(::GlobalNamespace::UserInfo_Platform platform) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AuthenticationTokenPlatformExtensions*>::get(), "ToAuthenticationTokenPlatform",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::UserInfo_Platform>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AuthenticationToken_PlatformType, false>(nullptr, ___internal_method, platform);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AuthenticationTokenPlatformExtensions::AuthenticationTokenPlatformExtensions() {}
