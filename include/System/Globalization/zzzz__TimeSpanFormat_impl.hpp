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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Globalization::TimeSpanFormat_FormatLiterals::*)()>(
    &::System::Globalization::TimeSpanFormat_FormatLiterals::get_Start)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3d8fe0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanFormat_FormatLiterals>::get(),
                                                                               "get_Start", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanFormat_FormatLiterals.get_DayHourSep
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Globalization::TimeSpanFormat_FormatLiterals::*)()>(
    &::System::Globalization::TimeSpanFormat_FormatLiterals::get_DayHourSep)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3d8fe34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanFormat_FormatLiterals>::get(),
                                                                               "get_DayHourSep", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanFormat_FormatLiterals.get_HourMinuteSep
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Globalization::TimeSpanFormat_FormatLiterals::*)()>(
    &::System::Globalization::TimeSpanFormat_FormatLiterals::get_HourMinuteSep)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3d8fe60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanFormat_FormatLiterals>::get(),
                                                                               "get_HourMinuteSep", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanFormat_FormatLiterals.get_MinuteSecondSep
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Globalization::TimeSpanFormat_FormatLiterals::*)()>(
    &::System::Globalization::TimeSpanFormat_FormatLiterals::get_MinuteSecondSep)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3d8fe8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanFormat_FormatLiterals>::get(),
                                                                               "get_MinuteSecondSep", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanFormat_FormatLiterals.get_SecondFractionSep
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Globalization::TimeSpanFormat_FormatLiterals::*)()>(
    &::System::Globalization::TimeSpanFormat_FormatLiterals::get_SecondFractionSep)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3d8feb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanFormat_FormatLiterals>::get(),
                                                                               "get_SecondFractionSep", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanFormat_FormatLiterals.get_End
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Globalization::TimeSpanFormat_FormatLiterals::*)()>(
    &::System::Globalization::TimeSpanFormat_FormatLiterals::get_End)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3d8fee4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanFormat_FormatLiterals>::get(),
                                                                               "get_End", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanFormat_FormatLiterals.InitInvariant
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::TimeSpanFormat_FormatLiterals (*)(bool)>(
    &::System::Globalization::TimeSpanFormat_FormatLiterals::InitInvariant)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x3d8ff10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanFormat_FormatLiterals>::get(), "InitInvariant",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanFormat_FormatLiterals.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Globalization::TimeSpanFormat_FormatLiterals::*)(::System::ReadOnlySpan_1<char16_t>, bool)>(
    &::System::Globalization::TimeSpanFormat_FormatLiterals::Init)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x3d90070;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanFormat_FormatLiterals>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
inline ::StringW System::Globalization::TimeSpanFormat_FormatLiterals::get_Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanFormat_FormatLiterals>::get(),
                                                                             "get_Start", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Globalization::TimeSpanFormat_FormatLiterals::get_DayHourSep() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanFormat_FormatLiterals>::get(),
                                                                             "get_DayHourSep", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Globalization::TimeSpanFormat_FormatLiterals::get_HourMinuteSep() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanFormat_FormatLiterals>::get(),
                                                                             "get_HourMinuteSep", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Globalization::TimeSpanFormat_FormatLiterals::get_MinuteSecondSep() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanFormat_FormatLiterals>::get(),
                                                                             "get_MinuteSecondSep", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Globalization::TimeSpanFormat_FormatLiterals::get_SecondFractionSep() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanFormat_FormatLiterals>::get(),
                                                                             "get_SecondFractionSep", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Globalization::TimeSpanFormat_FormatLiterals::get_End() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanFormat_FormatLiterals>::get(),
                                                                             "get_End", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Globalization::TimeSpanFormat_FormatLiterals System::Globalization::TimeSpanFormat_FormatLiterals::InitInvariant(bool isNegative) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanFormat_FormatLiterals>::get(), "InitInvariant",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::TimeSpanFormat_FormatLiterals, false>(nullptr, ___internal_method, isNegative);
}
inline void System::Globalization::TimeSpanFormat_FormatLiterals::Init(::System::ReadOnlySpan_1<char16_t> format, bool useInvariantFieldLengths) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanFormat_FormatLiterals>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, format, useInvariantFieldLengths);
}
// Ctor Parameters [CppParam { name: "AppCompatLiteral", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "dd", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "hh", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "mm", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ss", ty: "int32_t", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "ff", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_literals", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers:
// "", def_value: Some("{}") }]
constexpr ::System::Globalization::TimeSpanFormat_FormatLiterals::TimeSpanFormat_FormatLiterals(::StringW AppCompatLiteral, int32_t dd, int32_t hh, int32_t mm, int32_t ss, int32_t ff,
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
constexpr ::System::Globalization::TimeSpanFormat_FormatLiterals::TimeSpanFormat_FormatLiterals() {}
//  Writing Method size for method: ::System::Globalization::TimeSpanFormat.AppendNonNegativeInt32
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Text::StringBuilder*, int32_t, int32_t)>(
    &::System::Globalization::TimeSpanFormat::AppendNonNegativeInt32)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x3d8e94c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanFormat*>::get(), "AppendNonNegativeInt32", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanFormat.Format
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::TimeSpan, ::StringW, ::System::IFormatProvider*)>(
    &::System::Globalization::TimeSpanFormat::Format)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x3d8ea44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanFormat*>::get(), "Format", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanFormat.TryFormat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::TimeSpan, ::System::Span_1<char16_t>, ::ByRef<int32_t>, ::System::ReadOnlySpan_1<char16_t>,
                                                                                           ::System::IFormatProvider*)>(&::System::Globalization::TimeSpanFormat::TryFormat)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x3d8edd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanFormat*>::get(), "TryFormat", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<char16_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanFormat.FormatToBuilder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Text::StringBuilder* (*)(::System::TimeSpan, ::System::ReadOnlySpan_1<char16_t>, ::System::IFormatProvider*)>(&::System::Globalization::TimeSpanFormat::FormatToBuilder)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x3d8eafc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanFormat*>::get(), "FormatToBuilder", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanFormat.FormatStandard
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Text::StringBuilder* (*)(::System::TimeSpan, bool, ::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::TimeSpanFormat_Pattern)>(
        &::System::Globalization::TimeSpanFormat::FormatStandard)> {
  constexpr static std::size_t size = 0x4f4;
  constexpr static std::size_t addrs = 0x3d8eef4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanFormat*>::get(), "FormatStandard", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::TimeSpanFormat_Pattern>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanFormat.FormatCustomized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Text::StringBuilder* (*)(::System::TimeSpan, ::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::DateTimeFormatInfo*, ::System::Text::StringBuilder*)>(
        &::System::Globalization::TimeSpanFormat::FormatCustomized)> {
  constexpr static std::size_t size = 0x728;
  constexpr static std::size_t addrs = 0x3d8f3e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanFormat*>::get(), "FormatCustomized", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeFormatInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get() })));
    return ___internal_method;
  }
};
inline void System::Globalization::TimeSpanFormat::setStaticF_PositiveInvariantFormatLiterals(::System::Globalization::TimeSpanFormat_FormatLiterals value) {
  ::cordl_internals::setStaticField<::System::Globalization::TimeSpanFormat_FormatLiterals, "PositiveInvariantFormatLiterals",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanFormat*>::get>(
      std::forward<::System::Globalization::TimeSpanFormat_FormatLiterals>(value));
}
inline ::System::Globalization::TimeSpanFormat_FormatLiterals System::Globalization::TimeSpanFormat::getStaticF_PositiveInvariantFormatLiterals() {
  return ::cordl_internals::getStaticField<::System::Globalization::TimeSpanFormat_FormatLiterals, "PositiveInvariantFormatLiterals",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanFormat*>::get>();
}
inline void System::Globalization::TimeSpanFormat::setStaticF_NegativeInvariantFormatLiterals(::System::Globalization::TimeSpanFormat_FormatLiterals value) {
  ::cordl_internals::setStaticField<::System::Globalization::TimeSpanFormat_FormatLiterals, "NegativeInvariantFormatLiterals",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanFormat*>::get>(
      std::forward<::System::Globalization::TimeSpanFormat_FormatLiterals>(value));
}
inline ::System::Globalization::TimeSpanFormat_FormatLiterals System::Globalization::TimeSpanFormat::getStaticF_NegativeInvariantFormatLiterals() {
  return ::cordl_internals::getStaticField<::System::Globalization::TimeSpanFormat_FormatLiterals, "NegativeInvariantFormatLiterals",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanFormat*>::get>();
}
inline void System::Globalization::TimeSpanFormat::AppendNonNegativeInt32(::System::Text::StringBuilder* sb, int32_t n, int32_t digits) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanFormat*>::get(), "AppendNonNegativeInt32", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sb, n, digits);
}
inline ::StringW System::Globalization::TimeSpanFormat::Format(::System::TimeSpan value, ::StringW format, ::System::IFormatProvider* formatProvider) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanFormat*>::get(), "Format", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, value, format, formatProvider);
}
inline bool System::Globalization::TimeSpanFormat::TryFormat(::System::TimeSpan value, ::System::Span_1<char16_t> destination, ::ByRef<int32_t> charsWritten, ::System::ReadOnlySpan_1<char16_t> format,
                                                             ::System::IFormatProvider* formatProvider) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanFormat*>::get(), "TryFormat", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<char16_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, value, destination, charsWritten, format, formatProvider);
}
inline ::System::Text::StringBuilder* System::Globalization::TimeSpanFormat::FormatToBuilder(::System::TimeSpan value, ::System::ReadOnlySpan_1<char16_t> format,
                                                                                             ::System::IFormatProvider* formatProvider) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanFormat*>::get(), "FormatToBuilder", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::StringBuilder*, false>(nullptr, ___internal_method, value, format, formatProvider);
}
inline ::System::Text::StringBuilder* System::Globalization::TimeSpanFormat::FormatStandard(::System::TimeSpan value, bool isInvariant, ::System::ReadOnlySpan_1<char16_t> format,
                                                                                            ::System::Globalization::TimeSpanFormat_Pattern pattern) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanFormat*>::get(), "FormatStandard", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::TimeSpanFormat_Pattern>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::StringBuilder*, false>(nullptr, ___internal_method, value, isInvariant, format, pattern);
}
inline ::System::Text::StringBuilder* System::Globalization::TimeSpanFormat::FormatCustomized(::System::TimeSpan value, ::System::ReadOnlySpan_1<char16_t> format,
                                                                                              ::System::Globalization::DateTimeFormatInfo* dtfi, ::System::Text::StringBuilder* result) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanFormat*>::get(), "FormatCustomized", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::StringBuilder*, false>(nullptr, ___internal_method, value, format, dtfi, result);
}
// Ctor Parameters []
constexpr ::System::Globalization::TimeSpanFormat::TimeSpanFormat() {}
