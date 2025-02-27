#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cms/DefaultSignatureAlgorithmIdentifierFinder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__DefaultSignatureAlgorithmIdentifierFinder_def.hpp"
#include "Org/BouncyCastle/Asn1/Pkcs/zzzz__RsassaPssParameters_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Utilities/Collections/zzzz__ISet_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder.Generate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (*)(::StringW)>(
    &::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::Generate)> {
  constexpr static std::size_t size = 0x6cc;
  constexpr static std::size_t addrs = 0x2674a18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*>::get(), "Generate",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder.CreatePssParams
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters* (*)(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, int32_t)>(
        &::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::CreatePssParams)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x26748f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*>::get(), "CreatePssParams",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder.Find
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (
    ::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::*)(::StringW)>(&::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::Find)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x26750e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*>::get(), "Find",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::*)()>(
    &::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2675138;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::setStaticF_algorithms(::System::Collections::IDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::IDictionary*, "algorithms",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*>::get>(
      std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::getStaticF_algorithms() {
  return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "algorithms",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*>::get>();
}
inline void Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::setStaticF_noParams(::Org::BouncyCastle::Utilities::Collections::ISet* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Utilities::Collections::ISet*, "noParams",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*>::get>(
      std::forward<::Org::BouncyCastle::Utilities::Collections::ISet*>(value));
}
inline ::Org::BouncyCastle::Utilities::Collections::ISet* Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::getStaticF_noParams() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Utilities::Collections::ISet*, "noParams",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*>::get>();
}
inline void Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::setStaticF__params(::System::Collections::IDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::IDictionary*, "_params",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*>::get>(
      std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::getStaticF__params() {
  return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "_params",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*>::get>();
}
inline void Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::setStaticF_pkcs15RsaEncryption(::Org::BouncyCastle::Utilities::Collections::ISet* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Utilities::Collections::ISet*, "pkcs15RsaEncryption",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*>::get>(
      std::forward<::Org::BouncyCastle::Utilities::Collections::ISet*>(value));
}
inline ::Org::BouncyCastle::Utilities::Collections::ISet* Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::getStaticF_pkcs15RsaEncryption() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Utilities::Collections::ISet*, "pkcs15RsaEncryption",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*>::get>();
}
inline void Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::setStaticF_digestOids(::System::Collections::IDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::IDictionary*, "digestOids",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*>::get>(
      std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::getStaticF_digestOids() {
  return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "digestOids",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*>::get>();
}
inline void Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::setStaticF_digestBuilders(::System::Collections::IDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::IDictionary*, "digestBuilders",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*>::get>(
      std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::getStaticF_digestBuilders() {
  return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "digestBuilders",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*>::get>();
}
inline void Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::setStaticF_ENCRYPTION_RSA(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "ENCRYPTION_RSA",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*>::get>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::getStaticF_ENCRYPTION_RSA() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "ENCRYPTION_RSA",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*>::get>();
}
inline void Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::setStaticF_ENCRYPTION_DSA(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "ENCRYPTION_DSA",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*>::get>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::getStaticF_ENCRYPTION_DSA() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "ENCRYPTION_DSA",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*>::get>();
}
inline void Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::setStaticF_ENCRYPTION_ECDSA(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "ENCRYPTION_ECDSA",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*>::get>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::getStaticF_ENCRYPTION_ECDSA() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "ENCRYPTION_ECDSA",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*>::get>();
}
inline void Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::setStaticF_ENCRYPTION_RSA_PSS(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "ENCRYPTION_RSA_PSS",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*>::get>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::getStaticF_ENCRYPTION_RSA_PSS() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "ENCRYPTION_RSA_PSS",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*>::get>();
}
inline void Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::setStaticF_ENCRYPTION_GOST3410(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "ENCRYPTION_GOST3410",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*>::get>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::getStaticF_ENCRYPTION_GOST3410() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "ENCRYPTION_GOST3410",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*>::get>();
}
inline void Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::setStaticF_ENCRYPTION_ECGOST3410(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "ENCRYPTION_ECGOST3410",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*>::get>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::getStaticF_ENCRYPTION_ECGOST3410() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "ENCRYPTION_ECGOST3410",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*>::get>();
}
inline void Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::setStaticF_ENCRYPTION_ECGOST3410_2012_256(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "ENCRYPTION_ECGOST3410_2012_256",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*>::get>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::getStaticF_ENCRYPTION_ECGOST3410_2012_256() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "ENCRYPTION_ECGOST3410_2012_256",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*>::get>();
}
inline void Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::setStaticF_ENCRYPTION_ECGOST3410_2012_512(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "ENCRYPTION_ECGOST3410_2012_512",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*>::get>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::getStaticF_ENCRYPTION_ECGOST3410_2012_512() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "ENCRYPTION_ECGOST3410_2012_512",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*>::get>();
}
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::Generate(::StringW signatureAlgorithm) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*>::get(), "Generate",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, false>(nullptr, ___internal_method, signatureAlgorithm);
}
inline ::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters*
Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::CreatePssParams(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* hashAlgId, int32_t saltSize) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*>::get(), "CreatePssParams", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters*, false>(nullptr, ___internal_method, hashAlgId, saltSize);
}
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::Find(::StringW sigAlgName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*>::get(), "Find",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, false>(this, ___internal_method, sigAlgName);
}
inline void Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder* Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::DefaultSignatureAlgorithmIdentifierFinder() {}
