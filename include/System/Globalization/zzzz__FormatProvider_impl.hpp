#pragma once
// IWYU pragma private; include "System/Globalization/FormatProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Globalization/zzzz__FormatProvider_def.hpp"
#include "System/Globalization/zzzz__FormatProvider_def.hpp"
#include "System/Globalization/zzzz__NumberFormatInfo_def.hpp"
#include "System/Globalization/zzzz__NumberStyles_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/Text/zzzz__ValueStringBuilder_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
//  Writing Method size for method: ::System::Globalization::Number_FormatProvider_NumberBuffer.get_digits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t* (::System::Globalization::Number_FormatProvider_NumberBuffer::*)()>(
    &::System::Globalization::Number_FormatProvider_NumberBuffer::get_digits)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60f7fa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::Number_FormatProvider_NumberBuffer>(), { "get_digits", {}, {} })));
    return ___internal_method;
  }
};
inline char16_t* System::Globalization::Number_FormatProvider_NumberBuffer::get_digits() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::Number_FormatProvider_NumberBuffer>(), { "get_digits", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<char16_t*>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "precision", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "scale", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "sign", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "overrideDigits", ty: "char16_t*", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Globalization::Number_FormatProvider_NumberBuffer::Number_FormatProvider_NumberBuffer(int32_t precision, int32_t scale, bool sign, char16_t* overrideDigits) noexcept {
  this->precision = precision;
  this->scale = scale;
  this->sign = sign;
  this->overrideDigits = overrideDigits;
}
// Ctor Parameters []
constexpr ::System::Globalization::Number_FormatProvider_NumberBuffer::Number_FormatProvider_NumberBuffer() {}
//  Writing Method size for method: ::System::Globalization::FormatProvider_Number.IsWhite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(char16_t)>(&::System::Globalization::FormatProvider_Number::IsWhite)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x60f53e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::FormatProvider_Number*>(), { "IsWhite", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::FormatProvider_Number.MatchChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t* (*)(char16_t*, char16_t*, ::StringW)>(&::System::Globalization::FormatProvider_Number::MatchChars)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x60f53f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::FormatProvider_Number*>(),
                                                             { "MatchChars", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<char16_t*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::FormatProvider_Number.MatchChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t* (*)(char16_t*, char16_t*, char16_t*)>(&::System::Globalization::FormatProvider_Number::MatchChars)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x60f54bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::FormatProvider_Number*>(),
                                                             { "MatchChars", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<char16_t*>(), ::i2c::type_of<char16_t*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::FormatProvider_Number.ParseNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<bool (*)(::by_ref<char16_t*>, char16_t*, ::System::Globalization::NumberStyles, ::by_ref<::System::Globalization::Number_FormatProvider_NumberBuffer>, ::System::Text::StringBuilder*,
                         ::System::Globalization::NumberFormatInfo*, bool)>(&::System::Globalization::FormatProvider_Number::ParseNumber)> {
  constexpr static std::size_t size = 0x70c;
  constexpr static std::size_t addrs = 0x60f5518;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::FormatProvider_Number*>(),
                                                { "ParseNumber",
                                                  {},
                                                  { ::i2c::type_of<::by_ref<char16_t*>>(), ::i2c::type_of<char16_t*>(), ::i2c::type_of<::System::Globalization::NumberStyles>(),
                                                    ::i2c::type_of<::by_ref<::System::Globalization::Number_FormatProvider_NumberBuffer>>(), ::i2c::type_of<::System::Text::StringBuilder*>(),
                                                    ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::FormatProvider_Number.TrailingZeros
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, int32_t)>(&::System::Globalization::FormatProvider_Number::TrailingZeros)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x60f5c24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::FormatProvider_Number*>(),
                                                             { "TrailingZeros", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::FormatProvider_Number.TryStringToNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::NumberStyles, ::by_ref<::System::Globalization::Number_FormatProvider_NumberBuffer>,
                         ::System::Text::StringBuilder*, ::System::Globalization::NumberFormatInfo*, bool)>(&::System::Globalization::FormatProvider_Number::TryStringToNumber)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x60f52b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::FormatProvider_Number*>(),
                                                { "TryStringToNumber",
                                                  {},
                                                  { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(),
                                                    ::i2c::type_of<::by_ref<::System::Globalization::Number_FormatProvider_NumberBuffer>>(), ::i2c::type_of<::System::Text::StringBuilder*>(),
                                                    ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::FormatProvider_Number.Int32ToDecChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(char16_t*, ::by_ref<int32_t>, uint32_t, int32_t)>(&::System::Globalization::FormatProvider_Number::Int32ToDecChars)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x60f5cc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Globalization::FormatProvider_Number*>(),
                                         { "Int32ToDecChars", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::FormatProvider_Number.ParseFormatSpecifier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (*)(::System::ReadOnlySpan_1<char16_t>, ::by_ref<int32_t>)>(&::System::Globalization::FormatProvider_Number::ParseFormatSpecifier)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x60f3a70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::FormatProvider_Number*>(),
                                                             { "ParseFormatSpecifier", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::FormatProvider_Number.NumberToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::Text::ValueStringBuilder>, ::by_ref<::System::Globalization::Number_FormatProvider_NumberBuffer>, char16_t, int32_t,
                                                                ::System::Globalization::NumberFormatInfo*, bool)>(&::System::Globalization::FormatProvider_Number::NumberToString)> {
  constexpr static std::size_t size = 0x588;
  constexpr static std::size_t addrs = 0x60f3bbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Globalization::FormatProvider_Number*>(),
                                         { "NumberToString",
                                           {},
                                           { ::i2c::type_of<::by_ref<::System::Text::ValueStringBuilder>>(), ::i2c::type_of<::by_ref<::System::Globalization::Number_FormatProvider_NumberBuffer>>(),
                                             ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::FormatProvider_Number.FormatCurrency
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::Text::ValueStringBuilder>, ::by_ref<::System::Globalization::Number_FormatProvider_NumberBuffer>, int32_t, int32_t,
                                                                ::System::Globalization::NumberFormatInfo*)>(&::System::Globalization::FormatProvider_Number::FormatCurrency)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x60f5e14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Globalization::FormatProvider_Number*>(),
                                         { "FormatCurrency",
                                           {},
                                           { ::i2c::type_of<::by_ref<::System::Text::ValueStringBuilder>>(), ::i2c::type_of<::by_ref<::System::Globalization::Number_FormatProvider_NumberBuffer>>(),
                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::FormatProvider_Number.wcslen
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(char16_t*)>(&::System::Globalization::FormatProvider_Number::wcslen)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x60f70a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::FormatProvider_Number*>(), { "wcslen", {}, { ::i2c::type_of<char16_t*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::FormatProvider_Number.FormatFixed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::Text::ValueStringBuilder>, ::by_ref<::System::Globalization::Number_FormatProvider_NumberBuffer>, int32_t, int32_t,
                                                                ::System::Globalization::NumberFormatInfo*, ::ArrayW<int32_t>, ::StringW, ::StringW)>(
    &::System::Globalization::FormatProvider_Number::FormatFixed)> {
  constexpr static std::size_t size = 0x550;
  constexpr static std::size_t addrs = 0x60f6080;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Globalization::FormatProvider_Number*>(),
                                         { "FormatFixed",
                                           {},
                                           { ::i2c::type_of<::by_ref<::System::Text::ValueStringBuilder>>(), ::i2c::type_of<::by_ref<::System::Globalization::Number_FormatProvider_NumberBuffer>>(),
                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<::ArrayW<int32_t>>(),
                                             ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::FormatProvider_Number.FormatNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::Text::ValueStringBuilder>, ::by_ref<::System::Globalization::Number_FormatProvider_NumberBuffer>, int32_t, int32_t,
                                                                ::System::Globalization::NumberFormatInfo*)>(&::System::Globalization::FormatProvider_Number::FormatNumber)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x60f65d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Globalization::FormatProvider_Number*>(),
                                         { "FormatNumber",
                                           {},
                                           { ::i2c::type_of<::by_ref<::System::Text::ValueStringBuilder>>(), ::i2c::type_of<::by_ref<::System::Globalization::Number_FormatProvider_NumberBuffer>>(),
                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::FormatProvider_Number.FormatScientific
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::Text::ValueStringBuilder>, ::by_ref<::System::Globalization::Number_FormatProvider_NumberBuffer>, int32_t, int32_t,
                                                                ::System::Globalization::NumberFormatInfo*, char16_t)>(&::System::Globalization::FormatProvider_Number::FormatScientific)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x60f6824;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Globalization::FormatProvider_Number*>(),
                                         { "FormatScientific",
                                           {},
                                           { ::i2c::type_of<::by_ref<::System::Text::ValueStringBuilder>>(), ::i2c::type_of<::by_ref<::System::Globalization::Number_FormatProvider_NumberBuffer>>(),
                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::FormatProvider_Number.FormatExponent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::Text::ValueStringBuilder>, ::System::Globalization::NumberFormatInfo*, int32_t, char16_t, int32_t, bool)>(
    &::System::Globalization::FormatProvider_Number::FormatExponent)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x60f73c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::FormatProvider_Number*>(),
                                                             { "FormatExponent",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::System::Text::ValueStringBuilder>>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::FormatProvider_Number.FormatGeneral
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::Text::ValueStringBuilder>, ::by_ref<::System::Globalization::Number_FormatProvider_NumberBuffer>, int32_t, int32_t,
                                                                ::System::Globalization::NumberFormatInfo*, char16_t, bool)>(&::System::Globalization::FormatProvider_Number::FormatGeneral)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0x60f6a7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::FormatProvider_Number*>(),
                                                { "FormatGeneral",
                                                  {},
                                                  { ::i2c::type_of<::by_ref<::System::Text::ValueStringBuilder>>(),
                                                    ::i2c::type_of<::by_ref<::System::Globalization::Number_FormatProvider_NumberBuffer>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                    ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::FormatProvider_Number.FormatPercent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::Text::ValueStringBuilder>, ::by_ref<::System::Globalization::Number_FormatProvider_NumberBuffer>, int32_t, int32_t,
                                                                ::System::Globalization::NumberFormatInfo*)>(&::System::Globalization::FormatProvider_Number::FormatPercent)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x60f6e38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Globalization::FormatProvider_Number*>(),
                                         { "FormatPercent",
                                           {},
                                           { ::i2c::type_of<::by_ref<::System::Text::ValueStringBuilder>>(), ::i2c::type_of<::by_ref<::System::Globalization::Number_FormatProvider_NumberBuffer>>(),
                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::FormatProvider_Number.RoundNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::Globalization::Number_FormatProvider_NumberBuffer>, int32_t)>(
    &::System::Globalization::FormatProvider_Number::RoundNumber)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x60f5d24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::FormatProvider_Number*>(),
                                                { "RoundNumber", {}, { ::i2c::type_of<::by_ref<::System::Globalization::Number_FormatProvider_NumberBuffer>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::FormatProvider_Number.FindSection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::ReadOnlySpan_1<char16_t>, int32_t)>(&::System::Globalization::FormatProvider_Number::FindSection)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x60f76f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::FormatProvider_Number*>(),
                                                             { "FindSection", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::FormatProvider_Number.NumberToStringFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::Text::ValueStringBuilder>, ::by_ref<::System::Globalization::Number_FormatProvider_NumberBuffer>,
                                                                ::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::NumberFormatInfo*)>(
    &::System::Globalization::FormatProvider_Number::NumberToStringFormat)> {
  constexpr static std::size_t size = 0x1170;
  constexpr static std::size_t addrs = 0x60f4144;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Globalization::FormatProvider_Number*>(),
                                         { "NumberToStringFormat",
                                           {},
                                           { ::i2c::type_of<::by_ref<::System::Text::ValueStringBuilder>>(), ::i2c::type_of<::by_ref<::System::Globalization::Number_FormatProvider_NumberBuffer>>(),
                                             ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>() } })));
    return ___internal_method;
  }
};
inline void System::Globalization::FormatProvider_Number::setStaticF_s_posCurrencyFormats(::ArrayW<::StringW> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW>, "s_posCurrencyFormats", ::System::Globalization::FormatProvider_Number*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> System::Globalization::FormatProvider_Number::getStaticF_s_posCurrencyFormats() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "s_posCurrencyFormats", ::System::Globalization::FormatProvider_Number*>();
}
inline void System::Globalization::FormatProvider_Number::setStaticF_s_negCurrencyFormats(::ArrayW<::StringW> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW>, "s_negCurrencyFormats", ::System::Globalization::FormatProvider_Number*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> System::Globalization::FormatProvider_Number::getStaticF_s_negCurrencyFormats() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "s_negCurrencyFormats", ::System::Globalization::FormatProvider_Number*>();
}
inline void System::Globalization::FormatProvider_Number::setStaticF_s_posPercentFormats(::ArrayW<::StringW> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW>, "s_posPercentFormats", ::System::Globalization::FormatProvider_Number*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> System::Globalization::FormatProvider_Number::getStaticF_s_posPercentFormats() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "s_posPercentFormats", ::System::Globalization::FormatProvider_Number*>();
}
inline void System::Globalization::FormatProvider_Number::setStaticF_s_negPercentFormats(::ArrayW<::StringW> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW>, "s_negPercentFormats", ::System::Globalization::FormatProvider_Number*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> System::Globalization::FormatProvider_Number::getStaticF_s_negPercentFormats() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "s_negPercentFormats", ::System::Globalization::FormatProvider_Number*>();
}
inline void System::Globalization::FormatProvider_Number::setStaticF_s_negNumberFormats(::ArrayW<::StringW> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW>, "s_negNumberFormats", ::System::Globalization::FormatProvider_Number*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> System::Globalization::FormatProvider_Number::getStaticF_s_negNumberFormats() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "s_negNumberFormats", ::System::Globalization::FormatProvider_Number*>();
}
inline void System::Globalization::FormatProvider_Number::setStaticF_s_posNumberFormat(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "s_posNumberFormat", ::System::Globalization::FormatProvider_Number*>(std::forward<::StringW>(value));
}
inline ::StringW System::Globalization::FormatProvider_Number::getStaticF_s_posNumberFormat() {
  return ::cordl_internals::getStaticField<::StringW, "s_posNumberFormat", ::System::Globalization::FormatProvider_Number*>();
}
inline bool System::Globalization::FormatProvider_Number::IsWhite(char16_t ch) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::FormatProvider_Number*>(), { "IsWhite", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ch);
}
inline char16_t* System::Globalization::FormatProvider_Number::MatchChars(char16_t* p, char16_t* pEnd, ::StringW str) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::FormatProvider_Number*>(),
                                                           { "MatchChars", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<char16_t*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<char16_t*>(nullptr, ___internal_method, p, pEnd, str);
}
inline char16_t* System::Globalization::FormatProvider_Number::MatchChars(char16_t* p, char16_t* pEnd, char16_t* str) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::FormatProvider_Number*>(),
                                                           { "MatchChars", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<char16_t*>(), ::i2c::type_of<char16_t*>() } })));
  return ::cordl_internals::RunMethodRethrow<char16_t*>(nullptr, ___internal_method, p, pEnd, str);
}
inline bool System::Globalization::FormatProvider_Number::ParseNumber(::by_ref<char16_t*> str, char16_t* strEnd, ::System::Globalization::NumberStyles options,
                                                                      ::by_ref<::System::Globalization::Number_FormatProvider_NumberBuffer> number, ::System::Text::StringBuilder* sb,
                                                                      ::System::Globalization::NumberFormatInfo* numfmt, bool parseDecimal) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::FormatProvider_Number*>(),
                                              { "ParseNumber",
                                                {},
                                                { ::i2c::type_of<::by_ref<char16_t*>>(), ::i2c::type_of<char16_t*>(), ::i2c::type_of<::System::Globalization::NumberStyles>(),
                                                  ::i2c::type_of<::by_ref<::System::Globalization::Number_FormatProvider_NumberBuffer>>(), ::i2c::type_of<::System::Text::StringBuilder*>(),
                                                  ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, str, strEnd, options, number, sb, numfmt, parseDecimal);
}
inline bool System::Globalization::FormatProvider_Number::TrailingZeros(::System::ReadOnlySpan_1<char16_t> s, int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::FormatProvider_Number*>(),
                                                           { "TrailingZeros", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, s, index);
}
inline bool System::Globalization::FormatProvider_Number::TryStringToNumber(::System::ReadOnlySpan_1<char16_t> str, ::System::Globalization::NumberStyles options,
                                                                            ::by_ref<::System::Globalization::Number_FormatProvider_NumberBuffer> number, ::System::Text::StringBuilder* sb,
                                                                            ::System::Globalization::NumberFormatInfo* numfmt, bool parseDecimal) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::FormatProvider_Number*>(),
                                              { "TryStringToNumber",
                                                {},
                                                { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(),
                                                  ::i2c::type_of<::by_ref<::System::Globalization::Number_FormatProvider_NumberBuffer>>(), ::i2c::type_of<::System::Text::StringBuilder*>(),
                                                  ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, str, options, number, sb, numfmt, parseDecimal);
}
inline void System::Globalization::FormatProvider_Number::Int32ToDecChars(char16_t* buffer, ::by_ref<int32_t> index, uint32_t value, int32_t digits) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::FormatProvider_Number*>(),
                                              { "Int32ToDecChars", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buffer, index, value, digits);
}
inline char16_t System::Globalization::FormatProvider_Number::ParseFormatSpecifier(::System::ReadOnlySpan_1<char16_t> format, ::by_ref<int32_t> digits) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::FormatProvider_Number*>(),
                                                           { "ParseFormatSpecifier", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(nullptr, ___internal_method, format, digits);
}
inline void System::Globalization::FormatProvider_Number::NumberToString(::by_ref<::System::Text::ValueStringBuilder> sb, ::by_ref<::System::Globalization::Number_FormatProvider_NumberBuffer> number,
                                                                         char16_t format, int32_t nMaxDigits, ::System::Globalization::NumberFormatInfo* info, bool isDecimal) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Globalization::FormatProvider_Number*>(),
                                       { "NumberToString",
                                         {},
                                         { ::i2c::type_of<::by_ref<::System::Text::ValueStringBuilder>>(), ::i2c::type_of<::by_ref<::System::Globalization::Number_FormatProvider_NumberBuffer>>(),
                                           ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sb, number, format, nMaxDigits, info, isDecimal);
}
inline void System::Globalization::FormatProvider_Number::FormatCurrency(::by_ref<::System::Text::ValueStringBuilder> sb, ::by_ref<::System::Globalization::Number_FormatProvider_NumberBuffer> number,
                                                                         int32_t nMinDigits, int32_t nMaxDigits, ::System::Globalization::NumberFormatInfo* info) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Globalization::FormatProvider_Number*>(),
                                       { "FormatCurrency",
                                         {},
                                         { ::i2c::type_of<::by_ref<::System::Text::ValueStringBuilder>>(), ::i2c::type_of<::by_ref<::System::Globalization::Number_FormatProvider_NumberBuffer>>(),
                                           ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sb, number, nMinDigits, nMaxDigits, info);
}
inline int32_t System::Globalization::FormatProvider_Number::wcslen(char16_t* s) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::FormatProvider_Number*>(), { "wcslen", {}, { ::i2c::type_of<char16_t*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, s);
}
inline void System::Globalization::FormatProvider_Number::FormatFixed(::by_ref<::System::Text::ValueStringBuilder> sb, ::by_ref<::System::Globalization::Number_FormatProvider_NumberBuffer> number,
                                                                      int32_t nMinDigits, int32_t nMaxDigits, ::System::Globalization::NumberFormatInfo* info, ::ArrayW<int32_t> groupDigits,
                                                                      ::StringW sDecimal, ::StringW sGroup) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Globalization::FormatProvider_Number*>(),
                                       { "FormatFixed",
                                         {},
                                         { ::i2c::type_of<::by_ref<::System::Text::ValueStringBuilder>>(), ::i2c::type_of<::by_ref<::System::Globalization::Number_FormatProvider_NumberBuffer>>(),
                                           ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<::ArrayW<int32_t>>(),
                                           ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sb, number, nMinDigits, nMaxDigits, info, groupDigits, sDecimal, sGroup);
}
inline void System::Globalization::FormatProvider_Number::FormatNumber(::by_ref<::System::Text::ValueStringBuilder> sb, ::by_ref<::System::Globalization::Number_FormatProvider_NumberBuffer> number,
                                                                       int32_t nMinDigits, int32_t nMaxDigits, ::System::Globalization::NumberFormatInfo* info) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Globalization::FormatProvider_Number*>(),
                                       { "FormatNumber",
                                         {},
                                         { ::i2c::type_of<::by_ref<::System::Text::ValueStringBuilder>>(), ::i2c::type_of<::by_ref<::System::Globalization::Number_FormatProvider_NumberBuffer>>(),
                                           ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sb, number, nMinDigits, nMaxDigits, info);
}
inline void System::Globalization::FormatProvider_Number::FormatScientific(::by_ref<::System::Text::ValueStringBuilder> sb,
                                                                           ::by_ref<::System::Globalization::Number_FormatProvider_NumberBuffer> number, int32_t nMinDigits, int32_t nMaxDigits,
                                                                           ::System::Globalization::NumberFormatInfo* info, char16_t expChar) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Globalization::FormatProvider_Number*>(),
                                       { "FormatScientific",
                                         {},
                                         { ::i2c::type_of<::by_ref<::System::Text::ValueStringBuilder>>(), ::i2c::type_of<::by_ref<::System::Globalization::Number_FormatProvider_NumberBuffer>>(),
                                           ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sb, number, nMinDigits, nMaxDigits, info, expChar);
}
inline void System::Globalization::FormatProvider_Number::FormatExponent(::by_ref<::System::Text::ValueStringBuilder> sb, ::System::Globalization::NumberFormatInfo* info, int32_t value,
                                                                         char16_t expChar, int32_t minDigits, bool positiveSign) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::FormatProvider_Number*>(),
                                                           { "FormatExponent",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::System::Text::ValueStringBuilder>>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sb, info, value, expChar, minDigits, positiveSign);
}
inline void System::Globalization::FormatProvider_Number::FormatGeneral(::by_ref<::System::Text::ValueStringBuilder> sb, ::by_ref<::System::Globalization::Number_FormatProvider_NumberBuffer> number,
                                                                        int32_t nMinDigits, int32_t nMaxDigits, ::System::Globalization::NumberFormatInfo* info, char16_t expChar,
                                                                        bool bSuppressScientific) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::FormatProvider_Number*>(),
                                              { "FormatGeneral",
                                                {},
                                                { ::i2c::type_of<::by_ref<::System::Text::ValueStringBuilder>>(),
                                                  ::i2c::type_of<::by_ref<::System::Globalization::Number_FormatProvider_NumberBuffer>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                  ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sb, number, nMinDigits, nMaxDigits, info, expChar, bSuppressScientific);
}
inline void System::Globalization::FormatProvider_Number::FormatPercent(::by_ref<::System::Text::ValueStringBuilder> sb, ::by_ref<::System::Globalization::Number_FormatProvider_NumberBuffer> number,
                                                                        int32_t nMinDigits, int32_t nMaxDigits, ::System::Globalization::NumberFormatInfo* info) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Globalization::FormatProvider_Number*>(),
                                       { "FormatPercent",
                                         {},
                                         { ::i2c::type_of<::by_ref<::System::Text::ValueStringBuilder>>(), ::i2c::type_of<::by_ref<::System::Globalization::Number_FormatProvider_NumberBuffer>>(),
                                           ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sb, number, nMinDigits, nMaxDigits, info);
}
inline void System::Globalization::FormatProvider_Number::RoundNumber(::by_ref<::System::Globalization::Number_FormatProvider_NumberBuffer> number, int32_t pos) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::FormatProvider_Number*>(),
                                              { "RoundNumber", {}, { ::i2c::type_of<::by_ref<::System::Globalization::Number_FormatProvider_NumberBuffer>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, number, pos);
}
inline int32_t System::Globalization::FormatProvider_Number::FindSection(::System::ReadOnlySpan_1<char16_t> format, int32_t section) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::FormatProvider_Number*>(),
                                                                                         { "FindSection", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, format, section);
}
inline void System::Globalization::FormatProvider_Number::NumberToStringFormat(::by_ref<::System::Text::ValueStringBuilder> sb,
                                                                               ::by_ref<::System::Globalization::Number_FormatProvider_NumberBuffer> number, ::System::ReadOnlySpan_1<char16_t> format,
                                                                               ::System::Globalization::NumberFormatInfo* info) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Globalization::FormatProvider_Number*>(),
                                       { "NumberToStringFormat",
                                         {},
                                         { ::i2c::type_of<::by_ref<::System::Text::ValueStringBuilder>>(), ::i2c::type_of<::by_ref<::System::Globalization::Number_FormatProvider_NumberBuffer>>(),
                                           ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sb, number, format, info);
}
// Ctor Parameters []
constexpr ::System::Globalization::FormatProvider_Number::FormatProvider_Number() {}
//  Writing Method size for method: ::System::Globalization::FormatProvider.FormatBigInteger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::Text::ValueStringBuilder>, int32_t, int32_t, bool, ::System::ReadOnlySpan_1<char16_t>,
                                                                ::System::Globalization::NumberFormatInfo*, ::ArrayW<char16_t>, int32_t)>(&::System::Globalization::FormatProvider::FormatBigInteger)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x60f3904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::FormatProvider*>(),
                                                             { "FormatBigInteger",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::System::Text::ValueStringBuilder>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<bool>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(),
                                                                 ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::FormatProvider.TryStringToBigInteger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*,
                                                                ::System::Text::StringBuilder*, ::by_ref<int32_t>, ::by_ref<int32_t>, ::by_ref<bool>)>(
    &::System::Globalization::FormatProvider::TryStringToBigInteger)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x60f1bd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::FormatProvider*>(),
                                                             { "TryStringToBigInteger",
                                                               {},
                                                               { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(),
                                                                 ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<::System::Text::StringBuilder*>(),
                                                                 ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
inline void System::Globalization::FormatProvider::FormatBigInteger(::by_ref<::System::Text::ValueStringBuilder> sb, int32_t precision, int32_t scale, bool sign,
                                                                    ::System::ReadOnlySpan_1<char16_t> format, ::System::Globalization::NumberFormatInfo* numberFormatInfo, ::ArrayW<char16_t> digits,
                                                                    int32_t startIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::FormatProvider*>(),
                                                           { "FormatBigInteger",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::System::Text::ValueStringBuilder>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<bool>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(),
                                                               ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sb, precision, scale, sign, format, numberFormatInfo, digits, startIndex);
}
inline bool System::Globalization::FormatProvider::TryStringToBigInteger(::System::ReadOnlySpan_1<char16_t> s, ::System::Globalization::NumberStyles styles,
                                                                         ::System::Globalization::NumberFormatInfo* numberFormatInfo, ::System::Text::StringBuilder* receiver,
                                                                         ::by_ref<int32_t> precision, ::by_ref<int32_t> scale, ::by_ref<bool> sign) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::FormatProvider*>(),
                                                           { "TryStringToBigInteger",
                                                             {},
                                                             { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(),
                                                               ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<::System::Text::StringBuilder*>(),
                                                               ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, s, styles, numberFormatInfo, receiver, precision, scale, sign);
}
// Ctor Parameters []
constexpr ::System::Globalization::FormatProvider::FormatProvider() {}
