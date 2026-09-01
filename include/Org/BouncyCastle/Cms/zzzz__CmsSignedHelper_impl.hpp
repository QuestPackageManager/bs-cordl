#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Cms\CmsSignedHelper.hpp"
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::StringW, ::StringW)>(&::Org::BouncyCastle::Cms::CmsSignedHelper::AddEntries)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x36c865c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedHelper*>(),
                                         { "AddEntries", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedHelper.GetDigestAlgName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Cms::CmsSignedHelper::*)(::StringW)>(&::Org::BouncyCastle::Cms::CmsSignedHelper::GetDigestAlgName)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x36b836c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedHelper*>(), { "GetDigestAlgName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedHelper.GetEncAlgorithmIdentifier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (
    ::Org::BouncyCastle::Cms::CmsSignedHelper::*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Org::BouncyCastle::Asn1::Asn1Encodable*)>(
    &::Org::BouncyCastle::Cms::CmsSignedHelper::GetEncAlgorithmIdentifier)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x36b89e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedHelper*>(),
                            { "GetEncAlgorithmIdentifier", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Encodable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedHelper.GetDigestAliases
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::Org::BouncyCastle::Cms::CmsSignedHelper::*)(::StringW)>(&::Org::BouncyCastle::Cms::CmsSignedHelper::GetDigestAliases)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x36ca4f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedHelper*>(), { "GetDigestAliases", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedHelper.GetEncryptionAlgName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Cms::CmsSignedHelper::*)(::StringW)>(&::Org::BouncyCastle::Cms::CmsSignedHelper::GetEncryptionAlgName)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x36b846c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedHelper*>(), { "GetEncryptionAlgName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedHelper.GetDigestInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::IDigest* (::Org::BouncyCastle::Cms::CmsSignedHelper::*)(::StringW)>(
    &::Org::BouncyCastle::Cms::CmsSignedHelper::GetDigestInstance)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x36b87dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedHelper*>(), { "GetDigestInstance", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedHelper.GetSignatureInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::ISigner* (::Org::BouncyCastle::Cms::CmsSignedHelper::*)(::StringW)>(
    &::Org::BouncyCastle::Cms::CmsSignedHelper::GetSignatureInstance)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x36bda58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedHelper*>(), { "GetSignatureInstance", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedHelper.CreateAttributeStore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::X509::Store::IX509Store* (::Org::BouncyCastle::Cms::CmsSignedHelper::*)(::StringW, ::Org::BouncyCastle::Asn1::Asn1Set*)>(
    &::Org::BouncyCastle::Cms::CmsSignedHelper::CreateAttributeStore)> {
  constexpr static std::size_t size = 0x644;
  constexpr static std::size_t addrs = 0x36b1584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedHelper*>(),
                                                             { "CreateAttributeStore", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Set*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedHelper.CreateCertificateStore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::X509::Store::IX509Store* (::Org::BouncyCastle::Cms::CmsSignedHelper::*)(::StringW, ::Org::BouncyCastle::Asn1::Asn1Set*)>(
    &::Org::BouncyCastle::Cms::CmsSignedHelper::CreateCertificateStore)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x36b1c5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedHelper*>(),
                                                             { "CreateCertificateStore", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Set*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedHelper.CreateCrlStore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::X509::Store::IX509Store* (::Org::BouncyCastle::Cms::CmsSignedHelper::*)(::StringW, ::Org::BouncyCastle::Asn1::Asn1Set*)>(
    &::Org::BouncyCastle::Cms::CmsSignedHelper::CreateCrlStore)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x36b1ea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedHelper*>(),
                                                             { "CreateCrlStore", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Set*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedHelper.AddCertsFromSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedHelper::*)(::System::Collections::IList*, ::Org::BouncyCastle::Asn1::Asn1Set*)>(
    &::Org::BouncyCastle::Cms::CmsSignedHelper::AddCertsFromSet)> {
  constexpr static std::size_t size = 0x4cc;
  constexpr static std::size_t addrs = 0x36ca648;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedHelper*>(),
                                                             { "AddCertsFromSet", {}, { ::i2c::type_of<::System::Collections::IList*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Set*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedHelper.AddCrlsFromSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedHelper::*)(::System::Collections::IList*, ::Org::BouncyCastle::Asn1::Asn1Set*)>(
    &::Org::BouncyCastle::Cms::CmsSignedHelper::AddCrlsFromSet)> {
  constexpr static std::size_t size = 0x470;
  constexpr static std::size_t addrs = 0x36cab14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedHelper*>(),
                                                             { "AddCrlsFromSet", {}, { ::i2c::type_of<::System::Collections::IList*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Set*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedHelper.FixAlgID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (
    ::Org::BouncyCastle::Cms::CmsSignedHelper::*)(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*)>(&::Org::BouncyCastle::Cms::CmsSignedHelper::FixAlgID)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x36b27b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedHelper*>(),
                                                                                           { "FixAlgID", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedHelper.GetEncOid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Cms::CmsSignedHelper::*)(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::StringW)>(
    &::Org::BouncyCastle::Cms::CmsSignedHelper::GetEncOid)> {
  constexpr static std::size_t size = 0x50c;
  constexpr static std::size_t addrs = 0x36b4ec0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedHelper*>(),
                                                             { "GetEncOid", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedHelper._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedHelper::*)()>(&::Org::BouncyCastle::Cms::CmsSignedHelper::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x36ca4f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedHelper*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Cms::CmsSignedHelper::setStaticF_Instance(::Org::BouncyCastle::Cms::CmsSignedHelper* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Cms::CmsSignedHelper*, "Instance", ::Org::BouncyCastle::Cms::CmsSignedHelper*>(
      std::forward<::Org::BouncyCastle::Cms::CmsSignedHelper*>(value));
}
inline ::Org::BouncyCastle::Cms::CmsSignedHelper* Org::BouncyCastle::Cms::CmsSignedHelper::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Cms::CmsSignedHelper*, "Instance", ::Org::BouncyCastle::Cms::CmsSignedHelper*>();
}
inline void Org::BouncyCastle::Cms::CmsSignedHelper::setStaticF_EncryptionECDsaWithSha1(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "EncryptionECDsaWithSha1", ::Org::BouncyCastle::Cms::CmsSignedHelper*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Cms::CmsSignedHelper::getStaticF_EncryptionECDsaWithSha1() {
  return ::cordl_internals::getStaticField<::StringW, "EncryptionECDsaWithSha1", ::Org::BouncyCastle::Cms::CmsSignedHelper*>();
}
inline void Org::BouncyCastle::Cms::CmsSignedHelper::setStaticF_EncryptionECDsaWithSha224(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "EncryptionECDsaWithSha224", ::Org::BouncyCastle::Cms::CmsSignedHelper*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Cms::CmsSignedHelper::getStaticF_EncryptionECDsaWithSha224() {
  return ::cordl_internals::getStaticField<::StringW, "EncryptionECDsaWithSha224", ::Org::BouncyCastle::Cms::CmsSignedHelper*>();
}
inline void Org::BouncyCastle::Cms::CmsSignedHelper::setStaticF_EncryptionECDsaWithSha256(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "EncryptionECDsaWithSha256", ::Org::BouncyCastle::Cms::CmsSignedHelper*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Cms::CmsSignedHelper::getStaticF_EncryptionECDsaWithSha256() {
  return ::cordl_internals::getStaticField<::StringW, "EncryptionECDsaWithSha256", ::Org::BouncyCastle::Cms::CmsSignedHelper*>();
}
inline void Org::BouncyCastle::Cms::CmsSignedHelper::setStaticF_EncryptionECDsaWithSha384(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "EncryptionECDsaWithSha384", ::Org::BouncyCastle::Cms::CmsSignedHelper*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Cms::CmsSignedHelper::getStaticF_EncryptionECDsaWithSha384() {
  return ::cordl_internals::getStaticField<::StringW, "EncryptionECDsaWithSha384", ::Org::BouncyCastle::Cms::CmsSignedHelper*>();
}
inline void Org::BouncyCastle::Cms::CmsSignedHelper::setStaticF_EncryptionECDsaWithSha512(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "EncryptionECDsaWithSha512", ::Org::BouncyCastle::Cms::CmsSignedHelper*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Cms::CmsSignedHelper::getStaticF_EncryptionECDsaWithSha512() {
  return ::cordl_internals::getStaticField<::StringW, "EncryptionECDsaWithSha512", ::Org::BouncyCastle::Cms::CmsSignedHelper*>();
}
inline void Org::BouncyCastle::Cms::CmsSignedHelper::setStaticF_encryptionAlgs(::System::Collections::IDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::IDictionary*, "encryptionAlgs", ::Org::BouncyCastle::Cms::CmsSignedHelper*>(std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Cms::CmsSignedHelper::getStaticF_encryptionAlgs() {
  return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "encryptionAlgs", ::Org::BouncyCastle::Cms::CmsSignedHelper*>();
}
inline void Org::BouncyCastle::Cms::CmsSignedHelper::setStaticF_digestAlgs(::System::Collections::IDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::IDictionary*, "digestAlgs", ::Org::BouncyCastle::Cms::CmsSignedHelper*>(std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Cms::CmsSignedHelper::getStaticF_digestAlgs() {
  return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "digestAlgs", ::Org::BouncyCastle::Cms::CmsSignedHelper*>();
}
inline void Org::BouncyCastle::Cms::CmsSignedHelper::setStaticF_digestAliases(::System::Collections::IDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::IDictionary*, "digestAliases", ::Org::BouncyCastle::Cms::CmsSignedHelper*>(std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Cms::CmsSignedHelper::getStaticF_digestAliases() {
  return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "digestAliases", ::Org::BouncyCastle::Cms::CmsSignedHelper*>();
}
inline void Org::BouncyCastle::Cms::CmsSignedHelper::setStaticF_noParams(::Org::BouncyCastle::Utilities::Collections::ISet* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Utilities::Collections::ISet*, "noParams", ::Org::BouncyCastle::Cms::CmsSignedHelper*>(
      std::forward<::Org::BouncyCastle::Utilities::Collections::ISet*>(value));
}
inline ::Org::BouncyCastle::Utilities::Collections::ISet* Org::BouncyCastle::Cms::CmsSignedHelper::getStaticF_noParams() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Utilities::Collections::ISet*, "noParams", ::Org::BouncyCastle::Cms::CmsSignedHelper*>();
}
inline void Org::BouncyCastle::Cms::CmsSignedHelper::setStaticF_ecAlgorithms(::System::Collections::IDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::IDictionary*, "ecAlgorithms", ::Org::BouncyCastle::Cms::CmsSignedHelper*>(std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Cms::CmsSignedHelper::getStaticF_ecAlgorithms() {
  return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "ecAlgorithms", ::Org::BouncyCastle::Cms::CmsSignedHelper*>();
}
inline void Org::BouncyCastle::Cms::CmsSignedHelper::AddEntries(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, ::StringW digest, ::StringW encryption) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedHelper*>(),
                                              { "AddEntries", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, oid, digest, encryption);
}
inline ::StringW Org::BouncyCastle::Cms::CmsSignedHelper::GetDigestAlgName(::StringW digestAlgOid) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedHelper*>(), { "GetDigestAlgName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, digestAlgOid);
}
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Cms::CmsSignedHelper::GetEncAlgorithmIdentifier(::Org::BouncyCastle::Asn1::DerObjectIdentifier* encOid,
                                                                                                                                ::Org::BouncyCastle::Asn1::Asn1Encodable* sigX509Parameters) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedHelper*>(),
                          { "GetEncAlgorithmIdentifier", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Encodable*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(this, ___internal_method, encOid, sigX509Parameters);
}
inline ::ArrayW<::StringW> Org::BouncyCastle::Cms::CmsSignedHelper::GetDigestAliases(::StringW algName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedHelper*>(), { "GetDigestAliases", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method, algName);
}
inline ::StringW Org::BouncyCastle::Cms::CmsSignedHelper::GetEncryptionAlgName(::StringW encryptionAlgOid) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedHelper*>(), { "GetEncryptionAlgName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, encryptionAlgOid);
}
inline ::Org::BouncyCastle::Crypto::IDigest* Org::BouncyCastle::Cms::CmsSignedHelper::GetDigestInstance(::StringW algorithm) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedHelper*>(), { "GetDigestInstance", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IDigest*>(this, ___internal_method, algorithm);
}
inline ::Org::BouncyCastle::Crypto::ISigner* Org::BouncyCastle::Cms::CmsSignedHelper::GetSignatureInstance(::StringW algorithm) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedHelper*>(), { "GetSignatureInstance", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::ISigner*>(this, ___internal_method, algorithm);
}
inline ::Org::BouncyCastle::X509::Store::IX509Store* Org::BouncyCastle::Cms::CmsSignedHelper::CreateAttributeStore(::StringW type, ::Org::BouncyCastle::Asn1::Asn1Set* certSet) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedHelper*>(),
                                                           { "CreateAttributeStore", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Set*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::Store::IX509Store*>(this, ___internal_method, type, certSet);
}
inline ::Org::BouncyCastle::X509::Store::IX509Store* Org::BouncyCastle::Cms::CmsSignedHelper::CreateCertificateStore(::StringW type, ::Org::BouncyCastle::Asn1::Asn1Set* certSet) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedHelper*>(),
                                                           { "CreateCertificateStore", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Set*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::Store::IX509Store*>(this, ___internal_method, type, certSet);
}
inline ::Org::BouncyCastle::X509::Store::IX509Store* Org::BouncyCastle::Cms::CmsSignedHelper::CreateCrlStore(::StringW type, ::Org::BouncyCastle::Asn1::Asn1Set* crlSet) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedHelper*>(),
                                                           { "CreateCrlStore", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Set*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::Store::IX509Store*>(this, ___internal_method, type, crlSet);
}
inline void Org::BouncyCastle::Cms::CmsSignedHelper::AddCertsFromSet(::System::Collections::IList* certs, ::Org::BouncyCastle::Asn1::Asn1Set* certSet) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedHelper*>(),
                                                           { "AddCertsFromSet", {}, { ::i2c::type_of<::System::Collections::IList*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Set*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, certs, certSet);
}
inline void Org::BouncyCastle::Cms::CmsSignedHelper::AddCrlsFromSet(::System::Collections::IList* crls, ::Org::BouncyCastle::Asn1::Asn1Set* crlSet) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedHelper*>(),
                                                           { "AddCrlsFromSet", {}, { ::i2c::type_of<::System::Collections::IList*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Set*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, crls, crlSet);
}
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Cms::CmsSignedHelper::FixAlgID(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algId) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedHelper*>(),
                                                                                         { "FixAlgID", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(this, ___internal_method, algId);
}
inline ::StringW Org::BouncyCastle::Cms::CmsSignedHelper::GetEncOid(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* key, ::StringW digestOID) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedHelper*>(),
                                                           { "GetEncOid", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, key, digestOID);
}
inline void Org::BouncyCastle::Cms::CmsSignedHelper::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedHelper*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Cms::CmsSignedHelper* Org::BouncyCastle::Cms::CmsSignedHelper::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::CmsSignedHelper*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::CmsSignedHelper::CmsSignedHelper() {}
