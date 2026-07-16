#pragma once
// IWYU pragma private; include "GlobalNamespace/IAuthenticationTokenProvider.hpp"
#include "GlobalNamespace/zzzz__IAuthenticationTokenProvider_def.hpp"
#include "BGNet/Core/zzzz__IPlatformAccessTokenFetcher_def.hpp"
#include "GlobalNamespace/zzzz__AuthenticationToken_def.hpp"
#include "GlobalNamespace/zzzz__PlatformEnvironment_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IAuthenticationTokenProvider.GetTokenPlatform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AuthenticationToken_PlatformType (::GlobalNamespace::IAuthenticationTokenProvider::*)(
    ::GlobalNamespace::PlatformEnvironment)>(&::GlobalNamespace::IAuthenticationTokenProvider::GetTokenPlatform)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IAuthenticationTokenProvider*>(), { ::i2c::class_of<::GlobalNamespace::IAuthenticationTokenProvider*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IAuthenticationTokenProvider.get_hashedUserId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::IAuthenticationTokenProvider::*)()>(&::GlobalNamespace::IAuthenticationTokenProvider::get_hashedUserId)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IAuthenticationTokenProvider*>(), { ::i2c::class_of<::GlobalNamespace::IAuthenticationTokenProvider*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IAuthenticationTokenProvider.get_userName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::IAuthenticationTokenProvider::*)()>(&::GlobalNamespace::IAuthenticationTokenProvider::get_userName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IAuthenticationTokenProvider*>(), { ::i2c::class_of<::GlobalNamespace::IAuthenticationTokenProvider*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IAuthenticationTokenProvider.get_platformType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AuthenticationToken_PlatformType (::GlobalNamespace::IAuthenticationTokenProvider::*)()>(
    &::GlobalNamespace::IAuthenticationTokenProvider::get_platformType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IAuthenticationTokenProvider*>(), { ::i2c::class_of<::GlobalNamespace::IAuthenticationTokenProvider*>(), 3 }));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::AuthenticationToken_PlatformType GlobalNamespace::IAuthenticationTokenProvider::GetTokenPlatform(::GlobalNamespace::PlatformEnvironment tokenPlatformEnvironment) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IAuthenticationTokenProvider*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AuthenticationToken_PlatformType>(this, ___internal_method, tokenPlatformEnvironment);
}
inline ::StringW GlobalNamespace::IAuthenticationTokenProvider::get_hashedUserId() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IAuthenticationTokenProvider*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::IAuthenticationTokenProvider::get_userName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IAuthenticationTokenProvider*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::GlobalNamespace::AuthenticationToken_PlatformType GlobalNamespace::IAuthenticationTokenProvider::get_platformType() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IAuthenticationTokenProvider*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AuthenticationToken_PlatformType>(this, ___internal_method);
}
/// @brief Convert operator to "::BGNet::Core::IPlatformAccessTokenFetcher"
constexpr GlobalNamespace::IAuthenticationTokenProvider::operator ::BGNet::Core::IPlatformAccessTokenFetcher*() noexcept {
  return static_cast<::BGNet::Core::IPlatformAccessTokenFetcher*>(static_cast<void*>(this));
}
/// @brief Convert to "::BGNet::Core::IPlatformAccessTokenFetcher"
constexpr ::BGNet::Core::IPlatformAccessTokenFetcher* GlobalNamespace::IAuthenticationTokenProvider::i___BGNet__Core__IPlatformAccessTokenFetcher() noexcept {
  return static_cast<::BGNet::Core::IPlatformAccessTokenFetcher*>(static_cast<void*>(this));
}
