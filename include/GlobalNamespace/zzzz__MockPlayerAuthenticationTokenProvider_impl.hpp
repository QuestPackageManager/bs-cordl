#pragma once
// IWYU pragma private; include "GlobalNamespace/MockPlayerAuthenticationTokenProvider.hpp"
#include "GlobalNamespace/zzzz__AuthenticationToken_impl.hpp"
#include "GlobalNamespace/zzzz__XPlatformAccessTokenData_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MockPlayerAuthenticationTokenProvider_def.hpp"
#include "BGNet/Core/zzzz__IPlatformAccessTokenFetcher_def.hpp"
#include "GlobalNamespace/zzzz__AuthenticationToken_def.hpp"
#include "GlobalNamespace/zzzz__IAuthenticationTokenProvider_def.hpp"
#include "GlobalNamespace/zzzz__PlatformEnvironment_def.hpp"
#include "GlobalNamespace/zzzz__XPlatformAccessTokenData_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MockPlayerAuthenticationTokenProvider.get_hashedUserId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::MockPlayerAuthenticationTokenProvider::*)()>(
    &::GlobalNamespace::MockPlayerAuthenticationTokenProvider::get_hashedUserId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a8084c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerAuthenticationTokenProvider*>(), { "get_hashedUserId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerAuthenticationTokenProvider.get_userName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::MockPlayerAuthenticationTokenProvider::*)()>(
    &::GlobalNamespace::MockPlayerAuthenticationTokenProvider::get_userName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a80854;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerAuthenticationTokenProvider*>(), { "get_userName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerAuthenticationTokenProvider.get_platformType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AuthenticationToken_PlatformType (::GlobalNamespace::MockPlayerAuthenticationTokenProvider::*)()>(
    &::GlobalNamespace::MockPlayerAuthenticationTokenProvider::get_platformType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a8085c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerAuthenticationTokenProvider*>(), { "get_platformType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerAuthenticationTokenProvider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayerAuthenticationTokenProvider::*)(::StringW, ::StringW, ::GlobalNamespace::XPlatformAccessTokenData)>(
    &::GlobalNamespace::MockPlayerAuthenticationTokenProvider::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5a80864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerAuthenticationTokenProvider*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::XPlatformAccessTokenData>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerAuthenticationTokenProvider.GetTokenPlatform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AuthenticationToken_PlatformType (::GlobalNamespace::MockPlayerAuthenticationTokenProvider::*)(
    ::GlobalNamespace::PlatformEnvironment)>(&::GlobalNamespace::MockPlayerAuthenticationTokenProvider::GetTokenPlatform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a80930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerAuthenticationTokenProvider*>(),
                                                                                           { "GetTokenPlatform", {}, { ::i2c::type_of<::GlobalNamespace::PlatformEnvironment>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerAuthenticationTokenProvider.GetXPlatformAccessToken
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData>* (
    ::GlobalNamespace::MockPlayerAuthenticationTokenProvider::*)(::System::Threading::CancellationToken, bool)>(&::GlobalNamespace::MockPlayerAuthenticationTokenProvider::GetXPlatformAccessToken)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5a80938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerAuthenticationTokenProvider*>(),
                                                             { "GetXPlatformAccessToken", {}, { ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::MockPlayerAuthenticationTokenProvider::__cordl_internal_get__hashedUserId_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hashedUserId_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::MockPlayerAuthenticationTokenProvider::__cordl_internal_get__hashedUserId_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hashedUserId_k__BackingField;
}
constexpr void GlobalNamespace::MockPlayerAuthenticationTokenProvider::__cordl_internal_set__hashedUserId_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hashedUserId_k__BackingField = value;
}
constexpr ::StringW& GlobalNamespace::MockPlayerAuthenticationTokenProvider::__cordl_internal_get__userName_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userName_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::MockPlayerAuthenticationTokenProvider::__cordl_internal_get__userName_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userName_k__BackingField;
}
constexpr void GlobalNamespace::MockPlayerAuthenticationTokenProvider::__cordl_internal_set__userName_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____userName_k__BackingField = value;
}
constexpr ::GlobalNamespace::AuthenticationToken_PlatformType& GlobalNamespace::MockPlayerAuthenticationTokenProvider::__cordl_internal_get__platformType_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platformType_k__BackingField;
}
constexpr ::GlobalNamespace::AuthenticationToken_PlatformType const& GlobalNamespace::MockPlayerAuthenticationTokenProvider::__cordl_internal_get__platformType_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platformType_k__BackingField;
}
constexpr void GlobalNamespace::MockPlayerAuthenticationTokenProvider::__cordl_internal_set__platformType_k__BackingField(::GlobalNamespace::AuthenticationToken_PlatformType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____platformType_k__BackingField = value;
}
constexpr ::GlobalNamespace::XPlatformAccessTokenData& GlobalNamespace::MockPlayerAuthenticationTokenProvider::__cordl_internal_get__mockTokenData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mockTokenData;
}
constexpr ::GlobalNamespace::XPlatformAccessTokenData const& GlobalNamespace::MockPlayerAuthenticationTokenProvider::__cordl_internal_get__mockTokenData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mockTokenData;
}
constexpr void GlobalNamespace::MockPlayerAuthenticationTokenProvider::__cordl_internal_set__mockTokenData(::GlobalNamespace::XPlatformAccessTokenData value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mockTokenData = value;
}
inline ::StringW GlobalNamespace::MockPlayerAuthenticationTokenProvider::get_hashedUserId() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerAuthenticationTokenProvider*>(), { "get_hashedUserId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::MockPlayerAuthenticationTokenProvider::get_userName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerAuthenticationTokenProvider*>(), { "get_userName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::GlobalNamespace::AuthenticationToken_PlatformType GlobalNamespace::MockPlayerAuthenticationTokenProvider::get_platformType() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerAuthenticationTokenProvider*>(), { "get_platformType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AuthenticationToken_PlatformType>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayerAuthenticationTokenProvider::_ctor(::StringW userId, ::StringW userName, ::GlobalNamespace::XPlatformAccessTokenData mockTokenData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerAuthenticationTokenProvider*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::XPlatformAccessTokenData>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId, userName, mockTokenData);
}
inline ::GlobalNamespace::AuthenticationToken_PlatformType GlobalNamespace::MockPlayerAuthenticationTokenProvider::GetTokenPlatform(::GlobalNamespace::PlatformEnvironment tokenPlatformEnvironment) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerAuthenticationTokenProvider*>(),
                                                                                         { "GetTokenPlatform", {}, { ::i2c::type_of<::GlobalNamespace::PlatformEnvironment>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AuthenticationToken_PlatformType>(this, ___internal_method, tokenPlatformEnvironment);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData>*
GlobalNamespace::MockPlayerAuthenticationTokenProvider::GetXPlatformAccessToken(::System::Threading::CancellationToken cancellationToken, bool skipCache) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerAuthenticationTokenProvider*>(),
                                                           { "GetXPlatformAccessToken", {}, { ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData>*>(this, ___internal_method, cancellationToken, skipCache);
}
inline ::GlobalNamespace::MockPlayerAuthenticationTokenProvider* GlobalNamespace::MockPlayerAuthenticationTokenProvider::New_ctor(::StringW userId, ::StringW userName,
                                                                                                                                  ::GlobalNamespace::XPlatformAccessTokenData mockTokenData) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MockPlayerAuthenticationTokenProvider*>(userId, userName, mockTokenData));
}
/// @brief Convert operator to "::GlobalNamespace::IAuthenticationTokenProvider"
constexpr GlobalNamespace::MockPlayerAuthenticationTokenProvider::operator ::GlobalNamespace::IAuthenticationTokenProvider*() noexcept {
  return static_cast<::GlobalNamespace::IAuthenticationTokenProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IAuthenticationTokenProvider"
constexpr ::GlobalNamespace::IAuthenticationTokenProvider* GlobalNamespace::MockPlayerAuthenticationTokenProvider::i___GlobalNamespace__IAuthenticationTokenProvider() noexcept {
  return static_cast<::GlobalNamespace::IAuthenticationTokenProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::BGNet::Core::IPlatformAccessTokenFetcher"
constexpr GlobalNamespace::MockPlayerAuthenticationTokenProvider::operator ::BGNet::Core::IPlatformAccessTokenFetcher*() noexcept {
  return static_cast<::BGNet::Core::IPlatformAccessTokenFetcher*>(static_cast<void*>(this));
}
/// @brief Convert to "::BGNet::Core::IPlatformAccessTokenFetcher"
constexpr ::BGNet::Core::IPlatformAccessTokenFetcher* GlobalNamespace::MockPlayerAuthenticationTokenProvider::i___BGNet__Core__IPlatformAccessTokenFetcher() noexcept {
  return static_cast<::BGNet::Core::IPlatformAccessTokenFetcher*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MockPlayerAuthenticationTokenProvider::MockPlayerAuthenticationTokenProvider() {}
