#pragma once
// IWYU pragma private; include "Org/BouncyCastle/X509/Extension/SubjectKeyIdentifierStructure.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__SubjectKeyIdentifier_impl.hpp"
#include "Org/BouncyCastle/X509/Extension/zzzz__SubjectKeyIdentifierStructure_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1OctetString_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::X509::Extension::SubjectKeyIdentifierStructure._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::Extension::SubjectKeyIdentifierStructure::*)(
    ::Org::BouncyCastle::Asn1::Asn1OctetString*)>(&::Org::BouncyCastle::X509::Extension::SubjectKeyIdentifierStructure::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x25b3ea0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Extension::SubjectKeyIdentifierStructure*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1OctetString*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Extension::SubjectKeyIdentifierStructure.FromPublicKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1OctetString* (*)(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)>(
    &::Org::BouncyCastle::X509::Extension::SubjectKeyIdentifierStructure::FromPublicKey)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x25b3f34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Extension::SubjectKeyIdentifierStructure*>::get(), "FromPublicKey", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Extension::SubjectKeyIdentifierStructure._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::Extension::SubjectKeyIdentifierStructure::*)(
    ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)>(&::Org::BouncyCastle::X509::Extension::SubjectKeyIdentifierStructure::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x25b40e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Extension::SubjectKeyIdentifierStructure*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get() })));
    return ___internal_method;
  }
};
inline ::Org::BouncyCastle::X509::Extension::SubjectKeyIdentifierStructure*
Org::BouncyCastle::X509::Extension::SubjectKeyIdentifierStructure::New_ctor(::Org::BouncyCastle::Asn1::Asn1OctetString* encodedValue) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::X509::Extension::SubjectKeyIdentifierStructure*>(encodedValue));
}
inline void Org::BouncyCastle::X509::Extension::SubjectKeyIdentifierStructure::_ctor(::Org::BouncyCastle::Asn1::Asn1OctetString* encodedValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Extension::SubjectKeyIdentifierStructure*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1OctetString*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, encodedValue);
}
inline ::Org::BouncyCastle::Asn1::Asn1OctetString* Org::BouncyCastle::X509::Extension::SubjectKeyIdentifierStructure::FromPublicKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* pubKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Extension::SubjectKeyIdentifierStructure*>::get(), "FromPublicKey", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1OctetString*, false>(nullptr, ___internal_method, pubKey);
}
inline ::Org::BouncyCastle::X509::Extension::SubjectKeyIdentifierStructure*
Org::BouncyCastle::X509::Extension::SubjectKeyIdentifierStructure::New_ctor(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* pubKey) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::X509::Extension::SubjectKeyIdentifierStructure*>(pubKey));
}
inline void Org::BouncyCastle::X509::Extension::SubjectKeyIdentifierStructure::_ctor(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* pubKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Extension::SubjectKeyIdentifierStructure*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pubKey);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::X509::Extension::SubjectKeyIdentifierStructure::SubjectKeyIdentifierStructure() {}
