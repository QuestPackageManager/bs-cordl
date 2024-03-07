#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsSignedHelper_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Set_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ISigner_def.hpp"
#include "Org/BouncyCastle/Utilities/Collections/zzzz__ISet_def.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__IX509Store_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedHelper.AddEntries
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::StringW, ::StringW)>(
    &::Org::BouncyCastle::Cms::CmsSignedHelper::AddEntries)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x1293a60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedHelper*>::get(), "AddEntries", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedHelper.GetDigestAlgName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Org::BouncyCastle::Cms::CmsSignedHelper::*)(::StringW)>(
    &::Org::BouncyCastle::Cms::CmsSignedHelper::GetDigestAlgName)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x1283674;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedHelper*>::get(), "GetDigestAlgName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedHelper.GetEncAlgorithmIdentifier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (
    ::Org::BouncyCastle::Cms::CmsSignedHelper::*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Org::BouncyCastle::Asn1::Asn1Encodable*)>(
    &::Org::BouncyCastle::Cms::CmsSignedHelper::GetEncAlgorithmIdentifier)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x1283cf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedHelper*>::get(), "GetEncAlgorithmIdentifier", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Encodable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedHelper.GetDigestAliases
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (::Org::BouncyCastle::Cms::CmsSignedHelper::*)(::StringW)>(
    &::Org::BouncyCastle::Cms::CmsSignedHelper::GetDigestAliases)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x129597c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedHelper*>::get(), "GetDigestAliases",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedHelper.GetEncryptionAlgName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Org::BouncyCastle::Cms::CmsSignedHelper::*)(::StringW)>(
    &::Org::BouncyCastle::Cms::CmsSignedHelper::GetEncryptionAlgName)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x128377c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedHelper*>::get(), "GetEncryptionAlgName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedHelper.GetDigestInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::IDigest* (::Org::BouncyCastle::Cms::CmsSignedHelper::*)(::StringW)>(
    &::Org::BouncyCastle::Cms::CmsSignedHelper::GetDigestInstance)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x1283b00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedHelper*>::get(), "GetDigestInstance",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedHelper.GetSignatureInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::ISigner* (::Org::BouncyCastle::Cms::CmsSignedHelper::*)(::StringW)>(
    &::Org::BouncyCastle::Cms::CmsSignedHelper::GetSignatureInstance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1288e80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedHelper*>::get(), "GetSignatureInstance",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedHelper.CreateAttributeStore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::X509::Store::IX509Store* (
    ::Org::BouncyCastle::Cms::CmsSignedHelper::*)(::StringW, ::Org::BouncyCastle::Asn1::Asn1Set*)>(&::Org::BouncyCastle::Cms::CmsSignedHelper::CreateAttributeStore)> {
  constexpr static std::size_t size = 0x654;
  constexpr static std::size_t addrs = 0x127c810;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedHelper*>::get(), "CreateAttributeStore", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Set*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedHelper.CreateCertificateStore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::X509::Store::IX509Store* (
    ::Org::BouncyCastle::Cms::CmsSignedHelper::*)(::StringW, ::Org::BouncyCastle::Asn1::Asn1Set*)>(&::Org::BouncyCastle::Cms::CmsSignedHelper::CreateCertificateStore)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x127ceec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedHelper*>::get(), "CreateCertificateStore", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Set*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedHelper.CreateCrlStore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::X509::Store::IX509Store* (
    ::Org::BouncyCastle::Cms::CmsSignedHelper::*)(::StringW, ::Org::BouncyCastle::Asn1::Asn1Set*)>(&::Org::BouncyCastle::Cms::CmsSignedHelper::CreateCrlStore)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x127d124;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedHelper*>::get(), "CreateCrlStore", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Set*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedHelper.AddCertsFromSet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Org::BouncyCastle::Cms::CmsSignedHelper::*)(::System::Collections::IList*, ::Org::BouncyCastle::Asn1::Asn1Set*)>(&::Org::BouncyCastle::Cms::CmsSignedHelper::AddCertsFromSet)> {
  constexpr static std::size_t size = 0x4c8;
  constexpr static std::size_t addrs = 0x1295ac8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedHelper*>::get(), "AddCertsFromSet", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Set*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedHelper.AddCrlsFromSet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Org::BouncyCastle::Cms::CmsSignedHelper::*)(::System::Collections::IList*, ::Org::BouncyCastle::Asn1::Asn1Set*)>(&::Org::BouncyCastle::Cms::CmsSignedHelper::AddCrlsFromSet)> {
  constexpr static std::size_t size = 0x478;
  constexpr static std::size_t addrs = 0x1295f90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedHelper*>::get(), "AddCrlsFromSet", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Set*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedHelper.FixAlgID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (
    ::Org::BouncyCastle::Cms::CmsSignedHelper::*)(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*)>(&::Org::BouncyCastle::Cms::CmsSignedHelper::FixAlgID)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x127da34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedHelper*>::get(), "FixAlgID", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedHelper.GetEncOid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (::Org::BouncyCastle::Cms::CmsSignedHelper::*)(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::StringW)>(&::Org::BouncyCastle::Cms::CmsSignedHelper::GetEncOid)> {
  constexpr static std::size_t size = 0x4e0;
  constexpr static std::size_t addrs = 0x12801e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedHelper*>::get(), "GetEncOid", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedHelper._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedHelper::*)()>(&::Org::BouncyCastle::Cms::CmsSignedHelper::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1295974;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedHelper*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Cms::CmsSignedHelper::setStaticF_Instance(::Org::BouncyCastle::Cms::CmsSignedHelper* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Cms::CmsSignedHelper*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedHelper*>::get>(
      std::forward<::Org::BouncyCastle::Cms::CmsSignedHelper*>(value));
}
inline ::Org::BouncyCastle::Cms::CmsSignedHelper* Org::BouncyCastle::Cms::CmsSignedHelper::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Cms::CmsSignedHelper*, "Instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedHelper*>::get>();
}
inline void Org::BouncyCastle::Cms::CmsSignedHelper::setStaticF_EncryptionECDsaWithSha1(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "EncryptionECDsaWithSha1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedHelper*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Cms::CmsSignedHelper::getStaticF_EncryptionECDsaWithSha1() {
  return ::cordl_internals::getStaticField<::StringW, "EncryptionECDsaWithSha1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedHelper*>::get>();
}
inline void Org::BouncyCastle::Cms::CmsSignedHelper::setStaticF_EncryptionECDsaWithSha224(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "EncryptionECDsaWithSha224", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedHelper*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Cms::CmsSignedHelper::getStaticF_EncryptionECDsaWithSha224() {
  return ::cordl_internals::getStaticField<::StringW, "EncryptionECDsaWithSha224", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedHelper*>::get>();
}
inline void Org::BouncyCastle::Cms::CmsSignedHelper::setStaticF_EncryptionECDsaWithSha256(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "EncryptionECDsaWithSha256", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedHelper*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Cms::CmsSignedHelper::getStaticF_EncryptionECDsaWithSha256() {
  return ::cordl_internals::getStaticField<::StringW, "EncryptionECDsaWithSha256", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedHelper*>::get>();
}
inline void Org::BouncyCastle::Cms::CmsSignedHelper::setStaticF_EncryptionECDsaWithSha384(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "EncryptionECDsaWithSha384", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedHelper*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Cms::CmsSignedHelper::getStaticF_EncryptionECDsaWithSha384() {
  return ::cordl_internals::getStaticField<::StringW, "EncryptionECDsaWithSha384", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedHelper*>::get>();
}
inline void Org::BouncyCastle::Cms::CmsSignedHelper::setStaticF_EncryptionECDsaWithSha512(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "EncryptionECDsaWithSha512", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedHelper*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Cms::CmsSignedHelper::getStaticF_EncryptionECDsaWithSha512() {
  return ::cordl_internals::getStaticField<::StringW, "EncryptionECDsaWithSha512", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedHelper*>::get>();
}
inline void Org::BouncyCastle::Cms::CmsSignedHelper::setStaticF_encryptionAlgs(::System::Collections::IDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::IDictionary*, "encryptionAlgs", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedHelper*>::get>(
      std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Cms::CmsSignedHelper::getStaticF_encryptionAlgs() {
  return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "encryptionAlgs",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedHelper*>::get>();
}
inline void Org::BouncyCastle::Cms::CmsSignedHelper::setStaticF_digestAlgs(::System::Collections::IDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::IDictionary*, "digestAlgs", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedHelper*>::get>(
      std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Cms::CmsSignedHelper::getStaticF_digestAlgs() {
  return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "digestAlgs",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedHelper*>::get>();
}
inline void Org::BouncyCastle::Cms::CmsSignedHelper::setStaticF_digestAliases(::System::Collections::IDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::IDictionary*, "digestAliases", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedHelper*>::get>(
      std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Cms::CmsSignedHelper::getStaticF_digestAliases() {
  return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "digestAliases",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedHelper*>::get>();
}
inline void Org::BouncyCastle::Cms::CmsSignedHelper::setStaticF_noParams(::Org::BouncyCastle::Utilities::Collections::ISet* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Utilities::Collections::ISet*, "noParams",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedHelper*>::get>(
      std::forward<::Org::BouncyCastle::Utilities::Collections::ISet*>(value));
}
inline ::Org::BouncyCastle::Utilities::Collections::ISet* Org::BouncyCastle::Cms::CmsSignedHelper::getStaticF_noParams() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Utilities::Collections::ISet*, "noParams",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedHelper*>::get>();
}
inline void Org::BouncyCastle::Cms::CmsSignedHelper::setStaticF_ecAlgorithms(::System::Collections::IDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::IDictionary*, "ecAlgorithms", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedHelper*>::get>(
      std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Cms::CmsSignedHelper::getStaticF_ecAlgorithms() {
  return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "ecAlgorithms",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedHelper*>::get>();
}
inline void Org::BouncyCastle::Cms::CmsSignedHelper::AddEntries(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, ::StringW digest, ::StringW encryption) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedHelper*>::get(), "AddEntries", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, oid, digest, encryption);
}
inline ::StringW Org::BouncyCastle::Cms::CmsSignedHelper::GetDigestAlgName(::StringW digestAlgOid) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedHelper*>::get(), "GetDigestAlgName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, digestAlgOid);
}
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Cms::CmsSignedHelper::GetEncAlgorithmIdentifier(::Org::BouncyCastle::Asn1::DerObjectIdentifier* encOid,
                                                                                                                                ::Org::BouncyCastle::Asn1::Asn1Encodable* sigX509Parameters) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedHelper*>::get(), "GetEncAlgorithmIdentifier", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Encodable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, false>(this, ___internal_method, encOid, sigX509Parameters);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> Org::BouncyCastle::Cms::CmsSignedHelper::GetDigestAliases(::StringW algName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedHelper*>::get(), "GetDigestAliases",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(this, ___internal_method, algName);
}
inline ::StringW Org::BouncyCastle::Cms::CmsSignedHelper::GetEncryptionAlgName(::StringW encryptionAlgOid) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedHelper*>::get(), "GetEncryptionAlgName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, encryptionAlgOid);
}
inline ::Org::BouncyCastle::Crypto::IDigest* Org::BouncyCastle::Cms::CmsSignedHelper::GetDigestInstance(::StringW algorithm) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedHelper*>::get(), "GetDigestInstance",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IDigest*, false>(this, ___internal_method, algorithm);
}
inline ::Org::BouncyCastle::Crypto::ISigner* Org::BouncyCastle::Cms::CmsSignedHelper::GetSignatureInstance(::StringW algorithm) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedHelper*>::get(), "GetSignatureInstance",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::ISigner*, false>(this, ___internal_method, algorithm);
}
inline ::Org::BouncyCastle::X509::Store::IX509Store* Org::BouncyCastle::Cms::CmsSignedHelper::CreateAttributeStore(::StringW type, ::Org::BouncyCastle::Asn1::Asn1Set* certSet) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedHelper*>::get(), "CreateAttributeStore", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Set*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::Store::IX509Store*, false>(this, ___internal_method, type, certSet);
}
inline ::Org::BouncyCastle::X509::Store::IX509Store* Org::BouncyCastle::Cms::CmsSignedHelper::CreateCertificateStore(::StringW type, ::Org::BouncyCastle::Asn1::Asn1Set* certSet) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedHelper*>::get(), "CreateCertificateStore", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Set*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::Store::IX509Store*, false>(this, ___internal_method, type, certSet);
}
inline ::Org::BouncyCastle::X509::Store::IX509Store* Org::BouncyCastle::Cms::CmsSignedHelper::CreateCrlStore(::StringW type, ::Org::BouncyCastle::Asn1::Asn1Set* crlSet) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedHelper*>::get(), "CreateCrlStore", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Set*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::Store::IX509Store*, false>(this, ___internal_method, type, crlSet);
}
inline void Org::BouncyCastle::Cms::CmsSignedHelper::AddCertsFromSet(::System::Collections::IList* certs, ::Org::BouncyCastle::Asn1::Asn1Set* certSet) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedHelper*>::get(), "AddCertsFromSet", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Set*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, certs, certSet);
}
inline void Org::BouncyCastle::Cms::CmsSignedHelper::AddCrlsFromSet(::System::Collections::IList* crls, ::Org::BouncyCastle::Asn1::Asn1Set* crlSet) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedHelper*>::get(), "AddCrlsFromSet", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Set*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, crls, crlSet);
}
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Cms::CmsSignedHelper::FixAlgID(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedHelper*>::get(), "FixAlgID", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, false>(this, ___internal_method, algId);
}
inline ::StringW Org::BouncyCastle::Cms::CmsSignedHelper::GetEncOid(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* key, ::StringW digestOID) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedHelper*>::get(), "GetEncOid", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, key, digestOID);
}
inline ::Org::BouncyCastle::Cms::CmsSignedHelper* Org::BouncyCastle::Cms::CmsSignedHelper::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Cms::CmsSignedHelper*>());
}
inline void Org::BouncyCastle::Cms::CmsSignedHelper::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedHelper*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::CmsSignedHelper::CmsSignedHelper() {}
