#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/HeartbeatMessage.hpp"
#include "System/IO/zzzz__MemoryStream_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__HeartbeatMessage_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__HeartbeatMessage_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsContext_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage_PayloadBuffer.ToTruncatedByteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage_PayloadBuffer::*)(int32_t)>(
    &::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage_PayloadBuffer::ToTruncatedByteArray)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x3469a50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage_PayloadBuffer*>(), { "ToTruncatedByteArray", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage_PayloadBuffer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage_PayloadBuffer::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage_PayloadBuffer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3469a48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage_PayloadBuffer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::HeartbeatMessage_PayloadBuffer::ToTruncatedByteArray(int32_t payloadLength) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage_PayloadBuffer*>(), { "ToTruncatedByteArray", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, payloadLength);
}
inline void Org::BouncyCastle::Crypto::Tls::HeartbeatMessage_PayloadBuffer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage_PayloadBuffer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage_PayloadBuffer* Org::BouncyCastle::Crypto::Tls::HeartbeatMessage_PayloadBuffer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage_PayloadBuffer*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage_PayloadBuffer::HeartbeatMessage_PayloadBuffer() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage::*)(uint8_t, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x346955c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<uint8_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage.Encode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage::*)(::Org::BouncyCastle::Crypto::Tls::TlsContext*, ::System::IO::Stream*)>(
    &::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage::Encode)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x3469674;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage.Parse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage* (*)(::System::IO::Stream*)>(&::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage::Parse)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x3469888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage*>(), { "Parse", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
constexpr uint8_t& Org::BouncyCastle::Crypto::Tls::HeartbeatMessage::__cordl_internal_get_mType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mType;
}
constexpr uint8_t const& Org::BouncyCastle::Crypto::Tls::HeartbeatMessage::__cordl_internal_get_mType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mType;
}
constexpr void Org::BouncyCastle::Crypto::Tls::HeartbeatMessage::__cordl_internal_set_mType(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mType = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Tls::HeartbeatMessage::__cordl_internal_get_mPayload() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPayload;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Tls::HeartbeatMessage::__cordl_internal_get_mPayload() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPayload;
}
constexpr void Org::BouncyCastle::Crypto::Tls::HeartbeatMessage::__cordl_internal_set_mPayload(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mPayload = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Tls::HeartbeatMessage::__cordl_internal_get_mPaddingLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPaddingLength;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Tls::HeartbeatMessage::__cordl_internal_get_mPaddingLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPaddingLength;
}
constexpr void Org::BouncyCastle::Crypto::Tls::HeartbeatMessage::__cordl_internal_set_mPaddingLength(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mPaddingLength = value;
}
inline void Org::BouncyCastle::Crypto::Tls::HeartbeatMessage::_ctor(uint8_t type, ::ArrayW<uint8_t> payload, int32_t paddingLength) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<uint8_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, payload, paddingLength);
}
inline void Org::BouncyCastle::Crypto::Tls::HeartbeatMessage::Encode(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, ::System::IO::Stream* output) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, output);
}
inline ::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage* Org::BouncyCastle::Crypto::Tls::HeartbeatMessage::Parse(::System::IO::Stream* input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage*>(), { "Parse", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage*>(nullptr, ___internal_method, input);
}
inline ::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage* Org::BouncyCastle::Crypto::Tls::HeartbeatMessage::New_ctor(uint8_t type, ::ArrayW<uint8_t> payload, int32_t paddingLength) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage*>(type, payload, paddingLength));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage::HeartbeatMessage() {}
