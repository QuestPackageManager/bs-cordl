#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__NetworkCredential_def.hpp"
#include "System/Net/zzzz__ICredentials_def.hpp"
#include "System/Security/zzzz__SecureString_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::System::Net::NetworkCredential._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::NetworkCredential::*)(::StringW, ::StringW)>(&::System::Net::NetworkCredential::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x29a349c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkCredential*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkCredential._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::NetworkCredential::*)(::StringW, ::StringW, ::StringW)>(
    &::System::Net::NetworkCredential::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x29a3504;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkCredential*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkCredential.get_UserName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::NetworkCredential::*)()>(&::System::Net::NetworkCredential::get_UserName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29a36a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkCredential*>::get(), "get_UserName",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkCredential.set_UserName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::NetworkCredential::*)(::StringW)>(&::System::Net::NetworkCredential::set_UserName)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x29a35c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkCredential*>::get(), "set_UserName", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkCredential.get_Password
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::NetworkCredential::*)()>(&::System::Net::NetworkCredential::get_Password)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x29a36b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkCredential*>::get(), "get_Password",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkCredential.set_Password
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::NetworkCredential::*)(::StringW)>(&::System::Net::NetworkCredential::set_Password)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x29a3628;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkCredential*>::get(), "set_Password", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkCredential.get_Domain
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::NetworkCredential::*)()>(&::System::Net::NetworkCredential::get_Domain)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29a36c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkCredential*>::get(), "get_Domain",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkCredential.set_Domain
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::NetworkCredential::*)(::StringW)>(&::System::Net::NetworkCredential::set_Domain)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x29a3648;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkCredential*>::get(), "set_Domain", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkCredential.InternalGetUserName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::NetworkCredential::*)()>(&::System::Net::NetworkCredential::InternalGetUserName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29a36d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkCredential*>::get(), "InternalGetUserName",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkCredential.InternalGetPassword
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::NetworkCredential::*)()>(&::System::Net::NetworkCredential::InternalGetPassword)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x29a36bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkCredential*>::get(), "InternalGetPassword",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkCredential.InternalGetDomain
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::NetworkCredential::*)()>(&::System::Net::NetworkCredential::InternalGetDomain)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29a36d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkCredential*>::get(), "InternalGetDomain",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkCredential.GetCredential
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::NetworkCredential* (::System::Net::NetworkCredential::*)(::System::Uri*, ::StringW)>(
    &::System::Net::NetworkCredential::GetCredential)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x29a36e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkCredential*>::get(), "GetCredential", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Net::ICredentials"
constexpr System::Net::NetworkCredential::operator ::System::Net::ICredentials*() noexcept {
  return static_cast<::System::Net::ICredentials*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Net::ICredentials"
constexpr ::System::Net::ICredentials* System::Net::NetworkCredential::i___System__Net__ICredentials() noexcept {
  return static_cast<::System::Net::ICredentials*>(static_cast<void*>(this));
}
constexpr ::StringW& System::Net::NetworkCredential::__cordl_internal_get_m_domain() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_domain;
}
constexpr ::StringW const& System::Net::NetworkCredential::__cordl_internal_get_m_domain() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_domain;
}
constexpr void System::Net::NetworkCredential::__cordl_internal_set_m_domain(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_domain)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Net::NetworkCredential::__cordl_internal_get_m_userName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_userName;
}
constexpr ::StringW const& System::Net::NetworkCredential::__cordl_internal_get_m_userName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_userName;
}
constexpr void System::Net::NetworkCredential::__cordl_internal_set_m_userName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_userName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Security::SecureString*& System::Net::NetworkCredential::__cordl_internal_get_m_password() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_password;
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::SecureString*> const& System::Net::NetworkCredential::__cordl_internal_get_m_password() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_password;
}
constexpr void System::Net::NetworkCredential::__cordl_internal_set_m_password(::System::Security::SecureString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_password)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Net::NetworkCredential* System::Net::NetworkCredential::New_ctor(::StringW userName, ::StringW password) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::NetworkCredential*>(userName, password));
}
inline void System::Net::NetworkCredential::_ctor(::StringW userName, ::StringW password) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkCredential*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userName, password);
}
inline ::System::Net::NetworkCredential* System::Net::NetworkCredential::New_ctor(::StringW userName, ::StringW password, ::StringW domain) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::NetworkCredential*>(userName, password, domain));
}
inline void System::Net::NetworkCredential::_ctor(::StringW userName, ::StringW password, ::StringW domain) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkCredential*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userName, password, domain);
}
inline ::StringW System::Net::NetworkCredential::get_UserName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkCredential*>::get(), "get_UserName",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void System::Net::NetworkCredential::set_UserName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkCredential*>::get(), "set_UserName", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW System::Net::NetworkCredential::get_Password() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkCredential*>::get(), "get_Password",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void System::Net::NetworkCredential::set_Password(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkCredential*>::get(), "set_Password", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW System::Net::NetworkCredential::get_Domain() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkCredential*>::get(), "get_Domain",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void System::Net::NetworkCredential::set_Domain(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkCredential*>::get(), "set_Domain", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW System::Net::NetworkCredential::InternalGetUserName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkCredential*>::get(), "InternalGetUserName",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Net::NetworkCredential::InternalGetPassword() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkCredential*>::get(), "InternalGetPassword",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Net::NetworkCredential::InternalGetDomain() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkCredential*>::get(), "InternalGetDomain",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Net::NetworkCredential* System::Net::NetworkCredential::GetCredential(::System::Uri* uri, ::StringW authType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkCredential*>::get(), "GetCredential", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::NetworkCredential*, false>(this, ___internal_method, uri, authType);
}
// Ctor Parameters []
constexpr ::System::Net::NetworkCredential::NetworkCredential() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
