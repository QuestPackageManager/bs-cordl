#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Agreement\JPake\JPakeRound3Payload.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Agreement/JPake/zzzz__JPakeRound3Payload_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound3Payload._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound3Payload::*)(::StringW, ::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound3Payload::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36deb18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound3Payload*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound3Payload.get_ParticipantId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound3Payload::*)()>(
    &::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound3Payload::get_ParticipantId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36df678;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound3Payload*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound3Payload*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound3Payload.get_MacTag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound3Payload::*)()>(
    &::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound3Payload::get_MacTag)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36df680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound3Payload*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound3Payload*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::StringW& Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound3Payload::__cordl_internal_get_participantId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___participantId;
}
constexpr ::StringW const& Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound3Payload::__cordl_internal_get_participantId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___participantId;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound3Payload::__cordl_internal_set_participantId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___participantId = value;
}
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound3Payload::__cordl_internal_get_macTag() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___macTag;
}
constexpr ::Org::BouncyCastle::Math::BigInteger* const& Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound3Payload::__cordl_internal_get_macTag() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___macTag;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound3Payload::__cordl_internal_set_macTag(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___macTag = value;
}
inline void Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound3Payload::_ctor(::StringW participantId, ::Org::BouncyCastle::Math::BigInteger* magTag) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound3Payload*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, participantId, magTag);
}
inline ::StringW Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound3Payload::get_ParticipantId() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound3Payload*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound3Payload::get_MacTag() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound3Payload*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound3Payload* Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound3Payload::New_ctor(::StringW participantId,
                                                                                                                                                    ::Org::BouncyCastle::Math::BigInteger* magTag) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound3Payload*>(participantId, magTag));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound3Payload::JPakeRound3Payload() {}
