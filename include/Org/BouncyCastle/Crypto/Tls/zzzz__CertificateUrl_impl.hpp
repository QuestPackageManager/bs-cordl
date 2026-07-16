#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/CertificateUrl.hpp"
#include "System/IO/zzzz__MemoryStream_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__CertificateUrl_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__CertificateUrl_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsContext_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::CertificateUrl_ListBuffer16._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::CertificateUrl_ListBuffer16::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::CertificateUrl_ListBuffer16::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x34394c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::CertificateUrl_ListBuffer16*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::CertificateUrl_ListBuffer16.EncodeTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::CertificateUrl_ListBuffer16::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Crypto::Tls::CertificateUrl_ListBuffer16::EncodeTo)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x343952c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::CertificateUrl_ListBuffer16*>(), { "EncodeTo", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::Tls::CertificateUrl_ListBuffer16::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::CertificateUrl_ListBuffer16*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::CertificateUrl_ListBuffer16::EncodeTo(::System::IO::Stream* output) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::CertificateUrl_ListBuffer16*>(), { "EncodeTo", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, output);
}
inline ::Org::BouncyCastle::Crypto::Tls::CertificateUrl_ListBuffer16* Org::BouncyCastle::Crypto::Tls::CertificateUrl_ListBuffer16::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::CertificateUrl_ListBuffer16*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::CertificateUrl_ListBuffer16::CertificateUrl_ListBuffer16() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::CertificateUrl._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::CertificateUrl::*)(uint8_t, ::System::Collections::IList*)>(
    &::Org::BouncyCastle::Crypto::Tls::CertificateUrl::_ctor)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x3438fb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::CertificateUrl*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<uint8_t>(), ::i2c::type_of<::System::Collections::IList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::CertificateUrl.get_Type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::Org::BouncyCastle::Crypto::Tls::CertificateUrl::*)()>(&::Org::BouncyCastle::Crypto::Tls::CertificateUrl::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3439110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::CertificateUrl*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::CertificateUrl*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::CertificateUrl.get_UrlAndHashList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IList* (::Org::BouncyCastle::Crypto::Tls::CertificateUrl::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::CertificateUrl::get_UrlAndHashList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3439118;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::CertificateUrl*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::CertificateUrl*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::CertificateUrl.Encode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::CertificateUrl::*)(::System::IO::Stream*)>(&::Org::BouncyCastle::Crypto::Tls::CertificateUrl::Encode)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x3439120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::CertificateUrl*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::CertificateUrl*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::CertificateUrl.parse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::CertificateUrl* (*)(::Org::BouncyCastle::Crypto::Tls::TlsContext*, ::System::IO::Stream*)>(
    &::Org::BouncyCastle::Crypto::Tls::CertificateUrl::parse)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x3439648;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::CertificateUrl*>(),
                                                             { "parse", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsContext*>(), ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
constexpr uint8_t& Org::BouncyCastle::Crypto::Tls::CertificateUrl::__cordl_internal_get_mType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mType;
}
constexpr uint8_t const& Org::BouncyCastle::Crypto::Tls::CertificateUrl::__cordl_internal_get_mType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mType;
}
constexpr void Org::BouncyCastle::Crypto::Tls::CertificateUrl::__cordl_internal_set_mType(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mType = value;
}
constexpr ::System::Collections::IList*& Org::BouncyCastle::Crypto::Tls::CertificateUrl::__cordl_internal_get_mUrlAndHashList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mUrlAndHashList;
}
constexpr ::System::Collections::IList* const& Org::BouncyCastle::Crypto::Tls::CertificateUrl::__cordl_internal_get_mUrlAndHashList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mUrlAndHashList;
}
constexpr void Org::BouncyCastle::Crypto::Tls::CertificateUrl::__cordl_internal_set_mUrlAndHashList(::System::Collections::IList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mUrlAndHashList = value;
}
inline void Org::BouncyCastle::Crypto::Tls::CertificateUrl::_ctor(uint8_t type, ::System::Collections::IList* urlAndHashList) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::CertificateUrl*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<uint8_t>(), ::i2c::type_of<::System::Collections::IList*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, urlAndHashList);
}
inline uint8_t Org::BouncyCastle::Crypto::Tls::CertificateUrl::get_Type() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::CertificateUrl*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method);
}
inline ::System::Collections::IList* Org::BouncyCastle::Crypto::Tls::CertificateUrl::get_UrlAndHashList() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::CertificateUrl*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IList*>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::CertificateUrl::Encode(::System::IO::Stream* output) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::CertificateUrl*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, output);
}
inline ::Org::BouncyCastle::Crypto::Tls::CertificateUrl* Org::BouncyCastle::Crypto::Tls::CertificateUrl::parse(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, ::System::IO::Stream* input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::CertificateUrl*>(),
                                                           { "parse", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsContext*>(), ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::CertificateUrl*>(nullptr, ___internal_method, context, input);
}
inline ::Org::BouncyCastle::Crypto::Tls::CertificateUrl* Org::BouncyCastle::Crypto::Tls::CertificateUrl::New_ctor(uint8_t type, ::System::Collections::IList* urlAndHashList) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::CertificateUrl*>(type, urlAndHashList));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::CertificateUrl::CertificateUrl() {}
