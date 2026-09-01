#pragma once
// IWYU pragma private; include "System\Globalization\HebrewNumber.hpp"
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::HebrewNumber_HebrewValue::*)(::System::Globalization::HebrewNumber_HebrewToken, int16_t)>(
    &::System::Globalization::HebrewNumber_HebrewValue::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5bbd648;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::HebrewNumber_HebrewValue>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Globalization::HebrewNumber_HebrewToken>(), ::i2c::type_of<int16_t>() } })));
    return ___internal_method;
  }
};
inline void System::Globalization::HebrewNumber_HebrewValue::_ctor(::System::Globalization::HebrewNumber_HebrewToken token, int16_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::HebrewNumber_HebrewValue>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Globalization::HebrewNumber_HebrewToken>(), ::i2c::type_of<int16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, token, value);
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int32_t)>(&::System::Globalization::HebrewNumber::ToString)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x5bbce68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::HebrewNumber*>(), { "ToString", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::HebrewNumber.ParseByChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::HebrewNumberParsingState (*)(char16_t, ::by_ref<::System::Globalization::HebrewNumberParsingContext>)>(
    &::System::Globalization::HebrewNumber::ParseByChar)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5bbd110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::HebrewNumber*>(),
                                                             { "ParseByChar", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<::by_ref<::System::Globalization::HebrewNumberParsingContext>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::HebrewNumber.IsDigit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(char16_t)>(&::System::Globalization::HebrewNumber::IsDigit)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5bbd2b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::HebrewNumber*>(), { "IsDigit", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
inline void System::Globalization::HebrewNumber::setStaticF_s_hebrewValues(::ArrayW<::System::Globalization::HebrewNumber_HebrewValue> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Globalization::HebrewNumber_HebrewValue>, "s_hebrewValues", ::System::Globalization::HebrewNumber*>(
      std::forward<::ArrayW<::System::Globalization::HebrewNumber_HebrewValue>>(value));
}
inline ::ArrayW<::System::Globalization::HebrewNumber_HebrewValue> System::Globalization::HebrewNumber::getStaticF_s_hebrewValues() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Globalization::HebrewNumber_HebrewValue>, "s_hebrewValues", ::System::Globalization::HebrewNumber*>();
}
inline void System::Globalization::HebrewNumber::setStaticF_s_maxHebrewNumberCh(char16_t value) {
  ::cordl_internals::setStaticField<char16_t, "s_maxHebrewNumberCh", ::System::Globalization::HebrewNumber*>(std::forward<char16_t>(value));
}
inline char16_t System::Globalization::HebrewNumber::getStaticF_s_maxHebrewNumberCh() {
  return ::cordl_internals::getStaticField<char16_t, "s_maxHebrewNumberCh", ::System::Globalization::HebrewNumber*>();
}
inline void System::Globalization::HebrewNumber::setStaticF_s_numberPasingState(::ArrayW<::System::Globalization::HebrewNumber_HS> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Globalization::HebrewNumber_HS>, "s_numberPasingState", ::System::Globalization::HebrewNumber*>(
      std::forward<::ArrayW<::System::Globalization::HebrewNumber_HS>>(value));
}
inline ::ArrayW<::System::Globalization::HebrewNumber_HS> System::Globalization::HebrewNumber::getStaticF_s_numberPasingState() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Globalization::HebrewNumber_HS>, "s_numberPasingState", ::System::Globalization::HebrewNumber*>();
}
inline ::StringW System::Globalization::HebrewNumber::ToString(int32_t Number) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::HebrewNumber*>(), { "ToString", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, Number);
}
inline ::System::Globalization::HebrewNumberParsingState System::Globalization::HebrewNumber::ParseByChar(char16_t ch, ::by_ref<::System::Globalization::HebrewNumberParsingContext> context) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::HebrewNumber*>(),
                                                           { "ParseByChar", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<::by_ref<::System::Globalization::HebrewNumberParsingContext>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::HebrewNumberParsingState>(nullptr, ___internal_method, ch, context);
}
inline bool System::Globalization::HebrewNumber::IsDigit(char16_t ch) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::HebrewNumber*>(), { "IsDigit", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ch);
}
// Ctor Parameters []
constexpr ::System::Globalization::HebrewNumber::HebrewNumber() {}
