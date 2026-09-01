#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Tls\TlsNullCompression.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsNullCompression_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCompression_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsNullCompression.Compress
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::Org::BouncyCastle::Crypto::Tls::TlsNullCompression::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsNullCompression::Compress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3488df8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsNullCompression*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsNullCompression*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsNullCompression.Decompress
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::Org::BouncyCastle::Crypto::Tls::TlsNullCompression::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsNullCompression::Decompress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3488e00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsNullCompression*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsNullCompression*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsNullCompression._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsNullCompression::*)()>(&::Org::BouncyCastle::Crypto::Tls::TlsNullCompression::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3488e08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsNullCompression*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::IO::Stream* Org::BouncyCastle::Crypto::Tls::TlsNullCompression::Compress(::System::IO::Stream* output) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsNullCompression*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method, output);
}
inline ::System::IO::Stream* Org::BouncyCastle::Crypto::Tls::TlsNullCompression::Decompress(::System::IO::Stream* output) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsNullCompression*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method, output);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsNullCompression::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsNullCompression*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsNullCompression* Org::BouncyCastle::Crypto::Tls::TlsNullCompression::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::TlsNullCompression*>());
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsCompression"
constexpr Org::BouncyCastle::Crypto::Tls::TlsNullCompression::operator ::Org::BouncyCastle::Crypto::Tls::TlsCompression*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Tls::TlsCompression*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::Tls::TlsCompression"
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsCompression* Org::BouncyCastle::Crypto::Tls::TlsNullCompression::i___Org__BouncyCastle__Crypto__Tls__TlsCompression() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Tls::TlsCompression*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsNullCompression::TlsNullCompression() {}
