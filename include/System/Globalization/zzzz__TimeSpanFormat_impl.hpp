#pragma once
#include "System/Globalization/zzzz__TimeSpanFormat_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Globalization/zzzz__TimeSpanFormat_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/Globalization/zzzz__DateTimeFormatInfo_def.hpp"
#include "System/Globalization/zzzz__TimeSpanFormat_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Globalization::__TimeSpanFormat__Pattern::__TimeSpanFormat__Pattern(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Globalization::__TimeSpanFormat__Pattern::__TimeSpanFormat__Pattern() {}
constexpr ::System::Globalization::__TimeSpanFormat__Pattern System::Globalization::__TimeSpanFormat__Pattern::None{ static_cast<int32_t>(0x0) };
constexpr ::System::Globalization::__TimeSpanFormat__Pattern System::Globalization::__TimeSpanFormat__Pattern::Minimum{ static_cast<int32_t>(0x1) };
constexpr ::System::Globalization::__TimeSpanFormat__Pattern System::Globalization::__TimeSpanFormat__Pattern::Full{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::System::Globalization::__TimeSpanFormat__FormatLiterals.get_Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Globalization::__TimeSpanFormat__FormatLiterals::*)()>(
    &::System::Globalization::__TimeSpanFormat__FormatLiterals::get_Start)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x25566e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__TimeSpanFormat__FormatLiterals>::get(),
                                                                               "get_Start", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::__TimeSpanFormat__FormatLiterals.get_DayHourSep
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Globalization::__TimeSpanFormat__FormatLiterals::*)()>(
    &::System::Globalization::__TimeSpanFormat__FormatLiterals::get_DayHourSep)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2556708;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__TimeSpanFormat__FormatLiterals>::get(),
                                                                               "get_DayHourSep", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::__TimeSpanFormat__FormatLiterals.get_HourMinuteSep
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Globalization::__TimeSpanFormat__FormatLiterals::*)()>(
    &::System::Globalization::__TimeSpanFormat__FormatLiterals::get_HourMinuteSep)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2556734;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__TimeSpanFormat__FormatLiterals>::get(),
                                                                               "get_HourMinuteSep", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::__TimeSpanFormat__FormatLiterals.get_MinuteSecondSep
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Globalization::__TimeSpanFormat__FormatLiterals::*)()>(
    &::System::Globalization::__TimeSpanFormat__FormatLiterals::get_MinuteSecondSep)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2556760;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__TimeSpanFormat__FormatLiterals>::get(),
                                                                               "get_MinuteSecondSep", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::__TimeSpanFormat__FormatLiterals.get_SecondFractionSep
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Globalization::__TimeSpanFormat__FormatLiterals::*)()>(
    &::System::Globalization::__TimeSpanFormat__FormatLiterals::get_SecondFractionSep)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x255678c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__TimeSpanFormat__FormatLiterals>::get(),
                                                                               "get_SecondFractionSep", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::__TimeSpanFormat__FormatLiterals.get_End
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Globalization::__TimeSpanFormat__FormatLiterals::*)()>(
    &::System::Globalization::__TimeSpanFormat__FormatLiterals::get_End)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x25567b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__TimeSpanFormat__FormatLiterals>::get(),
                                                                               "get_End", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::__TimeSpanFormat__FormatLiterals.InitInvariant
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::__TimeSpanFormat__FormatLiterals (*)(bool)>(
    &::System::Globalization::__TimeSpanFormat__FormatLiterals::InitInvariant)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x2556878;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__TimeSpanFormat__FormatLiterals>::get(), "InitInvariant",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::__TimeSpanFormat__FormatLiterals.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Globalization::__TimeSpanFormat__FormatLiterals::*)(::System::ReadOnlySpan_1<char16_t>, bool)>(
    &::System::Globalization::__TimeSpanFormat__FormatLiterals::Init)> {
  constexpr static std::size_t size = 0x3f8;
  constexpr static std::size_t addrs = 0x2556258;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__TimeSpanFormat__FormatLiterals>::get(), "Init", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
inline ::StringW System::Globalization::__TimeSpanFormat__FormatLiterals::get_Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__TimeSpanFormat__FormatLiterals>::get(),
                                                                             "get_Start", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Globalization::__TimeSpanFormat__FormatLiterals::get_DayHourSep() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__TimeSpanFormat__FormatLiterals>::get(),
                                                                             "get_DayHourSep", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Globalization::__TimeSpanFormat__FormatLiterals::get_HourMinuteSep() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__TimeSpanFormat__FormatLiterals>::get(),
                                                                             "get_HourMinuteSep", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Globalization::__TimeSpanFormat__FormatLiterals::get_MinuteSecondSep() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__TimeSpanFormat__FormatLiterals>::get(),
                                                                             "get_MinuteSecondSep", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Globalization::__TimeSpanFormat__FormatLiterals::get_SecondFractionSep() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__TimeSpanFormat__FormatLiterals>::get(),
                                                                             "get_SecondFractionSep", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Globalization::__TimeSpanFormat__FormatLiterals::get_End() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__TimeSpanFormat__FormatLiterals>::get(),
                                                                             "get_End", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Globalization::__TimeSpanFormat__FormatLiterals System::Globalization::__TimeSpanFormat__FormatLiterals::InitInvariant(bool isNegative) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__TimeSpanFormat__FormatLiterals>::get(), "InitInvariant",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::__TimeSpanFormat__FormatLiterals, false>(nullptr, ___internal_method, isNegative);
}
inline void System::Globalization::__TimeSpanFormat__FormatLiterals::Init(::System::ReadOnlySpan_1<char16_t> format, bool useInvariantFieldLengths) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__TimeSpanFormat__FormatLiterals>::get(), "Init", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, format, useInvariantFieldLengths);
}
// Ctor Parameters [CppParam { name: "AppCompatLiteral", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "dd", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "hh", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "mm", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ss", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "ff", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_literals", ty: "::ArrayW<::StringW,::Array<::StringW>*>",
// modifiers: "", def_value: Some("nullptr") }]
constexpr ::System::Globalization::__TimeSpanFormat__FormatLiterals::__TimeSpanFormat__FormatLiterals(::StringW AppCompatLiteral, int32_t dd, int32_t hh, int32_t mm, int32_t ss, int32_t ff,
                                                                                                      ::ArrayW<::StringW, ::Array<::StringW>*> _literals) noexcept {
  this->AppCompatLiteral = AppCompatLiteral;
  this->dd = dd;
  this->hh = hh;
  this->mm = mm;
  this->ss = ss;
  this->ff = ff;
  this->_literals = _literals;
}
// Ctor Parameters []
constexpr ::System::Globalization::__TimeSpanFormat__FormatLiterals::__TimeSpanFormat__FormatLiterals() {}
//  Writing Method size for method: ::System::Globalization::TimeSpanFormat.AppendNonNegativeInt32
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Text::StringBuilder*, int32_t, int32_t)>(
    &::System::Globalization::TimeSpanFormat::AppendNonNegativeInt32)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2555160;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanFormat*>::get(), "AppendNonNegativeInt32", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanFormat.Format
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::TimeSpan, ::StringW, ::System::IFormatProvider*)>(
    &::System::Globalization::TimeSpanFormat::Format)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2555258;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanFormat*>::get(), "Format", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanFormat.TryFormat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::TimeSpan, ::System::Span_1<char16_t>, ByRef<int32_t>, ::System::ReadOnlySpan_1<char16_t>,
                                                                                           ::System::IFormatProvider*)>(&::System::Globalization::TimeSpanFormat::TryFormat)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x25555b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanFormat*>::get(), "TryFormat", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<char16_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanFormat.FormatToBuilder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Text::StringBuilder* (*)(::System::TimeSpan, ::System::ReadOnlySpan_1<char16_t>, ::System::IFormatProvider*)>(&::System::Globalization::TimeSpanFormat::FormatToBuilder)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x2555310;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanFormat*>::get(), "FormatToBuilder", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanFormat.FormatStandard
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Text::StringBuilder* (*)(::System::TimeSpan, bool, ::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::__TimeSpanFormat__Pattern)>(
        &::System::Globalization::TimeSpanFormat::FormatStandard)> {
  constexpr static std::size_t size = 0x48c;
  constexpr static std::size_t addrs = 0x25556d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanFormat*>::get(), "FormatStandard", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::__TimeSpanFormat__Pattern>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanFormat.FormatCustomized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Text::StringBuilder* (*)(::System::TimeSpan, ::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::DateTimeFormatInfo*, ::System::Text::StringBuilder*)>(
        &::System::Globalization::TimeSpanFormat::FormatCustomized)> {
  constexpr static std::size_t size = 0x6f8;
  constexpr static std::size_t addrs = 0x2555b60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanFormat*>::get(), "FormatCustomized", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get() })));
    return ___internal_method;
  }
};
inline void System::Globalization::TimeSpanFormat::setStaticF_PositiveInvariantFormatLiterals(::System::Globalization::__TimeSpanFormat__FormatLiterals value) {
  ::cordl_internals::setStaticField<::System::Globalization::__TimeSpanFormat__FormatLiterals, "PositiveInvariantFormatLiterals",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanFormat*>::get>(
      std::forward<::System::Globalization::__TimeSpanFormat__FormatLiterals>(value));
}
inline ::System::Globalization::__TimeSpanFormat__FormatLiterals System::Globalization::TimeSpanFormat::getStaticF_PositiveInvariantFormatLiterals() {
  return ::cordl_internals::getStaticField<::System::Globalization::__TimeSpanFormat__FormatLiterals, "PositiveInvariantFormatLiterals",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanFormat*>::get>();
}
inline void System::Globalization::TimeSpanFormat::setStaticF_NegativeInvariantFormatLiterals(::System::Globalization::__TimeSpanFormat__FormatLiterals value) {
  ::cordl_internals::setStaticField<::System::Globalization::__TimeSpanFormat__FormatLiterals, "NegativeInvariantFormatLiterals",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanFormat*>::get>(
      std::forward<::System::Globalization::__TimeSpanFormat__FormatLiterals>(value));
}
inline ::System::Globalization::__TimeSpanFormat__FormatLiterals System::Globalization::TimeSpanFormat::getStaticF_NegativeInvariantFormatLiterals() {
  return ::cordl_internals::getStaticField<::System::Globalization::__TimeSpanFormat__FormatLiterals, "NegativeInvariantFormatLiterals",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanFormat*>::get>();
}
inline void System::Globalization::TimeSpanFormat::AppendNonNegativeInt32(::System::Text::StringBuilder* sb, int32_t n, int32_t digits) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanFormat*>::get(), "AppendNonNegativeInt32", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sb, n, digits);
}
inline ::StringW System::Globalization::TimeSpanFormat::Format(::System::TimeSpan value, ::StringW format, ::System::IFormatProvider* formatProvider) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanFormat*>::get(), "Format", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, value, format, formatProvider);
}
inline bool System::Globalization::TimeSpanFormat::TryFormat(::System::TimeSpan value, ::System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten, ::System::ReadOnlySpan_1<char16_t> format,
                                                             ::System::IFormatProvider* formatProvider) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanFormat*>::get(), "TryFormat", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<char16_t>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, value, destination, charsWritten, format, formatProvider);
}
inline ::System::Text::StringBuilder* System::Globalization::TimeSpanFormat::FormatToBuilder(::System::TimeSpan value, ::System::ReadOnlySpan_1<char16_t> format,
                                                                                             ::System::IFormatProvider* formatProvider) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanFormat*>::get(), "FormatToBuilder", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::StringBuilder*, false>(nullptr, ___internal_method, value, format, formatProvider);
}
inline ::System::Text::StringBuilder* System::Globalization::TimeSpanFormat::FormatStandard(::System::TimeSpan value, bool isInvariant, ::System::ReadOnlySpan_1<char16_t> format,
                                                                                            ::System::Globalization::__TimeSpanFormat__Pattern pattern) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanFormat*>::get(), "FormatStandard", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::__TimeSpanFormat__Pattern>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::StringBuilder*, false>(nullptr, ___internal_method, value, isInvariant, format, pattern);
}
inline ::System::Text::StringBuilder* System::Globalization::TimeSpanFormat::FormatCustomized(::System::TimeSpan value, ::System::ReadOnlySpan_1<char16_t> format,
                                                                                              ::System::Globalization::DateTimeFormatInfo* dtfi, ::System::Text::StringBuilder* result) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanFormat*>::get(), "FormatCustomized", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::StringBuilder*, false>(nullptr, ___internal_method, value, format, dtfi, result);
}
// Ctor Parameters []
constexpr ::System::Globalization::TimeSpanFormat::TimeSpanFormat() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
