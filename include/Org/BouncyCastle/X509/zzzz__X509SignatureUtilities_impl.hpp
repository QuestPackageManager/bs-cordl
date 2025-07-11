#pragma once
// IWYU pragma private; include "Org/BouncyCastle/X509/X509SignatureUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509SignatureUtilities_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Null_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ISigner_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509SignatureUtilities.SetSignatureParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Org::BouncyCastle::Crypto::ISigner*, ::Org::BouncyCastle::Asn1::Asn1Encodable*)>(
    &::Org::BouncyCastle::X509::X509SignatureUtilities::SetSignatureParameters)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x25f8fec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509SignatureUtilities*>::get(), "SetSignatureParameters", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ISigner*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Encodable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509SignatureUtilities.GetSignatureName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*)>(
    &::Org::BouncyCastle::X509::X509SignatureUtilities::GetSignatureName)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x25f1730;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509SignatureUtilities*>::get(), "GetSignatureName", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509SignatureUtilities.GetDigestAlgName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(
    &::Org::BouncyCastle::X509::X509SignatureUtilities::GetDigestAlgName)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x25f9068;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509SignatureUtilities*>::get(), "GetDigestAlgName", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509SignatureUtilities._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::X509SignatureUtilities::*)()>(
    &::Org::BouncyCastle::X509::X509SignatureUtilities::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25f9450;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509SignatureUtilities*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::X509::X509SignatureUtilities::setStaticF_derNull(::Org::BouncyCastle::Asn1::Asn1Null* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::Asn1Null*, "derNull", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509SignatureUtilities*>::get>(
      std::forward<::Org::BouncyCastle::Asn1::Asn1Null*>(value));
}
inline ::Org::BouncyCastle::Asn1::Asn1Null* Org::BouncyCastle::X509::X509SignatureUtilities::getStaticF_derNull() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::Asn1Null*, "derNull",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509SignatureUtilities*>::get>();
}
inline void Org::BouncyCastle::X509::X509SignatureUtilities::SetSignatureParameters(::Org::BouncyCastle::Crypto::ISigner* signature, ::Org::BouncyCastle::Asn1::Asn1Encodable* parameters) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509SignatureUtilities*>::get(), "SetSignatureParameters", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ISigner*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Encodable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, signature, parameters);
}
inline ::StringW Org::BouncyCastle::X509::X509SignatureUtilities::GetSignatureName(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* sigAlgId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509SignatureUtilities*>::get(), "GetSignatureName", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, sigAlgId);
}
inline ::StringW Org::BouncyCastle::X509::X509SignatureUtilities::GetDigestAlgName(::Org::BouncyCastle::Asn1::DerObjectIdentifier* digestAlgOID) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509SignatureUtilities*>::get(), "GetDigestAlgName", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, digestAlgOID);
}
inline void Org::BouncyCastle::X509::X509SignatureUtilities::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509SignatureUtilities*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::X509::X509SignatureUtilities* Org::BouncyCastle::X509::X509SignatureUtilities::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::X509::X509SignatureUtilities*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::X509::X509SignatureUtilities::X509SignatureUtilities() {}
