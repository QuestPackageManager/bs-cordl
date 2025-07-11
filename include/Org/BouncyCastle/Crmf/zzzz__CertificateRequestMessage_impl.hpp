#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crmf/CertificateRequestMessage.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crmf/zzzz__CertificateRequestMessage_def.hpp"
#include "Org/BouncyCastle/Asn1/Crmf/zzzz__AttributeTypeAndValue_def.hpp"
#include "Org/BouncyCastle/Asn1/Crmf/zzzz__CertReqMsg_def.hpp"
#include "Org/BouncyCastle/Asn1/Crmf/zzzz__CertTemplate_def.hpp"
#include "Org/BouncyCastle/Asn1/Crmf/zzzz__Controls_def.hpp"
#include "Org/BouncyCastle/Asn1/Crmf/zzzz__PopoSigningKey_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Crmf/zzzz__IControl_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IVerifierFactoryProvider_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::CertificateRequestMessage.ParseBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Crmf::CertReqMsg* (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Crmf::CertificateRequestMessage::ParseBytes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2682444;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::CertificateRequestMessage*>::get(), "ParseBytes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::CertificateRequestMessage._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crmf::CertificateRequestMessage::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Crmf::CertificateRequestMessage::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x268244c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::CertificateRequestMessage*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::CertificateRequestMessage._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crmf::CertificateRequestMessage::*)(::Org::BouncyCastle::Asn1::Crmf::CertReqMsg*)>(
    &::Org::BouncyCastle::Crmf::CertificateRequestMessage::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2682470;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::CertificateRequestMessage*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Crmf::CertReqMsg*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::CertificateRequestMessage.ToAsn1Structure
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Crmf::CertReqMsg* (::Org::BouncyCastle::Crmf::CertificateRequestMessage::*)()>(
    &::Org::BouncyCastle::Crmf::CertificateRequestMessage::ToAsn1Structure)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26824c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::CertificateRequestMessage*>::get(),
                                                                               "ToAsn1Structure", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::CertificateRequestMessage.GetCertTemplate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Crmf::CertTemplate* (::Org::BouncyCastle::Crmf::CertificateRequestMessage::*)()>(
    &::Org::BouncyCastle::Crmf::CertificateRequestMessage::GetCertTemplate)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x26824cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::CertificateRequestMessage*>::get(),
                                                                               "GetCertTemplate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::CertificateRequestMessage.get_HasControls
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Crmf::CertificateRequestMessage::*)()>(
    &::Org::BouncyCastle::Crmf::CertificateRequestMessage::get_HasControls)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x26824fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::CertificateRequestMessage*>::get(),
                                                                               "get_HasControls", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::CertificateRequestMessage.HasControl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Crmf::CertificateRequestMessage::*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(
    &::Org::BouncyCastle::Crmf::CertificateRequestMessage::HasControl)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x268250c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::CertificateRequestMessage*>::get(), "HasControl", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::CertificateRequestMessage.GetControl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crmf::IControl* (
    ::Org::BouncyCastle::Crmf::CertificateRequestMessage::*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(&::Org::BouncyCastle::Crmf::CertificateRequestMessage::GetControl)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x26825d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::CertificateRequestMessage*>::get(), "GetControl", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::CertificateRequestMessage.FindControl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Crmf::AttributeTypeAndValue* (
    ::Org::BouncyCastle::Crmf::CertificateRequestMessage::*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(&::Org::BouncyCastle::Crmf::CertificateRequestMessage::FindControl)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2682524;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::CertificateRequestMessage*>::get(), "FindControl", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::CertificateRequestMessage.get_HasProofOfPossession
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Crmf::CertificateRequestMessage::*)()>(
    &::Org::BouncyCastle::Crmf::CertificateRequestMessage::get_HasProofOfPossession)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2682808;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::CertificateRequestMessage*>::get(),
                                                                               "get_HasProofOfPossession", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::CertificateRequestMessage.get_ProofOfPossession
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crmf::CertificateRequestMessage::*)()>(
    &::Org::BouncyCastle::Crmf::CertificateRequestMessage::get_ProofOfPossession)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2682834;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::CertificateRequestMessage*>::get(),
                                                                               "get_ProofOfPossession", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::CertificateRequestMessage.get_HasSigningKeyProofOfPossessionWithPkMac
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Crmf::CertificateRequestMessage::*)()>(
    &::Org::BouncyCastle::Crmf::CertificateRequestMessage::get_HasSigningKeyProofOfPossessionWithPkMac)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2682864;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::CertificateRequestMessage*>::get(),
                                                 "get_HasSigningKeyProofOfPossessionWithPkMac", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::CertificateRequestMessage.IsValidSigningKeyPop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Crmf::CertificateRequestMessage::*)(
    ::Org::BouncyCastle::Crypto::IVerifierFactoryProvider*)>(&::Org::BouncyCastle::Crmf::CertificateRequestMessage::IsValidSigningKeyPop)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x2682944;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::CertificateRequestMessage*>::get(), "IsValidSigningKeyPop", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IVerifierFactoryProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::CertificateRequestMessage.verifySignature
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Crmf::CertificateRequestMessage::*)(
    ::Org::BouncyCastle::Crypto::IVerifierFactoryProvider*, ::Org::BouncyCastle::Asn1::Crmf::PopoSigningKey*)>(&::Org::BouncyCastle::Crmf::CertificateRequestMessage::verifySignature)> {
  constexpr static std::size_t size = 0x438;
  constexpr static std::size_t addrs = 0x2682ab0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::CertificateRequestMessage*>::get(), "verifySignature", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IVerifierFactoryProvider*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Crmf::PopoSigningKey*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::CertificateRequestMessage.GetEncoded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Crmf::CertificateRequestMessage::*)()>(
    &::Org::BouncyCastle::Crmf::CertificateRequestMessage::GetEncoded)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2682f58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::CertificateRequestMessage*>::get(),
                                                                               "GetEncoded", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Crmf::CertReqMsg*& Org::BouncyCastle::Crmf::CertificateRequestMessage::__cordl_internal_get_certReqMsg() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certReqMsg;
}
constexpr ::Org::BouncyCastle::Asn1::Crmf::CertReqMsg* const& Org::BouncyCastle::Crmf::CertificateRequestMessage::__cordl_internal_get_certReqMsg() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certReqMsg;
}
constexpr void Org::BouncyCastle::Crmf::CertificateRequestMessage::__cordl_internal_set_certReqMsg(::Org::BouncyCastle::Asn1::Crmf::CertReqMsg* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___certReqMsg)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::Crmf::Controls*& Org::BouncyCastle::Crmf::CertificateRequestMessage::__cordl_internal_get_controls() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___controls;
}
constexpr ::Org::BouncyCastle::Asn1::Crmf::Controls* const& Org::BouncyCastle::Crmf::CertificateRequestMessage::__cordl_internal_get_controls() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___controls;
}
constexpr void Org::BouncyCastle::Crmf::CertificateRequestMessage::__cordl_internal_set_controls(::Org::BouncyCastle::Asn1::Crmf::Controls* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___controls)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Org::BouncyCastle::Crmf::CertificateRequestMessage::setStaticF_popRaVerified(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "popRaVerified", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::CertificateRequestMessage*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Crmf::CertificateRequestMessage::getStaticF_popRaVerified() {
  return ::cordl_internals::getStaticField<int32_t, "popRaVerified", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::CertificateRequestMessage*>::get>();
}
inline void Org::BouncyCastle::Crmf::CertificateRequestMessage::setStaticF_popSigningKey(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "popSigningKey", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::CertificateRequestMessage*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Crmf::CertificateRequestMessage::getStaticF_popSigningKey() {
  return ::cordl_internals::getStaticField<int32_t, "popSigningKey", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::CertificateRequestMessage*>::get>();
}
inline void Org::BouncyCastle::Crmf::CertificateRequestMessage::setStaticF_popKeyEncipherment(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "popKeyEncipherment", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::CertificateRequestMessage*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Crmf::CertificateRequestMessage::getStaticF_popKeyEncipherment() {
  return ::cordl_internals::getStaticField<int32_t, "popKeyEncipherment", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::CertificateRequestMessage*>::get>();
}
inline void Org::BouncyCastle::Crmf::CertificateRequestMessage::setStaticF_popKeyAgreement(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "popKeyAgreement", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::CertificateRequestMessage*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Crmf::CertificateRequestMessage::getStaticF_popKeyAgreement() {
  return ::cordl_internals::getStaticField<int32_t, "popKeyAgreement", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::CertificateRequestMessage*>::get>();
}
inline ::Org::BouncyCastle::Asn1::Crmf::CertReqMsg* Org::BouncyCastle::Crmf::CertificateRequestMessage::ParseBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> encoding) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::CertificateRequestMessage*>::get(), "ParseBytes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Crmf::CertReqMsg*, false>(nullptr, ___internal_method, encoding);
}
inline void Org::BouncyCastle::Crmf::CertificateRequestMessage::_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> encoded) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::CertificateRequestMessage*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, encoded);
}
inline void Org::BouncyCastle::Crmf::CertificateRequestMessage::_ctor(::Org::BouncyCastle::Asn1::Crmf::CertReqMsg* certReqMsg) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::CertificateRequestMessage*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Crmf::CertReqMsg*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, certReqMsg);
}
inline ::Org::BouncyCastle::Asn1::Crmf::CertReqMsg* Org::BouncyCastle::Crmf::CertificateRequestMessage::ToAsn1Structure() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::CertificateRequestMessage*>::get(),
                                                                             "ToAsn1Structure", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Crmf::CertReqMsg*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Crmf::CertTemplate* Org::BouncyCastle::Crmf::CertificateRequestMessage::GetCertTemplate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::CertificateRequestMessage*>::get(),
                                                                             "GetCertTemplate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Crmf::CertTemplate*, false>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Crmf::CertificateRequestMessage::get_HasControls() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::CertificateRequestMessage*>::get(),
                                                                             "get_HasControls", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Crmf::CertificateRequestMessage::HasControl(::Org::BouncyCastle::Asn1::DerObjectIdentifier* objectIdentifier) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::CertificateRequestMessage*>::get(), "HasControl", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, objectIdentifier);
}
inline ::Org::BouncyCastle::Crmf::IControl* Org::BouncyCastle::Crmf::CertificateRequestMessage::GetControl(::Org::BouncyCastle::Asn1::DerObjectIdentifier* type) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::CertificateRequestMessage*>::get(), "GetControl", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crmf::IControl*, false>(this, ___internal_method, type);
}
inline ::Org::BouncyCastle::Asn1::Crmf::AttributeTypeAndValue* Org::BouncyCastle::Crmf::CertificateRequestMessage::FindControl(::Org::BouncyCastle::Asn1::DerObjectIdentifier* type) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::CertificateRequestMessage*>::get(), "FindControl", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Crmf::AttributeTypeAndValue*, false>(this, ___internal_method, type);
}
inline bool Org::BouncyCastle::Crmf::CertificateRequestMessage::get_HasProofOfPossession() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::CertificateRequestMessage*>::get(),
                                                                             "get_HasProofOfPossession", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crmf::CertificateRequestMessage::get_ProofOfPossession() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::CertificateRequestMessage*>::get(),
                                                                             "get_ProofOfPossession", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Crmf::CertificateRequestMessage::get_HasSigningKeyProofOfPossessionWithPkMac() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::CertificateRequestMessage*>::get(),
                                               "get_HasSigningKeyProofOfPossessionWithPkMac", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Crmf::CertificateRequestMessage::IsValidSigningKeyPop(::Org::BouncyCastle::Crypto::IVerifierFactoryProvider* verifierProvider) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::CertificateRequestMessage*>::get(), "IsValidSigningKeyPop", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IVerifierFactoryProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, verifierProvider);
}
inline bool Org::BouncyCastle::Crmf::CertificateRequestMessage::verifySignature(::Org::BouncyCastle::Crypto::IVerifierFactoryProvider* verifierFactoryProvider,
                                                                                ::Org::BouncyCastle::Asn1::Crmf::PopoSigningKey* signKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::CertificateRequestMessage*>::get(), "verifySignature", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IVerifierFactoryProvider*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Crmf::PopoSigningKey*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, verifierFactoryProvider, signKey);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crmf::CertificateRequestMessage::GetEncoded() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::CertificateRequestMessage*>::get(),
                                                                             "GetEncoded", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crmf::CertificateRequestMessage* Org::BouncyCastle::Crmf::CertificateRequestMessage::New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> encoded) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crmf::CertificateRequestMessage*>(encoded));
}
inline ::Org::BouncyCastle::Crmf::CertificateRequestMessage* Org::BouncyCastle::Crmf::CertificateRequestMessage::New_ctor(::Org::BouncyCastle::Asn1::Crmf::CertReqMsg* certReqMsg) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crmf::CertificateRequestMessage*>(certReqMsg));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crmf::CertificateRequestMessage::CertificateRequestMessage() {}
