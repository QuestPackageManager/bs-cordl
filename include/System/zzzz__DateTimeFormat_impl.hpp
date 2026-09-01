#pragma once
// IWYU pragma private; include "System\DateTimeFormat.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__TimeSpan_impl.hpp"
#include "System/zzzz__DateTimeFormat_def.hpp"
#include "System/Globalization/zzzz__DateTimeFormatInfo_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::System::DateTimeFormat.FormatDigits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Text::StringBuilder*, int32_t, int32_t)>(&::System::DateTimeFormat::FormatDigits)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5c30b14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeFormat*>(),
                                                             { "FormatDigits", {}, { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeFormat.FormatDigits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Text::StringBuilder*, int32_t, int32_t, bool)>(&::System::DateTimeFormat::FormatDigits)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5c30b88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::DateTimeFormat*>(),
                                         { "FormatDigits", {}, { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeFormat.HebrewFormatDigits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Text::StringBuilder*, int32_t)>(&::System::DateTimeFormat::HebrewFormatDigits)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5c30c90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::DateTimeFormat*>(), { "HebrewFormatDigits", {}, { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeFormat.ParseRepeatPattern
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::ReadOnlySpan_1<char16_t>, int32_t, char16_t)>(&::System::DateTimeFormat::ParseRepeatPattern)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5c30d10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeFormat*>(),
                                                { "ParseRepeatPattern", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeFormat.FormatDayOfWeek
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int32_t, int32_t, ::System::Globalization::DateTimeFormatInfo*)>(&::System::DateTimeFormat::FormatDayOfWeek)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5c30dac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeFormat*>(),
                                                { "FormatDayOfWeek", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeFormat.FormatMonth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int32_t, int32_t, ::System::Globalization::DateTimeFormatInfo*)>(&::System::DateTimeFormat::FormatMonth)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5c30de8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeFormat*>(),
                                                { "FormatMonth", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeFormat.FormatHebrewMonthName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::DateTime, int32_t, int32_t, ::System::Globalization::DateTimeFormatInfo*)>(
    &::System::DateTimeFormat::FormatHebrewMonthName)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5c30e24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeFormat*>(), { "FormatHebrewMonthName",
                                                                                                {},
                                                                                                { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                                  ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeFormat.ParseQuoteString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::ReadOnlySpan_1<char16_t>, int32_t, ::System::Text::StringBuilder*)>(&::System::DateTimeFormat::ParseQuoteString)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x5c30ee4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::DateTimeFormat*>(),
                            { "ParseQuoteString", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Text::StringBuilder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeFormat.ParseNextChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::ReadOnlySpan_1<char16_t>, int32_t)>(&::System::DateTimeFormat::ParseNextChar)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5c31090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::DateTimeFormat*>(), { "ParseNextChar", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeFormat.IsUseGenitiveForm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, int32_t, int32_t, char16_t)>(&::System::DateTimeFormat::IsUseGenitiveForm)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5c31108;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::DateTimeFormat*>(),
                            { "IsUseGenitiveForm", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeFormat.FormatCustomized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::StringBuilder* (*)(::System::DateTime, ::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::DateTimeFormatInfo*,
                                                                                          ::System::TimeSpan, ::System::Text::StringBuilder*)>(&::System::DateTimeFormat::FormatCustomized)> {
  constexpr static std::size_t size = 0x11c0;
  constexpr static std::size_t addrs = 0x5c31274;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::DateTimeFormat*>(),
                                         { "FormatCustomized",
                                           {},
                                           { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(),
                                             ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::Text::StringBuilder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeFormat.FormatCustomizedTimeZone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::DateTime, ::System::TimeSpan, ::System::ReadOnlySpan_1<char16_t>, int32_t, bool, ::System::Text::StringBuilder*)>(
    &::System::DateTimeFormat::FormatCustomizedTimeZone)> {
  constexpr static std::size_t size = 0x4a8;
  constexpr static std::size_t addrs = 0x5c32434;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeFormat*>(),
                                                             { "FormatCustomizedTimeZone",
                                                               {},
                                                               { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Text::StringBuilder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeFormat.FormatCustomizedRoundripTimeZone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::DateTime, ::System::TimeSpan, ::System::Text::StringBuilder*)>(&::System::DateTimeFormat::FormatCustomizedRoundripTimeZone)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x5c328dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::DateTimeFormat*>(),
            { "FormatCustomizedRoundripTimeZone", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::Text::StringBuilder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeFormat.Append2DigitNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Text::StringBuilder*, int32_t)>(&::System::DateTimeFormat::Append2DigitNumber)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5c32bf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::DateTimeFormat*>(), { "Append2DigitNumber", {}, { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeFormat.GetRealFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::DateTimeFormatInfo*)>(&::System::DateTimeFormat::GetRealFormat)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0x5c32c4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeFormat*>(),
                                                { "GetRealFormat", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeFormat.ExpandPredefinedFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::ReadOnlySpan_1<char16_t>, ::by_ref<::System::DateTime>, ::by_ref<::System::Globalization::DateTimeFormatInfo*>,
                                                                     ::by_ref<::System::TimeSpan>)>(&::System::DateTimeFormat::ExpandPredefinedFormat)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x5c32fd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeFormat*>(),
                                                             { "ExpandPredefinedFormat",
                                                               {},
                                                               { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::by_ref<::System::DateTime>>(),
                                                                 ::i2c::type_of<::by_ref<::System::Globalization::DateTimeFormatInfo*>>(), ::i2c::type_of<::by_ref<::System::TimeSpan>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeFormat.Format
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::DateTime, ::StringW, ::System::IFormatProvider*)>(&::System::DateTimeFormat::Format)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5c29e30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeFormat*>(),
                                                             { "Format", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeFormat.Format
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::DateTime, ::StringW, ::System::IFormatProvider*, ::System::TimeSpan)>(&::System::DateTimeFormat::Format)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x5c2daf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::System::DateTimeFormat*>(),
                         { "Format", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>(), ::i2c::type_of<::System::TimeSpan>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeFormat.TryFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::DateTime, ::System::Span_1<char16_t>, ::by_ref<int32_t>, ::System::ReadOnlySpan_1<char16_t>, ::System::IFormatProvider*)>(
    &::System::DateTimeFormat::TryFormat)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5c2a0a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::DateTimeFormat*>(), { "TryFormat",
                                                                            {},
                                                                            { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                                                              ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeFormat.TryFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::DateTime, ::System::Span_1<char16_t>, ::by_ref<int32_t>, ::System::ReadOnlySpan_1<char16_t>, ::System::IFormatProvider*,
                                                                ::System::TimeSpan)>(&::System::DateTimeFormat::TryFormat)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x5c2e088;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeFormat*>(),
                                                { "TryFormat",
                                                  {},
                                                  { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                                    ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::IFormatProvider*>(), ::i2c::type_of<::System::TimeSpan>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeFormat.FormatStringBuilder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::StringBuilder* (*)(::System::DateTime, ::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::DateTimeFormatInfo*,
                                                                                          ::System::TimeSpan)>(&::System::DateTimeFormat::FormatStringBuilder)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x5c33c18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::DateTimeFormat*>(), { "FormatStringBuilder",
                                                                                         {},
                                                                                         { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(),
                                                                                           ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::System::TimeSpan>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeFormat.TryFormatO
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::DateTime, ::System::TimeSpan, ::System::Span_1<char16_t>, ::by_ref<int32_t>)>(&::System::DateTimeFormat::TryFormatO)> {
  constexpr static std::size_t size = 0x544;
  constexpr static std::size_t addrs = 0x5c33354;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::DateTimeFormat*>(),
            { "TryFormatO", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeFormat.TryFormatR
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::DateTime, ::System::TimeSpan, ::System::Span_1<char16_t>, ::by_ref<int32_t>)>(&::System::DateTimeFormat::TryFormatR)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x5c33898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::DateTimeFormat*>(),
            { "TryFormatR", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeFormat.WriteTwoDecimalDigits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint32_t, ::System::Span_1<char16_t>, int32_t)>(&::System::DateTimeFormat::WriteTwoDecimalDigits)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5c33f60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeFormat*>(),
                                                { "WriteTwoDecimalDigits", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeFormat.WriteFourDecimalDigits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint32_t, ::System::Span_1<char16_t>, int32_t)>(&::System::DateTimeFormat::WriteFourDecimalDigits)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5c33fac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeFormat*>(),
                                                { "WriteFourDecimalDigits", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeFormat.WriteDigits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t, ::System::Span_1<char16_t>)>(&::System::DateTimeFormat::WriteDigits)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5c3404c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeFormat*>(), { "WriteDigits", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::System::Span_1<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeFormat.InvalidFormatForLocal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::ReadOnlySpan_1<char16_t>, ::System::DateTime)>(&::System::DateTimeFormat::InvalidFormatForLocal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c33350;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeFormat*>(),
                                                             { "InvalidFormatForLocal", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::DateTime>() } })));
    return ___internal_method;
  }
};
inline void System::DateTimeFormat::setStaticF_NullOffset(::System::TimeSpan value) {
  ::cordl_internals::setStaticField<::System::TimeSpan, "NullOffset", ::System::DateTimeFormat*>(std::forward<::System::TimeSpan>(value));
}
inline ::System::TimeSpan System::DateTimeFormat::getStaticF_NullOffset() {
  return ::cordl_internals::getStaticField<::System::TimeSpan, "NullOffset", ::System::DateTimeFormat*>();
}
inline void System::DateTimeFormat::setStaticF_allStandardFormats(::ArrayW<char16_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<char16_t>, "allStandardFormats", ::System::DateTimeFormat*>(std::forward<::ArrayW<char16_t>>(value));
}
inline ::ArrayW<char16_t> System::DateTimeFormat::getStaticF_allStandardFormats() {
  return ::cordl_internals::getStaticField<::ArrayW<char16_t>, "allStandardFormats", ::System::DateTimeFormat*>();
}
inline void System::DateTimeFormat::setStaticF_InvariantFormatInfo(::System::Globalization::DateTimeFormatInfo* value) {
  ::cordl_internals::setStaticField<::System::Globalization::DateTimeFormatInfo*, "InvariantFormatInfo", ::System::DateTimeFormat*>(std::forward<::System::Globalization::DateTimeFormatInfo*>(value));
}
inline ::System::Globalization::DateTimeFormatInfo* System::DateTimeFormat::getStaticF_InvariantFormatInfo() {
  return ::cordl_internals::getStaticField<::System::Globalization::DateTimeFormatInfo*, "InvariantFormatInfo", ::System::DateTimeFormat*>();
}
inline void System::DateTimeFormat::setStaticF_InvariantAbbreviatedMonthNames(::ArrayW<::StringW> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW>, "InvariantAbbreviatedMonthNames", ::System::DateTimeFormat*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> System::DateTimeFormat::getStaticF_InvariantAbbreviatedMonthNames() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "InvariantAbbreviatedMonthNames", ::System::DateTimeFormat*>();
}
inline void System::DateTimeFormat::setStaticF_InvariantAbbreviatedDayNames(::ArrayW<::StringW> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW>, "InvariantAbbreviatedDayNames", ::System::DateTimeFormat*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> System::DateTimeFormat::getStaticF_InvariantAbbreviatedDayNames() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "InvariantAbbreviatedDayNames", ::System::DateTimeFormat*>();
}
inline void System::DateTimeFormat::setStaticF_fixedNumberFormats(::ArrayW<::StringW> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW>, "fixedNumberFormats", ::System::DateTimeFormat*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> System::DateTimeFormat::getStaticF_fixedNumberFormats() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "fixedNumberFormats", ::System::DateTimeFormat*>();
}
inline void System::DateTimeFormat::FormatDigits(::System::Text::StringBuilder* outputBuffer, int32_t value, int32_t len) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeFormat*>(),
                                                           { "FormatDigits", {}, { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, outputBuffer, value, len);
}
inline void System::DateTimeFormat::FormatDigits(::System::Text::StringBuilder* outputBuffer, int32_t value, int32_t len, bool overrideLengthLimit) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::DateTimeFormat*>(),
                                       { "FormatDigits", {}, { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, outputBuffer, value, len, overrideLengthLimit);
}
inline void System::DateTimeFormat::HebrewFormatDigits(::System::Text::StringBuilder* outputBuffer, int32_t digits) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::DateTimeFormat*>(), { "HebrewFormatDigits", {}, { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, outputBuffer, digits);
}
inline int32_t System::DateTimeFormat::ParseRepeatPattern(::System::ReadOnlySpan_1<char16_t> format, int32_t pos, char16_t patternChar) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeFormat*>(),
                                              { "ParseRepeatPattern", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, format, pos, patternChar);
}
inline ::StringW System::DateTimeFormat::FormatDayOfWeek(int32_t dayOfWeek, int32_t repeat, ::System::Globalization::DateTimeFormatInfo* dtfi) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeFormat*>(),
                                              { "FormatDayOfWeek", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, dayOfWeek, repeat, dtfi);
}
inline ::StringW System::DateTimeFormat::FormatMonth(int32_t month, int32_t repeatCount, ::System::Globalization::DateTimeFormatInfo* dtfi) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeFormat*>(),
                                              { "FormatMonth", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, month, repeatCount, dtfi);
}
inline ::StringW System::DateTimeFormat::FormatHebrewMonthName(::System::DateTime time, int32_t month, int32_t repeatCount, ::System::Globalization::DateTimeFormatInfo* dtfi) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeFormat*>(), { "FormatHebrewMonthName",
                                                                                                           {},
                                                                                                           { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                                             ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, time, month, repeatCount, dtfi);
}
inline int32_t System::DateTimeFormat::ParseQuoteString(::System::ReadOnlySpan_1<char16_t> format, int32_t pos, ::System::Text::StringBuilder* result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::DateTimeFormat*>(),
                          { "ParseQuoteString", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Text::StringBuilder*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, format, pos, result);
}
inline int32_t System::DateTimeFormat::ParseNextChar(::System::ReadOnlySpan_1<char16_t> format, int32_t pos) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::DateTimeFormat*>(), { "ParseNextChar", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, format, pos);
}
inline bool System::DateTimeFormat::IsUseGenitiveForm(::System::ReadOnlySpan_1<char16_t> format, int32_t index, int32_t tokenLen, char16_t patternToMatch) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::DateTimeFormat*>(),
                          { "IsUseGenitiveForm", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, format, index, tokenLen, patternToMatch);
}
inline ::System::Text::StringBuilder* System::DateTimeFormat::FormatCustomized(::System::DateTime dateTime, ::System::ReadOnlySpan_1<char16_t> format,
                                                                               ::System::Globalization::DateTimeFormatInfo* dtfi, ::System::TimeSpan offset, ::System::Text::StringBuilder* result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::DateTimeFormat*>(),
                                       { "FormatCustomized",
                                         {},
                                         { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(),
                                           ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::Text::StringBuilder*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::StringBuilder*>(nullptr, ___internal_method, dateTime, format, dtfi, offset, result);
}
inline void System::DateTimeFormat::FormatCustomizedTimeZone(::System::DateTime dateTime, ::System::TimeSpan offset, ::System::ReadOnlySpan_1<char16_t> format, int32_t tokenLen, bool timeOnly,
                                                             ::System::Text::StringBuilder* result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeFormat*>(),
                                                           { "FormatCustomizedTimeZone",
                                                             {},
                                                             { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Text::StringBuilder*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dateTime, offset, format, tokenLen, timeOnly, result);
}
inline void System::DateTimeFormat::FormatCustomizedRoundripTimeZone(::System::DateTime dateTime, ::System::TimeSpan offset, ::System::Text::StringBuilder* result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::System::DateTimeFormat*>(),
                       { "FormatCustomizedRoundripTimeZone", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::Text::StringBuilder*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dateTime, offset, result);
}
inline void System::DateTimeFormat::Append2DigitNumber(::System::Text::StringBuilder* result, int32_t val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::DateTimeFormat*>(), { "Append2DigitNumber", {}, { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, result, val);
}
inline ::StringW System::DateTimeFormat::GetRealFormat(::System::ReadOnlySpan_1<char16_t> format, ::System::Globalization::DateTimeFormatInfo* dtfi) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeFormat*>(),
                                              { "GetRealFormat", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, format, dtfi);
}
inline ::StringW System::DateTimeFormat::ExpandPredefinedFormat(::System::ReadOnlySpan_1<char16_t> format, ::by_ref<::System::DateTime> dateTime,
                                                                ::by_ref<::System::Globalization::DateTimeFormatInfo*> dtfi, ::by_ref<::System::TimeSpan> offset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeFormat*>(),
                                                           { "ExpandPredefinedFormat",
                                                             {},
                                                             { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::by_ref<::System::DateTime>>(),
                                                               ::i2c::type_of<::by_ref<::System::Globalization::DateTimeFormatInfo*>>(), ::i2c::type_of<::by_ref<::System::TimeSpan>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, format, dateTime, dtfi, offset);
}
inline ::StringW System::DateTimeFormat::Format(::System::DateTime dateTime, ::StringW format, ::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeFormat*>(),
                                                           { "Format", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, dateTime, format, provider);
}
inline ::StringW System::DateTimeFormat::Format(::System::DateTime dateTime, ::StringW format, ::System::IFormatProvider* provider, ::System::TimeSpan offset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::System::DateTimeFormat*>(),
                       { "Format", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>(), ::i2c::type_of<::System::TimeSpan>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, dateTime, format, provider, offset);
}
inline bool System::DateTimeFormat::TryFormat(::System::DateTime dateTime, ::System::Span_1<char16_t> destination, ::by_ref<int32_t> charsWritten, ::System::ReadOnlySpan_1<char16_t> format,
                                              ::System::IFormatProvider* provider) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::DateTimeFormat*>(), { "TryFormat",
                                                                          {},
                                                                          { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                                                            ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, dateTime, destination, charsWritten, format, provider);
}
inline bool System::DateTimeFormat::TryFormat(::System::DateTime dateTime, ::System::Span_1<char16_t> destination, ::by_ref<int32_t> charsWritten, ::System::ReadOnlySpan_1<char16_t> format,
                                              ::System::IFormatProvider* provider, ::System::TimeSpan offset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeFormat*>(), { "TryFormat",
                                                                                                           {},
                                                                                                           { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::Span_1<char16_t>>(),
                                                                                                             ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(),
                                                                                                             ::i2c::type_of<::System::IFormatProvider*>(), ::i2c::type_of<::System::TimeSpan>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, dateTime, destination, charsWritten, format, provider, offset);
}
inline ::System::Text::StringBuilder* System::DateTimeFormat::FormatStringBuilder(::System::DateTime dateTime, ::System::ReadOnlySpan_1<char16_t> format,
                                                                                  ::System::Globalization::DateTimeFormatInfo* dtfi, ::System::TimeSpan offset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::DateTimeFormat*>(), { "FormatStringBuilder",
                                                                                       {},
                                                                                       { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(),
                                                                                         ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::System::TimeSpan>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::StringBuilder*>(nullptr, ___internal_method, dateTime, format, dtfi, offset);
}
inline bool System::DateTimeFormat::TryFormatO(::System::DateTime dateTime, ::System::TimeSpan offset, ::System::Span_1<char16_t> destination, ::by_ref<int32_t> charsWritten) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::DateTimeFormat*>(),
          { "TryFormatO", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, dateTime, offset, destination, charsWritten);
}
inline bool System::DateTimeFormat::TryFormatR(::System::DateTime dateTime, ::System::TimeSpan offset, ::System::Span_1<char16_t> destination, ::by_ref<int32_t> charsWritten) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::DateTimeFormat*>(),
          { "TryFormatR", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, dateTime, offset, destination, charsWritten);
}
inline void System::DateTimeFormat::WriteTwoDecimalDigits(uint32_t value, ::System::Span_1<char16_t> destination, int32_t offset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeFormat*>(),
                                                           { "WriteTwoDecimalDigits", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value, destination, offset);
}
inline void System::DateTimeFormat::WriteFourDecimalDigits(uint32_t value, ::System::Span_1<char16_t> buffer, int32_t startingIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeFormat*>(),
                                                           { "WriteFourDecimalDigits", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value, buffer, startingIndex);
}
inline void System::DateTimeFormat::WriteDigits(uint64_t value, ::System::Span_1<char16_t> buffer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeFormat*>(), { "WriteDigits", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::System::Span_1<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value, buffer);
}
inline void System::DateTimeFormat::InvalidFormatForLocal(::System::ReadOnlySpan_1<char16_t> format, ::System::DateTime dateTime) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeFormat*>(),
                                                           { "InvalidFormatForLocal", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::DateTime>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, format, dateTime);
}
// Ctor Parameters []
constexpr ::System::DateTimeFormat::DateTimeFormat() {}
