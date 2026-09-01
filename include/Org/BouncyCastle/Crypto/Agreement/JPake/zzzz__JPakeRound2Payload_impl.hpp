#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Agreement\JPake\JPakeRound2Payload.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Agreement/JPake/zzzz__JPakeRound2Payload_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload::*)(
    ::StringW, ::Org::BouncyCastle::Math::BigInteger*, ::ArrayW<::Org::BouncyCastle::Math::BigInteger*>)>(&::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload::_ctor)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x36ddfb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload*>(),
            { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Math::BigInteger*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload.get_ParticipantId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload::*)()>(
    &::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload::get_ParticipantId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36df5e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload.get_A
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload::*)()>(
    &::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload::get_A)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36df5f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload.get_KnowledgeProofForX2s
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::Math::BigInteger*> (::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload::*)()>(
    &::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload::get_KnowledgeProofForX2s)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x36df5f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload*>(), 6 }));
    return ___internal_method;
  }
};
constexpr ::StringW& Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload::__cordl_internal_get_participantId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___participantId;
}
constexpr ::StringW const& Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload::__cordl_internal_get_participantId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___participantId;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload::__cordl_internal_set_participantId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___participantId = value;
}
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload::__cordl_internal_get_a() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___a;
}
constexpr ::Org::BouncyCastle::Math::BigInteger* const& Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload::__cordl_internal_get_a() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___a;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload::__cordl_internal_set_a(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___a = value;
}
constexpr ::ArrayW<::Org::BouncyCastle::Math::BigInteger*>& Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload::__cordl_internal_get_knowledgeProofForX2s() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___knowledgeProofForX2s;
}
constexpr ::ArrayW<::Org::BouncyCastle::Math::BigInteger*> const& Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload::__cordl_internal_get_knowledgeProofForX2s() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___knowledgeProofForX2s;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload::__cordl_internal_set_knowledgeProofForX2s(::ArrayW<::Org::BouncyCastle::Math::BigInteger*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___knowledgeProofForX2s = value;
}
inline void Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload::_ctor(::StringW participantId, ::Org::BouncyCastle::Math::BigInteger* a,
                                                                                   ::ArrayW<::Org::BouncyCastle::Math::BigInteger*> knowledgeProofForX2s) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload*>(),
          { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Math::BigInteger*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, participantId, a, knowledgeProofForX2s);
}
inline ::StringW Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload::get_ParticipantId() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload::get_A() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline ::ArrayW<::Org::BouncyCastle::Math::BigInteger*> Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload::get_KnowledgeProofForX2s() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Math::BigInteger*>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload*
Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload::New_ctor(::StringW participantId, ::Org::BouncyCastle::Math::BigInteger* a,
                                                                          ::ArrayW<::Org::BouncyCastle::Math::BigInteger*> knowledgeProofForX2s) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload*>(participantId, a, knowledgeProofForX2s));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload::JPakeRound2Payload() {}
