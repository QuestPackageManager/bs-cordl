#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Utilities/Encoders/HexEncoder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Utilities/Encoders/zzzz__HexEncoder_def.hpp"
#include "Org/BouncyCastle/Utilities/Encoders/zzzz__IEncoder_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Encoders::HexEncoder.InitialiseDecodingTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Utilities::Encoders::HexEncoder::*)()>(
    &::Org::BouncyCastle::Utilities::Encoders::HexEncoder::InitialiseDecodingTable)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x362c498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::HexEncoder*>(), { "InitialiseDecodingTable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Encoders::HexEncoder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Utilities::Encoders::HexEncoder::*)()>(&::Org::BouncyCastle::Utilities::Encoders::HexEncoder::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x362c404;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::HexEncoder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Encoders::HexEncoder.Encode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Utilities::Encoders::HexEncoder::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Utilities::Encoders::HexEncoder::Encode)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x362c5f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::HexEncoder*>(),
            { "Encode", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Encoders::HexEncoder.Encode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Utilities::Encoders::HexEncoder::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::IO::Stream*)>(
    &::Org::BouncyCastle::Utilities::Encoders::HexEncoder::Encode)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x362b608;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::HexEncoder*>(),
                                         { "Encode", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Encoders::HexEncoder.Ignore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(char16_t)>(&::Org::BouncyCastle::Utilities::Encoders::HexEncoder::Ignore)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x362c6d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::HexEncoder*>(), { "Ignore", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Encoders::HexEncoder.Decode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Utilities::Encoders::HexEncoder::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::IO::Stream*)>(
    &::Org::BouncyCastle::Utilities::Encoders::HexEncoder::Decode)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x362b90c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::HexEncoder*>(),
                                         { "Decode", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Encoders::HexEncoder.DecodeString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Utilities::Encoders::HexEncoder::*)(::StringW, ::System::IO::Stream*)>(
    &::Org::BouncyCastle::Utilities::Encoders::HexEncoder::DecodeString)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x362bcf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::HexEncoder*>(),
                                                                                           { "DecodeString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Encoders::HexEncoder.DecodeStrict
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Utilities::Encoders::HexEncoder::*)(::StringW, int32_t, int32_t)>(
    &::Org::BouncyCastle::Utilities::Encoders::HexEncoder::DecodeStrict)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x362c0dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::HexEncoder*>(),
                                                             { "DecodeStrict", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Utilities::Encoders::HexEncoder::__cordl_internal_get_encodingTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encodingTable;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Utilities::Encoders::HexEncoder::__cordl_internal_get_encodingTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encodingTable;
}
constexpr void Org::BouncyCastle::Utilities::Encoders::HexEncoder::__cordl_internal_set_encodingTable(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___encodingTable = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Utilities::Encoders::HexEncoder::__cordl_internal_get_decodingTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___decodingTable;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Utilities::Encoders::HexEncoder::__cordl_internal_get_decodingTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___decodingTable;
}
constexpr void Org::BouncyCastle::Utilities::Encoders::HexEncoder::__cordl_internal_set_decodingTable(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___decodingTable = value;
}
inline void Org::BouncyCastle::Utilities::Encoders::HexEncoder::InitialiseDecodingTable() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::HexEncoder*>(), { "InitialiseDecodingTable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Utilities::Encoders::HexEncoder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::HexEncoder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Utilities::Encoders::HexEncoder::Encode(::ArrayW<uint8_t> inBuf, int32_t inOff, int32_t inLen, ::ArrayW<uint8_t> outBuf, int32_t outOff) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::HexEncoder*>(),
          { "Encode", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, inBuf, inOff, inLen, outBuf, outOff);
}
inline int32_t Org::BouncyCastle::Utilities::Encoders::HexEncoder::Encode(::ArrayW<uint8_t> buf, int32_t off, int32_t len, ::System::IO::Stream* outStream) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::HexEncoder*>(),
                                       { "Encode", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buf, off, len, outStream);
}
inline bool Org::BouncyCastle::Utilities::Encoders::HexEncoder::Ignore(char16_t c) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::HexEncoder*>(), { "Ignore", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, c);
}
inline int32_t Org::BouncyCastle::Utilities::Encoders::HexEncoder::Decode(::ArrayW<uint8_t> data, int32_t off, int32_t length, ::System::IO::Stream* outStream) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::HexEncoder*>(),
                                       { "Decode", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, data, off, length, outStream);
}
inline int32_t Org::BouncyCastle::Utilities::Encoders::HexEncoder::DecodeString(::StringW data, ::System::IO::Stream* outStream) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::HexEncoder*>(),
                                                                                         { "DecodeString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, data, outStream);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Utilities::Encoders::HexEncoder::DecodeStrict(::StringW str, int32_t off, int32_t len) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Encoders::HexEncoder*>(),
                                                           { "DecodeStrict", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, str, off, len);
}
inline ::Org::BouncyCastle::Utilities::Encoders::HexEncoder* Org::BouncyCastle::Utilities::Encoders::HexEncoder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Utilities::Encoders::HexEncoder*>());
}
/// @brief Convert operator to "::Org::BouncyCastle::Utilities::Encoders::IEncoder"
constexpr Org::BouncyCastle::Utilities::Encoders::HexEncoder::operator ::Org::BouncyCastle::Utilities::Encoders::IEncoder*() noexcept {
  return static_cast<::Org::BouncyCastle::Utilities::Encoders::IEncoder*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Utilities::Encoders::IEncoder"
constexpr ::Org::BouncyCastle::Utilities::Encoders::IEncoder* Org::BouncyCastle::Utilities::Encoders::HexEncoder::i___Org__BouncyCastle__Utilities__Encoders__IEncoder() noexcept {
  return static_cast<::Org::BouncyCastle::Utilities::Encoders::IEncoder*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Utilities::Encoders::HexEncoder::HexEncoder() {}
