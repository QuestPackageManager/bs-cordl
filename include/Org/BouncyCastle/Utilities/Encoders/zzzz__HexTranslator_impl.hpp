#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Utilities/Encoders/HexTranslator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Utilities/Encoders/zzzz__HexTranslator_def.hpp"
#include "Org/BouncyCastle/Utilities/Encoders/zzzz__ITranslator_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Encoders::HexTranslator.GetEncodedBlockSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Utilities::Encoders::HexTranslator::*)()>(
    &::Org::BouncyCastle::Utilities::Encoders::HexTranslator::GetEncodedBlockSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x362c6f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::HexTranslator*>(), { "GetEncodedBlockSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Encoders::HexTranslator.Encode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Utilities::Encoders::HexTranslator::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Utilities::Encoders::HexTranslator::Encode)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x362c6fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::HexTranslator*>(),
            { "Encode", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Encoders::HexTranslator.GetDecodedBlockSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Utilities::Encoders::HexTranslator::*)()>(
    &::Org::BouncyCastle::Utilities::Encoders::HexTranslator::GetDecodedBlockSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x362c840;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::HexTranslator*>(), { "GetDecodedBlockSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Encoders::HexTranslator.Decode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Utilities::Encoders::HexTranslator::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Utilities::Encoders::HexTranslator::Decode)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x362c848;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::HexTranslator*>(),
            { "Decode", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Encoders::HexTranslator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Utilities::Encoders::HexTranslator::*)()>(&::Org::BouncyCastle::Utilities::Encoders::HexTranslator::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x362c9b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::HexTranslator*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Utilities::Encoders::HexTranslator::setStaticF_hexTable(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "hexTable", ::Org::BouncyCastle::Utilities::Encoders::HexTranslator*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Utilities::Encoders::HexTranslator::getStaticF_hexTable() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "hexTable", ::Org::BouncyCastle::Utilities::Encoders::HexTranslator*>();
}
inline int32_t Org::BouncyCastle::Utilities::Encoders::HexTranslator::GetEncodedBlockSize() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::HexTranslator*>(), { "GetEncodedBlockSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Utilities::Encoders::HexTranslator::Encode(::ArrayW<uint8_t> input, int32_t inOff, int32_t length, ::ArrayW<uint8_t> outBytes, int32_t outOff) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::HexTranslator*>(),
          { "Encode", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, input, inOff, length, outBytes, outOff);
}
inline int32_t Org::BouncyCastle::Utilities::Encoders::HexTranslator::GetDecodedBlockSize() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::HexTranslator*>(), { "GetDecodedBlockSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Utilities::Encoders::HexTranslator::Decode(::ArrayW<uint8_t> input, int32_t inOff, int32_t length, ::ArrayW<uint8_t> outBytes, int32_t outOff) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::HexTranslator*>(),
          { "Decode", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, input, inOff, length, outBytes, outOff);
}
inline void Org::BouncyCastle::Utilities::Encoders::HexTranslator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::HexTranslator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Utilities::Encoders::HexTranslator* Org::BouncyCastle::Utilities::Encoders::HexTranslator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Utilities::Encoders::HexTranslator*>());
}
/// @brief Convert operator to "::Org::BouncyCastle::Utilities::Encoders::ITranslator"
constexpr Org::BouncyCastle::Utilities::Encoders::HexTranslator::operator ::Org::BouncyCastle::Utilities::Encoders::ITranslator*() noexcept {
  return static_cast<::Org::BouncyCastle::Utilities::Encoders::ITranslator*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Utilities::Encoders::ITranslator"
constexpr ::Org::BouncyCastle::Utilities::Encoders::ITranslator* Org::BouncyCastle::Utilities::Encoders::HexTranslator::i___Org__BouncyCastle__Utilities__Encoders__ITranslator() noexcept {
  return static_cast<::Org::BouncyCastle::Utilities::Encoders::ITranslator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Utilities::Encoders::HexTranslator::HexTranslator() {}
