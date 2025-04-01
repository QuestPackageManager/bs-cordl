#pragma once
// IWYU pragma private; include "System/Globalization/HebrewNumber.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Globalization/zzzz__HebrewNumber_def.hpp"
#include "System/Globalization/zzzz__HebrewNumberParsingContext_def.hpp"
#include "System/Globalization/zzzz__HebrewNumberParsingState_def.hpp"
#include "System/Globalization/zzzz__HebrewNumber_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Globalization::HebrewNumber_HebrewToken::HebrewNumber_HebrewToken(int16_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Globalization::HebrewNumber_HebrewToken::HebrewNumber_HebrewToken() {}
constexpr ::System::Globalization::HebrewNumber_HebrewToken System::Globalization::HebrewNumber_HebrewToken::Invalid{ static_cast<int16_t>(0xffff) };
constexpr ::System::Globalization::HebrewNumber_HebrewToken System::Globalization::HebrewNumber_HebrewToken::Digit400{ static_cast<int16_t>(0x0) };
constexpr ::System::Globalization::HebrewNumber_HebrewToken System::Globalization::HebrewNumber_HebrewToken::Digit200_300{ static_cast<int16_t>(0x1) };
constexpr ::System::Globalization::HebrewNumber_HebrewToken System::Globalization::HebrewNumber_HebrewToken::Digit100{ static_cast<int16_t>(0x2) };
constexpr ::System::Globalization::HebrewNumber_HebrewToken System::Globalization::HebrewNumber_HebrewToken::Digit10{ static_cast<int16_t>(0x3) };
constexpr ::System::Globalization::HebrewNumber_HebrewToken System::Globalization::HebrewNumber_HebrewToken::Digit1{ static_cast<int16_t>(0x4) };
constexpr ::System::Globalization::HebrewNumber_HebrewToken System::Globalization::HebrewNumber_HebrewToken::Digit6_7{ static_cast<int16_t>(0x5) };
constexpr ::System::Globalization::HebrewNumber_HebrewToken System::Globalization::HebrewNumber_HebrewToken::Digit7{ static_cast<int16_t>(0x6) };
constexpr ::System::Globalization::HebrewNumber_HebrewToken System::Globalization::HebrewNumber_HebrewToken::Digit9{ static_cast<int16_t>(0x7) };
constexpr ::System::Globalization::HebrewNumber_HebrewToken System::Globalization::HebrewNumber_HebrewToken::SingleQuote{ static_cast<int16_t>(0x8) };
constexpr ::System::Globalization::HebrewNumber_HebrewToken System::Globalization::HebrewNumber_HebrewToken::DoubleQuote{ static_cast<int16_t>(0x9) };
//  Writing Method size for method: ::System::Globalization::HebrewNumber_HebrewValue._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Globalization::HebrewNumber_HebrewValue::*)(::System::Globalization::HebrewNumber_HebrewToken, int16_t)>(&::System::Globalization::HebrewNumber_HebrewValue::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3d8e940;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::HebrewNumber_HebrewValue>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::HebrewNumber_HebrewToken>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get() })));
    return ___internal_method;
  }
};
inline void System::Globalization::HebrewNumber_HebrewValue::_ctor(::System::Globalization::HebrewNumber_HebrewToken token, int16_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::HebrewNumber_HebrewValue>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::HebrewNumber_HebrewToken>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, token, value);
}
// Ctor Parameters [CppParam { name: "token", ty: "::System::Globalization::HebrewNumber_HebrewToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "int16_t", modifiers: "",
// def_value: Some("{}") }]
constexpr ::System::Globalization::HebrewNumber_HebrewValue::HebrewNumber_HebrewValue(::System::Globalization::HebrewNumber_HebrewToken token, int16_t value) noexcept {
  this->token = token;
  this->value = value;
}
// Ctor Parameters []
constexpr ::System::Globalization::HebrewNumber_HebrewValue::HebrewNumber_HebrewValue() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Globalization::HebrewNumber_HS::HebrewNumber_HS(int8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Globalization::HebrewNumber_HS::HebrewNumber_HS() {}
constexpr ::System::Globalization::HebrewNumber_HS System::Globalization::HebrewNumber_HS::_err{ static_cast<int8_t>(0xff) };
constexpr ::System::Globalization::HebrewNumber_HS System::Globalization::HebrewNumber_HS::Start{ static_cast<int8_t>(0x0) };
constexpr ::System::Globalization::HebrewNumber_HS System::Globalization::HebrewNumber_HS::S400{ static_cast<int8_t>(0x1) };
constexpr ::System::Globalization::HebrewNumber_HS System::Globalization::HebrewNumber_HS::S400_400{ static_cast<int8_t>(0x2) };
constexpr ::System::Globalization::HebrewNumber_HS System::Globalization::HebrewNumber_HS::S400_X00{ static_cast<int8_t>(0x3) };
constexpr ::System::Globalization::HebrewNumber_HS System::Globalization::HebrewNumber_HS::S400_X0{ static_cast<int8_t>(0x4) };
constexpr ::System::Globalization::HebrewNumber_HS System::Globalization::HebrewNumber_HS::X00_DQ{ static_cast<int8_t>(0x5) };
constexpr ::System::Globalization::HebrewNumber_HS System::Globalization::HebrewNumber_HS::S400_X00_X0{ static_cast<int8_t>(0x6) };
constexpr ::System::Globalization::HebrewNumber_HS System::Globalization::HebrewNumber_HS::X0_DQ{ static_cast<int8_t>(0x7) };
constexpr ::System::Globalization::HebrewNumber_HS System::Globalization::HebrewNumber_HS::X{ static_cast<int8_t>(0x8) };
constexpr ::System::Globalization::HebrewNumber_HS System::Globalization::HebrewNumber_HS::X0{ static_cast<int8_t>(0x9) };
constexpr ::System::Globalization::HebrewNumber_HS System::Globalization::HebrewNumber_HS::X00{ static_cast<int8_t>(0xa) };
constexpr ::System::Globalization::HebrewNumber_HS System::Globalization::HebrewNumber_HS::S400_DQ{ static_cast<int8_t>(0xb) };
constexpr ::System::Globalization::HebrewNumber_HS System::Globalization::HebrewNumber_HS::S400_400_DQ{ static_cast<int8_t>(0xc) };
constexpr ::System::Globalization::HebrewNumber_HS System::Globalization::HebrewNumber_HS::S400_400_100{ static_cast<int8_t>(0xd) };
constexpr ::System::Globalization::HebrewNumber_HS System::Globalization::HebrewNumber_HS::S9{ static_cast<int8_t>(0xe) };
constexpr ::System::Globalization::HebrewNumber_HS System::Globalization::HebrewNumber_HS::X00_S9{ static_cast<int8_t>(0xf) };
constexpr ::System::Globalization::HebrewNumber_HS System::Globalization::HebrewNumber_HS::S9_DQ{ static_cast<int8_t>(0x10) };
constexpr ::System::Globalization::HebrewNumber_HS System::Globalization::HebrewNumber_HS::END{ static_cast<int8_t>(0x64) };
//  Writing Method size for method: ::System::Globalization::HebrewNumber.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(int32_t)>(&::System::Globalization::HebrewNumber::ToString)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x3d8e40c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::HebrewNumber*>::get(), "ToString", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::HebrewNumber.ParseByChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Globalization::HebrewNumberParsingState (*)(char16_t, ::ByRef<::System::Globalization::HebrewNumberParsingContext>)>(&::System::Globalization::HebrewNumber::ParseByChar)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x3d8c65c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::HebrewNumber*>::get(), "ParseByChar", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Globalization::HebrewNumberParsingContext>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::HebrewNumber.IsDigit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(char16_t)>(&::System::Globalization::HebrewNumber::IsDigit)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x3d8c580;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::HebrewNumber*>::get(), "IsDigit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
inline void
System::Globalization::HebrewNumber::setStaticF_s_hebrewValues(::ArrayW<::System::Globalization::HebrewNumber_HebrewValue, ::Array<::System::Globalization::HebrewNumber_HebrewValue>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Globalization::HebrewNumber_HebrewValue, ::Array<::System::Globalization::HebrewNumber_HebrewValue>*>, "s_hebrewValues",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::HebrewNumber*>::get>(
      std::forward<::ArrayW<::System::Globalization::HebrewNumber_HebrewValue, ::Array<::System::Globalization::HebrewNumber_HebrewValue>*>>(value));
}
inline ::ArrayW<::System::Globalization::HebrewNumber_HebrewValue, ::Array<::System::Globalization::HebrewNumber_HebrewValue>*> System::Globalization::HebrewNumber::getStaticF_s_hebrewValues() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Globalization::HebrewNumber_HebrewValue, ::Array<::System::Globalization::HebrewNumber_HebrewValue>*>, "s_hebrewValues",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::HebrewNumber*>::get>();
}
inline void System::Globalization::HebrewNumber::setStaticF_s_maxHebrewNumberCh(char16_t value) {
  ::cordl_internals::setStaticField<char16_t, "s_maxHebrewNumberCh", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::HebrewNumber*>::get>(
      std::forward<char16_t>(value));
}
inline char16_t System::Globalization::HebrewNumber::getStaticF_s_maxHebrewNumberCh() {
  return ::cordl_internals::getStaticField<char16_t, "s_maxHebrewNumberCh", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::HebrewNumber*>::get>();
}
inline void System::Globalization::HebrewNumber::setStaticF_s_numberPasingState(::ArrayW<::System::Globalization::HebrewNumber_HS, ::Array<::System::Globalization::HebrewNumber_HS>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Globalization::HebrewNumber_HS, ::Array<::System::Globalization::HebrewNumber_HS>*>, "s_numberPasingState",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::HebrewNumber*>::get>(
      std::forward<::ArrayW<::System::Globalization::HebrewNumber_HS, ::Array<::System::Globalization::HebrewNumber_HS>*>>(value));
}
inline ::ArrayW<::System::Globalization::HebrewNumber_HS, ::Array<::System::Globalization::HebrewNumber_HS>*> System::Globalization::HebrewNumber::getStaticF_s_numberPasingState() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Globalization::HebrewNumber_HS, ::Array<::System::Globalization::HebrewNumber_HS>*>, "s_numberPasingState",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::HebrewNumber*>::get>();
}
inline ::StringW System::Globalization::HebrewNumber::ToString(int32_t Number) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::HebrewNumber*>::get(), "ToString",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, Number);
}
inline ::System::Globalization::HebrewNumberParsingState System::Globalization::HebrewNumber::ParseByChar(char16_t ch, ::ByRef<::System::Globalization::HebrewNumberParsingContext> context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::HebrewNumber*>::get(), "ParseByChar", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Globalization::HebrewNumberParsingContext>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::HebrewNumberParsingState, false>(nullptr, ___internal_method, ch, context);
}
inline bool System::Globalization::HebrewNumber::IsDigit(char16_t ch) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::HebrewNumber*>::get(), "IsDigit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ch);
}
// Ctor Parameters []
constexpr ::System::Globalization::HebrewNumber::HebrewNumber() {}
