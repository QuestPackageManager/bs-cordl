#pragma once
// IWYU pragma private; include "Org/BouncyCastle/OpenSsl/PemReader.hpp"
#include "Org/BouncyCastle/Utilities/IO/Pem/zzzz__PemReader_impl.hpp"
#include "Org/BouncyCastle/OpenSsl/zzzz__PemReader_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__ContentInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/X9/zzzz__X9ECParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "Org/BouncyCastle/OpenSsl/zzzz__IPasswordFinder_def.hpp"
#include "Org/BouncyCastle/Pkcs/zzzz__Pkcs10CertificationRequest_def.hpp"
#include "Org/BouncyCastle/Utilities/IO/Pem/zzzz__PemObject_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__IX509AttributeCertificate_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Crl_def.hpp"
#include "System/IO/zzzz__TextReader_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::OpenSsl::PemReader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::OpenSsl::PemReader::*)(::System::IO::TextReader*)>(&::Org::BouncyCastle::OpenSsl::PemReader::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x35a5120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::OpenSsl::PemReader*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::TextReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::OpenSsl::PemReader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::OpenSsl::PemReader::*)(::System::IO::TextReader*, ::Org::BouncyCastle::OpenSsl::IPasswordFinder*)>(
    &::Org::BouncyCastle::OpenSsl::PemReader::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x35a5138;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::OpenSsl::PemReader*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::IO::TextReader*>(), ::i2c::type_of<::Org::BouncyCastle::OpenSsl::IPasswordFinder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::OpenSsl::PemReader.ReadObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Org::BouncyCastle::OpenSsl::PemReader::*)()>(&::Org::BouncyCastle::OpenSsl::PemReader::ReadObject)> {
  constexpr static std::size_t size = 0x570;
  constexpr static std::size_t addrs = 0x35a515c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::OpenSsl::PemReader*>(), { "ReadObject", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::OpenSsl::PemReader.ReadRsaPublicKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* (
    ::Org::BouncyCastle::OpenSsl::PemReader::*)(::Org::BouncyCastle::Utilities::IO::Pem::PemObject*)>(&::Org::BouncyCastle::OpenSsl::PemReader::ReadRsaPublicKey)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x35a6948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::OpenSsl::PemReader*>(),
                                                                                           { "ReadRsaPublicKey", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::IO::Pem::PemObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::OpenSsl::PemReader.ReadPublicKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* (
    ::Org::BouncyCastle::OpenSsl::PemReader::*)(::Org::BouncyCastle::Utilities::IO::Pem::PemObject*)>(&::Org::BouncyCastle::OpenSsl::PemReader::ReadPublicKey)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x35a6930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::OpenSsl::PemReader*>(),
                                                                                           { "ReadPublicKey", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::IO::Pem::PemObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::OpenSsl::PemReader.ReadCertificate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::X509::X509Certificate* (::Org::BouncyCastle::OpenSsl::PemReader::*)(::Org::BouncyCastle::Utilities::IO::Pem::PemObject*)>(
    &::Org::BouncyCastle::OpenSsl::PemReader::ReadCertificate)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x35a6b20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::OpenSsl::PemReader*>(),
                                                                                           { "ReadCertificate", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::IO::Pem::PemObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::OpenSsl::PemReader.ReadCrl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::X509::X509Crl* (::Org::BouncyCastle::OpenSsl::PemReader::*)(::Org::BouncyCastle::Utilities::IO::Pem::PemObject*)>(
    &::Org::BouncyCastle::OpenSsl::PemReader::ReadCrl)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x35a6d8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::OpenSsl::PemReader*>(), { "ReadCrl", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::IO::Pem::PemObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::OpenSsl::PemReader.ReadCertificateRequest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest* (
    ::Org::BouncyCastle::OpenSsl::PemReader::*)(::Org::BouncyCastle::Utilities::IO::Pem::PemObject*)>(&::Org::BouncyCastle::OpenSsl::PemReader::ReadCertificateRequest)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x35a69d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::OpenSsl::PemReader*>(), { "ReadCertificateRequest", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::IO::Pem::PemObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::OpenSsl::PemReader.ReadAttributeCertificate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::X509::IX509AttributeCertificate* (
    ::Org::BouncyCastle::OpenSsl::PemReader::*)(::Org::BouncyCastle::Utilities::IO::Pem::PemObject*)>(&::Org::BouncyCastle::OpenSsl::PemReader::ReadAttributeCertificate)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x35a6ed8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::OpenSsl::PemReader*>(),
                                                             { "ReadAttributeCertificate", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::IO::Pem::PemObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::OpenSsl::PemReader.ReadPkcs7
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cms::ContentInfo* (::Org::BouncyCastle::OpenSsl::PemReader::*)(::Org::BouncyCastle::Utilities::IO::Pem::PemObject*)>(
    &::Org::BouncyCastle::OpenSsl::PemReader::ReadPkcs7)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x35a6c74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::OpenSsl::PemReader*>(), { "ReadPkcs7", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::IO::Pem::PemObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::OpenSsl::PemReader.ReadPrivateKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Org::BouncyCastle::OpenSsl::PemReader::*)(::Org::BouncyCastle::Utilities::IO::Pem::PemObject*)>(
    &::Org::BouncyCastle::OpenSsl::PemReader::ReadPrivateKey)> {
  constexpr static std::size_t size = 0x1264;
  constexpr static std::size_t addrs = 0x35a56cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::OpenSsl::PemReader*>(),
                                                                                           { "ReadPrivateKey", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::IO::Pem::PemObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::OpenSsl::PemReader.GetCurveParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (*)(::StringW)>(&::Org::BouncyCastle::OpenSsl::PemReader::GetCurveParameters)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x35a6fe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::OpenSsl::PemReader*>(), { "GetCurveParameters", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::OpenSsl::IPasswordFinder*& Org::BouncyCastle::OpenSsl::PemReader::__cordl_internal_get_pFinder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pFinder;
}
constexpr ::Org::BouncyCastle::OpenSsl::IPasswordFinder* const& Org::BouncyCastle::OpenSsl::PemReader::__cordl_internal_get_pFinder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pFinder;
}
constexpr void Org::BouncyCastle::OpenSsl::PemReader::__cordl_internal_set_pFinder(::Org::BouncyCastle::OpenSsl::IPasswordFinder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pFinder = value;
}
inline void Org::BouncyCastle::OpenSsl::PemReader::_ctor(::System::IO::TextReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::OpenSsl::PemReader*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::TextReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
inline void Org::BouncyCastle::OpenSsl::PemReader::_ctor(::System::IO::TextReader* reader, ::Org::BouncyCastle::OpenSsl::IPasswordFinder* pFinder) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::OpenSsl::PemReader*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::IO::TextReader*>(), ::i2c::type_of<::Org::BouncyCastle::OpenSsl::IPasswordFinder*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, pFinder);
}
inline ::System::Object* Org::BouncyCastle::OpenSsl::PemReader::ReadObject() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::OpenSsl::PemReader*>(), { "ReadObject", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* Org::BouncyCastle::OpenSsl::PemReader::ReadRsaPublicKey(::Org::BouncyCastle::Utilities::IO::Pem::PemObject* pemObject) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::OpenSsl::PemReader*>(),
                                                                                         { "ReadRsaPublicKey", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::IO::Pem::PemObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(this, ___internal_method, pemObject);
}
inline ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* Org::BouncyCastle::OpenSsl::PemReader::ReadPublicKey(::Org::BouncyCastle::Utilities::IO::Pem::PemObject* pemObject) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::OpenSsl::PemReader*>(),
                                                                                         { "ReadPublicKey", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::IO::Pem::PemObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(this, ___internal_method, pemObject);
}
inline ::Org::BouncyCastle::X509::X509Certificate* Org::BouncyCastle::OpenSsl::PemReader::ReadCertificate(::Org::BouncyCastle::Utilities::IO::Pem::PemObject* pemObject) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::OpenSsl::PemReader*>(),
                                                                                         { "ReadCertificate", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::IO::Pem::PemObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::X509Certificate*>(this, ___internal_method, pemObject);
}
inline ::Org::BouncyCastle::X509::X509Crl* Org::BouncyCastle::OpenSsl::PemReader::ReadCrl(::Org::BouncyCastle::Utilities::IO::Pem::PemObject* pemObject) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::OpenSsl::PemReader*>(), { "ReadCrl", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::IO::Pem::PemObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::X509Crl*>(this, ___internal_method, pemObject);
}
inline ::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest* Org::BouncyCastle::OpenSsl::PemReader::ReadCertificateRequest(::Org::BouncyCastle::Utilities::IO::Pem::PemObject* pemObject) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::OpenSsl::PemReader*>(),
                                                                                         { "ReadCertificateRequest", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::IO::Pem::PemObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest*>(this, ___internal_method, pemObject);
}
inline ::Org::BouncyCastle::X509::IX509AttributeCertificate* Org::BouncyCastle::OpenSsl::PemReader::ReadAttributeCertificate(::Org::BouncyCastle::Utilities::IO::Pem::PemObject* pemObject) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::OpenSsl::PemReader*>(), { "ReadAttributeCertificate", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::IO::Pem::PemObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::IX509AttributeCertificate*>(this, ___internal_method, pemObject);
}
inline ::Org::BouncyCastle::Asn1::Cms::ContentInfo* Org::BouncyCastle::OpenSsl::PemReader::ReadPkcs7(::Org::BouncyCastle::Utilities::IO::Pem::PemObject* pemObject) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::OpenSsl::PemReader*>(), { "ReadPkcs7", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::IO::Pem::PemObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::ContentInfo*>(this, ___internal_method, pemObject);
}
inline ::System::Object* Org::BouncyCastle::OpenSsl::PemReader::ReadPrivateKey(::Org::BouncyCastle::Utilities::IO::Pem::PemObject* pemObject) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::OpenSsl::PemReader*>(),
                                                                                         { "ReadPrivateKey", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::IO::Pem::PemObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, pemObject);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::OpenSsl::PemReader::GetCurveParameters(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::OpenSsl::PemReader*>(), { "GetCurveParameters", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(nullptr, ___internal_method, name);
}
inline ::Org::BouncyCastle::OpenSsl::PemReader* Org::BouncyCastle::OpenSsl::PemReader::New_ctor(::System::IO::TextReader* reader) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::OpenSsl::PemReader*>(reader));
}
inline ::Org::BouncyCastle::OpenSsl::PemReader* Org::BouncyCastle::OpenSsl::PemReader::New_ctor(::System::IO::TextReader* reader, ::Org::BouncyCastle::OpenSsl::IPasswordFinder* pFinder) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::OpenSsl::PemReader*>(reader, pFinder));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::OpenSsl::PemReader::PemReader() {}
