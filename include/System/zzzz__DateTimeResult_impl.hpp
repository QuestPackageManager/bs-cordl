#pragma once
// IWYU pragma private; include "System/DateTimeResult.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__ParseFailureKind_impl.hpp"
#include "System/zzzz__ParseFlags_impl.hpp"
#include "System/zzzz__ReadOnlySpan_1_impl.hpp"
#include "System/zzzz__TimeSpan_impl.hpp"
#include "System/zzzz__DateTimeResult_def.hpp"
#include "System/Globalization/zzzz__Calendar_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ParseFailureKind_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
//  Writing Method size for method: ::System::DateTimeResult.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::DateTimeResult::*)(::System::ReadOnlySpan_1<char16_t>)>(&::System::DateTimeResult::Init)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5c3e518;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeResult>(), { "Init", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeResult.SetDate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::DateTimeResult::*)(int32_t, int32_t, int32_t)>(&::System::DateTimeResult::SetDate)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c3e53c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeResult>(), { "SetDate", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeResult.SetBadFormatSpecifierFailure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::DateTimeResult::*)()>(&::System::DateTimeResult::SetBadFormatSpecifierFailure)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5c3e548;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeResult>(), { "SetBadFormatSpecifierFailure", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeResult.SetBadFormatSpecifierFailure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::DateTimeResult::*)(::System::ReadOnlySpan_1<char16_t>)>(&::System::DateTimeResult::SetBadFormatSpecifierFailure)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5c3e5c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeResult>(), { "SetBadFormatSpecifierFailure", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeResult.SetBadDateTimeFailure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::DateTimeResult::*)()>(&::System::DateTimeResult::SetBadDateTimeFailure)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5c3e630;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeResult>(), { "SetBadDateTimeFailure", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeResult.SetFailure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::DateTimeResult::*)(::System::ParseFailureKind, ::StringW)>(&::System::DateTimeResult::SetFailure)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c3e684;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeResult>(), { "SetFailure", {}, { ::i2c::type_of<::System::ParseFailureKind>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeResult.SetFailure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::DateTimeResult::*)(::System::ParseFailureKind, ::StringW, ::System::Object*)>(&::System::DateTimeResult::SetFailure)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c3e690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeResult>(),
                                                { "SetFailure", {}, { ::i2c::type_of<::System::ParseFailureKind>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeResult.SetFailure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::DateTimeResult::*)(::System::ParseFailureKind, ::StringW, ::System::Object*, ::StringW)>(
    &::System::DateTimeResult::SetFailure)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5c3e69c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::DateTimeResult>(),
                            { "SetFailure", {}, { ::i2c::type_of<::System::ParseFailureKind>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void System::DateTimeResult::Init(::System::ReadOnlySpan_1<char16_t> originalDateTimeString) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeResult>(), { "Init", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, originalDateTimeString);
}
inline void System::DateTimeResult::SetDate(int32_t year, int32_t month, int32_t day) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeResult>(), { "SetDate", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, year, month, day);
}
inline void System::DateTimeResult::SetBadFormatSpecifierFailure() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeResult>(), { "SetBadFormatSpecifierFailure", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void System::DateTimeResult::SetBadFormatSpecifierFailure(::System::ReadOnlySpan_1<char16_t> failedFormatSpecifier) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeResult>(), { "SetBadFormatSpecifierFailure", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, failedFormatSpecifier);
}
inline void System::DateTimeResult::SetBadDateTimeFailure() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeResult>(), { "SetBadDateTimeFailure", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void System::DateTimeResult::SetFailure(::System::ParseFailureKind failure, ::StringW failureMessageID) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeResult>(), { "SetFailure", {}, { ::i2c::type_of<::System::ParseFailureKind>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, failure, failureMessageID);
}
inline void System::DateTimeResult::SetFailure(::System::ParseFailureKind failure, ::StringW failureMessageID, ::System::Object* failureMessageFormatArgument) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeResult>(),
                                                           { "SetFailure", {}, { ::i2c::type_of<::System::ParseFailureKind>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, failure, failureMessageID, failureMessageFormatArgument);
}
inline void System::DateTimeResult::SetFailure(::System::ParseFailureKind failure, ::StringW failureMessageID, ::System::Object* failureMessageFormatArgument, ::StringW failureArgumentName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::DateTimeResult>(),
                          { "SetFailure", {}, { ::i2c::type_of<::System::ParseFailureKind>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, failure, failureMessageID, failureMessageFormatArgument, failureArgumentName);
}
// Ctor Parameters [CppParam { name: "Year", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Month", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "Day", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Hour", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Minute", ty: "int32_t", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "Second", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "fraction", ty: "double_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "era", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "flags", ty: "::System::ParseFlags", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "timeZoneOffset", ty: "::System::TimeSpan", modifiers: "", def_value: Some("{}") }, CppParam { name: "calendar", ty: "::System::Globalization::Calendar*", modifiers: "", def_value: Some("{}") },
// CppParam { name: "parsedDate", ty: "::System::DateTime", modifiers: "", def_value: Some("{}") }, CppParam { name: "failure", ty: "::System::ParseFailureKind", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "failureMessageID", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "failureMessageFormatArgument", ty: "::System::Object*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "failureArgumentName", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "originalDateTimeString", ty: "::System::ReadOnlySpan_1<char16_t>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "failedFormatSpecifier", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::System::DateTimeResult::DateTimeResult(int32_t Year, int32_t Month, int32_t Day, int32_t Hour, int32_t Minute, int32_t Second, double_t fraction, int32_t era, ::System::ParseFlags flags,
                                                   ::System::TimeSpan timeZoneOffset, ::System::Globalization::Calendar* calendar, ::System::DateTime parsedDate, ::System::ParseFailureKind failure,
                                                   ::StringW failureMessageID, ::System::Object* failureMessageFormatArgument, ::StringW failureArgumentName,
                                                   ::System::ReadOnlySpan_1<char16_t> originalDateTimeString, ::System::ReadOnlySpan_1<char16_t> failedFormatSpecifier) noexcept {
  this->Year = Year;
  this->Month = Month;
  this->Day = Day;
  this->Hour = Hour;
  this->Minute = Minute;
  this->Second = Second;
  this->fraction = fraction;
  this->era = era;
  this->flags = flags;
  this->timeZoneOffset = timeZoneOffset;
  this->calendar = calendar;
  this->parsedDate = parsedDate;
  this->failure = failure;
  this->failureMessageID = failureMessageID;
  this->failureMessageFormatArgument = failureMessageFormatArgument;
  this->failureArgumentName = failureArgumentName;
  this->originalDateTimeString = originalDateTimeString;
  this->failedFormatSpecifier = failedFormatSpecifier;
}
// Ctor Parameters []
constexpr ::System::DateTimeResult::DateTimeResult() {}
