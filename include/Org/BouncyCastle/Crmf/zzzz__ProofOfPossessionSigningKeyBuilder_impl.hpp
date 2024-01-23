#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crmf/zzzz__ProofOfPossessionSigningKeyBuilder_def.hpp"
#include "Org/BouncyCastle/Asn1/Crmf/zzzz__CertRequest_def.hpp"
#include "Org/BouncyCastle/Asn1/Crmf/zzzz__PKMacValue_def.hpp"
#include "Org/BouncyCastle/Asn1/Crmf/zzzz__PopoSigningKey_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__GeneralName_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__SubjectPublicKeyInfo_def.hpp"
#include "Org/BouncyCastle/Crmf/zzzz__PKMacBuilder_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ISignatureFactory_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder::*)(
    ::Org::BouncyCastle::Asn1::Crmf::CertRequest*)>(&::Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x1210674;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Crmf::CertRequest*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder::*)(
    ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*)>(&::Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x120fbac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder.SetSender
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder* (
    ::Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder::*)(::Org::BouncyCastle::Asn1::X509::GeneralName*)>(&::Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder::SetSender)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x120fbd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder*>::get(), "SetSender", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::GeneralName*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder.SetPublicKeyMac
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder* (
    ::Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder::*)(::Org::BouncyCastle::Crmf::PKMacBuilder*, ::ArrayW<char16_t, ::Array<char16_t>*>)>(
    &::Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder::SetPublicKeyMac)> {
  constexpr static std::size_t size = 0x4ac;
  constexpr static std::size_t addrs = 0x120fbdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder*>::get(), "SetPublicKeyMac", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crmf::PKMacBuilder*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder.Build
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Crmf::PopoSigningKey* (
    ::Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder::*)(::Org::BouncyCastle::Crypto::ISignatureFactory*)>(&::Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder::Build)> {
  constexpr static std::size_t size = 0x5ec;
  constexpr static std::size_t addrs = 0x1210088;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder*>::get(), "Build", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ISignatureFactory*>::get() })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Crmf::CertRequest*& Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder::__cordl_internal_get__certRequest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____certRequest;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Crmf::CertRequest*> const&
Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder::__cordl_internal_get__certRequest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____certRequest;
}
constexpr void Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder::__cordl_internal_set__certRequest(::Org::BouncyCastle::Asn1::Crmf::CertRequest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____certRequest)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*& Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder::__cordl_internal_get__pubKeyInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pubKeyInfo;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*> const&
Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder::__cordl_internal_get__pubKeyInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pubKeyInfo;
}
constexpr void Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder::__cordl_internal_set__pubKeyInfo(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____pubKeyInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName*& Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder::__cordl_internal_get__name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____name;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::GeneralName*> const& Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder::__cordl_internal_get__name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____name;
}
constexpr void Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder::__cordl_internal_set__name(::Org::BouncyCastle::Asn1::X509::GeneralName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::Crmf::PKMacValue*& Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder::__cordl_internal_get__publicKeyMAC() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____publicKeyMAC;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Crmf::PKMacValue*> const&
Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder::__cordl_internal_get__publicKeyMAC() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____publicKeyMAC;
}
constexpr void Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder::__cordl_internal_set__publicKeyMAC(::Org::BouncyCastle::Asn1::Crmf::PKMacValue* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____publicKeyMAC)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder* Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder::New_ctor(::Org::BouncyCastle::Asn1::Crmf::CertRequest* certRequest) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder*>(certRequest));
}
inline void Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder::_ctor(::Org::BouncyCastle::Asn1::Crmf::CertRequest* certRequest) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Crmf::CertRequest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, certRequest);
}
inline ::Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder*
Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder::New_ctor(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* pubKeyInfo) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder*>(pubKeyInfo));
}
inline void Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder::_ctor(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* pubKeyInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pubKeyInfo);
}
inline ::Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder* Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder::SetSender(::Org::BouncyCastle::Asn1::X509::GeneralName* name) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder*>::get(), "SetSender", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::GeneralName*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder*, false>(this, ___internal_method, name);
}
inline ::Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder* Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder::SetPublicKeyMac(::Org::BouncyCastle::Crmf::PKMacBuilder* generator,
                                                                                                                                                   ::ArrayW<char16_t, ::Array<char16_t>*> password) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder*>::get(), "SetPublicKeyMac", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crmf::PKMacBuilder*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder*, false>(this, ___internal_method, generator, password);
}
inline ::Org::BouncyCastle::Asn1::Crmf::PopoSigningKey* Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder::Build(::Org::BouncyCastle::Crypto::ISignatureFactory* signer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder*>::get(), "Build", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ISignatureFactory*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Crmf::PopoSigningKey*, false>(this, ___internal_method, signer);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder::ProofOfPossessionSigningKeyBuilder() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
