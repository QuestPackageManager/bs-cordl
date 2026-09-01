#pragma once
// IWYU pragma private; include "System\Net\NetworkCredential.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__NetworkCredential_def.hpp"
#include "System/Net/zzzz__ICredentials_def.hpp"
#include "System/Security/zzzz__SecureString_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::System::Net::NetworkCredential._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::NetworkCredential::*)(::StringW, ::StringW)>(&::System::Net::NetworkCredential::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6404c40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkCredential*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkCredential._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::NetworkCredential::*)(::StringW, ::StringW, ::StringW)>(&::System::Net::NetworkCredential::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x640aae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Net::NetworkCredential*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkCredential.get_UserName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::NetworkCredential::*)()>(&::System::Net::NetworkCredential::get_UserName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x640eab8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkCredential*>(), { "get_UserName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkCredential.set_UserName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::NetworkCredential::*)(::StringW)>(&::System::Net::NetworkCredential::set_UserName)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x640ea60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkCredential*>(), { "set_UserName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkCredential.get_Password
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::NetworkCredential::*)()>(&::System::Net::NetworkCredential::get_Password)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x640eac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkCredential*>(), { "get_Password", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkCredential.set_Password
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::NetworkCredential::*)(::StringW)>(&::System::Net::NetworkCredential::set_Password)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x640ea7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkCredential*>(), { "set_Password", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkCredential.get_Domain
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::NetworkCredential::*)()>(&::System::Net::NetworkCredential::get_Domain)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x640ead8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkCredential*>(), { "get_Domain", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkCredential.set_Domain
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::NetworkCredential::*)(::StringW)>(&::System::Net::NetworkCredential::set_Domain)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x640ea9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkCredential*>(), { "set_Domain", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkCredential.InternalGetUserName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::NetworkCredential::*)()>(&::System::Net::NetworkCredential::InternalGetUserName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x640eae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkCredential*>(), { "InternalGetUserName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkCredential.InternalGetPassword
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::NetworkCredential::*)()>(&::System::Net::NetworkCredential::InternalGetPassword)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x640eacc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkCredential*>(), { "InternalGetPassword", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkCredential.InternalGetDomain
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::NetworkCredential::*)()>(&::System::Net::NetworkCredential::InternalGetDomain)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x640eae8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkCredential*>(), { "InternalGetDomain", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkCredential.GetCredential
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::NetworkCredential* (::System::Net::NetworkCredential::*)(::System::Uri*, ::StringW)>(
    &::System::Net::NetworkCredential::GetCredential)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x640eaf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkCredential*>(), { "GetCredential", {}, { ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
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
  this->___m_domain = value;
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
  this->___m_userName = value;
}
constexpr ::System::Security::SecureString*& System::Net::NetworkCredential::__cordl_internal_get_m_password() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_password;
}
constexpr ::System::Security::SecureString* const& System::Net::NetworkCredential::__cordl_internal_get_m_password() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_password;
}
constexpr void System::Net::NetworkCredential::__cordl_internal_set_m_password(::System::Security::SecureString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_password = value;
}
inline void System::Net::NetworkCredential::_ctor(::StringW userName, ::StringW password) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkCredential*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userName, password);
}
inline void System::Net::NetworkCredential::_ctor(::StringW userName, ::StringW password, ::StringW domain) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkCredential*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userName, password, domain);
}
inline ::StringW System::Net::NetworkCredential::get_UserName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkCredential*>(), { "get_UserName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Net::NetworkCredential::set_UserName(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkCredential*>(), { "set_UserName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW System::Net::NetworkCredential::get_Password() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkCredential*>(), { "get_Password", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Net::NetworkCredential::set_Password(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkCredential*>(), { "set_Password", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW System::Net::NetworkCredential::get_Domain() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkCredential*>(), { "get_Domain", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Net::NetworkCredential::set_Domain(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkCredential*>(), { "set_Domain", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW System::Net::NetworkCredential::InternalGetUserName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkCredential*>(), { "InternalGetUserName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Net::NetworkCredential::InternalGetPassword() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkCredential*>(), { "InternalGetPassword", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Net::NetworkCredential::InternalGetDomain() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkCredential*>(), { "InternalGetDomain", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Net::NetworkCredential* System::Net::NetworkCredential::GetCredential(::System::Uri* uri, ::StringW authType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkCredential*>(), { "GetCredential", {}, { ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::NetworkCredential*>(this, ___internal_method, uri, authType);
}
inline ::System::Net::NetworkCredential* System::Net::NetworkCredential::New_ctor(::StringW userName, ::StringW password) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::NetworkCredential*>(userName, password));
}
inline ::System::Net::NetworkCredential* System::Net::NetworkCredential::New_ctor(::StringW userName, ::StringW password, ::StringW domain) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::NetworkCredential*>(userName, password, domain));
}
/// @brief Convert operator to "::System::Net::ICredentials"
constexpr System::Net::NetworkCredential::operator ::System::Net::ICredentials*() noexcept {
  return static_cast<::System::Net::ICredentials*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Net::ICredentials"
constexpr ::System::Net::ICredentials* System::Net::NetworkCredential::i___System__Net__ICredentials() noexcept {
  return static_cast<::System::Net::ICredentials*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Net::NetworkCredential::NetworkCredential() {}
