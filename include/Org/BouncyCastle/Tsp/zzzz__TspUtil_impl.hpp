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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ICollection* (*)(::Org::BouncyCastle::Cms::SignerInformation*)>(
    &::Org::BouncyCastle::Tsp::TspUtil::GetSignatureTimestamps)> {
  constexpr static std::size_t size = 0x994;
  constexpr static std::size_t addrs = 0x25d479c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TspUtil*>::get(), "GetSignatureTimestamps", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::SignerInformation*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TspUtil.ValidateCertificate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Org::BouncyCastle::X509::X509Certificate*)>(&::Org::BouncyCastle::Tsp::TspUtil::ValidateCertificate)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x25d1f28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TspUtil*>::get(), "ValidateCertificate", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TspUtil.GetDigestAlgName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::Org::BouncyCastle::Tsp::TspUtil::GetDigestAlgName)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x25d5130;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TspUtil*>::get(), "GetDigestAlgName", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TspUtil.GetDigestLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW)>(&::Org::BouncyCastle::Tsp::TspUtil::GetDigestLength)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x25ce870;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TspUtil*>::get(), "GetDigestLength", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TspUtil.CreateDigestInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::IDigest* (*)(::StringW)>(&::Org::BouncyCastle::Tsp::TspUtil::CreateDigestInstance)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x25d5238;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TspUtil*>::get(), "CreateDigestInstance", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TspUtil.GetCriticalExtensionOids
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Utilities::Collections::ISet* (*)(::Org::BouncyCastle::Asn1::X509::X509Extensions*)>(
    &::Org::BouncyCastle::Tsp::TspUtil::GetCriticalExtensionOids)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x25d52c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TspUtil*>::get(), "GetCriticalExtensionOids", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::X509Extensions*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TspUtil.GetNonCriticalExtensionOids
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Utilities::Collections::ISet* (*)(::Org::BouncyCastle::Asn1::X509::X509Extensions*)>(
    &::Org::BouncyCastle::Tsp::TspUtil::GetNonCriticalExtensionOids)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x25d5694;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TspUtil*>::get(), "GetNonCriticalExtensionOids", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::X509Extensions*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TspUtil.GetExtensionOids
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IList* (*)(::Org::BouncyCastle::Asn1::X509::X509Extensions*)>(
    &::Org::BouncyCastle::Tsp::TspUtil::GetExtensionOids)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x25ceae8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TspUtil*>::get(), "GetExtensionOids", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::X509Extensions*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TspUtil._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Tsp::TspUtil::*)()>(&::Org::BouncyCastle::Tsp::TspUtil::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25d5740;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TspUtil*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Tsp::TspUtil::setStaticF_EmptySet(::Org::BouncyCastle::Utilities::Collections::ISet* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Utilities::Collections::ISet*, "EmptySet", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TspUtil*>::get>(
      std::forward<::Org::BouncyCastle::Utilities::Collections::ISet*>(value));
}
inline ::Org::BouncyCastle::Utilities::Collections::ISet* Org::BouncyCastle::Tsp::TspUtil::getStaticF_EmptySet() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Utilities::Collections::ISet*, "EmptySet",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TspUtil*>::get>();
}
inline void Org::BouncyCastle::Tsp::TspUtil::setStaticF_EmptyList(::System::Collections::IList* value) {
  ::cordl_internals::setStaticField<::System::Collections::IList*, "EmptyList", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TspUtil*>::get>(
      std::forward<::System::Collections::IList*>(value));
}
inline ::System::Collections::IList* Org::BouncyCastle::Tsp::TspUtil::getStaticF_EmptyList() {
  return ::cordl_internals::getStaticField<::System::Collections::IList*, "EmptyList", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TspUtil*>::get>();
}
inline void Org::BouncyCastle::Tsp::TspUtil::setStaticF_digestLengths(::System::Collections::IDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::IDictionary*, "digestLengths", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TspUtil*>::get>(
      std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Tsp::TspUtil::getStaticF_digestLengths() {
  return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "digestLengths", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TspUtil*>::get>();
}
inline void Org::BouncyCastle::Tsp::TspUtil::setStaticF_digestNames(::System::Collections::IDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::IDictionary*, "digestNames", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TspUtil*>::get>(
      std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Tsp::TspUtil::getStaticF_digestNames() {
  return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "digestNames", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TspUtil*>::get>();
}
inline ::System::Collections::ICollection* Org::BouncyCastle::Tsp::TspUtil::GetSignatureTimestamps(::Org::BouncyCastle::Cms::SignerInformation* signerInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TspUtil*>::get(), "GetSignatureTimestamps", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::SignerInformation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*, false>(nullptr, ___internal_method, signerInfo);
}
inline void Org::BouncyCastle::Tsp::TspUtil::ValidateCertificate(::Org::BouncyCastle::X509::X509Certificate* cert) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TspUtil*>::get(), "ValidateCertificate", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cert);
}
inline ::StringW Org::BouncyCastle::Tsp::TspUtil::GetDigestAlgName(::StringW digestAlgOID) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TspUtil*>::get(), "GetDigestAlgName", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, digestAlgOID);
}
inline int32_t Org::BouncyCastle::Tsp::TspUtil::GetDigestLength(::StringW digestAlgOID) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TspUtil*>::get(), "GetDigestLength", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, digestAlgOID);
}
inline ::Org::BouncyCastle::Crypto::IDigest* Org::BouncyCastle::Tsp::TspUtil::CreateDigestInstance(::StringW digestAlgOID) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TspUtil*>::get(), "CreateDigestInstance", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IDigest*, false>(nullptr, ___internal_method, digestAlgOID);
}
inline ::Org::BouncyCastle::Utilities::Collections::ISet* Org::BouncyCastle::Tsp::TspUtil::GetCriticalExtensionOids(::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TspUtil*>::get(), "GetCriticalExtensionOids", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::X509Extensions*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Collections::ISet*, false>(nullptr, ___internal_method, extensions);
}
inline ::Org::BouncyCastle::Utilities::Collections::ISet* Org::BouncyCastle::Tsp::TspUtil::GetNonCriticalExtensionOids(::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TspUtil*>::get(), "GetNonCriticalExtensionOids", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::X509Extensions*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Collections::ISet*, false>(nullptr, ___internal_method, extensions);
}
inline ::System::Collections::IList* Org::BouncyCastle::Tsp::TspUtil::GetExtensionOids(::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TspUtil*>::get(), "GetExtensionOids", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::X509Extensions*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IList*, false>(nullptr, ___internal_method, extensions);
}
inline void Org::BouncyCastle::Tsp::TspUtil::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TspUtil*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Tsp::TspUtil* Org::BouncyCastle::Tsp::TspUtil::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Tsp::TspUtil*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Tsp::TspUtil::TspUtil() {}
