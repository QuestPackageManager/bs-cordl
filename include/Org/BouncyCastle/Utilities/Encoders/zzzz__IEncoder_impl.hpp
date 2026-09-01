#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Utilities\Encoders\IEncoder.hpp"
#include "Org/BouncyCastle/Utilities/Encoders/zzzz__IEncoder_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Encoders::IEncoder.Encode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Utilities::Encoders::IEncoder::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::IO::Stream*)>(
    &::Org::BouncyCastle::Utilities::Encoders::IEncoder::Encode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::IEncoder*>(), { ::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::IEncoder*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Encoders::IEncoder.Decode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Utilities::Encoders::IEncoder::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::IO::Stream*)>(
    &::Org::BouncyCastle::Utilities::Encoders::IEncoder::Decode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::IEncoder*>(), { ::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::IEncoder*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Encoders::IEncoder.DecodeString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Utilities::Encoders::IEncoder::*)(::StringW, ::System::IO::Stream*)>(
    &::Org::BouncyCastle::Utilities::Encoders::IEncoder::DecodeString)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::IEncoder*>(), { ::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::IEncoder*>(), 2 }));
    return ___internal_method;
  }
};
inline int32_t Org::BouncyCastle::Utilities::Encoders::IEncoder::Encode(::ArrayW<uint8_t> data, int32_t off, int32_t length, ::System::IO::Stream* outStream) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::IEncoder*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, data, off, length, outStream);
}
inline int32_t Org::BouncyCastle::Utilities::Encoders::IEncoder::Decode(::ArrayW<uint8_t> data, int32_t off, int32_t length, ::System::IO::Stream* outStream) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::IEncoder*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, data, off, length, outStream);
}
inline int32_t Org::BouncyCastle::Utilities::Encoders::IEncoder::DecodeString(::StringW data, ::System::IO::Stream* outStream) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::IEncoder*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, data, outStream);
}
