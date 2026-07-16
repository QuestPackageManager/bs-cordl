#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Utilities/Encoders/Base64Encoder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Utilities/Encoders/zzzz__Base64Encoder_def.hpp"
#include "Org/BouncyCastle/Utilities/Encoders/zzzz__IEncoder_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Encoders::Base64Encoder.InitialiseDecodingTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Utilities::Encoders::Base64Encoder::*)()>(
    &::Org::BouncyCastle::Utilities::Encoders::Base64Encoder::InitialiseDecodingTable)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x36298f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::Base64Encoder*>(), { "InitialiseDecodingTable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Encoders::Base64Encoder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Utilities::Encoders::Base64Encoder::*)()>(&::Org::BouncyCastle::Utilities::Encoders::Base64Encoder::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x36299b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::Base64Encoder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Encoders::Base64Encoder.Encode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Utilities::Encoders::Base64Encoder::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Utilities::Encoders::Base64Encoder::Encode)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x3629a4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::Base64Encoder*>(),
            { "Encode", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Encoders::Base64Encoder.Encode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Utilities::Encoders::Base64Encoder::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::IO::Stream*)>(
    &::Org::BouncyCastle::Utilities::Encoders::Base64Encoder::Encode)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x3629dc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::Base64Encoder*>(),
                                         { "Encode", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Encoders::Base64Encoder.ignore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Utilities::Encoders::Base64Encoder::*)(char16_t)>(&::Org::BouncyCastle::Utilities::Encoders::Base64Encoder::ignore)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3629eec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::Base64Encoder*>(), { "ignore", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Encoders::Base64Encoder.Decode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Utilities::Encoders::Base64Encoder::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::IO::Stream*)>(
    &::Org::BouncyCastle::Utilities::Encoders::Base64Encoder::Decode)> {
  constexpr static std::size_t size = 0x3f8;
  constexpr static std::size_t addrs = 0x3629f0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::Base64Encoder*>(),
                                         { "Decode", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Encoders::Base64Encoder.nextI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Utilities::Encoders::Base64Encoder::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Utilities::Encoders::Base64Encoder::nextI)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x362a304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::Base64Encoder*>(),
                                                             { "nextI", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Encoders::Base64Encoder.DecodeString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Utilities::Encoders::Base64Encoder::*)(::StringW, ::System::IO::Stream*)>(
    &::Org::BouncyCastle::Utilities::Encoders::Base64Encoder::DecodeString)> {
  constexpr static std::size_t size = 0x478;
  constexpr static std::size_t addrs = 0x362a584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::Base64Encoder*>(),
                                                                                           { "DecodeString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Encoders::Base64Encoder.decodeLastBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Utilities::Encoders::Base64Encoder::*)(::System::IO::Stream*, char16_t, char16_t, char16_t, char16_t)>(
    &::Org::BouncyCastle::Utilities::Encoders::Base64Encoder::decodeLastBlock)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x362a37c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::Base64Encoder*>(),
            { "decodeLastBlock", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Encoders::Base64Encoder.nextI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Utilities::Encoders::Base64Encoder::*)(::StringW, int32_t, int32_t)>(
    &::Org::BouncyCastle::Utilities::Encoders::Base64Encoder::nextI)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x362a9fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::Base64Encoder*>(),
                                                                                           { "nextI", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Utilities::Encoders::Base64Encoder::__cordl_internal_get_encodingTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encodingTable;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Utilities::Encoders::Base64Encoder::__cordl_internal_get_encodingTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encodingTable;
}
constexpr void Org::BouncyCastle::Utilities::Encoders::Base64Encoder::__cordl_internal_set_encodingTable(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___encodingTable = value;
}
constexpr uint8_t& Org::BouncyCastle::Utilities::Encoders::Base64Encoder::__cordl_internal_get_padding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___padding;
}
constexpr uint8_t const& Org::BouncyCastle::Utilities::Encoders::Base64Encoder::__cordl_internal_get_padding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___padding;
}
constexpr void Org::BouncyCastle::Utilities::Encoders::Base64Encoder::__cordl_internal_set_padding(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___padding = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Utilities::Encoders::Base64Encoder::__cordl_internal_get_decodingTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___decodingTable;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Utilities::Encoders::Base64Encoder::__cordl_internal_get_decodingTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___decodingTable;
}
constexpr void Org::BouncyCastle::Utilities::Encoders::Base64Encoder::__cordl_internal_set_decodingTable(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___decodingTable = value;
}
inline void Org::BouncyCastle::Utilities::Encoders::Base64Encoder::InitialiseDecodingTable() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::Base64Encoder*>(), { "InitialiseDecodingTable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Utilities::Encoders::Base64Encoder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::Base64Encoder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Utilities::Encoders::Base64Encoder::Encode(::ArrayW<uint8_t> inBuf, int32_t inOff, int32_t inLen, ::ArrayW<uint8_t> outBuf, int32_t outOff) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::Base64Encoder*>(),
          { "Encode", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, inBuf, inOff, inLen, outBuf, outOff);
}
inline int32_t Org::BouncyCastle::Utilities::Encoders::Base64Encoder::Encode(::ArrayW<uint8_t> buf, int32_t off, int32_t len, ::System::IO::Stream* outStream) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::Base64Encoder*>(),
                                       { "Encode", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buf, off, len, outStream);
}
inline bool Org::BouncyCastle::Utilities::Encoders::Base64Encoder::ignore(char16_t c) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::Base64Encoder*>(), { "ignore", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, c);
}
inline int32_t Org::BouncyCastle::Utilities::Encoders::Base64Encoder::Decode(::ArrayW<uint8_t> data, int32_t off, int32_t length, ::System::IO::Stream* outStream) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::Base64Encoder*>(),
                                       { "Decode", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, data, off, length, outStream);
}
inline int32_t Org::BouncyCastle::Utilities::Encoders::Base64Encoder::nextI(::ArrayW<uint8_t> data, int32_t i, int32_t finish) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::Base64Encoder*>(),
                                                           { "nextI", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, data, i, finish);
}
inline int32_t Org::BouncyCastle::Utilities::Encoders::Base64Encoder::DecodeString(::StringW data, ::System::IO::Stream* outStream) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::Base64Encoder*>(),
                                                                                         { "DecodeString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, data, outStream);
}
inline int32_t Org::BouncyCastle::Utilities::Encoders::Base64Encoder::decodeLastBlock(::System::IO::Stream* outStream, char16_t c1, char16_t c2, char16_t c3, char16_t c4) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::Base64Encoder*>(),
          { "decodeLastBlock", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, outStream, c1, c2, c3, c4);
}
inline int32_t Org::BouncyCastle::Utilities::Encoders::Base64Encoder::nextI(::StringW data, int32_t i, int32_t finish) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::Base64Encoder*>(),
                                                                                         { "nextI", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, data, i, finish);
}
inline ::Org::BouncyCastle::Utilities::Encoders::Base64Encoder* Org::BouncyCastle::Utilities::Encoders::Base64Encoder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Utilities::Encoders::Base64Encoder*>());
}
/// @brief Convert operator to "::Org::BouncyCastle::Utilities::Encoders::IEncoder"
constexpr Org::BouncyCastle::Utilities::Encoders::Base64Encoder::operator ::Org::BouncyCastle::Utilities::Encoders::IEncoder*() noexcept {
  return static_cast<::Org::BouncyCastle::Utilities::Encoders::IEncoder*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Utilities::Encoders::IEncoder"
constexpr ::Org::BouncyCastle::Utilities::Encoders::IEncoder* Org::BouncyCastle::Utilities::Encoders::Base64Encoder::i___Org__BouncyCastle__Utilities__Encoders__IEncoder() noexcept {
  return static_cast<::Org::BouncyCastle::Utilities::Encoders::IEncoder*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Utilities::Encoders::Base64Encoder::Base64Encoder() {}
