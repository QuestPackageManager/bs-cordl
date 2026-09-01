#pragma once
// IWYU pragma private; include "System\Globalization\DateTimeFormatInfoScanner.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Globalization/zzzz__DateTimeFormatInfoScanner_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Globalization/zzzz__DateTimeFormatInfoScanner_def.hpp"
#include "System/Globalization/zzzz__DateTimeFormatInfo_def.hpp"
#include "System/Globalization/zzzz__FORMATFLAGS_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Globalization::DateTimeFormatInfoScanner_FoundDatePattern::DateTimeFormatInfoScanner_FoundDatePattern(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Globalization::DateTimeFormatInfoScanner_FoundDatePattern::DateTimeFormatInfoScanner_FoundDatePattern() {}
constexpr ::System::Globalization::DateTimeFormatInfoScanner_FoundDatePattern System::Globalization::DateTimeFormatInfoScanner_FoundDatePattern::None{ static_cast<int32_t>(0x0) };
constexpr ::System::Globalization::DateTimeFormatInfoScanner_FoundDatePattern System::Globalization::DateTimeFormatInfoScanner_FoundDatePattern::FoundYearPatternFlag{ static_cast<int32_t>(0x1) };
constexpr ::System::Globalization::DateTimeFormatInfoScanner_FoundDatePattern System::Globalization::DateTimeFormatInfoScanner_FoundDatePattern::FoundMonthPatternFlag{ static_cast<int32_t>(0x2) };
constexpr ::System::Globalization::DateTimeFormatInfoScanner_FoundDatePattern System::Globalization::DateTimeFormatInfoScanner_FoundDatePattern::FoundDayPatternFlag{ static_cast<int32_t>(0x4) };
constexpr ::System::Globalization::DateTimeFormatInfoScanner_FoundDatePattern System::Globalization::DateTimeFormatInfoScanner_FoundDatePattern::FoundYMDPatternFlag{ static_cast<int32_t>(0x7) };
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfoScanner.get_KnownWords
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* (*)()>(
    &::System::Globalization::DateTimeFormatInfoScanner::get_KnownWords)> {
  constexpr static std::size_t size = 0x54c;
  constexpr static std::size_t addrs = 0x5b9f05c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfoScanner*>(), { "get_KnownWords", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfoScanner.SkipWhiteSpacesAndNonLetter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, int32_t)>(&::System::Globalization::DateTimeFormatInfoScanner::SkipWhiteSpacesAndNonLetter)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5b9f5a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfoScanner*>(),
                                                                                           { "SkipWhiteSpacesAndNonLetter", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfoScanner.AddDateWordOrPostfix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::DateTimeFormatInfoScanner::*)(::StringW, ::StringW)>(
    &::System::Globalization::DateTimeFormatInfoScanner::AddDateWordOrPostfix)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x5b9f678;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfoScanner*>(),
                                                                                           { "AddDateWordOrPostfix", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfoScanner.AddDateWords
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::DateTimeFormatInfoScanner::*)(::StringW, int32_t, ::StringW)>(
    &::System::Globalization::DateTimeFormatInfoScanner::AddDateWords)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x5b9fb00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfoScanner*>(),
                                                             { "AddDateWords", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfoScanner.ScanRepeatChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, char16_t, int32_t, ::by_ref<int32_t>)>(&::System::Globalization::DateTimeFormatInfoScanner::ScanRepeatChar)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5b9fcdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfoScanner*>(),
                                         { "ScanRepeatChar", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfoScanner.AddIgnorableSymbols
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::DateTimeFormatInfoScanner::*)(::StringW)>(
    &::System::Globalization::DateTimeFormatInfoScanner::AddIgnorableSymbols)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x5b9f99c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfoScanner*>(), { "AddIgnorableSymbols", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfoScanner.ScanDateWord
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::DateTimeFormatInfoScanner::*)(::StringW)>(&::System::Globalization::DateTimeFormatInfoScanner::ScanDateWord)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x5b9fd5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfoScanner*>(), { "ScanDateWord", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfoScanner.GetDateWordsOfDTFI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::System::Globalization::DateTimeFormatInfoScanner::*)(::System::Globalization::DateTimeFormatInfo*)>(
    &::System::Globalization::DateTimeFormatInfoScanner::GetDateWordsOfDTFI)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x5b9e0bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfoScanner*>(),
                                                                                           { "GetDateWordsOfDTFI", {}, { ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfoScanner.GetFormatFlagGenitiveMonth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::FORMATFLAGS (*)(::ArrayW<::StringW>, ::ArrayW<::StringW>, ::ArrayW<::StringW>, ::ArrayW<::StringW>)>(
    &::System::Globalization::DateTimeFormatInfoScanner::GetFormatFlagGenitiveMonth)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5b9c45c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfoScanner*>(),
                            { "GetFormatFlagGenitiveMonth",
                              {},
                              { ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfoScanner.GetFormatFlagUseSpaceInMonthNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::FORMATFLAGS (*)(::ArrayW<::StringW>, ::ArrayW<::StringW>, ::ArrayW<::StringW>, ::ArrayW<::StringW>)>(
    &::System::Globalization::DateTimeFormatInfoScanner::GetFormatFlagUseSpaceInMonthNames)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5b9c49c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfoScanner*>(),
                            { "GetFormatFlagUseSpaceInMonthNames",
                              {},
                              { ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfoScanner.GetFormatFlagUseSpaceInDayNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::FORMATFLAGS (*)(::ArrayW<::StringW>, ::ArrayW<::StringW>)>(
    &::System::Globalization::DateTimeFormatInfoScanner::GetFormatFlagUseSpaceInDayNames)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5b9c544;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfoScanner*>(),
                                                             { "GetFormatFlagUseSpaceInDayNames", {}, { ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfoScanner.GetFormatFlagUseHebrewCalendar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::FORMATFLAGS (*)(int32_t)>(&::System::Globalization::DateTimeFormatInfoScanner::GetFormatFlagUseHebrewCalendar)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b9c574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfoScanner*>(), { "GetFormatFlagUseHebrewCalendar", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfoScanner.EqualStringArrays
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<::StringW>, ::ArrayW<::StringW>)>(&::System::Globalization::DateTimeFormatInfoScanner::EqualStringArrays)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5b9ff90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfoScanner*>(),
                                                             { "EqualStringArrays", {}, { ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfoScanner.ArrayElementsHaveSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<::StringW>)>(&::System::Globalization::DateTimeFormatInfoScanner::ArrayElementsHaveSpace)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x5ba01b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfoScanner*>(), { "ArrayElementsHaveSpace", {}, { ::i2c::type_of<::ArrayW<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfoScanner.ArrayElementsBeginWithDigit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<::StringW>)>(&::System::Globalization::DateTimeFormatInfoScanner::ArrayElementsBeginWithDigit)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5ba0044;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfoScanner*>(), { "ArrayElementsBeginWithDigit", {}, { ::i2c::type_of<::ArrayW<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfoScanner._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::DateTimeFormatInfoScanner::*)()>(&::System::Globalization::DateTimeFormatInfoScanner::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5b9e048;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfoScanner*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::StringW>*& System::Globalization::DateTimeFormatInfoScanner::__cordl_internal_get_m_dateWords() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_dateWords;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& System::Globalization::DateTimeFormatInfoScanner::__cordl_internal_get_m_dateWords() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_dateWords;
}
constexpr void System::Globalization::DateTimeFormatInfoScanner::__cordl_internal_set_m_dateWords(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_dateWords = value;
}
constexpr ::System::Globalization::DateTimeFormatInfoScanner_FoundDatePattern& System::Globalization::DateTimeFormatInfoScanner::__cordl_internal_get__ymdFlags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ymdFlags;
}
constexpr ::System::Globalization::DateTimeFormatInfoScanner_FoundDatePattern const& System::Globalization::DateTimeFormatInfoScanner::__cordl_internal_get__ymdFlags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ymdFlags;
}
constexpr void System::Globalization::DateTimeFormatInfoScanner::__cordl_internal_set__ymdFlags(::System::Globalization::DateTimeFormatInfoScanner_FoundDatePattern value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ymdFlags = value;
}
inline void System::Globalization::DateTimeFormatInfoScanner::setStaticF_s_knownWords(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, "s_knownWords", ::System::Globalization::DateTimeFormatInfoScanner*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* System::Globalization::DateTimeFormatInfoScanner::getStaticF_s_knownWords() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, "s_knownWords", ::System::Globalization::DateTimeFormatInfoScanner*>();
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* System::Globalization::DateTimeFormatInfoScanner::get_KnownWords() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfoScanner*>(), { "get_KnownWords", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>(nullptr, ___internal_method);
}
inline int32_t System::Globalization::DateTimeFormatInfoScanner::SkipWhiteSpacesAndNonLetter(::StringW pattern, int32_t currentIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfoScanner*>(),
                                                                                         { "SkipWhiteSpacesAndNonLetter", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, pattern, currentIndex);
}
inline void System::Globalization::DateTimeFormatInfoScanner::AddDateWordOrPostfix(::StringW formatPostfix, ::StringW str) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfoScanner*>(),
                                                                                         { "AddDateWordOrPostfix", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, formatPostfix, str);
}
inline int32_t System::Globalization::DateTimeFormatInfoScanner::AddDateWords(::StringW pattern, int32_t index, ::StringW formatPostfix) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfoScanner*>(),
                                                           { "AddDateWords", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, pattern, index, formatPostfix);
}
inline int32_t System::Globalization::DateTimeFormatInfoScanner::ScanRepeatChar(::StringW pattern, char16_t ch, int32_t index, ::by_ref<int32_t> count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfoScanner*>(),
                                              { "ScanRepeatChar", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, pattern, ch, index, count);
}
inline void System::Globalization::DateTimeFormatInfoScanner::AddIgnorableSymbols(::StringW text) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfoScanner*>(), { "AddIgnorableSymbols", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline void System::Globalization::DateTimeFormatInfoScanner::ScanDateWord(::StringW pattern) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfoScanner*>(), { "ScanDateWord", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pattern);
}
inline ::ArrayW<::StringW> System::Globalization::DateTimeFormatInfoScanner::GetDateWordsOfDTFI(::System::Globalization::DateTimeFormatInfo* dtfi) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfoScanner*>(),
                                                                                         { "GetDateWordsOfDTFI", {}, { ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method, dtfi);
}
inline ::System::Globalization::FORMATFLAGS System::Globalization::DateTimeFormatInfoScanner::GetFormatFlagGenitiveMonth(::ArrayW<::StringW> monthNames, ::ArrayW<::StringW> genitveMonthNames,
                                                                                                                         ::ArrayW<::StringW> abbrevMonthNames,
                                                                                                                         ::ArrayW<::StringW> genetiveAbbrevMonthNames) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfoScanner*>(),
                          { "GetFormatFlagGenitiveMonth",
                            {},
                            { ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::FORMATFLAGS>(nullptr, ___internal_method, monthNames, genitveMonthNames, abbrevMonthNames, genetiveAbbrevMonthNames);
}
inline ::System::Globalization::FORMATFLAGS System::Globalization::DateTimeFormatInfoScanner::GetFormatFlagUseSpaceInMonthNames(::ArrayW<::StringW> monthNames, ::ArrayW<::StringW> genitveMonthNames,
                                                                                                                                ::ArrayW<::StringW> abbrevMonthNames,
                                                                                                                                ::ArrayW<::StringW> genetiveAbbrevMonthNames) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfoScanner*>(),
                          { "GetFormatFlagUseSpaceInMonthNames",
                            {},
                            { ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::FORMATFLAGS>(nullptr, ___internal_method, monthNames, genitveMonthNames, abbrevMonthNames, genetiveAbbrevMonthNames);
}
inline ::System::Globalization::FORMATFLAGS System::Globalization::DateTimeFormatInfoScanner::GetFormatFlagUseSpaceInDayNames(::ArrayW<::StringW> dayNames, ::ArrayW<::StringW> abbrevDayNames) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfoScanner*>(),
                                                           { "GetFormatFlagUseSpaceInDayNames", {}, { ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::FORMATFLAGS>(nullptr, ___internal_method, dayNames, abbrevDayNames);
}
inline ::System::Globalization::FORMATFLAGS System::Globalization::DateTimeFormatInfoScanner::GetFormatFlagUseHebrewCalendar(int32_t calID) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfoScanner*>(), { "GetFormatFlagUseHebrewCalendar", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::FORMATFLAGS>(nullptr, ___internal_method, calID);
}
inline bool System::Globalization::DateTimeFormatInfoScanner::EqualStringArrays(::ArrayW<::StringW> array1, ::ArrayW<::StringW> array2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfoScanner*>(),
                                                           { "EqualStringArrays", {}, { ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, array1, array2);
}
inline bool System::Globalization::DateTimeFormatInfoScanner::ArrayElementsHaveSpace(::ArrayW<::StringW> array) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfoScanner*>(), { "ArrayElementsHaveSpace", {}, { ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, array);
}
inline bool System::Globalization::DateTimeFormatInfoScanner::ArrayElementsBeginWithDigit(::ArrayW<::StringW> array) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfoScanner*>(), { "ArrayElementsBeginWithDigit", {}, { ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, array);
}
inline void System::Globalization::DateTimeFormatInfoScanner::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfoScanner*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Globalization::DateTimeFormatInfoScanner* System::Globalization::DateTimeFormatInfoScanner::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Globalization::DateTimeFormatInfoScanner*>());
}
// Ctor Parameters []
constexpr ::System::Globalization::DateTimeFormatInfoScanner::DateTimeFormatInfoScanner() {}
