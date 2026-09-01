#pragma once
// IWYU pragma private; include "System\Globalization\TimeSpanParse.hpp"
#include "System/Globalization/zzzz__TimeSpanFormat_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__ReadOnlySpan_1_impl.hpp"
#include "System/zzzz__TimeSpan_impl.hpp"
#include "System/Globalization/zzzz__TimeSpanParse_def.hpp"
#include "System/Globalization/zzzz__DateTimeFormatInfo_def.hpp"
#include "System/Globalization/zzzz__TimeSpanFormat_def.hpp"
#include "System/Globalization/zzzz__TimeSpanParse_def.hpp"
#include "System/Globalization/zzzz__TimeSpanStyles_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Globalization::TimeSpanParse_ParseFailureKind::TimeSpanParse_ParseFailureKind(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Globalization::TimeSpanParse_ParseFailureKind::TimeSpanParse_ParseFailureKind() {}
constexpr ::System::Globalization::TimeSpanParse_ParseFailureKind System::Globalization::TimeSpanParse_ParseFailureKind::None{ static_cast<uint8_t>(0x0u) };
constexpr ::System::Globalization::TimeSpanParse_ParseFailureKind System::Globalization::TimeSpanParse_ParseFailureKind::ArgumentNull{ static_cast<uint8_t>(0x1u) };
constexpr ::System::Globalization::TimeSpanParse_ParseFailureKind System::Globalization::TimeSpanParse_ParseFailureKind::Format{ static_cast<uint8_t>(0x2u) };
constexpr ::System::Globalization::TimeSpanParse_ParseFailureKind System::Globalization::TimeSpanParse_ParseFailureKind::FormatWithParameter{ static_cast<uint8_t>(0x3u) };
constexpr ::System::Globalization::TimeSpanParse_ParseFailureKind System::Globalization::TimeSpanParse_ParseFailureKind::Overflow{ static_cast<uint8_t>(0x4u) };
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles::TimeSpanParse_TimeSpanStandardStyles(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles::TimeSpanParse_TimeSpanStandardStyles() {}
constexpr ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles System::Globalization::TimeSpanParse_TimeSpanStandardStyles::None{ static_cast<uint8_t>(0x0u) };
constexpr ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles System::Globalization::TimeSpanParse_TimeSpanStandardStyles::Invariant{ static_cast<uint8_t>(0x1u) };
constexpr ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles System::Globalization::TimeSpanParse_TimeSpanStandardStyles::Localized{ static_cast<uint8_t>(0x2u) };
constexpr ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles System::Globalization::TimeSpanParse_TimeSpanStandardStyles::RequireFull{ static_cast<uint8_t>(0x4u) };
constexpr ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles System::Globalization::TimeSpanParse_TimeSpanStandardStyles::Any{ static_cast<uint8_t>(0x3u) };
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Globalization::TimeSpanParse_TTT::TimeSpanParse_TTT(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Globalization::TimeSpanParse_TTT::TimeSpanParse_TTT() {}
constexpr ::System::Globalization::TimeSpanParse_TTT System::Globalization::TimeSpanParse_TTT::None{ static_cast<uint8_t>(0x0u) };
constexpr ::System::Globalization::TimeSpanParse_TTT System::Globalization::TimeSpanParse_TTT::End{ static_cast<uint8_t>(0x1u) };
constexpr ::System::Globalization::TimeSpanParse_TTT System::Globalization::TimeSpanParse_TTT::Num{ static_cast<uint8_t>(0x2u) };
constexpr ::System::Globalization::TimeSpanParse_TTT System::Globalization::TimeSpanParse_TTT::Sep{ static_cast<uint8_t>(0x3u) };
constexpr ::System::Globalization::TimeSpanParse_TTT System::Globalization::TimeSpanParse_TTT::NumOverflow{ static_cast<uint8_t>(0x4u) };
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_TimeSpanToken._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::TimeSpanParse_TimeSpanToken::*)(::System::Globalization::TimeSpanParse_TTT)>(
    &::System::Globalization::TimeSpanParse_TimeSpanToken::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5bc4718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanToken>(), { ".ctor", {}, { ::i2c::type_of<::System::Globalization::TimeSpanParse_TTT>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_TimeSpanToken._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::TimeSpanParse_TimeSpanToken::*)(int32_t)>(&::System::Globalization::TimeSpanParse_TimeSpanToken::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5bc1ea4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanToken>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_TimeSpanToken._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::TimeSpanParse_TimeSpanToken::*)(int32_t, int32_t)>(
    &::System::Globalization::TimeSpanParse_TimeSpanToken::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5bc4500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanToken>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_TimeSpanToken._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::TimeSpanParse_TimeSpanToken::*)(
    ::System::Globalization::TimeSpanParse_TTT, int32_t, int32_t, ::System::ReadOnlySpan_1<char16_t>)>(&::System::Globalization::TimeSpanParse_TimeSpanToken::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5bc4728;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanToken>(),
                                                                                           { ".ctor",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Globalization::TimeSpanParse_TTT>(), ::i2c::type_of<int32_t>(),
                                                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_TimeSpanToken.IsInvalidFraction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Globalization::TimeSpanParse_TimeSpanToken::*)()>(&::System::Globalization::TimeSpanParse_TimeSpanToken::IsInvalidFraction)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5bbf020;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanToken>(), { "IsInvalidFraction", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Globalization::TimeSpanParse_TimeSpanToken::_ctor(::System::Globalization::TimeSpanParse_TTT type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanToken>(), { ".ctor", {}, { ::i2c::type_of<::System::Globalization::TimeSpanParse_TTT>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, type);
}
inline void System::Globalization::TimeSpanParse_TimeSpanToken::_ctor(int32_t number) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanToken>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, number);
}
inline void System::Globalization::TimeSpanParse_TimeSpanToken::_ctor(int32_t number, int32_t leadingZeroes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanToken>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, number, leadingZeroes);
}
inline void System::Globalization::TimeSpanParse_TimeSpanToken::_ctor(::System::Globalization::TimeSpanParse_TTT type, int32_t number, int32_t leadingZeroes,
                                                                      ::System::ReadOnlySpan_1<char16_t> separator) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanToken>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Globalization::TimeSpanParse_TTT>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, type, number, leadingZeroes, separator);
}
inline bool System::Globalization::TimeSpanParse_TimeSpanToken::IsInvalidFraction() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanToken>(), { "IsInvalidFraction", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_ttt", ty: "::System::Globalization::TimeSpanParse_TTT", modifiers: "", def_value: Some("{}") }, CppParam { name: "_num", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "_zeroes", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_sep", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value:
// Some("{}") }]
constexpr ::System::Globalization::TimeSpanParse_TimeSpanToken::TimeSpanParse_TimeSpanToken(::System::Globalization::TimeSpanParse_TTT _ttt, int32_t _num, int32_t _zeroes,
                                                                                            ::System::ReadOnlySpan_1<char16_t> _sep) noexcept {
  this->_ttt = _ttt;
  this->_num = _num;
  this->_zeroes = _zeroes;
  this->_sep = _sep;
}
// Ctor Parameters []
constexpr ::System::Globalization::TimeSpanParse_TimeSpanToken::TimeSpanParse_TimeSpanToken() {}
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_TimeSpanTokenizer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::TimeSpanParse_TimeSpanTokenizer::*)(::System::ReadOnlySpan_1<char16_t>)>(
    &::System::Globalization::TimeSpanParse_TimeSpanTokenizer::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5bbf510;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanTokenizer>(), { ".ctor", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_TimeSpanTokenizer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::TimeSpanParse_TimeSpanTokenizer::*)(::System::ReadOnlySpan_1<char16_t>, int32_t)>(
    &::System::Globalization::TimeSpanParse_TimeSpanTokenizer::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5bc42c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanTokenizer>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_TimeSpanTokenizer.GetNextToken
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::TimeSpanParse_TimeSpanToken (::System::Globalization::TimeSpanParse_TimeSpanTokenizer::*)()>(
    &::System::Globalization::TimeSpanParse_TimeSpanTokenizer::GetNextToken)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x5bbf570;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanTokenizer>(), { "GetNextToken", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_TimeSpanTokenizer.get_EOL
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Globalization::TimeSpanParse_TimeSpanTokenizer::*)()>(&::System::Globalization::TimeSpanParse_TimeSpanTokenizer::get_EOL)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5bc44ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanTokenizer>(), { "get_EOL", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_TimeSpanTokenizer.BackOne
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::TimeSpanParse_TimeSpanTokenizer::*)()>(&::System::Globalization::TimeSpanParse_TimeSpanTokenizer::BackOne)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5bc4514;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanTokenizer>(), { "BackOne", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_TimeSpanTokenizer.get_NextChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::System::Globalization::TimeSpanParse_TimeSpanTokenizer::*)()>(
    &::System::Globalization::TimeSpanParse_TimeSpanTokenizer::get_NextChar)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5bc4444;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanTokenizer>(), { "get_NextChar", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Globalization::TimeSpanParse_TimeSpanTokenizer::_ctor(::System::ReadOnlySpan_1<char16_t> input) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanTokenizer>(), { ".ctor", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, input);
}
inline void System::Globalization::TimeSpanParse_TimeSpanTokenizer::_ctor(::System::ReadOnlySpan_1<char16_t> input, int32_t startPosition) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanTokenizer>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, input, startPosition);
}
inline ::System::Globalization::TimeSpanParse_TimeSpanToken System::Globalization::TimeSpanParse_TimeSpanTokenizer::GetNextToken() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanTokenizer>(), { "GetNextToken", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::TimeSpanParse_TimeSpanToken>(*this, ___internal_method);
}
inline bool System::Globalization::TimeSpanParse_TimeSpanTokenizer::get_EOL() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanTokenizer>(), { "get_EOL", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void System::Globalization::TimeSpanParse_TimeSpanTokenizer::BackOne() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanTokenizer>(), { "BackOne", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline char16_t System::Globalization::TimeSpanParse_TimeSpanTokenizer::get_NextChar() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanTokenizer>(), { "get_NextChar", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_value", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_pos", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }]
constexpr ::System::Globalization::TimeSpanParse_TimeSpanTokenizer::TimeSpanParse_TimeSpanTokenizer(::System::ReadOnlySpan_1<char16_t> _value, int32_t _pos) noexcept {
  this->_value = _value;
  this->_pos = _pos;
}
// Ctor Parameters []
constexpr ::System::Globalization::TimeSpanParse_TimeSpanTokenizer::TimeSpanParse_TimeSpanTokenizer() {}
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_TimeSpanRawInfo.get_PositiveInvariant
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::TimeSpanFormat_FormatLiterals (::System::Globalization::TimeSpanParse_TimeSpanRawInfo::*)()>(
    &::System::Globalization::TimeSpanParse_TimeSpanRawInfo::get_PositiveInvariant)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5bc4738;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>(), { "get_PositiveInvariant", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_TimeSpanRawInfo.get_NegativeInvariant
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::TimeSpanFormat_FormatLiterals (::System::Globalization::TimeSpanParse_TimeSpanRawInfo::*)()>(
    &::System::Globalization::TimeSpanParse_TimeSpanRawInfo::get_NegativeInvariant)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5bc47a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>(), { "get_NegativeInvariant", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_TimeSpanRawInfo.get_PositiveLocalized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::TimeSpanFormat_FormatLiterals (::System::Globalization::TimeSpanParse_TimeSpanRawInfo::*)()>(
    &::System::Globalization::TimeSpanParse_TimeSpanRawInfo::get_PositiveLocalized)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5bc1d38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>(), { "get_PositiveLocalized", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_TimeSpanRawInfo.get_NegativeLocalized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::TimeSpanFormat_FormatLiterals (::System::Globalization::TimeSpanParse_TimeSpanRawInfo::*)()>(
    &::System::Globalization::TimeSpanParse_TimeSpanRawInfo::get_NegativeLocalized)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5bc1dec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>(), { "get_NegativeLocalized", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_TimeSpanRawInfo.FullAppCompatMatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Globalization::TimeSpanParse_TimeSpanRawInfo::*)(::System::Globalization::TimeSpanFormat_FormatLiterals)>(
    &::System::Globalization::TimeSpanParse_TimeSpanRawInfo::FullAppCompatMatch)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x5bc26a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>(),
                                                             { "FullAppCompatMatch", {}, { ::i2c::type_of<::System::Globalization::TimeSpanFormat_FormatLiterals>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_TimeSpanRawInfo.PartialAppCompatMatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Globalization::TimeSpanParse_TimeSpanRawInfo::*)(::System::Globalization::TimeSpanFormat_FormatLiterals)>(
    &::System::Globalization::TimeSpanParse_TimeSpanRawInfo::PartialAppCompatMatch)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0x5bc3238;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>(),
                                                             { "PartialAppCompatMatch", {}, { ::i2c::type_of<::System::Globalization::TimeSpanFormat_FormatLiterals>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_TimeSpanRawInfo.FullMatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Globalization::TimeSpanParse_TimeSpanRawInfo::*)(::System::Globalization::TimeSpanFormat_FormatLiterals)>(
    &::System::Globalization::TimeSpanParse_TimeSpanRawInfo::FullMatch)> {
  constexpr static std::size_t size = 0x428;
  constexpr static std::size_t addrs = 0x5bc1910;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>(),
                                                                                           { "FullMatch", {}, { ::i2c::type_of<::System::Globalization::TimeSpanFormat_FormatLiterals>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_TimeSpanRawInfo.FullDMatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Globalization::TimeSpanParse_TimeSpanRawInfo::*)(::System::Globalization::TimeSpanFormat_FormatLiterals)>(
    &::System::Globalization::TimeSpanParse_TimeSpanRawInfo::FullDMatch)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x5bc3924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>(),
                                                                                           { "FullDMatch", {}, { ::i2c::type_of<::System::Globalization::TimeSpanFormat_FormatLiterals>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_TimeSpanRawInfo.FullHMMatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Globalization::TimeSpanParse_TimeSpanRawInfo::*)(::System::Globalization::TimeSpanFormat_FormatLiterals)>(
    &::System::Globalization::TimeSpanParse_TimeSpanRawInfo::FullHMMatch)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x5bc3600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>(),
                                                                                           { "FullHMMatch", {}, { ::i2c::type_of<::System::Globalization::TimeSpanFormat_FormatLiterals>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_TimeSpanRawInfo.FullDHMMatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Globalization::TimeSpanParse_TimeSpanRawInfo::*)(::System::Globalization::TimeSpanFormat_FormatLiterals)>(
    &::System::Globalization::TimeSpanParse_TimeSpanRawInfo::FullDHMMatch)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x5bc2e68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>(),
                                                                                           { "FullDHMMatch", {}, { ::i2c::type_of<::System::Globalization::TimeSpanFormat_FormatLiterals>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_TimeSpanRawInfo.FullHMSMatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Globalization::TimeSpanParse_TimeSpanRawInfo::*)(::System::Globalization::TimeSpanFormat_FormatLiterals)>(
    &::System::Globalization::TimeSpanParse_TimeSpanRawInfo::FullHMSMatch)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x5bc2a98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>(),
                                                                                           { "FullHMSMatch", {}, { ::i2c::type_of<::System::Globalization::TimeSpanFormat_FormatLiterals>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_TimeSpanRawInfo.FullDHMSMatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Globalization::TimeSpanParse_TimeSpanRawInfo::*)(::System::Globalization::TimeSpanFormat_FormatLiterals)>(
    &::System::Globalization::TimeSpanParse_TimeSpanRawInfo::FullDHMSMatch)> {
  constexpr static std::size_t size = 0x3f8;
  constexpr static std::size_t addrs = 0x5bc22b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>(),
                                                                                           { "FullDHMSMatch", {}, { ::i2c::type_of<::System::Globalization::TimeSpanFormat_FormatLiterals>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_TimeSpanRawInfo.FullHMSFMatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Globalization::TimeSpanParse_TimeSpanRawInfo::*)(::System::Globalization::TimeSpanFormat_FormatLiterals)>(
    &::System::Globalization::TimeSpanParse_TimeSpanRawInfo::FullHMSFMatch)> {
  constexpr static std::size_t size = 0x3f8;
  constexpr static std::size_t addrs = 0x5bc1eb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>(),
                                                                                           { "FullHMSFMatch", {}, { ::i2c::type_of<::System::Globalization::TimeSpanFormat_FormatLiterals>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_TimeSpanRawInfo.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::TimeSpanParse_TimeSpanRawInfo::*)(::System::Globalization::DateTimeFormatInfo*)>(
    &::System::Globalization::TimeSpanParse_TimeSpanRawInfo::Init)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5bbf51c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>(),
                                                                                           { "Init", {}, { ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_TimeSpanRawInfo.ProcessToken
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Globalization::TimeSpanParse_TimeSpanRawInfo::*)(::by_ref<::System::Globalization::TimeSpanParse_TimeSpanToken>,
                                                                                                                        ::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult>)>(
    &::System::Globalization::TimeSpanParse_TimeSpanRawInfo::ProcessToken)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5bbf7c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>(),
                                                                                           { "ProcessToken",
                                                                                             {},
                                                                                             { ::i2c::type_of<::by_ref<::System::Globalization::TimeSpanParse_TimeSpanToken>>(),
                                                                                               ::i2c::type_of<::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_TimeSpanRawInfo.AddSep
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Globalization::TimeSpanParse_TimeSpanRawInfo::*)(
    ::System::ReadOnlySpan_1<char16_t>, ::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult>)>(&::System::Globalization::TimeSpanParse_TimeSpanRawInfo::AddSep)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5bc4814;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>(),
                            { "AddSep", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_TimeSpanRawInfo.AddNum
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Globalization::TimeSpanParse_TimeSpanRawInfo::*)(
    ::System::Globalization::TimeSpanParse_TimeSpanToken, ::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult>)>(&::System::Globalization::TimeSpanParse_TimeSpanRawInfo::AddNum)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5bc4934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>(),
            { "AddNum", {}, { ::i2c::type_of<::System::Globalization::TimeSpanParse_TimeSpanToken>(), ::i2c::type_of<::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult>>() } })));
    return ___internal_method;
  }
};
inline ::System::Globalization::TimeSpanFormat_FormatLiterals System::Globalization::TimeSpanParse_TimeSpanRawInfo::get_PositiveInvariant() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>(), { "get_PositiveInvariant", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::TimeSpanFormat_FormatLiterals>(*this, ___internal_method);
}
inline ::System::Globalization::TimeSpanFormat_FormatLiterals System::Globalization::TimeSpanParse_TimeSpanRawInfo::get_NegativeInvariant() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>(), { "get_NegativeInvariant", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::TimeSpanFormat_FormatLiterals>(*this, ___internal_method);
}
inline ::System::Globalization::TimeSpanFormat_FormatLiterals System::Globalization::TimeSpanParse_TimeSpanRawInfo::get_PositiveLocalized() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>(), { "get_PositiveLocalized", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::TimeSpanFormat_FormatLiterals>(*this, ___internal_method);
}
inline ::System::Globalization::TimeSpanFormat_FormatLiterals System::Globalization::TimeSpanParse_TimeSpanRawInfo::get_NegativeLocalized() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>(), { "get_NegativeLocalized", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::TimeSpanFormat_FormatLiterals>(*this, ___internal_method);
}
inline bool System::Globalization::TimeSpanParse_TimeSpanRawInfo::FullAppCompatMatch(::System::Globalization::TimeSpanFormat_FormatLiterals pattern) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>(),
                                                                                         { "FullAppCompatMatch", {}, { ::i2c::type_of<::System::Globalization::TimeSpanFormat_FormatLiterals>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, pattern);
}
inline bool System::Globalization::TimeSpanParse_TimeSpanRawInfo::PartialAppCompatMatch(::System::Globalization::TimeSpanFormat_FormatLiterals pattern) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>(),
                                                           { "PartialAppCompatMatch", {}, { ::i2c::type_of<::System::Globalization::TimeSpanFormat_FormatLiterals>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, pattern);
}
inline bool System::Globalization::TimeSpanParse_TimeSpanRawInfo::FullMatch(::System::Globalization::TimeSpanFormat_FormatLiterals pattern) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>(),
                                                                                         { "FullMatch", {}, { ::i2c::type_of<::System::Globalization::TimeSpanFormat_FormatLiterals>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, pattern);
}
inline bool System::Globalization::TimeSpanParse_TimeSpanRawInfo::FullDMatch(::System::Globalization::TimeSpanFormat_FormatLiterals pattern) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>(),
                                                                                         { "FullDMatch", {}, { ::i2c::type_of<::System::Globalization::TimeSpanFormat_FormatLiterals>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, pattern);
}
inline bool System::Globalization::TimeSpanParse_TimeSpanRawInfo::FullHMMatch(::System::Globalization::TimeSpanFormat_FormatLiterals pattern) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>(),
                                                                                         { "FullHMMatch", {}, { ::i2c::type_of<::System::Globalization::TimeSpanFormat_FormatLiterals>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, pattern);
}
inline bool System::Globalization::TimeSpanParse_TimeSpanRawInfo::FullDHMMatch(::System::Globalization::TimeSpanFormat_FormatLiterals pattern) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>(),
                                                                                         { "FullDHMMatch", {}, { ::i2c::type_of<::System::Globalization::TimeSpanFormat_FormatLiterals>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, pattern);
}
inline bool System::Globalization::TimeSpanParse_TimeSpanRawInfo::FullHMSMatch(::System::Globalization::TimeSpanFormat_FormatLiterals pattern) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>(),
                                                                                         { "FullHMSMatch", {}, { ::i2c::type_of<::System::Globalization::TimeSpanFormat_FormatLiterals>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, pattern);
}
inline bool System::Globalization::TimeSpanParse_TimeSpanRawInfo::FullDHMSMatch(::System::Globalization::TimeSpanFormat_FormatLiterals pattern) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>(),
                                                                                         { "FullDHMSMatch", {}, { ::i2c::type_of<::System::Globalization::TimeSpanFormat_FormatLiterals>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, pattern);
}
inline bool System::Globalization::TimeSpanParse_TimeSpanRawInfo::FullHMSFMatch(::System::Globalization::TimeSpanFormat_FormatLiterals pattern) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>(),
                                                                                         { "FullHMSFMatch", {}, { ::i2c::type_of<::System::Globalization::TimeSpanFormat_FormatLiterals>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, pattern);
}
inline void System::Globalization::TimeSpanParse_TimeSpanRawInfo::Init(::System::Globalization::DateTimeFormatInfo* dtfi) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>(), { "Init", {}, { ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, dtfi);
}
inline bool System::Globalization::TimeSpanParse_TimeSpanRawInfo::ProcessToken(::by_ref<::System::Globalization::TimeSpanParse_TimeSpanToken> tok,
                                                                               ::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult> result) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>(),
                                                                                         { "ProcessToken",
                                                                                           {},
                                                                                           { ::i2c::type_of<::by_ref<::System::Globalization::TimeSpanParse_TimeSpanToken>>(),
                                                                                             ::i2c::type_of<::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, tok, result);
}
inline bool System::Globalization::TimeSpanParse_TimeSpanRawInfo::AddSep(::System::ReadOnlySpan_1<char16_t> sep, ::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult> result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>(),
                                       { "AddSep", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, sep, result);
}
inline bool System::Globalization::TimeSpanParse_TimeSpanRawInfo::AddNum(::System::Globalization::TimeSpanParse_TimeSpanToken num,
                                                                         ::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult> result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>(),
          { "AddNum", {}, { ::i2c::type_of<::System::Globalization::TimeSpanParse_TimeSpanToken>(), ::i2c::type_of<::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, num, result);
}
// Ctor Parameters [CppParam { name: "_lastSeenTTT", ty: "::System::Globalization::TimeSpanParse_TTT", modifiers: "", def_value: Some("{}") }, CppParam { name: "_tokenCount", ty: "int32_t", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "_sepCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_numCount", ty: "int32_t", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "_posLoc", ty: "::System::Globalization::TimeSpanFormat_FormatLiterals", modifiers: "", def_value: Some("{}") }, CppParam { name: "_negLoc", ty:
// "::System::Globalization::TimeSpanFormat_FormatLiterals", modifiers: "", def_value: Some("{}") }, CppParam { name: "_posLocInit", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "_negLocInit", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_fullPosPattern", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_fullNegPattern", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "_numbers0", ty: "::System::Globalization::TimeSpanParse_TimeSpanToken", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "_numbers1", ty: "::System::Globalization::TimeSpanParse_TimeSpanToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "_numbers2", ty:
// "::System::Globalization::TimeSpanParse_TimeSpanToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "_numbers3", ty: "::System::Globalization::TimeSpanParse_TimeSpanToken", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "_numbers4", ty: "::System::Globalization::TimeSpanParse_TimeSpanToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "_literals0", ty:
// "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_literals1", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: Some("{}") },
// CppParam { name: "_literals2", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_literals3", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "_literals4", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_literals5", ty:
// "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Globalization::TimeSpanParse_TimeSpanRawInfo::TimeSpanParse_TimeSpanRawInfo(
    ::System::Globalization::TimeSpanParse_TTT _lastSeenTTT, int32_t _tokenCount, int32_t _sepCount, int32_t _numCount, ::System::Globalization::TimeSpanFormat_FormatLiterals _posLoc,
    ::System::Globalization::TimeSpanFormat_FormatLiterals _negLoc, bool _posLocInit, bool _negLocInit, ::StringW _fullPosPattern, ::StringW _fullNegPattern,
    ::System::Globalization::TimeSpanParse_TimeSpanToken _numbers0, ::System::Globalization::TimeSpanParse_TimeSpanToken _numbers1, ::System::Globalization::TimeSpanParse_TimeSpanToken _numbers2,
    ::System::Globalization::TimeSpanParse_TimeSpanToken _numbers3, ::System::Globalization::TimeSpanParse_TimeSpanToken _numbers4, ::System::ReadOnlySpan_1<char16_t> _literals0,
    ::System::ReadOnlySpan_1<char16_t> _literals1, ::System::ReadOnlySpan_1<char16_t> _literals2, ::System::ReadOnlySpan_1<char16_t> _literals3, ::System::ReadOnlySpan_1<char16_t> _literals4,
    ::System::ReadOnlySpan_1<char16_t> _literals5) noexcept {
  this->_lastSeenTTT = _lastSeenTTT;
  this->_tokenCount = _tokenCount;
  this->_sepCount = _sepCount;
  this->_numCount = _numCount;
  this->_posLoc = _posLoc;
  this->_negLoc = _negLoc;
  this->_posLocInit = _posLocInit;
  this->_negLocInit = _negLocInit;
  this->_fullPosPattern = _fullPosPattern;
  this->_fullNegPattern = _fullNegPattern;
  this->_numbers0 = _numbers0;
  this->_numbers1 = _numbers1;
  this->_numbers2 = _numbers2;
  this->_numbers3 = _numbers3;
  this->_numbers4 = _numbers4;
  this->_literals0 = _literals0;
  this->_literals1 = _literals1;
  this->_literals2 = _literals2;
  this->_literals3 = _literals3;
  this->_literals4 = _literals4;
  this->_literals5 = _literals5;
}
// Ctor Parameters []
constexpr ::System::Globalization::TimeSpanParse_TimeSpanRawInfo::TimeSpanParse_TimeSpanRawInfo() {}
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_TimeSpanResult._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::TimeSpanParse_TimeSpanResult::*)(bool)>(&::System::Globalization::TimeSpanParse_TimeSpanResult::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5bbf0b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanResult>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_TimeSpanResult.SetFailure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Globalization::TimeSpanParse_TimeSpanResult::*)(
    ::System::Globalization::TimeSpanParse_ParseFailureKind, ::StringW, ::System::Object*, ::StringW)>(&::System::Globalization::TimeSpanParse_TimeSpanResult::SetFailure)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5bbf3f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanResult>(),
                                                                                           { "SetFailure",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Globalization::TimeSpanParse_ParseFailureKind>(), ::i2c::type_of<::StringW>(),
                                                                                               ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void System::Globalization::TimeSpanParse_TimeSpanResult::_ctor(bool throwOnFailure) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanResult>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, throwOnFailure);
}
inline bool System::Globalization::TimeSpanParse_TimeSpanResult::SetFailure(::System::Globalization::TimeSpanParse_ParseFailureKind kind, ::StringW resourceKey, ::System::Object* messageArgument,
                                                                            ::StringW argumentName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse_TimeSpanResult>(),
                                                                                         { "SetFailure",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Globalization::TimeSpanParse_ParseFailureKind>(), ::i2c::type_of<::StringW>(),
                                                                                             ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, kind, resourceKey, messageArgument, argumentName);
}
// Ctor Parameters [CppParam { name: "parsedTimeSpan", ty: "::System::TimeSpan", modifiers: "", def_value: Some("{}") }, CppParam { name: "_throwOnFailure", ty: "bool", modifiers: "", def_value:
// Some("{}") }]
constexpr ::System::Globalization::TimeSpanParse_TimeSpanResult::TimeSpanParse_TimeSpanResult(::System::TimeSpan parsedTimeSpan, bool _throwOnFailure) noexcept {
  this->parsedTimeSpan = parsedTimeSpan;
  this->_throwOnFailure = _throwOnFailure;
}
// Ctor Parameters []
constexpr ::System::Globalization::TimeSpanParse_TimeSpanResult::TimeSpanParse_TimeSpanResult() {}
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_StringParser.NextChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::TimeSpanParse_StringParser::*)()>(&::System::Globalization::TimeSpanParse_StringParser::NextChar)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5bc4a24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse_StringParser>(), { "NextChar", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_StringParser.NextNonDigit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::System::Globalization::TimeSpanParse_StringParser::*)()>(&::System::Globalization::TimeSpanParse_StringParser::NextNonDigit)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5bc4a6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse_StringParser>(), { "NextNonDigit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_StringParser.TryParse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Globalization::TimeSpanParse_StringParser::*)(
    ::System::ReadOnlySpan_1<char16_t>, ::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult>)>(&::System::Globalization::TimeSpanParse_StringParser::TryParse)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x5bc4528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse_StringParser>(),
                            { "TryParse", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_StringParser.ParseInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Globalization::TimeSpanParse_StringParser::*)(
    int32_t, ::by_ref<int32_t>, ::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult>)>(&::System::Globalization::TimeSpanParse_StringParser::ParseInt)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5bc4cbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::System::Globalization::TimeSpanParse_StringParser>(),
                         { "ParseInt", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_StringParser.ParseTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Globalization::TimeSpanParse_StringParser::*)(
    ::by_ref<int64_t>, ::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult>)>(&::System::Globalization::TimeSpanParse_StringParser::ParseTime)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x5bc4b00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse_StringParser>(),
                                                { "ParseTime", {}, { ::i2c::type_of<::by_ref<int64_t>>(), ::i2c::type_of<::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_StringParser.SkipBlanks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::TimeSpanParse_StringParser::*)()>(&::System::Globalization::TimeSpanParse_StringParser::SkipBlanks)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5bc4ad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse_StringParser>(), { "SkipBlanks", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Globalization::TimeSpanParse_StringParser::NextChar() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse_StringParser>(), { "NextChar", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline char16_t System::Globalization::TimeSpanParse_StringParser::NextNonDigit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse_StringParser>(), { "NextNonDigit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(*this, ___internal_method);
}
inline bool System::Globalization::TimeSpanParse_StringParser::TryParse(::System::ReadOnlySpan_1<char16_t> input, ::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult> result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse_StringParser>(),
                          { "TryParse", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, input, result);
}
inline bool System::Globalization::TimeSpanParse_StringParser::ParseInt(int32_t max, ::by_ref<int32_t> i, ::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult> result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse_StringParser>(),
                          { "ParseInt", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, max, i, result);
}
inline bool System::Globalization::TimeSpanParse_StringParser::ParseTime(::by_ref<int64_t> time, ::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult> result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse_StringParser>(),
                                              { "ParseTime", {}, { ::i2c::type_of<::by_ref<int64_t>>(), ::i2c::type_of<::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, time, result);
}
inline void System::Globalization::TimeSpanParse_StringParser::SkipBlanks() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse_StringParser>(), { "SkipBlanks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_str", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_ch", ty: "char16_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "_pos", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_len", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Globalization::TimeSpanParse_StringParser::TimeSpanParse_StringParser(::System::ReadOnlySpan_1<char16_t> _str, char16_t _ch, int32_t _pos, int32_t _len) noexcept {
  this->_str = _str;
  this->_ch = _ch;
  this->_pos = _pos;
  this->_len = _len;
}
// Ctor Parameters []
constexpr ::System::Globalization::TimeSpanParse_StringParser::TimeSpanParse_StringParser() {}
//  Writing Method size for method: ::System::Globalization::TimeSpanParse.Pow10
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(int32_t)>(&::System::Globalization::TimeSpanParse::Pow10)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5bbeb28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse*>(), { "Pow10", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse.TryTimeToTicks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(bool, ::System::Globalization::TimeSpanParse_TimeSpanToken, ::System::Globalization::TimeSpanParse_TimeSpanToken,
                                                                ::System::Globalization::TimeSpanParse_TimeSpanToken, ::System::Globalization::TimeSpanParse_TimeSpanToken,
                                                                ::System::Globalization::TimeSpanParse_TimeSpanToken, ::by_ref<int64_t>)>(&::System::Globalization::TimeSpanParse::TryTimeToTicks)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5bbeed0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse*>(),
                            { "TryTimeToTicks",
                              {},
                              { ::i2c::type_of<bool>(), ::i2c::type_of<::System::Globalization::TimeSpanParse_TimeSpanToken>(), ::i2c::type_of<::System::Globalization::TimeSpanParse_TimeSpanToken>(),
                                ::i2c::type_of<::System::Globalization::TimeSpanParse_TimeSpanToken>(), ::i2c::type_of<::System::Globalization::TimeSpanParse_TimeSpanToken>(),
                                ::i2c::type_of<::System::Globalization::TimeSpanParse_TimeSpanToken>(), ::i2c::type_of<::by_ref<int64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse.Parse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (*)(::System::ReadOnlySpan_1<char16_t>, ::System::IFormatProvider*)>(&::System::Globalization::TimeSpanParse::Parse)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5bbf07c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse*>(),
                                                             { "Parse", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse.TryParseExact
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>, ::System::IFormatProvider*,
                                                                ::System::Globalization::TimeSpanStyles, ::by_ref<::System::TimeSpan>)>(&::System::Globalization::TimeSpanParse::TryParseExact)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5bbf230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse*>(),
                                         { "TryParseExact",
                                           {},
                                           { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::IFormatProvider*>(),
                                             ::i2c::type_of<::System::Globalization::TimeSpanStyles>(), ::i2c::type_of<::by_ref<::System::TimeSpan>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse.TryParseTimeSpan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles, ::System::IFormatProvider*,
                                                                ::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult>)>(&::System::Globalization::TimeSpanParse::TryParseTimeSpan)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5bbf0bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse*>(),
                                                             { "TryParseTimeSpan",
                                                               {},
                                                               { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::TimeSpanParse_TimeSpanStandardStyles>(),
                                                                 ::i2c::type_of<::System::IFormatProvider*>(), ::i2c::type_of<::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse.ProcessTerminalState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>, ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles,
                                                                ::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult>)>(&::System::Globalization::TimeSpanParse::ProcessTerminalState)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5bbf8e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse*>(), { "ProcessTerminalState",
                                                                                                       {},
                                                                                                       { ::i2c::type_of<::by_ref<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>>(),
                                                                                                         ::i2c::type_of<::System::Globalization::TimeSpanParse_TimeSpanStandardStyles>(),
                                                                                                         ::i2c::type_of<::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse.ProcessTerminal_DHMSF
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>, ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles,
                                                                ::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult>)>(&::System::Globalization::TimeSpanParse::ProcessTerminal_DHMSF)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x5bc16b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse*>(), { "ProcessTerminal_DHMSF",
                                                                                                       {},
                                                                                                       { ::i2c::type_of<::by_ref<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>>(),
                                                                                                         ::i2c::type_of<::System::Globalization::TimeSpanParse_TimeSpanStandardStyles>(),
                                                                                                         ::i2c::type_of<::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse.ProcessTerminal_HMS_F_D
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>, ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles,
                                                                ::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult>)>(&::System::Globalization::TimeSpanParse::ProcessTerminal_HMS_F_D)> {
  constexpr static std::size_t size = 0xb1c;
  constexpr static std::size_t addrs = 0x5bc0b98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse*>(), { "ProcessTerminal_HMS_F_D",
                                                                                                       {},
                                                                                                       { ::i2c::type_of<::by_ref<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>>(),
                                                                                                         ::i2c::type_of<::System::Globalization::TimeSpanParse_TimeSpanStandardStyles>(),
                                                                                                         ::i2c::type_of<::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse.ProcessTerminal_HM_S_D
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>, ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles,
                                                                ::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult>)>(&::System::Globalization::TimeSpanParse::ProcessTerminal_HM_S_D)> {
  constexpr static std::size_t size = 0xbb0;
  constexpr static std::size_t addrs = 0x5bbffe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse*>(), { "ProcessTerminal_HM_S_D",
                                                                                                       {},
                                                                                                       { ::i2c::type_of<::by_ref<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>>(),
                                                                                                         ::i2c::type_of<::System::Globalization::TimeSpanParse_TimeSpanStandardStyles>(),
                                                                                                         ::i2c::type_of<::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse.ProcessTerminal_HM
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>, ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles,
                                                                ::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult>)>(&::System::Globalization::TimeSpanParse::ProcessTerminal_HM)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x5bbfd28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse*>(), { "ProcessTerminal_HM",
                                                                                                       {},
                                                                                                       { ::i2c::type_of<::by_ref<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>>(),
                                                                                                         ::i2c::type_of<::System::Globalization::TimeSpanParse_TimeSpanStandardStyles>(),
                                                                                                         ::i2c::type_of<::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse.ProcessTerminal_D
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>, ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles,
                                                                ::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult>)>(&::System::Globalization::TimeSpanParse::ProcessTerminal_D)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x5bbfa60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse*>(), { "ProcessTerminal_D",
                                                                                                       {},
                                                                                                       { ::i2c::type_of<::by_ref<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>>(),
                                                                                                         ::i2c::type_of<::System::Globalization::TimeSpanParse_TimeSpanStandardStyles>(),
                                                                                                         ::i2c::type_of<::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse.TryParseExactTimeSpan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>, ::System::IFormatProvider*,
                                                                ::System::Globalization::TimeSpanStyles, ::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult>)>(
    &::System::Globalization::TimeSpanParse::TryParseExactTimeSpan)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5bbf26c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse*>(),
                                         { "TryParseExactTimeSpan",
                                           {},
                                           { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::IFormatProvider*>(),
                                             ::i2c::type_of<::System::Globalization::TimeSpanStyles>(), ::i2c::type_of<::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse.TryParseByFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::TimeSpanStyles,
                                                                ::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult>)>(&::System::Globalization::TimeSpanParse::TryParseByFormat)> {
  constexpr static std::size_t size = 0x700;
  constexpr static std::size_t addrs = 0x5bc3bc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse*>(),
                                                { "TryParseByFormat",
                                                  {},
                                                  { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(),
                                                    ::i2c::type_of<::System::Globalization::TimeSpanStyles>(), ::i2c::type_of<::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse.ParseExactDigits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::Globalization::TimeSpanParse_TimeSpanTokenizer>, int32_t, ::by_ref<int32_t>)>(
    &::System::Globalization::TimeSpanParse::ParseExactDigits)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5bc42d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Globalization::TimeSpanParse*>(),
            { "ParseExactDigits", {}, { ::i2c::type_of<::by_ref<::System::Globalization::TimeSpanParse_TimeSpanTokenizer>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse.ParseExactDigits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::Globalization::TimeSpanParse_TimeSpanTokenizer>, int32_t, int32_t, ::by_ref<int32_t>, ::by_ref<int32_t>)>(
    &::System::Globalization::TimeSpanParse::ParseExactDigits)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5bc42fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse*>(),
                                                             { "ParseExactDigits",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::System::Globalization::TimeSpanParse_TimeSpanTokenizer>>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse.ParseExactLiteral
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::Globalization::TimeSpanParse_TimeSpanTokenizer>, ::System::Text::StringBuilder*)>(
    &::System::Globalization::TimeSpanParse::ParseExactLiteral)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5bc43c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse*>(),
                            { "ParseExactLiteral", {}, { ::i2c::type_of<::by_ref<::System::Globalization::TimeSpanParse_TimeSpanTokenizer>>(), ::i2c::type_of<::System::Text::StringBuilder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse.TryParseTimeSpanConstant
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult>)>(
    &::System::Globalization::TimeSpanParse::TryParseTimeSpanConstant)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5bc3b90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Globalization::TimeSpanParse*>(),
            { "TryParseTimeSpanConstant", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult>>() } })));
    return ___internal_method;
  }
};
inline int64_t System::Globalization::TimeSpanParse::Pow10(int32_t pow) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse*>(), { "Pow10", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, pow);
}
inline bool System::Globalization::TimeSpanParse::TryTimeToTicks(bool positive, ::System::Globalization::TimeSpanParse_TimeSpanToken days, ::System::Globalization::TimeSpanParse_TimeSpanToken hours,
                                                                 ::System::Globalization::TimeSpanParse_TimeSpanToken minutes, ::System::Globalization::TimeSpanParse_TimeSpanToken seconds,
                                                                 ::System::Globalization::TimeSpanParse_TimeSpanToken fraction, ::by_ref<int64_t> result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse*>(),
                          { "TryTimeToTicks",
                            {},
                            { ::i2c::type_of<bool>(), ::i2c::type_of<::System::Globalization::TimeSpanParse_TimeSpanToken>(), ::i2c::type_of<::System::Globalization::TimeSpanParse_TimeSpanToken>(),
                              ::i2c::type_of<::System::Globalization::TimeSpanParse_TimeSpanToken>(), ::i2c::type_of<::System::Globalization::TimeSpanParse_TimeSpanToken>(),
                              ::i2c::type_of<::System::Globalization::TimeSpanParse_TimeSpanToken>(), ::i2c::type_of<::by_ref<int64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, positive, days, hours, minutes, seconds, fraction, result);
}
inline ::System::TimeSpan System::Globalization::TimeSpanParse::Parse(::System::ReadOnlySpan_1<char16_t> input, ::System::IFormatProvider* formatProvider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse*>(),
                                                           { "Parse", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(nullptr, ___internal_method, input, formatProvider);
}
inline bool System::Globalization::TimeSpanParse::TryParseExact(::System::ReadOnlySpan_1<char16_t> input, ::System::ReadOnlySpan_1<char16_t> format, ::System::IFormatProvider* formatProvider,
                                                                ::System::Globalization::TimeSpanStyles styles, ::by_ref<::System::TimeSpan> result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse*>(),
                                       { "TryParseExact",
                                         {},
                                         { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::IFormatProvider*>(),
                                           ::i2c::type_of<::System::Globalization::TimeSpanStyles>(), ::i2c::type_of<::by_ref<::System::TimeSpan>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, input, format, formatProvider, styles, result);
}
inline bool System::Globalization::TimeSpanParse::TryParseTimeSpan(::System::ReadOnlySpan_1<char16_t> input, ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles style,
                                                                   ::System::IFormatProvider* formatProvider, ::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult> result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse*>(),
                                                           { "TryParseTimeSpan",
                                                             {},
                                                             { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::TimeSpanParse_TimeSpanStandardStyles>(),
                                                               ::i2c::type_of<::System::IFormatProvider*>(), ::i2c::type_of<::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, input, style, formatProvider, result);
}
inline bool System::Globalization::TimeSpanParse::ProcessTerminalState(::by_ref<::System::Globalization::TimeSpanParse_TimeSpanRawInfo> raw,
                                                                       ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles style,
                                                                       ::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult> result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse*>(), { "ProcessTerminalState",
                                                                                                            {},
                                                                                                            { ::i2c::type_of<::by_ref<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>>(),
                                                                                                              ::i2c::type_of<::System::Globalization::TimeSpanParse_TimeSpanStandardStyles>(),
                                                                                                              ::i2c::type_of<::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, raw, style, result);
}
inline bool System::Globalization::TimeSpanParse::ProcessTerminal_DHMSF(::by_ref<::System::Globalization::TimeSpanParse_TimeSpanRawInfo> raw,
                                                                        ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles style,
                                                                        ::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult> result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse*>(), { "ProcessTerminal_DHMSF",
                                                                                                            {},
                                                                                                            { ::i2c::type_of<::by_ref<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>>(),
                                                                                                              ::i2c::type_of<::System::Globalization::TimeSpanParse_TimeSpanStandardStyles>(),
                                                                                                              ::i2c::type_of<::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, raw, style, result);
}
inline bool System::Globalization::TimeSpanParse::ProcessTerminal_HMS_F_D(::by_ref<::System::Globalization::TimeSpanParse_TimeSpanRawInfo> raw,
                                                                          ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles style,
                                                                          ::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult> result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse*>(), { "ProcessTerminal_HMS_F_D",
                                                                                                            {},
                                                                                                            { ::i2c::type_of<::by_ref<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>>(),
                                                                                                              ::i2c::type_of<::System::Globalization::TimeSpanParse_TimeSpanStandardStyles>(),
                                                                                                              ::i2c::type_of<::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, raw, style, result);
}
inline bool System::Globalization::TimeSpanParse::ProcessTerminal_HM_S_D(::by_ref<::System::Globalization::TimeSpanParse_TimeSpanRawInfo> raw,
                                                                         ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles style,
                                                                         ::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult> result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse*>(), { "ProcessTerminal_HM_S_D",
                                                                                                            {},
                                                                                                            { ::i2c::type_of<::by_ref<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>>(),
                                                                                                              ::i2c::type_of<::System::Globalization::TimeSpanParse_TimeSpanStandardStyles>(),
                                                                                                              ::i2c::type_of<::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, raw, style, result);
}
inline bool System::Globalization::TimeSpanParse::ProcessTerminal_HM(::by_ref<::System::Globalization::TimeSpanParse_TimeSpanRawInfo> raw,
                                                                     ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles style,
                                                                     ::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult> result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse*>(), { "ProcessTerminal_HM",
                                                                                                            {},
                                                                                                            { ::i2c::type_of<::by_ref<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>>(),
                                                                                                              ::i2c::type_of<::System::Globalization::TimeSpanParse_TimeSpanStandardStyles>(),
                                                                                                              ::i2c::type_of<::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, raw, style, result);
}
inline bool System::Globalization::TimeSpanParse::ProcessTerminal_D(::by_ref<::System::Globalization::TimeSpanParse_TimeSpanRawInfo> raw,
                                                                    ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles style,
                                                                    ::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult> result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse*>(), { "ProcessTerminal_D",
                                                                                                            {},
                                                                                                            { ::i2c::type_of<::by_ref<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>>(),
                                                                                                              ::i2c::type_of<::System::Globalization::TimeSpanParse_TimeSpanStandardStyles>(),
                                                                                                              ::i2c::type_of<::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, raw, style, result);
}
inline bool System::Globalization::TimeSpanParse::TryParseExactTimeSpan(::System::ReadOnlySpan_1<char16_t> input, ::System::ReadOnlySpan_1<char16_t> format, ::System::IFormatProvider* formatProvider,
                                                                        ::System::Globalization::TimeSpanStyles styles, ::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult> result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse*>(),
                                       { "TryParseExactTimeSpan",
                                         {},
                                         { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::IFormatProvider*>(),
                                           ::i2c::type_of<::System::Globalization::TimeSpanStyles>(), ::i2c::type_of<::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, input, format, formatProvider, styles, result);
}
inline bool System::Globalization::TimeSpanParse::TryParseByFormat(::System::ReadOnlySpan_1<char16_t> input, ::System::ReadOnlySpan_1<char16_t> format, ::System::Globalization::TimeSpanStyles styles,
                                                                   ::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult> result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse*>(),
                                              { "TryParseByFormat",
                                                {},
                                                { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(),
                                                  ::i2c::type_of<::System::Globalization::TimeSpanStyles>(), ::i2c::type_of<::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, input, format, styles, result);
}
inline bool System::Globalization::TimeSpanParse::ParseExactDigits(::by_ref<::System::Globalization::TimeSpanParse_TimeSpanTokenizer> tokenizer, int32_t minDigitLength, ::by_ref<int32_t> result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Globalization::TimeSpanParse*>(),
          { "ParseExactDigits", {}, { ::i2c::type_of<::by_ref<::System::Globalization::TimeSpanParse_TimeSpanTokenizer>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, tokenizer, minDigitLength, result);
}
inline bool System::Globalization::TimeSpanParse::ParseExactDigits(::by_ref<::System::Globalization::TimeSpanParse_TimeSpanTokenizer> tokenizer, int32_t minDigitLength, int32_t maxDigitLength,
                                                                   ::by_ref<int32_t> zeroes, ::by_ref<int32_t> result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse*>(),
                                                           { "ParseExactDigits",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::System::Globalization::TimeSpanParse_TimeSpanTokenizer>>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, tokenizer, minDigitLength, maxDigitLength, zeroes, result);
}
inline bool System::Globalization::TimeSpanParse::ParseExactLiteral(::by_ref<::System::Globalization::TimeSpanParse_TimeSpanTokenizer> tokenizer, ::System::Text::StringBuilder* enquotedString) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Globalization::TimeSpanParse*>(),
                          { "ParseExactLiteral", {}, { ::i2c::type_of<::by_ref<::System::Globalization::TimeSpanParse_TimeSpanTokenizer>>(), ::i2c::type_of<::System::Text::StringBuilder*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, tokenizer, enquotedString);
}
inline bool System::Globalization::TimeSpanParse::TryParseTimeSpanConstant(::System::ReadOnlySpan_1<char16_t> input, ::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult> result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Globalization::TimeSpanParse*>(),
          { "TryParseTimeSpanConstant", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::by_ref<::System::Globalization::TimeSpanParse_TimeSpanResult>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, input, result);
}
// Ctor Parameters []
constexpr ::System::Globalization::TimeSpanParse::TimeSpanParse() {}
