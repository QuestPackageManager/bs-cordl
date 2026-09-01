#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\IKeyUnwrapper.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IKeyUnwrapper_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBlockResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::IKeyUnwrapper.get_AlgorithmDetails
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Org::BouncyCastle::Crypto::IKeyUnwrapper::*)()>(&::Org::BouncyCastle::Crypto::IKeyUnwrapper::get_AlgorithmDetails)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::IKeyUnwrapper*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::IKeyUnwrapper*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::IKeyUnwrapper.Unwrap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::IBlockResult* (::Org::BouncyCastle::Crypto::IKeyUnwrapper::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::IKeyUnwrapper::Unwrap)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::IKeyUnwrapper*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::IKeyUnwrapper*>(), 1 }));
    return ___internal_method;
  }
};
inline ::System::Object* Org::BouncyCastle::Crypto::IKeyUnwrapper::get_AlgorithmDetails() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::IKeyUnwrapper*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::IBlockResult* Org::BouncyCastle::Crypto::IKeyUnwrapper::Unwrap(::ArrayW<uint8_t> cipherText, int32_t offset, int32_t length) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::IKeyUnwrapper*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IBlockResult*>(this, ___internal_method, cipherText, offset, length);
}
