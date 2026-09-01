#pragma once
// IWYU pragma private; include "System\__DTString.hpp"
#include "System/zzzz__ReadOnlySpan_1_impl.hpp"
#include "System/zzzz____DTString_def.hpp"
#include "System/Globalization/zzzz__CompareInfo_def.hpp"
#include "System/Globalization/zzzz__DateTimeFormatInfo_def.hpp"
#include "System/zzzz__DTSubString_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__TokenType_def.hpp"
//  Writing Method size for method: ::System::__DTString.get_Length
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::__DTString::*)()>(&::System::__DTString::get_Length)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5c3e834;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::__DTString>(), { "get_Length", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__DTString._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::__DTString::*)(::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::DateTimeFormatInfo*, bool)>(
    &::System::__DTString::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5c3e878;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::__DTString>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__DTString._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::__DTString::*)(::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::DateTimeFormatInfo*)>(
    &::System::__DTString::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5c3e908;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::__DTString>(),
                                                { ".ctor", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__DTString.get_CompareInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::CompareInfo* (::System::__DTString::*)()>(&::System::__DTString::get_CompareInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c3e9e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::__DTString>(), { "get_CompareInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__DTString.GetNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::__DTString::*)()>(&::System::__DTString::GetNext)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5c3e9ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::__DTString>(), { "GetNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__DTString.AtEnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::__DTString::*)()>(&::System::__DTString::AtEnd)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5c3eaac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::__DTString>(), { "AtEnd", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__DTString.Advance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::__DTString::*)(int32_t)>(&::System::__DTString::Advance)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5c3eb40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::__DTString>(), { "Advance", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__DTString.GetRegularToken
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::__DTString::*)(::by_ref<::System::TokenType>, ::by_ref<int32_t>, ::System::Globalization::DateTimeFormatInfo*)>(
    &::System::__DTString::GetRegularToken)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x5c3ec04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::__DTString>(),
            { "GetRegularToken", {}, { ::i2c::type_of<::by_ref<::System::TokenType>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__DTString.GetSeparatorToken
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TokenType (::System::__DTString::*)(::System::Globalization::DateTimeFormatInfo*, ::by_ref<int32_t>, ::by_ref<char16_t>)>(
    &::System::__DTString::GetSeparatorToken)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5c3ef58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::System::__DTString>(),
                         { "GetSeparatorToken", {}, { ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__DTString.MatchSpecifiedWord
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::__DTString::*)(::StringW)>(&::System::__DTString::MatchSpecifiedWord)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5c3f1d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::__DTString>(), { "MatchSpecifiedWord", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__DTString.MatchSpecifiedWords
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::__DTString::*)(::StringW, bool, ::by_ref<int32_t>)>(&::System::__DTString::MatchSpecifiedWords)> {
  constexpr static std::size_t size = 0x448;
  constexpr static std::size_t addrs = 0x5c3f308;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::__DTString>(), { "MatchSpecifiedWords", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__DTString.Match
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::__DTString::*)(::StringW)>(&::System::__DTString::Match)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5c3f750;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::__DTString>(), { "Match", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__DTString.Match
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::__DTString::*)(char16_t)>(&::System::__DTString::Match)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5c3f8bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::__DTString>(), { "Match", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__DTString.MatchLongestWords
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::__DTString::*)(::ArrayW<::StringW>, ::by_ref<int32_t>)>(&::System::__DTString::MatchLongestWords)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5c3f99c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::__DTString>(), { "MatchLongestWords", {}, { ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__DTString.GetRepeatCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::__DTString::*)()>(&::System::__DTString::GetRepeatCount)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5c3fa98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::__DTString>(), { "GetRepeatCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__DTString.GetNextDigit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::__DTString::*)()>(&::System::__DTString::GetNextDigit)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5c3fb80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::__DTString>(), { "GetNextDigit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__DTString.GetChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::System::__DTString::*)()>(&::System::__DTString::GetChar)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5c3fc70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::__DTString>(), { "GetChar", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__DTString.GetDigit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::__DTString::*)()>(&::System::__DTString::GetDigit)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5c3fc94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::__DTString>(), { "GetDigit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__DTString.SkipWhiteSpaces
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::__DTString::*)()>(&::System::__DTString::SkipWhiteSpaces)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5c3fcbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::__DTString>(), { "SkipWhiteSpaces", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__DTString.SkipWhiteSpaceCurrent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::__DTString::*)()>(&::System::__DTString::SkipWhiteSpaceCurrent)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5c3f064;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::__DTString>(), { "SkipWhiteSpaceCurrent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__DTString.TrimTail
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::__DTString::*)()>(&::System::__DTString::TrimTail)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5c3fdb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::__DTString>(), { "TrimTail", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__DTString.RemoveTrailingInQuoteSpaces
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::__DTString::*)()>(&::System::__DTString::RemoveTrailingInQuoteSpaces)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x5c3fef8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::__DTString>(), { "RemoveTrailingInQuoteSpaces", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__DTString.RemoveLeadingInQuoteSpaces
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::__DTString::*)()>(&::System::__DTString::RemoveLeadingInQuoteSpaces)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x5c40148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::__DTString>(), { "RemoveLeadingInQuoteSpaces", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__DTString.GetSubString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DTSubString (::System::__DTString::*)()>(&::System::__DTString::GetSubString)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5c4040c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::__DTString>(), { "GetSubString", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__DTString.ConsumeSubString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::__DTString::*)(::System::DTSubString)>(&::System::__DTString::ConsumeSubString)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5c4057c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::__DTString>(), { "ConsumeSubString", {}, { ::i2c::type_of<::System::DTSubString>() } })));
    return ___internal_method;
  }
};
inline void System::__DTString::setStaticF_WhiteSpaceChecks(::ArrayW<char16_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<char16_t>, "WhiteSpaceChecks", ::System::__DTString>(std::forward<::ArrayW<char16_t>>(value));
}
inline ::ArrayW<char16_t> System::__DTString::getStaticF_WhiteSpaceChecks() {
  return ::cordl_internals::getStaticField<::ArrayW<char16_t>, "WhiteSpaceChecks", ::System::__DTString>();
}
inline int32_t System::__DTString::get_Length() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::__DTString>(), { "get_Length", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void System::__DTString::_ctor(::System::ReadOnlySpan_1<char16_t> str, ::System::Globalization::DateTimeFormatInfo* dtfi, bool checkDigitToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::__DTString>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, str, dtfi, checkDigitToken);
}
inline void System::__DTString::_ctor(::System::ReadOnlySpan_1<char16_t> str, ::System::Globalization::DateTimeFormatInfo* dtfi) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::__DTString>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, str, dtfi);
}
inline ::System::Globalization::CompareInfo* System::__DTString::get_CompareInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::__DTString>(), { "get_CompareInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::CompareInfo*>(*this, ___internal_method);
}
inline bool System::__DTString::GetNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::__DTString>(), { "GetNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool System::__DTString::AtEnd() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::__DTString>(), { "AtEnd", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool System::__DTString::Advance(int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::__DTString>(), { "Advance", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, count);
}
inline void System::__DTString::GetRegularToken(::by_ref<::System::TokenType> tokenType, ::by_ref<int32_t> tokenValue, ::System::Globalization::DateTimeFormatInfo* dtfi) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::__DTString>(),
          { "GetRegularToken", {}, { ::i2c::type_of<::by_ref<::System::TokenType>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, tokenType, tokenValue, dtfi);
}
inline ::System::TokenType System::__DTString::GetSeparatorToken(::System::Globalization::DateTimeFormatInfo* dtfi, ::by_ref<int32_t> indexBeforeSeparator, ::by_ref<char16_t> charBeforeSeparator) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::__DTString>(),
                          { "GetSeparatorToken", {}, { ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::TokenType>(*this, ___internal_method, dtfi, indexBeforeSeparator, charBeforeSeparator);
}
inline bool System::__DTString::MatchSpecifiedWord(::StringW target) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::__DTString>(), { "MatchSpecifiedWord", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, target);
}
inline bool System::__DTString::MatchSpecifiedWords(::StringW target, bool checkWordBoundary, ::by_ref<int32_t> matchLength) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::__DTString>(), { "MatchSpecifiedWords", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, target, checkWordBoundary, matchLength);
}
inline bool System::__DTString::Match(::StringW str) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::__DTString>(), { "Match", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, str);
}
inline bool System::__DTString::Match(char16_t ch) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::__DTString>(), { "Match", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, ch);
}
inline int32_t System::__DTString::MatchLongestWords(::ArrayW<::StringW> words, ::by_ref<int32_t> maxMatchStrLen) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::__DTString>(), { "MatchLongestWords", {}, { ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, words, maxMatchStrLen);
}
inline int32_t System::__DTString::GetRepeatCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::__DTString>(), { "GetRepeatCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool System::__DTString::GetNextDigit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::__DTString>(), { "GetNextDigit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline char16_t System::__DTString::GetChar() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::__DTString>(), { "GetChar", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(*this, ___internal_method);
}
inline int32_t System::__DTString::GetDigit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::__DTString>(), { "GetDigit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void System::__DTString::SkipWhiteSpaces() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::__DTString>(), { "SkipWhiteSpaces", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline bool System::__DTString::SkipWhiteSpaceCurrent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::__DTString>(), { "SkipWhiteSpaceCurrent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void System::__DTString::TrimTail() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::__DTString>(), { "TrimTail", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void System::__DTString::RemoveTrailingInQuoteSpaces() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::__DTString>(), { "RemoveTrailingInQuoteSpaces", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void System::__DTString::RemoveLeadingInQuoteSpaces() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::__DTString>(), { "RemoveLeadingInQuoteSpaces", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::System::DTSubString System::__DTString::GetSubString() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::__DTString>(), { "GetSubString", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::DTSubString>(*this, ___internal_method);
}
inline void System::__DTString::ConsumeSubString(::System::DTSubString sub) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::__DTString>(), { "ConsumeSubString", {}, { ::i2c::type_of<::System::DTSubString>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, sub);
}
// Ctor Parameters [CppParam { name: "Value", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "Index", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "m_current", ty: "char16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_info", ty: "::System::Globalization::CompareInfo*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "m_checkDigitToken", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::System::__DTString::__DTString(::System::ReadOnlySpan_1<char16_t> Value, int32_t Index, char16_t m_current, ::System::Globalization::CompareInfo* m_info, bool m_checkDigitToken) noexcept {
  this->Value = Value;
  this->Index = Index;
  this->m_current = m_current;
  this->m_info = m_info;
  this->m_checkDigitToken = m_checkDigitToken;
}
// Ctor Parameters []
constexpr ::System::__DTString::__DTString() {}
