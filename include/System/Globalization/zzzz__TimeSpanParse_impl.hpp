#pragma once
// IWYU pragma private; include "System/Globalization/TimeSpanParse.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Globalization::TimeSpanParse_TimeSpanToken::*)(::System::Globalization::TimeSpanParse_TTT)>(
    &::System::Globalization::TimeSpanParse_TimeSpanToken::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x59add88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse_TimeSpanToken>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::TimeSpanParse_TTT>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_TimeSpanToken._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Globalization::TimeSpanParse_TimeSpanToken::*)(int32_t)>(
    &::System::Globalization::TimeSpanParse_TimeSpanToken::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x59ab514;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse_TimeSpanToken>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_TimeSpanToken._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Globalization::TimeSpanParse_TimeSpanToken::*)(int32_t, int32_t)>(
    &::System::Globalization::TimeSpanParse_TimeSpanToken::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x59adb70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse_TimeSpanToken>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_TimeSpanToken._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Globalization::TimeSpanParse_TimeSpanToken::*)(
    ::System::Globalization::TimeSpanParse_TTT, int32_t, int32_t, ::System::ReadOnlySpan_1<char16_t>)>(&::System::Globalization::TimeSpanParse_TimeSpanToken::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x59add98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse_TimeSpanToken>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::TimeSpanParse_TTT>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_TimeSpanToken.IsInvalidFraction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Globalization::TimeSpanParse_TimeSpanToken::*)()>(
    &::System::Globalization::TimeSpanParse_TimeSpanToken::IsInvalidFraction)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x59a8690;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse_TimeSpanToken>::get(),
                                                                               "IsInvalidFraction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void System::Globalization::TimeSpanParse_TimeSpanToken::_ctor(::System::Globalization::TimeSpanParse_TTT type) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse_TimeSpanToken>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::TimeSpanParse_TTT>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type);
}
inline void System::Globalization::TimeSpanParse_TimeSpanToken::_ctor(int32_t number) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse_TimeSpanToken>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, number);
}
inline void System::Globalization::TimeSpanParse_TimeSpanToken::_ctor(int32_t number, int32_t leadingZeroes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse_TimeSpanToken>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, number, leadingZeroes);
}
inline void System::Globalization::TimeSpanParse_TimeSpanToken::_ctor(::System::Globalization::TimeSpanParse_TTT type, int32_t number, int32_t leadingZeroes,
                                                                      ::System::ReadOnlySpan_1<char16_t> separator) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse_TimeSpanToken>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::TimeSpanParse_TTT>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, number, leadingZeroes, separator);
}
inline bool System::Globalization::TimeSpanParse_TimeSpanToken::IsInvalidFraction() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse_TimeSpanToken>::get(),
                                                                             "IsInvalidFraction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Globalization::TimeSpanParse_TimeSpanTokenizer::*)(::System::ReadOnlySpan_1<char16_t>)>(
    &::System::Globalization::TimeSpanParse_TimeSpanTokenizer::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x59a8b80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse_TimeSpanTokenizer>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_TimeSpanTokenizer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Globalization::TimeSpanParse_TimeSpanTokenizer::*)(::System::ReadOnlySpan_1<char16_t>, int32_t)>(
    &::System::Globalization::TimeSpanParse_TimeSpanTokenizer::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x59ad934;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse_TimeSpanTokenizer>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_TimeSpanTokenizer.GetNextToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::TimeSpanParse_TimeSpanToken (::System::Globalization::TimeSpanParse_TimeSpanTokenizer::*)()>(
    &::System::Globalization::TimeSpanParse_TimeSpanTokenizer::GetNextToken)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x59a8be0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse_TimeSpanTokenizer>::get(),
                                                                               "GetNextToken", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_TimeSpanTokenizer.get_EOL
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Globalization::TimeSpanParse_TimeSpanTokenizer::*)()>(
    &::System::Globalization::TimeSpanParse_TimeSpanTokenizer::get_EOL)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x59adb1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse_TimeSpanTokenizer>::get(),
                                                                               "get_EOL", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_TimeSpanTokenizer.BackOne
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Globalization::TimeSpanParse_TimeSpanTokenizer::*)()>(
    &::System::Globalization::TimeSpanParse_TimeSpanTokenizer::BackOne)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x59adb84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse_TimeSpanTokenizer>::get(),
                                                                               "BackOne", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_TimeSpanTokenizer.get_NextChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (::System::Globalization::TimeSpanParse_TimeSpanTokenizer::*)()>(
    &::System::Globalization::TimeSpanParse_TimeSpanTokenizer::get_NextChar)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x59adab4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse_TimeSpanTokenizer>::get(),
                                                                               "get_NextChar", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void System::Globalization::TimeSpanParse_TimeSpanTokenizer::_ctor(::System::ReadOnlySpan_1<char16_t> input) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse_TimeSpanTokenizer>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, input);
}
inline void System::Globalization::TimeSpanParse_TimeSpanTokenizer::_ctor(::System::ReadOnlySpan_1<char16_t> input, int32_t startPosition) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse_TimeSpanTokenizer>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, input, startPosition);
}
inline ::System::Globalization::TimeSpanParse_TimeSpanToken System::Globalization::TimeSpanParse_TimeSpanTokenizer::GetNextToken() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse_TimeSpanTokenizer>::get(),
                                                                             "GetNextToken", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::TimeSpanParse_TimeSpanToken, false>(this, ___internal_method);
}
inline bool System::Globalization::TimeSpanParse_TimeSpanTokenizer::get_EOL() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse_TimeSpanTokenizer>::get(),
                                                                             "get_EOL", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Globalization::TimeSpanParse_TimeSpanTokenizer::BackOne() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse_TimeSpanTokenizer>::get(),
                                                                             "BackOne", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline char16_t System::Globalization::TimeSpanParse_TimeSpanTokenizer::get_NextChar() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse_TimeSpanTokenizer>::get(),
                                                                             "get_NextChar", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<char16_t, false>(this, ___internal_method);
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::TimeSpanFormat_FormatLiterals (::System::Globalization::TimeSpanParse_TimeSpanRawInfo::*)()>(
    &::System::Globalization::TimeSpanParse_TimeSpanRawInfo::get_PositiveInvariant)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x59adda8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>::get(),
                                                                               "get_PositiveInvariant", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_TimeSpanRawInfo.get_NegativeInvariant
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::TimeSpanFormat_FormatLiterals (::System::Globalization::TimeSpanParse_TimeSpanRawInfo::*)()>(
    &::System::Globalization::TimeSpanParse_TimeSpanRawInfo::get_NegativeInvariant)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x59ade14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>::get(),
                                                                               "get_NegativeInvariant", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_TimeSpanRawInfo.get_PositiveLocalized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::TimeSpanFormat_FormatLiterals (::System::Globalization::TimeSpanParse_TimeSpanRawInfo::*)()>(
    &::System::Globalization::TimeSpanParse_TimeSpanRawInfo::get_PositiveLocalized)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x59ab3a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>::get(),
                                                                               "get_PositiveLocalized", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_TimeSpanRawInfo.get_NegativeLocalized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::TimeSpanFormat_FormatLiterals (::System::Globalization::TimeSpanParse_TimeSpanRawInfo::*)()>(
    &::System::Globalization::TimeSpanParse_TimeSpanRawInfo::get_NegativeLocalized)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x59ab45c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>::get(),
                                                                               "get_NegativeLocalized", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_TimeSpanRawInfo.FullAppCompatMatch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Globalization::TimeSpanParse_TimeSpanRawInfo::*)(
    ::System::Globalization::TimeSpanFormat_FormatLiterals)>(&::System::Globalization::TimeSpanParse_TimeSpanRawInfo::FullAppCompatMatch)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x59abd18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>::get(), "FullAppCompatMatch", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::TimeSpanFormat_FormatLiterals>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_TimeSpanRawInfo.PartialAppCompatMatch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Globalization::TimeSpanParse_TimeSpanRawInfo::*)(
    ::System::Globalization::TimeSpanFormat_FormatLiterals)>(&::System::Globalization::TimeSpanParse_TimeSpanRawInfo::PartialAppCompatMatch)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0x59ac8a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>::get(), "PartialAppCompatMatch", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::TimeSpanFormat_FormatLiterals>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_TimeSpanRawInfo.FullMatch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Globalization::TimeSpanParse_TimeSpanRawInfo::*)(
    ::System::Globalization::TimeSpanFormat_FormatLiterals)>(&::System::Globalization::TimeSpanParse_TimeSpanRawInfo::FullMatch)> {
  constexpr static std::size_t size = 0x428;
  constexpr static std::size_t addrs = 0x59aaf80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>::get(), "FullMatch", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::TimeSpanFormat_FormatLiterals>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_TimeSpanRawInfo.FullDMatch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Globalization::TimeSpanParse_TimeSpanRawInfo::*)(
    ::System::Globalization::TimeSpanFormat_FormatLiterals)>(&::System::Globalization::TimeSpanParse_TimeSpanRawInfo::FullDMatch)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x59acf94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>::get(), "FullDMatch", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::TimeSpanFormat_FormatLiterals>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_TimeSpanRawInfo.FullHMMatch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Globalization::TimeSpanParse_TimeSpanRawInfo::*)(
    ::System::Globalization::TimeSpanFormat_FormatLiterals)>(&::System::Globalization::TimeSpanParse_TimeSpanRawInfo::FullHMMatch)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x59acc70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>::get(), "FullHMMatch", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::TimeSpanFormat_FormatLiterals>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_TimeSpanRawInfo.FullDHMMatch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Globalization::TimeSpanParse_TimeSpanRawInfo::*)(
    ::System::Globalization::TimeSpanFormat_FormatLiterals)>(&::System::Globalization::TimeSpanParse_TimeSpanRawInfo::FullDHMMatch)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x59ac4d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>::get(), "FullDHMMatch", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::TimeSpanFormat_FormatLiterals>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_TimeSpanRawInfo.FullHMSMatch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Globalization::TimeSpanParse_TimeSpanRawInfo::*)(
    ::System::Globalization::TimeSpanFormat_FormatLiterals)>(&::System::Globalization::TimeSpanParse_TimeSpanRawInfo::FullHMSMatch)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x59ac108;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>::get(), "FullHMSMatch", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::TimeSpanFormat_FormatLiterals>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_TimeSpanRawInfo.FullDHMSMatch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Globalization::TimeSpanParse_TimeSpanRawInfo::*)(
    ::System::Globalization::TimeSpanFormat_FormatLiterals)>(&::System::Globalization::TimeSpanParse_TimeSpanRawInfo::FullDHMSMatch)> {
  constexpr static std::size_t size = 0x3f8;
  constexpr static std::size_t addrs = 0x59ab920;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>::get(), "FullDHMSMatch", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::TimeSpanFormat_FormatLiterals>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_TimeSpanRawInfo.FullHMSFMatch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Globalization::TimeSpanParse_TimeSpanRawInfo::*)(
    ::System::Globalization::TimeSpanFormat_FormatLiterals)>(&::System::Globalization::TimeSpanParse_TimeSpanRawInfo::FullHMSFMatch)> {
  constexpr static std::size_t size = 0x3f8;
  constexpr static std::size_t addrs = 0x59ab528;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>::get(), "FullHMSFMatch", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::TimeSpanFormat_FormatLiterals>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_TimeSpanRawInfo.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Globalization::TimeSpanParse_TimeSpanRawInfo::*)(::System::Globalization::DateTimeFormatInfo*)>(
    &::System::Globalization::TimeSpanParse_TimeSpanRawInfo::Init)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x59a8b8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeFormatInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_TimeSpanRawInfo.ProcessToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Globalization::TimeSpanParse_TimeSpanRawInfo::*)(
    ::ByRef<::System::Globalization::TimeSpanParse_TimeSpanToken>, ::ByRef<::System::Globalization::TimeSpanParse_TimeSpanResult>)>(
    &::System::Globalization::TimeSpanParse_TimeSpanRawInfo::ProcessToken)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x59a8e34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>::get(), "ProcessToken", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Globalization::TimeSpanParse_TimeSpanToken>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Globalization::TimeSpanParse_TimeSpanResult>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_TimeSpanRawInfo.AddSep
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Globalization::TimeSpanParse_TimeSpanRawInfo::*)(
    ::System::ReadOnlySpan_1<char16_t>, ::ByRef<::System::Globalization::TimeSpanParse_TimeSpanResult>)>(&::System::Globalization::TimeSpanParse_TimeSpanRawInfo::AddSep)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x59ade84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>::get(), "AddSep", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Globalization::TimeSpanParse_TimeSpanResult>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_TimeSpanRawInfo.AddNum
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Globalization::TimeSpanParse_TimeSpanRawInfo::*)(
    ::System::Globalization::TimeSpanParse_TimeSpanToken, ::ByRef<::System::Globalization::TimeSpanParse_TimeSpanResult>)>(&::System::Globalization::TimeSpanParse_TimeSpanRawInfo::AddNum)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x59adfa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>::get(), "AddNum", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::TimeSpanParse_TimeSpanToken>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Globalization::TimeSpanParse_TimeSpanResult>>::get() })));
    return ___internal_method;
  }
};
inline ::System::Globalization::TimeSpanFormat_FormatLiterals System::Globalization::TimeSpanParse_TimeSpanRawInfo::get_PositiveInvariant() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>::get(),
                                                                             "get_PositiveInvariant", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::TimeSpanFormat_FormatLiterals, false>(this, ___internal_method);
}
inline ::System::Globalization::TimeSpanFormat_FormatLiterals System::Globalization::TimeSpanParse_TimeSpanRawInfo::get_NegativeInvariant() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>::get(),
                                                                             "get_NegativeInvariant", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::TimeSpanFormat_FormatLiterals, false>(this, ___internal_method);
}
inline ::System::Globalization::TimeSpanFormat_FormatLiterals System::Globalization::TimeSpanParse_TimeSpanRawInfo::get_PositiveLocalized() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>::get(),
                                                                             "get_PositiveLocalized", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::TimeSpanFormat_FormatLiterals, false>(this, ___internal_method);
}
inline ::System::Globalization::TimeSpanFormat_FormatLiterals System::Globalization::TimeSpanParse_TimeSpanRawInfo::get_NegativeLocalized() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>::get(),
                                                                             "get_NegativeLocalized", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::TimeSpanFormat_FormatLiterals, false>(this, ___internal_method);
}
inline bool System::Globalization::TimeSpanParse_TimeSpanRawInfo::FullAppCompatMatch(::System::Globalization::TimeSpanFormat_FormatLiterals pattern) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>::get(), "FullAppCompatMatch", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::TimeSpanFormat_FormatLiterals>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pattern);
}
inline bool System::Globalization::TimeSpanParse_TimeSpanRawInfo::PartialAppCompatMatch(::System::Globalization::TimeSpanFormat_FormatLiterals pattern) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>::get(), "PartialAppCompatMatch", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::TimeSpanFormat_FormatLiterals>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pattern);
}
inline bool System::Globalization::TimeSpanParse_TimeSpanRawInfo::FullMatch(::System::Globalization::TimeSpanFormat_FormatLiterals pattern) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>::get(), "FullMatch", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::TimeSpanFormat_FormatLiterals>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pattern);
}
inline bool System::Globalization::TimeSpanParse_TimeSpanRawInfo::FullDMatch(::System::Globalization::TimeSpanFormat_FormatLiterals pattern) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>::get(), "FullDMatch", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::TimeSpanFormat_FormatLiterals>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pattern);
}
inline bool System::Globalization::TimeSpanParse_TimeSpanRawInfo::FullHMMatch(::System::Globalization::TimeSpanFormat_FormatLiterals pattern) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>::get(), "FullHMMatch", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::TimeSpanFormat_FormatLiterals>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pattern);
}
inline bool System::Globalization::TimeSpanParse_TimeSpanRawInfo::FullDHMMatch(::System::Globalization::TimeSpanFormat_FormatLiterals pattern) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>::get(), "FullDHMMatch", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::TimeSpanFormat_FormatLiterals>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pattern);
}
inline bool System::Globalization::TimeSpanParse_TimeSpanRawInfo::FullHMSMatch(::System::Globalization::TimeSpanFormat_FormatLiterals pattern) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>::get(), "FullHMSMatch", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::TimeSpanFormat_FormatLiterals>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pattern);
}
inline bool System::Globalization::TimeSpanParse_TimeSpanRawInfo::FullDHMSMatch(::System::Globalization::TimeSpanFormat_FormatLiterals pattern) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>::get(), "FullDHMSMatch", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::TimeSpanFormat_FormatLiterals>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pattern);
}
inline bool System::Globalization::TimeSpanParse_TimeSpanRawInfo::FullHMSFMatch(::System::Globalization::TimeSpanFormat_FormatLiterals pattern) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>::get(), "FullHMSFMatch", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::TimeSpanFormat_FormatLiterals>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pattern);
}
inline void System::Globalization::TimeSpanParse_TimeSpanRawInfo::Init(::System::Globalization::DateTimeFormatInfo* dtfi) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeFormatInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dtfi);
}
inline bool System::Globalization::TimeSpanParse_TimeSpanRawInfo::ProcessToken(::ByRef<::System::Globalization::TimeSpanParse_TimeSpanToken> tok,
                                                                               ::ByRef<::System::Globalization::TimeSpanParse_TimeSpanResult> result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>::get(), "ProcessToken", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Globalization::TimeSpanParse_TimeSpanToken>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Globalization::TimeSpanParse_TimeSpanResult>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, tok, result);
}
inline bool System::Globalization::TimeSpanParse_TimeSpanRawInfo::AddSep(::System::ReadOnlySpan_1<char16_t> sep, ::ByRef<::System::Globalization::TimeSpanParse_TimeSpanResult> result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>::get(), "AddSep", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Globalization::TimeSpanParse_TimeSpanResult>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, sep, result);
}
inline bool System::Globalization::TimeSpanParse_TimeSpanRawInfo::AddNum(::System::Globalization::TimeSpanParse_TimeSpanToken num,
                                                                         ::ByRef<::System::Globalization::TimeSpanParse_TimeSpanResult> result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>::get(), "AddNum", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::TimeSpanParse_TimeSpanToken>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Globalization::TimeSpanParse_TimeSpanResult>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, num, result);
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Globalization::TimeSpanParse_TimeSpanResult::*)(bool)>(
    &::System::Globalization::TimeSpanParse_TimeSpanResult::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x59a8720;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse_TimeSpanResult>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_TimeSpanResult.SetFailure
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Globalization::TimeSpanParse_TimeSpanResult::*)(
    ::System::Globalization::TimeSpanParse_ParseFailureKind, ::StringW, ::System::Object*, ::StringW)>(&::System::Globalization::TimeSpanParse_TimeSpanResult::SetFailure)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x59a8a64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse_TimeSpanResult>::get(), "SetFailure", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::TimeSpanParse_ParseFailureKind>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void System::Globalization::TimeSpanParse_TimeSpanResult::_ctor(bool throwOnFailure) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse_TimeSpanResult>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, throwOnFailure);
}
inline bool System::Globalization::TimeSpanParse_TimeSpanResult::SetFailure(::System::Globalization::TimeSpanParse_ParseFailureKind kind, ::StringW resourceKey, ::System::Object* messageArgument,
                                                                            ::StringW argumentName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse_TimeSpanResult>::get(), "SetFailure", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::TimeSpanParse_ParseFailureKind>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, kind, resourceKey, messageArgument, argumentName);
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Globalization::TimeSpanParse_StringParser::*)()>(
    &::System::Globalization::TimeSpanParse_StringParser::NextChar)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x59ae094;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse_StringParser>::get(),
                                                                               "NextChar", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_StringParser.NextNonDigit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (::System::Globalization::TimeSpanParse_StringParser::*)()>(
    &::System::Globalization::TimeSpanParse_StringParser::NextNonDigit)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x59ae0dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse_StringParser>::get(),
                                                                               "NextNonDigit", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_StringParser.TryParse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Globalization::TimeSpanParse_StringParser::*)(
    ::System::ReadOnlySpan_1<char16_t>, ::ByRef<::System::Globalization::TimeSpanParse_TimeSpanResult>)>(&::System::Globalization::TimeSpanParse_StringParser::TryParse)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x59adb98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse_StringParser>::get(), "TryParse", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Globalization::TimeSpanParse_TimeSpanResult>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_StringParser.ParseInt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Globalization::TimeSpanParse_StringParser::*)(
    int32_t, ::ByRef<int32_t>, ::ByRef<::System::Globalization::TimeSpanParse_TimeSpanResult>)>(&::System::Globalization::TimeSpanParse_StringParser::ParseInt)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x59ae32c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse_StringParser>::get(), "ParseInt", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Globalization::TimeSpanParse_TimeSpanResult>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_StringParser.ParseTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Globalization::TimeSpanParse_StringParser::*)(
    ::ByRef<int64_t>, ::ByRef<::System::Globalization::TimeSpanParse_TimeSpanResult>)>(&::System::Globalization::TimeSpanParse_StringParser::ParseTime)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x59ae170;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse_StringParser>::get(), "ParseTime", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int64_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Globalization::TimeSpanParse_TimeSpanResult>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse_StringParser.SkipBlanks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Globalization::TimeSpanParse_StringParser::*)()>(
    &::System::Globalization::TimeSpanParse_StringParser::SkipBlanks)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x59ae140;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse_StringParser>::get(),
                                                                               "SkipBlanks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void System::Globalization::TimeSpanParse_StringParser::NextChar() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse_StringParser>::get(),
                                                                             "NextChar", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline char16_t System::Globalization::TimeSpanParse_StringParser::NextNonDigit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse_StringParser>::get(),
                                                                             "NextNonDigit", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<char16_t, false>(this, ___internal_method);
}
inline bool System::Globalization::TimeSpanParse_StringParser::TryParse(::System::ReadOnlySpan_1<char16_t> input, ::ByRef<::System::Globalization::TimeSpanParse_TimeSpanResult> result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse_StringParser>::get(), "TryParse", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Globalization::TimeSpanParse_TimeSpanResult>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, input, result);
}
inline bool System::Globalization::TimeSpanParse_StringParser::ParseInt(int32_t max, ::ByRef<int32_t> i, ::ByRef<::System::Globalization::TimeSpanParse_TimeSpanResult> result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse_StringParser>::get(), "ParseInt", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Globalization::TimeSpanParse_TimeSpanResult>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, max, i, result);
}
inline bool System::Globalization::TimeSpanParse_StringParser::ParseTime(::ByRef<int64_t> time, ::ByRef<::System::Globalization::TimeSpanParse_TimeSpanResult> result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse_StringParser>::get(), "ParseTime", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int64_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Globalization::TimeSpanParse_TimeSpanResult>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, time, result);
}
inline void System::Globalization::TimeSpanParse_StringParser::SkipBlanks() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse_StringParser>::get(),
                                                                             "SkipBlanks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(int32_t)>(&::System::Globalization::TimeSpanParse::Pow10)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x59a8198;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse*>::get(), "Pow10", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse.TryTimeToTicks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(
    bool, ::System::Globalization::TimeSpanParse_TimeSpanToken, ::System::Globalization::TimeSpanParse_TimeSpanToken, ::System::Globalization::TimeSpanParse_TimeSpanToken,
    ::System::Globalization::TimeSpanParse_TimeSpanToken, ::System::Globalization::TimeSpanParse_TimeSpanToken, ::ByRef<int64_t>)>(&::System::Globalization::TimeSpanParse::TryTimeToTicks)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x59a8540;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse*>::get(), "TryTimeToTicks", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::TimeSpanParse_TimeSpanToken>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::TimeSpanParse_TimeSpanToken>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::TimeSpanParse_TimeSpanToken>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::TimeSpanParse_TimeSpanToken>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::TimeSpanParse_TimeSpanToken>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int64_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse.Parse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (*)(::System::ReadOnlySpan_1<char16_t>, ::System::IFormatProvider*)>(
    &::System::Globalization::TimeSpanParse::Parse)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x59a86ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse*>::get(), "Parse", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse.TryParseExact
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>, ::System::IFormatProvider*, ::System::Globalization::TimeSpanStyles, ::ByRef<::System::TimeSpan>)>(
        &::System::Globalization::TimeSpanParse::TryParseExact)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x59a88a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse*>::get(), "TryParseExact", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::TimeSpanStyles>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::TimeSpan>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse.TryParseTimeSpan
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles,
                                                                                           ::System::IFormatProvider*, ::ByRef<::System::Globalization::TimeSpanParse_TimeSpanResult>)>(
    &::System::Globalization::TimeSpanParse::TryParseTimeSpan)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x59a872c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse*>::get(), "TryParseTimeSpan", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::TimeSpanParse_TimeSpanStandardStyles>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Globalization::TimeSpanParse_TimeSpanResult>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse.ProcessTerminalState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(
    ::ByRef<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>, ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles, ::ByRef<::System::Globalization::TimeSpanParse_TimeSpanResult>)>(
    &::System::Globalization::TimeSpanParse::ProcessTerminalState)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x59a8f54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse*>::get(), "ProcessTerminalState", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::TimeSpanParse_TimeSpanStandardStyles>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Globalization::TimeSpanParse_TimeSpanResult>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse.ProcessTerminal_DHMSF
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(
    ::ByRef<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>, ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles, ::ByRef<::System::Globalization::TimeSpanParse_TimeSpanResult>)>(
    &::System::Globalization::TimeSpanParse::ProcessTerminal_DHMSF)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x59aad24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse*>::get(), "ProcessTerminal_DHMSF", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::TimeSpanParse_TimeSpanStandardStyles>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Globalization::TimeSpanParse_TimeSpanResult>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse.ProcessTerminal_HMS_F_D
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(
    ::ByRef<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>, ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles, ::ByRef<::System::Globalization::TimeSpanParse_TimeSpanResult>)>(
    &::System::Globalization::TimeSpanParse::ProcessTerminal_HMS_F_D)> {
  constexpr static std::size_t size = 0xb1c;
  constexpr static std::size_t addrs = 0x59aa208;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse*>::get(), "ProcessTerminal_HMS_F_D", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::TimeSpanParse_TimeSpanStandardStyles>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Globalization::TimeSpanParse_TimeSpanResult>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse.ProcessTerminal_HM_S_D
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(
    ::ByRef<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>, ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles, ::ByRef<::System::Globalization::TimeSpanParse_TimeSpanResult>)>(
    &::System::Globalization::TimeSpanParse::ProcessTerminal_HM_S_D)> {
  constexpr static std::size_t size = 0xbb0;
  constexpr static std::size_t addrs = 0x59a9658;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse*>::get(), "ProcessTerminal_HM_S_D", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::TimeSpanParse_TimeSpanStandardStyles>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Globalization::TimeSpanParse_TimeSpanResult>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse.ProcessTerminal_HM
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(
    ::ByRef<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>, ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles, ::ByRef<::System::Globalization::TimeSpanParse_TimeSpanResult>)>(
    &::System::Globalization::TimeSpanParse::ProcessTerminal_HM)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x59a9398;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse*>::get(), "ProcessTerminal_HM", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::TimeSpanParse_TimeSpanStandardStyles>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Globalization::TimeSpanParse_TimeSpanResult>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse.ProcessTerminal_D
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(
    ::ByRef<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>, ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles, ::ByRef<::System::Globalization::TimeSpanParse_TimeSpanResult>)>(
    &::System::Globalization::TimeSpanParse::ProcessTerminal_D)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x59a90d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse*>::get(), "ProcessTerminal_D", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::TimeSpanParse_TimeSpanStandardStyles>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Globalization::TimeSpanParse_TimeSpanResult>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse.TryParseExactTimeSpan
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>, ::System::IFormatProvider*,
                                                                                           ::System::Globalization::TimeSpanStyles, ::ByRef<::System::Globalization::TimeSpanParse_TimeSpanResult>)>(
    &::System::Globalization::TimeSpanParse::TryParseExactTimeSpan)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x59a88dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse*>::get(), "TryParseExactTimeSpan", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::TimeSpanStyles>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Globalization::TimeSpanParse_TimeSpanResult>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse.TryParseByFormat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>,
                                                                                           ::System::Globalization::TimeSpanStyles, ::ByRef<::System::Globalization::TimeSpanParse_TimeSpanResult>)>(
    &::System::Globalization::TimeSpanParse::TryParseByFormat)> {
  constexpr static std::size_t size = 0x700;
  constexpr static std::size_t addrs = 0x59ad234;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse*>::get(), "TryParseByFormat", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::TimeSpanStyles>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Globalization::TimeSpanParse_TimeSpanResult>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse.ParseExactDigits
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ByRef<::System::Globalization::TimeSpanParse_TimeSpanTokenizer>, int32_t, ::ByRef<int32_t>)>(
    &::System::Globalization::TimeSpanParse::ParseExactDigits)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x59ad940;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse*>::get(), "ParseExactDigits", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Globalization::TimeSpanParse_TimeSpanTokenizer>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse.ParseExactDigits
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ByRef<::System::Globalization::TimeSpanParse_TimeSpanTokenizer>, int32_t, int32_t, ::ByRef<int32_t>,
                                                                                           ::ByRef<int32_t>)>(&::System::Globalization::TimeSpanParse::ParseExactDigits)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x59ad96c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse*>::get(), "ParseExactDigits", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Globalization::TimeSpanParse_TimeSpanTokenizer>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse.ParseExactLiteral
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ByRef<::System::Globalization::TimeSpanParse_TimeSpanTokenizer>, ::System::Text::StringBuilder*)>(
    &::System::Globalization::TimeSpanParse::ParseExactLiteral)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x59ada30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse*>::get(), "ParseExactLiteral", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Globalization::TimeSpanParse_TimeSpanTokenizer>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse.TryParseTimeSpanConstant
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::ByRef<::System::Globalization::TimeSpanParse_TimeSpanResult>)>(
    &::System::Globalization::TimeSpanParse::TryParseTimeSpanConstant)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x59ad200;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse*>::get(), "TryParseTimeSpanConstant", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Globalization::TimeSpanParse_TimeSpanResult>>::get() })));
    return ___internal_method;
  }
};
inline int64_t System::Globalization::TimeSpanParse::Pow10(int32_t pow) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse*>::get(), "Pow10",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, pow);
}
inline bool System::Globalization::TimeSpanParse::TryTimeToTicks(bool positive, ::System::Globalization::TimeSpanParse_TimeSpanToken days, ::System::Globalization::TimeSpanParse_TimeSpanToken hours,
                                                                 ::System::Globalization::TimeSpanParse_TimeSpanToken minutes, ::System::Globalization::TimeSpanParse_TimeSpanToken seconds,
                                                                 ::System::Globalization::TimeSpanParse_TimeSpanToken fraction, ::ByRef<int64_t> result) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse*>::get(), "TryTimeToTicks", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::TimeSpanParse_TimeSpanToken>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::TimeSpanParse_TimeSpanToken>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::TimeSpanParse_TimeSpanToken>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::TimeSpanParse_TimeSpanToken>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::TimeSpanParse_TimeSpanToken>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int64_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, positive, days, hours, minutes, seconds, fraction, result);
}
inline ::System::TimeSpan System::Globalization::TimeSpanParse::Parse(::System::ReadOnlySpan_1<char16_t> input, ::System::IFormatProvider* formatProvider) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse*>::get(), "Parse", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(nullptr, ___internal_method, input, formatProvider);
}
inline bool System::Globalization::TimeSpanParse::TryParseExact(::System::ReadOnlySpan_1<char16_t> input, ::System::ReadOnlySpan_1<char16_t> format, ::System::IFormatProvider* formatProvider,
                                                                ::System::Globalization::TimeSpanStyles styles, ::ByRef<::System::TimeSpan> result) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse*>::get(), "TryParseExact", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::TimeSpanStyles>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::TimeSpan>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, input, format, formatProvider, styles, result);
}
inline bool System::Globalization::TimeSpanParse::TryParseTimeSpan(::System::ReadOnlySpan_1<char16_t> input, ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles style,
                                                                   ::System::IFormatProvider* formatProvider, ::ByRef<::System::Globalization::TimeSpanParse_TimeSpanResult> result) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse*>::get(), "TryParseTimeSpan", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::TimeSpanParse_TimeSpanStandardStyles>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Globalization::TimeSpanParse_TimeSpanResult>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, input, style, formatProvider, result);
}
inline bool System::Globalization::TimeSpanParse::ProcessTerminalState(::ByRef<::System::Globalization::TimeSpanParse_TimeSpanRawInfo> raw,
                                                                       ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles style,
                                                                       ::ByRef<::System::Globalization::TimeSpanParse_TimeSpanResult> result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse*>::get(), "ProcessTerminalState", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::TimeSpanParse_TimeSpanStandardStyles>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Globalization::TimeSpanParse_TimeSpanResult>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, raw, style, result);
}
inline bool System::Globalization::TimeSpanParse::ProcessTerminal_DHMSF(::ByRef<::System::Globalization::TimeSpanParse_TimeSpanRawInfo> raw,
                                                                        ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles style,
                                                                        ::ByRef<::System::Globalization::TimeSpanParse_TimeSpanResult> result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse*>::get(), "ProcessTerminal_DHMSF", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::TimeSpanParse_TimeSpanStandardStyles>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Globalization::TimeSpanParse_TimeSpanResult>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, raw, style, result);
}
inline bool System::Globalization::TimeSpanParse::ProcessTerminal_HMS_F_D(::ByRef<::System::Globalization::TimeSpanParse_TimeSpanRawInfo> raw,
                                                                          ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles style,
                                                                          ::ByRef<::System::Globalization::TimeSpanParse_TimeSpanResult> result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse*>::get(), "ProcessTerminal_HMS_F_D", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::TimeSpanParse_TimeSpanStandardStyles>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Globalization::TimeSpanParse_TimeSpanResult>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, raw, style, result);
}
inline bool System::Globalization::TimeSpanParse::ProcessTerminal_HM_S_D(::ByRef<::System::Globalization::TimeSpanParse_TimeSpanRawInfo> raw,
                                                                         ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles style,
                                                                         ::ByRef<::System::Globalization::TimeSpanParse_TimeSpanResult> result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse*>::get(), "ProcessTerminal_HM_S_D", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::TimeSpanParse_TimeSpanStandardStyles>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Globalization::TimeSpanParse_TimeSpanResult>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, raw, style, result);
}
inline bool System::Globalization::TimeSpanParse::ProcessTerminal_HM(::ByRef<::System::Globalization::TimeSpanParse_TimeSpanRawInfo> raw,
                                                                     ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles style,
                                                                     ::ByRef<::System::Globalization::TimeSpanParse_TimeSpanResult> result) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse*>::get(), "ProcessTerminal_HM", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::TimeSpanParse_TimeSpanStandardStyles>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Globalization::TimeSpanParse_TimeSpanResult>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, raw, style, result);
}
inline bool System::Globalization::TimeSpanParse::ProcessTerminal_D(::ByRef<::System::Globalization::TimeSpanParse_TimeSpanRawInfo> raw,
                                                                    ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles style,
                                                                    ::ByRef<::System::Globalization::TimeSpanParse_TimeSpanResult> result) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse*>::get(), "ProcessTerminal_D", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Globalization::TimeSpanParse_TimeSpanRawInfo>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::TimeSpanParse_TimeSpanStandardStyles>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Globalization::TimeSpanParse_TimeSpanResult>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, raw, style, result);
}
inline bool System::Globalization::TimeSpanParse::TryParseExactTimeSpan(::System::ReadOnlySpan_1<char16_t> input, ::System::ReadOnlySpan_1<char16_t> format, ::System::IFormatProvider* formatProvider,
                                                                        ::System::Globalization::TimeSpanStyles styles, ::ByRef<::System::Globalization::TimeSpanParse_TimeSpanResult> result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse*>::get(), "TryParseExactTimeSpan", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::TimeSpanStyles>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Globalization::TimeSpanParse_TimeSpanResult>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, input, format, formatProvider, styles, result);
}
inline bool System::Globalization::TimeSpanParse::TryParseByFormat(::System::ReadOnlySpan_1<char16_t> input, ::System::ReadOnlySpan_1<char16_t> format, ::System::Globalization::TimeSpanStyles styles,
                                                                   ::ByRef<::System::Globalization::TimeSpanParse_TimeSpanResult> result) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse*>::get(), "TryParseByFormat", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::TimeSpanStyles>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Globalization::TimeSpanParse_TimeSpanResult>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, input, format, styles, result);
}
inline bool System::Globalization::TimeSpanParse::ParseExactDigits(::ByRef<::System::Globalization::TimeSpanParse_TimeSpanTokenizer> tokenizer, int32_t minDigitLength, ::ByRef<int32_t> result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse*>::get(), "ParseExactDigits", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Globalization::TimeSpanParse_TimeSpanTokenizer>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, tokenizer, minDigitLength, result);
}
inline bool System::Globalization::TimeSpanParse::ParseExactDigits(::ByRef<::System::Globalization::TimeSpanParse_TimeSpanTokenizer> tokenizer, int32_t minDigitLength, int32_t maxDigitLength,
                                                                   ::ByRef<int32_t> zeroes, ::ByRef<int32_t> result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse*>::get(), "ParseExactDigits", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Globalization::TimeSpanParse_TimeSpanTokenizer>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, tokenizer, minDigitLength, maxDigitLength, zeroes, result);
}
inline bool System::Globalization::TimeSpanParse::ParseExactLiteral(::ByRef<::System::Globalization::TimeSpanParse_TimeSpanTokenizer> tokenizer, ::System::Text::StringBuilder* enquotedString) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse*>::get(), "ParseExactLiteral", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Globalization::TimeSpanParse_TimeSpanTokenizer>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, tokenizer, enquotedString);
}
inline bool System::Globalization::TimeSpanParse::TryParseTimeSpanConstant(::System::ReadOnlySpan_1<char16_t> input, ::ByRef<::System::Globalization::TimeSpanParse_TimeSpanResult> result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse*>::get(), "TryParseTimeSpanConstant", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Globalization::TimeSpanParse_TimeSpanResult>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, input, result);
}
// Ctor Parameters []
constexpr ::System::Globalization::TimeSpanParse::TimeSpanParse() {}
