#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Utilities/Encoders/ITranslator.hpp"
#include "Org/BouncyCastle/Utilities/Encoders/zzzz__ITranslator_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Encoders::ITranslator.GetEncodedBlockSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Utilities::Encoders::ITranslator::*)()>(
    &::Org::BouncyCastle::Utilities::Encoders::ITranslator::GetEncodedBlockSize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::ITranslator*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::ITranslator*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Encoders::ITranslator.Encode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Utilities::Encoders::ITranslator::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Utilities::Encoders::ITranslator::Encode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::ITranslator*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::ITranslator*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Encoders::ITranslator.GetDecodedBlockSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Utilities::Encoders::ITranslator::*)()>(
    &::Org::BouncyCastle::Utilities::Encoders::ITranslator::GetDecodedBlockSize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::ITranslator*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::ITranslator*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Encoders::ITranslator.Decode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Utilities::Encoders::ITranslator::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Utilities::Encoders::ITranslator::Decode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::ITranslator*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::ITranslator*>(), 3 }));
    return ___internal_method;
  }
};
inline int32_t Org::BouncyCastle::Utilities::Encoders::ITranslator::GetEncodedBlockSize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::ITranslator*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Utilities::Encoders::ITranslator::Encode(::ArrayW<uint8_t> input, int32_t inOff, int32_t length, ::ArrayW<uint8_t> outBytes, int32_t outOff) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::ITranslator*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, input, inOff, length, outBytes, outOff);
}
inline int32_t Org::BouncyCastle::Utilities::Encoders::ITranslator::GetDecodedBlockSize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::ITranslator*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Utilities::Encoders::ITranslator::Decode(::ArrayW<uint8_t> input, int32_t inOff, int32_t length, ::ArrayW<uint8_t> outBytes, int32_t outOff) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::ITranslator*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, input, inOff, length, outBytes, outOff);
}
