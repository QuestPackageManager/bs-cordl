#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Cms\DefaultSignatureAlgorithmIdentifierFinder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__DefaultSignatureAlgorithmIdentifierFinder_def.hpp"
#include "Org/BouncyCastle/Asn1/Pkcs/zzzz__RsassaPssParameters_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Utilities/Collections/zzzz__ISet_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder.Generate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (*)(::StringW)>(
    &::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::Generate)> {
  constexpr static std::size_t size = 0x6ac;
  constexpr static std::size_t addrs = 0x36c5f34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*>(), { "Generate", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder.CreatePssParams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters* (*)(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, int32_t)>(
    &::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::CreatePssParams)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x36c5e30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*>(),
                                                             { "CreatePssParams", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder.Find
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::*)(::StringW)>(
    &::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::Find)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x36c65e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*>(), { "Find", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::*)()>(
    &::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x36c6638;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::setStaticF_algorithms(::System::Collections::IDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::IDictionary*, "algorithms", ::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*>(
      std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::getStaticF_algorithms() {
  return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "algorithms", ::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*>();
}
inline void Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::setStaticF_noParams(::Org::BouncyCastle::Utilities::Collections::ISet* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Utilities::Collections::ISet*, "noParams", ::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*>(
      std::forward<::Org::BouncyCastle::Utilities::Collections::ISet*>(value));
}
inline ::Org::BouncyCastle::Utilities::Collections::ISet* Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::getStaticF_noParams() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Utilities::Collections::ISet*, "noParams", ::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*>();
}
inline void Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::setStaticF__params(::System::Collections::IDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::IDictionary*, "_params", ::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*>(
      std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::getStaticF__params() {
  return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "_params", ::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*>();
}
inline void Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::setStaticF_pkcs15RsaEncryption(::Org::BouncyCastle::Utilities::Collections::ISet* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Utilities::Collections::ISet*, "pkcs15RsaEncryption", ::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*>(
      std::forward<::Org::BouncyCastle::Utilities::Collections::ISet*>(value));
}
inline ::Org::BouncyCastle::Utilities::Collections::ISet* Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::getStaticF_pkcs15RsaEncryption() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Utilities::Collections::ISet*, "pkcs15RsaEncryption", ::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*>();
}
inline void Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::setStaticF_digestOids(::System::Collections::IDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::IDictionary*, "digestOids", ::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*>(
      std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::getStaticF_digestOids() {
  return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "digestOids", ::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*>();
}
inline void Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::setStaticF_digestBuilders(::System::Collections::IDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::IDictionary*, "digestBuilders", ::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*>(
      std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::getStaticF_digestBuilders() {
  return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "digestBuilders", ::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*>();
}
inline void Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::setStaticF_ENCRYPTION_RSA(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "ENCRYPTION_RSA", ::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::getStaticF_ENCRYPTION_RSA() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "ENCRYPTION_RSA", ::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*>();
}
inline void Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::setStaticF_ENCRYPTION_DSA(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "ENCRYPTION_DSA", ::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::getStaticF_ENCRYPTION_DSA() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "ENCRYPTION_DSA", ::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*>();
}
inline void Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::setStaticF_ENCRYPTION_ECDSA(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "ENCRYPTION_ECDSA", ::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::getStaticF_ENCRYPTION_ECDSA() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "ENCRYPTION_ECDSA", ::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*>();
}
inline void Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::setStaticF_ENCRYPTION_RSA_PSS(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "ENCRYPTION_RSA_PSS", ::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::getStaticF_ENCRYPTION_RSA_PSS() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "ENCRYPTION_RSA_PSS", ::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*>();
}
inline void Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::setStaticF_ENCRYPTION_GOST3410(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "ENCRYPTION_GOST3410", ::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::getStaticF_ENCRYPTION_GOST3410() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "ENCRYPTION_GOST3410", ::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*>();
}
inline void Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::setStaticF_ENCRYPTION_ECGOST3410(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "ENCRYPTION_ECGOST3410", ::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::getStaticF_ENCRYPTION_ECGOST3410() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "ENCRYPTION_ECGOST3410", ::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*>();
}
inline void Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::setStaticF_ENCRYPTION_ECGOST3410_2012_256(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "ENCRYPTION_ECGOST3410_2012_256", ::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::getStaticF_ENCRYPTION_ECGOST3410_2012_256() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "ENCRYPTION_ECGOST3410_2012_256", ::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*>();
}
inline void Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::setStaticF_ENCRYPTION_ECGOST3410_2012_512(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "ENCRYPTION_ECGOST3410_2012_512", ::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::getStaticF_ENCRYPTION_ECGOST3410_2012_512() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "ENCRYPTION_ECGOST3410_2012_512", ::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*>();
}
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::Generate(::StringW signatureAlgorithm) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*>(), { "Generate", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(nullptr, ___internal_method, signatureAlgorithm);
}
inline ::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters*
Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::CreatePssParams(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* hashAlgId, int32_t saltSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*>(),
                                                           { "CreatePssParams", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters*>(nullptr, ___internal_method, hashAlgId, saltSize);
}
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::Find(::StringW sigAlgName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*>(), { "Find", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(this, ___internal_method, sigAlgName);
}
inline void Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder* Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::DefaultSignatureAlgorithmIdentifierFinder() {}
