#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/TlsDeflateCompression.hpp"
#include "Org/BouncyCastle/Utilities/Zlib/zzzz__ZOutputStream_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsDeflateCompression_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCompression_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsDeflateCompression_def.hpp"
#include "Org/BouncyCastle/Utilities/Zlib/zzzz__ZStream_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression_DeflateOutputStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression_DeflateOutputStream::*)(
    ::System::IO::Stream*, ::Org::BouncyCastle::Utilities::Zlib::ZStream*, bool)>(&::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression_DeflateOutputStream::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x347a5e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression_DeflateOutputStream*>(),
                                         { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::Org::BouncyCastle::Utilities::Zlib::ZStream*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression_DeflateOutputStream.Flush
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression_DeflateOutputStream::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression_DeflateOutputStream::Flush)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x347a7d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression_DeflateOutputStream*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression_DeflateOutputStream*>(), 23 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression_DeflateOutputStream::_ctor(::System::IO::Stream* output, ::Org::BouncyCastle::Utilities::Zlib::ZStream* z, bool compress) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression_DeflateOutputStream*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::Org::BouncyCastle::Utilities::Zlib::ZStream*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, output, z, compress);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression_DeflateOutputStream::Flush() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression_DeflateOutputStream*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression_DeflateOutputStream*
Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression_DeflateOutputStream::New_ctor(::System::IO::Stream* output, ::Org::BouncyCastle::Utilities::Zlib::ZStream* z, bool compress) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression_DeflateOutputStream*>(output, z, compress));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression_DeflateOutputStream::TlsDeflateCompression_DeflateOutputStream() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression::*)()>(&::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x347a49c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression::*)(int32_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x347a4a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression.Compress
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression::Compress)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x347a550;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression.Decompress
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression::Decompress)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x347a618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression*>(), 7 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Utilities::Zlib::ZStream*& Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression::__cordl_internal_get_zIn() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___zIn;
}
constexpr ::Org::BouncyCastle::Utilities::Zlib::ZStream* const& Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression::__cordl_internal_get_zIn() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___zIn;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression::__cordl_internal_set_zIn(::Org::BouncyCastle::Utilities::Zlib::ZStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___zIn = value;
}
constexpr ::Org::BouncyCastle::Utilities::Zlib::ZStream*& Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression::__cordl_internal_get_zOut() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___zOut;
}
constexpr ::Org::BouncyCastle::Utilities::Zlib::ZStream* const& Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression::__cordl_internal_get_zOut() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___zOut;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression::__cordl_internal_set_zOut(::Org::BouncyCastle::Utilities::Zlib::ZStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___zOut = value;
}
inline void Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression::_ctor(int32_t level) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, level);
}
inline ::System::IO::Stream* Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression::Compress(::System::IO::Stream* output) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method, output);
}
inline ::System::IO::Stream* Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression::Decompress(::System::IO::Stream* output) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method, output);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression* Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression*>());
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression* Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression::New_ctor(int32_t level) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression*>(level));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsCompression"
constexpr Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression::operator ::Org::BouncyCastle::Crypto::Tls::TlsCompression*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Tls::TlsCompression*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::Tls::TlsCompression"
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsCompression* Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression::i___Org__BouncyCastle__Crypto__Tls__TlsCompression() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Tls::TlsCompression*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression::TlsDeflateCompression() {}
