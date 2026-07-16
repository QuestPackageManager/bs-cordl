#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Security/AgreementUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Security/zzzz__AgreementUtilities_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBasicAgreement_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IRawAgreement_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Security::AgreementUtilities._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Security::AgreementUtilities::*)()>(&::Org::BouncyCastle::Security::AgreementUtilities::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x35ed374;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::AgreementUtilities*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::AgreementUtilities.GetBasicAgreement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::IBasicAgreement* (*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(
    &::Org::BouncyCastle::Security::AgreementUtilities::GetBasicAgreement)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x35ed7a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::AgreementUtilities*>(),
                                                                                           { "GetBasicAgreement", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::AgreementUtilities.GetBasicAgreement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::IBasicAgreement* (*)(::StringW)>(&::Org::BouncyCastle::Security::AgreementUtilities::GetBasicAgreement)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x35ed804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::AgreementUtilities*>(), { "GetBasicAgreement", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::AgreementUtilities.GetBasicAgreementWithKdf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::IBasicAgreement* (*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::StringW)>(
    &::Org::BouncyCastle::Security::AgreementUtilities::GetBasicAgreementWithKdf)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x35edb78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::AgreementUtilities*>(),
                                                             { "GetBasicAgreementWithKdf", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::AgreementUtilities.GetBasicAgreementWithKdf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::IBasicAgreement* (*)(::StringW, ::StringW)>(
    &::Org::BouncyCastle::Security::AgreementUtilities::GetBasicAgreementWithKdf)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x35edbec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::AgreementUtilities*>(),
                                                                                           { "GetBasicAgreementWithKdf", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::AgreementUtilities.GetRawAgreement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::IRawAgreement* (*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(
    &::Org::BouncyCastle::Security::AgreementUtilities::GetRawAgreement)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x35ede38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::AgreementUtilities*>(),
                                                                                           { "GetRawAgreement", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::AgreementUtilities.GetRawAgreement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::IRawAgreement* (*)(::StringW)>(&::Org::BouncyCastle::Security::AgreementUtilities::GetRawAgreement)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x35ede9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::AgreementUtilities*>(), { "GetRawAgreement", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::AgreementUtilities.GetAlgorithmName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(&::Org::BouncyCastle::Security::AgreementUtilities::GetAlgorithmName)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x35edff4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::AgreementUtilities*>(),
                                                                                           { "GetAlgorithmName", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::AgreementUtilities.GetMechanism
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::Org::BouncyCastle::Security::AgreementUtilities::GetMechanism)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x35eda3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::AgreementUtilities*>(), { "GetMechanism", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Security::AgreementUtilities::setStaticF_algorithms(::System::Collections::IDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::IDictionary*, "algorithms", ::Org::BouncyCastle::Security::AgreementUtilities*>(std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Security::AgreementUtilities::getStaticF_algorithms() {
  return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "algorithms", ::Org::BouncyCastle::Security::AgreementUtilities*>();
}
inline void Org::BouncyCastle::Security::AgreementUtilities::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::AgreementUtilities*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::IBasicAgreement* Org::BouncyCastle::Security::AgreementUtilities::GetBasicAgreement(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::AgreementUtilities*>(),
                                                                                         { "GetBasicAgreement", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IBasicAgreement*>(nullptr, ___internal_method, oid);
}
inline ::Org::BouncyCastle::Crypto::IBasicAgreement* Org::BouncyCastle::Security::AgreementUtilities::GetBasicAgreement(::StringW algorithm) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::AgreementUtilities*>(), { "GetBasicAgreement", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IBasicAgreement*>(nullptr, ___internal_method, algorithm);
}
inline ::Org::BouncyCastle::Crypto::IBasicAgreement* Org::BouncyCastle::Security::AgreementUtilities::GetBasicAgreementWithKdf(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid,
                                                                                                                               ::StringW wrapAlgorithm) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::AgreementUtilities*>(),
                                                           { "GetBasicAgreementWithKdf", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IBasicAgreement*>(nullptr, ___internal_method, oid, wrapAlgorithm);
}
inline ::Org::BouncyCastle::Crypto::IBasicAgreement* Org::BouncyCastle::Security::AgreementUtilities::GetBasicAgreementWithKdf(::StringW agreeAlgorithm, ::StringW wrapAlgorithm) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::AgreementUtilities*>(),
                                                                                         { "GetBasicAgreementWithKdf", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IBasicAgreement*>(nullptr, ___internal_method, agreeAlgorithm, wrapAlgorithm);
}
inline ::Org::BouncyCastle::Crypto::IRawAgreement* Org::BouncyCastle::Security::AgreementUtilities::GetRawAgreement(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::AgreementUtilities*>(),
                                                                                         { "GetRawAgreement", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IRawAgreement*>(nullptr, ___internal_method, oid);
}
inline ::Org::BouncyCastle::Crypto::IRawAgreement* Org::BouncyCastle::Security::AgreementUtilities::GetRawAgreement(::StringW algorithm) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::AgreementUtilities*>(), { "GetRawAgreement", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IRawAgreement*>(nullptr, ___internal_method, algorithm);
}
inline ::StringW Org::BouncyCastle::Security::AgreementUtilities::GetAlgorithmName(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::AgreementUtilities*>(),
                                                                                         { "GetAlgorithmName", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, oid);
}
inline ::StringW Org::BouncyCastle::Security::AgreementUtilities::GetMechanism(::StringW algorithm) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::AgreementUtilities*>(), { "GetMechanism", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, algorithm);
}
inline ::Org::BouncyCastle::Security::AgreementUtilities* Org::BouncyCastle::Security::AgreementUtilities::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Security::AgreementUtilities*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Security::AgreementUtilities::AgreementUtilities() {}
