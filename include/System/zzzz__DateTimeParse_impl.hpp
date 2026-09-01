#pragma once
// IWYU pragma private; include "System\DateTimeParse.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__DateTimeParse_def.hpp"
#include "System/Globalization/zzzz__Calendar_def.hpp"
#include "System/Globalization/zzzz__DateTimeFormatInfo_def.hpp"
#include "System/Globalization/zzzz__DateTimeStyles_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__DateTimeParse_def.hpp"
#include "System/zzzz__DateTimeRawInfo_def.hpp"
#include "System/zzzz__DateTimeResult_def.hpp"
#include "System/zzzz__DateTimeToken_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ParsingInfo_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "System/zzzz____DTString_def.hpp"
//  Writing Method size for method: ::System::DateTimeParse_MatchNumberDelegate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::DateTimeParse_MatchNumberDelegate::*)(::System::Object*, ::System::IntPtr)>(
    &::System::DateTimeParse_MatchNumberDelegate::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5c3e6d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeParse_MatchNumberDelegate*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse_MatchNumberDelegate.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::DateTimeParse_MatchNumberDelegate::*)(::by_ref<::System::__DTString>, int32_t, ::by_ref<int32_t>)>(
    &::System::DateTimeParse_MatchNumberDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5c3e754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::DateTimeParse_MatchNumberDelegate*>(), { ::i2c::class_of<::System::DateTimeParse_MatchNumberDelegate*>(), 13 }));
    return ___internal_method;
  }
};
inline void System::DateTimeParse_MatchNumberDelegate::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::DateTimeParse_MatchNumberDelegate*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool System::DateTimeParse_MatchNumberDelegate::Invoke(::by_ref<::System::__DTString> str, int32_t digitLen, ::by_ref<int32_t> result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::DateTimeParse_MatchNumberDelegate*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, str, digitLen, result);
}
inline ::System::DateTimeParse_MatchNumberDelegate* System::DateTimeParse_MatchNumberDelegate::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::DateTimeParse_MatchNumberDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::System::DateTimeParse_MatchNumberDelegate::DateTimeParse_MatchNumberDelegate() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::DateTimeParse_DTT::DateTimeParse_DTT(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::DateTimeParse_DTT::DateTimeParse_DTT() {}
constexpr ::System::DateTimeParse_DTT System::DateTimeParse_DTT::End{ static_cast<int32_t>(0x0) };
constexpr ::System::DateTimeParse_DTT System::DateTimeParse_DTT::NumEnd{ static_cast<int32_t>(0x1) };
constexpr ::System::DateTimeParse_DTT System::DateTimeParse_DTT::NumAmpm{ static_cast<int32_t>(0x2) };
constexpr ::System::DateTimeParse_DTT System::DateTimeParse_DTT::NumSpace{ static_cast<int32_t>(0x3) };
constexpr ::System::DateTimeParse_DTT System::DateTimeParse_DTT::NumDatesep{ static_cast<int32_t>(0x4) };
constexpr ::System::DateTimeParse_DTT System::DateTimeParse_DTT::NumTimesep{ static_cast<int32_t>(0x5) };
constexpr ::System::DateTimeParse_DTT System::DateTimeParse_DTT::MonthEnd{ static_cast<int32_t>(0x6) };
constexpr ::System::DateTimeParse_DTT System::DateTimeParse_DTT::MonthSpace{ static_cast<int32_t>(0x7) };
constexpr ::System::DateTimeParse_DTT System::DateTimeParse_DTT::MonthDatesep{ static_cast<int32_t>(0x8) };
constexpr ::System::DateTimeParse_DTT System::DateTimeParse_DTT::NumDatesuff{ static_cast<int32_t>(0x9) };
constexpr ::System::DateTimeParse_DTT System::DateTimeParse_DTT::NumTimesuff{ static_cast<int32_t>(0xa) };
constexpr ::System::DateTimeParse_DTT System::DateTimeParse_DTT::DayOfWeek{ static_cast<int32_t>(0xb) };
constexpr ::System::DateTimeParse_DTT System::DateTimeParse_DTT::YearSpace{ static_cast<int32_t>(0xc) };
constexpr ::System::DateTimeParse_DTT System::DateTimeParse_DTT::YearDateSep{ static_cast<int32_t>(0xd) };
constexpr ::System::DateTimeParse_DTT System::DateTimeParse_DTT::YearEnd{ static_cast<int32_t>(0xe) };
constexpr ::System::DateTimeParse_DTT System::DateTimeParse_DTT::TimeZone{ static_cast<int32_t>(0xf) };
constexpr ::System::DateTimeParse_DTT System::DateTimeParse_DTT::Era{ static_cast<int32_t>(0x10) };
constexpr ::System::DateTimeParse_DTT System::DateTimeParse_DTT::NumUTCTimeMark{ static_cast<int32_t>(0x11) };
constexpr ::System::DateTimeParse_DTT System::DateTimeParse_DTT::Unk{ static_cast<int32_t>(0x12) };
constexpr ::System::DateTimeParse_DTT System::DateTimeParse_DTT::NumLocalTimeMark{ static_cast<int32_t>(0x13) };
constexpr ::System::DateTimeParse_DTT System::DateTimeParse_DTT::Max{ static_cast<int32_t>(0x14) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::DateTimeParse_TM::DateTimeParse_TM(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::DateTimeParse_TM::DateTimeParse_TM() {}
constexpr ::System::DateTimeParse_TM System::DateTimeParse_TM::NotSet{ static_cast<int32_t>(0xffffffff) };
constexpr ::System::DateTimeParse_TM System::DateTimeParse_TM::AM{ static_cast<int32_t>(0x0) };
constexpr ::System::DateTimeParse_TM System::DateTimeParse_TM::PM{ static_cast<int32_t>(0x1) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::DateTimeParse_DS::DateTimeParse_DS(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::DateTimeParse_DS::DateTimeParse_DS() {}
constexpr ::System::DateTimeParse_DS System::DateTimeParse_DS::BEGIN{ static_cast<int32_t>(0x0) };
constexpr ::System::DateTimeParse_DS System::DateTimeParse_DS::N{ static_cast<int32_t>(0x1) };
constexpr ::System::DateTimeParse_DS System::DateTimeParse_DS::NN{ static_cast<int32_t>(0x2) };
constexpr ::System::DateTimeParse_DS System::DateTimeParse_DS::D_Nd{ static_cast<int32_t>(0x3) };
constexpr ::System::DateTimeParse_DS System::DateTimeParse_DS::D_NN{ static_cast<int32_t>(0x4) };
constexpr ::System::DateTimeParse_DS System::DateTimeParse_DS::D_NNd{ static_cast<int32_t>(0x5) };
constexpr ::System::DateTimeParse_DS System::DateTimeParse_DS::D_M{ static_cast<int32_t>(0x6) };
constexpr ::System::DateTimeParse_DS System::DateTimeParse_DS::D_MN{ static_cast<int32_t>(0x7) };
constexpr ::System::DateTimeParse_DS System::DateTimeParse_DS::D_NM{ static_cast<int32_t>(0x8) };
constexpr ::System::DateTimeParse_DS System::DateTimeParse_DS::D_MNd{ static_cast<int32_t>(0x9) };
constexpr ::System::DateTimeParse_DS System::DateTimeParse_DS::D_NDS{ static_cast<int32_t>(0xa) };
constexpr ::System::DateTimeParse_DS System::DateTimeParse_DS::D_Y{ static_cast<int32_t>(0xb) };
constexpr ::System::DateTimeParse_DS System::DateTimeParse_DS::D_YN{ static_cast<int32_t>(0xc) };
constexpr ::System::DateTimeParse_DS System::DateTimeParse_DS::D_YNd{ static_cast<int32_t>(0xd) };
constexpr ::System::DateTimeParse_DS System::DateTimeParse_DS::D_YM{ static_cast<int32_t>(0xe) };
constexpr ::System::DateTimeParse_DS System::DateTimeParse_DS::D_YMd{ static_cast<int32_t>(0xf) };
constexpr ::System::DateTimeParse_DS System::DateTimeParse_DS::D_S{ static_cast<int32_t>(0x10) };
constexpr ::System::DateTimeParse_DS System::DateTimeParse_DS::T_S{ static_cast<int32_t>(0x11) };
constexpr ::System::DateTimeParse_DS System::DateTimeParse_DS::T_Nt{ static_cast<int32_t>(0x12) };
constexpr ::System::DateTimeParse_DS System::DateTimeParse_DS::T_NNt{ static_cast<int32_t>(0x13) };
constexpr ::System::DateTimeParse_DS System::DateTimeParse_DS::ERROR{ static_cast<int32_t>(0x14) };
constexpr ::System::DateTimeParse_DS System::DateTimeParse_DS::DX_NN{ static_cast<int32_t>(0x15) };
constexpr ::System::DateTimeParse_DS System::DateTimeParse_DS::DX_NNN{ static_cast<int32_t>(0x16) };
constexpr ::System::DateTimeParse_DS System::DateTimeParse_DS::DX_MN{ static_cast<int32_t>(0x17) };
constexpr ::System::DateTimeParse_DS System::DateTimeParse_DS::DX_NM{ static_cast<int32_t>(0x18) };
constexpr ::System::DateTimeParse_DS System::DateTimeParse_DS::DX_MNN{ static_cast<int32_t>(0x19) };
constexpr ::System::DateTimeParse_DS System::DateTimeParse_DS::DX_DS{ static_cast<int32_t>(0x1a) };
constexpr ::System::DateTimeParse_DS System::DateTimeParse_DS::DX_DSN{ static_cast<int32_t>(0x1b) };
constexpr ::System::DateTimeParse_DS System::DateTimeParse_DS::DX_NDS{ static_cast<int32_t>(0x1c) };
constexpr ::System::DateTimeParse_DS System::DateTimeParse_DS::DX_NNDS{ static_cast<int32_t>(0x1d) };
constexpr ::System::DateTimeParse_DS System::DateTimeParse_DS::DX_YNN{ static_cast<int32_t>(0x1e) };
constexpr ::System::DateTimeParse_DS System::DateTimeParse_DS::DX_YMN{ static_cast<int32_t>(0x1f) };
constexpr ::System::DateTimeParse_DS System::DateTimeParse_DS::DX_YN{ static_cast<int32_t>(0x20) };
constexpr ::System::DateTimeParse_DS System::DateTimeParse_DS::DX_YM{ static_cast<int32_t>(0x21) };
constexpr ::System::DateTimeParse_DS System::DateTimeParse_DS::TX_N{ static_cast<int32_t>(0x22) };
constexpr ::System::DateTimeParse_DS System::DateTimeParse_DS::TX_NN{ static_cast<int32_t>(0x23) };
constexpr ::System::DateTimeParse_DS System::DateTimeParse_DS::TX_NNN{ static_cast<int32_t>(0x24) };
constexpr ::System::DateTimeParse_DS System::DateTimeParse_DS::TX_TS{ static_cast<int32_t>(0x25) };
constexpr ::System::DateTimeParse_DS System::DateTimeParse_DS::DX_NNY{ static_cast<int32_t>(0x26) };
//  Writing Method size for method: ::System::DateTimeParse___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::DateTimeParse___c::*)()>(&::System::DateTimeParse___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c3e7bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeParse___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse___c._DoStrictParse_b__98_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTimeParse_MatchNumberDelegate* (::System::DateTimeParse___c::*)()>(&::System::DateTimeParse___c::_DoStrictParse_b__98_0)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5c3e7c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeParse___c*>(), { "<DoStrictParse>b__98_0", {}, {} })));
    return ___internal_method;
  }
};
inline void System::DateTimeParse___c::setStaticF___9(::System::DateTimeParse___c* value) {
  ::cordl_internals::setStaticField<::System::DateTimeParse___c*, "<>9", ::System::DateTimeParse___c*>(std::forward<::System::DateTimeParse___c*>(value));
}
inline ::System::DateTimeParse___c* System::DateTimeParse___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::System::DateTimeParse___c*, "<>9", ::System::DateTimeParse___c*>();
}
inline void System::DateTimeParse___c::setStaticF___9__98_0(::System::Func_1<::System::DateTimeParse_MatchNumberDelegate*>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<::System::DateTimeParse_MatchNumberDelegate*>*, "<>9__98_0", ::System::DateTimeParse___c*>(
      std::forward<::System::Func_1<::System::DateTimeParse_MatchNumberDelegate*>*>(value));
}
inline ::System::Func_1<::System::DateTimeParse_MatchNumberDelegate*>* System::DateTimeParse___c::getStaticF___9__98_0() {
  return ::cordl_internals::getStaticField<::System::Func_1<::System::DateTimeParse_MatchNumberDelegate*>*, "<>9__98_0", ::System::DateTimeParse___c*>();
}
inline void System::DateTimeParse___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeParse___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::DateTimeParse_MatchNumberDelegate* System::DateTimeParse___c::_DoStrictParse_b__98_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeParse___c*>(), { "<DoStrictParse>b__98_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTimeParse_MatchNumberDelegate*>(this, ___internal_method);
}
inline ::System::DateTimeParse___c* System::DateTimeParse___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::DateTimeParse___c*>());
}
// Ctor Parameters []
constexpr ::System::DateTimeParse___c::DateTimeParse___c() {}
//  Writing Method size for method: ::System::DateTimeParse.ParseExact
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::DateTimeFormatInfo*,
                                                                              ::System::Globalization::DateTimeStyles)>(&::System::DateTimeParse::ParseExact)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5c296e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(),
                                                             { "ParseExact",
                                                               {},
                                                               { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(),
                                                                 ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::System::Globalization::DateTimeStyles>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.ParseExact
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::DateTimeFormatInfo*,
                                                                              ::System::Globalization::DateTimeStyles, ::by_ref<::System::TimeSpan>)>(&::System::DateTimeParse::ParseExact)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5c2d7a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(), { "ParseExact",
                                                                           {},
                                                                           { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(),
                                                                             ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::System::Globalization::DateTimeStyles>(),
                                                                             ::i2c::type_of<::by_ref<::System::TimeSpan>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.TryParseExact
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::DateTimeFormatInfo*,
                                                                ::System::Globalization::DateTimeStyles, ::by_ref<::System::DateTime>)>(&::System::DateTimeParse::TryParseExact)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5c2a58c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(), { "TryParseExact",
                                                                           {},
                                                                           { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(),
                                                                             ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::System::Globalization::DateTimeStyles>(),
                                                                             ::i2c::type_of<::by_ref<::System::DateTime>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.TryParseExact
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::DateTimeFormatInfo*,
                                                                ::System::Globalization::DateTimeStyles, ::by_ref<::System::DateTime>, ::by_ref<::System::TimeSpan>)>(
    &::System::DateTimeParse::TryParseExact)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x5c2e828;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(), { "TryParseExact",
                                                                           {},
                                                                           { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(),
                                                                             ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::System::Globalization::DateTimeStyles>(),
                                                                             ::i2c::type_of<::by_ref<::System::DateTime>>(), ::i2c::type_of<::by_ref<::System::TimeSpan>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.TryParseExact
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::DateTimeFormatInfo*,
                                                                ::System::Globalization::DateTimeStyles, ::by_ref<::System::DateTimeResult>)>(&::System::DateTimeParse::TryParseExact)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5c343b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(), { "TryParseExact",
                                                                           {},
                                                                           { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(),
                                                                             ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::System::Globalization::DateTimeStyles>(),
                                                                             ::i2c::type_of<::by_ref<::System::DateTimeResult>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.ParseExactMultiple
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(::System::ReadOnlySpan_1<char16_t>, ::ArrayW<::StringW>, ::System::Globalization::DateTimeFormatInfo*,
                                                                              ::System::Globalization::DateTimeStyles)>(&::System::DateTimeParse::ParseExactMultiple)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5c29a88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(),
                                                             { "ParseExactMultiple",
                                                               {},
                                                               { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::ArrayW<::StringW>>(),
                                                                 ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::System::Globalization::DateTimeStyles>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.TryParseExactMultiple
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::ArrayW<::StringW>, ::System::Globalization::DateTimeFormatInfo*,
                                                                ::System::Globalization::DateTimeStyles, ::by_ref<::System::DateTime>, ::by_ref<::System::TimeSpan>)>(
    &::System::DateTimeParse::TryParseExactMultiple)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5c2eb74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(),
                            { "TryParseExactMultiple",
                              {},
                              { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(),
                                ::i2c::type_of<::System::Globalization::DateTimeStyles>(), ::i2c::type_of<::by_ref<::System::DateTime>>(), ::i2c::type_of<::by_ref<::System::TimeSpan>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.TryParseExactMultiple
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::ArrayW<::StringW>, ::System::Globalization::DateTimeFormatInfo*,
                                                                ::System::Globalization::DateTimeStyles, ::by_ref<::System::DateTimeResult>)>(&::System::DateTimeParse::TryParseExactMultiple)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x5c34ee4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(),
                            { "TryParseExactMultiple",
                              {},
                              { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(),
                                ::i2c::type_of<::System::Globalization::DateTimeStyles>(), ::i2c::type_of<::by_ref<::System::DateTimeResult>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.MatchWord
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::__DTString>, ::StringW)>(&::System::DateTimeParse::MatchWord)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x5c35190;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(), { "MatchWord", {}, { ::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.GetTimeZoneName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::__DTString>)>(&::System::DateTimeParse::GetTimeZoneName)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5c35368;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(), { "GetTimeZoneName", {}, { ::i2c::type_of<::by_ref<::System::__DTString>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.IsDigit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(char16_t)>(&::System::DateTimeParse::IsDigit)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5c35424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(), { "IsDigit", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.ParseFraction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::__DTString>, ::by_ref<double_t>)>(&::System::DateTimeParse::ParseFraction)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5c35438;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(), { "ParseFraction", {}, { ::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<::by_ref<double_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.ParseTimeZone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::__DTString>, ::by_ref<::System::TimeSpan>)>(&::System::DateTimeParse::ParseTimeZone)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x5c3552c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(),
                                                             { "ParseTimeZone", {}, { ::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<::by_ref<::System::TimeSpan>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.HandleTimeZone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::__DTString>, ::by_ref<::System::DateTimeResult>)>(&::System::DateTimeParse::HandleTimeZone)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x5c35800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(),
                                                             { "HandleTimeZone", {}, { ::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<::by_ref<::System::DateTimeResult>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.Lex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::DateTimeParse_DS, ::by_ref<::System::__DTString>, ::by_ref<::System::DateTimeToken>, ::by_ref<::System::DateTimeRawInfo>,
                                                                ::by_ref<::System::DateTimeResult>, ::by_ref<::System::Globalization::DateTimeFormatInfo*>, ::System::Globalization::DateTimeStyles)>(
    &::System::DateTimeParse::Lex)> {
  constexpr static std::size_t size = 0xedc;
  constexpr static std::size_t addrs = 0x5c35a04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(),
                                                { "Lex",
                                                  {},
                                                  { ::i2c::type_of<::System::DateTimeParse_DS>(), ::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<::by_ref<::System::DateTimeToken>>(),
                                                    ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>(), ::i2c::type_of<::by_ref<::System::DateTimeResult>>(),
                                                    ::i2c::type_of<::by_ref<::System::Globalization::DateTimeFormatInfo*>>(), ::i2c::type_of<::System::Globalization::DateTimeStyles>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.GetJapaneseCalendarDefaultInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::Calendar* (*)()>(&::System::DateTimeParse::GetJapaneseCalendarDefaultInstance)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5c36c24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(), { "GetJapaneseCalendarDefaultInstance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.GetTaiwanCalendarDefaultInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::Calendar* (*)()>(&::System::DateTimeParse::GetTaiwanCalendarDefaultInstance)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5c36d1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(), { "GetTaiwanCalendarDefaultInstance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.VerifyValidPunctuation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::__DTString>)>(&::System::DateTimeParse::VerifyValidPunctuation)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x5c36e14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(), { "VerifyValidPunctuation", {}, { ::i2c::type_of<::by_ref<::System::__DTString>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.GetYearMonthDayOrder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::System::Globalization::DateTimeFormatInfo*, ::by_ref<int32_t>)>(&::System::DateTimeParse::GetYearMonthDayOrder)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x5c37040;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(),
                            { "GetYearMonthDayOrder", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.GetYearMonthOrder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::System::Globalization::DateTimeFormatInfo*, ::by_ref<int32_t>)>(&::System::DateTimeParse::GetYearMonthOrder)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x5c372d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(),
                            { "GetYearMonthOrder", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.GetMonthDayOrder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::System::Globalization::DateTimeFormatInfo*, ::by_ref<int32_t>)>(&::System::DateTimeParse::GetMonthDayOrder)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x5c374a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(),
                            { "GetMonthDayOrder", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.TryAdjustYear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::DateTimeResult>, int32_t, ::by_ref<int32_t>)>(&::System::DateTimeParse::TryAdjustYear)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5c37680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(),
                                                { "TryAdjustYear", {}, { ::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.SetDateYMD
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::DateTimeResult>, int32_t, int32_t, int32_t)>(&::System::DateTimeParse::SetDateYMD)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5c37748;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(),
                            { "SetDateYMD", {}, { ::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.SetDateMDY
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::DateTimeResult>, int32_t, int32_t, int32_t)>(&::System::DateTimeParse::SetDateMDY)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5c377a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(),
                            { "SetDateMDY", {}, { ::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.SetDateDMY
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::DateTimeResult>, int32_t, int32_t, int32_t)>(&::System::DateTimeParse::SetDateDMY)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5c37824;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(),
                            { "SetDateDMY", {}, { ::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.SetDateYDM
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::DateTimeResult>, int32_t, int32_t, int32_t)>(&::System::DateTimeParse::SetDateYDM)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5c378a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(),
                            { "SetDateYDM", {}, { ::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.GetDefaultYear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::DateTimeResult>, ::by_ref<::System::Globalization::DateTimeStyles>)>(&::System::DateTimeParse::GetDefaultYear)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5c37924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(),
                                         { "GetDefaultYear", {}, { ::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::Globalization::DateTimeStyles>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.GetDayOfNN
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::DateTimeResult>, ::by_ref<::System::Globalization::DateTimeStyles>, ::by_ref<::System::DateTimeRawInfo>,
                                                                ::System::Globalization::DateTimeFormatInfo*)>(&::System::DateTimeParse::GetDayOfNN)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x5c37ae8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(),
                                                             { "GetDayOfNN",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::Globalization::DateTimeStyles>>(),
                                                                 ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.GetDayOfNNN
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::DateTimeResult>, ::by_ref<::System::DateTimeRawInfo>, ::System::Globalization::DateTimeFormatInfo*)>(
    &::System::DateTimeParse::GetDayOfNNN)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x5c37c80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(), { "GetDayOfNNN",
                                                                                        {},
                                                                                        { ::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>(),
                                                                                          ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.GetDayOfMN
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::DateTimeResult>, ::by_ref<::System::Globalization::DateTimeStyles>, ::by_ref<::System::DateTimeRawInfo>,
                                                                ::System::Globalization::DateTimeFormatInfo*)>(&::System::DateTimeParse::GetDayOfMN)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x5c37f40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(),
                                                             { "GetDayOfMN",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::Globalization::DateTimeStyles>>(),
                                                                 ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.GetHebrewDayOfNM
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::DateTimeResult>, ::by_ref<::System::DateTimeRawInfo>, ::System::Globalization::DateTimeFormatInfo*)>(
    &::System::DateTimeParse::GetHebrewDayOfNM)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5c3816c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(), { "GetHebrewDayOfNM",
                                                                                        {},
                                                                                        { ::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>(),
                                                                                          ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.GetDayOfNM
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::DateTimeResult>, ::by_ref<::System::Globalization::DateTimeStyles>, ::by_ref<::System::DateTimeRawInfo>,
                                                                ::System::Globalization::DateTimeFormatInfo*)>(&::System::DateTimeParse::GetDayOfNM)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x5c382e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(),
                                                             { "GetDayOfNM",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::Globalization::DateTimeStyles>>(),
                                                                 ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.GetDayOfMNN
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::DateTimeResult>, ::by_ref<::System::DateTimeRawInfo>, ::System::Globalization::DateTimeFormatInfo*)>(
    &::System::DateTimeParse::GetDayOfMNN)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x5c3850c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(), { "GetDayOfMNN",
                                                                                        {},
                                                                                        { ::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>(),
                                                                                          ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.GetDayOfYNN
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::DateTimeResult>, ::by_ref<::System::DateTimeRawInfo>, ::System::Globalization::DateTimeFormatInfo*)>(
    &::System::DateTimeParse::GetDayOfYNN)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5c387fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(), { "GetDayOfYNN",
                                                                                        {},
                                                                                        { ::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>(),
                                                                                          ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.GetDayOfNNY
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::DateTimeResult>, ::by_ref<::System::DateTimeRawInfo>, ::System::Globalization::DateTimeFormatInfo*)>(
    &::System::DateTimeParse::GetDayOfNNY)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x5c38954;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(), { "GetDayOfNNY",
                                                                                        {},
                                                                                        { ::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>(),
                                                                                          ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.GetDayOfYMN
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::DateTimeResult>, ::by_ref<::System::DateTimeRawInfo>)>(&::System::DateTimeParse::GetDayOfYMN)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5c38af0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(),
                                                             { "GetDayOfYMN", {}, { ::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.GetDayOfYN
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::DateTimeResult>, ::by_ref<::System::DateTimeRawInfo>)>(&::System::DateTimeParse::GetDayOfYN)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5c38bd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(),
                                                             { "GetDayOfYN", {}, { ::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.GetDayOfYM
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::DateTimeResult>, ::by_ref<::System::DateTimeRawInfo>)>(&::System::DateTimeParse::GetDayOfYM)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5c38cb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(),
                                                             { "GetDayOfYM", {}, { ::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.AdjustTimeMark
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Globalization::DateTimeFormatInfo*, ::by_ref<::System::DateTimeRawInfo>)>(&::System::DateTimeParse::AdjustTimeMark)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5c38d88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(),
                                                { "AdjustTimeMark", {}, { ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.AdjustHour
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<int32_t>, ::System::DateTimeParse_TM)>(&::System::DateTimeParse::AdjustHour)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5c38e14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(), { "AdjustHour", {}, { ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::DateTimeParse_TM>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.GetTimeOfN
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::DateTimeResult>, ::by_ref<::System::DateTimeRawInfo>)>(&::System::DateTimeParse::GetTimeOfN)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5c38e60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(),
                                                             { "GetTimeOfN", {}, { ::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.GetTimeOfNN
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::DateTimeResult>, ::by_ref<::System::DateTimeRawInfo>)>(&::System::DateTimeParse::GetTimeOfNN)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5c38ee8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(),
                                                             { "GetTimeOfNN", {}, { ::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.GetTimeOfNNN
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::DateTimeResult>, ::by_ref<::System::DateTimeRawInfo>)>(&::System::DateTimeParse::GetTimeOfNNN)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5c38f74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(),
                                                             { "GetTimeOfNNN", {}, { ::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.GetDateOfDSN
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::DateTimeResult>, ::by_ref<::System::DateTimeRawInfo>)>(&::System::DateTimeParse::GetDateOfDSN)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5c39008;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(),
                                                             { "GetDateOfDSN", {}, { ::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.GetDateOfNDS
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::DateTimeResult>, ::by_ref<::System::DateTimeRawInfo>)>(&::System::DateTimeParse::GetDateOfNDS)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5c3908c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(),
                                                             { "GetDateOfNDS", {}, { ::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.GetDateOfNNDS
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::DateTimeResult>, ::by_ref<::System::DateTimeRawInfo>, ::System::Globalization::DateTimeFormatInfo*)>(
    &::System::DateTimeParse::GetDateOfNNDS)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x5c3916c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(), { "GetDateOfNNDS",
                                                                                        {},
                                                                                        { ::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>(),
                                                                                          ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.ProcessDateTimeSuffix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::DateTimeResult>, ::by_ref<::System::DateTimeRawInfo>, ::by_ref<::System::DateTimeToken>)>(
    &::System::DateTimeParse::ProcessDateTimeSuffix)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5c3939c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(),
                            { "ProcessDateTimeSuffix",
                              {},
                              { ::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>(), ::i2c::type_of<::by_ref<::System::DateTimeToken>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.ProcessHebrewTerminalState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::DateTimeParse_DS, ::by_ref<::System::__DTString>, ::by_ref<::System::DateTimeResult>,
                                                                ::by_ref<::System::Globalization::DateTimeStyles>, ::by_ref<::System::DateTimeRawInfo>, ::System::Globalization::DateTimeFormatInfo*)>(
    &::System::DateTimeParse::ProcessHebrewTerminalState)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x5c39494;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(),
                                                             { "ProcessHebrewTerminalState",
                                                               {},
                                                               { ::i2c::type_of<::System::DateTimeParse_DS>(), ::i2c::type_of<::by_ref<::System::__DTString>>(),
                                                                 ::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::Globalization::DateTimeStyles>>(),
                                                                 ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.ProcessTerminalState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::DateTimeParse_DS, ::by_ref<::System::__DTString>, ::by_ref<::System::DateTimeResult>,
                                                                ::by_ref<::System::Globalization::DateTimeStyles>, ::by_ref<::System::DateTimeRawInfo>, ::System::Globalization::DateTimeFormatInfo*)>(
    &::System::DateTimeParse::ProcessTerminalState)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x5c368e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(),
                                                             { "ProcessTerminalState",
                                                               {},
                                                               { ::i2c::type_of<::System::DateTimeParse_DS>(), ::i2c::type_of<::by_ref<::System::__DTString>>(),
                                                                 ::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::Globalization::DateTimeStyles>>(),
                                                                 ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.Parse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::DateTime (*)(::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::DateTimeFormatInfo*, ::System::Globalization::DateTimeStyles)>(&::System::DateTimeParse::Parse)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5c293a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(), { "Parse",
                                                                           {},
                                                                           { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(),
                                                                             ::i2c::type_of<::System::Globalization::DateTimeStyles>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.Parse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::DateTimeFormatInfo*, ::System::Globalization::DateTimeStyles,
                                                                              ::by_ref<::System::TimeSpan>)>(&::System::DateTimeParse::Parse)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5c2d4b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(), { "Parse",
                                                                           {},
                                                                           { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(),
                                                                             ::i2c::type_of<::System::Globalization::DateTimeStyles>(), ::i2c::type_of<::by_ref<::System::TimeSpan>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.TryParse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::DateTimeFormatInfo*, ::System::Globalization::DateTimeStyles,
                                                                ::by_ref<::System::DateTime>)>(&::System::DateTimeParse::TryParse)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5c2a308;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(), { "TryParse",
                                                                           {},
                                                                           { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(),
                                                                             ::i2c::type_of<::System::Globalization::DateTimeStyles>(), ::i2c::type_of<::by_ref<::System::DateTime>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.TryParse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::DateTimeFormatInfo*, ::System::Globalization::DateTimeStyles,
                                                                ::by_ref<::System::DateTime>, ::by_ref<::System::TimeSpan>)>(&::System::DateTimeParse::TryParse)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5c2e4e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(),
                            { "TryParse",
                              {},
                              { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(),
                                ::i2c::type_of<::System::Globalization::DateTimeStyles>(), ::i2c::type_of<::by_ref<::System::DateTime>>(), ::i2c::type_of<::by_ref<::System::TimeSpan>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.TryParse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::DateTimeFormatInfo*, ::System::Globalization::DateTimeStyles,
                                                                ::by_ref<::System::DateTimeResult>)>(&::System::DateTimeParse::TryParse)> {
  constexpr static std::size_t size = 0x83c;
  constexpr static std::size_t addrs = 0x5c39864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(), { "TryParse",
                                                                           {},
                                                                           { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(),
                                                                             ::i2c::type_of<::System::Globalization::DateTimeStyles>(), ::i2c::type_of<::by_ref<::System::DateTimeResult>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.DetermineTimeZoneAdjustments
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::__DTString>, ::by_ref<::System::DateTimeResult>, ::System::Globalization::DateTimeStyles, bool)>(
    &::System::DateTimeParse::DetermineTimeZoneAdjustments)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x5c3a918;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(), { "DetermineTimeZoneAdjustments",
                                                                                               {},
                                                                                               { ::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<::by_ref<::System::DateTimeResult>>(),
                                                                                                 ::i2c::type_of<::System::Globalization::DateTimeStyles>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.DateTimeOffsetTimeZonePostProcessing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::__DTString>, ::by_ref<::System::DateTimeResult>, ::System::Globalization::DateTimeStyles)>(
    &::System::DateTimeParse::DateTimeOffsetTimeZonePostProcessing)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x5c3ab74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(), { "DateTimeOffsetTimeZonePostProcessing",
                                                                                               {},
                                                                                               { ::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<::by_ref<::System::DateTimeResult>>(),
                                                                                                 ::i2c::type_of<::System::Globalization::DateTimeStyles>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.AdjustTimeZoneToUniversal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::DateTimeResult>)>(&::System::DateTimeParse::AdjustTimeZoneToUniversal)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5c3adc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(), { "AdjustTimeZoneToUniversal", {}, { ::i2c::type_of<::by_ref<::System::DateTimeResult>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.AdjustTimeZoneToLocal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::DateTimeResult>, bool)>(&::System::DateTimeParse::AdjustTimeZoneToLocal)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x5c3aedc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(), { "AdjustTimeZoneToLocal", {}, { ::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.ParseISO8601
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::DateTimeRawInfo>, ::by_ref<::System::__DTString>, ::System::Globalization::DateTimeStyles,
                                                                ::by_ref<::System::DateTimeResult>)>(&::System::DateTimeParse::ParseISO8601)> {
  constexpr static std::size_t size = 0x5ec;
  constexpr static std::size_t addrs = 0x5c3a0a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(), { "ParseISO8601",
                                                                           {},
                                                                           { ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>(), ::i2c::type_of<::by_ref<::System::__DTString>>(),
                                                                             ::i2c::type_of<::System::Globalization::DateTimeStyles>(), ::i2c::type_of<::by_ref<::System::DateTimeResult>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.MatchHebrewDigits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::__DTString>, int32_t, ::by_ref<int32_t>)>(&::System::DateTimeParse::MatchHebrewDigits)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5c3b214;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(),
                                                { "MatchHebrewDigits", {}, { ::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.ParseDigits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::__DTString>, int32_t, ::by_ref<int32_t>)>(&::System::DateTimeParse::ParseDigits)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5c3b180;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(),
                                                { "ParseDigits", {}, { ::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.ParseDigits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::__DTString>, int32_t, int32_t, ::by_ref<int32_t>)>(&::System::DateTimeParse::ParseDigits)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x5c3b324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(),
                            { "ParseDigits", {}, { ::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.ParseFractionExact
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::__DTString>, int32_t, ::by_ref<double_t>)>(&::System::DateTimeParse::ParseFractionExact)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x5c3b514;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(),
                                                { "ParseFractionExact", {}, { ::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<double_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.ParseSign
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::__DTString>, ::by_ref<bool>)>(&::System::DateTimeParse::ParseSign)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5c3b800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(), { "ParseSign", {}, { ::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.ParseTimeZoneOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::__DTString>, int32_t, ::by_ref<::System::TimeSpan>)>(&::System::DateTimeParse::ParseTimeZoneOffset)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x5c3b8c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(),
                            { "ParseTimeZoneOffset", {}, { ::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::System::TimeSpan>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.MatchAbbreviatedMonthName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::__DTString>, ::System::Globalization::DateTimeFormatInfo*, ::by_ref<int32_t>)>(
    &::System::DateTimeParse::MatchAbbreviatedMonthName)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x5c3bac8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(),
                            { "MatchAbbreviatedMonthName",
                              {},
                              { ::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.MatchMonthName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::__DTString>, ::System::Globalization::DateTimeFormatInfo*, ::by_ref<int32_t>)>(
    &::System::DateTimeParse::MatchMonthName)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x5c3bcdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::DateTimeParse*>(),
            { "MatchMonthName", {}, { ::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.MatchAbbreviatedDayName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::__DTString>, ::System::Globalization::DateTimeFormatInfo*, ::by_ref<int32_t>)>(
    &::System::DateTimeParse::MatchAbbreviatedDayName)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5c3bf54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(),
                            { "MatchAbbreviatedDayName",
                              {},
                              { ::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.MatchDayName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::__DTString>, ::System::Globalization::DateTimeFormatInfo*, ::by_ref<int32_t>)>(
    &::System::DateTimeParse::MatchDayName)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5c3c0c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::DateTimeParse*>(),
            { "MatchDayName", {}, { ::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.MatchEraName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::__DTString>, ::System::Globalization::DateTimeFormatInfo*, ::by_ref<int32_t>)>(
    &::System::DateTimeParse::MatchEraName)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5c3c23c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::DateTimeParse*>(),
            { "MatchEraName", {}, { ::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.MatchTimeMark
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::__DTString>, ::System::Globalization::DateTimeFormatInfo*, ::by_ref<::System::DateTimeParse_TM>)>(
    &::System::DateTimeParse::MatchTimeMark)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x5c3c3dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(), { "MatchTimeMark",
                                                                           {},
                                                                           { ::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(),
                                                                             ::i2c::type_of<::by_ref<::System::DateTimeParse_TM>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.MatchAbbreviatedTimeMark
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::__DTString>, ::System::Globalization::DateTimeFormatInfo*, ::by_ref<::System::DateTimeParse_TM>)>(
    &::System::DateTimeParse::MatchAbbreviatedTimeMark)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5c3c5a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(), { "MatchAbbreviatedTimeMark",
                                                                           {},
                                                                           { ::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(),
                                                                             ::i2c::type_of<::by_ref<::System::DateTimeParse_TM>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.CheckNewValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<int32_t>, int32_t, char16_t, ::by_ref<::System::DateTimeResult>)>(&::System::DateTimeParse::CheckNewValue)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5c3c718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::DateTimeParse*>(),
            { "CheckNewValue", {}, { ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<::by_ref<::System::DateTimeResult>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.GetDateTimeNow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(::by_ref<::System::DateTimeResult>, ::by_ref<::System::Globalization::DateTimeStyles>)>(
    &::System::DateTimeParse::GetDateTimeNow)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5c379c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(),
                                         { "GetDateTimeNow", {}, { ::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::Globalization::DateTimeStyles>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.CheckDefaultDateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::DateTimeResult>, ::by_ref<::System::Globalization::Calendar*>, ::System::Globalization::DateTimeStyles)>(
    &::System::DateTimeParse::CheckDefaultDateTime)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x5c3a68c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(), { "CheckDefaultDateTime",
                                                                           {},
                                                                           { ::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::Globalization::Calendar*>>(),
                                                                             ::i2c::type_of<::System::Globalization::DateTimeStyles>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.ExpandPredefinedFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::ReadOnlySpan_1<char16_t>, ::by_ref<::System::Globalization::DateTimeFormatInfo*>, ::by_ref<::System::ParsingInfo>,
                                                                     ::by_ref<::System::DateTimeResult>)>(&::System::DateTimeParse::ExpandPredefinedFormat)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x5c3c7c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(),
                                                             { "ExpandPredefinedFormat",
                                                               {},
                                                               { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::by_ref<::System::Globalization::DateTimeFormatInfo*>>(),
                                                                 ::i2c::type_of<::by_ref<::System::ParsingInfo>>(), ::i2c::type_of<::by_ref<::System::DateTimeResult>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.ParseJapaneseEraStart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::__DTString>, ::System::Globalization::DateTimeFormatInfo*)>(&::System::DateTimeParse::ParseJapaneseEraStart)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5c3cb08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(),
                                         { "ParseJapaneseEraStart", {}, { ::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.ParseByFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::__DTString>, ::by_ref<::System::__DTString>, ::by_ref<::System::ParsingInfo>,
                                                                ::System::Globalization::DateTimeFormatInfo*, ::by_ref<::System::DateTimeResult>)>(&::System::DateTimeParse::ParseByFormat)> {
  constexpr static std::size_t size = 0x1174;
  constexpr static std::size_t addrs = 0x5c3cc28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(),
                                         { "ParseByFormat",
                                           {},
                                           { ::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<::by_ref<::System::ParsingInfo>>(),
                                             ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::by_ref<::System::DateTimeResult>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.TryParseQuoteString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, int32_t, ::System::Text::StringBuilder*, ::by_ref<int32_t>)>(
    &::System::DateTimeParse::TryParseQuoteString)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5c3dd9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(), { "TryParseQuoteString",
                                                                                               {},
                                                                                               { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<int32_t>(),
                                                                                                 ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.DoStrictParse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::DateTimeStyles,
                                                                ::System::Globalization::DateTimeFormatInfo*, ::by_ref<::System::DateTimeResult>)>(&::System::DateTimeParse::DoStrictParse)> {
  constexpr static std::size_t size = 0x8a4;
  constexpr static std::size_t addrs = 0x5c34640;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(),
                            { "DoStrictParse",
                              {},
                              { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::DateTimeStyles>(),
                                ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::by_ref<::System::DateTimeResult>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.GetDateTimeParseException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::by_ref<::System::DateTimeResult>)>(&::System::DateTimeParse::GetDateTimeParseException)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x5c344c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(), { "GetDateTimeParseException", {}, { ::i2c::type_of<::by_ref<::System::DateTimeResult>>() } })));
    return ___internal_method;
  }
};
inline void System::DateTimeParse::setStaticF_m_hebrewNumberParser(::System::DateTimeParse_MatchNumberDelegate* value) {
  ::cordl_internals::setStaticField<::System::DateTimeParse_MatchNumberDelegate*, "m_hebrewNumberParser", ::System::DateTimeParse*>(std::forward<::System::DateTimeParse_MatchNumberDelegate*>(value));
}
inline ::System::DateTimeParse_MatchNumberDelegate* System::DateTimeParse::getStaticF_m_hebrewNumberParser() {
  return ::cordl_internals::getStaticField<::System::DateTimeParse_MatchNumberDelegate*, "m_hebrewNumberParser", ::System::DateTimeParse*>();
}
inline void System::DateTimeParse::setStaticF_dateParsingStates(::ArrayW<::ArrayW<::System::DateTimeParse_DS>> value) {
  ::cordl_internals::setStaticField<::ArrayW<::ArrayW<::System::DateTimeParse_DS>>, "dateParsingStates", ::System::DateTimeParse*>(std::forward<::ArrayW<::ArrayW<::System::DateTimeParse_DS>>>(value));
}
inline ::ArrayW<::ArrayW<::System::DateTimeParse_DS>> System::DateTimeParse::getStaticF_dateParsingStates() {
  return ::cordl_internals::getStaticField<::ArrayW<::ArrayW<::System::DateTimeParse_DS>>, "dateParsingStates", ::System::DateTimeParse*>();
}
inline ::System::DateTime System::DateTimeParse::ParseExact(::System::ReadOnlySpan_1<char16_t> s, ::System::ReadOnlySpan_1<char16_t> format, ::System::Globalization::DateTimeFormatInfo* dtfi,
                                                            ::System::Globalization::DateTimeStyles style) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(),
                                                           { "ParseExact",
                                                             {},
                                                             { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(),
                                                               ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::System::Globalization::DateTimeStyles>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, s, format, dtfi, style);
}
inline ::System::DateTime System::DateTimeParse::ParseExact(::System::ReadOnlySpan_1<char16_t> s, ::System::ReadOnlySpan_1<char16_t> format, ::System::Globalization::DateTimeFormatInfo* dtfi,
                                                            ::System::Globalization::DateTimeStyles style, ::by_ref<::System::TimeSpan> offset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(), { "ParseExact",
                                                                         {},
                                                                         { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(),
                                                                           ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::System::Globalization::DateTimeStyles>(),
                                                                           ::i2c::type_of<::by_ref<::System::TimeSpan>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, s, format, dtfi, style, offset);
}
inline bool System::DateTimeParse::TryParseExact(::System::ReadOnlySpan_1<char16_t> s, ::System::ReadOnlySpan_1<char16_t> format, ::System::Globalization::DateTimeFormatInfo* dtfi,
                                                 ::System::Globalization::DateTimeStyles style, ::by_ref<::System::DateTime> result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(), { "TryParseExact",
                                                                         {},
                                                                         { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(),
                                                                           ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::System::Globalization::DateTimeStyles>(),
                                                                           ::i2c::type_of<::by_ref<::System::DateTime>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, s, format, dtfi, style, result);
}
inline bool System::DateTimeParse::TryParseExact(::System::ReadOnlySpan_1<char16_t> s, ::System::ReadOnlySpan_1<char16_t> format, ::System::Globalization::DateTimeFormatInfo* dtfi,
                                                 ::System::Globalization::DateTimeStyles style, ::by_ref<::System::DateTime> result, ::by_ref<::System::TimeSpan> offset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(), { "TryParseExact",
                                                                         {},
                                                                         { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(),
                                                                           ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::System::Globalization::DateTimeStyles>(),
                                                                           ::i2c::type_of<::by_ref<::System::DateTime>>(), ::i2c::type_of<::by_ref<::System::TimeSpan>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, s, format, dtfi, style, result, offset);
}
inline bool System::DateTimeParse::TryParseExact(::System::ReadOnlySpan_1<char16_t> s, ::System::ReadOnlySpan_1<char16_t> format, ::System::Globalization::DateTimeFormatInfo* dtfi,
                                                 ::System::Globalization::DateTimeStyles style, ::by_ref<::System::DateTimeResult> result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(), { "TryParseExact",
                                                                         {},
                                                                         { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(),
                                                                           ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::System::Globalization::DateTimeStyles>(),
                                                                           ::i2c::type_of<::by_ref<::System::DateTimeResult>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, s, format, dtfi, style, result);
}
inline ::System::DateTime System::DateTimeParse::ParseExactMultiple(::System::ReadOnlySpan_1<char16_t> s, ::ArrayW<::StringW> formats, ::System::Globalization::DateTimeFormatInfo* dtfi,
                                                                    ::System::Globalization::DateTimeStyles style) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(),
                                                           { "ParseExactMultiple",
                                                             {},
                                                             { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::ArrayW<::StringW>>(),
                                                               ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::System::Globalization::DateTimeStyles>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, s, formats, dtfi, style);
}
inline bool System::DateTimeParse::TryParseExactMultiple(::System::ReadOnlySpan_1<char16_t> s, ::ArrayW<::StringW> formats, ::System::Globalization::DateTimeFormatInfo* dtfi,
                                                         ::System::Globalization::DateTimeStyles style, ::by_ref<::System::DateTime> result, ::by_ref<::System::TimeSpan> offset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(),
                          { "TryParseExactMultiple",
                            {},
                            { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(),
                              ::i2c::type_of<::System::Globalization::DateTimeStyles>(), ::i2c::type_of<::by_ref<::System::DateTime>>(), ::i2c::type_of<::by_ref<::System::TimeSpan>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, s, formats, dtfi, style, result, offset);
}
inline bool System::DateTimeParse::TryParseExactMultiple(::System::ReadOnlySpan_1<char16_t> s, ::ArrayW<::StringW> formats, ::System::Globalization::DateTimeFormatInfo* dtfi,
                                                         ::System::Globalization::DateTimeStyles style, ::by_ref<::System::DateTimeResult> result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(),
                                       { "TryParseExactMultiple",
                                         {},
                                         { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(),
                                           ::i2c::type_of<::System::Globalization::DateTimeStyles>(), ::i2c::type_of<::by_ref<::System::DateTimeResult>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, s, formats, dtfi, style, result);
}
inline bool System::DateTimeParse::MatchWord(::by_ref<::System::__DTString> str, ::StringW target) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(), { "MatchWord", {}, { ::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, str, target);
}
inline bool System::DateTimeParse::GetTimeZoneName(::by_ref<::System::__DTString> str) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(), { "GetTimeZoneName", {}, { ::i2c::type_of<::by_ref<::System::__DTString>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, str);
}
inline bool System::DateTimeParse::IsDigit(char16_t ch) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(), { "IsDigit", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ch);
}
inline bool System::DateTimeParse::ParseFraction(::by_ref<::System::__DTString> str, ::by_ref<double_t> result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(), { "ParseFraction", {}, { ::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<::by_ref<double_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, str, result);
}
inline bool System::DateTimeParse::ParseTimeZone(::by_ref<::System::__DTString> str, ::by_ref<::System::TimeSpan> result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(), { "ParseTimeZone", {}, { ::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<::by_ref<::System::TimeSpan>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, str, result);
}
inline bool System::DateTimeParse::HandleTimeZone(::by_ref<::System::__DTString> str, ::by_ref<::System::DateTimeResult> result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(),
                                                           { "HandleTimeZone", {}, { ::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<::by_ref<::System::DateTimeResult>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, str, result);
}
inline bool System::DateTimeParse::Lex(::System::DateTimeParse_DS dps, ::by_ref<::System::__DTString> str, ::by_ref<::System::DateTimeToken> dtok, ::by_ref<::System::DateTimeRawInfo> raw,
                                       ::by_ref<::System::DateTimeResult> result, ::by_ref<::System::Globalization::DateTimeFormatInfo*> dtfi, ::System::Globalization::DateTimeStyles styles) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(),
                                              { "Lex",
                                                {},
                                                { ::i2c::type_of<::System::DateTimeParse_DS>(), ::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<::by_ref<::System::DateTimeToken>>(),
                                                  ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>(), ::i2c::type_of<::by_ref<::System::DateTimeResult>>(),
                                                  ::i2c::type_of<::by_ref<::System::Globalization::DateTimeFormatInfo*>>(), ::i2c::type_of<::System::Globalization::DateTimeStyles>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, dps, str, dtok, raw, result, dtfi, styles);
}
inline ::System::Globalization::Calendar* System::DateTimeParse::GetJapaneseCalendarDefaultInstance() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(), { "GetJapaneseCalendarDefaultInstance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::Calendar*>(nullptr, ___internal_method);
}
inline ::System::Globalization::Calendar* System::DateTimeParse::GetTaiwanCalendarDefaultInstance() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(), { "GetTaiwanCalendarDefaultInstance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::Calendar*>(nullptr, ___internal_method);
}
inline bool System::DateTimeParse::VerifyValidPunctuation(::by_ref<::System::__DTString> str) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(), { "VerifyValidPunctuation", {}, { ::i2c::type_of<::by_ref<::System::__DTString>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, str);
}
inline bool System::DateTimeParse::GetYearMonthDayOrder(::StringW datePattern, ::System::Globalization::DateTimeFormatInfo* dtfi, ::by_ref<int32_t> order) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(),
                          { "GetYearMonthDayOrder", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, datePattern, dtfi, order);
}
inline bool System::DateTimeParse::GetYearMonthOrder(::StringW pattern, ::System::Globalization::DateTimeFormatInfo* dtfi, ::by_ref<int32_t> order) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(),
                          { "GetYearMonthOrder", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pattern, dtfi, order);
}
inline bool System::DateTimeParse::GetMonthDayOrder(::StringW pattern, ::System::Globalization::DateTimeFormatInfo* dtfi, ::by_ref<int32_t> order) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(),
                          { "GetMonthDayOrder", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pattern, dtfi, order);
}
inline bool System::DateTimeParse::TryAdjustYear(::by_ref<::System::DateTimeResult> result, int32_t year, ::by_ref<int32_t> adjustedYear) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(),
                                              { "TryAdjustYear", {}, { ::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, result, year, adjustedYear);
}
inline bool System::DateTimeParse::SetDateYMD(::by_ref<::System::DateTimeResult> result, int32_t year, int32_t month, int32_t day) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(),
                          { "SetDateYMD", {}, { ::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, result, year, month, day);
}
inline bool System::DateTimeParse::SetDateMDY(::by_ref<::System::DateTimeResult> result, int32_t month, int32_t day, int32_t year) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(),
                          { "SetDateMDY", {}, { ::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, result, month, day, year);
}
inline bool System::DateTimeParse::SetDateDMY(::by_ref<::System::DateTimeResult> result, int32_t day, int32_t month, int32_t year) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(),
                          { "SetDateDMY", {}, { ::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, result, day, month, year);
}
inline bool System::DateTimeParse::SetDateYDM(::by_ref<::System::DateTimeResult> result, int32_t year, int32_t day, int32_t month) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(),
                          { "SetDateYDM", {}, { ::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, result, year, day, month);
}
inline void System::DateTimeParse::GetDefaultYear(::by_ref<::System::DateTimeResult> result, ::by_ref<::System::Globalization::DateTimeStyles> styles) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(),
                                       { "GetDefaultYear", {}, { ::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::Globalization::DateTimeStyles>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, result, styles);
}
inline bool System::DateTimeParse::GetDayOfNN(::by_ref<::System::DateTimeResult> result, ::by_ref<::System::Globalization::DateTimeStyles> styles, ::by_ref<::System::DateTimeRawInfo> raw,
                                              ::System::Globalization::DateTimeFormatInfo* dtfi) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(), { "GetDayOfNN",
                                                                         {},
                                                                         { ::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::Globalization::DateTimeStyles>>(),
                                                                           ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, result, styles, raw, dtfi);
}
inline bool System::DateTimeParse::GetDayOfNNN(::by_ref<::System::DateTimeResult> result, ::by_ref<::System::DateTimeRawInfo> raw, ::System::Globalization::DateTimeFormatInfo* dtfi) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(), { "GetDayOfNNN",
                                                                                      {},
                                                                                      { ::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>(),
                                                                                        ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, result, raw, dtfi);
}
inline bool System::DateTimeParse::GetDayOfMN(::by_ref<::System::DateTimeResult> result, ::by_ref<::System::Globalization::DateTimeStyles> styles, ::by_ref<::System::DateTimeRawInfo> raw,
                                              ::System::Globalization::DateTimeFormatInfo* dtfi) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(), { "GetDayOfMN",
                                                                         {},
                                                                         { ::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::Globalization::DateTimeStyles>>(),
                                                                           ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, result, styles, raw, dtfi);
}
inline bool System::DateTimeParse::GetHebrewDayOfNM(::by_ref<::System::DateTimeResult> result, ::by_ref<::System::DateTimeRawInfo> raw, ::System::Globalization::DateTimeFormatInfo* dtfi) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(), { "GetHebrewDayOfNM",
                                                                                      {},
                                                                                      { ::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>(),
                                                                                        ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, result, raw, dtfi);
}
inline bool System::DateTimeParse::GetDayOfNM(::by_ref<::System::DateTimeResult> result, ::by_ref<::System::Globalization::DateTimeStyles> styles, ::by_ref<::System::DateTimeRawInfo> raw,
                                              ::System::Globalization::DateTimeFormatInfo* dtfi) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(), { "GetDayOfNM",
                                                                         {},
                                                                         { ::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::Globalization::DateTimeStyles>>(),
                                                                           ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, result, styles, raw, dtfi);
}
inline bool System::DateTimeParse::GetDayOfMNN(::by_ref<::System::DateTimeResult> result, ::by_ref<::System::DateTimeRawInfo> raw, ::System::Globalization::DateTimeFormatInfo* dtfi) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(), { "GetDayOfMNN",
                                                                                      {},
                                                                                      { ::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>(),
                                                                                        ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, result, raw, dtfi);
}
inline bool System::DateTimeParse::GetDayOfYNN(::by_ref<::System::DateTimeResult> result, ::by_ref<::System::DateTimeRawInfo> raw, ::System::Globalization::DateTimeFormatInfo* dtfi) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(), { "GetDayOfYNN",
                                                                                      {},
                                                                                      { ::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>(),
                                                                                        ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, result, raw, dtfi);
}
inline bool System::DateTimeParse::GetDayOfNNY(::by_ref<::System::DateTimeResult> result, ::by_ref<::System::DateTimeRawInfo> raw, ::System::Globalization::DateTimeFormatInfo* dtfi) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(), { "GetDayOfNNY",
                                                                                      {},
                                                                                      { ::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>(),
                                                                                        ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, result, raw, dtfi);
}
inline bool System::DateTimeParse::GetDayOfYMN(::by_ref<::System::DateTimeResult> result, ::by_ref<::System::DateTimeRawInfo> raw) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(),
                                                           { "GetDayOfYMN", {}, { ::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, result, raw);
}
inline bool System::DateTimeParse::GetDayOfYN(::by_ref<::System::DateTimeResult> result, ::by_ref<::System::DateTimeRawInfo> raw) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(),
                                                           { "GetDayOfYN", {}, { ::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, result, raw);
}
inline bool System::DateTimeParse::GetDayOfYM(::by_ref<::System::DateTimeResult> result, ::by_ref<::System::DateTimeRawInfo> raw) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(),
                                                           { "GetDayOfYM", {}, { ::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, result, raw);
}
inline void System::DateTimeParse::AdjustTimeMark(::System::Globalization::DateTimeFormatInfo* dtfi, ::by_ref<::System::DateTimeRawInfo> raw) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(),
                                              { "AdjustTimeMark", {}, { ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dtfi, raw);
}
inline bool System::DateTimeParse::AdjustHour(::by_ref<int32_t> hour, ::System::DateTimeParse_TM timeMark) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(), { "AdjustHour", {}, { ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::DateTimeParse_TM>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hour, timeMark);
}
inline bool System::DateTimeParse::GetTimeOfN(::by_ref<::System::DateTimeResult> result, ::by_ref<::System::DateTimeRawInfo> raw) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(),
                                                           { "GetTimeOfN", {}, { ::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, result, raw);
}
inline bool System::DateTimeParse::GetTimeOfNN(::by_ref<::System::DateTimeResult> result, ::by_ref<::System::DateTimeRawInfo> raw) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(),
                                                           { "GetTimeOfNN", {}, { ::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, result, raw);
}
inline bool System::DateTimeParse::GetTimeOfNNN(::by_ref<::System::DateTimeResult> result, ::by_ref<::System::DateTimeRawInfo> raw) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(),
                                                           { "GetTimeOfNNN", {}, { ::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, result, raw);
}
inline bool System::DateTimeParse::GetDateOfDSN(::by_ref<::System::DateTimeResult> result, ::by_ref<::System::DateTimeRawInfo> raw) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(),
                                                           { "GetDateOfDSN", {}, { ::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, result, raw);
}
inline bool System::DateTimeParse::GetDateOfNDS(::by_ref<::System::DateTimeResult> result, ::by_ref<::System::DateTimeRawInfo> raw) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(),
                                                           { "GetDateOfNDS", {}, { ::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, result, raw);
}
inline bool System::DateTimeParse::GetDateOfNNDS(::by_ref<::System::DateTimeResult> result, ::by_ref<::System::DateTimeRawInfo> raw, ::System::Globalization::DateTimeFormatInfo* dtfi) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(), { "GetDateOfNNDS",
                                                                                      {},
                                                                                      { ::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>(),
                                                                                        ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, result, raw, dtfi);
}
inline bool System::DateTimeParse::ProcessDateTimeSuffix(::by_ref<::System::DateTimeResult> result, ::by_ref<::System::DateTimeRawInfo> raw, ::by_ref<::System::DateTimeToken> dtok) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(),
                          { "ProcessDateTimeSuffix",
                            {},
                            { ::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>(), ::i2c::type_of<::by_ref<::System::DateTimeToken>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, result, raw, dtok);
}
inline bool System::DateTimeParse::ProcessHebrewTerminalState(::System::DateTimeParse_DS dps, ::by_ref<::System::__DTString> str, ::by_ref<::System::DateTimeResult> result,
                                                              ::by_ref<::System::Globalization::DateTimeStyles> styles, ::by_ref<::System::DateTimeRawInfo> raw,
                                                              ::System::Globalization::DateTimeFormatInfo* dtfi) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(), { "ProcessHebrewTerminalState",
                                                                         {},
                                                                         { ::i2c::type_of<::System::DateTimeParse_DS>(), ::i2c::type_of<::by_ref<::System::__DTString>>(),
                                                                           ::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::Globalization::DateTimeStyles>>(),
                                                                           ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, dps, str, result, styles, raw, dtfi);
}
inline bool System::DateTimeParse::ProcessTerminalState(::System::DateTimeParse_DS dps, ::by_ref<::System::__DTString> str, ::by_ref<::System::DateTimeResult> result,
                                                        ::by_ref<::System::Globalization::DateTimeStyles> styles, ::by_ref<::System::DateTimeRawInfo> raw,
                                                        ::System::Globalization::DateTimeFormatInfo* dtfi) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(), { "ProcessTerminalState",
                                                                         {},
                                                                         { ::i2c::type_of<::System::DateTimeParse_DS>(), ::i2c::type_of<::by_ref<::System::__DTString>>(),
                                                                           ::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::Globalization::DateTimeStyles>>(),
                                                                           ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, dps, str, result, styles, raw, dtfi);
}
inline ::System::DateTime System::DateTimeParse::Parse(::System::ReadOnlySpan_1<char16_t> s, ::System::Globalization::DateTimeFormatInfo* dtfi, ::System::Globalization::DateTimeStyles styles) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(), { "Parse",
                                                                         {},
                                                                         { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(),
                                                                           ::i2c::type_of<::System::Globalization::DateTimeStyles>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, s, dtfi, styles);
}
inline ::System::DateTime System::DateTimeParse::Parse(::System::ReadOnlySpan_1<char16_t> s, ::System::Globalization::DateTimeFormatInfo* dtfi, ::System::Globalization::DateTimeStyles styles,
                                                       ::by_ref<::System::TimeSpan> offset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(), { "Parse",
                                                                         {},
                                                                         { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(),
                                                                           ::i2c::type_of<::System::Globalization::DateTimeStyles>(), ::i2c::type_of<::by_ref<::System::TimeSpan>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, s, dtfi, styles, offset);
}
inline bool System::DateTimeParse::TryParse(::System::ReadOnlySpan_1<char16_t> s, ::System::Globalization::DateTimeFormatInfo* dtfi, ::System::Globalization::DateTimeStyles styles,
                                            ::by_ref<::System::DateTime> result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(), { "TryParse",
                                                                         {},
                                                                         { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(),
                                                                           ::i2c::type_of<::System::Globalization::DateTimeStyles>(), ::i2c::type_of<::by_ref<::System::DateTime>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, s, dtfi, styles, result);
}
inline bool System::DateTimeParse::TryParse(::System::ReadOnlySpan_1<char16_t> s, ::System::Globalization::DateTimeFormatInfo* dtfi, ::System::Globalization::DateTimeStyles styles,
                                            ::by_ref<::System::DateTime> result, ::by_ref<::System::TimeSpan> offset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(),
                          { "TryParse",
                            {},
                            { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(),
                              ::i2c::type_of<::System::Globalization::DateTimeStyles>(), ::i2c::type_of<::by_ref<::System::DateTime>>(), ::i2c::type_of<::by_ref<::System::TimeSpan>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, s, dtfi, styles, result, offset);
}
inline bool System::DateTimeParse::TryParse(::System::ReadOnlySpan_1<char16_t> s, ::System::Globalization::DateTimeFormatInfo* dtfi, ::System::Globalization::DateTimeStyles styles,
                                            ::by_ref<::System::DateTimeResult> result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(), { "TryParse",
                                                                         {},
                                                                         { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(),
                                                                           ::i2c::type_of<::System::Globalization::DateTimeStyles>(), ::i2c::type_of<::by_ref<::System::DateTimeResult>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, s, dtfi, styles, result);
}
inline bool System::DateTimeParse::DetermineTimeZoneAdjustments(::by_ref<::System::__DTString> str, ::by_ref<::System::DateTimeResult> result, ::System::Globalization::DateTimeStyles styles,
                                                                bool bTimeOnly) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(), { "DetermineTimeZoneAdjustments",
                                                                                             {},
                                                                                             { ::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<::by_ref<::System::DateTimeResult>>(),
                                                                                               ::i2c::type_of<::System::Globalization::DateTimeStyles>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, str, result, styles, bTimeOnly);
}
inline bool System::DateTimeParse::DateTimeOffsetTimeZonePostProcessing(::by_ref<::System::__DTString> str, ::by_ref<::System::DateTimeResult> result, ::System::Globalization::DateTimeStyles styles) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(), { "DateTimeOffsetTimeZonePostProcessing",
                                                                                             {},
                                                                                             { ::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<::by_ref<::System::DateTimeResult>>(),
                                                                                               ::i2c::type_of<::System::Globalization::DateTimeStyles>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, str, result, styles);
}
inline bool System::DateTimeParse::AdjustTimeZoneToUniversal(::by_ref<::System::DateTimeResult> result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(), { "AdjustTimeZoneToUniversal", {}, { ::i2c::type_of<::by_ref<::System::DateTimeResult>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, result);
}
inline bool System::DateTimeParse::AdjustTimeZoneToLocal(::by_ref<::System::DateTimeResult> result, bool bTimeOnly) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(), { "AdjustTimeZoneToLocal", {}, { ::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, result, bTimeOnly);
}
inline bool System::DateTimeParse::ParseISO8601(::by_ref<::System::DateTimeRawInfo> raw, ::by_ref<::System::__DTString> str, ::System::Globalization::DateTimeStyles styles,
                                                ::by_ref<::System::DateTimeResult> result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(), { "ParseISO8601",
                                                                         {},
                                                                         { ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>(), ::i2c::type_of<::by_ref<::System::__DTString>>(),
                                                                           ::i2c::type_of<::System::Globalization::DateTimeStyles>(), ::i2c::type_of<::by_ref<::System::DateTimeResult>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, raw, str, styles, result);
}
inline bool System::DateTimeParse::MatchHebrewDigits(::by_ref<::System::__DTString> str, int32_t digitLen, ::by_ref<int32_t> number) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(),
                                              { "MatchHebrewDigits", {}, { ::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, str, digitLen, number);
}
inline bool System::DateTimeParse::ParseDigits(::by_ref<::System::__DTString> str, int32_t digitLen, ::by_ref<int32_t> result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(),
                                              { "ParseDigits", {}, { ::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, str, digitLen, result);
}
inline bool System::DateTimeParse::ParseDigits(::by_ref<::System::__DTString> str, int32_t minDigitLen, int32_t maxDigitLen, ::by_ref<int32_t> result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(),
                          { "ParseDigits", {}, { ::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, str, minDigitLen, maxDigitLen, result);
}
inline bool System::DateTimeParse::ParseFractionExact(::by_ref<::System::__DTString> str, int32_t maxDigitLen, ::by_ref<double_t> result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(),
                                              { "ParseFractionExact", {}, { ::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<double_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, str, maxDigitLen, result);
}
inline bool System::DateTimeParse::ParseSign(::by_ref<::System::__DTString> str, ::by_ref<bool> result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(), { "ParseSign", {}, { ::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, str, result);
}
inline bool System::DateTimeParse::ParseTimeZoneOffset(::by_ref<::System::__DTString> str, int32_t len, ::by_ref<::System::TimeSpan> result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(),
                          { "ParseTimeZoneOffset", {}, { ::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::System::TimeSpan>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, str, len, result);
}
inline bool System::DateTimeParse::MatchAbbreviatedMonthName(::by_ref<::System::__DTString> str, ::System::Globalization::DateTimeFormatInfo* dtfi, ::by_ref<int32_t> result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(),
                                       { "MatchAbbreviatedMonthName",
                                         {},
                                         { ::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, str, dtfi, result);
}
inline bool System::DateTimeParse::MatchMonthName(::by_ref<::System::__DTString> str, ::System::Globalization::DateTimeFormatInfo* dtfi, ::by_ref<int32_t> result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::DateTimeParse*>(),
          { "MatchMonthName", {}, { ::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, str, dtfi, result);
}
inline bool System::DateTimeParse::MatchAbbreviatedDayName(::by_ref<::System::__DTString> str, ::System::Globalization::DateTimeFormatInfo* dtfi, ::by_ref<int32_t> result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(),
                                       { "MatchAbbreviatedDayName",
                                         {},
                                         { ::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, str, dtfi, result);
}
inline bool System::DateTimeParse::MatchDayName(::by_ref<::System::__DTString> str, ::System::Globalization::DateTimeFormatInfo* dtfi, ::by_ref<int32_t> result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::DateTimeParse*>(),
          { "MatchDayName", {}, { ::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, str, dtfi, result);
}
inline bool System::DateTimeParse::MatchEraName(::by_ref<::System::__DTString> str, ::System::Globalization::DateTimeFormatInfo* dtfi, ::by_ref<int32_t> result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::DateTimeParse*>(),
          { "MatchEraName", {}, { ::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, str, dtfi, result);
}
inline bool System::DateTimeParse::MatchTimeMark(::by_ref<::System::__DTString> str, ::System::Globalization::DateTimeFormatInfo* dtfi, ::by_ref<::System::DateTimeParse_TM> result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(), { "MatchTimeMark",
                                                                         {},
                                                                         { ::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(),
                                                                           ::i2c::type_of<::by_ref<::System::DateTimeParse_TM>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, str, dtfi, result);
}
inline bool System::DateTimeParse::MatchAbbreviatedTimeMark(::by_ref<::System::__DTString> str, ::System::Globalization::DateTimeFormatInfo* dtfi, ::by_ref<::System::DateTimeParse_TM> result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(), { "MatchAbbreviatedTimeMark",
                                                                         {},
                                                                         { ::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(),
                                                                           ::i2c::type_of<::by_ref<::System::DateTimeParse_TM>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, str, dtfi, result);
}
inline bool System::DateTimeParse::CheckNewValue(::by_ref<int32_t> currentValue, int32_t newValue, char16_t patternChar, ::by_ref<::System::DateTimeResult> result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::System::DateTimeParse*>(),
                       { "CheckNewValue", {}, { ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<::by_ref<::System::DateTimeResult>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, currentValue, newValue, patternChar, result);
}
inline ::System::DateTime System::DateTimeParse::GetDateTimeNow(::by_ref<::System::DateTimeResult> result, ::by_ref<::System::Globalization::DateTimeStyles> styles) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(),
                                       { "GetDateTimeNow", {}, { ::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::Globalization::DateTimeStyles>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, result, styles);
}
inline bool System::DateTimeParse::CheckDefaultDateTime(::by_ref<::System::DateTimeResult> result, ::by_ref<::System::Globalization::Calendar*> cal, ::System::Globalization::DateTimeStyles styles) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(), { "CheckDefaultDateTime",
                                                                         {},
                                                                         { ::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::Globalization::Calendar*>>(),
                                                                           ::i2c::type_of<::System::Globalization::DateTimeStyles>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, result, cal, styles);
}
inline ::StringW System::DateTimeParse::ExpandPredefinedFormat(::System::ReadOnlySpan_1<char16_t> format, ::by_ref<::System::Globalization::DateTimeFormatInfo*> dtfi,
                                                               ::by_ref<::System::ParsingInfo> parseInfo, ::by_ref<::System::DateTimeResult> result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(),
                                                           { "ExpandPredefinedFormat",
                                                             {},
                                                             { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::by_ref<::System::Globalization::DateTimeFormatInfo*>>(),
                                                               ::i2c::type_of<::by_ref<::System::ParsingInfo>>(), ::i2c::type_of<::by_ref<::System::DateTimeResult>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, format, dtfi, parseInfo, result);
}
inline bool System::DateTimeParse::ParseJapaneseEraStart(::by_ref<::System::__DTString> str, ::System::Globalization::DateTimeFormatInfo* dtfi) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(),
                                              { "ParseJapaneseEraStart", {}, { ::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, str, dtfi);
}
inline bool System::DateTimeParse::ParseByFormat(::by_ref<::System::__DTString> str, ::by_ref<::System::__DTString> format, ::by_ref<::System::ParsingInfo> parseInfo,
                                                 ::System::Globalization::DateTimeFormatInfo* dtfi, ::by_ref<::System::DateTimeResult> result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(),
                                              { "ParseByFormat",
                                                {},
                                                { ::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<::by_ref<::System::ParsingInfo>>(),
                                                  ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::by_ref<::System::DateTimeResult>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, str, format, parseInfo, dtfi, result);
}
inline bool System::DateTimeParse::TryParseQuoteString(::System::ReadOnlySpan_1<char16_t> format, int32_t pos, ::System::Text::StringBuilder* result, ::by_ref<int32_t> returnValue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(), { "TryParseQuoteString",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<int32_t>(),
                                                                                               ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, format, pos, result, returnValue);
}
inline bool System::DateTimeParse::DoStrictParse(::System::ReadOnlySpan_1<char16_t> s, ::System::ReadOnlySpan_1<char16_t> formatParam, ::System::Globalization::DateTimeStyles styles,
                                                 ::System::Globalization::DateTimeFormatInfo* dtfi, ::by_ref<::System::DateTimeResult> result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(),
                          { "DoStrictParse",
                            {},
                            { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::DateTimeStyles>(),
                              ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::by_ref<::System::DateTimeResult>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, s, formatParam, styles, dtfi, result);
}
inline ::System::Exception* System::DateTimeParse::GetDateTimeParseException(::by_ref<::System::DateTimeResult> result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeParse*>(), { "GetDateTimeParseException", {}, { ::i2c::type_of<::by_ref<::System::DateTimeResult>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::System::DateTimeParse::DateTimeParse() {}
