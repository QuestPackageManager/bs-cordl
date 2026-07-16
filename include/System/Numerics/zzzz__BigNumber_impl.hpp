#pragma once
// IWYU pragma private; include "System/Numerics/BigNumber.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Numerics/zzzz__BigNumber_def.hpp"
#include "System/Globalization/zzzz__NumberFormatInfo_def.hpp"
#include "System/Globalization/zzzz__NumberStyles_def.hpp"
#include "System/Numerics/zzzz__BigInteger_def.hpp"
#include "System/Numerics/zzzz__BigNumber_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__ArgumentException_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
//  Writing Method size for method: ::System::Numerics::BigNumber_BigNumberBuffer.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Numerics::BigNumber_BigNumberBuffer (*)()>(&::System::Numerics::BigNumber_BigNumberBuffer::Create)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x60f1b70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigNumber_BigNumberBuffer>(), { "Create", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::Numerics::BigNumber_BigNumberBuffer System::Numerics::BigNumber_BigNumberBuffer::Create() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigNumber_BigNumberBuffer>(), { "Create", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Numerics::BigNumber_BigNumberBuffer>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "digits", ty: "::System::Text::StringBuilder*", modifiers: "", def_value: Some("{}") }, CppParam { name: "precision", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "scale", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sign", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Numerics::BigNumber_BigNumberBuffer::BigNumber_BigNumberBuffer(::System::Text::StringBuilder* digits, int32_t precision, int32_t scale, bool sign) noexcept {
  this->digits = digits;
  this->precision = precision;
  this->scale = scale;
  this->sign = sign;
}
// Ctor Parameters []
constexpr ::System::Numerics::BigNumber_BigNumberBuffer::BigNumber_BigNumberBuffer() {}
//  Writing Method size for method: ::System::Numerics::BigNumber.TryValidateParseStyleInteger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Globalization::NumberStyles, ::by_ref<::System::ArgumentException*>)>(
    &::System::Numerics::BigNumber::TryValidateParseStyleInteger)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x60f1900;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Numerics::BigNumber*>(),
                            { "TryValidateParseStyleInteger", {}, { ::i2c::type_of<::System::Globalization::NumberStyles>(), ::i2c::type_of<::by_ref<::System::ArgumentException*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigNumber.TryParseBigInteger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*,
                                                                ::by_ref<::System::Numerics::BigInteger>)>(&::System::Numerics::BigNumber::TryParseBigInteger)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x60f1a10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigNumber*>(),
                                                             { "TryParseBigInteger",
                                                               {},
                                                               { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(),
                                                                 ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<::by_ref<::System::Numerics::BigInteger>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigNumber.ParseBigInteger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Numerics::BigInteger (*)(::StringW, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*)>(
    &::System::Numerics::BigNumber::ParseBigInteger)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x60ed298;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Numerics::BigNumber*>(),
            { "ParseBigInteger", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::NumberStyles>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigNumber.ParseBigInteger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Numerics::BigInteger (*)(::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::NumberStyles,
                                                                                          ::System::Globalization::NumberFormatInfo*)>(&::System::Numerics::BigNumber::ParseBigInteger)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x60f2030;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Numerics::BigNumber*>(), { "ParseBigInteger",
                                                                                 {},
                                                                                 { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(),
                                                                                   ::i2c::type_of<::System::Globalization::NumberFormatInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigNumber.HexNumberToBigInteger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::Numerics::BigNumber_BigNumberBuffer>, ::by_ref<::System::Numerics::BigInteger>)>(
    &::System::Numerics::BigNumber::HexNumberToBigInteger)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x60f1cb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::System::Numerics::BigNumber*>(),
                         { "HexNumberToBigInteger", {}, { ::i2c::type_of<::by_ref<::System::Numerics::BigNumber_BigNumberBuffer>>(), ::i2c::type_of<::by_ref<::System::Numerics::BigInteger>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigNumber.NumberToBigInteger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::Numerics::BigNumber_BigNumberBuffer>, ::by_ref<::System::Numerics::BigInteger>)>(
    &::System::Numerics::BigNumber::NumberToBigInteger)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x60f1e5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Numerics::BigNumber*>(),
                            { "NumberToBigInteger", {}, { ::i2c::type_of<::by_ref<::System::Numerics::BigNumber_BigNumberBuffer>>(), ::i2c::type_of<::by_ref<::System::Numerics::BigInteger>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigNumber.ParseFormatSpecifier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (*)(::System::ReadOnlySpan_1<char16_t>, ::by_ref<int32_t>)>(&::System::Numerics::BigNumber::ParseFormatSpecifier)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x60f2178;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigNumber*>(),
                                                             { "ParseFormatSpecifier", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigNumber.FormatBigIntegerToHex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(bool, ::System::Numerics::BigInteger, char16_t, int32_t, ::System::Globalization::NumberFormatInfo*, ::System::Span_1<char16_t>,
                                                                     ::by_ref<int32_t>, ::by_ref<bool>)>(&::System::Numerics::BigNumber::FormatBigIntegerToHex)> {
  constexpr static std::size_t size = 0x6c4;
  constexpr static std::size_t addrs = 0x60f2270;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigNumber*>(),
                                                             { "FormatBigIntegerToHex",
                                                               {},
                                                               { ::i2c::type_of<bool>(), ::i2c::type_of<::System::Numerics::BigInteger>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<::System::Span_1<char16_t>>(),
                                                                 ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigNumber.FormatBigInteger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Numerics::BigInteger, ::StringW, ::System::Globalization::NumberFormatInfo*)>(
    &::System::Numerics::BigNumber::FormatBigInteger)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x60ee03c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::System::Numerics::BigNumber*>(),
                         { "FormatBigInteger", {}, { ::i2c::type_of<::System::Numerics::BigInteger>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigNumber.FormatBigInteger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(bool, ::System::Numerics::BigInteger, ::StringW, ::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::NumberFormatInfo*,
                                                                     ::System::Span_1<char16_t>, ::by_ref<int32_t>, ::by_ref<bool>)>(&::System::Numerics::BigNumber::FormatBigInteger)> {
  constexpr static std::size_t size = 0xc34;
  constexpr static std::size_t addrs = 0x60f2cd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigNumber*>(),
                                                             { "FormatBigInteger",
                                                               {},
                                                               { ::i2c::type_of<bool>(), ::i2c::type_of<::System::Numerics::BigInteger>(), ::i2c::type_of<::StringW>(),
                                                                 ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(),
                                                                 ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
inline bool System::Numerics::BigNumber::TryValidateParseStyleInteger(::System::Globalization::NumberStyles style, ::by_ref<::System::ArgumentException*> e) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Numerics::BigNumber*>(),
                                       { "TryValidateParseStyleInteger", {}, { ::i2c::type_of<::System::Globalization::NumberStyles>(), ::i2c::type_of<::by_ref<::System::ArgumentException*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, style, e);
}
inline bool System::Numerics::BigNumber::TryParseBigInteger(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles style, ::System::Globalization::NumberFormatInfo* info,
                                                            ::by_ref<::System::Numerics::BigInteger> result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigNumber*>(),
                                                           { "TryParseBigInteger",
                                                             {},
                                                             { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(),
                                                               ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<::by_ref<::System::Numerics::BigInteger>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, style, info, result);
}
inline ::System::Numerics::BigInteger System::Numerics::BigNumber::ParseBigInteger(::StringW value, ::System::Globalization::NumberStyles style, ::System::Globalization::NumberFormatInfo* info) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Numerics::BigNumber*>(),
          { "ParseBigInteger", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::NumberStyles>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Numerics::BigInteger>(nullptr, ___internal_method, value, style, info);
}
inline ::System::Numerics::BigInteger System::Numerics::BigNumber::ParseBigInteger(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles style,
                                                                                   ::System::Globalization::NumberFormatInfo* info) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Numerics::BigNumber*>(), { "ParseBigInteger",
                                                                               {},
                                                                               { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(),
                                                                                 ::i2c::type_of<::System::Globalization::NumberFormatInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Numerics::BigInteger>(nullptr, ___internal_method, value, style, info);
}
inline bool System::Numerics::BigNumber::HexNumberToBigInteger(::by_ref<::System::Numerics::BigNumber_BigNumberBuffer> number, ::by_ref<::System::Numerics::BigInteger> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Numerics::BigNumber*>(),
                          { "HexNumberToBigInteger", {}, { ::i2c::type_of<::by_ref<::System::Numerics::BigNumber_BigNumberBuffer>>(), ::i2c::type_of<::by_ref<::System::Numerics::BigInteger>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, number, value);
}
inline bool System::Numerics::BigNumber::NumberToBigInteger(::by_ref<::System::Numerics::BigNumber_BigNumberBuffer> number, ::by_ref<::System::Numerics::BigInteger> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Numerics::BigNumber*>(),
                          { "NumberToBigInteger", {}, { ::i2c::type_of<::by_ref<::System::Numerics::BigNumber_BigNumberBuffer>>(), ::i2c::type_of<::by_ref<::System::Numerics::BigInteger>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, number, value);
}
inline char16_t System::Numerics::BigNumber::ParseFormatSpecifier(::System::ReadOnlySpan_1<char16_t> format, ::by_ref<int32_t> digits) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigNumber*>(),
                                                           { "ParseFormatSpecifier", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(nullptr, ___internal_method, format, digits);
}
inline ::StringW System::Numerics::BigNumber::FormatBigIntegerToHex(bool targetSpan, ::System::Numerics::BigInteger value, char16_t format, int32_t digits,
                                                                    ::System::Globalization::NumberFormatInfo* info, ::System::Span_1<char16_t> destination, ::by_ref<int32_t> charsWritten,
                                                                    ::by_ref<bool> spanSuccess) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigNumber*>(),
                                                           { "FormatBigIntegerToHex",
                                                             {},
                                                             { ::i2c::type_of<bool>(), ::i2c::type_of<::System::Numerics::BigInteger>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<::System::Span_1<char16_t>>(),
                                                               ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, targetSpan, value, format, digits, info, destination, charsWritten, spanSuccess);
}
inline ::StringW System::Numerics::BigNumber::FormatBigInteger(::System::Numerics::BigInteger value, ::StringW format, ::System::Globalization::NumberFormatInfo* info) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::System::Numerics::BigNumber*>(),
                       { "FormatBigInteger", {}, { ::i2c::type_of<::System::Numerics::BigInteger>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, format, info);
}
inline ::StringW System::Numerics::BigNumber::FormatBigInteger(bool targetSpan, ::System::Numerics::BigInteger value, ::StringW formatString, ::System::ReadOnlySpan_1<char16_t> formatSpan,
                                                               ::System::Globalization::NumberFormatInfo* info, ::System::Span_1<char16_t> destination, ::by_ref<int32_t> charsWritten,
                                                               ::by_ref<bool> spanSuccess) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigNumber*>(),
                                                           { "FormatBigInteger",
                                                             {},
                                                             { ::i2c::type_of<bool>(), ::i2c::type_of<::System::Numerics::BigInteger>(), ::i2c::type_of<::StringW>(),
                                                               ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(),
                                                               ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, targetSpan, value, formatString, formatSpan, info, destination, charsWritten, spanSuccess);
}
// Ctor Parameters []
constexpr ::System::Numerics::BigNumber::BigNumber() {}
