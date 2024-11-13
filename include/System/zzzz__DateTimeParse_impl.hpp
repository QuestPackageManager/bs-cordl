#pragma once
// IWYU pragma private; include "System/DateTimeParse.hpp"
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
//  Writing Method size for method: ::System::__DateTimeParse__MatchNumberDelegate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::__DateTimeParse__MatchNumberDelegate::*)(::System::Object*, ::System::IntPtr)>(
    &::System::__DateTimeParse__MatchNumberDelegate::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x3d80b24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__DateTimeParse__MatchNumberDelegate*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__DateTimeParse__MatchNumberDelegate.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::__DateTimeParse__MatchNumberDelegate::*)(ByRef<::System::__DTString>, int32_t, ByRef<int32_t>)>(
    &::System::__DateTimeParse__MatchNumberDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3d80bc4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__DateTimeParse__MatchNumberDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__DateTimeParse__MatchNumberDelegate*>::get(), 13));
    return ___internal_method;
  }
};
inline ::System::__DateTimeParse__MatchNumberDelegate* System::__DateTimeParse__MatchNumberDelegate::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::__DateTimeParse__MatchNumberDelegate*>(object, method));
}
inline void System::__DateTimeParse__MatchNumberDelegate::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__DateTimeParse__MatchNumberDelegate*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline bool System::__DateTimeParse__MatchNumberDelegate::Invoke(ByRef<::System::__DTString> str, int32_t digitLen, ByRef<int32_t> result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__DateTimeParse__MatchNumberDelegate*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, str, digitLen, result);
}
// Ctor Parameters []
constexpr ::System::__DateTimeParse__MatchNumberDelegate::__DateTimeParse__MatchNumberDelegate() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::__DateTimeParse__DTT::__DateTimeParse__DTT(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::__DateTimeParse__DTT::__DateTimeParse__DTT() {}
constexpr ::System::__DateTimeParse__DTT System::__DateTimeParse__DTT::End{ static_cast<int32_t>(0x0) };
constexpr ::System::__DateTimeParse__DTT System::__DateTimeParse__DTT::NumEnd{ static_cast<int32_t>(0x1) };
constexpr ::System::__DateTimeParse__DTT System::__DateTimeParse__DTT::NumAmpm{ static_cast<int32_t>(0x2) };
constexpr ::System::__DateTimeParse__DTT System::__DateTimeParse__DTT::NumSpace{ static_cast<int32_t>(0x3) };
constexpr ::System::__DateTimeParse__DTT System::__DateTimeParse__DTT::NumDatesep{ static_cast<int32_t>(0x4) };
constexpr ::System::__DateTimeParse__DTT System::__DateTimeParse__DTT::NumTimesep{ static_cast<int32_t>(0x5) };
constexpr ::System::__DateTimeParse__DTT System::__DateTimeParse__DTT::MonthEnd{ static_cast<int32_t>(0x6) };
constexpr ::System::__DateTimeParse__DTT System::__DateTimeParse__DTT::MonthSpace{ static_cast<int32_t>(0x7) };
constexpr ::System::__DateTimeParse__DTT System::__DateTimeParse__DTT::MonthDatesep{ static_cast<int32_t>(0x8) };
constexpr ::System::__DateTimeParse__DTT System::__DateTimeParse__DTT::NumDatesuff{ static_cast<int32_t>(0x9) };
constexpr ::System::__DateTimeParse__DTT System::__DateTimeParse__DTT::NumTimesuff{ static_cast<int32_t>(0xa) };
constexpr ::System::__DateTimeParse__DTT System::__DateTimeParse__DTT::DayOfWeek{ static_cast<int32_t>(0xb) };
constexpr ::System::__DateTimeParse__DTT System::__DateTimeParse__DTT::YearSpace{ static_cast<int32_t>(0xc) };
constexpr ::System::__DateTimeParse__DTT System::__DateTimeParse__DTT::YearDateSep{ static_cast<int32_t>(0xd) };
constexpr ::System::__DateTimeParse__DTT System::__DateTimeParse__DTT::YearEnd{ static_cast<int32_t>(0xe) };
constexpr ::System::__DateTimeParse__DTT System::__DateTimeParse__DTT::TimeZone{ static_cast<int32_t>(0xf) };
constexpr ::System::__DateTimeParse__DTT System::__DateTimeParse__DTT::Era{ static_cast<int32_t>(0x10) };
constexpr ::System::__DateTimeParse__DTT System::__DateTimeParse__DTT::NumUTCTimeMark{ static_cast<int32_t>(0x11) };
constexpr ::System::__DateTimeParse__DTT System::__DateTimeParse__DTT::Unk{ static_cast<int32_t>(0x12) };
constexpr ::System::__DateTimeParse__DTT System::__DateTimeParse__DTT::NumLocalTimeMark{ static_cast<int32_t>(0x13) };
constexpr ::System::__DateTimeParse__DTT System::__DateTimeParse__DTT::Max{ static_cast<int32_t>(0x14) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::__DateTimeParse__TM::__DateTimeParse__TM(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::__DateTimeParse__TM::__DateTimeParse__TM() {}
constexpr ::System::__DateTimeParse__TM System::__DateTimeParse__TM::NotSet{ static_cast<int32_t>(0xffffffff) };
constexpr ::System::__DateTimeParse__TM System::__DateTimeParse__TM::AM{ static_cast<int32_t>(0x0) };
constexpr ::System::__DateTimeParse__TM System::__DateTimeParse__TM::PM{ static_cast<int32_t>(0x1) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::__DateTimeParse__DS::__DateTimeParse__DS(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::__DateTimeParse__DS::__DateTimeParse__DS() {}
constexpr ::System::__DateTimeParse__DS System::__DateTimeParse__DS::BEGIN{ static_cast<int32_t>(0x0) };
constexpr ::System::__DateTimeParse__DS System::__DateTimeParse__DS::N{ static_cast<int32_t>(0x1) };
constexpr ::System::__DateTimeParse__DS System::__DateTimeParse__DS::NN{ static_cast<int32_t>(0x2) };
constexpr ::System::__DateTimeParse__DS System::__DateTimeParse__DS::D_Nd{ static_cast<int32_t>(0x3) };
constexpr ::System::__DateTimeParse__DS System::__DateTimeParse__DS::D_NN{ static_cast<int32_t>(0x4) };
constexpr ::System::__DateTimeParse__DS System::__DateTimeParse__DS::D_NNd{ static_cast<int32_t>(0x5) };
constexpr ::System::__DateTimeParse__DS System::__DateTimeParse__DS::D_M{ static_cast<int32_t>(0x6) };
constexpr ::System::__DateTimeParse__DS System::__DateTimeParse__DS::D_MN{ static_cast<int32_t>(0x7) };
constexpr ::System::__DateTimeParse__DS System::__DateTimeParse__DS::D_NM{ static_cast<int32_t>(0x8) };
constexpr ::System::__DateTimeParse__DS System::__DateTimeParse__DS::D_MNd{ static_cast<int32_t>(0x9) };
constexpr ::System::__DateTimeParse__DS System::__DateTimeParse__DS::D_NDS{ static_cast<int32_t>(0xa) };
constexpr ::System::__DateTimeParse__DS System::__DateTimeParse__DS::D_Y{ static_cast<int32_t>(0xb) };
constexpr ::System::__DateTimeParse__DS System::__DateTimeParse__DS::D_YN{ static_cast<int32_t>(0xc) };
constexpr ::System::__DateTimeParse__DS System::__DateTimeParse__DS::D_YNd{ static_cast<int32_t>(0xd) };
constexpr ::System::__DateTimeParse__DS System::__DateTimeParse__DS::D_YM{ static_cast<int32_t>(0xe) };
constexpr ::System::__DateTimeParse__DS System::__DateTimeParse__DS::D_YMd{ static_cast<int32_t>(0xf) };
constexpr ::System::__DateTimeParse__DS System::__DateTimeParse__DS::D_S{ static_cast<int32_t>(0x10) };
constexpr ::System::__DateTimeParse__DS System::__DateTimeParse__DS::T_S{ static_cast<int32_t>(0x11) };
constexpr ::System::__DateTimeParse__DS System::__DateTimeParse__DS::T_Nt{ static_cast<int32_t>(0x12) };
constexpr ::System::__DateTimeParse__DS System::__DateTimeParse__DS::T_NNt{ static_cast<int32_t>(0x13) };
constexpr ::System::__DateTimeParse__DS System::__DateTimeParse__DS::ERROR{ static_cast<int32_t>(0x14) };
constexpr ::System::__DateTimeParse__DS System::__DateTimeParse__DS::DX_NN{ static_cast<int32_t>(0x15) };
constexpr ::System::__DateTimeParse__DS System::__DateTimeParse__DS::DX_NNN{ static_cast<int32_t>(0x16) };
constexpr ::System::__DateTimeParse__DS System::__DateTimeParse__DS::DX_MN{ static_cast<int32_t>(0x17) };
constexpr ::System::__DateTimeParse__DS System::__DateTimeParse__DS::DX_NM{ static_cast<int32_t>(0x18) };
constexpr ::System::__DateTimeParse__DS System::__DateTimeParse__DS::DX_MNN{ static_cast<int32_t>(0x19) };
constexpr ::System::__DateTimeParse__DS System::__DateTimeParse__DS::DX_DS{ static_cast<int32_t>(0x1a) };
constexpr ::System::__DateTimeParse__DS System::__DateTimeParse__DS::DX_DSN{ static_cast<int32_t>(0x1b) };
constexpr ::System::__DateTimeParse__DS System::__DateTimeParse__DS::DX_NDS{ static_cast<int32_t>(0x1c) };
constexpr ::System::__DateTimeParse__DS System::__DateTimeParse__DS::DX_NNDS{ static_cast<int32_t>(0x1d) };
constexpr ::System::__DateTimeParse__DS System::__DateTimeParse__DS::DX_YNN{ static_cast<int32_t>(0x1e) };
constexpr ::System::__DateTimeParse__DS System::__DateTimeParse__DS::DX_YMN{ static_cast<int32_t>(0x1f) };
constexpr ::System::__DateTimeParse__DS System::__DateTimeParse__DS::DX_YN{ static_cast<int32_t>(0x20) };
constexpr ::System::__DateTimeParse__DS System::__DateTimeParse__DS::DX_YM{ static_cast<int32_t>(0x21) };
constexpr ::System::__DateTimeParse__DS System::__DateTimeParse__DS::TX_N{ static_cast<int32_t>(0x22) };
constexpr ::System::__DateTimeParse__DS System::__DateTimeParse__DS::TX_NN{ static_cast<int32_t>(0x23) };
constexpr ::System::__DateTimeParse__DS System::__DateTimeParse__DS::TX_NNN{ static_cast<int32_t>(0x24) };
constexpr ::System::__DateTimeParse__DS System::__DateTimeParse__DS::TX_TS{ static_cast<int32_t>(0x25) };
constexpr ::System::__DateTimeParse__DS System::__DateTimeParse__DS::DX_NNY{ static_cast<int32_t>(0x26) };
//  Writing Method size for method: ::System::__DateTimeParse____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::__DateTimeParse____c::*)()>(&::System::__DateTimeParse____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3d80c34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__DateTimeParse____c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__DateTimeParse____c._DoStrictParse_b__98_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::__DateTimeParse__MatchNumberDelegate* (::System::__DateTimeParse____c::*)()>(
    &::System::__DateTimeParse____c::_DoStrictParse_b__98_0)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3d80c3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__DateTimeParse____c*>::get(), "<DoStrictParse>b__98_0",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void System::__DateTimeParse____c::setStaticF___9(::System::__DateTimeParse____c* value) {
  ::cordl_internals::setStaticField<::System::__DateTimeParse____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__DateTimeParse____c*>::get>(
      std::forward<::System::__DateTimeParse____c*>(value));
}
inline ::System::__DateTimeParse____c* System::__DateTimeParse____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::System::__DateTimeParse____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__DateTimeParse____c*>::get>();
}
inline void System::__DateTimeParse____c::setStaticF___9__98_0(::System::Func_1<::System::__DateTimeParse__MatchNumberDelegate*>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<::System::__DateTimeParse__MatchNumberDelegate*>*, "<>9__98_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__DateTimeParse____c*>::get>(
      std::forward<::System::Func_1<::System::__DateTimeParse__MatchNumberDelegate*>*>(value));
}
inline ::System::Func_1<::System::__DateTimeParse__MatchNumberDelegate*>* System::__DateTimeParse____c::getStaticF___9__98_0() {
  return ::cordl_internals::getStaticField<::System::Func_1<::System::__DateTimeParse__MatchNumberDelegate*>*, "<>9__98_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__DateTimeParse____c*>::get>();
}
inline ::System::__DateTimeParse____c* System::__DateTimeParse____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::__DateTimeParse____c*>());
}
inline void System::__DateTimeParse____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__DateTimeParse____c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::__DateTimeParse__MatchNumberDelegate* System::__DateTimeParse____c::_DoStrictParse_b__98_0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__DateTimeParse____c*>::get(), "<DoStrictParse>b__98_0",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::__DateTimeParse__MatchNumberDelegate*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::__DateTimeParse____c::__DateTimeParse____c() {}
//  Writing Method size for method: ::System::DateTimeParse.ParseExact
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::DateTime (*)(::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::DateTimeFormatInfo*, ::System::Globalization::DateTimeStyles)>(
        &::System::DateTimeParse::ParseExact)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x3d6c880;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "ParseExact", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeStyles>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.ParseExact
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (*)(
    ::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::DateTimeFormatInfo*, ::System::Globalization::DateTimeStyles, ByRef<::System::TimeSpan>)>(
    &::System::DateTimeParse::ParseExact)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x3d709f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "ParseExact", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeStyles>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::TimeSpan>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.TryParseExact
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(
    ::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::DateTimeFormatInfo*, ::System::Globalization::DateTimeStyles, ByRef<::System::DateTime>)>(
    &::System::DateTimeParse::TryParseExact)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x3d6d734;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "TryParseExact", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeStyles>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTime>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.TryParseExact
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::DateTimeFormatInfo*, ::System::Globalization::DateTimeStyles,
                         ByRef<::System::DateTime>, ByRef<::System::TimeSpan>)>(&::System::DateTimeParse::TryParseExact)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x3d719e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "TryParseExact", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeStyles>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTime>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::TimeSpan>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.TryParseExact
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(
    ::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::DateTimeFormatInfo*, ::System::Globalization::DateTimeStyles, ByRef<::System::DateTimeResult>)>(
    &::System::DateTimeParse::TryParseExact)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x3d77000;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "TryParseExact", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeStyles>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeResult>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.ParseExactMultiple
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (*)(::System::ReadOnlySpan_1<char16_t>, ::ArrayW<::StringW, ::Array<::StringW>*>,
                                                                                                         ::System::Globalization::DateTimeFormatInfo*, ::System::Globalization::DateTimeStyles)>(
    &::System::DateTimeParse::ParseExactMultiple)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x3d6cc60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "ParseExactMultiple", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeStyles>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.TryParseExactMultiple
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::ArrayW<::StringW, ::Array<::StringW>*>, ::System::Globalization::DateTimeFormatInfo*, ::System::Globalization::DateTimeStyles,
                         ByRef<::System::DateTime>, ByRef<::System::TimeSpan>)>(&::System::DateTimeParse::TryParseExactMultiple)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x3d71d20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "TryParseExactMultiple", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeStyles>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTime>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::TimeSpan>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.TryParseExactMultiple
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::ArrayW<::StringW, ::Array<::StringW>*>, ::System::Globalization::DateTimeFormatInfo*, ::System::Globalization::DateTimeStyles,
                         ByRef<::System::DateTimeResult>)>(&::System::DateTimeParse::TryParseExactMultiple)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x3d77af4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "TryParseExactMultiple", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeStyles>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeResult>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.MatchWord
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::System::__DTString>, ::StringW)>(&::System::DateTimeParse::MatchWord)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x3d77d5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "MatchWord", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::__DTString>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.GetTimeZoneName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::System::__DTString>)>(&::System::DateTimeParse::GetTimeZoneName)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3d77f14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "GetTimeZoneName", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::__DTString>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.IsDigit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(char16_t)>(&::System::DateTimeParse::IsDigit)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3d77fc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "IsDigit", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.ParseFraction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::System::__DTString>, ByRef<double_t>)>(&::System::DateTimeParse::ParseFraction)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x3d77fd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "ParseFraction", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::__DTString>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<double_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.ParseTimeZone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::System::__DTString>, ByRef<::System::TimeSpan>)>(&::System::DateTimeParse::ParseTimeZone)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x3d780c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "ParseTimeZone", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::__DTString>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::TimeSpan>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.HandleTimeZone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::System::__DTString>, ByRef<::System::DateTimeResult>)>(&::System::DateTimeParse::HandleTimeZone)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x3d783d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "HandleTimeZone", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::__DTString>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeResult>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.Lex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::System::__DateTimeParse__DS, ByRef<::System::__DTString>, ByRef<::System::DateTimeToken>, ByRef<::System::DateTimeRawInfo>, ByRef<::System::DateTimeResult>,
                         ByRef<::System::Globalization::DateTimeFormatInfo*>, ::System::Globalization::DateTimeStyles)>(&::System::DateTimeParse::Lex)> {
  constexpr static std::size_t size = 0xda8;
  constexpr static std::size_t addrs = 0x3d78570;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "Lex", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__DateTimeParse__DS>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::__DTString>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeToken>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeRawInfo>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeResult>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Globalization::DateTimeFormatInfo*>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeStyles>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.GetJapaneseCalendarDefaultInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::Calendar* (*)()>(&::System::DateTimeParse::GetJapaneseCalendarDefaultInstance)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x3d79694;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "GetJapaneseCalendarDefaultInstance",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.GetTaiwanCalendarDefaultInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::Calendar* (*)()>(&::System::DateTimeParse::GetTaiwanCalendarDefaultInstance)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x3d7977c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "GetTaiwanCalendarDefaultInstance",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.VerifyValidPunctuation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::System::__DTString>)>(&::System::DateTimeParse::VerifyValidPunctuation)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x3d79864;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "VerifyValidPunctuation", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::__DTString>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.GetYearMonthDayOrder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::System::Globalization::DateTimeFormatInfo*, ByRef<int32_t>)>(
    &::System::DateTimeParse::GetYearMonthDayOrder)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x3d79a30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "GetYearMonthDayOrder", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.GetYearMonthOrder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::System::Globalization::DateTimeFormatInfo*, ByRef<int32_t>)>(
    &::System::DateTimeParse::GetYearMonthOrder)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x3d79cd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "GetYearMonthOrder", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.GetMonthDayOrder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::System::Globalization::DateTimeFormatInfo*, ByRef<int32_t>)>(
    &::System::DateTimeParse::GetMonthDayOrder)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x3d79e90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "GetMonthDayOrder", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.TryAdjustYear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::System::DateTimeResult>, int32_t, ByRef<int32_t>)>(&::System::DateTimeParse::TryAdjustYear)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x3d7a08c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "TryAdjustYear", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeResult>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.SetDateYMD
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::System::DateTimeResult>, int32_t, int32_t, int32_t)>(&::System::DateTimeParse::SetDateYMD)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3d7a150;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "SetDateYMD", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeResult>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.SetDateMDY
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::System::DateTimeResult>, int32_t, int32_t, int32_t)>(&::System::DateTimeParse::SetDateMDY)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3d7a1c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "SetDateMDY", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeResult>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.SetDateDMY
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::System::DateTimeResult>, int32_t, int32_t, int32_t)>(&::System::DateTimeParse::SetDateDMY)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3d7a23c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "SetDateDMY", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeResult>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.SetDateYDM
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::System::DateTimeResult>, int32_t, int32_t, int32_t)>(&::System::DateTimeParse::SetDateYDM)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3d7a2b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "SetDateYDM", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeResult>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.GetDefaultYear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::System::DateTimeResult>, ByRef<::System::Globalization::DateTimeStyles>)>(
    &::System::DateTimeParse::GetDefaultYear)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3d7a334;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "GetDefaultYear", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeResult>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Globalization::DateTimeStyles>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.GetDayOfNN
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(ByRef<::System::DateTimeResult>, ByRef<::System::Globalization::DateTimeStyles>, ByRef<::System::DateTimeRawInfo>, ::System::Globalization::DateTimeFormatInfo*)>(
        &::System::DateTimeParse::GetDayOfNN)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x3d7a4cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "GetDayOfNN", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeResult>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Globalization::DateTimeStyles>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeRawInfo>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeFormatInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.GetDayOfNNN
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(ByRef<::System::DateTimeResult>, ByRef<::System::DateTimeRawInfo>, ::System::Globalization::DateTimeFormatInfo*)>(&::System::DateTimeParse::GetDayOfNNN)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x3d7a640;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "GetDayOfNNN", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeResult>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeRawInfo>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeFormatInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.GetDayOfMN
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(ByRef<::System::DateTimeResult>, ByRef<::System::Globalization::DateTimeStyles>, ByRef<::System::DateTimeRawInfo>, ::System::Globalization::DateTimeFormatInfo*)>(
        &::System::DateTimeParse::GetDayOfMN)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x3d7a8f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "GetDayOfMN", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeResult>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Globalization::DateTimeStyles>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeRawInfo>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeFormatInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.GetHebrewDayOfNM
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(ByRef<::System::DateTimeResult>, ByRef<::System::DateTimeRawInfo>, ::System::Globalization::DateTimeFormatInfo*)>(&::System::DateTimeParse::GetHebrewDayOfNM)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x3d7ab18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "GetHebrewDayOfNM", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeResult>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeRawInfo>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeFormatInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.GetDayOfNM
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(ByRef<::System::DateTimeResult>, ByRef<::System::Globalization::DateTimeStyles>, ByRef<::System::DateTimeRawInfo>, ::System::Globalization::DateTimeFormatInfo*)>(
        &::System::DateTimeParse::GetDayOfNM)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x3d7ac74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "GetDayOfNM", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeResult>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Globalization::DateTimeStyles>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeRawInfo>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeFormatInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.GetDayOfMNN
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(ByRef<::System::DateTimeResult>, ByRef<::System::DateTimeRawInfo>, ::System::Globalization::DateTimeFormatInfo*)>(&::System::DateTimeParse::GetDayOfMNN)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x3d7ae98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "GetDayOfMNN", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeResult>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeRawInfo>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeFormatInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.GetDayOfYNN
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(ByRef<::System::DateTimeResult>, ByRef<::System::DateTimeRawInfo>, ::System::Globalization::DateTimeFormatInfo*)>(&::System::DateTimeParse::GetDayOfYNN)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x3d7b17c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "GetDayOfYNN", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeResult>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeRawInfo>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeFormatInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.GetDayOfNNY
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(ByRef<::System::DateTimeResult>, ByRef<::System::DateTimeRawInfo>, ::System::Globalization::DateTimeFormatInfo*)>(&::System::DateTimeParse::GetDayOfNNY)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x3d7b2b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "GetDayOfNNY", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeResult>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeRawInfo>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeFormatInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.GetDayOfYMN
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::System::DateTimeResult>, ByRef<::System::DateTimeRawInfo>)>(&::System::DateTimeParse::GetDayOfYMN)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x3d7b428;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "GetDayOfYMN", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeResult>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeRawInfo>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.GetDayOfYN
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::System::DateTimeResult>, ByRef<::System::DateTimeRawInfo>)>(&::System::DateTimeParse::GetDayOfYN)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x3d7b4e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "GetDayOfYN", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeResult>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeRawInfo>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.GetDayOfYM
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::System::DateTimeResult>, ByRef<::System::DateTimeRawInfo>)>(&::System::DateTimeParse::GetDayOfYM)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3d7b5a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "GetDayOfYM", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeResult>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeRawInfo>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.AdjustTimeMark
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Globalization::DateTimeFormatInfo*, ByRef<::System::DateTimeRawInfo>)>(
    &::System::DateTimeParse::AdjustTimeMark)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3d7b63c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "AdjustTimeMark", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeRawInfo>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.AdjustHour
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<int32_t>, ::System::__DateTimeParse__TM)>(&::System::DateTimeParse::AdjustHour)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x3d7b6fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "AdjustHour", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__DateTimeParse__TM>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.GetTimeOfN
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::System::DateTimeResult>, ByRef<::System::DateTimeRawInfo>)>(&::System::DateTimeParse::GetTimeOfN)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3d7b744;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "GetTimeOfN", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeResult>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeRawInfo>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.GetTimeOfNN
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::System::DateTimeResult>, ByRef<::System::DateTimeRawInfo>)>(&::System::DateTimeParse::GetTimeOfNN)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3d7b7a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "GetTimeOfNN", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeResult>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeRawInfo>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.GetTimeOfNNN
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::System::DateTimeResult>, ByRef<::System::DateTimeRawInfo>)>(
    &::System::DateTimeParse::GetTimeOfNNN)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3d7b810;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "GetTimeOfNNN", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeResult>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeRawInfo>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.GetDateOfDSN
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::System::DateTimeResult>, ByRef<::System::DateTimeRawInfo>)>(
    &::System::DateTimeParse::GetDateOfDSN)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x3d7b894;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "GetDateOfDSN", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeResult>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeRawInfo>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.GetDateOfNDS
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::System::DateTimeResult>, ByRef<::System::DateTimeRawInfo>)>(
    &::System::DateTimeParse::GetDateOfNDS)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x3d7b8e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "GetDateOfNDS", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeResult>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeRawInfo>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.GetDateOfNNDS
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(ByRef<::System::DateTimeResult>, ByRef<::System::DateTimeRawInfo>, ::System::Globalization::DateTimeFormatInfo*)>(&::System::DateTimeParse::GetDateOfNNDS)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x3d7b99c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "GetDateOfNNDS", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeResult>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeRawInfo>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeFormatInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.ProcessDateTimeSuffix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::System::DateTimeResult>, ByRef<::System::DateTimeRawInfo>, ByRef<::System::DateTimeToken>)>(
    &::System::DateTimeParse::ProcessDateTimeSuffix)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x3d7bbc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "ProcessDateTimeSuffix", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeResult>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeRawInfo>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeToken>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.ProcessHebrewTerminalState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::System::__DateTimeParse__DS, ByRef<::System::__DTString>, ByRef<::System::DateTimeResult>, ByRef<::System::Globalization::DateTimeStyles>, ByRef<::System::DateTimeRawInfo>,
                         ::System::Globalization::DateTimeFormatInfo*)>(&::System::DateTimeParse::ProcessHebrewTerminalState)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x3d7bcc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "ProcessHebrewTerminalState", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__DateTimeParse__DS>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::__DTString>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeResult>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Globalization::DateTimeStyles>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeRawInfo>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeFormatInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.ProcessTerminalState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::System::__DateTimeParse__DS, ByRef<::System::__DTString>, ByRef<::System::DateTimeResult>, ByRef<::System::Globalization::DateTimeStyles>, ByRef<::System::DateTimeRawInfo>,
                         ::System::Globalization::DateTimeFormatInfo*)>(&::System::DateTimeParse::ProcessTerminalState)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x3d79318;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "ProcessTerminalState", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__DateTimeParse__DS>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::__DTString>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeResult>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Globalization::DateTimeStyles>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeRawInfo>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeFormatInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.Parse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::DateTime (*)(::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::DateTimeFormatInfo*, ::System::Globalization::DateTimeStyles)>(&::System::DateTimeParse::Parse)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x3d6c408;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "Parse", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeStyles>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.Parse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (*)(
    ::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::DateTimeFormatInfo*, ::System::Globalization::DateTimeStyles, ByRef<::System::TimeSpan>)>(&::System::DateTimeParse::Parse)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x3d706d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "Parse", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeStyles>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::TimeSpan>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.TryParse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::DateTimeFormatInfo*,
                                                                                           ::System::Globalization::DateTimeStyles, ByRef<::System::DateTime>)>(&::System::DateTimeParse::TryParse)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x3d6d494;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "TryParse", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeStyles>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTime>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.TryParse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::DateTimeFormatInfo*,
                                                                                           ::System::Globalization::DateTimeStyles, ByRef<::System::DateTime>, ByRef<::System::TimeSpan>)>(
    &::System::DateTimeParse::TryParse)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x3d71684;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "TryParse", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeStyles>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTime>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::TimeSpan>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.TryParse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(
    ::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::DateTimeFormatInfo*, ::System::Globalization::DateTimeStyles, ByRef<::System::DateTimeResult>)>(&::System::DateTimeParse::TryParse)> {
  constexpr static std::size_t size = 0x7a0;
  constexpr static std::size_t addrs = 0x3d7c03c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "TryParse", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeStyles>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeResult>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.DetermineTimeZoneAdjustments
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(ByRef<::System::__DTString>, ByRef<::System::DateTimeResult>, ::System::Globalization::DateTimeStyles, bool)>(&::System::DateTimeParse::DetermineTimeZoneAdjustments)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x3d7d064;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "DetermineTimeZoneAdjustments", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::__DTString>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeResult>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.DateTimeOffsetTimeZonePostProcessing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::System::__DTString>, ByRef<::System::DateTimeResult>, ::System::Globalization::DateTimeStyles)>(
    &::System::DateTimeParse::DateTimeOffsetTimeZonePostProcessing)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x3d7d2b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "DateTimeOffsetTimeZonePostProcessing", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::__DTString>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeResult>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeStyles>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.AdjustTimeZoneToUniversal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::System::DateTimeResult>)>(&::System::DateTimeParse::AdjustTimeZoneToUniversal)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x3d7d4e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "AdjustTimeZoneToUniversal", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeResult>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.AdjustTimeZoneToLocal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::System::DateTimeResult>, bool)>(&::System::DateTimeParse::AdjustTimeZoneToLocal)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x3d7d610;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "AdjustTimeZoneToLocal", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeResult>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.ParseISO8601
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::System::DateTimeRawInfo>, ByRef<::System::__DTString>, ::System::Globalization::DateTimeStyles,
                                                                                           ByRef<::System::DateTimeResult>)>(&::System::DateTimeParse::ParseISO8601)> {
  constexpr static std::size_t size = 0x60c;
  constexpr static std::size_t addrs = 0x3d7c7dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "ParseISO8601", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeRawInfo>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::__DTString>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeStyles>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeResult>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.MatchHebrewDigits
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::System::__DTString>, int32_t, ByRef<int32_t>)>(&::System::DateTimeParse::MatchHebrewDigits)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x3d7d930;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "MatchHebrewDigits", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::__DTString>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.ParseDigits
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::System::__DTString>, int32_t, ByRef<int32_t>)>(&::System::DateTimeParse::ParseDigits)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x3d7d8a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "ParseDigits", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::__DTString>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.ParseDigits
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::System::__DTString>, int32_t, int32_t, ByRef<int32_t>)>(&::System::DateTimeParse::ParseDigits)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x3d7da40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "ParseDigits", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::__DTString>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.ParseFractionExact
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::System::__DTString>, int32_t, ByRef<double_t>)>(&::System::DateTimeParse::ParseFractionExact)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x3d7dbe4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "ParseFractionExact", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::__DTString>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<double_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.ParseSign
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::System::__DTString>, ByRef<bool>)>(&::System::DateTimeParse::ParseSign)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x3d7de4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "ParseSign", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::__DTString>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.ParseTimeZoneOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::System::__DTString>, int32_t, ByRef<::System::TimeSpan>)>(
    &::System::DateTimeParse::ParseTimeZoneOffset)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x3d7df04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "ParseTimeZoneOffset", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::__DTString>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::TimeSpan>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.MatchAbbreviatedMonthName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::System::__DTString>, ::System::Globalization::DateTimeFormatInfo*, ByRef<int32_t>)>(
    &::System::DateTimeParse::MatchAbbreviatedMonthName)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x3d7e0cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "MatchAbbreviatedMonthName", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::__DTString>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.MatchMonthName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::System::__DTString>, ::System::Globalization::DateTimeFormatInfo*, ByRef<int32_t>)>(
    &::System::DateTimeParse::MatchMonthName)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x3d7e2a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "MatchMonthName", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::__DTString>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.MatchAbbreviatedDayName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::System::__DTString>, ::System::Globalization::DateTimeFormatInfo*, ByRef<int32_t>)>(
    &::System::DateTimeParse::MatchAbbreviatedDayName)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x3d7e4d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "MatchAbbreviatedDayName", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::__DTString>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.MatchDayName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::System::__DTString>, ::System::Globalization::DateTimeFormatInfo*, ByRef<int32_t>)>(
    &::System::DateTimeParse::MatchDayName)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x3d7e63c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "MatchDayName", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::__DTString>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.MatchEraName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::System::__DTString>, ::System::Globalization::DateTimeFormatInfo*, ByRef<int32_t>)>(
    &::System::DateTimeParse::MatchEraName)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x3d7e7a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "MatchEraName", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::__DTString>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.MatchTimeMark
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(ByRef<::System::__DTString>, ::System::Globalization::DateTimeFormatInfo*, ByRef<::System::__DateTimeParse__TM>)>(&::System::DateTimeParse::MatchTimeMark)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x3d7e93c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "MatchTimeMark", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::__DTString>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::__DateTimeParse__TM>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.MatchAbbreviatedTimeMark
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(ByRef<::System::__DTString>, ::System::Globalization::DateTimeFormatInfo*, ByRef<::System::__DateTimeParse__TM>)>(&::System::DateTimeParse::MatchAbbreviatedTimeMark)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x3d7ead4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "MatchAbbreviatedTimeMark", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::__DTString>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::__DateTimeParse__TM>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.CheckNewValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<int32_t>, int32_t, char16_t, ByRef<::System::DateTimeResult>)>(
    &::System::DateTimeParse::CheckNewValue)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x3d7ec24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "CheckNewValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeResult>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.GetDateTimeNow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (*)(ByRef<::System::DateTimeResult>, ByRef<::System::Globalization::DateTimeStyles>)>(
    &::System::DateTimeParse::GetDateTimeNow)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x3d7a3d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "GetDateTimeNow", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeResult>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Globalization::DateTimeStyles>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.CheckDefaultDateTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(ByRef<::System::DateTimeResult>, ByRef<::System::Globalization::Calendar*>, ::System::Globalization::DateTimeStyles)>(&::System::DateTimeParse::CheckDefaultDateTime)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x3d7cde8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "CheckDefaultDateTime", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeResult>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Globalization::Calendar*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeStyles>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.ExpandPredefinedFormat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (*)(::System::ReadOnlySpan_1<char16_t>, ByRef<::System::Globalization::DateTimeFormatInfo*>, ByRef<::System::ParsingInfo>, ByRef<::System::DateTimeResult>)>(
        &::System::DateTimeParse::ExpandPredefinedFormat)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x3d7ece0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "ExpandPredefinedFormat", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Globalization::DateTimeFormatInfo*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::ParsingInfo>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeResult>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.ParseJapaneseEraStart
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::System::__DTString>, ::System::Globalization::DateTimeFormatInfo*)>(
    &::System::DateTimeParse::ParseJapaneseEraStart)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x3d7f048;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "ParseJapaneseEraStart", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::__DTString>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeFormatInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.ParseByFormat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(ByRef<::System::__DTString>, ByRef<::System::__DTString>, ByRef<::System::ParsingInfo>, ::System::Globalization::DateTimeFormatInfo*, ByRef<::System::DateTimeResult>)>(
        &::System::DateTimeParse::ParseByFormat)> {
  constexpr static std::size_t size = 0x1140;
  constexpr static std::size_t addrs = 0x3d7f150;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "ParseByFormat", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::__DTString>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::__DTString>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::ParsingInfo>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeResult>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.TryParseQuoteString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, int32_t, ::System::Text::StringBuilder*, ByRef<int32_t>)>(
    &::System::DateTimeParse::TryParseQuoteString)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x3d80290;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "TryParseQuoteString", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.DoStrictParse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(
    ::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::DateTimeStyles, ::System::Globalization::DateTimeFormatInfo*, ByRef<::System::DateTimeResult>)>(
    &::System::DateTimeParse::DoStrictParse)> {
  constexpr static std::size_t size = 0x83c;
  constexpr static std::size_t addrs = 0x3d772b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "DoStrictParse", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeStyles>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeResult>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.GetDateTimeParseException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (*)(ByRef<::System::DateTimeResult>)>(&::System::DateTimeParse::GetDateTimeParseException)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x3d77104;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "GetDateTimeParseException", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeResult>>::get() })));
    return ___internal_method;
  }
};
inline void System::DateTimeParse::setStaticF_m_hebrewNumberParser(::System::__DateTimeParse__MatchNumberDelegate* value) {
  ::cordl_internals::setStaticField<::System::__DateTimeParse__MatchNumberDelegate*, "m_hebrewNumberParser", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get>(
      std::forward<::System::__DateTimeParse__MatchNumberDelegate*>(value));
}
inline ::System::__DateTimeParse__MatchNumberDelegate* System::DateTimeParse::getStaticF_m_hebrewNumberParser() {
  return ::cordl_internals::getStaticField<::System::__DateTimeParse__MatchNumberDelegate*, "m_hebrewNumberParser",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get>();
}
inline void System::DateTimeParse::setStaticF_dateParsingStates(
    ::ArrayW<::ArrayW<::System::__DateTimeParse__DS, ::Array<::System::__DateTimeParse__DS>*>, ::Array<::ArrayW<::System::__DateTimeParse__DS, ::Array<::System::__DateTimeParse__DS>*>>*> value) {
  ::cordl_internals::setStaticField<
      ::ArrayW<::ArrayW<::System::__DateTimeParse__DS, ::Array<::System::__DateTimeParse__DS>*>, ::Array<::ArrayW<::System::__DateTimeParse__DS, ::Array<::System::__DateTimeParse__DS>*>>*>,
      "dateParsingStates", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get>(
      std::forward<
          ::ArrayW<::ArrayW<::System::__DateTimeParse__DS, ::Array<::System::__DateTimeParse__DS>*>, ::Array<::ArrayW<::System::__DateTimeParse__DS, ::Array<::System::__DateTimeParse__DS>*>>*>>(
          value));
}
inline ::ArrayW<::ArrayW<::System::__DateTimeParse__DS, ::Array<::System::__DateTimeParse__DS>*>, ::Array<::ArrayW<::System::__DateTimeParse__DS, ::Array<::System::__DateTimeParse__DS>*>>*>
System::DateTimeParse::getStaticF_dateParsingStates() {
  return ::cordl_internals::getStaticField<
      ::ArrayW<::ArrayW<::System::__DateTimeParse__DS, ::Array<::System::__DateTimeParse__DS>*>, ::Array<::ArrayW<::System::__DateTimeParse__DS, ::Array<::System::__DateTimeParse__DS>*>>*>,
      "dateParsingStates", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get>();
}
inline ::System::DateTime System::DateTimeParse::ParseExact(::System::ReadOnlySpan_1<char16_t> s, ::System::ReadOnlySpan_1<char16_t> format, ::System::Globalization::DateTimeFormatInfo* dtfi,
                                                            ::System::Globalization::DateTimeStyles style) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "ParseExact", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeStyles>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(nullptr, ___internal_method, s, format, dtfi, style);
}
inline ::System::DateTime System::DateTimeParse::ParseExact(::System::ReadOnlySpan_1<char16_t> s, ::System::ReadOnlySpan_1<char16_t> format, ::System::Globalization::DateTimeFormatInfo* dtfi,
                                                            ::System::Globalization::DateTimeStyles style, ByRef<::System::TimeSpan> offset) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "ParseExact", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeStyles>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::TimeSpan>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(nullptr, ___internal_method, s, format, dtfi, style, offset);
}
inline bool System::DateTimeParse::TryParseExact(::System::ReadOnlySpan_1<char16_t> s, ::System::ReadOnlySpan_1<char16_t> format, ::System::Globalization::DateTimeFormatInfo* dtfi,
                                                 ::System::Globalization::DateTimeStyles style, ByRef<::System::DateTime> result) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "TryParseExact", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeStyles>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTime>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, s, format, dtfi, style, result);
}
inline bool System::DateTimeParse::TryParseExact(::System::ReadOnlySpan_1<char16_t> s, ::System::ReadOnlySpan_1<char16_t> format, ::System::Globalization::DateTimeFormatInfo* dtfi,
                                                 ::System::Globalization::DateTimeStyles style, ByRef<::System::DateTime> result, ByRef<::System::TimeSpan> offset) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "TryParseExact", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeStyles>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTime>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::TimeSpan>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, s, format, dtfi, style, result, offset);
}
inline bool System::DateTimeParse::TryParseExact(::System::ReadOnlySpan_1<char16_t> s, ::System::ReadOnlySpan_1<char16_t> format, ::System::Globalization::DateTimeFormatInfo* dtfi,
                                                 ::System::Globalization::DateTimeStyles style, ByRef<::System::DateTimeResult> result) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "TryParseExact", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeStyles>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeResult>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, s, format, dtfi, style, result);
}
inline ::System::DateTime System::DateTimeParse::ParseExactMultiple(::System::ReadOnlySpan_1<char16_t> s, ::ArrayW<::StringW, ::Array<::StringW>*> formats,
                                                                    ::System::Globalization::DateTimeFormatInfo* dtfi, ::System::Globalization::DateTimeStyles style) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "ParseExactMultiple", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeStyles>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(nullptr, ___internal_method, s, formats, dtfi, style);
}
inline bool System::DateTimeParse::TryParseExactMultiple(::System::ReadOnlySpan_1<char16_t> s, ::ArrayW<::StringW, ::Array<::StringW>*> formats, ::System::Globalization::DateTimeFormatInfo* dtfi,
                                                         ::System::Globalization::DateTimeStyles style, ByRef<::System::DateTime> result, ByRef<::System::TimeSpan> offset) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "TryParseExactMultiple", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeStyles>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTime>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::TimeSpan>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, s, formats, dtfi, style, result, offset);
}
inline bool System::DateTimeParse::TryParseExactMultiple(::System::ReadOnlySpan_1<char16_t> s, ::ArrayW<::StringW, ::Array<::StringW>*> formats, ::System::Globalization::DateTimeFormatInfo* dtfi,
                                                         ::System::Globalization::DateTimeStyles style, ByRef<::System::DateTimeResult> result) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "TryParseExactMultiple", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeStyles>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeResult>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, s, formats, dtfi, style, result);
}
inline bool System::DateTimeParse::MatchWord(ByRef<::System::__DTString> str, ::StringW target) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "MatchWord", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::__DTString>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, str, target);
}
inline bool System::DateTimeParse::GetTimeZoneName(ByRef<::System::__DTString> str) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "GetTimeZoneName", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::__DTString>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, str);
}
inline bool System::DateTimeParse::IsDigit(char16_t ch) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "IsDigit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ch);
}
inline bool System::DateTimeParse::ParseFraction(ByRef<::System::__DTString> str, ByRef<double_t> result) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "ParseFraction", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::__DTString>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<double_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, str, result);
}
inline bool System::DateTimeParse::ParseTimeZone(ByRef<::System::__DTString> str, ByRef<::System::TimeSpan> result) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "ParseTimeZone", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::__DTString>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::TimeSpan>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, str, result);
}
inline bool System::DateTimeParse::HandleTimeZone(ByRef<::System::__DTString> str, ByRef<::System::DateTimeResult> result) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "HandleTimeZone", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::__DTString>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeResult>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, str, result);
}
inline bool System::DateTimeParse::Lex(::System::__DateTimeParse__DS dps, ByRef<::System::__DTString> str, ByRef<::System::DateTimeToken> dtok, ByRef<::System::DateTimeRawInfo> raw,
                                       ByRef<::System::DateTimeResult> result, ByRef<::System::Globalization::DateTimeFormatInfo*> dtfi, ::System::Globalization::DateTimeStyles styles) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "Lex", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__DateTimeParse__DS>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::__DTString>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeToken>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeRawInfo>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeResult>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Globalization::DateTimeFormatInfo*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeStyles>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, dps, str, dtok, raw, result, dtfi, styles);
}
inline ::System::Globalization::Calendar* System::DateTimeParse::GetJapaneseCalendarDefaultInstance() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "GetJapaneseCalendarDefaultInstance",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::Calendar*, false>(nullptr, ___internal_method);
}
inline ::System::Globalization::Calendar* System::DateTimeParse::GetTaiwanCalendarDefaultInstance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(),
                                                                             "GetTaiwanCalendarDefaultInstance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::Calendar*, false>(nullptr, ___internal_method);
}
inline bool System::DateTimeParse::VerifyValidPunctuation(ByRef<::System::__DTString> str) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "VerifyValidPunctuation", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::__DTString>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, str);
}
inline bool System::DateTimeParse::GetYearMonthDayOrder(::StringW datePattern, ::System::Globalization::DateTimeFormatInfo* dtfi, ByRef<int32_t> order) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "GetYearMonthDayOrder", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, datePattern, dtfi, order);
}
inline bool System::DateTimeParse::GetYearMonthOrder(::StringW pattern, ::System::Globalization::DateTimeFormatInfo* dtfi, ByRef<int32_t> order) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "GetYearMonthOrder", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, pattern, dtfi, order);
}
inline bool System::DateTimeParse::GetMonthDayOrder(::StringW pattern, ::System::Globalization::DateTimeFormatInfo* dtfi, ByRef<int32_t> order) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "GetMonthDayOrder", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, pattern, dtfi, order);
}
inline bool System::DateTimeParse::TryAdjustYear(ByRef<::System::DateTimeResult> result, int32_t year, ByRef<int32_t> adjustedYear) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "TryAdjustYear", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeResult>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, result, year, adjustedYear);
}
inline bool System::DateTimeParse::SetDateYMD(ByRef<::System::DateTimeResult> result, int32_t year, int32_t month, int32_t day) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "SetDateYMD", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeResult>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, result, year, month, day);
}
inline bool System::DateTimeParse::SetDateMDY(ByRef<::System::DateTimeResult> result, int32_t month, int32_t day, int32_t year) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "SetDateMDY", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeResult>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, result, month, day, year);
}
inline bool System::DateTimeParse::SetDateDMY(ByRef<::System::DateTimeResult> result, int32_t day, int32_t month, int32_t year) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "SetDateDMY", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeResult>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, result, day, month, year);
}
inline bool System::DateTimeParse::SetDateYDM(ByRef<::System::DateTimeResult> result, int32_t year, int32_t day, int32_t month) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "SetDateYDM", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeResult>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, result, year, day, month);
}
inline void System::DateTimeParse::GetDefaultYear(ByRef<::System::DateTimeResult> result, ByRef<::System::Globalization::DateTimeStyles> styles) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "GetDefaultYear", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeResult>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Globalization::DateTimeStyles>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, result, styles);
}
inline bool System::DateTimeParse::GetDayOfNN(ByRef<::System::DateTimeResult> result, ByRef<::System::Globalization::DateTimeStyles> styles, ByRef<::System::DateTimeRawInfo> raw,
                                              ::System::Globalization::DateTimeFormatInfo* dtfi) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "GetDayOfNN", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeResult>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Globalization::DateTimeStyles>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeRawInfo>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeFormatInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, result, styles, raw, dtfi);
}
inline bool System::DateTimeParse::GetDayOfNNN(ByRef<::System::DateTimeResult> result, ByRef<::System::DateTimeRawInfo> raw, ::System::Globalization::DateTimeFormatInfo* dtfi) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "GetDayOfNNN", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeResult>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeRawInfo>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeFormatInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, result, raw, dtfi);
}
inline bool System::DateTimeParse::GetDayOfMN(ByRef<::System::DateTimeResult> result, ByRef<::System::Globalization::DateTimeStyles> styles, ByRef<::System::DateTimeRawInfo> raw,
                                              ::System::Globalization::DateTimeFormatInfo* dtfi) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "GetDayOfMN", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeResult>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Globalization::DateTimeStyles>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeRawInfo>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeFormatInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, result, styles, raw, dtfi);
}
inline bool System::DateTimeParse::GetHebrewDayOfNM(ByRef<::System::DateTimeResult> result, ByRef<::System::DateTimeRawInfo> raw, ::System::Globalization::DateTimeFormatInfo* dtfi) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "GetHebrewDayOfNM", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeResult>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeRawInfo>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeFormatInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, result, raw, dtfi);
}
inline bool System::DateTimeParse::GetDayOfNM(ByRef<::System::DateTimeResult> result, ByRef<::System::Globalization::DateTimeStyles> styles, ByRef<::System::DateTimeRawInfo> raw,
                                              ::System::Globalization::DateTimeFormatInfo* dtfi) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "GetDayOfNM", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeResult>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Globalization::DateTimeStyles>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeRawInfo>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeFormatInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, result, styles, raw, dtfi);
}
inline bool System::DateTimeParse::GetDayOfMNN(ByRef<::System::DateTimeResult> result, ByRef<::System::DateTimeRawInfo> raw, ::System::Globalization::DateTimeFormatInfo* dtfi) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "GetDayOfMNN", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeResult>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeRawInfo>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeFormatInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, result, raw, dtfi);
}
inline bool System::DateTimeParse::GetDayOfYNN(ByRef<::System::DateTimeResult> result, ByRef<::System::DateTimeRawInfo> raw, ::System::Globalization::DateTimeFormatInfo* dtfi) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "GetDayOfYNN", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeResult>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeRawInfo>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeFormatInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, result, raw, dtfi);
}
inline bool System::DateTimeParse::GetDayOfNNY(ByRef<::System::DateTimeResult> result, ByRef<::System::DateTimeRawInfo> raw, ::System::Globalization::DateTimeFormatInfo* dtfi) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "GetDayOfNNY", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeResult>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeRawInfo>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeFormatInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, result, raw, dtfi);
}
inline bool System::DateTimeParse::GetDayOfYMN(ByRef<::System::DateTimeResult> result, ByRef<::System::DateTimeRawInfo> raw) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "GetDayOfYMN", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeResult>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeRawInfo>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, result, raw);
}
inline bool System::DateTimeParse::GetDayOfYN(ByRef<::System::DateTimeResult> result, ByRef<::System::DateTimeRawInfo> raw) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "GetDayOfYN", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeResult>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeRawInfo>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, result, raw);
}
inline bool System::DateTimeParse::GetDayOfYM(ByRef<::System::DateTimeResult> result, ByRef<::System::DateTimeRawInfo> raw) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "GetDayOfYM", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeResult>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeRawInfo>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, result, raw);
}
inline void System::DateTimeParse::AdjustTimeMark(::System::Globalization::DateTimeFormatInfo* dtfi, ByRef<::System::DateTimeRawInfo> raw) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "AdjustTimeMark", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeRawInfo>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, dtfi, raw);
}
inline bool System::DateTimeParse::AdjustHour(ByRef<int32_t> hour, ::System::__DateTimeParse__TM timeMark) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "AdjustHour", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__DateTimeParse__TM>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, hour, timeMark);
}
inline bool System::DateTimeParse::GetTimeOfN(ByRef<::System::DateTimeResult> result, ByRef<::System::DateTimeRawInfo> raw) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "GetTimeOfN", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeResult>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeRawInfo>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, result, raw);
}
inline bool System::DateTimeParse::GetTimeOfNN(ByRef<::System::DateTimeResult> result, ByRef<::System::DateTimeRawInfo> raw) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "GetTimeOfNN", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeResult>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeRawInfo>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, result, raw);
}
inline bool System::DateTimeParse::GetTimeOfNNN(ByRef<::System::DateTimeResult> result, ByRef<::System::DateTimeRawInfo> raw) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "GetTimeOfNNN", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeResult>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeRawInfo>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, result, raw);
}
inline bool System::DateTimeParse::GetDateOfDSN(ByRef<::System::DateTimeResult> result, ByRef<::System::DateTimeRawInfo> raw) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "GetDateOfDSN", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeResult>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeRawInfo>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, result, raw);
}
inline bool System::DateTimeParse::GetDateOfNDS(ByRef<::System::DateTimeResult> result, ByRef<::System::DateTimeRawInfo> raw) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "GetDateOfNDS", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeResult>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeRawInfo>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, result, raw);
}
inline bool System::DateTimeParse::GetDateOfNNDS(ByRef<::System::DateTimeResult> result, ByRef<::System::DateTimeRawInfo> raw, ::System::Globalization::DateTimeFormatInfo* dtfi) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "GetDateOfNNDS", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeResult>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeRawInfo>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeFormatInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, result, raw, dtfi);
}
inline bool System::DateTimeParse::ProcessDateTimeSuffix(ByRef<::System::DateTimeResult> result, ByRef<::System::DateTimeRawInfo> raw, ByRef<::System::DateTimeToken> dtok) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "ProcessDateTimeSuffix", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeResult>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeRawInfo>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeToken>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, result, raw, dtok);
}
inline bool System::DateTimeParse::ProcessHebrewTerminalState(::System::__DateTimeParse__DS dps, ByRef<::System::__DTString> str, ByRef<::System::DateTimeResult> result,
                                                              ByRef<::System::Globalization::DateTimeStyles> styles, ByRef<::System::DateTimeRawInfo> raw,
                                                              ::System::Globalization::DateTimeFormatInfo* dtfi) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "ProcessHebrewTerminalState", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__DateTimeParse__DS>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::__DTString>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeResult>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Globalization::DateTimeStyles>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeRawInfo>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeFormatInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, dps, str, result, styles, raw, dtfi);
}
inline bool System::DateTimeParse::ProcessTerminalState(::System::__DateTimeParse__DS dps, ByRef<::System::__DTString> str, ByRef<::System::DateTimeResult> result,
                                                        ByRef<::System::Globalization::DateTimeStyles> styles, ByRef<::System::DateTimeRawInfo> raw,
                                                        ::System::Globalization::DateTimeFormatInfo* dtfi) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "ProcessTerminalState", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__DateTimeParse__DS>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::__DTString>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeResult>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Globalization::DateTimeStyles>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeRawInfo>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeFormatInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, dps, str, result, styles, raw, dtfi);
}
inline ::System::DateTime System::DateTimeParse::Parse(::System::ReadOnlySpan_1<char16_t> s, ::System::Globalization::DateTimeFormatInfo* dtfi, ::System::Globalization::DateTimeStyles styles) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "Parse", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeStyles>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(nullptr, ___internal_method, s, dtfi, styles);
}
inline ::System::DateTime System::DateTimeParse::Parse(::System::ReadOnlySpan_1<char16_t> s, ::System::Globalization::DateTimeFormatInfo* dtfi, ::System::Globalization::DateTimeStyles styles,
                                                       ByRef<::System::TimeSpan> offset) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "Parse", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeStyles>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::TimeSpan>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(nullptr, ___internal_method, s, dtfi, styles, offset);
}
inline bool System::DateTimeParse::TryParse(::System::ReadOnlySpan_1<char16_t> s, ::System::Globalization::DateTimeFormatInfo* dtfi, ::System::Globalization::DateTimeStyles styles,
                                            ByRef<::System::DateTime> result) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "TryParse", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeStyles>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTime>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, s, dtfi, styles, result);
}
inline bool System::DateTimeParse::TryParse(::System::ReadOnlySpan_1<char16_t> s, ::System::Globalization::DateTimeFormatInfo* dtfi, ::System::Globalization::DateTimeStyles styles,
                                            ByRef<::System::DateTime> result, ByRef<::System::TimeSpan> offset) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "TryParse", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeStyles>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTime>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::TimeSpan>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, s, dtfi, styles, result, offset);
}
inline bool System::DateTimeParse::TryParse(::System::ReadOnlySpan_1<char16_t> s, ::System::Globalization::DateTimeFormatInfo* dtfi, ::System::Globalization::DateTimeStyles styles,
                                            ByRef<::System::DateTimeResult> result) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "TryParse", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeStyles>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeResult>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, s, dtfi, styles, result);
}
inline bool System::DateTimeParse::DetermineTimeZoneAdjustments(ByRef<::System::__DTString> str, ByRef<::System::DateTimeResult> result, ::System::Globalization::DateTimeStyles styles,
                                                                bool bTimeOnly) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "DetermineTimeZoneAdjustments", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::__DTString>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeResult>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, str, result, styles, bTimeOnly);
}
inline bool System::DateTimeParse::DateTimeOffsetTimeZonePostProcessing(ByRef<::System::__DTString> str, ByRef<::System::DateTimeResult> result, ::System::Globalization::DateTimeStyles styles) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "DateTimeOffsetTimeZonePostProcessing", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::__DTString>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeResult>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeStyles>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, str, result, styles);
}
inline bool System::DateTimeParse::AdjustTimeZoneToUniversal(ByRef<::System::DateTimeResult> result) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "AdjustTimeZoneToUniversal", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeResult>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, result);
}
inline bool System::DateTimeParse::AdjustTimeZoneToLocal(ByRef<::System::DateTimeResult> result, bool bTimeOnly) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "AdjustTimeZoneToLocal", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeResult>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, result, bTimeOnly);
}
inline bool System::DateTimeParse::ParseISO8601(ByRef<::System::DateTimeRawInfo> raw, ByRef<::System::__DTString> str, ::System::Globalization::DateTimeStyles styles,
                                                ByRef<::System::DateTimeResult> result) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "ParseISO8601", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeRawInfo>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::__DTString>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeStyles>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeResult>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, raw, str, styles, result);
}
inline bool System::DateTimeParse::MatchHebrewDigits(ByRef<::System::__DTString> str, int32_t digitLen, ByRef<int32_t> number) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "MatchHebrewDigits", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::__DTString>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, str, digitLen, number);
}
inline bool System::DateTimeParse::ParseDigits(ByRef<::System::__DTString> str, int32_t digitLen, ByRef<int32_t> result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "ParseDigits", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::__DTString>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, str, digitLen, result);
}
inline bool System::DateTimeParse::ParseDigits(ByRef<::System::__DTString> str, int32_t minDigitLen, int32_t maxDigitLen, ByRef<int32_t> result) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "ParseDigits", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::__DTString>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, str, minDigitLen, maxDigitLen, result);
}
inline bool System::DateTimeParse::ParseFractionExact(ByRef<::System::__DTString> str, int32_t maxDigitLen, ByRef<double_t> result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "ParseFractionExact", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::__DTString>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<double_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, str, maxDigitLen, result);
}
inline bool System::DateTimeParse::ParseSign(ByRef<::System::__DTString> str, ByRef<bool> result) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "ParseSign", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::__DTString>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, str, result);
}
inline bool System::DateTimeParse::ParseTimeZoneOffset(ByRef<::System::__DTString> str, int32_t len, ByRef<::System::TimeSpan> result) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "ParseTimeZoneOffset", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::__DTString>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::TimeSpan>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, str, len, result);
}
inline bool System::DateTimeParse::MatchAbbreviatedMonthName(ByRef<::System::__DTString> str, ::System::Globalization::DateTimeFormatInfo* dtfi, ByRef<int32_t> result) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "MatchAbbreviatedMonthName", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::__DTString>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, str, dtfi, result);
}
inline bool System::DateTimeParse::MatchMonthName(ByRef<::System::__DTString> str, ::System::Globalization::DateTimeFormatInfo* dtfi, ByRef<int32_t> result) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "MatchMonthName", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::__DTString>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, str, dtfi, result);
}
inline bool System::DateTimeParse::MatchAbbreviatedDayName(ByRef<::System::__DTString> str, ::System::Globalization::DateTimeFormatInfo* dtfi, ByRef<int32_t> result) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "MatchAbbreviatedDayName", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::__DTString>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, str, dtfi, result);
}
inline bool System::DateTimeParse::MatchDayName(ByRef<::System::__DTString> str, ::System::Globalization::DateTimeFormatInfo* dtfi, ByRef<int32_t> result) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "MatchDayName", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::__DTString>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, str, dtfi, result);
}
inline bool System::DateTimeParse::MatchEraName(ByRef<::System::__DTString> str, ::System::Globalization::DateTimeFormatInfo* dtfi, ByRef<int32_t> result) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "MatchEraName", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::__DTString>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, str, dtfi, result);
}
inline bool System::DateTimeParse::MatchTimeMark(ByRef<::System::__DTString> str, ::System::Globalization::DateTimeFormatInfo* dtfi, ByRef<::System::__DateTimeParse__TM> result) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "MatchTimeMark", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::__DTString>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::__DateTimeParse__TM>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, str, dtfi, result);
}
inline bool System::DateTimeParse::MatchAbbreviatedTimeMark(ByRef<::System::__DTString> str, ::System::Globalization::DateTimeFormatInfo* dtfi, ByRef<::System::__DateTimeParse__TM> result) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "MatchAbbreviatedTimeMark", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::__DTString>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::__DateTimeParse__TM>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, str, dtfi, result);
}
inline bool System::DateTimeParse::CheckNewValue(ByRef<int32_t> currentValue, int32_t newValue, char16_t patternChar, ByRef<::System::DateTimeResult> result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "CheckNewValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeResult>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, currentValue, newValue, patternChar, result);
}
inline ::System::DateTime System::DateTimeParse::GetDateTimeNow(ByRef<::System::DateTimeResult> result, ByRef<::System::Globalization::DateTimeStyles> styles) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "GetDateTimeNow", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeResult>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Globalization::DateTimeStyles>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(nullptr, ___internal_method, result, styles);
}
inline bool System::DateTimeParse::CheckDefaultDateTime(ByRef<::System::DateTimeResult> result, ByRef<::System::Globalization::Calendar*> cal, ::System::Globalization::DateTimeStyles styles) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "CheckDefaultDateTime", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeResult>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Globalization::Calendar*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeStyles>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, result, cal, styles);
}
inline ::StringW System::DateTimeParse::ExpandPredefinedFormat(::System::ReadOnlySpan_1<char16_t> format, ByRef<::System::Globalization::DateTimeFormatInfo*> dtfi,
                                                               ByRef<::System::ParsingInfo> parseInfo, ByRef<::System::DateTimeResult> result) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "ExpandPredefinedFormat", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Globalization::DateTimeFormatInfo*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::ParsingInfo>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeResult>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, format, dtfi, parseInfo, result);
}
inline bool System::DateTimeParse::ParseJapaneseEraStart(ByRef<::System::__DTString> str, ::System::Globalization::DateTimeFormatInfo* dtfi) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "ParseJapaneseEraStart", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::__DTString>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeFormatInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, str, dtfi);
}
inline bool System::DateTimeParse::ParseByFormat(ByRef<::System::__DTString> str, ByRef<::System::__DTString> format, ByRef<::System::ParsingInfo> parseInfo,
                                                 ::System::Globalization::DateTimeFormatInfo* dtfi, ByRef<::System::DateTimeResult> result) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "ParseByFormat", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::__DTString>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::__DTString>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::ParsingInfo>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeResult>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, str, format, parseInfo, dtfi, result);
}
inline bool System::DateTimeParse::TryParseQuoteString(::System::ReadOnlySpan_1<char16_t> format, int32_t pos, ::System::Text::StringBuilder* result, ByRef<int32_t> returnValue) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "TryParseQuoteString", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, format, pos, result, returnValue);
}
inline bool System::DateTimeParse::DoStrictParse(::System::ReadOnlySpan_1<char16_t> s, ::System::ReadOnlySpan_1<char16_t> formatParam, ::System::Globalization::DateTimeStyles styles,
                                                 ::System::Globalization::DateTimeFormatInfo* dtfi, ByRef<::System::DateTimeResult> result) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "DoStrictParse", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeStyles>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeResult>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, s, formatParam, styles, dtfi, result);
}
inline ::System::Exception* System::DateTimeParse::GetDateTimeParseException(ByRef<::System::DateTimeResult> result) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeParse*>::get(), "GetDateTimeParseException", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeResult>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(nullptr, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::System::DateTimeParse::DateTimeParse() {}
