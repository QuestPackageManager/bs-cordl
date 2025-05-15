#pragma once
// IWYU pragma private; include "System/Globalization/DateTimeFormatInfoScanner.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* (*)()>(
    &::System::Globalization::DateTimeFormatInfoScanner::get_KnownWords)> {
  constexpr static std::size_t size = 0x3e8;
  constexpr static std::size_t addrs = 0x3d9218c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfoScanner*>::get(),
                                                                               "get_KnownWords", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfoScanner.SkipWhiteSpacesAndNonLetter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW, int32_t)>(&::System::Globalization::DateTimeFormatInfoScanner::SkipWhiteSpacesAndNonLetter)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x3d92574;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfoScanner*>::get(), "SkipWhiteSpacesAndNonLetter", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfoScanner.AddDateWordOrPostfix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Globalization::DateTimeFormatInfoScanner::*)(::StringW, ::StringW)>(
    &::System::Globalization::DateTimeFormatInfoScanner::AddDateWordOrPostfix)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x3d92670;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfoScanner*>::get(), "AddDateWordOrPostfix", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfoScanner.AddDateWords
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Globalization::DateTimeFormatInfoScanner::*)(::StringW, int32_t, ::StringW)>(
    &::System::Globalization::DateTimeFormatInfoScanner::AddDateWords)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x3d92a7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfoScanner*>::get(), "AddDateWords", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfoScanner.ScanRepeatChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW, char16_t, int32_t, ::ByRef<int32_t>)>(
    &::System::Globalization::DateTimeFormatInfoScanner::ScanRepeatChar)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3d92c5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfoScanner*>::get(), "ScanRepeatChar", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfoScanner.AddIgnorableSymbols
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Globalization::DateTimeFormatInfoScanner::*)(::StringW)>(
    &::System::Globalization::DateTimeFormatInfoScanner::AddIgnorableSymbols)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x3d9292c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfoScanner*>::get(), "AddIgnorableSymbols",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfoScanner.ScanDateWord
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Globalization::DateTimeFormatInfoScanner::*)(::StringW)>(
    &::System::Globalization::DateTimeFormatInfoScanner::ScanDateWord)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x3d92ce0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfoScanner*>::get(), "ScanDateWord",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfoScanner.GetDateWordsOfDTFI
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (::System::Globalization::DateTimeFormatInfoScanner::*)(
    ::System::Globalization::DateTimeFormatInfo*)>(&::System::Globalization::DateTimeFormatInfoScanner::GetDateWordsOfDTFI)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x3d90fc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfoScanner*>::get(), "GetDateWordsOfDTFI", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeFormatInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfoScanner.GetFormatFlagGenitiveMonth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::FORMATFLAGS (*)(
    ::ArrayW<::StringW, ::Array<::StringW>*>, ::ArrayW<::StringW, ::Array<::StringW>*>, ::ArrayW<::StringW, ::Array<::StringW>*>, ::ArrayW<::StringW, ::Array<::StringW>*>)>(
    &::System::Globalization::DateTimeFormatInfoScanner::GetFormatFlagGenitiveMonth)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x3d8f3e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfoScanner*>::get(), "GetFormatFlagGenitiveMonth", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfoScanner.GetFormatFlagUseSpaceInMonthNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::FORMATFLAGS (*)(
    ::ArrayW<::StringW, ::Array<::StringW>*>, ::ArrayW<::StringW, ::Array<::StringW>*>, ::ArrayW<::StringW, ::Array<::StringW>*>, ::ArrayW<::StringW, ::Array<::StringW>*>)>(
    &::System::Globalization::DateTimeFormatInfoScanner::GetFormatFlagUseSpaceInMonthNames)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3d8f428;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfoScanner*>::get(),
                                                 "GetFormatFlagUseSpaceInMonthNames", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfoScanner.GetFormatFlagUseSpaceInDayNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::FORMATFLAGS (*)(
    ::ArrayW<::StringW, ::Array<::StringW>*>, ::ArrayW<::StringW, ::Array<::StringW>*>)>(&::System::Globalization::DateTimeFormatInfoScanner::GetFormatFlagUseSpaceInDayNames)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x3d8f4e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfoScanner*>::get(), "GetFormatFlagUseSpaceInDayNames", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfoScanner.GetFormatFlagUseHebrewCalendar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::FORMATFLAGS (*)(int32_t)>(
    &::System::Globalization::DateTimeFormatInfoScanner::GetFormatFlagUseHebrewCalendar)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3d8f518;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfoScanner*>::get(), "GetFormatFlagUseHebrewCalendar",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfoScanner.EqualStringArrays
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<::StringW, ::Array<::StringW>*>, ::ArrayW<::StringW, ::Array<::StringW>*>)>(
    &::System::Globalization::DateTimeFormatInfoScanner::EqualStringArrays)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3d92f1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfoScanner*>::get(), "EqualStringArrays", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfoScanner.ArrayElementsHaveSpace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<::StringW, ::Array<::StringW>*>)>(
    &::System::Globalization::DateTimeFormatInfoScanner::ArrayElementsHaveSpace)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x3d93228;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfoScanner*>::get(), "ArrayElementsHaveSpace", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfoScanner.ArrayElementsBeginWithDigit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<::StringW, ::Array<::StringW>*>)>(
    &::System::Globalization::DateTimeFormatInfoScanner::ArrayElementsBeginWithDigit)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x3d92fcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfoScanner*>::get(), "ArrayElementsBeginWithDigit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfoScanner._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Globalization::DateTimeFormatInfoScanner::*)()>(
    &::System::Globalization::DateTimeFormatInfoScanner::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3d90f4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfoScanner*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_dateWords)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, "s_knownWords",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfoScanner*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* System::Globalization::DateTimeFormatInfoScanner::getStaticF_s_knownWords() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, "s_knownWords",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfoScanner*>::get>();
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* System::Globalization::DateTimeFormatInfoScanner::get_KnownWords() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfoScanner*>::get(),
                                                                             "get_KnownWords", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, false>(nullptr, ___internal_method);
}
inline int32_t System::Globalization::DateTimeFormatInfoScanner::SkipWhiteSpacesAndNonLetter(::StringW pattern, int32_t currentIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfoScanner*>::get(), "SkipWhiteSpacesAndNonLetter", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, pattern, currentIndex);
}
inline void System::Globalization::DateTimeFormatInfoScanner::AddDateWordOrPostfix(::StringW formatPostfix, ::StringW str) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfoScanner*>::get(), "AddDateWordOrPostfix", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, formatPostfix, str);
}
inline int32_t System::Globalization::DateTimeFormatInfoScanner::AddDateWords(::StringW pattern, int32_t index, ::StringW formatPostfix) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfoScanner*>::get(), "AddDateWords", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, pattern, index, formatPostfix);
}
inline int32_t System::Globalization::DateTimeFormatInfoScanner::ScanRepeatChar(::StringW pattern, char16_t ch, int32_t index, ::ByRef<int32_t> count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfoScanner*>::get(), "ScanRepeatChar", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, pattern, ch, index, count);
}
inline void System::Globalization::DateTimeFormatInfoScanner::AddIgnorableSymbols(::StringW text) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfoScanner*>::get(), "AddIgnorableSymbols",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, text);
}
inline void System::Globalization::DateTimeFormatInfoScanner::ScanDateWord(::StringW pattern) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfoScanner*>::get(), "ScanDateWord",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pattern);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> System::Globalization::DateTimeFormatInfoScanner::GetDateWordsOfDTFI(::System::Globalization::DateTimeFormatInfo* dtfi) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfoScanner*>::get(), "GetDateWordsOfDTFI", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeFormatInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(this, ___internal_method, dtfi);
}
inline ::System::Globalization::FORMATFLAGS System::Globalization::DateTimeFormatInfoScanner::GetFormatFlagGenitiveMonth(::ArrayW<::StringW, ::Array<::StringW>*> monthNames,
                                                                                                                         ::ArrayW<::StringW, ::Array<::StringW>*> genitveMonthNames,
                                                                                                                         ::ArrayW<::StringW, ::Array<::StringW>*> abbrevMonthNames,
                                                                                                                         ::ArrayW<::StringW, ::Array<::StringW>*> genetiveAbbrevMonthNames) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfoScanner*>::get(), "GetFormatFlagGenitiveMonth", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::FORMATFLAGS, false>(nullptr, ___internal_method, monthNames, genitveMonthNames, abbrevMonthNames, genetiveAbbrevMonthNames);
}
inline ::System::Globalization::FORMATFLAGS System::Globalization::DateTimeFormatInfoScanner::GetFormatFlagUseSpaceInMonthNames(::ArrayW<::StringW, ::Array<::StringW>*> monthNames,
                                                                                                                                ::ArrayW<::StringW, ::Array<::StringW>*> genitveMonthNames,
                                                                                                                                ::ArrayW<::StringW, ::Array<::StringW>*> abbrevMonthNames,
                                                                                                                                ::ArrayW<::StringW, ::Array<::StringW>*> genetiveAbbrevMonthNames) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfoScanner*>::get(), "GetFormatFlagUseSpaceInMonthNames", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::FORMATFLAGS, false>(nullptr, ___internal_method, monthNames, genitveMonthNames, abbrevMonthNames, genetiveAbbrevMonthNames);
}
inline ::System::Globalization::FORMATFLAGS System::Globalization::DateTimeFormatInfoScanner::GetFormatFlagUseSpaceInDayNames(::ArrayW<::StringW, ::Array<::StringW>*> dayNames,
                                                                                                                              ::ArrayW<::StringW, ::Array<::StringW>*> abbrevDayNames) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfoScanner*>::get(), "GetFormatFlagUseSpaceInDayNames", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::FORMATFLAGS, false>(nullptr, ___internal_method, dayNames, abbrevDayNames);
}
inline ::System::Globalization::FORMATFLAGS System::Globalization::DateTimeFormatInfoScanner::GetFormatFlagUseHebrewCalendar(int32_t calID) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfoScanner*>::get(), "GetFormatFlagUseHebrewCalendar",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::FORMATFLAGS, false>(nullptr, ___internal_method, calID);
}
inline bool System::Globalization::DateTimeFormatInfoScanner::EqualStringArrays(::ArrayW<::StringW, ::Array<::StringW>*> array1, ::ArrayW<::StringW, ::Array<::StringW>*> array2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfoScanner*>::get(), "EqualStringArrays", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, array1, array2);
}
inline bool System::Globalization::DateTimeFormatInfoScanner::ArrayElementsHaveSpace(::ArrayW<::StringW, ::Array<::StringW>*> array) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfoScanner*>::get(), "ArrayElementsHaveSpace", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, array);
}
inline bool System::Globalization::DateTimeFormatInfoScanner::ArrayElementsBeginWithDigit(::ArrayW<::StringW, ::Array<::StringW>*> array) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfoScanner*>::get(), "ArrayElementsBeginWithDigit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, array);
}
inline void System::Globalization::DateTimeFormatInfoScanner::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfoScanner*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Globalization::DateTimeFormatInfoScanner* System::Globalization::DateTimeFormatInfoScanner::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Globalization::DateTimeFormatInfoScanner*>());
}
// Ctor Parameters []
constexpr ::System::Globalization::DateTimeFormatInfoScanner::DateTimeFormatInfoScanner() {}
