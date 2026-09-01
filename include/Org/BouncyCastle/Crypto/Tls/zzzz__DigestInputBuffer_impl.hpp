#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Tls\DigestInputBuffer.hpp"
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseOutputStream_impl.hpp"
#include "System/IO/zzzz__MemoryStream_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DigestInputBuffer_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DigestInputBuffer_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DigestInputBuffer_DigStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DigestInputBuffer_DigStream::*)(::Org::BouncyCastle::Crypto::IDigest*)>(
    &::Org::BouncyCastle::Crypto::Tls::DigestInputBuffer_DigStream::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x34432a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DigestInputBuffer_DigStream*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DigestInputBuffer_DigStream.WriteByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DigestInputBuffer_DigStream::*)(uint8_t)>(
    &::Org::BouncyCastle::Crypto::Tls::DigestInputBuffer_DigStream::WriteByte)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x34432cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DigestInputBuffer_DigStream*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DigestInputBuffer_DigStream*>(), 40 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DigestInputBuffer_DigStream.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DigestInputBuffer_DigStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Tls::DigestInputBuffer_DigStream::Write)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x3443384;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DigestInputBuffer_DigStream*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DigestInputBuffer_DigStream*>(), 38 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::IDigest*& Org::BouncyCastle::Crypto::Tls::DigestInputBuffer_DigStream::__cordl_internal_get_d() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___d;
}
constexpr ::Org::BouncyCastle::Crypto::IDigest* const& Org::BouncyCastle::Crypto::Tls::DigestInputBuffer_DigStream::__cordl_internal_get_d() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___d;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DigestInputBuffer_DigStream::__cordl_internal_set_d(::Org::BouncyCastle::Crypto::IDigest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___d = value;
}
inline void Org::BouncyCastle::Crypto::Tls::DigestInputBuffer_DigStream::_ctor(::Org::BouncyCastle::Crypto::IDigest* d) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DigestInputBuffer_DigStream*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, d);
}
inline void Org::BouncyCastle::Crypto::Tls::DigestInputBuffer_DigStream::WriteByte(uint8_t b) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DigestInputBuffer_DigStream*>(), 40 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, b);
}
inline void Org::BouncyCastle::Crypto::Tls::DigestInputBuffer_DigStream::Write(::ArrayW<uint8_t> buf, int32_t off, int32_t len) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DigestInputBuffer_DigStream*>(), 38 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buf, off, len);
}
inline ::Org::BouncyCastle::Crypto::Tls::DigestInputBuffer_DigStream* Org::BouncyCastle::Crypto::Tls::DigestInputBuffer_DigStream::New_ctor(::Org::BouncyCastle::Crypto::IDigest* d) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::DigestInputBuffer_DigStream*>(d));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::DigestInputBuffer_DigStream::DigestInputBuffer_DigStream() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DigestInputBuffer.UpdateDigest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DigestInputBuffer::*)(::Org::BouncyCastle::Crypto::IDigest*)>(
    &::Org::BouncyCastle::Crypto::Tls::DigestInputBuffer::UpdateDigest)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x34418cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DigestInputBuffer*>(),
                                                                                           { "UpdateDigest", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DigestInputBuffer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DigestInputBuffer::*)()>(&::Org::BouncyCastle::Crypto::Tls::DigestInputBuffer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3441610;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DigestInputBuffer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::Tls::DigestInputBuffer::UpdateDigest(::Org::BouncyCastle::Crypto::IDigest* d) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DigestInputBuffer*>(), { "UpdateDigest", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, d);
}
inline void Org::BouncyCastle::Crypto::Tls::DigestInputBuffer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DigestInputBuffer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::DigestInputBuffer* Org::BouncyCastle::Crypto::Tls::DigestInputBuffer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::DigestInputBuffer*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::DigestInputBuffer::DigestInputBuffer() {}
