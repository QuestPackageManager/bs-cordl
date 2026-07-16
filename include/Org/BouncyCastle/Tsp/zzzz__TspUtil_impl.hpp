#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Tsp/TspUtil.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Tsp/zzzz__TspUtil_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Extensions_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__SignerInformation_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
#include "Org/BouncyCastle/Utilities/Collections/zzzz__ISet_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TspUtil.GetSignatureTimestamps
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ICollection* (*)(::Org::BouncyCastle::Cms::SignerInformation*)>(
    &::Org::BouncyCastle::Tsp::TspUtil::GetSignatureTimestamps)> {
  constexpr static std::size_t size = 0x974;
  constexpr static std::size_t addrs = 0x3623af8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TspUtil*>(), { "GetSignatureTimestamps", {}, { ::i2c::type_of<::Org::BouncyCastle::Cms::SignerInformation*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TspUtil.ValidateCertificate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Org::BouncyCastle::X509::X509Certificate*)>(&::Org::BouncyCastle::Tsp::TspUtil::ValidateCertificate)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x3621218;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TspUtil*>(), { "ValidateCertificate", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TspUtil.GetDigestAlgName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::Org::BouncyCastle::Tsp::TspUtil::GetDigestAlgName)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x362446c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TspUtil*>(), { "GetDigestAlgName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TspUtil.GetDigestLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW)>(&::Org::BouncyCastle::Tsp::TspUtil::GetDigestLength)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x361dabc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TspUtil*>(), { "GetDigestLength", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TspUtil.CreateDigestInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::IDigest* (*)(::StringW)>(&::Org::BouncyCastle::Tsp::TspUtil::CreateDigestInstance)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x362456c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TspUtil*>(), { "CreateDigestInstance", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TspUtil.GetCriticalExtensionOids
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Utilities::Collections::ISet* (*)(::Org::BouncyCastle::Asn1::X509::X509Extensions*)>(
    &::Org::BouncyCastle::Tsp::TspUtil::GetCriticalExtensionOids)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x3624600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TspUtil*>(), { "GetCriticalExtensionOids", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TspUtil.GetNonCriticalExtensionOids
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Utilities::Collections::ISet* (*)(::Org::BouncyCastle::Asn1::X509::X509Extensions*)>(
    &::Org::BouncyCastle::Tsp::TspUtil::GetNonCriticalExtensionOids)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x36249ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TspUtil*>(), { "GetNonCriticalExtensionOids", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TspUtil.GetExtensionOids
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IList* (*)(::Org::BouncyCastle::Asn1::X509::X509Extensions*)>(&::Org::BouncyCastle::Tsp::TspUtil::GetExtensionOids)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x361dd28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TspUtil*>(), { "GetExtensionOids", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TspUtil._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Tsp::TspUtil::*)()>(&::Org::BouncyCastle::Tsp::TspUtil::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3624a60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TspUtil*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Tsp::TspUtil::setStaticF_EmptySet(::Org::BouncyCastle::Utilities::Collections::ISet* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Utilities::Collections::ISet*, "EmptySet", ::Org::BouncyCastle::Tsp::TspUtil*>(
      std::forward<::Org::BouncyCastle::Utilities::Collections::ISet*>(value));
}
inline ::Org::BouncyCastle::Utilities::Collections::ISet* Org::BouncyCastle::Tsp::TspUtil::getStaticF_EmptySet() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Utilities::Collections::ISet*, "EmptySet", ::Org::BouncyCastle::Tsp::TspUtil*>();
}
inline void Org::BouncyCastle::Tsp::TspUtil::setStaticF_EmptyList(::System::Collections::IList* value) {
  ::cordl_internals::setStaticField<::System::Collections::IList*, "EmptyList", ::Org::BouncyCastle::Tsp::TspUtil*>(std::forward<::System::Collections::IList*>(value));
}
inline ::System::Collections::IList* Org::BouncyCastle::Tsp::TspUtil::getStaticF_EmptyList() {
  return ::cordl_internals::getStaticField<::System::Collections::IList*, "EmptyList", ::Org::BouncyCastle::Tsp::TspUtil*>();
}
inline void Org::BouncyCastle::Tsp::TspUtil::setStaticF_digestLengths(::System::Collections::IDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::IDictionary*, "digestLengths", ::Org::BouncyCastle::Tsp::TspUtil*>(std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Tsp::TspUtil::getStaticF_digestLengths() {
  return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "digestLengths", ::Org::BouncyCastle::Tsp::TspUtil*>();
}
inline void Org::BouncyCastle::Tsp::TspUtil::setStaticF_digestNames(::System::Collections::IDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::IDictionary*, "digestNames", ::Org::BouncyCastle::Tsp::TspUtil*>(std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Tsp::TspUtil::getStaticF_digestNames() {
  return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "digestNames", ::Org::BouncyCastle::Tsp::TspUtil*>();
}
inline ::System::Collections::ICollection* Org::BouncyCastle::Tsp::TspUtil::GetSignatureTimestamps(::Org::BouncyCastle::Cms::SignerInformation* signerInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TspUtil*>(), { "GetSignatureTimestamps", {}, { ::i2c::type_of<::Org::BouncyCastle::Cms::SignerInformation*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*>(nullptr, ___internal_method, signerInfo);
}
inline void Org::BouncyCastle::Tsp::TspUtil::ValidateCertificate(::Org::BouncyCastle::X509::X509Certificate* cert) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TspUtil*>(), { "ValidateCertificate", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cert);
}
inline ::StringW Org::BouncyCastle::Tsp::TspUtil::GetDigestAlgName(::StringW digestAlgOID) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TspUtil*>(), { "GetDigestAlgName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, digestAlgOID);
}
inline int32_t Org::BouncyCastle::Tsp::TspUtil::GetDigestLength(::StringW digestAlgOID) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TspUtil*>(), { "GetDigestLength", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, digestAlgOID);
}
inline ::Org::BouncyCastle::Crypto::IDigest* Org::BouncyCastle::Tsp::TspUtil::CreateDigestInstance(::StringW digestAlgOID) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TspUtil*>(), { "CreateDigestInstance", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IDigest*>(nullptr, ___internal_method, digestAlgOID);
}
inline ::Org::BouncyCastle::Utilities::Collections::ISet* Org::BouncyCastle::Tsp::TspUtil::GetCriticalExtensionOids(::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TspUtil*>(),
                                                                                         { "GetCriticalExtensionOids", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Collections::ISet*>(nullptr, ___internal_method, extensions);
}
inline ::Org::BouncyCastle::Utilities::Collections::ISet* Org::BouncyCastle::Tsp::TspUtil::GetNonCriticalExtensionOids(::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TspUtil*>(), { "GetNonCriticalExtensionOids", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Collections::ISet*>(nullptr, ___internal_method, extensions);
}
inline ::System::Collections::IList* Org::BouncyCastle::Tsp::TspUtil::GetExtensionOids(::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TspUtil*>(), { "GetExtensionOids", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IList*>(nullptr, ___internal_method, extensions);
}
inline void Org::BouncyCastle::Tsp::TspUtil::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TspUtil*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Tsp::TspUtil* Org::BouncyCastle::Tsp::TspUtil::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Tsp::TspUtil*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Tsp::TspUtil::TspUtil() {}
