#pragma once
// IWYU pragma private; include "System/Globalization/TimeSpanFormat.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Globalization/zzzz__TimeSpanFormat_def.hpp"
#include "System/Globalization/zzzz__DateTimeFormatInfo_def.hpp"
#include "System/Globalization/zzzz__TimeSpanFormat_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Globalization::TimeSpanFormat_Pattern::TimeSpanFormat_Pattern(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Globalization::TimeSpanFormat_Pattern::TimeSpanFormat_Pattern() {}
constexpr ::System::Globalization::TimeSpanFormat_Pattern System::Globalization::TimeSpanFormat_Pattern::None{ static_cast<int32_t>(0x0) };
constexpr ::System::Globalization::TimeSpanFormat_Pattern System::Globalization::TimeSpanFormat_Pattern::Minimum{ static_cast<int32_t>(0x1) };
constexpr ::System::Globalization::TimeSpanFormat_Pattern System::Globalization::TimeSpanFormat_Pattern::Full{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::System::Globalization::TimeSpanFormat_FormatLiterals.get_Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Globalization::TimeSpanFormat_FormatLiterals::*)()>(&::System::Globalization::TimeSpanFormat_FormatLiterals::get_Start)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5bbc8d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanFormat_FormatLiterals>(), { "get_Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanFormat_FormatLiterals.get_DayHourSep
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Globalization::TimeSpanFormat_FormatLiterals::*)()>(
    &::System::Globalization::TimeSpanFormat_FormatLiterals::get_DayHourSep)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5bbc8f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanFormat_FormatLiterals>(), { "get_DayHourSep", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanFormat_FormatLiterals.get_HourMinuteSep
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Globalization::TimeSpanFormat_FormatLiterals::*)()>(
    &::System::Globalization::TimeSpanFormat_FormatLiterals::get_HourMinuteSep)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5bbc924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanFormat_FormatLiterals>(), { "get_HourMinuteSep", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanFormat_FormatLiterals.get_MinuteSecondSep
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Globalization::TimeSpanFormat_FormatLiterals::*)()>(
    &::System::Globalization::TimeSpanFormat_FormatLiterals::get_MinuteSecondSep)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5bbc950;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanFormat_FormatLiterals>(), { "get_MinuteSecondSep", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanFormat_FormatLiterals.get_SecondFractionSep
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Globalization::TimeSpanFormat_FormatLiterals::*)()>(
    &::System::Globalization::TimeSpanFormat_FormatLiterals::get_SecondFractionSep)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5bbc97c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanFormat_FormatLiterals>(), { "get_SecondFractionSep", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanFormat_FormatLiterals.get_End
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Globalization::TimeSpanFormat_FormatLiterals::*)()>(&::System::Globalization::TimeSpanFormat_FormatLiterals::get_End)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5bbc9a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanFormat_FormatLiterals>(), { "get_End", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanFormat_FormatLiterals.InitInvariant
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::TimeSpanFormat_FormatLiterals (*)(bool)>(&::System::Globalization::TimeSpanFormat_FormatLiterals::InitInvariant)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x5bbca6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanFormat_FormatLiterals>(), { "InitInvariant", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanFormat_FormatLiterals.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::TimeSpanFormat_FormatLiterals::*)(::System::ReadOnlySpan_1<char16_t>, bool)>(
    &::System::Globalization::TimeSpanFormat_FormatLiterals::Init)> {
  constexpr static std::size_t size = 0x364;
  constexpr static std::size_t addrs = 0x5bbc4c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanFormat_FormatLiterals>(),
                                                                                           { "Init", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline ::StringW System::Globalization::TimeSpanFormat_FormatLiterals::get_Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanFormat_FormatLiterals>(), { "get_Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW System::Globalization::TimeSpanFormat_FormatLiterals::get_DayHourSep() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanFormat_FormatLiterals>(), { "get_DayHourSep", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW System::Globalization::TimeSpanFormat_FormatLiterals::get_HourMinuteSep() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanFormat_FormatLiterals>(), { "get_HourMinuteSep", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW System::Globalization::TimeSpanFormat_FormatLiterals::get_MinuteSecondSep() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanFormat_FormatLiterals>(), { "get_MinuteSecondSep", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW System::Globalization::TimeSpanFormat_FormatLiterals::get_SecondFractionSep() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanFormat_FormatLiterals>(), { "get_SecondFractionSep", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW System::Globalization::TimeSpanFormat_FormatLiterals::get_End() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanFormat_FormatLiterals>(), { "get_End", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::System::Globalization::TimeSpanFormat_FormatLiterals System::Globalization::TimeSpanFormat_FormatLiterals::InitInvariant(bool isNegative) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanFormat_FormatLiterals>(), { "InitInvariant", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::TimeSpanFormat_FormatLiterals>(nullptr, ___internal_method, isNegative);
}
inline void System::Globalization::TimeSpanFormat_FormatLiterals::Init(::System::ReadOnlySpan_1<char16_t> format, bool useInvariantFieldLengths) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanFormat_FormatLiterals>(),
                                                                                         { "Init", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, format, useInvariantFieldLengths);
}
// Ctor Parameters [CppParam { name: "AppCompatLiteral", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "dd", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "hh", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "mm", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ss", ty: "int32_t", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "ff", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_literals", ty: "::ArrayW<::StringW>", modifiers: "", def_value:
// Some("{}") }]
constexpr ::System::Globalization::TimeSpanFormat_FormatLiterals::TimeSpanFormat_FormatLiterals(::StringW AppCompatLiteral, int32_t dd, int32_t hh, int32_t mm, int32_t ss, int32_t ff,
                                                                                                ::ArrayW<::StringW> _literals) noexcept {
  this->AppCompatLiteral = AppCompatLiteral;
  this->dd = dd;
  this->hh = hh;
  this->mm = mm;
  this->ss = ss;
  this->ff = ff;
  this->_literals = _literals;
}
// Ctor Parameters []
constexpr ::System::Globalization::TimeSpanFormat_FormatLiterals::TimeSpanFormat_FormatLiterals() {}
//  Writing Method size for method: ::System::Globalization::TimeSpanFormat.AppendNonNegativeInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Text::StringBuilder*, int32_t, int32_t)>(&::System::Globalization::TimeSpanFormat::AppendNonNegativeInt32)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5bbb354;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanFormat*>(),
                                                { "AppendNonNegativeInt32", {}, { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanFormat.Format
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::TimeSpan, ::StringW, ::System::IFormatProvider*)>(&::System::Globalization::TimeSpanFormat::Format)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5bbb44c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanFormat*>(),
                                                             { "Format", {}, { ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanFormat.TryFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::TimeSpan, ::System::Span_1<char16_t>, ::by_ref<int32_t>, ::System::ReadOnlySpan_1<char16_t>, ::System::IFormatProvider*)>(
    &::System::Globalization::TimeSpanFormat::TryFormat)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5bbb818;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanFormat*>(),
                                                             { "TryFormat",
                                                               {},
                                                               { ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                                                 ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanFormat.FormatToBuilder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::StringBuilder* (*)(::System::TimeSpan, ::System::ReadOnlySpan_1<char16_t>, ::System::IFormatProvider*)>(
    &::System::Globalization::TimeSpanFormat::FormatToBuilder)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x5bbb508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanFormat*>(),
                            { "FormatToBuilder", {}, { ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanFormat.FormatStandard
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::StringBuilder* (*)(::System::TimeSpan, bool, ::System::ReadOnlySpan_1<char16_t>,
                                                                                          ::System::Globalization::TimeSpanFormat_Pattern)>(&::System::Globalization::TimeSpanFormat::FormatStandard)> {
  constexpr static std::size_t size = 0x4a0;
  constexpr static std::size_t addrs = 0x5bbb92c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanFormat*>(),
                                                             { "FormatStandard",
                                                               {},
                                                               { ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(),
                                                                 ::i2c::type_of<::System::Globalization::TimeSpanFormat_Pattern>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanFormat.FormatCustomized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::StringBuilder* (*)(::System::TimeSpan, ::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::DateTimeFormatInfo*,
                                                                                          ::System::Text::StringBuilder*)>(&::System::Globalization::TimeSpanFormat::FormatCustomized)> {
  constexpr static std::size_t size = 0x6f8;
  constexpr static std::size_t addrs = 0x5bbbdcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanFormat*>(),
                                                             { "FormatCustomized",
                                                               {},
                                                               { ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(),
                                                                 ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::System::Text::StringBuilder*>() } })));
    return ___internal_method;
  }
};
inline void System::Globalization::TimeSpanFormat::setStaticF_PositiveInvariantFormatLiterals(::System::Globalization::TimeSpanFormat_FormatLiterals value) {
  ::cordl_internals::setStaticField<::System::Globalization::TimeSpanFormat_FormatLiterals, "PositiveInvariantFormatLiterals", ::System::Globalization::TimeSpanFormat*>(
      std::forward<::System::Globalization::TimeSpanFormat_FormatLiterals>(value));
}
inline ::System::Globalization::TimeSpanFormat_FormatLiterals System::Globalization::TimeSpanFormat::getStaticF_PositiveInvariantFormatLiterals() {
  return ::cordl_internals::getStaticField<::System::Globalization::TimeSpanFormat_FormatLiterals, "PositiveInvariantFormatLiterals", ::System::Globalization::TimeSpanFormat*>();
}
inline void System::Globalization::TimeSpanFormat::setStaticF_NegativeInvariantFormatLiterals(::System::Globalization::TimeSpanFormat_FormatLiterals value) {
  ::cordl_internals::setStaticField<::System::Globalization::TimeSpanFormat_FormatLiterals, "NegativeInvariantFormatLiterals", ::System::Globalization::TimeSpanFormat*>(
      std::forward<::System::Globalization::TimeSpanFormat_FormatLiterals>(value));
}
inline ::System::Globalization::TimeSpanFormat_FormatLiterals System::Globalization::TimeSpanFormat::getStaticF_NegativeInvariantFormatLiterals() {
  return ::cordl_internals::getStaticField<::System::Globalization::TimeSpanFormat_FormatLiterals, "NegativeInvariantFormatLiterals", ::System::Globalization::TimeSpanFormat*>();
}
inline void System::Globalization::TimeSpanFormat::AppendNonNegativeInt32(::System::Text::StringBuilder* sb, int32_t n, int32_t digits) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanFormat*>(),
                                              { "AppendNonNegativeInt32", {}, { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sb, n, digits);
}
inline ::StringW System::Globalization::TimeSpanFormat::Format(::System::TimeSpan value, ::StringW format, ::System::IFormatProvider* formatProvider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanFormat*>(),
                                                           { "Format", {}, { ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, format, formatProvider);
}
inline bool System::Globalization::TimeSpanFormat::TryFormat(::System::TimeSpan value, ::System::Span_1<char16_t> destination, ::by_ref<int32_t> charsWritten,
                                                             ::System::ReadOnlySpan_1<char16_t> format, ::System::IFormatProvider* formatProvider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanFormat*>(),
                                                           { "TryFormat",
                                                             {},
                                                             { ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                                               ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, destination, charsWritten, format, formatProvider);
}
inline ::System::Text::StringBuilder* System::Globalization::TimeSpanFormat::FormatToBuilder(::System::TimeSpan value, ::System::ReadOnlySpan_1<char16_t> format,
                                                                                             ::System::IFormatProvider* formatProvider) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanFormat*>(),
                          { "FormatToBuilder", {}, { ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::StringBuilder*>(nullptr, ___internal_method, value, format, formatProvider);
}
inline ::System::Text::StringBuilder* System::Globalization::TimeSpanFormat::FormatStandard(::System::TimeSpan value, bool isInvariant, ::System::ReadOnlySpan_1<char16_t> format,
                                                                                            ::System::Globalization::TimeSpanFormat_Pattern pattern) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanFormat*>(),
                                                           { "FormatStandard",
                                                             {},
                                                             { ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(),
                                                               ::i2c::type_of<::System::Globalization::TimeSpanFormat_Pattern>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::StringBuilder*>(nullptr, ___internal_method, value, isInvariant, format, pattern);
}
inline ::System::Text::StringBuilder* System::Globalization::TimeSpanFormat::FormatCustomized(::System::TimeSpan value, ::System::ReadOnlySpan_1<char16_t> format,
                                                                                              ::System::Globalization::DateTimeFormatInfo* dtfi, ::System::Text::StringBuilder* result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanFormat*>(),
                                                           { "FormatCustomized",
                                                             {},
                                                             { ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(),
                                                               ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::System::Text::StringBuilder*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::StringBuilder*>(nullptr, ___internal_method, value, format, dtfi, result);
}
// Ctor Parameters []
constexpr ::System::Globalization::TimeSpanFormat::TimeSpanFormat() {}
