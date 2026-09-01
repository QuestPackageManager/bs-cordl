#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\ICipher.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipher_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::ICipher.GetMaxOutputSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::ICipher::*)(int32_t)>(&::Org::BouncyCastle::Crypto::ICipher::GetMaxOutputSize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::ICipher*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::ICipher*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::ICipher.GetUpdateOutputSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::ICipher::*)(int32_t)>(&::Org::BouncyCastle::Crypto::ICipher::GetUpdateOutputSize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::ICipher*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::ICipher*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::ICipher.get_Stream
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::Org::BouncyCastle::Crypto::ICipher::*)()>(&::Org::BouncyCastle::Crypto::ICipher::get_Stream)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::ICipher*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::ICipher*>(), 2 }));
    return ___internal_method;
  }
};
inline int32_t Org::BouncyCastle::Crypto::ICipher::GetMaxOutputSize(int32_t inputLen) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::ICipher*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, inputLen);
}
inline int32_t Org::BouncyCastle::Crypto::ICipher::GetUpdateOutputSize(int32_t inputLen) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::ICipher*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, inputLen);
}
inline ::System::IO::Stream* Org::BouncyCastle::Crypto::ICipher::get_Stream() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::ICipher*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method);
}
