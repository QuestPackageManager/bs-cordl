#pragma once
// IWYU pragma private; include "System/Globalization/DateTimeFormatInfo.hpp"
#include "System/Globalization/zzzz__CalendarId_impl.hpp"
#include "System/Globalization/zzzz__DateTimeFormatFlags_impl.hpp"
#include "System/Globalization/zzzz__DateTimeStyles_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__TokenType_impl.hpp"
#include "System/Globalization/zzzz__DateTimeFormatInfo_def.hpp"
#include "System/Globalization/zzzz__CalendarId_def.hpp"
#include "System/Globalization/zzzz__Calendar_def.hpp"
#include "System/Globalization/zzzz__CompareInfo_def.hpp"
#include "System/Globalization/zzzz__CultureData_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/Globalization/zzzz__DateTimeFormatFlags_def.hpp"
#include "System/Globalization/zzzz__DateTimeFormatInfo_def.hpp"
#include "System/Globalization/zzzz__DateTimeStyles_def.hpp"
#include "System/Globalization/zzzz__MonthNameStyles_def.hpp"
#include "System/zzzz__DayOfWeek_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TokenType_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz____DTString_def.hpp"
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo_TokenHashValue._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::DateTimeFormatInfo_TokenHashValue::*)(::StringW, ::System::TokenType, int32_t)>(
    &::System::Globalization::DateTimeFormatInfo_TokenHashValue::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b9cbc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo_TokenHashValue*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::TokenType>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Globalization::DateTimeFormatInfo_TokenHashValue::__cordl_internal_get_tokenString() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tokenString;
}
constexpr ::StringW const& System::Globalization::DateTimeFormatInfo_TokenHashValue::__cordl_internal_get_tokenString() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tokenString;
}
constexpr void System::Globalization::DateTimeFormatInfo_TokenHashValue::__cordl_internal_set_tokenString(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tokenString = value;
}
constexpr ::System::TokenType& System::Globalization::DateTimeFormatInfo_TokenHashValue::__cordl_internal_get_tokenType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tokenType;
}
constexpr ::System::TokenType const& System::Globalization::DateTimeFormatInfo_TokenHashValue::__cordl_internal_get_tokenType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tokenType;
}
constexpr void System::Globalization::DateTimeFormatInfo_TokenHashValue::__cordl_internal_set_tokenType(::System::TokenType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tokenType = value;
}
constexpr int32_t& System::Globalization::DateTimeFormatInfo_TokenHashValue::__cordl_internal_get_tokenValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tokenValue;
}
constexpr int32_t const& System::Globalization::DateTimeFormatInfo_TokenHashValue::__cordl_internal_get_tokenValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tokenValue;
}
constexpr void System::Globalization::DateTimeFormatInfo_TokenHashValue::__cordl_internal_set_tokenValue(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tokenValue = value;
}
inline void System::Globalization::DateTimeFormatInfo_TokenHashValue::_ctor(::StringW tokenString, ::System::TokenType tokenType, int32_t tokenValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo_TokenHashValue*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::TokenType>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tokenString, tokenType, tokenValue);
}
inline ::System::Globalization::DateTimeFormatInfo_TokenHashValue* System::Globalization::DateTimeFormatInfo_TokenHashValue::New_ctor(::StringW tokenString, ::System::TokenType tokenType,
                                                                                                                                      int32_t tokenValue) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Globalization::DateTimeFormatInfo_TokenHashValue*>(tokenString, tokenType, tokenValue));
}
// Ctor Parameters []
constexpr ::System::Globalization::DateTimeFormatInfo_TokenHashValue::DateTimeFormatInfo_TokenHashValue() {}
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_CultureName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Globalization::DateTimeFormatInfo::*)()>(&::System::Globalization::DateTimeFormatInfo::get_CultureName)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5b97354;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_CultureName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_Culture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::CultureInfo* (::System::Globalization::DateTimeFormatInfo::*)()>(
    &::System::Globalization::DateTimeFormatInfo::get_Culture)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5b9737c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_Culture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_LanguageName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Globalization::DateTimeFormatInfo::*)()>(&::System::Globalization::DateTimeFormatInfo::get_LanguageName)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5b97404;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_LanguageName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.internalGetAbbreviatedDayOfWeekNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::System::Globalization::DateTimeFormatInfo::*)()>(
    &::System::Globalization::DateTimeFormatInfo::internalGetAbbreviatedDayOfWeekNames)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b9742c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "internalGetAbbreviatedDayOfWeekNames", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.internalGetAbbreviatedDayOfWeekNamesCore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::System::Globalization::DateTimeFormatInfo::*)()>(
    &::System::Globalization::DateTimeFormatInfo::internalGetAbbreviatedDayOfWeekNamesCore)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5b97440;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "internalGetAbbreviatedDayOfWeekNamesCore", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.internalGetDayOfWeekNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::System::Globalization::DateTimeFormatInfo::*)()>(
    &::System::Globalization::DateTimeFormatInfo::internalGetDayOfWeekNames)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b97490;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "internalGetDayOfWeekNames", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.internalGetDayOfWeekNamesCore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::System::Globalization::DateTimeFormatInfo::*)()>(
    &::System::Globalization::DateTimeFormatInfo::internalGetDayOfWeekNamesCore)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5b974a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "internalGetDayOfWeekNamesCore", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.internalGetAbbreviatedMonthNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::System::Globalization::DateTimeFormatInfo::*)()>(
    &::System::Globalization::DateTimeFormatInfo::internalGetAbbreviatedMonthNames)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b974f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "internalGetAbbreviatedMonthNames", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.internalGetAbbreviatedMonthNamesCore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::System::Globalization::DateTimeFormatInfo::*)()>(
    &::System::Globalization::DateTimeFormatInfo::internalGetAbbreviatedMonthNamesCore)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5b97508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "internalGetAbbreviatedMonthNamesCore", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.internalGetMonthNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::System::Globalization::DateTimeFormatInfo::*)()>(&::System::Globalization::DateTimeFormatInfo::internalGetMonthNames)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b97558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "internalGetMonthNames", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.internalGetMonthNamesCore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::System::Globalization::DateTimeFormatInfo::*)()>(
    &::System::Globalization::DateTimeFormatInfo::internalGetMonthNamesCore)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5b9756c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "internalGetMonthNamesCore", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::DateTimeFormatInfo::*)()>(&::System::Globalization::DateTimeFormatInfo::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5b975bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::DateTimeFormatInfo::*)(::System::Globalization::CultureData*, ::System::Globalization::Calendar*)>(
    &::System::Globalization::DateTimeFormatInfo::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b977b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Globalization::CultureData*>(), ::i2c::type_of<::System::Globalization::Calendar*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.InitializeOverridableProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::DateTimeFormatInfo::*)(::System::Globalization::CultureData*, int32_t)>(
    &::System::Globalization::DateTimeFormatInfo::InitializeOverridableProperties)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5b97690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(),
                                                             { "InitializeOverridableProperties", {}, { ::i2c::type_of<::System::Globalization::CultureData*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_InvariantInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::DateTimeFormatInfo* (*)()>(&::System::Globalization::DateTimeFormatInfo::get_InvariantInfo)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5b97a70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_InvariantInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_CurrentInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::DateTimeFormatInfo* (*)()>(&::System::Globalization::DateTimeFormatInfo::get_CurrentInfo)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5b97b40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_CurrentInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::DateTimeFormatInfo* (*)(::System::IFormatProvider*)>(&::System::Globalization::DateTimeFormatInfo::GetInstance)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x5b97c3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "GetInstance", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.GetFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Globalization::DateTimeFormatInfo::*)(::System::Type*)>(&::System::Globalization::DateTimeFormatInfo::GetFormat)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5b97de8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "GetFormat", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.Clone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Globalization::DateTimeFormatInfo::*)()>(&::System::Globalization::DateTimeFormatInfo::Clone)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5b97e64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "Clone", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_AMDesignator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Globalization::DateTimeFormatInfo::*)()>(&::System::Globalization::DateTimeFormatInfo::get_AMDesignator)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5b97f6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_AMDesignator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_Calendar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::Calendar* (::System::Globalization::DateTimeFormatInfo::*)()>(
    &::System::Globalization::DateTimeFormatInfo::get_Calendar)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b97f94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_Calendar", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.set_Calendar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::DateTimeFormatInfo::*)(::System::Globalization::Calendar*)>(
    &::System::Globalization::DateTimeFormatInfo::set_Calendar)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x5b977d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "set_Calendar", {}, { ::i2c::type_of<::System::Globalization::Calendar*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_OptionalCalendars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Globalization::CalendarId> (::System::Globalization::DateTimeFormatInfo::*)()>(
    &::System::Globalization::DateTimeFormatInfo::get_OptionalCalendars)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5b98054;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_OptionalCalendars", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_EraNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::System::Globalization::DateTimeFormatInfo::*)()>(&::System::Globalization::DateTimeFormatInfo::get_EraNames)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5b98094;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_EraNames", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.GetEraName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Globalization::DateTimeFormatInfo::*)(int32_t)>(&::System::Globalization::DateTimeFormatInfo::GetEraName)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5b980ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "GetEraName", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_AbbreviatedEraNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::System::Globalization::DateTimeFormatInfo::*)()>(&::System::Globalization::DateTimeFormatInfo::get_AbbreviatedEraNames)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5b981c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_AbbreviatedEraNames", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.GetAbbreviatedEraName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Globalization::DateTimeFormatInfo::*)(int32_t)>(&::System::Globalization::DateTimeFormatInfo::GetAbbreviatedEraName)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5b9821c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "GetAbbreviatedEraName", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_AbbreviatedEnglishEraNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::System::Globalization::DateTimeFormatInfo::*)()>(
    &::System::Globalization::DateTimeFormatInfo::get_AbbreviatedEnglishEraNames)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5b98304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_AbbreviatedEnglishEraNames", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_DateSeparator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Globalization::DateTimeFormatInfo::*)()>(&::System::Globalization::DateTimeFormatInfo::get_DateSeparator)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5b9835c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_DateSeparator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_FullDateTimePattern
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Globalization::DateTimeFormatInfo::*)()>(&::System::Globalization::DateTimeFormatInfo::get_FullDateTimePattern)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5b983b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_FullDateTimePattern", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_LongDatePattern
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Globalization::DateTimeFormatInfo::*)()>(&::System::Globalization::DateTimeFormatInfo::get_LongDatePattern)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5b98428;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_LongDatePattern", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_LongTimePattern
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Globalization::DateTimeFormatInfo::*)()>(&::System::Globalization::DateTimeFormatInfo::get_LongTimePattern)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5b98464;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_LongTimePattern", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_MonthDayPattern
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Globalization::DateTimeFormatInfo::*)()>(&::System::Globalization::DateTimeFormatInfo::get_MonthDayPattern)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5b98538;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_MonthDayPattern", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_PMDesignator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Globalization::DateTimeFormatInfo::*)()>(&::System::Globalization::DateTimeFormatInfo::get_PMDesignator)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5b98590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_PMDesignator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_RFC1123Pattern
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Globalization::DateTimeFormatInfo::*)()>(&::System::Globalization::DateTimeFormatInfo::get_RFC1123Pattern)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5b985b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_RFC1123Pattern", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_ShortDatePattern
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Globalization::DateTimeFormatInfo::*)()>(&::System::Globalization::DateTimeFormatInfo::get_ShortDatePattern)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5b985fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_ShortDatePattern", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_ShortTimePattern
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Globalization::DateTimeFormatInfo::*)()>(&::System::Globalization::DateTimeFormatInfo::get_ShortTimePattern)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5b98690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_ShortTimePattern", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_SortableDateTimePattern
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Globalization::DateTimeFormatInfo::*)()>(&::System::Globalization::DateTimeFormatInfo::get_SortableDateTimePattern)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5b9870c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_SortableDateTimePattern", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_GeneralShortTimePattern
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Globalization::DateTimeFormatInfo::*)()>(&::System::Globalization::DateTimeFormatInfo::get_GeneralShortTimePattern)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5b98750;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_GeneralShortTimePattern", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_GeneralLongTimePattern
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Globalization::DateTimeFormatInfo::*)()>(&::System::Globalization::DateTimeFormatInfo::get_GeneralLongTimePattern)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5b987c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_GeneralLongTimePattern", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_DateTimeOffsetPattern
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Globalization::DateTimeFormatInfo::*)()>(&::System::Globalization::DateTimeFormatInfo::get_DateTimeOffsetPattern)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x5b98840;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_DateTimeOffsetPattern", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_TimeSeparator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Globalization::DateTimeFormatInfo::*)()>(&::System::Globalization::DateTimeFormatInfo::get_TimeSeparator)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5b98a00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_TimeSeparator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_UniversalSortableDateTimePattern
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Globalization::DateTimeFormatInfo::*)()>(
    &::System::Globalization::DateTimeFormatInfo::get_UniversalSortableDateTimePattern)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5b98a28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_UniversalSortableDateTimePattern", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_YearMonthPattern
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Globalization::DateTimeFormatInfo::*)()>(&::System::Globalization::DateTimeFormatInfo::get_YearMonthPattern)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5b98a6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_YearMonthPattern", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_AbbreviatedDayNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::System::Globalization::DateTimeFormatInfo::*)()>(&::System::Globalization::DateTimeFormatInfo::get_AbbreviatedDayNames)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5b98b00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_AbbreviatedDayNames", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_DayNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::System::Globalization::DateTimeFormatInfo::*)()>(&::System::Globalization::DateTimeFormatInfo::get_DayNames)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5b98b84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_DayNames", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_AbbreviatedMonthNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::System::Globalization::DateTimeFormatInfo::*)()>(
    &::System::Globalization::DateTimeFormatInfo::get_AbbreviatedMonthNames)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5b98c08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_AbbreviatedMonthNames", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_MonthNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::System::Globalization::DateTimeFormatInfo::*)()>(&::System::Globalization::DateTimeFormatInfo::get_MonthNames)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5b98c8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_MonthNames", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_HasSpacesInMonthNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Globalization::DateTimeFormatInfo::*)()>(&::System::Globalization::DateTimeFormatInfo::get_HasSpacesInMonthNames)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5b98d10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_HasSpacesInMonthNames", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_HasSpacesInDayNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Globalization::DateTimeFormatInfo::*)()>(&::System::Globalization::DateTimeFormatInfo::get_HasSpacesInDayNames)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5b98d50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_HasSpacesInDayNames", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.internalGetMonthName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Globalization::DateTimeFormatInfo::*)(int32_t, ::System::Globalization::MonthNameStyles, bool)>(
    &::System::Globalization::DateTimeFormatInfo::internalGetMonthName)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5b98d78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(),
                                                { "internalGetMonthName", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::MonthNameStyles>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.internalGetGenitiveMonthNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::System::Globalization::DateTimeFormatInfo::*)(bool)>(
    &::System::Globalization::DateTimeFormatInfo::internalGetGenitiveMonthNames)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5b98ed0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "internalGetGenitiveMonthNames", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.internalGetLeapYearMonthNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::System::Globalization::DateTimeFormatInfo::*)()>(
    &::System::Globalization::DateTimeFormatInfo::internalGetLeapYearMonthNames)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5b98f6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "internalGetLeapYearMonthNames", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.GetAbbreviatedDayName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Globalization::DateTimeFormatInfo::*)(::System::DayOfWeek)>(
    &::System::Globalization::DateTimeFormatInfo::GetAbbreviatedDayName)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5b98fc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "GetAbbreviatedDayName", {}, { ::i2c::type_of<::System::DayOfWeek>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.GetCombinedPatterns
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)(::ArrayW<::StringW>, ::ArrayW<::StringW>, ::StringW)>(
    &::System::Globalization::DateTimeFormatInfo::GetCombinedPatterns)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5b990c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(),
                                                { "GetCombinedPatterns", {}, { ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.GetAllDateTimePatterns
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::System::Globalization::DateTimeFormatInfo::*)(char16_t)>(
    &::System::Globalization::DateTimeFormatInfo::GetAllDateTimePatterns)> {
  constexpr static std::size_t size = 0x408;
  constexpr static std::size_t addrs = 0x5b991e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "GetAllDateTimePatterns", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.GetDayName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Globalization::DateTimeFormatInfo::*)(::System::DayOfWeek)>(&::System::Globalization::DateTimeFormatInfo::GetDayName)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5b9986c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "GetDayName", {}, { ::i2c::type_of<::System::DayOfWeek>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.GetAbbreviatedMonthName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Globalization::DateTimeFormatInfo::*)(int32_t)>(&::System::Globalization::DateTimeFormatInfo::GetAbbreviatedMonthName)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5b99968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "GetAbbreviatedMonthName", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.GetMonthName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Globalization::DateTimeFormatInfo::*)(int32_t)>(&::System::Globalization::DateTimeFormatInfo::GetMonthName)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5b99a5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "GetMonthName", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.GetMergedPatterns
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)(::ArrayW<::StringW>, ::StringW)>(&::System::Globalization::DateTimeFormatInfo::GetMergedPatterns)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x5b99b50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(),
                                                                                           { "GetMergedPatterns", {}, { ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_AllYearMonthPatterns
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::System::Globalization::DateTimeFormatInfo::*)()>(
    &::System::Globalization::DateTimeFormatInfo::get_AllYearMonthPatterns)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5b997f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_AllYearMonthPatterns", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_AllShortDatePatterns
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::System::Globalization::DateTimeFormatInfo::*)()>(
    &::System::Globalization::DateTimeFormatInfo::get_AllShortDatePatterns)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5b995ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_AllShortDatePatterns", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_AllShortTimePatterns
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::System::Globalization::DateTimeFormatInfo::*)()>(
    &::System::Globalization::DateTimeFormatInfo::get_AllShortTimePatterns)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5b996dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_AllShortTimePatterns", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_AllLongDatePatterns
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::System::Globalization::DateTimeFormatInfo::*)()>(&::System::Globalization::DateTimeFormatInfo::get_AllLongDatePatterns)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5b99664;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_AllLongDatePatterns", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_AllLongTimePatterns
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::System::Globalization::DateTimeFormatInfo::*)()>(&::System::Globalization::DateTimeFormatInfo::get_AllLongTimePatterns)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5b99768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_AllLongTimePatterns", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_UnclonedYearMonthPatterns
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::System::Globalization::DateTimeFormatInfo::*)()>(
    &::System::Globalization::DateTimeFormatInfo::get_UnclonedYearMonthPatterns)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5b98aa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_UnclonedYearMonthPatterns", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_UnclonedShortDatePatterns
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::System::Globalization::DateTimeFormatInfo::*)()>(
    &::System::Globalization::DateTimeFormatInfo::get_UnclonedShortDatePatterns)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5b98638;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_UnclonedShortDatePatterns", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_UnclonedLongDatePatterns
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::System::Globalization::DateTimeFormatInfo::*)()>(
    &::System::Globalization::DateTimeFormatInfo::get_UnclonedLongDatePatterns)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5b984b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_UnclonedLongDatePatterns", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_UnclonedShortTimePatterns
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::System::Globalization::DateTimeFormatInfo::*)()>(
    &::System::Globalization::DateTimeFormatInfo::get_UnclonedShortTimePatterns)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5b986e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_UnclonedShortTimePatterns", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_UnclonedLongTimePatterns
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::System::Globalization::DateTimeFormatInfo::*)()>(
    &::System::Globalization::DateTimeFormatInfo::get_UnclonedLongTimePatterns)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5b9850c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_UnclonedLongTimePatterns", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_IsReadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Globalization::DateTimeFormatInfo::*)()>(&::System::Globalization::DateTimeFormatInfo::get_IsReadOnly)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5b97f9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_IsReadOnly", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_MonthGenitiveNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::System::Globalization::DateTimeFormatInfo::*)()>(&::System::Globalization::DateTimeFormatInfo::get_MonthGenitiveNames)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5b99ce8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_MonthGenitiveNames", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_FullTimeSpanPositivePattern
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Globalization::DateTimeFormatInfo::*)()>(&::System::Globalization::DateTimeFormatInfo::get_FullTimeSpanPositivePattern)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5b99d68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_FullTimeSpanPositivePattern", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_FullTimeSpanNegativePattern
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Globalization::DateTimeFormatInfo::*)()>(&::System::Globalization::DateTimeFormatInfo::get_FullTimeSpanNegativePattern)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5b99e40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_FullTimeSpanNegativePattern", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_CompareInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::CompareInfo* (::System::Globalization::DateTimeFormatInfo::*)()>(
    &::System::Globalization::DateTimeFormatInfo::get_CompareInfo)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5b99eac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_CompareInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.ValidateStyles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Globalization::DateTimeStyles, ::StringW)>(&::System::Globalization::DateTimeFormatInfo::ValidateStyles)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5b99f50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(),
                                                             { "ValidateStyles", {}, { ::i2c::type_of<::System::Globalization::DateTimeStyles>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_FormatFlags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::DateTimeFormatFlags (::System::Globalization::DateTimeFormatInfo::*)()>(
    &::System::Globalization::DateTimeFormatInfo::get_FormatFlags)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5b98d38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_FormatFlags", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.InitializeFormatFlags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::DateTimeFormatFlags (::System::Globalization::DateTimeFormatInfo::*)()>(
    &::System::Globalization::DateTimeFormatInfo::InitializeFormatFlags)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5b9a020;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "InitializeFormatFlags", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_HasForceTwoDigitYears
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Globalization::DateTimeFormatInfo::*)()>(&::System::Globalization::DateTimeFormatInfo::get_HasForceTwoDigitYears)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5b9a284;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_HasForceTwoDigitYears", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_HasYearMonthAdjustment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Globalization::DateTimeFormatInfo::*)()>(&::System::Globalization::DateTimeFormatInfo::get_HasYearMonthAdjustment)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5b9a2b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_HasYearMonthAdjustment", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.YearMonthAdjustment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Globalization::DateTimeFormatInfo::*)(::by_ref<int32_t>, ::by_ref<int32_t>, bool)>(
    &::System::Globalization::DateTimeFormatInfo::YearMonthAdjustment)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5b9a2e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(),
                                                             { "YearMonthAdjustment", {}, { ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.GetJapaneseCalendarDTFI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::DateTimeFormatInfo* (*)()>(&::System::Globalization::DateTimeFormatInfo::GetJapaneseCalendarDTFI)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x5b9a414;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "GetJapaneseCalendarDTFI", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.GetTaiwanCalendarDTFI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::DateTimeFormatInfo* (*)()>(&::System::Globalization::DateTimeFormatInfo::GetTaiwanCalendarDTFI)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x5b9a5cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "GetTaiwanCalendarDTFI", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.ClearTokenHashTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::DateTimeFormatInfo::*)()>(&::System::Globalization::DateTimeFormatInfo::ClearTokenHashTable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b98084;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "ClearTokenHashTable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.CreateTokenHashTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Globalization::DateTimeFormatInfo_TokenHashValue*> (::System::Globalization::DateTimeFormatInfo::*)()>(
    &::System::Globalization::DateTimeFormatInfo::CreateTokenHashTable)> {
  constexpr static std::size_t size = 0x92c;
  constexpr static std::size_t addrs = 0x5b9a784;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "CreateTokenHashTable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.PopulateSpecialTokenHashTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::DateTimeFormatInfo::*)(::ArrayW<::System::Globalization::DateTimeFormatInfo_TokenHashValue*>, ::by_ref<bool>)>(
    &::System::Globalization::DateTimeFormatInfo::PopulateSpecialTokenHashTable)> {
  constexpr static std::size_t size = 0x930;
  constexpr static std::size_t addrs = 0x5b9b36c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(),
                            { "PopulateSpecialTokenHashTable", {}, { ::i2c::type_of<::ArrayW<::System::Globalization::DateTimeFormatInfo_TokenHashValue*>>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.IsJapaneseCalendar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Globalization::Calendar*)>(&::System::Globalization::DateTimeFormatInfo::IsJapaneseCalendar)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5b9c05c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "IsJapaneseCalendar", {}, { ::i2c::type_of<::System::Globalization::Calendar*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.AddMonthNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::DateTimeFormatInfo::*)(::ArrayW<::System::Globalization::DateTimeFormatInfo_TokenHashValue*>, ::StringW)>(
    &::System::Globalization::DateTimeFormatInfo::AddMonthNames)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5b9bc9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(),
                                                { "AddMonthNames", {}, { ::i2c::type_of<::ArrayW<::System::Globalization::DateTimeFormatInfo_TokenHashValue*>>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.TryParseHebrewNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::__DTString>, ::by_ref<bool>, ::by_ref<int32_t>)>(
    &::System::Globalization::DateTimeFormatInfo::TryParseHebrewNumber)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x5b9c194;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(),
                                         { "TryParseHebrewNumber", {}, { ::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.IsHebrewChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(char16_t)>(&::System::Globalization::DateTimeFormatInfo::IsHebrewChar)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b9c2f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "IsHebrewChar", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.IsAllowedJapaneseTokenFollowedByNonSpaceLetter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Globalization::DateTimeFormatInfo::*)(::StringW, char16_t)>(
    &::System::Globalization::DateTimeFormatInfo::IsAllowedJapaneseTokenFollowedByNonSpaceLetter)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5b9c30c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(),
                                                             { "IsAllowedJapaneseTokenFollowedByNonSpaceLetter", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.Tokenize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Globalization::DateTimeFormatInfo::*)(::System::TokenType, ::by_ref<::System::TokenType>, ::by_ref<int32_t>,
                                                                                                             ::by_ref<::System::__DTString>)>(&::System::Globalization::DateTimeFormatInfo::Tokenize)> {
  constexpr static std::size_t size = 0x5fc;
  constexpr static std::size_t addrs = 0x5b9c424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(),
                                                                                           { "Tokenize",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::TokenType>(), ::i2c::type_of<::by_ref<::System::TokenType>>(),
                                                                                               ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::System::__DTString>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.InsertAtCurrentHashNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::DateTimeFormatInfo::*)(::ArrayW<::System::Globalization::DateTimeFormatInfo_TokenHashValue*>, ::StringW, char16_t,
                                                                                                             ::System::TokenType, int32_t, int32_t, int32_t, int32_t)>(
    &::System::Globalization::DateTimeFormatInfo::InsertAtCurrentHashNode)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5b9ca20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(),
                                         { "InsertAtCurrentHashNode",
                                           {},
                                           { ::i2c::type_of<::ArrayW<::System::Globalization::DateTimeFormatInfo_TokenHashValue*>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<char16_t>(),
                                             ::i2c::type_of<::System::TokenType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.InsertHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::DateTimeFormatInfo::*)(::ArrayW<::System::Globalization::DateTimeFormatInfo_TokenHashValue*>, ::StringW,
                                                                                                             ::System::TokenType, int32_t)>(&::System::Globalization::DateTimeFormatInfo::InsertHash)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x5b9b0b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(),
                                                                                           { "InsertHash",
                                                                                             {},
                                                                                             { ::i2c::type_of<::ArrayW<::System::Globalization::DateTimeFormatInfo_TokenHashValue*>>(),
                                                                                               ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::TokenType>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.CompareStringIgnoreCaseOptimized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Globalization::DateTimeFormatInfo::*)(::StringW, int32_t, int32_t, ::StringW, int32_t, int32_t)>(
    &::System::Globalization::DateTimeFormatInfo::CompareStringIgnoreCaseOptimized)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5b9cbcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "CompareStringIgnoreCaseOptimized",
                                                                                                            {},
                                                                                                            { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                                              ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Globalization::CultureData*& System::Globalization::DateTimeFormatInfo::__cordl_internal_get__cultureData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cultureData;
}
constexpr ::System::Globalization::CultureData* const& System::Globalization::DateTimeFormatInfo::__cordl_internal_get__cultureData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cultureData;
}
constexpr void System::Globalization::DateTimeFormatInfo::__cordl_internal_set__cultureData(::System::Globalization::CultureData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cultureData = value;
}
constexpr ::StringW& System::Globalization::DateTimeFormatInfo::__cordl_internal_get__name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____name;
}
constexpr ::StringW const& System::Globalization::DateTimeFormatInfo::__cordl_internal_get__name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____name;
}
constexpr void System::Globalization::DateTimeFormatInfo::__cordl_internal_set__name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____name = value;
}
constexpr ::StringW& System::Globalization::DateTimeFormatInfo::__cordl_internal_get__langName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____langName;
}
constexpr ::StringW const& System::Globalization::DateTimeFormatInfo::__cordl_internal_get__langName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____langName;
}
constexpr void System::Globalization::DateTimeFormatInfo::__cordl_internal_set__langName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____langName = value;
}
constexpr ::System::Globalization::CompareInfo*& System::Globalization::DateTimeFormatInfo::__cordl_internal_get__compareInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____compareInfo;
}
constexpr ::System::Globalization::CompareInfo* const& System::Globalization::DateTimeFormatInfo::__cordl_internal_get__compareInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____compareInfo;
}
constexpr void System::Globalization::DateTimeFormatInfo::__cordl_internal_set__compareInfo(::System::Globalization::CompareInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____compareInfo = value;
}
constexpr ::System::Globalization::CultureInfo*& System::Globalization::DateTimeFormatInfo::__cordl_internal_get__cultureInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cultureInfo;
}
constexpr ::System::Globalization::CultureInfo* const& System::Globalization::DateTimeFormatInfo::__cordl_internal_get__cultureInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cultureInfo;
}
constexpr void System::Globalization::DateTimeFormatInfo::__cordl_internal_set__cultureInfo(::System::Globalization::CultureInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cultureInfo = value;
}
constexpr ::StringW& System::Globalization::DateTimeFormatInfo::__cordl_internal_get_amDesignator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___amDesignator;
}
constexpr ::StringW const& System::Globalization::DateTimeFormatInfo::__cordl_internal_get_amDesignator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___amDesignator;
}
constexpr void System::Globalization::DateTimeFormatInfo::__cordl_internal_set_amDesignator(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___amDesignator = value;
}
constexpr ::StringW& System::Globalization::DateTimeFormatInfo::__cordl_internal_get_pmDesignator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pmDesignator;
}
constexpr ::StringW const& System::Globalization::DateTimeFormatInfo::__cordl_internal_get_pmDesignator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pmDesignator;
}
constexpr void System::Globalization::DateTimeFormatInfo::__cordl_internal_set_pmDesignator(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pmDesignator = value;
}
constexpr ::StringW& System::Globalization::DateTimeFormatInfo::__cordl_internal_get_dateSeparator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dateSeparator;
}
constexpr ::StringW const& System::Globalization::DateTimeFormatInfo::__cordl_internal_get_dateSeparator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dateSeparator;
}
constexpr void System::Globalization::DateTimeFormatInfo::__cordl_internal_set_dateSeparator(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dateSeparator = value;
}
constexpr ::StringW& System::Globalization::DateTimeFormatInfo::__cordl_internal_get_generalShortTimePattern() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___generalShortTimePattern;
}
constexpr ::StringW const& System::Globalization::DateTimeFormatInfo::__cordl_internal_get_generalShortTimePattern() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___generalShortTimePattern;
}
constexpr void System::Globalization::DateTimeFormatInfo::__cordl_internal_set_generalShortTimePattern(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___generalShortTimePattern = value;
}
constexpr ::StringW& System::Globalization::DateTimeFormatInfo::__cordl_internal_get_generalLongTimePattern() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___generalLongTimePattern;
}
constexpr ::StringW const& System::Globalization::DateTimeFormatInfo::__cordl_internal_get_generalLongTimePattern() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___generalLongTimePattern;
}
constexpr void System::Globalization::DateTimeFormatInfo::__cordl_internal_set_generalLongTimePattern(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___generalLongTimePattern = value;
}
constexpr ::StringW& System::Globalization::DateTimeFormatInfo::__cordl_internal_get_timeSeparator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___timeSeparator;
}
constexpr ::StringW const& System::Globalization::DateTimeFormatInfo::__cordl_internal_get_timeSeparator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___timeSeparator;
}
constexpr void System::Globalization::DateTimeFormatInfo::__cordl_internal_set_timeSeparator(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___timeSeparator = value;
}
constexpr ::StringW& System::Globalization::DateTimeFormatInfo::__cordl_internal_get_monthDayPattern() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___monthDayPattern;
}
constexpr ::StringW const& System::Globalization::DateTimeFormatInfo::__cordl_internal_get_monthDayPattern() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___monthDayPattern;
}
constexpr void System::Globalization::DateTimeFormatInfo::__cordl_internal_set_monthDayPattern(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___monthDayPattern = value;
}
constexpr ::StringW& System::Globalization::DateTimeFormatInfo::__cordl_internal_get_dateTimeOffsetPattern() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dateTimeOffsetPattern;
}
constexpr ::StringW const& System::Globalization::DateTimeFormatInfo::__cordl_internal_get_dateTimeOffsetPattern() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dateTimeOffsetPattern;
}
constexpr void System::Globalization::DateTimeFormatInfo::__cordl_internal_set_dateTimeOffsetPattern(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dateTimeOffsetPattern = value;
}
constexpr ::System::Globalization::Calendar*& System::Globalization::DateTimeFormatInfo::__cordl_internal_get_calendar() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___calendar;
}
constexpr ::System::Globalization::Calendar* const& System::Globalization::DateTimeFormatInfo::__cordl_internal_get_calendar() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___calendar;
}
constexpr void System::Globalization::DateTimeFormatInfo::__cordl_internal_set_calendar(::System::Globalization::Calendar* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___calendar = value;
}
constexpr int32_t& System::Globalization::DateTimeFormatInfo::__cordl_internal_get_firstDayOfWeek() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___firstDayOfWeek;
}
constexpr int32_t const& System::Globalization::DateTimeFormatInfo::__cordl_internal_get_firstDayOfWeek() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___firstDayOfWeek;
}
constexpr void System::Globalization::DateTimeFormatInfo::__cordl_internal_set_firstDayOfWeek(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___firstDayOfWeek = value;
}
constexpr int32_t& System::Globalization::DateTimeFormatInfo::__cordl_internal_get_calendarWeekRule() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___calendarWeekRule;
}
constexpr int32_t const& System::Globalization::DateTimeFormatInfo::__cordl_internal_get_calendarWeekRule() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___calendarWeekRule;
}
constexpr void System::Globalization::DateTimeFormatInfo::__cordl_internal_set_calendarWeekRule(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___calendarWeekRule = value;
}
constexpr ::StringW& System::Globalization::DateTimeFormatInfo::__cordl_internal_get_fullDateTimePattern() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fullDateTimePattern;
}
constexpr ::StringW const& System::Globalization::DateTimeFormatInfo::__cordl_internal_get_fullDateTimePattern() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fullDateTimePattern;
}
constexpr void System::Globalization::DateTimeFormatInfo::__cordl_internal_set_fullDateTimePattern(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fullDateTimePattern = value;
}
constexpr ::ArrayW<::StringW>& System::Globalization::DateTimeFormatInfo::__cordl_internal_get_abbreviatedDayNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___abbreviatedDayNames;
}
constexpr ::ArrayW<::StringW> const& System::Globalization::DateTimeFormatInfo::__cordl_internal_get_abbreviatedDayNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___abbreviatedDayNames;
}
constexpr void System::Globalization::DateTimeFormatInfo::__cordl_internal_set_abbreviatedDayNames(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___abbreviatedDayNames = value;
}
constexpr ::ArrayW<::StringW>& System::Globalization::DateTimeFormatInfo::__cordl_internal_get_m_superShortDayNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_superShortDayNames;
}
constexpr ::ArrayW<::StringW> const& System::Globalization::DateTimeFormatInfo::__cordl_internal_get_m_superShortDayNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_superShortDayNames;
}
constexpr void System::Globalization::DateTimeFormatInfo::__cordl_internal_set_m_superShortDayNames(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_superShortDayNames = value;
}
constexpr ::ArrayW<::StringW>& System::Globalization::DateTimeFormatInfo::__cordl_internal_get_dayNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dayNames;
}
constexpr ::ArrayW<::StringW> const& System::Globalization::DateTimeFormatInfo::__cordl_internal_get_dayNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dayNames;
}
constexpr void System::Globalization::DateTimeFormatInfo::__cordl_internal_set_dayNames(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dayNames = value;
}
constexpr ::ArrayW<::StringW>& System::Globalization::DateTimeFormatInfo::__cordl_internal_get_abbreviatedMonthNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___abbreviatedMonthNames;
}
constexpr ::ArrayW<::StringW> const& System::Globalization::DateTimeFormatInfo::__cordl_internal_get_abbreviatedMonthNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___abbreviatedMonthNames;
}
constexpr void System::Globalization::DateTimeFormatInfo::__cordl_internal_set_abbreviatedMonthNames(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___abbreviatedMonthNames = value;
}
constexpr ::ArrayW<::StringW>& System::Globalization::DateTimeFormatInfo::__cordl_internal_get_monthNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___monthNames;
}
constexpr ::ArrayW<::StringW> const& System::Globalization::DateTimeFormatInfo::__cordl_internal_get_monthNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___monthNames;
}
constexpr void System::Globalization::DateTimeFormatInfo::__cordl_internal_set_monthNames(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___monthNames = value;
}
constexpr ::ArrayW<::StringW>& System::Globalization::DateTimeFormatInfo::__cordl_internal_get_genitiveMonthNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___genitiveMonthNames;
}
constexpr ::ArrayW<::StringW> const& System::Globalization::DateTimeFormatInfo::__cordl_internal_get_genitiveMonthNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___genitiveMonthNames;
}
constexpr void System::Globalization::DateTimeFormatInfo::__cordl_internal_set_genitiveMonthNames(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___genitiveMonthNames = value;
}
constexpr ::ArrayW<::StringW>& System::Globalization::DateTimeFormatInfo::__cordl_internal_get_m_genitiveAbbreviatedMonthNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_genitiveAbbreviatedMonthNames;
}
constexpr ::ArrayW<::StringW> const& System::Globalization::DateTimeFormatInfo::__cordl_internal_get_m_genitiveAbbreviatedMonthNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_genitiveAbbreviatedMonthNames;
}
constexpr void System::Globalization::DateTimeFormatInfo::__cordl_internal_set_m_genitiveAbbreviatedMonthNames(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_genitiveAbbreviatedMonthNames = value;
}
constexpr ::ArrayW<::StringW>& System::Globalization::DateTimeFormatInfo::__cordl_internal_get_leapYearMonthNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leapYearMonthNames;
}
constexpr ::ArrayW<::StringW> const& System::Globalization::DateTimeFormatInfo::__cordl_internal_get_leapYearMonthNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leapYearMonthNames;
}
constexpr void System::Globalization::DateTimeFormatInfo::__cordl_internal_set_leapYearMonthNames(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___leapYearMonthNames = value;
}
constexpr ::StringW& System::Globalization::DateTimeFormatInfo::__cordl_internal_get_longDatePattern() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___longDatePattern;
}
constexpr ::StringW const& System::Globalization::DateTimeFormatInfo::__cordl_internal_get_longDatePattern() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___longDatePattern;
}
constexpr void System::Globalization::DateTimeFormatInfo::__cordl_internal_set_longDatePattern(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___longDatePattern = value;
}
constexpr ::StringW& System::Globalization::DateTimeFormatInfo::__cordl_internal_get_shortDatePattern() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shortDatePattern;
}
constexpr ::StringW const& System::Globalization::DateTimeFormatInfo::__cordl_internal_get_shortDatePattern() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shortDatePattern;
}
constexpr void System::Globalization::DateTimeFormatInfo::__cordl_internal_set_shortDatePattern(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___shortDatePattern = value;
}
constexpr ::StringW& System::Globalization::DateTimeFormatInfo::__cordl_internal_get_yearMonthPattern() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___yearMonthPattern;
}
constexpr ::StringW const& System::Globalization::DateTimeFormatInfo::__cordl_internal_get_yearMonthPattern() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___yearMonthPattern;
}
constexpr void System::Globalization::DateTimeFormatInfo::__cordl_internal_set_yearMonthPattern(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___yearMonthPattern = value;
}
constexpr ::StringW& System::Globalization::DateTimeFormatInfo::__cordl_internal_get_longTimePattern() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___longTimePattern;
}
constexpr ::StringW const& System::Globalization::DateTimeFormatInfo::__cordl_internal_get_longTimePattern() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___longTimePattern;
}
constexpr void System::Globalization::DateTimeFormatInfo::__cordl_internal_set_longTimePattern(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___longTimePattern = value;
}
constexpr ::StringW& System::Globalization::DateTimeFormatInfo::__cordl_internal_get_shortTimePattern() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shortTimePattern;
}
constexpr ::StringW const& System::Globalization::DateTimeFormatInfo::__cordl_internal_get_shortTimePattern() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shortTimePattern;
}
constexpr void System::Globalization::DateTimeFormatInfo::__cordl_internal_set_shortTimePattern(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___shortTimePattern = value;
}
constexpr ::ArrayW<::StringW>& System::Globalization::DateTimeFormatInfo::__cordl_internal_get_allYearMonthPatterns() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allYearMonthPatterns;
}
constexpr ::ArrayW<::StringW> const& System::Globalization::DateTimeFormatInfo::__cordl_internal_get_allYearMonthPatterns() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allYearMonthPatterns;
}
constexpr void System::Globalization::DateTimeFormatInfo::__cordl_internal_set_allYearMonthPatterns(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___allYearMonthPatterns = value;
}
constexpr ::ArrayW<::StringW>& System::Globalization::DateTimeFormatInfo::__cordl_internal_get_allShortDatePatterns() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allShortDatePatterns;
}
constexpr ::ArrayW<::StringW> const& System::Globalization::DateTimeFormatInfo::__cordl_internal_get_allShortDatePatterns() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allShortDatePatterns;
}
constexpr void System::Globalization::DateTimeFormatInfo::__cordl_internal_set_allShortDatePatterns(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___allShortDatePatterns = value;
}
constexpr ::ArrayW<::StringW>& System::Globalization::DateTimeFormatInfo::__cordl_internal_get_allLongDatePatterns() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allLongDatePatterns;
}
constexpr ::ArrayW<::StringW> const& System::Globalization::DateTimeFormatInfo::__cordl_internal_get_allLongDatePatterns() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allLongDatePatterns;
}
constexpr void System::Globalization::DateTimeFormatInfo::__cordl_internal_set_allLongDatePatterns(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___allLongDatePatterns = value;
}
constexpr ::ArrayW<::StringW>& System::Globalization::DateTimeFormatInfo::__cordl_internal_get_allShortTimePatterns() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allShortTimePatterns;
}
constexpr ::ArrayW<::StringW> const& System::Globalization::DateTimeFormatInfo::__cordl_internal_get_allShortTimePatterns() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allShortTimePatterns;
}
constexpr void System::Globalization::DateTimeFormatInfo::__cordl_internal_set_allShortTimePatterns(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___allShortTimePatterns = value;
}
constexpr ::ArrayW<::StringW>& System::Globalization::DateTimeFormatInfo::__cordl_internal_get_allLongTimePatterns() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allLongTimePatterns;
}
constexpr ::ArrayW<::StringW> const& System::Globalization::DateTimeFormatInfo::__cordl_internal_get_allLongTimePatterns() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allLongTimePatterns;
}
constexpr void System::Globalization::DateTimeFormatInfo::__cordl_internal_set_allLongTimePatterns(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___allLongTimePatterns = value;
}
constexpr ::ArrayW<::StringW>& System::Globalization::DateTimeFormatInfo::__cordl_internal_get_m_eraNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_eraNames;
}
constexpr ::ArrayW<::StringW> const& System::Globalization::DateTimeFormatInfo::__cordl_internal_get_m_eraNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_eraNames;
}
constexpr void System::Globalization::DateTimeFormatInfo::__cordl_internal_set_m_eraNames(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_eraNames = value;
}
constexpr ::ArrayW<::StringW>& System::Globalization::DateTimeFormatInfo::__cordl_internal_get_m_abbrevEraNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_abbrevEraNames;
}
constexpr ::ArrayW<::StringW> const& System::Globalization::DateTimeFormatInfo::__cordl_internal_get_m_abbrevEraNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_abbrevEraNames;
}
constexpr void System::Globalization::DateTimeFormatInfo::__cordl_internal_set_m_abbrevEraNames(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_abbrevEraNames = value;
}
constexpr ::ArrayW<::StringW>& System::Globalization::DateTimeFormatInfo::__cordl_internal_get_m_abbrevEnglishEraNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_abbrevEnglishEraNames;
}
constexpr ::ArrayW<::StringW> const& System::Globalization::DateTimeFormatInfo::__cordl_internal_get_m_abbrevEnglishEraNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_abbrevEnglishEraNames;
}
constexpr void System::Globalization::DateTimeFormatInfo::__cordl_internal_set_m_abbrevEnglishEraNames(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_abbrevEnglishEraNames = value;
}
constexpr ::ArrayW<::System::Globalization::CalendarId>& System::Globalization::DateTimeFormatInfo::__cordl_internal_get_optionalCalendars() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___optionalCalendars;
}
constexpr ::ArrayW<::System::Globalization::CalendarId> const& System::Globalization::DateTimeFormatInfo::__cordl_internal_get_optionalCalendars() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___optionalCalendars;
}
constexpr void System::Globalization::DateTimeFormatInfo::__cordl_internal_set_optionalCalendars(::ArrayW<::System::Globalization::CalendarId> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___optionalCalendars = value;
}
constexpr bool& System::Globalization::DateTimeFormatInfo::__cordl_internal_get__isReadOnly() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isReadOnly;
}
constexpr bool const& System::Globalization::DateTimeFormatInfo::__cordl_internal_get__isReadOnly() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isReadOnly;
}
constexpr void System::Globalization::DateTimeFormatInfo::__cordl_internal_set__isReadOnly(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isReadOnly = value;
}
constexpr ::System::Globalization::DateTimeFormatFlags& System::Globalization::DateTimeFormatInfo::__cordl_internal_get_formatFlags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___formatFlags;
}
constexpr ::System::Globalization::DateTimeFormatFlags const& System::Globalization::DateTimeFormatInfo::__cordl_internal_get_formatFlags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___formatFlags;
}
constexpr void System::Globalization::DateTimeFormatInfo::__cordl_internal_set_formatFlags(::System::Globalization::DateTimeFormatFlags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___formatFlags = value;
}
constexpr ::StringW& System::Globalization::DateTimeFormatInfo::__cordl_internal_get__fullTimeSpanPositivePattern() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fullTimeSpanPositivePattern;
}
constexpr ::StringW const& System::Globalization::DateTimeFormatInfo::__cordl_internal_get__fullTimeSpanPositivePattern() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fullTimeSpanPositivePattern;
}
constexpr void System::Globalization::DateTimeFormatInfo::__cordl_internal_set__fullTimeSpanPositivePattern(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fullTimeSpanPositivePattern = value;
}
constexpr ::StringW& System::Globalization::DateTimeFormatInfo::__cordl_internal_get__fullTimeSpanNegativePattern() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fullTimeSpanNegativePattern;
}
constexpr ::StringW const& System::Globalization::DateTimeFormatInfo::__cordl_internal_get__fullTimeSpanNegativePattern() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fullTimeSpanNegativePattern;
}
constexpr void System::Globalization::DateTimeFormatInfo::__cordl_internal_set__fullTimeSpanNegativePattern(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fullTimeSpanNegativePattern = value;
}
constexpr ::ArrayW<::System::Globalization::DateTimeFormatInfo_TokenHashValue*>& System::Globalization::DateTimeFormatInfo::__cordl_internal_get__dtfiTokenHash() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dtfiTokenHash;
}
constexpr ::ArrayW<::System::Globalization::DateTimeFormatInfo_TokenHashValue*> const& System::Globalization::DateTimeFormatInfo::__cordl_internal_get__dtfiTokenHash() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dtfiTokenHash;
}
constexpr void System::Globalization::DateTimeFormatInfo::__cordl_internal_set__dtfiTokenHash(::ArrayW<::System::Globalization::DateTimeFormatInfo_TokenHashValue*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dtfiTokenHash = value;
}
inline void System::Globalization::DateTimeFormatInfo::setStaticF_s_invariantInfo(::System::Globalization::DateTimeFormatInfo* value) {
  ::cordl_internals::setStaticField<::System::Globalization::DateTimeFormatInfo*, "s_invariantInfo", ::System::Globalization::DateTimeFormatInfo*>(
      std::forward<::System::Globalization::DateTimeFormatInfo*>(value));
}
inline ::System::Globalization::DateTimeFormatInfo* System::Globalization::DateTimeFormatInfo::getStaticF_s_invariantInfo() {
  return ::cordl_internals::getStaticField<::System::Globalization::DateTimeFormatInfo*, "s_invariantInfo", ::System::Globalization::DateTimeFormatInfo*>();
}
inline void System::Globalization::DateTimeFormatInfo::setStaticF_s_monthSpaces(::ArrayW<char16_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<char16_t>, "s_monthSpaces", ::System::Globalization::DateTimeFormatInfo*>(std::forward<::ArrayW<char16_t>>(value));
}
inline ::ArrayW<char16_t> System::Globalization::DateTimeFormatInfo::getStaticF_s_monthSpaces() {
  return ::cordl_internals::getStaticField<::ArrayW<char16_t>, "s_monthSpaces", ::System::Globalization::DateTimeFormatInfo*>();
}
inline void System::Globalization::DateTimeFormatInfo::setStaticF_s_jajpDTFI(::System::Globalization::DateTimeFormatInfo* value) {
  ::cordl_internals::setStaticField<::System::Globalization::DateTimeFormatInfo*, "s_jajpDTFI", ::System::Globalization::DateTimeFormatInfo*>(
      std::forward<::System::Globalization::DateTimeFormatInfo*>(value));
}
inline ::System::Globalization::DateTimeFormatInfo* System::Globalization::DateTimeFormatInfo::getStaticF_s_jajpDTFI() {
  return ::cordl_internals::getStaticField<::System::Globalization::DateTimeFormatInfo*, "s_jajpDTFI", ::System::Globalization::DateTimeFormatInfo*>();
}
inline void System::Globalization::DateTimeFormatInfo::setStaticF_s_zhtwDTFI(::System::Globalization::DateTimeFormatInfo* value) {
  ::cordl_internals::setStaticField<::System::Globalization::DateTimeFormatInfo*, "s_zhtwDTFI", ::System::Globalization::DateTimeFormatInfo*>(
      std::forward<::System::Globalization::DateTimeFormatInfo*>(value));
}
inline ::System::Globalization::DateTimeFormatInfo* System::Globalization::DateTimeFormatInfo::getStaticF_s_zhtwDTFI() {
  return ::cordl_internals::getStaticField<::System::Globalization::DateTimeFormatInfo*, "s_zhtwDTFI", ::System::Globalization::DateTimeFormatInfo*>();
}
inline ::StringW System::Globalization::DateTimeFormatInfo::get_CultureName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_CultureName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Globalization::CultureInfo* System::Globalization::DateTimeFormatInfo::get_Culture() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_Culture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::CultureInfo*>(this, ___internal_method);
}
inline ::StringW System::Globalization::DateTimeFormatInfo::get_LanguageName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_LanguageName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::ArrayW<::StringW> System::Globalization::DateTimeFormatInfo::internalGetAbbreviatedDayOfWeekNames() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "internalGetAbbreviatedDayOfWeekNames", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline ::ArrayW<::StringW> System::Globalization::DateTimeFormatInfo::internalGetAbbreviatedDayOfWeekNamesCore() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "internalGetAbbreviatedDayOfWeekNamesCore", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline ::ArrayW<::StringW> System::Globalization::DateTimeFormatInfo::internalGetDayOfWeekNames() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "internalGetDayOfWeekNames", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline ::ArrayW<::StringW> System::Globalization::DateTimeFormatInfo::internalGetDayOfWeekNamesCore() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "internalGetDayOfWeekNamesCore", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline ::ArrayW<::StringW> System::Globalization::DateTimeFormatInfo::internalGetAbbreviatedMonthNames() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "internalGetAbbreviatedMonthNames", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline ::ArrayW<::StringW> System::Globalization::DateTimeFormatInfo::internalGetAbbreviatedMonthNamesCore() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "internalGetAbbreviatedMonthNamesCore", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline ::ArrayW<::StringW> System::Globalization::DateTimeFormatInfo::internalGetMonthNames() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "internalGetMonthNames", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline ::ArrayW<::StringW> System::Globalization::DateTimeFormatInfo::internalGetMonthNamesCore() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "internalGetMonthNamesCore", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline void System::Globalization::DateTimeFormatInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Globalization::DateTimeFormatInfo::_ctor(::System::Globalization::CultureData* cultureData, ::System::Globalization::Calendar* cal) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Globalization::CultureData*>(), ::i2c::type_of<::System::Globalization::Calendar*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cultureData, cal);
}
inline void System::Globalization::DateTimeFormatInfo::InitializeOverridableProperties(::System::Globalization::CultureData* cultureData, int32_t calendarId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(),
                                                           { "InitializeOverridableProperties", {}, { ::i2c::type_of<::System::Globalization::CultureData*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cultureData, calendarId);
}
inline ::System::Globalization::DateTimeFormatInfo* System::Globalization::DateTimeFormatInfo::get_InvariantInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_InvariantInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::DateTimeFormatInfo*>(nullptr, ___internal_method);
}
inline ::System::Globalization::DateTimeFormatInfo* System::Globalization::DateTimeFormatInfo::get_CurrentInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_CurrentInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::DateTimeFormatInfo*>(nullptr, ___internal_method);
}
inline ::System::Globalization::DateTimeFormatInfo* System::Globalization::DateTimeFormatInfo::GetInstance(::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "GetInstance", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::DateTimeFormatInfo*>(nullptr, ___internal_method, provider);
}
inline ::System::Object* System::Globalization::DateTimeFormatInfo::GetFormat(::System::Type* formatType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "GetFormat", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, formatType);
}
inline ::System::Object* System::Globalization::DateTimeFormatInfo::Clone() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "Clone", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::StringW System::Globalization::DateTimeFormatInfo::get_AMDesignator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_AMDesignator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Globalization::Calendar* System::Globalization::DateTimeFormatInfo::get_Calendar() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_Calendar", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::Calendar*>(this, ___internal_method);
}
inline void System::Globalization::DateTimeFormatInfo::set_Calendar(::System::Globalization::Calendar* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "set_Calendar", {}, { ::i2c::type_of<::System::Globalization::Calendar*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::System::Globalization::CalendarId> System::Globalization::DateTimeFormatInfo::get_OptionalCalendars() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_OptionalCalendars", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Globalization::CalendarId>>(this, ___internal_method);
}
inline ::ArrayW<::StringW> System::Globalization::DateTimeFormatInfo::get_EraNames() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_EraNames", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline ::StringW System::Globalization::DateTimeFormatInfo::GetEraName(int32_t era) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "GetEraName", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, era);
}
inline ::ArrayW<::StringW> System::Globalization::DateTimeFormatInfo::get_AbbreviatedEraNames() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_AbbreviatedEraNames", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline ::StringW System::Globalization::DateTimeFormatInfo::GetAbbreviatedEraName(int32_t era) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "GetAbbreviatedEraName", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, era);
}
inline ::ArrayW<::StringW> System::Globalization::DateTimeFormatInfo::get_AbbreviatedEnglishEraNames() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_AbbreviatedEnglishEraNames", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline ::StringW System::Globalization::DateTimeFormatInfo::get_DateSeparator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_DateSeparator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Globalization::DateTimeFormatInfo::get_FullDateTimePattern() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_FullDateTimePattern", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Globalization::DateTimeFormatInfo::get_LongDatePattern() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_LongDatePattern", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Globalization::DateTimeFormatInfo::get_LongTimePattern() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_LongTimePattern", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Globalization::DateTimeFormatInfo::get_MonthDayPattern() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_MonthDayPattern", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Globalization::DateTimeFormatInfo::get_PMDesignator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_PMDesignator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Globalization::DateTimeFormatInfo::get_RFC1123Pattern() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_RFC1123Pattern", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Globalization::DateTimeFormatInfo::get_ShortDatePattern() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_ShortDatePattern", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Globalization::DateTimeFormatInfo::get_ShortTimePattern() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_ShortTimePattern", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Globalization::DateTimeFormatInfo::get_SortableDateTimePattern() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_SortableDateTimePattern", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Globalization::DateTimeFormatInfo::get_GeneralShortTimePattern() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_GeneralShortTimePattern", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Globalization::DateTimeFormatInfo::get_GeneralLongTimePattern() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_GeneralLongTimePattern", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Globalization::DateTimeFormatInfo::get_DateTimeOffsetPattern() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_DateTimeOffsetPattern", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Globalization::DateTimeFormatInfo::get_TimeSeparator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_TimeSeparator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Globalization::DateTimeFormatInfo::get_UniversalSortableDateTimePattern() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_UniversalSortableDateTimePattern", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Globalization::DateTimeFormatInfo::get_YearMonthPattern() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_YearMonthPattern", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::ArrayW<::StringW> System::Globalization::DateTimeFormatInfo::get_AbbreviatedDayNames() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_AbbreviatedDayNames", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline ::ArrayW<::StringW> System::Globalization::DateTimeFormatInfo::get_DayNames() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_DayNames", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline ::ArrayW<::StringW> System::Globalization::DateTimeFormatInfo::get_AbbreviatedMonthNames() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_AbbreviatedMonthNames", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline ::ArrayW<::StringW> System::Globalization::DateTimeFormatInfo::get_MonthNames() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_MonthNames", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline bool System::Globalization::DateTimeFormatInfo::get_HasSpacesInMonthNames() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_HasSpacesInMonthNames", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Globalization::DateTimeFormatInfo::get_HasSpacesInDayNames() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_HasSpacesInDayNames", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW System::Globalization::DateTimeFormatInfo::internalGetMonthName(int32_t month, ::System::Globalization::MonthNameStyles style, bool abbreviated) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(),
                                              { "internalGetMonthName", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::MonthNameStyles>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, month, style, abbreviated);
}
inline ::ArrayW<::StringW> System::Globalization::DateTimeFormatInfo::internalGetGenitiveMonthNames(bool abbreviated) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "internalGetGenitiveMonthNames", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method, abbreviated);
}
inline ::ArrayW<::StringW> System::Globalization::DateTimeFormatInfo::internalGetLeapYearMonthNames() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "internalGetLeapYearMonthNames", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline ::StringW System::Globalization::DateTimeFormatInfo::GetAbbreviatedDayName(::System::DayOfWeek dayofweek) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "GetAbbreviatedDayName", {}, { ::i2c::type_of<::System::DayOfWeek>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, dayofweek);
}
inline ::ArrayW<::StringW> System::Globalization::DateTimeFormatInfo::GetCombinedPatterns(::ArrayW<::StringW> patterns1, ::ArrayW<::StringW> patterns2, ::StringW connectString) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(),
                                              { "GetCombinedPatterns", {}, { ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method, patterns1, patterns2, connectString);
}
inline ::ArrayW<::StringW> System::Globalization::DateTimeFormatInfo::GetAllDateTimePatterns(char16_t format) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "GetAllDateTimePatterns", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method, format);
}
inline ::StringW System::Globalization::DateTimeFormatInfo::GetDayName(::System::DayOfWeek dayofweek) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "GetDayName", {}, { ::i2c::type_of<::System::DayOfWeek>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, dayofweek);
}
inline ::StringW System::Globalization::DateTimeFormatInfo::GetAbbreviatedMonthName(int32_t month) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "GetAbbreviatedMonthName", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, month);
}
inline ::StringW System::Globalization::DateTimeFormatInfo::GetMonthName(int32_t month) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "GetMonthName", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, month);
}
inline ::ArrayW<::StringW> System::Globalization::DateTimeFormatInfo::GetMergedPatterns(::ArrayW<::StringW> patterns, ::StringW defaultPattern) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(),
                                                                                         { "GetMergedPatterns", {}, { ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method, patterns, defaultPattern);
}
inline ::ArrayW<::StringW> System::Globalization::DateTimeFormatInfo::get_AllYearMonthPatterns() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_AllYearMonthPatterns", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline ::ArrayW<::StringW> System::Globalization::DateTimeFormatInfo::get_AllShortDatePatterns() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_AllShortDatePatterns", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline ::ArrayW<::StringW> System::Globalization::DateTimeFormatInfo::get_AllShortTimePatterns() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_AllShortTimePatterns", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline ::ArrayW<::StringW> System::Globalization::DateTimeFormatInfo::get_AllLongDatePatterns() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_AllLongDatePatterns", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline ::ArrayW<::StringW> System::Globalization::DateTimeFormatInfo::get_AllLongTimePatterns() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_AllLongTimePatterns", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline ::ArrayW<::StringW> System::Globalization::DateTimeFormatInfo::get_UnclonedYearMonthPatterns() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_UnclonedYearMonthPatterns", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline ::ArrayW<::StringW> System::Globalization::DateTimeFormatInfo::get_UnclonedShortDatePatterns() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_UnclonedShortDatePatterns", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline ::ArrayW<::StringW> System::Globalization::DateTimeFormatInfo::get_UnclonedLongDatePatterns() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_UnclonedLongDatePatterns", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline ::ArrayW<::StringW> System::Globalization::DateTimeFormatInfo::get_UnclonedShortTimePatterns() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_UnclonedShortTimePatterns", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline ::ArrayW<::StringW> System::Globalization::DateTimeFormatInfo::get_UnclonedLongTimePatterns() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_UnclonedLongTimePatterns", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline bool System::Globalization::DateTimeFormatInfo::get_IsReadOnly() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_IsReadOnly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::ArrayW<::StringW> System::Globalization::DateTimeFormatInfo::get_MonthGenitiveNames() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_MonthGenitiveNames", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline ::StringW System::Globalization::DateTimeFormatInfo::get_FullTimeSpanPositivePattern() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_FullTimeSpanPositivePattern", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Globalization::DateTimeFormatInfo::get_FullTimeSpanNegativePattern() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_FullTimeSpanNegativePattern", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Globalization::CompareInfo* System::Globalization::DateTimeFormatInfo::get_CompareInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_CompareInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::CompareInfo*>(this, ___internal_method);
}
inline void System::Globalization::DateTimeFormatInfo::ValidateStyles(::System::Globalization::DateTimeStyles style, ::StringW parameterName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(),
                                                           { "ValidateStyles", {}, { ::i2c::type_of<::System::Globalization::DateTimeStyles>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, style, parameterName);
}
inline ::System::Globalization::DateTimeFormatFlags System::Globalization::DateTimeFormatInfo::get_FormatFlags() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_FormatFlags", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::DateTimeFormatFlags>(this, ___internal_method);
}
inline ::System::Globalization::DateTimeFormatFlags System::Globalization::DateTimeFormatInfo::InitializeFormatFlags() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "InitializeFormatFlags", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::DateTimeFormatFlags>(this, ___internal_method);
}
inline bool System::Globalization::DateTimeFormatInfo::get_HasForceTwoDigitYears() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_HasForceTwoDigitYears", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Globalization::DateTimeFormatInfo::get_HasYearMonthAdjustment() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "get_HasYearMonthAdjustment", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Globalization::DateTimeFormatInfo::YearMonthAdjustment(::by_ref<int32_t> year, ::by_ref<int32_t> month, bool parsedMonthName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(),
                                                           { "YearMonthAdjustment", {}, { ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, year, month, parsedMonthName);
}
inline ::System::Globalization::DateTimeFormatInfo* System::Globalization::DateTimeFormatInfo::GetJapaneseCalendarDTFI() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "GetJapaneseCalendarDTFI", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::DateTimeFormatInfo*>(nullptr, ___internal_method);
}
inline ::System::Globalization::DateTimeFormatInfo* System::Globalization::DateTimeFormatInfo::GetTaiwanCalendarDTFI() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "GetTaiwanCalendarDTFI", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::DateTimeFormatInfo*>(nullptr, ___internal_method);
}
inline void System::Globalization::DateTimeFormatInfo::ClearTokenHashTable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "ClearTokenHashTable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<::System::Globalization::DateTimeFormatInfo_TokenHashValue*> System::Globalization::DateTimeFormatInfo::CreateTokenHashTable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "CreateTokenHashTable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Globalization::DateTimeFormatInfo_TokenHashValue*>>(this, ___internal_method);
}
inline void System::Globalization::DateTimeFormatInfo::PopulateSpecialTokenHashTable(::ArrayW<::System::Globalization::DateTimeFormatInfo_TokenHashValue*> temp,
                                                                                     ::by_ref<bool> useDateSepAsIgnorableSymbol) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(),
                          { "PopulateSpecialTokenHashTable", {}, { ::i2c::type_of<::ArrayW<::System::Globalization::DateTimeFormatInfo_TokenHashValue*>>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, temp, useDateSepAsIgnorableSymbol);
}
inline bool System::Globalization::DateTimeFormatInfo::IsJapaneseCalendar(::System::Globalization::Calendar* calendar) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "IsJapaneseCalendar", {}, { ::i2c::type_of<::System::Globalization::Calendar*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, calendar);
}
inline void System::Globalization::DateTimeFormatInfo::AddMonthNames(::ArrayW<::System::Globalization::DateTimeFormatInfo_TokenHashValue*> temp, ::StringW monthPostfix) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(),
                                              { "AddMonthNames", {}, { ::i2c::type_of<::ArrayW<::System::Globalization::DateTimeFormatInfo_TokenHashValue*>>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, temp, monthPostfix);
}
inline bool System::Globalization::DateTimeFormatInfo::TryParseHebrewNumber(::by_ref<::System::__DTString> str, ::by_ref<bool> badFormat, ::by_ref<int32_t> number) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(),
                                       { "TryParseHebrewNumber", {}, { ::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, str, badFormat, number);
}
inline bool System::Globalization::DateTimeFormatInfo::IsHebrewChar(char16_t ch) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "IsHebrewChar", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ch);
}
inline bool System::Globalization::DateTimeFormatInfo::IsAllowedJapaneseTokenFollowedByNonSpaceLetter(::StringW tokenString, char16_t nextCh) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(),
                                                           { "IsAllowedJapaneseTokenFollowedByNonSpaceLetter", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, tokenString, nextCh);
}
inline bool System::Globalization::DateTimeFormatInfo::Tokenize(::System::TokenType TokenMask, ::by_ref<::System::TokenType> tokenType, ::by_ref<int32_t> tokenValue,
                                                                ::by_ref<::System::__DTString> str) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(),
                                                                                         { "Tokenize",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::TokenType>(), ::i2c::type_of<::by_ref<::System::TokenType>>(),
                                                                                             ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::System::__DTString>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, TokenMask, tokenType, tokenValue, str);
}
inline void System::Globalization::DateTimeFormatInfo::InsertAtCurrentHashNode(::ArrayW<::System::Globalization::DateTimeFormatInfo_TokenHashValue*> hashTable, ::StringW str, char16_t ch,
                                                                               ::System::TokenType tokenType, int32_t tokenValue, int32_t pos, int32_t hashcode, int32_t hashProbe) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(),
                                       { "InsertAtCurrentHashNode",
                                         {},
                                         { ::i2c::type_of<::ArrayW<::System::Globalization::DateTimeFormatInfo_TokenHashValue*>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<char16_t>(),
                                           ::i2c::type_of<::System::TokenType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hashTable, str, ch, tokenType, tokenValue, pos, hashcode, hashProbe);
}
inline void System::Globalization::DateTimeFormatInfo::InsertHash(::ArrayW<::System::Globalization::DateTimeFormatInfo_TokenHashValue*> hashTable, ::StringW str, ::System::TokenType tokenType,
                                                                  int32_t tokenValue) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(),
                                                                                         { "InsertHash",
                                                                                           {},
                                                                                           { ::i2c::type_of<::ArrayW<::System::Globalization::DateTimeFormatInfo_TokenHashValue*>>(),
                                                                                             ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::TokenType>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hashTable, str, tokenType, tokenValue);
}
inline bool System::Globalization::DateTimeFormatInfo::CompareStringIgnoreCaseOptimized(::StringW string1, int32_t offset1, int32_t length1, ::StringW string2, int32_t offset2, int32_t length2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Globalization::DateTimeFormatInfo*>(), { "CompareStringIgnoreCaseOptimized",
                                                                                                          {},
                                                                                                          { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                                            ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, string1, offset1, length1, string2, offset2, length2);
}
inline ::System::Globalization::DateTimeFormatInfo* System::Globalization::DateTimeFormatInfo::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Globalization::DateTimeFormatInfo*>());
}
inline ::System::Globalization::DateTimeFormatInfo* System::Globalization::DateTimeFormatInfo::New_ctor(::System::Globalization::CultureData* cultureData, ::System::Globalization::Calendar* cal) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Globalization::DateTimeFormatInfo*>(cultureData, cal));
}
/// @brief Convert operator to "::System::IFormatProvider"
constexpr System::Globalization::DateTimeFormatInfo::operator ::System::IFormatProvider*() noexcept {
  return static_cast<::System::IFormatProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IFormatProvider"
constexpr ::System::IFormatProvider* System::Globalization::DateTimeFormatInfo::i___System__IFormatProvider() noexcept {
  return static_cast<::System::IFormatProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::ICloneable"
constexpr System::Globalization::DateTimeFormatInfo::operator ::System::ICloneable*() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* System::Globalization::DateTimeFormatInfo::i___System__ICloneable() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Globalization::DateTimeFormatInfo::DateTimeFormatInfo() {}
constexpr ::System::Globalization::DateTimeStyles System::Globalization::DateTimeFormatInfo::InvalidDateTimeStyles{ static_cast<int32_t>(0xffffff00) };
