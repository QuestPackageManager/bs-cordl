#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Pkcs\Pkcs10CertificationRequestDelaySigned.hpp"
#include "Org/BouncyCastle/Pkcs/zzzz__Pkcs10CertificationRequest_impl.hpp"
#include "Org/BouncyCastle/Pkcs/zzzz__Pkcs10CertificationRequestDelaySigned_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Name_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Set_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerBitString_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequestDelaySigned._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequestDelaySigned::*)()>(
    &::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequestDelaySigned::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x35b0640;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequestDelaySigned*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequestDelaySigned._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequestDelaySigned::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequestDelaySigned::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x35b0698;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequestDelaySigned*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequestDelaySigned._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequestDelaySigned::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequestDelaySigned::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x35b0700;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequestDelaySigned*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequestDelaySigned._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequestDelaySigned::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequestDelaySigned::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x35b076c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequestDelaySigned*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequestDelaySigned._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequestDelaySigned::*)(
    ::StringW, ::Org::BouncyCastle::Asn1::X509::X509Name*, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::Org::BouncyCastle::Asn1::Asn1Set*,
    ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)>(&::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequestDelaySigned::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x35b07d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequestDelaySigned*>(),
                            { ".ctor",
                              {},
                              { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Name*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(),
                                ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Set*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequestDelaySigned._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequestDelaySigned::*)(
    ::StringW, ::Org::BouncyCastle::Asn1::X509::X509Name*, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::Org::BouncyCastle::Asn1::Asn1Set*)>(
    &::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequestDelaySigned::_ctor)> {
  constexpr static std::size_t size = 0x624;
  constexpr static std::size_t addrs = 0x35b086c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequestDelaySigned*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Name*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Set*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequestDelaySigned.GetDataToSign
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequestDelaySigned::*)()>(
    &::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequestDelaySigned::GetDataToSign)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x35b0e90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequestDelaySigned*>(), { "GetDataToSign", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequestDelaySigned.SignRequest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequestDelaySigned::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequestDelaySigned::SignRequest)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x35b0ea8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequestDelaySigned*>(), { "SignRequest", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequestDelaySigned.SignRequest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequestDelaySigned::*)(::Org::BouncyCastle::Asn1::DerBitString*)>(
    &::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequestDelaySigned::SignRequest)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35b0f14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequestDelaySigned*>(),
                                                                                           { "SignRequest", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerBitString*>() } })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Pkcs::Pkcs10CertificationRequestDelaySigned::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequestDelaySigned*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Pkcs::Pkcs10CertificationRequestDelaySigned::_ctor(::ArrayW<uint8_t> encoded) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequestDelaySigned*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, encoded);
}
inline void Org::BouncyCastle::Pkcs::Pkcs10CertificationRequestDelaySigned::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequestDelaySigned*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline void Org::BouncyCastle::Pkcs::Pkcs10CertificationRequestDelaySigned::_ctor(::System::IO::Stream* input) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequestDelaySigned*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input);
}
inline void Org::BouncyCastle::Pkcs::Pkcs10CertificationRequestDelaySigned::_ctor(::StringW signatureAlgorithm, ::Org::BouncyCastle::Asn1::X509::X509Name* subject,
                                                                                  ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey, ::Org::BouncyCastle::Asn1::Asn1Set* attributes,
                                                                                  ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* signingKey) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequestDelaySigned*>(),
                          { ".ctor",
                            {},
                            { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Name*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(),
                              ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Set*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, signatureAlgorithm, subject, publicKey, attributes, signingKey);
}
inline void Org::BouncyCastle::Pkcs::Pkcs10CertificationRequestDelaySigned::_ctor(::StringW signatureAlgorithm, ::Org::BouncyCastle::Asn1::X509::X509Name* subject,
                                                                                  ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey, ::Org::BouncyCastle::Asn1::Asn1Set* attributes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequestDelaySigned*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Name*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Set*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, signatureAlgorithm, subject, publicKey, attributes);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Pkcs::Pkcs10CertificationRequestDelaySigned::GetDataToSign() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequestDelaySigned*>(), { "GetDataToSign", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void Org::BouncyCastle::Pkcs::Pkcs10CertificationRequestDelaySigned::SignRequest(::ArrayW<uint8_t> signedData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequestDelaySigned*>(), { "SignRequest", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, signedData);
}
inline void Org::BouncyCastle::Pkcs::Pkcs10CertificationRequestDelaySigned::SignRequest(::Org::BouncyCastle::Asn1::DerBitString* signedData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequestDelaySigned*>(),
                                                                                         { "SignRequest", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerBitString*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, signedData);
}
inline ::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequestDelaySigned* Org::BouncyCastle::Pkcs::Pkcs10CertificationRequestDelaySigned::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequestDelaySigned*>());
}
inline ::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequestDelaySigned* Org::BouncyCastle::Pkcs::Pkcs10CertificationRequestDelaySigned::New_ctor(::ArrayW<uint8_t> encoded) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequestDelaySigned*>(encoded));
}
inline ::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequestDelaySigned* Org::BouncyCastle::Pkcs::Pkcs10CertificationRequestDelaySigned::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequestDelaySigned*>(seq));
}
inline ::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequestDelaySigned* Org::BouncyCastle::Pkcs::Pkcs10CertificationRequestDelaySigned::New_ctor(::System::IO::Stream* input) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequestDelaySigned*>(input));
}
inline ::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequestDelaySigned*
Org::BouncyCastle::Pkcs::Pkcs10CertificationRequestDelaySigned::New_ctor(::StringW signatureAlgorithm, ::Org::BouncyCastle::Asn1::X509::X509Name* subject,
                                                                         ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey, ::Org::BouncyCastle::Asn1::Asn1Set* attributes,
                                                                         ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* signingKey) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequestDelaySigned*>(signatureAlgorithm, subject, publicKey, attributes, signingKey));
}
inline ::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequestDelaySigned*
Org::BouncyCastle::Pkcs::Pkcs10CertificationRequestDelaySigned::New_ctor(::StringW signatureAlgorithm, ::Org::BouncyCastle::Asn1::X509::X509Name* subject,
                                                                         ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey, ::Org::BouncyCastle::Asn1::Asn1Set* attributes) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequestDelaySigned*>(signatureAlgorithm, subject, publicKey, attributes));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequestDelaySigned::Pkcs10CertificationRequestDelaySigned() {}
