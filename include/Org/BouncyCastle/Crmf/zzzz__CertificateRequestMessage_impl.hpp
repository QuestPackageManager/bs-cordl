#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crmf\CertificateRequestMessage.hpp"
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Crmf::CertReqMsg* (*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crmf::CertificateRequestMessage::ParseBytes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36d7d30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::CertificateRequestMessage*>(), { "ParseBytes", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::CertificateRequestMessage._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crmf::CertificateRequestMessage::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crmf::CertificateRequestMessage::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x36d7d38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::CertificateRequestMessage*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::CertificateRequestMessage._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crmf::CertificateRequestMessage::*)(::Org::BouncyCastle::Asn1::Crmf::CertReqMsg*)>(
    &::Org::BouncyCastle::Crmf::CertificateRequestMessage::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x36d7d5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::CertificateRequestMessage*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Crmf::CertReqMsg*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::CertificateRequestMessage.ToAsn1Structure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Crmf::CertReqMsg* (::Org::BouncyCastle::Crmf::CertificateRequestMessage::*)()>(
    &::Org::BouncyCastle::Crmf::CertificateRequestMessage::ToAsn1Structure)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36d7da0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::CertificateRequestMessage*>(), { "ToAsn1Structure", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::CertificateRequestMessage.GetCertTemplate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Crmf::CertTemplate* (::Org::BouncyCastle::Crmf::CertificateRequestMessage::*)()>(
    &::Org::BouncyCastle::Crmf::CertificateRequestMessage::GetCertTemplate)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x36d7da8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::CertificateRequestMessage*>(), { "GetCertTemplate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::CertificateRequestMessage.get_HasControls
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crmf::CertificateRequestMessage::*)()>(&::Org::BouncyCastle::Crmf::CertificateRequestMessage::get_HasControls)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x36d7dd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::CertificateRequestMessage*>(), { "get_HasControls", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::CertificateRequestMessage.HasControl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crmf::CertificateRequestMessage::*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(
    &::Org::BouncyCastle::Crmf::CertificateRequestMessage::HasControl)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x36d7de8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::CertificateRequestMessage*>(),
                                                                                           { "HasControl", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::CertificateRequestMessage.GetControl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crmf::IControl* (::Org::BouncyCastle::Crmf::CertificateRequestMessage::*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(
    &::Org::BouncyCastle::Crmf::CertificateRequestMessage::GetControl)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x36d7ea8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::CertificateRequestMessage*>(),
                                                                                           { "GetControl", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::CertificateRequestMessage.FindControl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Crmf::AttributeTypeAndValue* (
    ::Org::BouncyCastle::Crmf::CertificateRequestMessage::*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(&::Org::BouncyCastle::Crmf::CertificateRequestMessage::FindControl)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x36d7e00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::CertificateRequestMessage*>(),
                                                                                           { "FindControl", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::CertificateRequestMessage.get_HasProofOfPossession
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crmf::CertificateRequestMessage::*)()>(
    &::Org::BouncyCastle::Crmf::CertificateRequestMessage::get_HasProofOfPossession)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x36d80b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::CertificateRequestMessage*>(), { "get_HasProofOfPossession", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::CertificateRequestMessage.get_ProofOfPossession
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crmf::CertificateRequestMessage::*)()>(
    &::Org::BouncyCastle::Crmf::CertificateRequestMessage::get_ProofOfPossession)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x36d80dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::CertificateRequestMessage*>(), { "get_ProofOfPossession", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::CertificateRequestMessage.get_HasSigningKeyProofOfPossessionWithPkMac
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crmf::CertificateRequestMessage::*)()>(
    &::Org::BouncyCastle::Crmf::CertificateRequestMessage::get_HasSigningKeyProofOfPossessionWithPkMac)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x36d810c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::CertificateRequestMessage*>(), { "get_HasSigningKeyProofOfPossessionWithPkMac", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::CertificateRequestMessage.IsValidSigningKeyPop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crmf::CertificateRequestMessage::*)(::Org::BouncyCastle::Crypto::IVerifierFactoryProvider*)>(
    &::Org::BouncyCastle::Crmf::CertificateRequestMessage::IsValidSigningKeyPop)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x36d81f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::CertificateRequestMessage*>(),
                                                             { "IsValidSigningKeyPop", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IVerifierFactoryProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::CertificateRequestMessage.verifySignature
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crmf::CertificateRequestMessage::*)(
    ::Org::BouncyCastle::Crypto::IVerifierFactoryProvider*, ::Org::BouncyCastle::Asn1::Crmf::PopoSigningKey*)>(&::Org::BouncyCastle::Crmf::CertificateRequestMessage::verifySignature)> {
  constexpr static std::size_t size = 0x44c;
  constexpr static std::size_t addrs = 0x36d8360;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::Org::BouncyCastle::Crmf::CertificateRequestMessage*>(),
                         { "verifySignature", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IVerifierFactoryProvider*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Crmf::PopoSigningKey*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::CertificateRequestMessage.GetEncoded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crmf::CertificateRequestMessage::*)()>(
    &::Org::BouncyCastle::Crmf::CertificateRequestMessage::GetEncoded)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x36d8820;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::CertificateRequestMessage*>(), { "GetEncoded", {}, {} })));
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
  this->___certReqMsg = value;
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
  this->___controls = value;
}
inline void Org::BouncyCastle::Crmf::CertificateRequestMessage::setStaticF_popRaVerified(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "popRaVerified", ::Org::BouncyCastle::Crmf::CertificateRequestMessage*>(std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Crmf::CertificateRequestMessage::getStaticF_popRaVerified() {
  return ::cordl_internals::getStaticField<int32_t, "popRaVerified", ::Org::BouncyCastle::Crmf::CertificateRequestMessage*>();
}
inline void Org::BouncyCastle::Crmf::CertificateRequestMessage::setStaticF_popSigningKey(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "popSigningKey", ::Org::BouncyCastle::Crmf::CertificateRequestMessage*>(std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Crmf::CertificateRequestMessage::getStaticF_popSigningKey() {
  return ::cordl_internals::getStaticField<int32_t, "popSigningKey", ::Org::BouncyCastle::Crmf::CertificateRequestMessage*>();
}
inline void Org::BouncyCastle::Crmf::CertificateRequestMessage::setStaticF_popKeyEncipherment(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "popKeyEncipherment", ::Org::BouncyCastle::Crmf::CertificateRequestMessage*>(std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Crmf::CertificateRequestMessage::getStaticF_popKeyEncipherment() {
  return ::cordl_internals::getStaticField<int32_t, "popKeyEncipherment", ::Org::BouncyCastle::Crmf::CertificateRequestMessage*>();
}
inline void Org::BouncyCastle::Crmf::CertificateRequestMessage::setStaticF_popKeyAgreement(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "popKeyAgreement", ::Org::BouncyCastle::Crmf::CertificateRequestMessage*>(std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Crmf::CertificateRequestMessage::getStaticF_popKeyAgreement() {
  return ::cordl_internals::getStaticField<int32_t, "popKeyAgreement", ::Org::BouncyCastle::Crmf::CertificateRequestMessage*>();
}
inline ::Org::BouncyCastle::Asn1::Crmf::CertReqMsg* Org::BouncyCastle::Crmf::CertificateRequestMessage::ParseBytes(::ArrayW<uint8_t> encoding) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::CertificateRequestMessage*>(), { "ParseBytes", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Crmf::CertReqMsg*>(nullptr, ___internal_method, encoding);
}
inline void Org::BouncyCastle::Crmf::CertificateRequestMessage::_ctor(::ArrayW<uint8_t> encoded) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::CertificateRequestMessage*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, encoded);
}
inline void Org::BouncyCastle::Crmf::CertificateRequestMessage::_ctor(::Org::BouncyCastle::Asn1::Crmf::CertReqMsg* certReqMsg) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::CertificateRequestMessage*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Crmf::CertReqMsg*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, certReqMsg);
}
inline ::Org::BouncyCastle::Asn1::Crmf::CertReqMsg* Org::BouncyCastle::Crmf::CertificateRequestMessage::ToAsn1Structure() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::CertificateRequestMessage*>(), { "ToAsn1Structure", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Crmf::CertReqMsg*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Crmf::CertTemplate* Org::BouncyCastle::Crmf::CertificateRequestMessage::GetCertTemplate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::CertificateRequestMessage*>(), { "GetCertTemplate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Crmf::CertTemplate*>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Crmf::CertificateRequestMessage::get_HasControls() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::CertificateRequestMessage*>(), { "get_HasControls", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Crmf::CertificateRequestMessage::HasControl(::Org::BouncyCastle::Asn1::DerObjectIdentifier* objectIdentifier) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::CertificateRequestMessage*>(),
                                                                                         { "HasControl", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, objectIdentifier);
}
inline ::Org::BouncyCastle::Crmf::IControl* Org::BouncyCastle::Crmf::CertificateRequestMessage::GetControl(::Org::BouncyCastle::Asn1::DerObjectIdentifier* type) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::CertificateRequestMessage*>(),
                                                                                         { "GetControl", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crmf::IControl*>(this, ___internal_method, type);
}
inline ::Org::BouncyCastle::Asn1::Crmf::AttributeTypeAndValue* Org::BouncyCastle::Crmf::CertificateRequestMessage::FindControl(::Org::BouncyCastle::Asn1::DerObjectIdentifier* type) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::CertificateRequestMessage*>(),
                                                                                         { "FindControl", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Crmf::AttributeTypeAndValue*>(this, ___internal_method, type);
}
inline bool Org::BouncyCastle::Crmf::CertificateRequestMessage::get_HasProofOfPossession() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::CertificateRequestMessage*>(), { "get_HasProofOfPossession", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crmf::CertificateRequestMessage::get_ProofOfPossession() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::CertificateRequestMessage*>(), { "get_ProofOfPossession", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Crmf::CertificateRequestMessage::get_HasSigningKeyProofOfPossessionWithPkMac() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::CertificateRequestMessage*>(), { "get_HasSigningKeyProofOfPossessionWithPkMac", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Crmf::CertificateRequestMessage::IsValidSigningKeyPop(::Org::BouncyCastle::Crypto::IVerifierFactoryProvider* verifierProvider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::CertificateRequestMessage*>(),
                                                           { "IsValidSigningKeyPop", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IVerifierFactoryProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, verifierProvider);
}
inline bool Org::BouncyCastle::Crmf::CertificateRequestMessage::verifySignature(::Org::BouncyCastle::Crypto::IVerifierFactoryProvider* verifierFactoryProvider,
                                                                                ::Org::BouncyCastle::Asn1::Crmf::PopoSigningKey* signKey) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::Org::BouncyCastle::Crmf::CertificateRequestMessage*>(),
                       { "verifySignature", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IVerifierFactoryProvider*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Crmf::PopoSigningKey*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, verifierFactoryProvider, signKey);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crmf::CertificateRequestMessage::GetEncoded() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::CertificateRequestMessage*>(), { "GetEncoded", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crmf::CertificateRequestMessage* Org::BouncyCastle::Crmf::CertificateRequestMessage::New_ctor(::ArrayW<uint8_t> encoded) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crmf::CertificateRequestMessage*>(encoded));
}
inline ::Org::BouncyCastle::Crmf::CertificateRequestMessage* Org::BouncyCastle::Crmf::CertificateRequestMessage::New_ctor(::Org::BouncyCastle::Asn1::Crmf::CertReqMsg* certReqMsg) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crmf::CertificateRequestMessage*>(certReqMsg));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crmf::CertificateRequestMessage::CertificateRequestMessage() {}
