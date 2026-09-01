#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\ICipherBuilder.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherBuilder_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipher_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::ICipherBuilder.get_AlgorithmDetails
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Org::BouncyCastle::Crypto::ICipherBuilder::*)()>(&::Org::BouncyCastle::Crypto::ICipherBuilder::get_AlgorithmDetails)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::ICipherBuilder*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::ICipherBuilder*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::ICipherBuilder.GetMaxOutputSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::ICipherBuilder::*)(int32_t)>(&::Org::BouncyCastle::Crypto::ICipherBuilder::GetMaxOutputSize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::ICipherBuilder*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::ICipherBuilder*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::ICipherBuilder.BuildCipher
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::ICipher* (::Org::BouncyCastle::Crypto::ICipherBuilder::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Crypto::ICipherBuilder::BuildCipher)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::ICipherBuilder*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::ICipherBuilder*>(), 2 }));
    return ___internal_method;
  }
};
inline ::System::Object* Org::BouncyCastle::Crypto::ICipherBuilder::get_AlgorithmDetails() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::ICipherBuilder*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::ICipherBuilder::GetMaxOutputSize(int32_t inputLen) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::ICipherBuilder*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, inputLen);
}
inline ::Org::BouncyCastle::Crypto::ICipher* Org::BouncyCastle::Crypto::ICipherBuilder::BuildCipher(::System::IO::Stream* stream) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::ICipherBuilder*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::ICipher*>(this, ___internal_method, stream);
}
