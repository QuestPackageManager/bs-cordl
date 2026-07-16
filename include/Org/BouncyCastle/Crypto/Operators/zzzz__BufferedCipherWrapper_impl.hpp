#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Operators/BufferedCipherWrapper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Operators/zzzz__BufferedCipherWrapper_def.hpp"
#include "Org/BouncyCastle/Crypto/IO/zzzz__CipherStream_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBufferedCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipher_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper::*)(::Org::BouncyCastle::Crypto::IBufferedCipher*, ::System::IO::Stream*)>(
    &::Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x34037ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IBufferedCipher*>(), ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper.GetMaxOutputSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper::*)(int32_t)>(
    &::Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper::GetMaxOutputSize)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x3403870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper*>(), { "GetMaxOutputSize", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper.GetUpdateOutputSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper::*)(int32_t)>(
    &::Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper::GetUpdateOutputSize)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x3403928;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper*>(), { "GetUpdateOutputSize", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper.get_Stream
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper::*)()>(
    &::Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper::get_Stream)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34039e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper*>(), { "get_Stream", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::IBufferedCipher*& Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper::__cordl_internal_get_bufferedCipher() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bufferedCipher;
}
constexpr ::Org::BouncyCastle::Crypto::IBufferedCipher* const& Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper::__cordl_internal_get_bufferedCipher() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bufferedCipher;
}
constexpr void Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper::__cordl_internal_set_bufferedCipher(::Org::BouncyCastle::Crypto::IBufferedCipher* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bufferedCipher = value;
}
constexpr ::Org::BouncyCastle::Crypto::IO::CipherStream*& Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper::__cordl_internal_get_stream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stream;
}
constexpr ::Org::BouncyCastle::Crypto::IO::CipherStream* const& Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper::__cordl_internal_get_stream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stream;
}
constexpr void Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper::__cordl_internal_set_stream(::Org::BouncyCastle::Crypto::IO::CipherStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___stream = value;
}
inline void Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper::_ctor(::Org::BouncyCastle::Crypto::IBufferedCipher* bufferedCipher, ::System::IO::Stream* source) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IBufferedCipher*>(), ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bufferedCipher, source);
}
inline int32_t Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper::GetMaxOutputSize(int32_t inputLen) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper*>(), { "GetMaxOutputSize", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, inputLen);
}
inline int32_t Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper::GetUpdateOutputSize(int32_t inputLen) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper*>(), { "GetUpdateOutputSize", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, inputLen);
}
inline ::System::IO::Stream* Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper::get_Stream() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper*>(), { "get_Stream", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper*
Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper::New_ctor(::Org::BouncyCastle::Crypto::IBufferedCipher* bufferedCipher, ::System::IO::Stream* source) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper*>(bufferedCipher, source));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::ICipher"
constexpr Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper::operator ::Org::BouncyCastle::Crypto::ICipher*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::ICipher*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::ICipher"
constexpr ::Org::BouncyCastle::Crypto::ICipher* Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper::i___Org__BouncyCastle__Crypto__ICipher() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::ICipher*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper::BufferedCipherWrapper() {}
