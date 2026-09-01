#pragma once
// IWYU pragma private; include "Org\BouncyCastle\X509\X509V2CrlGenerator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509V2CrlGenerator_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__TbsCertificateList_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__V2TbsCertListGenerator_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509ExtensionsGenerator_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Extensions_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Name_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ISignatureFactory_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Crl_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V2CrlGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::X509V2CrlGenerator::*)()>(&::Org::BouncyCastle::X509::X509V2CrlGenerator::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x365525c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2CrlGenerator*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V2CrlGenerator.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::X509V2CrlGenerator::*)()>(&::Org::BouncyCastle::X509::X509V2CrlGenerator::Reset)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x36552e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2CrlGenerator*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V2CrlGenerator.SetIssuerDN
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::X509V2CrlGenerator::*)(::Org::BouncyCastle::Asn1::X509::X509Name*)>(
    &::Org::BouncyCastle::X509::X509V2CrlGenerator::SetIssuerDN)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3655354;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2CrlGenerator*>(), { "SetIssuerDN", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Name*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V2CrlGenerator.SetThisUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::X509V2CrlGenerator::*)(::System::DateTime)>(&::Org::BouncyCastle::X509::X509V2CrlGenerator::SetThisUpdate)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x365536c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2CrlGenerator*>(), { "SetThisUpdate", {}, { ::i2c::type_of<::System::DateTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V2CrlGenerator.SetNextUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::X509V2CrlGenerator::*)(::System::DateTime)>(&::Org::BouncyCastle::X509::X509V2CrlGenerator::SetNextUpdate)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x36553e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2CrlGenerator*>(), { "SetNextUpdate", {}, { ::i2c::type_of<::System::DateTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V2CrlGenerator.AddCrlEntry
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::X509V2CrlGenerator::*)(::Org::BouncyCastle::Math::BigInteger*, ::System::DateTime, int32_t)>(
    &::Org::BouncyCastle::X509::X509V2CrlGenerator::AddCrlEntry)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x365545c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2CrlGenerator*>(),
                                                { "AddCrlEntry", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V2CrlGenerator.AddCrlEntry
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::X509V2CrlGenerator::*)(::Org::BouncyCastle::Math::BigInteger*, ::System::DateTime, int32_t,
                                                                                                               ::System::DateTime)>(&::Org::BouncyCastle::X509::X509V2CrlGenerator::AddCrlEntry)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x3655524;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2CrlGenerator*>(),
                            { "AddCrlEntry",
                              {},
                              { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::DateTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V2CrlGenerator.AddCrlEntry
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::X509V2CrlGenerator::*)(
    ::Org::BouncyCastle::Math::BigInteger*, ::System::DateTime, ::Org::BouncyCastle::Asn1::X509::X509Extensions*)>(&::Org::BouncyCastle::X509::X509V2CrlGenerator::AddCrlEntry)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x3655624;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2CrlGenerator*>(),
                                                                                           { "AddCrlEntry",
                                                                                             {},
                                                                                             { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::System::DateTime>(),
                                                                                               ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V2CrlGenerator.AddCrl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::X509V2CrlGenerator::*)(::Org::BouncyCastle::X509::X509Crl*)>(
    &::Org::BouncyCastle::X509::X509V2CrlGenerator::AddCrl)> {
  constexpr static std::size_t size = 0x498;
  constexpr static std::size_t addrs = 0x36556ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2CrlGenerator*>(), { "AddCrl", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509Crl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V2CrlGenerator.SetSignatureAlgorithm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::X509V2CrlGenerator::*)(::StringW)>(&::Org::BouncyCastle::X509::X509V2CrlGenerator::SetSignatureAlgorithm)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x3655b84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2CrlGenerator*>(), { "SetSignatureAlgorithm", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V2CrlGenerator.AddExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::X509V2CrlGenerator::*)(::StringW, bool, ::Org::BouncyCastle::Asn1::Asn1Encodable*)>(
    &::Org::BouncyCastle::X509::X509V2CrlGenerator::AddExtension)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x3655cec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2CrlGenerator*>(),
                                                { "AddExtension", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Encodable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V2CrlGenerator.AddExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::X509V2CrlGenerator::*)(
    ::Org::BouncyCastle::Asn1::DerObjectIdentifier*, bool, ::Org::BouncyCastle::Asn1::Asn1Encodable*)>(&::Org::BouncyCastle::X509::X509V2CrlGenerator::AddExtension)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3655d84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::X509::X509V2CrlGenerator*>(),
            { "AddExtension", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Encodable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V2CrlGenerator.AddExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::X509V2CrlGenerator::*)(::StringW, bool, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::X509::X509V2CrlGenerator::AddExtension)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x3655da0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2CrlGenerator*>(),
                                                             { "AddExtension", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V2CrlGenerator.AddExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::X509V2CrlGenerator::*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*, bool, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::X509::X509V2CrlGenerator::AddExtension)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x3655e64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2CrlGenerator*>(),
                                         { "AddExtension", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V2CrlGenerator.Generate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::X509::X509Crl* (::Org::BouncyCastle::X509::X509V2CrlGenerator::*)(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)>(
    &::Org::BouncyCastle::X509::X509V2CrlGenerator::Generate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3655ef8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2CrlGenerator*>(),
                                                                                           { "Generate", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V2CrlGenerator.Generate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::X509::X509Crl* (::Org::BouncyCastle::X509::X509V2CrlGenerator::*)(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*,
                                                                                                                                              ::Org::BouncyCastle::Security::SecureRandom*)>(
    &::Org::BouncyCastle::X509::X509V2CrlGenerator::Generate)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3655f00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2CrlGenerator*>(),
                            { "Generate", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V2CrlGenerator.Generate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::X509::X509Crl* (::Org::BouncyCastle::X509::X509V2CrlGenerator::*)(::Org::BouncyCastle::Crypto::ISignatureFactory*)>(
    &::Org::BouncyCastle::X509::X509V2CrlGenerator::Generate)> {
  constexpr static std::size_t size = 0x47c;
  constexpr static std::size_t addrs = 0x3655f80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2CrlGenerator*>(),
                                                                                           { "Generate", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::ISignatureFactory*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V2CrlGenerator.GenerateCertList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::TbsCertificateList* (::Org::BouncyCastle::X509::X509V2CrlGenerator::*)()>(
    &::Org::BouncyCastle::X509::X509V2CrlGenerator::GenerateCertList)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x36563fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2CrlGenerator*>(), { "GenerateCertList", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V2CrlGenerator.GenerateJcaObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::X509::X509Crl* (
    ::Org::BouncyCastle::X509::X509V2CrlGenerator::*)(::Org::BouncyCastle::Asn1::X509::TbsCertificateList*, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::X509::X509V2CrlGenerator::GenerateJcaObject)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x3656454;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2CrlGenerator*>(),
                                                             { "GenerateJcaObject",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::TbsCertificateList*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V2CrlGenerator.get_SignatureAlgNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerable* (::Org::BouncyCastle::X509::X509V2CrlGenerator::*)()>(
    &::Org::BouncyCastle::X509::X509V2CrlGenerator::get_SignatureAlgNames)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x36565e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2CrlGenerator*>(), { "get_SignatureAlgNames", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::X509::X509ExtensionsGenerator*& Org::BouncyCastle::X509::X509V2CrlGenerator::__cordl_internal_get_extGenerator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extGenerator;
}
constexpr ::Org::BouncyCastle::Asn1::X509::X509ExtensionsGenerator* const& Org::BouncyCastle::X509::X509V2CrlGenerator::__cordl_internal_get_extGenerator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extGenerator;
}
constexpr void Org::BouncyCastle::X509::X509V2CrlGenerator::__cordl_internal_set_extGenerator(::Org::BouncyCastle::Asn1::X509::X509ExtensionsGenerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___extGenerator = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator*& Org::BouncyCastle::X509::X509V2CrlGenerator::__cordl_internal_get_tbsGen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tbsGen;
}
constexpr ::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator* const& Org::BouncyCastle::X509::X509V2CrlGenerator::__cordl_internal_get_tbsGen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tbsGen;
}
constexpr void Org::BouncyCastle::X509::X509V2CrlGenerator::__cordl_internal_set_tbsGen(::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tbsGen = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& Org::BouncyCastle::X509::X509V2CrlGenerator::__cordl_internal_get_sigOID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sigOID;
}
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* const& Org::BouncyCastle::X509::X509V2CrlGenerator::__cordl_internal_get_sigOID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sigOID;
}
constexpr void Org::BouncyCastle::X509::X509V2CrlGenerator::__cordl_internal_set_sigOID(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sigOID = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& Org::BouncyCastle::X509::X509V2CrlGenerator::__cordl_internal_get_sigAlgId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sigAlgId;
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* const& Org::BouncyCastle::X509::X509V2CrlGenerator::__cordl_internal_get_sigAlgId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sigAlgId;
}
constexpr void Org::BouncyCastle::X509::X509V2CrlGenerator::__cordl_internal_set_sigAlgId(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sigAlgId = value;
}
constexpr ::StringW& Org::BouncyCastle::X509::X509V2CrlGenerator::__cordl_internal_get_signatureAlgorithm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signatureAlgorithm;
}
constexpr ::StringW const& Org::BouncyCastle::X509::X509V2CrlGenerator::__cordl_internal_get_signatureAlgorithm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signatureAlgorithm;
}
constexpr void Org::BouncyCastle::X509::X509V2CrlGenerator::__cordl_internal_set_signatureAlgorithm(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___signatureAlgorithm = value;
}
inline void Org::BouncyCastle::X509::X509V2CrlGenerator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2CrlGenerator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::X509V2CrlGenerator::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2CrlGenerator*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::X509V2CrlGenerator::SetIssuerDN(::Org::BouncyCastle::Asn1::X509::X509Name* issuer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2CrlGenerator*>(), { "SetIssuerDN", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Name*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, issuer);
}
inline void Org::BouncyCastle::X509::X509V2CrlGenerator::SetThisUpdate(::System::DateTime date) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2CrlGenerator*>(), { "SetThisUpdate", {}, { ::i2c::type_of<::System::DateTime>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, date);
}
inline void Org::BouncyCastle::X509::X509V2CrlGenerator::SetNextUpdate(::System::DateTime date) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2CrlGenerator*>(), { "SetNextUpdate", {}, { ::i2c::type_of<::System::DateTime>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, date);
}
inline void Org::BouncyCastle::X509::X509V2CrlGenerator::AddCrlEntry(::Org::BouncyCastle::Math::BigInteger* userCertificate, ::System::DateTime revocationDate, int32_t reason) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2CrlGenerator*>(),
                                              { "AddCrlEntry", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userCertificate, revocationDate, reason);
}
inline void Org::BouncyCastle::X509::X509V2CrlGenerator::AddCrlEntry(::Org::BouncyCastle::Math::BigInteger* userCertificate, ::System::DateTime revocationDate, int32_t reason,
                                                                     ::System::DateTime invalidityDate) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Org::BouncyCastle::X509::X509V2CrlGenerator*>(),
          { "AddCrlEntry", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::DateTime>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userCertificate, revocationDate, reason, invalidityDate);
}
inline void Org::BouncyCastle::X509::X509V2CrlGenerator::AddCrlEntry(::Org::BouncyCastle::Math::BigInteger* userCertificate, ::System::DateTime revocationDate,
                                                                     ::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2CrlGenerator*>(),
                          { "AddCrlEntry",
                            {},
                            { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userCertificate, revocationDate, extensions);
}
inline void Org::BouncyCastle::X509::X509V2CrlGenerator::AddCrl(::Org::BouncyCastle::X509::X509Crl* other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2CrlGenerator*>(), { "AddCrl", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509Crl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void Org::BouncyCastle::X509::X509V2CrlGenerator::SetSignatureAlgorithm(::StringW signatureAlgorithm) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2CrlGenerator*>(), { "SetSignatureAlgorithm", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, signatureAlgorithm);
}
inline void Org::BouncyCastle::X509::X509V2CrlGenerator::AddExtension(::StringW oid, bool critical, ::Org::BouncyCastle::Asn1::Asn1Encodable* extensionValue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2CrlGenerator*>(),
                                              { "AddExtension", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Encodable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oid, critical, extensionValue);
}
inline void Org::BouncyCastle::X509::X509V2CrlGenerator::AddExtension(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, bool critical, ::Org::BouncyCastle::Asn1::Asn1Encodable* extensionValue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Org::BouncyCastle::X509::X509V2CrlGenerator*>(),
          { "AddExtension", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Encodable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oid, critical, extensionValue);
}
inline void Org::BouncyCastle::X509::X509V2CrlGenerator::AddExtension(::StringW oid, bool critical, ::ArrayW<uint8_t> extensionValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2CrlGenerator*>(),
                                                           { "AddExtension", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oid, critical, extensionValue);
}
inline void Org::BouncyCastle::X509::X509V2CrlGenerator::AddExtension(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, bool critical, ::ArrayW<uint8_t> extensionValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2CrlGenerator*>(),
                                       { "AddExtension", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oid, critical, extensionValue);
}
inline ::Org::BouncyCastle::X509::X509Crl* Org::BouncyCastle::X509::X509V2CrlGenerator::Generate(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2CrlGenerator*>(),
                                                                                         { "Generate", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::X509Crl*>(this, ___internal_method, privateKey);
}
inline ::Org::BouncyCastle::X509::X509Crl* Org::BouncyCastle::X509::X509V2CrlGenerator::Generate(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey,
                                                                                                 ::Org::BouncyCastle::Security::SecureRandom* random) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2CrlGenerator*>(),
                          { "Generate", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::X509Crl*>(this, ___internal_method, privateKey, random);
}
inline ::Org::BouncyCastle::X509::X509Crl* Org::BouncyCastle::X509::X509V2CrlGenerator::Generate(::Org::BouncyCastle::Crypto::ISignatureFactory* signatureCalculatorFactory) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2CrlGenerator*>(), { "Generate", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::ISignatureFactory*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::X509Crl*>(this, ___internal_method, signatureCalculatorFactory);
}
inline ::Org::BouncyCastle::Asn1::X509::TbsCertificateList* Org::BouncyCastle::X509::X509V2CrlGenerator::GenerateCertList() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2CrlGenerator*>(), { "GenerateCertList", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::TbsCertificateList*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::X509::X509Crl* Org::BouncyCastle::X509::X509V2CrlGenerator::GenerateJcaObject(::Org::BouncyCastle::Asn1::X509::TbsCertificateList* tbsCrl,
                                                                                                          ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algId, ::ArrayW<uint8_t> signature) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2CrlGenerator*>(),
                                                           { "GenerateJcaObject",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::TbsCertificateList*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::X509Crl*>(this, ___internal_method, tbsCrl, algId, signature);
}
inline ::System::Collections::IEnumerable* Org::BouncyCastle::X509::X509V2CrlGenerator::get_SignatureAlgNames() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2CrlGenerator*>(), { "get_SignatureAlgNames", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerable*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::X509::X509V2CrlGenerator* Org::BouncyCastle::X509::X509V2CrlGenerator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::X509::X509V2CrlGenerator*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::X509::X509V2CrlGenerator::X509V2CrlGenerator() {}
