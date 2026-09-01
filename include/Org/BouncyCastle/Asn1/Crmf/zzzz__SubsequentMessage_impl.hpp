#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\Crmf\SubsequentMessage.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerInteger_impl.hpp"
#include "Org/BouncyCastle/Asn1/Crmf/zzzz__SubsequentMessage_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::SubsequentMessage._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Crmf::SubsequentMessage::*)(int32_t)>(&::Org::BouncyCastle::Asn1::Crmf::SubsequentMessage::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x336a360;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::SubsequentMessage*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::SubsequentMessage.ValueOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Crmf::SubsequentMessage* (*)(int32_t)>(&::Org::BouncyCastle::Asn1::Crmf::SubsequentMessage::ValueOf)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x3368b44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::SubsequentMessage*>(), { "ValueOf", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::Crmf::SubsequentMessage::setStaticF_encrCert(::Org::BouncyCastle::Asn1::Crmf::SubsequentMessage* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::Crmf::SubsequentMessage*, "encrCert", ::Org::BouncyCastle::Asn1::Crmf::SubsequentMessage*>(
      std::forward<::Org::BouncyCastle::Asn1::Crmf::SubsequentMessage*>(value));
}
inline ::Org::BouncyCastle::Asn1::Crmf::SubsequentMessage* Org::BouncyCastle::Asn1::Crmf::SubsequentMessage::getStaticF_encrCert() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::Crmf::SubsequentMessage*, "encrCert", ::Org::BouncyCastle::Asn1::Crmf::SubsequentMessage*>();
}
inline void Org::BouncyCastle::Asn1::Crmf::SubsequentMessage::setStaticF_challengeResp(::Org::BouncyCastle::Asn1::Crmf::SubsequentMessage* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::Crmf::SubsequentMessage*, "challengeResp", ::Org::BouncyCastle::Asn1::Crmf::SubsequentMessage*>(
      std::forward<::Org::BouncyCastle::Asn1::Crmf::SubsequentMessage*>(value));
}
inline ::Org::BouncyCastle::Asn1::Crmf::SubsequentMessage* Org::BouncyCastle::Asn1::Crmf::SubsequentMessage::getStaticF_challengeResp() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::Crmf::SubsequentMessage*, "challengeResp", ::Org::BouncyCastle::Asn1::Crmf::SubsequentMessage*>();
}
inline void Org::BouncyCastle::Asn1::Crmf::SubsequentMessage::_ctor(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::SubsequentMessage*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Org::BouncyCastle::Asn1::Crmf::SubsequentMessage* Org::BouncyCastle::Asn1::Crmf::SubsequentMessage::ValueOf(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::SubsequentMessage*>(), { "ValueOf", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Crmf::SubsequentMessage*>(nullptr, ___internal_method, value);
}
inline ::Org::BouncyCastle::Asn1::Crmf::SubsequentMessage* Org::BouncyCastle::Asn1::Crmf::SubsequentMessage::New_ctor(int32_t value) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Crmf::SubsequentMessage*>(value));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Crmf::SubsequentMessage::SubsequentMessage() {}
