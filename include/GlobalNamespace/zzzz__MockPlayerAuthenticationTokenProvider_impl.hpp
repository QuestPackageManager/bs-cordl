#pragma once
// IWYU pragma private; include "GlobalNamespace/MockPlayerAuthenticationTokenProvider.hpp"
#include "BGNet/Core/zzzz__IPlatformAccessTokenFetcher_impl.hpp"
#include "GlobalNamespace/zzzz__AuthenticationToken_impl.hpp"
#include "GlobalNamespace/zzzz__IAuthenticationTokenProvider_impl.hpp"
#include "GlobalNamespace/zzzz__XPlatformAccessTokenData_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MockPlayerAuthenticationTokenProvider_def.hpp"
#include "GlobalNamespace/zzzz__AuthenticationToken_def.hpp"
#include "GlobalNamespace/zzzz__PlatformEnvironment_def.hpp"
#include "GlobalNamespace/zzzz__XPlatformAccessTokenData_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MockPlayerAuthenticationTokenProvider.get_hashedUserId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::MockPlayerAuthenticationTokenProvider::*)()>(
    &::GlobalNamespace::MockPlayerAuthenticationTokenProvider::get_hashedUserId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c2a81c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerAuthenticationTokenProvider*>::get(),
                                                                               "get_hashedUserId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerAuthenticationTokenProvider.get_userName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::MockPlayerAuthenticationTokenProvider::*)()>(
    &::GlobalNamespace::MockPlayerAuthenticationTokenProvider::get_userName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c2a824;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerAuthenticationTokenProvider*>::get(),
                                                                               "get_userName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerAuthenticationTokenProvider.get_platform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::AuthenticationToken_Platform (::GlobalNamespace::MockPlayerAuthenticationTokenProvider::*)()>(
    &::GlobalNamespace::MockPlayerAuthenticationTokenProvider::get_platform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c2a82c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerAuthenticationTokenProvider*>::get(),
                                                                               "get_platform", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerAuthenticationTokenProvider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MockPlayerAuthenticationTokenProvider::*)(
    ::StringW, ::StringW, ::StringW, ::GlobalNamespace::XPlatformAccessTokenData)>(&::GlobalNamespace::MockPlayerAuthenticationTokenProvider::_ctor)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x3c2a834;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerAuthenticationTokenProvider*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::XPlatformAccessTokenData>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerAuthenticationTokenProvider.GetAuthenticationToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>* (
    ::GlobalNamespace::MockPlayerAuthenticationTokenProvider::*)()>(&::GlobalNamespace::MockPlayerAuthenticationTokenProvider::GetAuthenticationToken)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x3c2a958;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerAuthenticationTokenProvider*>::get(),
                                                                               "GetAuthenticationToken", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerAuthenticationTokenProvider.GetTokenPlatform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::AuthenticationToken_Platform (::GlobalNamespace::MockPlayerAuthenticationTokenProvider::*)(
    ::GlobalNamespace::PlatformEnvironment)>(&::GlobalNamespace::MockPlayerAuthenticationTokenProvider::GetTokenPlatform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c2a9f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerAuthenticationTokenProvider*>::get(), "GetTokenPlatform", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlatformEnvironment>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerAuthenticationTokenProvider.GetXPlatformAccessToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData>* (
    ::GlobalNamespace::MockPlayerAuthenticationTokenProvider::*)(::System::Threading::CancellationToken, bool)>(&::GlobalNamespace::MockPlayerAuthenticationTokenProvider::GetXPlatformAccessToken)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3c2aa00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerAuthenticationTokenProvider*>::get(), "GetXPlatformAccessToken", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::MockPlayerAuthenticationTokenProvider::__cordl_internal_get__userId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userId;
}
constexpr ::StringW const& GlobalNamespace::MockPlayerAuthenticationTokenProvider::__cordl_internal_get__userId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userId;
}
constexpr void GlobalNamespace::MockPlayerAuthenticationTokenProvider::__cordl_internal_set__userId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____userId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::MockPlayerAuthenticationTokenProvider::__cordl_internal_get__password() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____password;
}
constexpr ::StringW const& GlobalNamespace::MockPlayerAuthenticationTokenProvider::__cordl_internal_get__password() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____password;
}
constexpr void GlobalNamespace::MockPlayerAuthenticationTokenProvider::__cordl_internal_set__password(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____password)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____hashedUserId_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____userName_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::AuthenticationToken_Platform& GlobalNamespace::MockPlayerAuthenticationTokenProvider::__cordl_internal_get__platform_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platform_k__BackingField;
}
constexpr ::GlobalNamespace::AuthenticationToken_Platform const& GlobalNamespace::MockPlayerAuthenticationTokenProvider::__cordl_internal_get__platform_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platform_k__BackingField;
}
constexpr void GlobalNamespace::MockPlayerAuthenticationTokenProvider::__cordl_internal_set__platform_k__BackingField(::GlobalNamespace::AuthenticationToken_Platform value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____platform_k__BackingField = value;
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
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerAuthenticationTokenProvider*>::get(),
                                                                             "get_hashedUserId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::MockPlayerAuthenticationTokenProvider::get_userName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerAuthenticationTokenProvider*>::get(),
                                                                             "get_userName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::GlobalNamespace::AuthenticationToken_Platform GlobalNamespace::MockPlayerAuthenticationTokenProvider::get_platform() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerAuthenticationTokenProvider*>::get(),
                                                                             "get_platform", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AuthenticationToken_Platform, false>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayerAuthenticationTokenProvider::_ctor(::StringW userId, ::StringW userName, ::StringW password, ::GlobalNamespace::XPlatformAccessTokenData mockTokenData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerAuthenticationTokenProvider*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::XPlatformAccessTokenData>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, userName, password, mockTokenData);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>* GlobalNamespace::MockPlayerAuthenticationTokenProvider::GetAuthenticationToken() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerAuthenticationTokenProvider*>::get(),
                                                                             "GetAuthenticationToken", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::AuthenticationToken_Platform GlobalNamespace::MockPlayerAuthenticationTokenProvider::GetTokenPlatform(::GlobalNamespace::PlatformEnvironment tokenPlatformEnvironment) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerAuthenticationTokenProvider*>::get(), "GetTokenPlatform", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlatformEnvironment>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AuthenticationToken_Platform, false>(this, ___internal_method, tokenPlatformEnvironment);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData>*
GlobalNamespace::MockPlayerAuthenticationTokenProvider::GetXPlatformAccessToken(::System::Threading::CancellationToken cancellationToken, bool skipCache) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerAuthenticationTokenProvider*>::get(), "GetXPlatformAccessToken", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData>*, false>(this, ___internal_method, cancellationToken, skipCache);
}
inline ::GlobalNamespace::MockPlayerAuthenticationTokenProvider* GlobalNamespace::MockPlayerAuthenticationTokenProvider::New_ctor(::StringW userId, ::StringW userName, ::StringW password,
                                                                                                                                  ::GlobalNamespace::XPlatformAccessTokenData mockTokenData) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MockPlayerAuthenticationTokenProvider*>(userId, userName, password, mockTokenData));
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
