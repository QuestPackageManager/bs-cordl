#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509V3CertificateGenerator_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__V3TbsCertificateGenerator_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__TbsCertificateStructure_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509ExtensionsGenerator_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerBitString_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ISignatureFactory_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Name_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V3CertificateGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::X509V3CertificateGenerator::*)()>(
    &::Org::BouncyCastle::X509::X509V3CertificateGenerator::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x11863b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V3CertificateGenerator.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::X509V3CertificateGenerator::*)()>(
    &::Org::BouncyCastle::X509::X509V3CertificateGenerator::Reset)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x1186450;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator*>::get(),
                                                                               "Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V3CertificateGenerator.SetSerialNumber
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::X509V3CertificateGenerator::*)(::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::X509::X509V3CertificateGenerator::SetSerialNumber)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x11864bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator*>::get(), "SetSerialNumber", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V3CertificateGenerator.SetIssuerDN
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::X509V3CertificateGenerator::*)(::Org::BouncyCastle::Asn1::X509::X509Name*)>(
    &::Org::BouncyCastle::X509::X509V3CertificateGenerator::SetIssuerDN)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x118659c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator*>::get(), "SetIssuerDN", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::X509Name*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V3CertificateGenerator.SetNotBefore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::X509V3CertificateGenerator::*)(::System::DateTime)>(
    &::Org::BouncyCastle::X509::X509V3CertificateGenerator::SetNotBefore)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x11865b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator*>::get(), "SetNotBefore",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V3CertificateGenerator.SetNotAfter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::X509V3CertificateGenerator::*)(::System::DateTime)>(
    &::Org::BouncyCastle::X509::X509V3CertificateGenerator::SetNotAfter)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x1186630;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator*>::get(), "SetNotAfter",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V3CertificateGenerator.SetSubjectDN
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::X509V3CertificateGenerator::*)(::Org::BouncyCastle::Asn1::X509::X509Name*)>(
    &::Org::BouncyCastle::X509::X509V3CertificateGenerator::SetSubjectDN)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x11866a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator*>::get(), "SetSubjectDN", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::X509Name*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V3CertificateGenerator.SetPublicKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::X509V3CertificateGenerator::*)(
    ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)>(&::Org::BouncyCastle::X509::X509V3CertificateGenerator::SetPublicKey)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x11866c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator*>::get(), "SetPublicKey", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V3CertificateGenerator.SetSignatureAlgorithm
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::X509V3CertificateGenerator::*)(::StringW)>(
    &::Org::BouncyCastle::X509::X509V3CertificateGenerator::SetSignatureAlgorithm)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x11866e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator*>::get(), "SetSignatureAlgorithm",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V3CertificateGenerator.SetSubjectUniqueID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::X509V3CertificateGenerator::*)(::ArrayW<bool, ::Array<bool>*>)>(
    &::Org::BouncyCastle::X509::X509V3CertificateGenerator::SetSubjectUniqueID)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1186854;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator*>::get(), "SetSubjectUniqueID",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<bool, ::Array<bool>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V3CertificateGenerator.SetIssuerUniqueID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::X509V3CertificateGenerator::*)(::ArrayW<bool, ::Array<bool>*>)>(
    &::Org::BouncyCastle::X509::X509V3CertificateGenerator::SetIssuerUniqueID)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x11869cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator*>::get(), "SetIssuerUniqueID",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<bool, ::Array<bool>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V3CertificateGenerator.booleanToBitString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::DerBitString* (
    ::Org::BouncyCastle::X509::X509V3CertificateGenerator::*)(::ArrayW<bool, ::Array<bool>*>)>(&::Org::BouncyCastle::X509::X509V3CertificateGenerator::booleanToBitString)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x1186874;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator*>::get(), "booleanToBitString",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<bool, ::Array<bool>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V3CertificateGenerator.AddExtension
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::X509V3CertificateGenerator::*)(
    ::StringW, bool, ::Org::BouncyCastle::Asn1::Asn1Encodable*)>(&::Org::BouncyCastle::X509::X509V3CertificateGenerator::AddExtension)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x11869ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator*>::get(), "AddExtension", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Encodable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V3CertificateGenerator.AddExtension
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::X509V3CertificateGenerator::*)(
    ::Org::BouncyCastle::Asn1::DerObjectIdentifier*, bool, ::Org::BouncyCastle::Asn1::Asn1Encodable*)>(&::Org::BouncyCastle::X509::X509V3CertificateGenerator::AddExtension)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1186a84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator*>::get(), "AddExtension", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Encodable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V3CertificateGenerator.AddExtension
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::X509V3CertificateGenerator::*)(
    ::StringW, bool, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::X509::X509V3CertificateGenerator::AddExtension)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x1186aa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator*>::get(), "AddExtension", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V3CertificateGenerator.AddExtension
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::X509V3CertificateGenerator::*)(
    ::Org::BouncyCastle::Asn1::DerObjectIdentifier*, bool, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::X509::X509V3CertificateGenerator::AddExtension)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x1186b6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator*>::get(), "AddExtension", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V3CertificateGenerator.CopyAndAddExtension
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::X509V3CertificateGenerator::*)(
    ::StringW, bool, ::Org::BouncyCastle::X509::X509Certificate*)>(&::Org::BouncyCastle::X509::X509V3CertificateGenerator::CopyAndAddExtension)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x1186c04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator*>::get(), "CopyAndAddExtension", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V3CertificateGenerator.CopyAndAddExtension
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::X509V3CertificateGenerator::*)(
    ::Org::BouncyCastle::Asn1::DerObjectIdentifier*, bool, ::Org::BouncyCastle::X509::X509Certificate*)>(&::Org::BouncyCastle::X509::X509V3CertificateGenerator::CopyAndAddExtension)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x1186c90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator*>::get(), "CopyAndAddExtension", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V3CertificateGenerator.Generate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::X509::X509Certificate* (
    ::Org::BouncyCastle::X509::X509V3CertificateGenerator::*)(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)>(&::Org::BouncyCastle::X509::X509V3CertificateGenerator::Generate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1186e3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator*>::get(), "Generate", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V3CertificateGenerator.Generate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::X509::X509Certificate* (
    ::Org::BouncyCastle::X509::X509V3CertificateGenerator::*)(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::Org::BouncyCastle::Security::SecureRandom*)>(
    &::Org::BouncyCastle::X509::X509V3CertificateGenerator::Generate)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x1186e44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator*>::get(), "Generate", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V3CertificateGenerator.Generate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::X509::X509Certificate* (
    ::Org::BouncyCastle::X509::X509V3CertificateGenerator::*)(::Org::BouncyCastle::Crypto::ISignatureFactory*)>(&::Org::BouncyCastle::X509::X509V3CertificateGenerator::Generate)> {
  constexpr static std::size_t size = 0x4a8;
  constexpr static std::size_t addrs = 0x1186ec8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator*>::get(), "Generate", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ISignatureFactory*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V3CertificateGenerator.GenerateJcaObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::X509::X509Certificate* (
    ::Org::BouncyCastle::X509::X509V3CertificateGenerator::*)(::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure*, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*,
                                                              ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::X509::X509V3CertificateGenerator::GenerateJcaObject)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x1187370;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator*>::get(), "GenerateJcaObject", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V3CertificateGenerator.get_SignatureAlgNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerable* (::Org::BouncyCastle::X509::X509V3CertificateGenerator::*)()>(
    &::Org::BouncyCastle::X509::X509V3CertificateGenerator::get_SignatureAlgNames)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x1187448;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator*>::get(),
                                                                               "get_SignatureAlgNames", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::X509::X509ExtensionsGenerator*& Org::BouncyCastle::X509::X509V3CertificateGenerator::__get_extGenerator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extGenerator;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::X509ExtensionsGenerator*> const& Org::BouncyCastle::X509::X509V3CertificateGenerator::__get_extGenerator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extGenerator;
}
constexpr void Org::BouncyCastle::X509::X509V3CertificateGenerator::__set_extGenerator(::Org::BouncyCastle::Asn1::X509::X509ExtensionsGenerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___extGenerator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::X509::V3TbsCertificateGenerator*& Org::BouncyCastle::X509::X509V3CertificateGenerator::__get_tbsGen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tbsGen;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::V3TbsCertificateGenerator*> const& Org::BouncyCastle::X509::X509V3CertificateGenerator::__get_tbsGen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tbsGen;
}
constexpr void Org::BouncyCastle::X509::X509V3CertificateGenerator::__set_tbsGen(::Org::BouncyCastle::Asn1::X509::V3TbsCertificateGenerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___tbsGen)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& Org::BouncyCastle::X509::X509V3CertificateGenerator::__get_sigOid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sigOid;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> const& Org::BouncyCastle::X509::X509V3CertificateGenerator::__get_sigOid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sigOid;
}
constexpr void Org::BouncyCastle::X509::X509V3CertificateGenerator::__set_sigOid(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sigOid)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& Org::BouncyCastle::X509::X509V3CertificateGenerator::__get_sigAlgId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sigAlgId;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& Org::BouncyCastle::X509::X509V3CertificateGenerator::__get_sigAlgId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sigAlgId;
}
constexpr void Org::BouncyCastle::X509::X509V3CertificateGenerator::__set_sigAlgId(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sigAlgId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Org::BouncyCastle::X509::X509V3CertificateGenerator::__get_signatureAlgorithm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signatureAlgorithm;
}
constexpr ::StringW const& Org::BouncyCastle::X509::X509V3CertificateGenerator::__get_signatureAlgorithm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signatureAlgorithm;
}
constexpr void Org::BouncyCastle::X509::X509V3CertificateGenerator::__set_signatureAlgorithm(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___signatureAlgorithm)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::X509::X509V3CertificateGenerator* Org::BouncyCastle::X509::X509V3CertificateGenerator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::X509::X509V3CertificateGenerator*>());
}
inline void Org::BouncyCastle::X509::X509V3CertificateGenerator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::X509V3CertificateGenerator::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator*>::get(),
                                                                             "Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::X509V3CertificateGenerator::SetSerialNumber(::Org::BouncyCastle::Math::BigInteger* serialNumber) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator*>::get(), "SetSerialNumber", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, serialNumber);
}
inline void Org::BouncyCastle::X509::X509V3CertificateGenerator::SetIssuerDN(::Org::BouncyCastle::Asn1::X509::X509Name* issuer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator*>::get(), "SetIssuerDN", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::X509Name*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, issuer);
}
inline void Org::BouncyCastle::X509::X509V3CertificateGenerator::SetNotBefore(::System::DateTime date) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator*>::get(), "SetNotBefore",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, date);
}
inline void Org::BouncyCastle::X509::X509V3CertificateGenerator::SetNotAfter(::System::DateTime date) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator*>::get(), "SetNotAfter",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, date);
}
inline void Org::BouncyCastle::X509::X509V3CertificateGenerator::SetSubjectDN(::Org::BouncyCastle::Asn1::X509::X509Name* subject) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator*>::get(), "SetSubjectDN", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::X509Name*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, subject);
}
inline void Org::BouncyCastle::X509::X509V3CertificateGenerator::SetPublicKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator*>::get(), "SetPublicKey", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, publicKey);
}
inline void Org::BouncyCastle::X509::X509V3CertificateGenerator::SetSignatureAlgorithm(::StringW signatureAlgorithm) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator*>::get(), "SetSignatureAlgorithm",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signatureAlgorithm);
}
inline void Org::BouncyCastle::X509::X509V3CertificateGenerator::SetSubjectUniqueID(::ArrayW<bool, ::Array<bool>*> uniqueID) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator*>::get(), "SetSubjectUniqueID",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<bool, ::Array<bool>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, uniqueID);
}
inline void Org::BouncyCastle::X509::X509V3CertificateGenerator::SetIssuerUniqueID(::ArrayW<bool, ::Array<bool>*> uniqueID) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator*>::get(), "SetIssuerUniqueID",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<bool, ::Array<bool>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, uniqueID);
}
inline ::Org::BouncyCastle::Asn1::DerBitString* Org::BouncyCastle::X509::X509V3CertificateGenerator::booleanToBitString(::ArrayW<bool, ::Array<bool>*> id) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator*>::get(), "booleanToBitString",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<bool, ::Array<bool>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerBitString*, false>(this, ___internal_method, id);
}
inline void Org::BouncyCastle::X509::X509V3CertificateGenerator::AddExtension(::StringW oid, bool critical, ::Org::BouncyCastle::Asn1::Asn1Encodable* extensionValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator*>::get(), "AddExtension", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Encodable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, oid, critical, extensionValue);
}
inline void Org::BouncyCastle::X509::X509V3CertificateGenerator::AddExtension(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, bool critical,
                                                                              ::Org::BouncyCastle::Asn1::Asn1Encodable* extensionValue) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator*>::get(), "AddExtension", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Encodable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, oid, critical, extensionValue);
}
inline void Org::BouncyCastle::X509::X509V3CertificateGenerator::AddExtension(::StringW oid, bool critical, ::ArrayW<uint8_t, ::Array<uint8_t>*> extensionValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator*>::get(), "AddExtension", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, oid, critical, extensionValue);
}
inline void Org::BouncyCastle::X509::X509V3CertificateGenerator::AddExtension(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, bool critical, ::ArrayW<uint8_t, ::Array<uint8_t>*> extensionValue) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator*>::get(), "AddExtension", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, oid, critical, extensionValue);
}
inline void Org::BouncyCastle::X509::X509V3CertificateGenerator::CopyAndAddExtension(::StringW oid, bool critical, ::Org::BouncyCastle::X509::X509Certificate* cert) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator*>::get(), "CopyAndAddExtension", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, oid, critical, cert);
}
inline void Org::BouncyCastle::X509::X509V3CertificateGenerator::CopyAndAddExtension(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, bool critical,
                                                                                     ::Org::BouncyCastle::X509::X509Certificate* cert) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator*>::get(), "CopyAndAddExtension", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, oid, critical, cert);
}
inline ::Org::BouncyCastle::X509::X509Certificate* Org::BouncyCastle::X509::X509V3CertificateGenerator::Generate(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator*>::get(), "Generate", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::X509Certificate*, false>(this, ___internal_method, privateKey);
}
inline ::Org::BouncyCastle::X509::X509Certificate* Org::BouncyCastle::X509::X509V3CertificateGenerator::Generate(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey,
                                                                                                                 ::Org::BouncyCastle::Security::SecureRandom* random) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator*>::get(), "Generate", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::X509Certificate*, false>(this, ___internal_method, privateKey, random);
}
inline ::Org::BouncyCastle::X509::X509Certificate* Org::BouncyCastle::X509::X509V3CertificateGenerator::Generate(::Org::BouncyCastle::Crypto::ISignatureFactory* signatureCalculatorFactory) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator*>::get(), "Generate", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ISignatureFactory*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::X509Certificate*, false>(this, ___internal_method, signatureCalculatorFactory);
}
inline ::Org::BouncyCastle::X509::X509Certificate* Org::BouncyCastle::X509::X509V3CertificateGenerator::GenerateJcaObject(::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure* tbsCert,
                                                                                                                          ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* sigAlg,
                                                                                                                          ::ArrayW<uint8_t, ::Array<uint8_t>*> signature) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator*>::get(), "GenerateJcaObject", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::X509Certificate*, false>(this, ___internal_method, tbsCert, sigAlg, signature);
}
inline ::System::Collections::IEnumerable* Org::BouncyCastle::X509::X509V3CertificateGenerator::get_SignatureAlgNames() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator*>::get(),
                                                                             "get_SignatureAlgNames", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerable*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::X509::X509V3CertificateGenerator::X509V3CertificateGenerator() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
