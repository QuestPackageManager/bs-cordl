#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Utilities/Encoders/BufferedDecoder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Utilities/Encoders/zzzz__BufferedDecoder_def.hpp"
#include "Org/BouncyCastle/Utilities/Encoders/zzzz__ITranslator_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Encoders::BufferedDecoder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Utilities::Encoders::BufferedDecoder::*)(::Org::BouncyCastle::Utilities::Encoders::ITranslator*, int32_t)>(
    &::Org::BouncyCastle::Utilities::Encoders::BufferedDecoder::_ctor)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x362aa6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::BufferedDecoder*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Encoders::ITranslator*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Encoders::BufferedDecoder.ProcessByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Utilities::Encoders::BufferedDecoder::*)(uint8_t, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Utilities::Encoders::BufferedDecoder::ProcessByte)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x362aba0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::BufferedDecoder*>(),
                                                             { "ProcessByte", {}, { ::i2c::type_of<uint8_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Encoders::BufferedDecoder.ProcessBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Utilities::Encoders::BufferedDecoder::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Utilities::Encoders::BufferedDecoder::ProcessBytes)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x362accc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::BufferedDecoder*>(),
            { "ProcessBytes", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Utilities::Encoders::BufferedDecoder::__cordl_internal_get_buffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buffer;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Utilities::Encoders::BufferedDecoder::__cordl_internal_get_buffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buffer;
}
constexpr void Org::BouncyCastle::Utilities::Encoders::BufferedDecoder::__cordl_internal_set_buffer(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___buffer = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Encoders::BufferedDecoder::__cordl_internal_get_bufOff() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bufOff;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Encoders::BufferedDecoder::__cordl_internal_get_bufOff() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bufOff;
}
constexpr void Org::BouncyCastle::Utilities::Encoders::BufferedDecoder::__cordl_internal_set_bufOff(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bufOff = value;
}
constexpr ::Org::BouncyCastle::Utilities::Encoders::ITranslator*& Org::BouncyCastle::Utilities::Encoders::BufferedDecoder::__cordl_internal_get_translator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___translator;
}
constexpr ::Org::BouncyCastle::Utilities::Encoders::ITranslator* const& Org::BouncyCastle::Utilities::Encoders::BufferedDecoder::__cordl_internal_get_translator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___translator;
}
constexpr void Org::BouncyCastle::Utilities::Encoders::BufferedDecoder::__cordl_internal_set_translator(::Org::BouncyCastle::Utilities::Encoders::ITranslator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___translator = value;
}
inline void Org::BouncyCastle::Utilities::Encoders::BufferedDecoder::_ctor(::Org::BouncyCastle::Utilities::Encoders::ITranslator* translator, int32_t bufferSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::BufferedDecoder*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Encoders::ITranslator*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, translator, bufferSize);
}
inline int32_t Org::BouncyCastle::Utilities::Encoders::BufferedDecoder::ProcessByte(uint8_t input, ::ArrayW<uint8_t> output, int32_t outOff) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::BufferedDecoder*>(),
                                                           { "ProcessByte", {}, { ::i2c::type_of<uint8_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, input, output, outOff);
}
inline int32_t Org::BouncyCastle::Utilities::Encoders::BufferedDecoder::ProcessBytes(::ArrayW<uint8_t> input, int32_t inOff, int32_t len, ::ArrayW<uint8_t> outBytes, int32_t outOff) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::BufferedDecoder*>(),
          { "ProcessBytes", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, input, inOff, len, outBytes, outOff);
}
inline ::Org::BouncyCastle::Utilities::Encoders::BufferedDecoder* Org::BouncyCastle::Utilities::Encoders::BufferedDecoder::New_ctor(::Org::BouncyCastle::Utilities::Encoders::ITranslator* translator,
                                                                                                                                    int32_t bufferSize) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Utilities::Encoders::BufferedDecoder*>(translator, bufferSize));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Utilities::Encoders::BufferedDecoder::BufferedDecoder() {}
