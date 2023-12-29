#pragma once
#include "GlobalNamespace/zzzz__AuthenticationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MockPlayerAuthenticationTokenProvider_def.hpp"
#include "GlobalNamespace/zzzz__AuthenticationToken_def.hpp"
#include "GlobalNamespace/zzzz__IAuthenticationTokenProvider_def.hpp"
#include "GlobalNamespace/zzzz__PlatformEnvironment_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "GlobalNamespace/zzzz__XPlatformAccessTokenData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MockPlayerAuthenticationTokenProvider.get_hashedUserId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::MockPlayerAuthenticationTokenProvider::*)()>(
    &::GlobalNamespace::MockPlayerAuthenticationTokenProvider::get_hashedUserId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x228b8a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerAuthenticationTokenProvider*>::get(),
                                                                               "get_hashedUserId", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerAuthenticationTokenProvider.get_userName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::MockPlayerAuthenticationTokenProvider::*)()>(
    &::GlobalNamespace::MockPlayerAuthenticationTokenProvider::get_userName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x228b8b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerAuthenticationTokenProvider*>::get(),
                                                                               "get_userName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerAuthenticationTokenProvider.get_platform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__AuthenticationToken__Platform (::GlobalNamespace::MockPlayerAuthenticationTokenProvider::*)()>(
    &::GlobalNamespace::MockPlayerAuthenticationTokenProvider::get_platform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x228b8b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerAuthenticationTokenProvider*>::get(),
                                                                               "get_platform", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerAuthenticationTokenProvider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MockPlayerAuthenticationTokenProvider::*)(::StringW, ::StringW, ::StringW)>(
    &::GlobalNamespace::MockPlayerAuthenticationTokenProvider::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x228b8c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerAuthenticationTokenProvider*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerAuthenticationTokenProvider.GetAuthenticationToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>* (
    ::GlobalNamespace::MockPlayerAuthenticationTokenProvider::*)()>(&::GlobalNamespace::MockPlayerAuthenticationTokenProvider::GetAuthenticationToken)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x228b958;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerAuthenticationTokenProvider*>::get(),
                                                                               "GetAuthenticationToken", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerAuthenticationTokenProvider.GetTokenPlatform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__AuthenticationToken__Platform (::GlobalNamespace::MockPlayerAuthenticationTokenProvider::*)(
    ::GlobalNamespace::PlatformEnvironment)>(&::GlobalNamespace::MockPlayerAuthenticationTokenProvider::GetTokenPlatform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x228b9f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerAuthenticationTokenProvider*>::get(), "GetTokenPlatform", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlatformEnvironment>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerAuthenticationTokenProvider.GetXPlatformAccessToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData*>* (
    ::GlobalNamespace::MockPlayerAuthenticationTokenProvider::*)(::System::Threading::CancellationToken)>(&::GlobalNamespace::MockPlayerAuthenticationTokenProvider::GetXPlatformAccessToken)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x228ba00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerAuthenticationTokenProvider*>::get(), "GetXPlatformAccessToken", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IAuthenticationTokenProvider"
constexpr GlobalNamespace::MockPlayerAuthenticationTokenProvider::operator ::GlobalNamespace::IAuthenticationTokenProvider*() noexcept {
  return static_cast<::GlobalNamespace::IAuthenticationTokenProvider*>(static_cast<void*>(this));
}
constexpr ::StringW& GlobalNamespace::MockPlayerAuthenticationTokenProvider::__get__userId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userId;
}
constexpr ::StringW const& GlobalNamespace::MockPlayerAuthenticationTokenProvider::__get__userId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userId;
}
constexpr void GlobalNamespace::MockPlayerAuthenticationTokenProvider::__set__userId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____userId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::MockPlayerAuthenticationTokenProvider::__get__password() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____password;
}
constexpr ::StringW const& GlobalNamespace::MockPlayerAuthenticationTokenProvider::__get__password() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____password;
}
constexpr void GlobalNamespace::MockPlayerAuthenticationTokenProvider::__set__password(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____password)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::MockPlayerAuthenticationTokenProvider::__get__hashedUserId_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hashedUserId_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::MockPlayerAuthenticationTokenProvider::__get__hashedUserId_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hashedUserId_k__BackingField;
}
constexpr void GlobalNamespace::MockPlayerAuthenticationTokenProvider::__set__hashedUserId_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____hashedUserId_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::MockPlayerAuthenticationTokenProvider::__get__userName_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userName_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::MockPlayerAuthenticationTokenProvider::__get__userName_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userName_k__BackingField;
}
constexpr void GlobalNamespace::MockPlayerAuthenticationTokenProvider::__set__userName_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____userName_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__AuthenticationToken__Platform& GlobalNamespace::MockPlayerAuthenticationTokenProvider::__get__platform_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platform_k__BackingField;
}
constexpr ::GlobalNamespace::__AuthenticationToken__Platform const& GlobalNamespace::MockPlayerAuthenticationTokenProvider::__get__platform_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platform_k__BackingField;
}
constexpr void GlobalNamespace::MockPlayerAuthenticationTokenProvider::__set__platform_k__BackingField(::GlobalNamespace::__AuthenticationToken__Platform value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____platform_k__BackingField = value;
}
inline ::StringW GlobalNamespace::MockPlayerAuthenticationTokenProvider::get_hashedUserId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerAuthenticationTokenProvider*>::get(),
                                                                             "get_hashedUserId", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::MockPlayerAuthenticationTokenProvider::get_userName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerAuthenticationTokenProvider*>::get(),
                                                                             "get_userName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__AuthenticationToken__Platform GlobalNamespace::MockPlayerAuthenticationTokenProvider::get_platform() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerAuthenticationTokenProvider*>::get(),
                                                                             "get_platform", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__AuthenticationToken__Platform, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MockPlayerAuthenticationTokenProvider* GlobalNamespace::MockPlayerAuthenticationTokenProvider::New_ctor(::StringW userId, ::StringW userName, ::StringW password) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MockPlayerAuthenticationTokenProvider*>(userId, userName, password));
}
inline void GlobalNamespace::MockPlayerAuthenticationTokenProvider::_ctor(::StringW userId, ::StringW userName, ::StringW password) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerAuthenticationTokenProvider*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, userName, password);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>* GlobalNamespace::MockPlayerAuthenticationTokenProvider::GetAuthenticationToken() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerAuthenticationTokenProvider*>::get(),
                                                                             "GetAuthenticationToken", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__AuthenticationToken__Platform GlobalNamespace::MockPlayerAuthenticationTokenProvider::GetTokenPlatform(::GlobalNamespace::PlatformEnvironment tokenPlatformEnvironment) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerAuthenticationTokenProvider*>::get(), "GetTokenPlatform", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlatformEnvironment>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__AuthenticationToken__Platform, false>(this, ___internal_method, tokenPlatformEnvironment);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData*>*
GlobalNamespace::MockPlayerAuthenticationTokenProvider::GetXPlatformAccessToken(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerAuthenticationTokenProvider*>::get(), "GetXPlatformAccessToken", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData*>*, false>(this, ___internal_method, cancellationToken);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MockPlayerAuthenticationTokenProvider::MockPlayerAuthenticationTokenProvider() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
