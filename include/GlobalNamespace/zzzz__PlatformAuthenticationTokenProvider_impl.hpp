#pragma once
// IWYU pragma private; include "GlobalNamespace\PlatformAuthenticationTokenProvider.hpp"
#include "GlobalNamespace/zzzz__AuthenticationToken_impl.hpp"
#include "GlobalNamespace/zzzz__XPlatformAccessTokenData_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PlatformAuthenticationTokenProvider_def.hpp"
#include "BGNet/Core/zzzz__IPlatformAccessTokenFetcher_def.hpp"
#include "GlobalNamespace/zzzz__AuthenticationToken_def.hpp"
#include "GlobalNamespace/zzzz__IAuthenticationTokenProvider_def.hpp"
#include "GlobalNamespace/zzzz__PlatformAuthenticationTokenProvider_def.hpp"
#include "GlobalNamespace/zzzz__PlatformEnvironment_def.hpp"
#include "GlobalNamespace/zzzz__UserInfo_def.hpp"
#include "GlobalNamespace/zzzz__XPlatformAccessTokenData_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__IPlatform_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlatformAuthenticationTokenProvider__GetXPlatformAccessToken_d__13.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlatformAuthenticationTokenProvider__GetXPlatformAccessToken_d__13::*)()>(
    &::GlobalNamespace::PlatformAuthenticationTokenProvider__GetXPlatformAccessToken_d__13::MoveNext)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x5f408d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformAuthenticationTokenProvider__GetXPlatformAccessToken_d__13>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformAuthenticationTokenProvider__GetXPlatformAccessToken_d__13.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlatformAuthenticationTokenProvider__GetXPlatformAccessToken_d__13::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::PlatformAuthenticationTokenProvider__GetXPlatformAccessToken_d__13::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5f40c3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformAuthenticationTokenProvider__GetXPlatformAccessToken_d__13>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PlatformAuthenticationTokenProvider__GetXPlatformAccessToken_d__13::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformAuthenticationTokenProvider__GetXPlatformAccessToken_d__13>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::PlatformAuthenticationTokenProvider__GetXPlatformAccessToken_d__13::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformAuthenticationTokenProvider__GetXPlatformAccessToken_d__13>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::PlatformAuthenticationTokenProvider__GetXPlatformAccessToken_d__13::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::PlatformAuthenticationTokenProvider__GetXPlatformAccessToken_d__13::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::GlobalNamespace::PlatformAuthenticationTokenProvider*", modifiers: "", def_value: Some("{}") }, CppParam { name: "skipCacheRead", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PlatformAuthenticationTokenProvider__GetXPlatformAccessToken_d__13::PlatformAuthenticationTokenProvider__GetXPlatformAccessToken_d__13(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData> __t__builder,
    ::GlobalNamespace::PlatformAuthenticationTokenProvider* __4__this, bool skipCacheRead, ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->skipCacheRead = skipCacheRead;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlatformAuthenticationTokenProvider__GetXPlatformAccessToken_d__13::PlatformAuthenticationTokenProvider__GetXPlatformAccessToken_d__13() {}
//  Writing Method size for method: ::GlobalNamespace::PlatformAuthenticationTokenProvider.get_hashedUserId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::PlatformAuthenticationTokenProvider::*)()>(
    &::GlobalNamespace::PlatformAuthenticationTokenProvider::get_hashedUserId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f40768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformAuthenticationTokenProvider*>(), { "get_hashedUserId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformAuthenticationTokenProvider.get_userName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::PlatformAuthenticationTokenProvider::*)()>(
    &::GlobalNamespace::PlatformAuthenticationTokenProvider::get_userName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f40770;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformAuthenticationTokenProvider*>(), { "get_userName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformAuthenticationTokenProvider.get_platformType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AuthenticationToken_PlatformType (::GlobalNamespace::PlatformAuthenticationTokenProvider::*)()>(
    &::GlobalNamespace::PlatformAuthenticationTokenProvider::get_platformType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f40778;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformAuthenticationTokenProvider*>(), { "get_platformType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformAuthenticationTokenProvider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlatformAuthenticationTokenProvider::*)(::OculusStudios::Platform::Core::IPlatform*, ::GlobalNamespace::UserInfo*)>(
    &::GlobalNamespace::PlatformAuthenticationTokenProvider::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5f40780;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformAuthenticationTokenProvider*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::OculusStudios::Platform::Core::IPlatform*>(), ::i2c::type_of<::GlobalNamespace::UserInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformAuthenticationTokenProvider.GetTokenPlatform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AuthenticationToken_PlatformType (::GlobalNamespace::PlatformAuthenticationTokenProvider::*)(
    ::GlobalNamespace::PlatformEnvironment)>(&::GlobalNamespace::PlatformAuthenticationTokenProvider::GetTokenPlatform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f407d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformAuthenticationTokenProvider*>(),
                                                                                           { "GetTokenPlatform", {}, { ::i2c::type_of<::GlobalNamespace::PlatformEnvironment>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformAuthenticationTokenProvider.GetXPlatformAccessToken
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData>* (
    ::GlobalNamespace::PlatformAuthenticationTokenProvider::*)(::System::Threading::CancellationToken, bool)>(&::GlobalNamespace::PlatformAuthenticationTokenProvider::GetXPlatformAccessToken)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5f407e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformAuthenticationTokenProvider*>(),
                                                             { "GetXPlatformAccessToken", {}, { ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::OculusStudios::Platform::Core::IPlatform*& GlobalNamespace::PlatformAuthenticationTokenProvider::__cordl_internal_get__platform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platform;
}
constexpr ::OculusStudios::Platform::Core::IPlatform* const& GlobalNamespace::PlatformAuthenticationTokenProvider::__cordl_internal_get__platform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platform;
}
constexpr void GlobalNamespace::PlatformAuthenticationTokenProvider::__cordl_internal_set__platform(::OculusStudios::Platform::Core::IPlatform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____platform = value;
}
constexpr ::StringW& GlobalNamespace::PlatformAuthenticationTokenProvider::__cordl_internal_get__userId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userId;
}
constexpr ::StringW const& GlobalNamespace::PlatformAuthenticationTokenProvider::__cordl_internal_get__userId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userId;
}
constexpr void GlobalNamespace::PlatformAuthenticationTokenProvider::__cordl_internal_set__userId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____userId = value;
}
constexpr ::StringW& GlobalNamespace::PlatformAuthenticationTokenProvider::__cordl_internal_get__userName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userName;
}
constexpr ::StringW const& GlobalNamespace::PlatformAuthenticationTokenProvider::__cordl_internal_get__userName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userName;
}
constexpr void GlobalNamespace::PlatformAuthenticationTokenProvider::__cordl_internal_set__userName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____userName = value;
}
constexpr ::StringW& GlobalNamespace::PlatformAuthenticationTokenProvider::__cordl_internal_get__hashedUserId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hashedUserId;
}
constexpr ::StringW const& GlobalNamespace::PlatformAuthenticationTokenProvider::__cordl_internal_get__hashedUserId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hashedUserId;
}
constexpr void GlobalNamespace::PlatformAuthenticationTokenProvider::__cordl_internal_set__hashedUserId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hashedUserId = value;
}
constexpr ::GlobalNamespace::AuthenticationToken_PlatformType& GlobalNamespace::PlatformAuthenticationTokenProvider::__cordl_internal_get__platformType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platformType;
}
constexpr ::GlobalNamespace::AuthenticationToken_PlatformType const& GlobalNamespace::PlatformAuthenticationTokenProvider::__cordl_internal_get__platformType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platformType;
}
constexpr void GlobalNamespace::PlatformAuthenticationTokenProvider::__cordl_internal_set__platformType(::GlobalNamespace::AuthenticationToken_PlatformType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____platformType = value;
}
inline ::StringW GlobalNamespace::PlatformAuthenticationTokenProvider::get_hashedUserId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformAuthenticationTokenProvider*>(), { "get_hashedUserId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::PlatformAuthenticationTokenProvider::get_userName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformAuthenticationTokenProvider*>(), { "get_userName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::GlobalNamespace::AuthenticationToken_PlatformType GlobalNamespace::PlatformAuthenticationTokenProvider::get_platformType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformAuthenticationTokenProvider*>(), { "get_platformType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AuthenticationToken_PlatformType>(this, ___internal_method);
}
inline void GlobalNamespace::PlatformAuthenticationTokenProvider::_ctor(::OculusStudios::Platform::Core::IPlatform* platform, ::GlobalNamespace::UserInfo* userInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformAuthenticationTokenProvider*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::OculusStudios::Platform::Core::IPlatform*>(), ::i2c::type_of<::GlobalNamespace::UserInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, platform, userInfo);
}
inline ::GlobalNamespace::AuthenticationToken_PlatformType GlobalNamespace::PlatformAuthenticationTokenProvider::GetTokenPlatform(::GlobalNamespace::PlatformEnvironment tokenPlatformEnvironment) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformAuthenticationTokenProvider*>(),
                                                                                         { "GetTokenPlatform", {}, { ::i2c::type_of<::GlobalNamespace::PlatformEnvironment>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AuthenticationToken_PlatformType>(this, ___internal_method, tokenPlatformEnvironment);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData>*
GlobalNamespace::PlatformAuthenticationTokenProvider::GetXPlatformAccessToken(::System::Threading::CancellationToken cancellationToken, bool skipCacheRead) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformAuthenticationTokenProvider*>(),
                                                           { "GetXPlatformAccessToken", {}, { ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData>*>(this, ___internal_method, cancellationToken, skipCacheRead);
}
inline ::GlobalNamespace::PlatformAuthenticationTokenProvider* GlobalNamespace::PlatformAuthenticationTokenProvider::New_ctor(::OculusStudios::Platform::Core::IPlatform* platform,
                                                                                                                              ::GlobalNamespace::UserInfo* userInfo) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlatformAuthenticationTokenProvider*>(platform, userInfo));
}
/// @brief Convert operator to "::GlobalNamespace::IAuthenticationTokenProvider"
constexpr GlobalNamespace::PlatformAuthenticationTokenProvider::operator ::GlobalNamespace::IAuthenticationTokenProvider*() noexcept {
  return static_cast<::GlobalNamespace::IAuthenticationTokenProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IAuthenticationTokenProvider"
constexpr ::GlobalNamespace::IAuthenticationTokenProvider* GlobalNamespace::PlatformAuthenticationTokenProvider::i___GlobalNamespace__IAuthenticationTokenProvider() noexcept {
  return static_cast<::GlobalNamespace::IAuthenticationTokenProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::BGNet::Core::IPlatformAccessTokenFetcher"
constexpr GlobalNamespace::PlatformAuthenticationTokenProvider::operator ::BGNet::Core::IPlatformAccessTokenFetcher*() noexcept {
  return static_cast<::BGNet::Core::IPlatformAccessTokenFetcher*>(static_cast<void*>(this));
}
/// @brief Convert to "::BGNet::Core::IPlatformAccessTokenFetcher"
constexpr ::BGNet::Core::IPlatformAccessTokenFetcher* GlobalNamespace::PlatformAuthenticationTokenProvider::i___BGNet__Core__IPlatformAccessTokenFetcher() noexcept {
  return static_cast<::BGNet::Core::IPlatformAccessTokenFetcher*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlatformAuthenticationTokenProvider::PlatformAuthenticationTokenProvider() {}
