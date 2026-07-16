#pragma once
// IWYU pragma private; include "System/Net/DigestSession.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__DigestSession_def.hpp"
#include "System/Net/zzzz__Authorization_def.hpp"
#include "System/Net/zzzz__DigestHeaderParser_def.hpp"
#include "System/Net/zzzz__HttpWebRequest_def.hpp"
#include "System/Net/zzzz__ICredentials_def.hpp"
#include "System/Net/zzzz__WebRequest_def.hpp"
#include "System/Security/Cryptography/zzzz__HashAlgorithm_def.hpp"
#include "System/Security/Cryptography/zzzz__RandomNumberGenerator_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::System::Net::DigestSession._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::DigestSession::*)()>(&::System::Net::DigestSession::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6424a74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::DigestSession*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::DigestSession.get_Algorithm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::DigestSession::*)()>(&::System::Net::DigestSession::get_Algorithm)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6424adc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::DigestSession*>(), { "get_Algorithm", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::DigestSession.get_Realm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::DigestSession::*)()>(&::System::Net::DigestSession::get_Realm)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6424af0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::DigestSession*>(), { "get_Realm", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::DigestSession.get_Nonce
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::DigestSession::*)()>(&::System::Net::DigestSession::get_Nonce)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6424b04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::DigestSession*>(), { "get_Nonce", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::DigestSession.get_Opaque
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::DigestSession::*)()>(&::System::Net::DigestSession::get_Opaque)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6424b18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::DigestSession*>(), { "get_Opaque", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::DigestSession.get_QOP
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::DigestSession::*)()>(&::System::Net::DigestSession::get_QOP)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6424b2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::DigestSession*>(), { "get_QOP", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::DigestSession.get_CNonce
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::DigestSession::*)()>(&::System::Net::DigestSession::get_CNonce)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6424b40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::DigestSession*>(), { "get_CNonce", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::DigestSession.Parse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::DigestSession::*)(::StringW)>(&::System::Net::DigestSession::Parse)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6424c40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::DigestSession*>(), { "Parse", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::DigestSession.HashToHexString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::DigestSession::*)(::StringW)>(&::System::Net::DigestSession::HashToHexString)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x6424d24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::DigestSession*>(), { "HashToHexString", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::DigestSession.HA1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::DigestSession::*)(::StringW, ::StringW)>(&::System::Net::DigestSession::HA1)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x6424e90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::DigestSession*>(), { "HA1", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::DigestSession.HA2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::DigestSession::*)(::System::Net::HttpWebRequest*)>(&::System::Net::DigestSession::HA2)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6425000;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::DigestSession*>(), { "HA2", {}, { ::i2c::type_of<::System::Net::HttpWebRequest*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::DigestSession.Response
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::DigestSession::*)(::StringW, ::StringW, ::System::Net::HttpWebRequest*)>(&::System::Net::DigestSession::Response)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x6425104;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::DigestSession*>(),
                                                             { "Response", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Net::HttpWebRequest*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::DigestSession.Authenticate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Authorization* (::System::Net::DigestSession::*)(::System::Net::WebRequest*, ::System::Net::ICredentials*)>(
    &::System::Net::DigestSession::Authenticate)> {
  constexpr static std::size_t size = 0x6a4;
  constexpr static std::size_t addrs = 0x64252b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::DigestSession*>(),
                                                             { "Authenticate", {}, { ::i2c::type_of<::System::Net::WebRequest*>(), ::i2c::type_of<::System::Net::ICredentials*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::DigestSession.get_LastUse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::Net::DigestSession::*)()>(&::System::Net::DigestSession::get_LastUse)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x642595c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::DigestSession*>(), { "get_LastUse", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::DateTime& System::Net::DigestSession::__cordl_internal_get_lastUse() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastUse;
}
constexpr ::System::DateTime const& System::Net::DigestSession::__cordl_internal_get_lastUse() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastUse;
}
constexpr void System::Net::DigestSession::__cordl_internal_set_lastUse(::System::DateTime value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastUse = value;
}
constexpr int32_t& System::Net::DigestSession::__cordl_internal_get__nc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nc;
}
constexpr int32_t const& System::Net::DigestSession::__cordl_internal_get__nc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nc;
}
constexpr void System::Net::DigestSession::__cordl_internal_set__nc(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____nc = value;
}
constexpr ::System::Security::Cryptography::HashAlgorithm*& System::Net::DigestSession::__cordl_internal_get_hash() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hash;
}
constexpr ::System::Security::Cryptography::HashAlgorithm* const& System::Net::DigestSession::__cordl_internal_get_hash() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hash;
}
constexpr void System::Net::DigestSession::__cordl_internal_set_hash(::System::Security::Cryptography::HashAlgorithm* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hash = value;
}
constexpr ::System::Net::DigestHeaderParser*& System::Net::DigestSession::__cordl_internal_get_parser() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parser;
}
constexpr ::System::Net::DigestHeaderParser* const& System::Net::DigestSession::__cordl_internal_get_parser() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parser;
}
constexpr void System::Net::DigestSession::__cordl_internal_set_parser(::System::Net::DigestHeaderParser* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___parser = value;
}
constexpr ::StringW& System::Net::DigestSession::__cordl_internal_get__cnonce() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cnonce;
}
constexpr ::StringW const& System::Net::DigestSession::__cordl_internal_get__cnonce() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cnonce;
}
constexpr void System::Net::DigestSession::__cordl_internal_set__cnonce(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cnonce = value;
}
inline void System::Net::DigestSession::setStaticF_rng(::System::Security::Cryptography::RandomNumberGenerator* value) {
  ::cordl_internals::setStaticField<::System::Security::Cryptography::RandomNumberGenerator*, "rng", ::System::Net::DigestSession*>(
      std::forward<::System::Security::Cryptography::RandomNumberGenerator*>(value));
}
inline ::System::Security::Cryptography::RandomNumberGenerator* System::Net::DigestSession::getStaticF_rng() {
  return ::cordl_internals::getStaticField<::System::Security::Cryptography::RandomNumberGenerator*, "rng", ::System::Net::DigestSession*>();
}
inline void System::Net::DigestSession::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::DigestSession*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW System::Net::DigestSession::get_Algorithm() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::DigestSession*>(), { "get_Algorithm", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Net::DigestSession::get_Realm() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::DigestSession*>(), { "get_Realm", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Net::DigestSession::get_Nonce() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::DigestSession*>(), { "get_Nonce", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Net::DigestSession::get_Opaque() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::DigestSession*>(), { "get_Opaque", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Net::DigestSession::get_QOP() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::DigestSession*>(), { "get_QOP", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Net::DigestSession::get_CNonce() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::DigestSession*>(), { "get_CNonce", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::Net::DigestSession::Parse(::StringW challenge) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::DigestSession*>(), { "Parse", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, challenge);
}
inline ::StringW System::Net::DigestSession::HashToHexString(::StringW toBeHashed) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::DigestSession*>(), { "HashToHexString", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, toBeHashed);
}
inline ::StringW System::Net::DigestSession::HA1(::StringW username, ::StringW password) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::DigestSession*>(), { "HA1", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, username, password);
}
inline ::StringW System::Net::DigestSession::HA2(::System::Net::HttpWebRequest* webRequest) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::DigestSession*>(), { "HA2", {}, { ::i2c::type_of<::System::Net::HttpWebRequest*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, webRequest);
}
inline ::StringW System::Net::DigestSession::Response(::StringW username, ::StringW password, ::System::Net::HttpWebRequest* webRequest) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::DigestSession*>(),
                                                           { "Response", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Net::HttpWebRequest*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, username, password, webRequest);
}
inline ::System::Net::Authorization* System::Net::DigestSession::Authenticate(::System::Net::WebRequest* webRequest, ::System::Net::ICredentials* credentials) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Net::DigestSession*>(), { "Authenticate", {}, { ::i2c::type_of<::System::Net::WebRequest*>(), ::i2c::type_of<::System::Net::ICredentials*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Authorization*>(this, ___internal_method, webRequest, credentials);
}
inline ::System::DateTime System::Net::DigestSession::get_LastUse() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::DigestSession*>(), { "get_LastUse", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline ::System::Net::DigestSession* System::Net::DigestSession::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::DigestSession*>());
}
// Ctor Parameters []
constexpr ::System::Net::DigestSession::DigestSession() {}
