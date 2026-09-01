#pragma once
// IWYU pragma private; include "Org\BouncyCastle\X509\X509Utilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Utilities_def.hpp"
#include "Org/BouncyCastle/Asn1/Pkcs/zzzz__RsassaPssParameters_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "Org/BouncyCastle/Utilities/Collections/zzzz__ISet_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509Utilities.CreatePssParams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters* (*)(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, int32_t)>(
    &::Org::BouncyCastle::X509::X509Utilities::CreatePssParams)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x3651b44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509Utilities*>(),
                                                             { "CreatePssParams", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509Utilities.GetAlgorithmOid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerObjectIdentifier* (*)(::StringW)>(&::Org::BouncyCastle::X509::X509Utilities::GetAlgorithmOid)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x3651c48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509Utilities*>(), { "GetAlgorithmOid", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509Utilities.GetSigAlgID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::StringW)>(
    &::Org::BouncyCastle::X509::X509Utilities::GetSigAlgID)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x3651e64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509Utilities*>(),
                                                             { "GetSigAlgID", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509Utilities.GetAlgNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerable* (*)()>(&::Org::BouncyCastle::X509::X509Utilities::GetAlgNames)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x365217c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509Utilities*>(), { "GetAlgNames", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509Utilities.GetSignatureForObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::StringW, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*,
                                                                             ::Org::BouncyCastle::Security::SecureRandom*, ::Org::BouncyCastle::Asn1::Asn1Encodable*)>(
    &::Org::BouncyCastle::X509::X509Utilities::GetSignatureForObject)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x3652290;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509Utilities*>(),
                            { "GetSignatureForObject",
                              {},
                              { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(),
                                ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Encodable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509Utilities._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::X509Utilities::*)()>(&::Org::BouncyCastle::X509::X509Utilities::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3652558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509Utilities*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::X509::X509Utilities::setStaticF_algorithms(::System::Collections::IDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::IDictionary*, "algorithms", ::Org::BouncyCastle::X509::X509Utilities*>(std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::X509::X509Utilities::getStaticF_algorithms() {
  return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "algorithms", ::Org::BouncyCastle::X509::X509Utilities*>();
}
inline void Org::BouncyCastle::X509::X509Utilities::setStaticF_exParams(::System::Collections::IDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::IDictionary*, "exParams", ::Org::BouncyCastle::X509::X509Utilities*>(std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::X509::X509Utilities::getStaticF_exParams() {
  return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "exParams", ::Org::BouncyCastle::X509::X509Utilities*>();
}
inline void Org::BouncyCastle::X509::X509Utilities::setStaticF_noParams(::Org::BouncyCastle::Utilities::Collections::ISet* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Utilities::Collections::ISet*, "noParams", ::Org::BouncyCastle::X509::X509Utilities*>(
      std::forward<::Org::BouncyCastle::Utilities::Collections::ISet*>(value));
}
inline ::Org::BouncyCastle::Utilities::Collections::ISet* Org::BouncyCastle::X509::X509Utilities::getStaticF_noParams() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Utilities::Collections::ISet*, "noParams", ::Org::BouncyCastle::X509::X509Utilities*>();
}
inline ::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters* Org::BouncyCastle::X509::X509Utilities::CreatePssParams(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* hashAlgId,
                                                                                                                     int32_t saltSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509Utilities*>(),
                                                           { "CreatePssParams", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters*>(nullptr, ___internal_method, hashAlgId, saltSize);
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::X509::X509Utilities::GetAlgorithmOid(::StringW algorithmName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509Utilities*>(), { "GetAlgorithmOid", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(nullptr, ___internal_method, algorithmName);
}
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::X509::X509Utilities::GetSigAlgID(::Org::BouncyCastle::Asn1::DerObjectIdentifier* sigOid, ::StringW algorithmName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509Utilities*>(),
                                                           { "GetSigAlgID", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(nullptr, ___internal_method, sigOid, algorithmName);
}
inline ::System::Collections::IEnumerable* Org::BouncyCastle::X509::X509Utilities::GetAlgNames() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509Utilities*>(), { "GetAlgNames", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerable*>(nullptr, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::X509::X509Utilities::GetSignatureForObject(::Org::BouncyCastle::Asn1::DerObjectIdentifier* sigOid, ::StringW sigName,
                                                                                       ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey,
                                                                                       ::Org::BouncyCastle::Security::SecureRandom* random, ::Org::BouncyCastle::Asn1::Asn1Encodable* ae) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509Utilities*>(),
                          { "GetSignatureForObject",
                            {},
                            { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(),
                              ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Encodable*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, sigOid, sigName, privateKey, random, ae);
}
inline void Org::BouncyCastle::X509::X509Utilities::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509Utilities*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::X509::X509Utilities* Org::BouncyCastle::X509::X509Utilities::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::X509::X509Utilities*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::X509::X509Utilities::X509Utilities() {}
