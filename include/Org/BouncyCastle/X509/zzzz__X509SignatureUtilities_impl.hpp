#pragma once
// IWYU pragma private; include "Org/BouncyCastle/X509/X509SignatureUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509SignatureUtilities_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Null_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ISigner_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509SignatureUtilities.SetSignatureParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Org::BouncyCastle::Crypto::ISigner*, ::Org::BouncyCastle::Asn1::Asn1Encodable*)>(
    &::Org::BouncyCastle::X509::X509SignatureUtilities::SetSignatureParameters)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x364cd8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509SignatureUtilities*>(),
                                         { "SetSignatureParameters", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::ISigner*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Encodable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509SignatureUtilities.GetSignatureName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*)>(&::Org::BouncyCastle::X509::X509SignatureUtilities::GetSignatureName)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x364537c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509SignatureUtilities*>(),
                                                                                           { "GetSignatureName", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509SignatureUtilities.GetDigestAlgName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(&::Org::BouncyCastle::X509::X509SignatureUtilities::GetDigestAlgName)> {
  constexpr static std::size_t size = 0x3d4;
  constexpr static std::size_t addrs = 0x364ce0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509SignatureUtilities*>(),
                                                                                           { "GetDigestAlgName", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509SignatureUtilities._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::X509SignatureUtilities::*)()>(&::Org::BouncyCastle::X509::X509SignatureUtilities::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x364d260;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509SignatureUtilities*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::X509::X509SignatureUtilities::setStaticF_derNull(::Org::BouncyCastle::Asn1::Asn1Null* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::Asn1Null*, "derNull", ::Org::BouncyCastle::X509::X509SignatureUtilities*>(std::forward<::Org::BouncyCastle::Asn1::Asn1Null*>(value));
}
inline ::Org::BouncyCastle::Asn1::Asn1Null* Org::BouncyCastle::X509::X509SignatureUtilities::getStaticF_derNull() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::Asn1Null*, "derNull", ::Org::BouncyCastle::X509::X509SignatureUtilities*>();
}
inline void Org::BouncyCastle::X509::X509SignatureUtilities::SetSignatureParameters(::Org::BouncyCastle::Crypto::ISigner* signature, ::Org::BouncyCastle::Asn1::Asn1Encodable* parameters) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509SignatureUtilities*>(),
                                       { "SetSignatureParameters", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::ISigner*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Encodable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, signature, parameters);
}
inline ::StringW Org::BouncyCastle::X509::X509SignatureUtilities::GetSignatureName(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* sigAlgId) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509SignatureUtilities*>(),
                                                                                         { "GetSignatureName", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, sigAlgId);
}
inline ::StringW Org::BouncyCastle::X509::X509SignatureUtilities::GetDigestAlgName(::Org::BouncyCastle::Asn1::DerObjectIdentifier* digestAlgOID) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509SignatureUtilities*>(),
                                                                                         { "GetDigestAlgName", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, digestAlgOID);
}
inline void Org::BouncyCastle::X509::X509SignatureUtilities::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509SignatureUtilities*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::X509::X509SignatureUtilities* Org::BouncyCastle::X509::X509SignatureUtilities::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::X509::X509SignatureUtilities*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::X509::X509SignatureUtilities::X509SignatureUtilities() {}
