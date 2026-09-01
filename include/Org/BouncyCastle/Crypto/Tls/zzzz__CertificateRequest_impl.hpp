#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Tls\CertificateRequest.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__CertificateRequest_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsContext_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::CertificateRequest._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::CertificateRequest::*)(::ArrayW<uint8_t>, ::System::Collections::IList*, ::System::Collections::IList*)>(
    &::Org::BouncyCastle::Crypto::Tls::CertificateRequest::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3439dc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::CertificateRequest*>(),
                                         { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Collections::IList*>(), ::i2c::type_of<::System::Collections::IList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::CertificateRequest.get_CertificateTypes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Tls::CertificateRequest::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::CertificateRequest::get_CertificateTypes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3439dd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::CertificateRequest*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::CertificateRequest*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::CertificateRequest.get_SupportedSignatureAlgorithms
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IList* (::Org::BouncyCastle::Crypto::Tls::CertificateRequest::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::CertificateRequest::get_SupportedSignatureAlgorithms)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3439dd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::CertificateRequest*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::CertificateRequest*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::CertificateRequest.get_CertificateAuthorities
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IList* (::Org::BouncyCastle::Crypto::Tls::CertificateRequest::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::CertificateRequest::get_CertificateAuthorities)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3439de0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::CertificateRequest*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::CertificateRequest*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::CertificateRequest.Encode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::CertificateRequest::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Crypto::Tls::CertificateRequest::Encode)> {
  constexpr static std::size_t size = 0x8c0;
  constexpr static std::size_t addrs = 0x3439de8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::CertificateRequest*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::CertificateRequest*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::CertificateRequest.Parse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::CertificateRequest* (*)(::Org::BouncyCastle::Crypto::Tls::TlsContext*, ::System::IO::Stream*)>(
    &::Org::BouncyCastle::Crypto::Tls::CertificateRequest::Parse)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x343a6a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::CertificateRequest*>(),
                                                             { "Parse", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsContext*>(), ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Tls::CertificateRequest::__cordl_internal_get_mCertificateTypes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mCertificateTypes;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Tls::CertificateRequest::__cordl_internal_get_mCertificateTypes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mCertificateTypes;
}
constexpr void Org::BouncyCastle::Crypto::Tls::CertificateRequest::__cordl_internal_set_mCertificateTypes(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mCertificateTypes = value;
}
constexpr ::System::Collections::IList*& Org::BouncyCastle::Crypto::Tls::CertificateRequest::__cordl_internal_get_mSupportedSignatureAlgorithms() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSupportedSignatureAlgorithms;
}
constexpr ::System::Collections::IList* const& Org::BouncyCastle::Crypto::Tls::CertificateRequest::__cordl_internal_get_mSupportedSignatureAlgorithms() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSupportedSignatureAlgorithms;
}
constexpr void Org::BouncyCastle::Crypto::Tls::CertificateRequest::__cordl_internal_set_mSupportedSignatureAlgorithms(::System::Collections::IList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mSupportedSignatureAlgorithms = value;
}
constexpr ::System::Collections::IList*& Org::BouncyCastle::Crypto::Tls::CertificateRequest::__cordl_internal_get_mCertificateAuthorities() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mCertificateAuthorities;
}
constexpr ::System::Collections::IList* const& Org::BouncyCastle::Crypto::Tls::CertificateRequest::__cordl_internal_get_mCertificateAuthorities() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mCertificateAuthorities;
}
constexpr void Org::BouncyCastle::Crypto::Tls::CertificateRequest::__cordl_internal_set_mCertificateAuthorities(::System::Collections::IList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mCertificateAuthorities = value;
}
inline void Org::BouncyCastle::Crypto::Tls::CertificateRequest::_ctor(::ArrayW<uint8_t> certificateTypes, ::System::Collections::IList* supportedSignatureAlgorithms,
                                                                      ::System::Collections::IList* certificateAuthorities) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::CertificateRequest*>(),
                                       { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Collections::IList*>(), ::i2c::type_of<::System::Collections::IList*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, certificateTypes, supportedSignatureAlgorithms, certificateAuthorities);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::CertificateRequest::get_CertificateTypes() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::CertificateRequest*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::System::Collections::IList* Org::BouncyCastle::Crypto::Tls::CertificateRequest::get_SupportedSignatureAlgorithms() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::CertificateRequest*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IList*>(this, ___internal_method);
}
inline ::System::Collections::IList* Org::BouncyCastle::Crypto::Tls::CertificateRequest::get_CertificateAuthorities() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::CertificateRequest*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IList*>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::CertificateRequest::Encode(::System::IO::Stream* output) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::CertificateRequest*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, output);
}
inline ::Org::BouncyCastle::Crypto::Tls::CertificateRequest* Org::BouncyCastle::Crypto::Tls::CertificateRequest::Parse(::Org::BouncyCastle::Crypto::Tls::TlsContext* context,
                                                                                                                       ::System::IO::Stream* input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::CertificateRequest*>(),
                                                           { "Parse", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsContext*>(), ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::CertificateRequest*>(nullptr, ___internal_method, context, input);
}
inline ::Org::BouncyCastle::Crypto::Tls::CertificateRequest* Org::BouncyCastle::Crypto::Tls::CertificateRequest::New_ctor(::ArrayW<uint8_t> certificateTypes,
                                                                                                                          ::System::Collections::IList* supportedSignatureAlgorithms,
                                                                                                                          ::System::Collections::IList* certificateAuthorities) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::CertificateRequest*>(certificateTypes, supportedSignatureAlgorithms, certificateAuthorities));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::CertificateRequest::CertificateRequest() {}
