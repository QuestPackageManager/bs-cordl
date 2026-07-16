#pragma once
// IWYU pragma private; include "GlobalNamespace/AuthenticationTokenPlatformExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__AuthenticationTokenPlatformExtensions_def.hpp"
#include "GlobalNamespace/zzzz__AuthenticationToken_def.hpp"
#include "GlobalNamespace/zzzz__UserInfo_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AuthenticationTokenPlatformExtensions.ToAuthenticationTokenPlatform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AuthenticationToken_PlatformType (*)(::GlobalNamespace::UserInfo_Platform)>(
    &::GlobalNamespace::AuthenticationTokenPlatformExtensions::ToAuthenticationTokenPlatform)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f3e3e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AuthenticationTokenPlatformExtensions*>(),
                                                                                           { "ToAuthenticationTokenPlatform", {}, { ::i2c::type_of<::GlobalNamespace::UserInfo_Platform>() } })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::AuthenticationToken_PlatformType GlobalNamespace::AuthenticationTokenPlatformExtensions::ToAuthenticationTokenPlatform(::GlobalNamespace::UserInfo_Platform platform) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AuthenticationTokenPlatformExtensions*>(),
                                                                                         { "ToAuthenticationTokenPlatform", {}, { ::i2c::type_of<::GlobalNamespace::UserInfo_Platform>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AuthenticationToken_PlatformType>(nullptr, ___internal_method, platform);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AuthenticationTokenPlatformExtensions::AuthenticationTokenPlatformExtensions() {}
