#pragma once
// IWYU pragma private; include "System/Xml/Schema/XsdDateTime.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/Xml/Schema/zzzz__XsdDateTime_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/Xml/Schema/zzzz__XmlTypeCode_def.hpp"
#include "System/Xml/Schema/zzzz__XsdDateTimeFlags_def.hpp"
#include "System/Xml/Schema/zzzz__XsdDateTime_def.hpp"
#include "System/zzzz__DateTimeOffset_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::Schema::XsdDateTime_DateTimeTypeCode::XsdDateTime_DateTimeTypeCode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XsdDateTime_DateTimeTypeCode::XsdDateTime_DateTimeTypeCode() {}
constexpr ::System::Xml::Schema::XsdDateTime_DateTimeTypeCode System::Xml::Schema::XsdDateTime_DateTimeTypeCode::DateTime{ static_cast<int32_t>(0x0) };
constexpr ::System::Xml::Schema::XsdDateTime_DateTimeTypeCode System::Xml::Schema::XsdDateTime_DateTimeTypeCode::Time{ static_cast<int32_t>(0x1) };
constexpr ::System::Xml::Schema::XsdDateTime_DateTimeTypeCode System::Xml::Schema::XsdDateTime_DateTimeTypeCode::Date{ static_cast<int32_t>(0x2) };
constexpr ::System::Xml::Schema::XsdDateTime_DateTimeTypeCode System::Xml::Schema::XsdDateTime_DateTimeTypeCode::GYearMonth{ static_cast<int32_t>(0x3) };
constexpr ::System::Xml::Schema::XsdDateTime_DateTimeTypeCode System::Xml::Schema::XsdDateTime_DateTimeTypeCode::GYear{ static_cast<int32_t>(0x4) };
constexpr ::System::Xml::Schema::XsdDateTime_DateTimeTypeCode System::Xml::Schema::XsdDateTime_DateTimeTypeCode::GMonthDay{ static_cast<int32_t>(0x5) };
constexpr ::System::Xml::Schema::XsdDateTime_DateTimeTypeCode System::Xml::Schema::XsdDateTime_DateTimeTypeCode::GDay{ static_cast<int32_t>(0x6) };
constexpr ::System::Xml::Schema::XsdDateTime_DateTimeTypeCode System::Xml::Schema::XsdDateTime_DateTimeTypeCode::GMonth{ static_cast<int32_t>(0x7) };
constexpr ::System::Xml::Schema::XsdDateTime_DateTimeTypeCode System::Xml::Schema::XsdDateTime_DateTimeTypeCode::XdrDateTime{ static_cast<int32_t>(0x8) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::Schema::XsdDateTime_XsdDateTimeKind::XsdDateTime_XsdDateTimeKind(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XsdDateTime_XsdDateTimeKind::XsdDateTime_XsdDateTimeKind() {}
constexpr ::System::Xml::Schema::XsdDateTime_XsdDateTimeKind System::Xml::Schema::XsdDateTime_XsdDateTimeKind::Unspecified{ static_cast<int32_t>(0x0) };
constexpr ::System::Xml::Schema::XsdDateTime_XsdDateTimeKind System::Xml::Schema::XsdDateTime_XsdDateTimeKind::Zulu{ static_cast<int32_t>(0x1) };
constexpr ::System::Xml::Schema::XsdDateTime_XsdDateTimeKind System::Xml::Schema::XsdDateTime_XsdDateTimeKind::LocalWestOfZulu{ static_cast<int32_t>(0x2) };
constexpr ::System::Xml::Schema::XsdDateTime_XsdDateTimeKind System::Xml::Schema::XsdDateTime_XsdDateTimeKind::LocalEastOfZulu{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::System::Xml::Schema::XsdDateTime_Parser.Parse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::XsdDateTime_Parser::*)(::StringW, ::System::Xml::Schema::XsdDateTimeFlags)>(
    &::System::Xml::Schema::XsdDateTime_Parser::Parse)> {
  constexpr static std::size_t size = 0xb44;
  constexpr static std::size_t addrs = 0x42fccf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime_Parser>::get(), "Parse", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdDateTimeFlags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDateTime_Parser.ParseDate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::XsdDateTime_Parser::*)(int32_t)>(
    &::System::Xml::Schema::XsdDateTime_Parser::ParseDate)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x42ff7f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime_Parser>::get(), "ParseDate", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDateTime_Parser.ParseTimeAndZoneAndWhitespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::XsdDateTime_Parser::*)(int32_t)>(
    &::System::Xml::Schema::XsdDateTime_Parser::ParseTimeAndZoneAndWhitespace)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x42ffa50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime_Parser>::get(), "ParseTimeAndZoneAndWhitespace",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDateTime_Parser.ParseTimeAndWhitespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::XsdDateTime_Parser::*)(int32_t)>(
    &::System::Xml::Schema::XsdDateTime_Parser::ParseTimeAndWhitespace)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x42ffd58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime_Parser>::get(), "ParseTimeAndWhitespace",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDateTime_Parser.ParseTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::XsdDateTime_Parser::*)(::ByRef<int32_t>)>(
    &::System::Xml::Schema::XsdDateTime_Parser::ParseTime)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x42fffc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime_Parser>::get(), "ParseTime", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDateTime_Parser.ParseZoneAndWhitespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::XsdDateTime_Parser::*)(int32_t)>(
    &::System::Xml::Schema::XsdDateTime_Parser::ParseZoneAndWhitespace)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x42ffaec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime_Parser>::get(), "ParseZoneAndWhitespace",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDateTime_Parser.Parse4Dig
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::XsdDateTime_Parser::*)(int32_t, ::ByRef<int32_t>)>(
    &::System::Xml::Schema::XsdDateTime_Parser::Parse4Dig)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x42ffdf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime_Parser>::get(), "Parse4Dig", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDateTime_Parser.Parse2Dig
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::XsdDateTime_Parser::*)(int32_t, ::ByRef<int32_t>)>(
    &::System::Xml::Schema::XsdDateTime_Parser::Parse2Dig)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x42fff1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime_Parser>::get(), "Parse2Dig", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDateTime_Parser.ParseChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::XsdDateTime_Parser::*)(int32_t, char16_t)>(
    &::System::Xml::Schema::XsdDateTime_Parser::ParseChar)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x42ffa0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime_Parser>::get(), "ParseChar", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDateTime_Parser.Test
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Xml::Schema::XsdDateTimeFlags, ::System::Xml::Schema::XsdDateTimeFlags)>(
    &::System::Xml::Schema::XsdDateTime_Parser::Test)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x42ff7e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime_Parser>::get(), "Test", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdDateTimeFlags>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdDateTimeFlags>::get() })));
    return ___internal_method;
  }
};
inline void System::Xml::Schema::XsdDateTime_Parser::setStaticF_Power10(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t, ::Array<int32_t>*>, "Power10", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime_Parser>::get>(
      std::forward<::ArrayW<int32_t, ::Array<int32_t>*>>(value));
}
inline ::ArrayW<int32_t, ::Array<int32_t>*> System::Xml::Schema::XsdDateTime_Parser::getStaticF_Power10() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t, ::Array<int32_t>*>, "Power10", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime_Parser>::get>();
}
inline bool System::Xml::Schema::XsdDateTime_Parser::Parse(::StringW text, ::System::Xml::Schema::XsdDateTimeFlags kinds) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime_Parser>::get(), "Parse", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdDateTimeFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, text, kinds);
}
inline bool System::Xml::Schema::XsdDateTime_Parser::ParseDate(int32_t start) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime_Parser>::get(), "ParseDate",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, start);
}
inline bool System::Xml::Schema::XsdDateTime_Parser::ParseTimeAndZoneAndWhitespace(int32_t start) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime_Parser>::get(), "ParseTimeAndZoneAndWhitespace",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, start);
}
inline bool System::Xml::Schema::XsdDateTime_Parser::ParseTimeAndWhitespace(int32_t start) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime_Parser>::get(), "ParseTimeAndWhitespace",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, start);
}
inline bool System::Xml::Schema::XsdDateTime_Parser::ParseTime(::ByRef<int32_t> start) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime_Parser>::get(), "ParseTime", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, start);
}
inline bool System::Xml::Schema::XsdDateTime_Parser::ParseZoneAndWhitespace(int32_t start) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime_Parser>::get(), "ParseZoneAndWhitespace",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, start);
}
inline bool System::Xml::Schema::XsdDateTime_Parser::Parse4Dig(int32_t start, ::ByRef<int32_t> num) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime_Parser>::get(), "Parse4Dig", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, start, num);
}
inline bool System::Xml::Schema::XsdDateTime_Parser::Parse2Dig(int32_t start, ::ByRef<int32_t> num) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime_Parser>::get(), "Parse2Dig", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, start, num);
}
inline bool System::Xml::Schema::XsdDateTime_Parser::ParseChar(int32_t start, char16_t ch) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime_Parser>::get(), "ParseChar", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, start, ch);
}
inline bool System::Xml::Schema::XsdDateTime_Parser::Test(::System::Xml::Schema::XsdDateTimeFlags left, ::System::Xml::Schema::XsdDateTimeFlags right) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime_Parser>::get(), "Test", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdDateTimeFlags>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdDateTimeFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, left, right);
}
// Ctor Parameters [CppParam { name: "typeCode", ty: "::System::Xml::Schema::XsdDateTime_DateTimeTypeCode", modifiers: "", def_value: Some("{}") }, CppParam { name: "year", ty: "int32_t", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "month", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "day", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "hour", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "minute", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "second", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "fraction", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "kind", ty:
// "::System::Xml::Schema::XsdDateTime_XsdDateTimeKind", modifiers: "", def_value: Some("{}") }, CppParam { name: "zoneHour", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "zoneMinute", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "text", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "length", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::Schema::XsdDateTime_Parser::XsdDateTime_Parser(::System::Xml::Schema::XsdDateTime_DateTimeTypeCode typeCode, int32_t year, int32_t month, int32_t day, int32_t hour,
                                                                        int32_t minute, int32_t second, int32_t fraction, ::System::Xml::Schema::XsdDateTime_XsdDateTimeKind kind, int32_t zoneHour,
                                                                        int32_t zoneMinute, ::StringW text, int32_t length) noexcept {
  this->typeCode = typeCode;
  this->year = year;
  this->month = month;
  this->day = day;
  this->hour = hour;
  this->minute = minute;
  this->second = second;
  this->fraction = fraction;
  this->kind = kind;
  this->zoneHour = zoneHour;
  this->zoneMinute = zoneMinute;
  this->text = text;
  this->length = length;
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XsdDateTime_Parser::XsdDateTime_Parser() {}
//  Writing Method size for method: ::System::Xml::Schema::XsdDateTime._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XsdDateTime::*)(::StringW, ::System::Xml::Schema::XsdDateTimeFlags)>(
    &::System::Xml::Schema::XsdDateTime::_ctor)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x42fcb48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdDateTimeFlags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDateTime._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XsdDateTime::*)(::System::Xml::Schema::XsdDateTime_Parser)>(
    &::System::Xml::Schema::XsdDateTime::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x42fd8f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdDateTime_Parser>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDateTime.InitiateXsdDateTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XsdDateTime::*)(::System::Xml::Schema::XsdDateTime_Parser)>(
    &::System::Xml::Schema::XsdDateTime::InitiateXsdDateTime)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x42fd834;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(), "InitiateXsdDateTime", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdDateTime_Parser>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDateTime.TryParse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::System::Xml::Schema::XsdDateTimeFlags, ::ByRef<::System::Xml::Schema::XsdDateTime>)>(
    &::System::Xml::Schema::XsdDateTime::TryParse)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x42fd984;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(), "TryParse", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdDateTimeFlags>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Xml::Schema::XsdDateTime>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDateTime._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XsdDateTime::*)(::System::DateTime, ::System::Xml::Schema::XsdDateTimeFlags)>(
    &::System::Xml::Schema::XsdDateTime::_ctor)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x42fda44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdDateTimeFlags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDateTime._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XsdDateTime::*)(::System::DateTimeOffset)>(&::System::Xml::Schema::XsdDateTime::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x42fdc08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTimeOffset>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDateTime._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XsdDateTime::*)(::System::DateTimeOffset, ::System::Xml::Schema::XsdDateTimeFlags)>(
    &::System::Xml::Schema::XsdDateTime::_ctor)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x42fdc78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTimeOffset>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdDateTimeFlags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDateTime.get_InternalTypeCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XsdDateTime_DateTimeTypeCode (::System::Xml::Schema::XsdDateTime::*)()>(
    &::System::Xml::Schema::XsdDateTime::get_InternalTypeCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x42fde08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(),
                                                                               "get_InternalTypeCode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDateTime.get_InternalKind
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XsdDateTime_XsdDateTimeKind (::System::Xml::Schema::XsdDateTime::*)()>(
    &::System::Xml::Schema::XsdDateTime::get_InternalKind)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x42fde10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(), "get_InternalKind",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDateTime.get_Year
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::Schema::XsdDateTime::*)()>(&::System::Xml::Schema::XsdDateTime::get_Year)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x42fde18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(), "get_Year",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDateTime.get_Month
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::Schema::XsdDateTime::*)()>(&::System::Xml::Schema::XsdDateTime::get_Month)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x42fde70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(), "get_Month",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDateTime.get_Day
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::Schema::XsdDateTime::*)()>(&::System::Xml::Schema::XsdDateTime::get_Day)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x42fdec8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(), "get_Day",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDateTime.get_Hour
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::Schema::XsdDateTime::*)()>(&::System::Xml::Schema::XsdDateTime::get_Hour)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x42fdf20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(), "get_Hour",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDateTime.get_Minute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::Schema::XsdDateTime::*)()>(&::System::Xml::Schema::XsdDateTime::get_Minute)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x42fdf78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(), "get_Minute",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDateTime.get_Second
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::Schema::XsdDateTime::*)()>(&::System::Xml::Schema::XsdDateTime::get_Second)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x42fdfd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(), "get_Second",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDateTime.get_Fraction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::Schema::XsdDateTime::*)()>(&::System::Xml::Schema::XsdDateTime::get_Fraction)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x42fe028;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(), "get_Fraction",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDateTime.get_ZoneHour
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::Schema::XsdDateTime::*)()>(&::System::Xml::Schema::XsdDateTime::get_ZoneHour)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x42fe140;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(), "get_ZoneHour",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDateTime.get_ZoneMinute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::Schema::XsdDateTime::*)()>(&::System::Xml::Schema::XsdDateTime::get_ZoneMinute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x42fe148;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(), "get_ZoneMinute",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDateTime.op_Implicit___System__DateTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (*)(::System::Xml::Schema::XsdDateTime)>(
    &::System::Xml::Schema::XsdDateTime::op_Implicit___System__DateTime)> {
  constexpr static std::size_t size = 0x53c;
  constexpr static std::size_t addrs = 0x42fe150;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdDateTime>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDateTime.op_Implicit___System__DateTimeOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTimeOffset (*)(::System::Xml::Schema::XsdDateTime)>(
    &::System::Xml::Schema::XsdDateTime::op_Implicit___System__DateTimeOffset)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x42fe68c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdDateTime>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDateTime.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::Schema::XsdDateTime::*)()>(&::System::Xml::Schema::XsdDateTime::ToString)> {
  constexpr static std::size_t size = 0x444;
  constexpr static std::size_t addrs = 0x42fe9e8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDateTime.PrintDate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XsdDateTime::*)(::System::Text::StringBuilder*)>(
    &::System::Xml::Schema::XsdDateTime::PrintDate)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x42fee2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(), "PrintDate", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDateTime.PrintTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XsdDateTime::*)(::System::Text::StringBuilder*)>(
    &::System::Xml::Schema::XsdDateTime::PrintTime)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x42fef70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(), "PrintTime", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDateTime.PrintZone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XsdDateTime::*)(::System::Text::StringBuilder*)>(
    &::System::Xml::Schema::XsdDateTime::PrintZone)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x42ff294;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(), "PrintZone", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDateTime.IntToCharArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XsdDateTime::*)(::ArrayW<char16_t, ::Array<char16_t>*>, int32_t, int32_t, int32_t)>(
    &::System::Xml::Schema::XsdDateTime::IntToCharArray)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x42ff1c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(), "IntToCharArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDateTime.ShortToCharArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XsdDateTime::*)(::ArrayW<char16_t, ::Array<char16_t>*>, int32_t, int32_t)>(
    &::System::Xml::Schema::XsdDateTime::ShortToCharArray)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x42ff22c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(), "ShortToCharArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void System::Xml::Schema::XsdDateTime::setStaticF_Lzyyyy(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "Lzyyyy", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>(std::forward<int32_t>(value));
}
inline int32_t System::Xml::Schema::XsdDateTime::getStaticF_Lzyyyy() {
  return ::cordl_internals::getStaticField<int32_t, "Lzyyyy", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>();
}
inline void System::Xml::Schema::XsdDateTime::setStaticF_Lzyyyy_(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "Lzyyyy_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>(std::forward<int32_t>(value));
}
inline int32_t System::Xml::Schema::XsdDateTime::getStaticF_Lzyyyy_() {
  return ::cordl_internals::getStaticField<int32_t, "Lzyyyy_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>();
}
inline void System::Xml::Schema::XsdDateTime::setStaticF_Lzyyyy_MM(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "Lzyyyy_MM", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>(std::forward<int32_t>(value));
}
inline int32_t System::Xml::Schema::XsdDateTime::getStaticF_Lzyyyy_MM() {
  return ::cordl_internals::getStaticField<int32_t, "Lzyyyy_MM", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>();
}
inline void System::Xml::Schema::XsdDateTime::setStaticF_Lzyyyy_MM_(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "Lzyyyy_MM_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>(std::forward<int32_t>(value));
}
inline int32_t System::Xml::Schema::XsdDateTime::getStaticF_Lzyyyy_MM_() {
  return ::cordl_internals::getStaticField<int32_t, "Lzyyyy_MM_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>();
}
inline void System::Xml::Schema::XsdDateTime::setStaticF_Lzyyyy_MM_dd(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "Lzyyyy_MM_dd", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>(std::forward<int32_t>(value));
}
inline int32_t System::Xml::Schema::XsdDateTime::getStaticF_Lzyyyy_MM_dd() {
  return ::cordl_internals::getStaticField<int32_t, "Lzyyyy_MM_dd", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>();
}
inline void System::Xml::Schema::XsdDateTime::setStaticF_Lzyyyy_MM_ddT(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "Lzyyyy_MM_ddT", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>(std::forward<int32_t>(value));
}
inline int32_t System::Xml::Schema::XsdDateTime::getStaticF_Lzyyyy_MM_ddT() {
  return ::cordl_internals::getStaticField<int32_t, "Lzyyyy_MM_ddT", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>();
}
inline void System::Xml::Schema::XsdDateTime::setStaticF_LzHH(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "LzHH", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>(std::forward<int32_t>(value));
}
inline int32_t System::Xml::Schema::XsdDateTime::getStaticF_LzHH() {
  return ::cordl_internals::getStaticField<int32_t, "LzHH", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>();
}
inline void System::Xml::Schema::XsdDateTime::setStaticF_LzHH_(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "LzHH_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>(std::forward<int32_t>(value));
}
inline int32_t System::Xml::Schema::XsdDateTime::getStaticF_LzHH_() {
  return ::cordl_internals::getStaticField<int32_t, "LzHH_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>();
}
inline void System::Xml::Schema::XsdDateTime::setStaticF_LzHH_mm(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "LzHH_mm", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>(std::forward<int32_t>(value));
}
inline int32_t System::Xml::Schema::XsdDateTime::getStaticF_LzHH_mm() {
  return ::cordl_internals::getStaticField<int32_t, "LzHH_mm", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>();
}
inline void System::Xml::Schema::XsdDateTime::setStaticF_LzHH_mm_(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "LzHH_mm_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>(std::forward<int32_t>(value));
}
inline int32_t System::Xml::Schema::XsdDateTime::getStaticF_LzHH_mm_() {
  return ::cordl_internals::getStaticField<int32_t, "LzHH_mm_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>();
}
inline void System::Xml::Schema::XsdDateTime::setStaticF_LzHH_mm_ss(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "LzHH_mm_ss", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>(std::forward<int32_t>(value));
}
inline int32_t System::Xml::Schema::XsdDateTime::getStaticF_LzHH_mm_ss() {
  return ::cordl_internals::getStaticField<int32_t, "LzHH_mm_ss", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>();
}
inline void System::Xml::Schema::XsdDateTime::setStaticF_Lz_(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "Lz_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>(std::forward<int32_t>(value));
}
inline int32_t System::Xml::Schema::XsdDateTime::getStaticF_Lz_() {
  return ::cordl_internals::getStaticField<int32_t, "Lz_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>();
}
inline void System::Xml::Schema::XsdDateTime::setStaticF_Lz_zz(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "Lz_zz", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>(std::forward<int32_t>(value));
}
inline int32_t System::Xml::Schema::XsdDateTime::getStaticF_Lz_zz() {
  return ::cordl_internals::getStaticField<int32_t, "Lz_zz", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>();
}
inline void System::Xml::Schema::XsdDateTime::setStaticF_Lz_zz_(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "Lz_zz_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>(std::forward<int32_t>(value));
}
inline int32_t System::Xml::Schema::XsdDateTime::getStaticF_Lz_zz_() {
  return ::cordl_internals::getStaticField<int32_t, "Lz_zz_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>();
}
inline void System::Xml::Schema::XsdDateTime::setStaticF_Lz_zz_zz(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "Lz_zz_zz", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>(std::forward<int32_t>(value));
}
inline int32_t System::Xml::Schema::XsdDateTime::getStaticF_Lz_zz_zz() {
  return ::cordl_internals::getStaticField<int32_t, "Lz_zz_zz", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>();
}
inline void System::Xml::Schema::XsdDateTime::setStaticF_Lz__(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "Lz__", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>(std::forward<int32_t>(value));
}
inline int32_t System::Xml::Schema::XsdDateTime::getStaticF_Lz__() {
  return ::cordl_internals::getStaticField<int32_t, "Lz__", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>();
}
inline void System::Xml::Schema::XsdDateTime::setStaticF_Lz__mm(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "Lz__mm", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>(std::forward<int32_t>(value));
}
inline int32_t System::Xml::Schema::XsdDateTime::getStaticF_Lz__mm() {
  return ::cordl_internals::getStaticField<int32_t, "Lz__mm", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>();
}
inline void System::Xml::Schema::XsdDateTime::setStaticF_Lz__mm_(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "Lz__mm_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>(std::forward<int32_t>(value));
}
inline int32_t System::Xml::Schema::XsdDateTime::getStaticF_Lz__mm_() {
  return ::cordl_internals::getStaticField<int32_t, "Lz__mm_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>();
}
inline void System::Xml::Schema::XsdDateTime::setStaticF_Lz__mm__(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "Lz__mm__", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>(std::forward<int32_t>(value));
}
inline int32_t System::Xml::Schema::XsdDateTime::getStaticF_Lz__mm__() {
  return ::cordl_internals::getStaticField<int32_t, "Lz__mm__", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>();
}
inline void System::Xml::Schema::XsdDateTime::setStaticF_Lz__mm_dd(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "Lz__mm_dd", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>(std::forward<int32_t>(value));
}
inline int32_t System::Xml::Schema::XsdDateTime::getStaticF_Lz__mm_dd() {
  return ::cordl_internals::getStaticField<int32_t, "Lz__mm_dd", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>();
}
inline void System::Xml::Schema::XsdDateTime::setStaticF_Lz___(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "Lz___", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>(std::forward<int32_t>(value));
}
inline int32_t System::Xml::Schema::XsdDateTime::getStaticF_Lz___() {
  return ::cordl_internals::getStaticField<int32_t, "Lz___", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>();
}
inline void System::Xml::Schema::XsdDateTime::setStaticF_Lz___dd(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "Lz___dd", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>(std::forward<int32_t>(value));
}
inline int32_t System::Xml::Schema::XsdDateTime::getStaticF_Lz___dd() {
  return ::cordl_internals::getStaticField<int32_t, "Lz___dd", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>();
}
inline void System::Xml::Schema::XsdDateTime::setStaticF_typeCodes(::ArrayW<::System::Xml::Schema::XmlTypeCode, ::Array<::System::Xml::Schema::XmlTypeCode>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::XmlTypeCode, ::Array<::System::Xml::Schema::XmlTypeCode>*>, "typeCodes",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>(
      std::forward<::ArrayW<::System::Xml::Schema::XmlTypeCode, ::Array<::System::Xml::Schema::XmlTypeCode>*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::XmlTypeCode, ::Array<::System::Xml::Schema::XmlTypeCode>*> System::Xml::Schema::XsdDateTime::getStaticF_typeCodes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::XmlTypeCode, ::Array<::System::Xml::Schema::XmlTypeCode>*>, "typeCodes",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>();
}
inline void System::Xml::Schema::XsdDateTime::_ctor(::StringW text, ::System::Xml::Schema::XsdDateTimeFlags kinds) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdDateTimeFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, text, kinds);
}
inline void System::Xml::Schema::XsdDateTime::_ctor(::System::Xml::Schema::XsdDateTime_Parser parser) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdDateTime_Parser>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parser);
}
inline void System::Xml::Schema::XsdDateTime::InitiateXsdDateTime(::System::Xml::Schema::XsdDateTime_Parser parser) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(), "InitiateXsdDateTime", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdDateTime_Parser>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parser);
}
inline bool System::Xml::Schema::XsdDateTime::TryParse(::StringW text, ::System::Xml::Schema::XsdDateTimeFlags kinds, ::ByRef<::System::Xml::Schema::XsdDateTime> result) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(), "TryParse", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdDateTimeFlags>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Xml::Schema::XsdDateTime>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, text, kinds, result);
}
inline void System::Xml::Schema::XsdDateTime::_ctor(::System::DateTime dateTime, ::System::Xml::Schema::XsdDateTimeFlags kinds) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdDateTimeFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dateTime, kinds);
}
inline void System::Xml::Schema::XsdDateTime::_ctor(::System::DateTimeOffset dateTimeOffset) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTimeOffset>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dateTimeOffset);
}
inline void System::Xml::Schema::XsdDateTime::_ctor(::System::DateTimeOffset dateTimeOffset, ::System::Xml::Schema::XsdDateTimeFlags kinds) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTimeOffset>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdDateTimeFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dateTimeOffset, kinds);
}
inline ::System::Xml::Schema::XsdDateTime_DateTimeTypeCode System::Xml::Schema::XsdDateTime::get_InternalTypeCode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(), "get_InternalTypeCode",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XsdDateTime_DateTimeTypeCode, false>(this, ___internal_method);
}
inline ::System::Xml::Schema::XsdDateTime_XsdDateTimeKind System::Xml::Schema::XsdDateTime::get_InternalKind() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(), "get_InternalKind",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XsdDateTime_XsdDateTimeKind, false>(this, ___internal_method);
}
inline int32_t System::Xml::Schema::XsdDateTime::get_Year() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(), "get_Year",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::Xml::Schema::XsdDateTime::get_Month() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(), "get_Month",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::Xml::Schema::XsdDateTime::get_Day() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(), "get_Day",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::Xml::Schema::XsdDateTime::get_Hour() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(), "get_Hour",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::Xml::Schema::XsdDateTime::get_Minute() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(), "get_Minute",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::Xml::Schema::XsdDateTime::get_Second() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(), "get_Second",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::Xml::Schema::XsdDateTime::get_Fraction() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(), "get_Fraction",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::Xml::Schema::XsdDateTime::get_ZoneHour() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(), "get_ZoneHour",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::Xml::Schema::XsdDateTime::get_ZoneMinute() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(), "get_ZoneMinute",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::DateTime System::Xml::Schema::XsdDateTime::op_Implicit___System__DateTime(::System::Xml::Schema::XsdDateTime xdt) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdDateTime>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(nullptr, ___internal_method, xdt);
}
inline ::System::DateTimeOffset System::Xml::Schema::XsdDateTime::op_Implicit___System__DateTimeOffset(::System::Xml::Schema::XsdDateTime xdt) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdDateTime>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTimeOffset, false>(nullptr, ___internal_method, xdt);
}
inline ::StringW System::Xml::Schema::XsdDateTime::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void System::Xml::Schema::XsdDateTime::PrintDate(::System::Text::StringBuilder* sb) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(), "PrintDate", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sb);
}
inline void System::Xml::Schema::XsdDateTime::PrintTime(::System::Text::StringBuilder* sb) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(), "PrintTime", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sb);
}
inline void System::Xml::Schema::XsdDateTime::PrintZone(::System::Text::StringBuilder* sb) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(), "PrintZone", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sb);
}
inline void System::Xml::Schema::XsdDateTime::IntToCharArray(::ArrayW<char16_t, ::Array<char16_t>*> text, int32_t start, int32_t value, int32_t digits) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(), "IntToCharArray", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, text, start, value, digits);
}
inline void System::Xml::Schema::XsdDateTime::ShortToCharArray(::ArrayW<char16_t, ::Array<char16_t>*> text, int32_t start, int32_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(), "ShortToCharArray", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, text, start, value);
}
// Ctor Parameters [CppParam { name: "dt", ty: "::System::DateTime", modifiers: "", def_value: Some("{}") }, CppParam { name: "extra", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::Schema::XsdDateTime::XsdDateTime(::System::DateTime dt, uint32_t extra) noexcept {
  this->dt = dt;
  this->extra = extra;
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XsdDateTime::XsdDateTime() {}
