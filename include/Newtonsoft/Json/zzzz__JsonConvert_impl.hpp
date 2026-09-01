#pragma once
// IWYU pragma private; include "Newtonsoft\Json\JsonConvert.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/zzzz__JsonConvert_def.hpp"
#include "Newtonsoft/Json/zzzz__DateFormatHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__DateTimeZoneHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__FloatFormatHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__Formatting_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonConverter_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonSerializerSettings_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonSerializer_def.hpp"
#include "Newtonsoft/Json/zzzz__StringEscapeHandling_def.hpp"
#include "System/Numerics/zzzz__BigInteger_def.hpp"
#include "System/Xml/Linq/zzzz__XDocument_def.hpp"
#include "System/Xml/Linq/zzzz__XObject_def.hpp"
#include "System/Xml/zzzz__XmlDocument_def.hpp"
#include "System/Xml/zzzz__XmlNode_def.hpp"
#include "System/zzzz__DateTimeOffset_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__Enum_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.get_DefaultSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Func_1<::Newtonsoft::Json::JsonSerializerSettings*>* (*)()>(&::Newtonsoft::Json::JsonConvert::get_DefaultSettings)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5cd3464;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "get_DefaultSettings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.set_DefaultSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Func_1<::Newtonsoft::Json::JsonSerializerSettings*>*)>(&::Newtonsoft::Json::JsonConvert::set_DefaultSettings)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5cd34c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "set_DefaultSettings", {}, { ::i2c::type_of<::System::Func_1<::Newtonsoft::Json::JsonSerializerSettings*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::DateTime)>(&::Newtonsoft::Json::JsonConvert::ToString)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5cd3520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "ToString", {}, { ::i2c::type_of<::System::DateTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::DateTime, ::Newtonsoft::Json::DateFormatHandling, ::Newtonsoft::Json::DateTimeZoneHandling)>(
    &::Newtonsoft::Json::JsonConvert::ToString)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x5cd3580;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
            { "ToString", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::Newtonsoft::Json::DateFormatHandling>(), ::i2c::type_of<::Newtonsoft::Json::DateTimeZoneHandling>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::DateTimeOffset)>(&::Newtonsoft::Json::JsonConvert::ToString)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5cd37bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "ToString", {}, { ::i2c::type_of<::System::DateTimeOffset>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::DateTimeOffset, ::Newtonsoft::Json::DateFormatHandling)>(&::Newtonsoft::Json::JsonConvert::ToString)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x5cd3828;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
                                                             { "ToString", {}, { ::i2c::type_of<::System::DateTimeOffset>(), ::i2c::type_of<::Newtonsoft::Json::DateFormatHandling>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(bool)>(&::Newtonsoft::Json::JsonConvert::ToString)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5cd3a44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "ToString", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(char16_t)>(&::Newtonsoft::Json::JsonConvert::ToString)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5cd3ac4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "ToString", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Enum*)>(&::Newtonsoft::Json::JsonConvert::ToString)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5cd3ba4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "ToString", {}, { ::i2c::type_of<::System::Enum*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int32_t)>(&::Newtonsoft::Json::JsonConvert::ToString)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5cd3bfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "ToString", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int16_t)>(&::Newtonsoft::Json::JsonConvert::ToString)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5cd3c6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "ToString", {}, { ::i2c::type_of<int16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(uint16_t)>(&::Newtonsoft::Json::JsonConvert::ToString)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5cd3cdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "ToString", {}, { ::i2c::type_of<uint16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(uint32_t)>(&::Newtonsoft::Json::JsonConvert::ToString)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5cd3d4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "ToString", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int64_t)>(&::Newtonsoft::Json::JsonConvert::ToString)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5cd3dbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "ToString", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.ToStringInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Numerics::BigInteger)>(&::Newtonsoft::Json::JsonConvert::ToStringInternal)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5cd3e2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "ToStringInternal", {}, { ::i2c::type_of<::System::Numerics::BigInteger>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(uint64_t)>(&::Newtonsoft::Json::JsonConvert::ToString)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5cd3ee0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "ToString", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(float_t)>(&::Newtonsoft::Json::JsonConvert::ToString)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5cd3f50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "ToString", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(float_t, ::Newtonsoft::Json::FloatFormatHandling, char16_t, bool)>(&::Newtonsoft::Json::JsonConvert::ToString)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5cd40ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
                            { "ToString", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::Newtonsoft::Json::FloatFormatHandling>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.EnsureFloatFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(double_t, ::StringW, ::Newtonsoft::Json::FloatFormatHandling, char16_t, bool)>(
    &::Newtonsoft::Json::JsonConvert::EnsureFloatFormat)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5cd41e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "EnsureFloatFormat",
                                                                                   {},
                                                                                   { ::i2c::type_of<double_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Newtonsoft::Json::FloatFormatHandling>(),
                                                                                     ::i2c::type_of<char16_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(double_t)>(&::Newtonsoft::Json::JsonConvert::ToString)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5cd4300;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "ToString", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(double_t, ::Newtonsoft::Json::FloatFormatHandling, char16_t, bool)>(&::Newtonsoft::Json::JsonConvert::ToString)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5cd43d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
                            { "ToString", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<::Newtonsoft::Json::FloatFormatHandling>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.EnsureDecimalPlace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(double_t, ::StringW)>(&::Newtonsoft::Json::JsonConvert::EnsureDecimalPlace)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5cd4024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "EnsureDecimalPlace", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.EnsureDecimalPlace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::Newtonsoft::Json::JsonConvert::EnsureDecimalPlace)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5cd44c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "EnsureDecimalPlace", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(uint8_t)>(&::Newtonsoft::Json::JsonConvert::ToString)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5cd453c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "ToString", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int8_t)>(&::Newtonsoft::Json::JsonConvert::ToString)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5cd45ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "ToString", {}, { ::i2c::type_of<int8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Decimal)>(&::Newtonsoft::Json::JsonConvert::ToString)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5cd461c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "ToString", {}, { ::i2c::type_of<::System::Decimal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Guid)>(&::Newtonsoft::Json::JsonConvert::ToString)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5cd4718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "ToString", {}, { ::i2c::type_of<::System::Guid>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Guid, char16_t)>(&::Newtonsoft::Json::JsonConvert::ToString)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5cd4784;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "ToString", {}, { ::i2c::type_of<::System::Guid>(), ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::TimeSpan)>(&::Newtonsoft::Json::JsonConvert::ToString)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5cd485c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "ToString", {}, { ::i2c::type_of<::System::TimeSpan>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::TimeSpan, char16_t)>(&::Newtonsoft::Json::JsonConvert::ToString)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5cd48b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "ToString", {}, { ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Uri*)>(&::Newtonsoft::Json::JsonConvert::ToString)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5cd49c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "ToString", {}, { ::i2c::type_of<::System::Uri*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Uri*, char16_t)>(&::Newtonsoft::Json::JsonConvert::ToString)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5cd4a70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "ToString", {}, { ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::Newtonsoft::Json::JsonConvert::ToString)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5cd3b48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "ToString", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, char16_t)>(&::Newtonsoft::Json::JsonConvert::ToString)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5cd495c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "ToString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, char16_t, ::Newtonsoft::Json::StringEscapeHandling)>(&::Newtonsoft::Json::JsonConvert::ToString)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5cd4b00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
                                                { "ToString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<::Newtonsoft::Json::StringEscapeHandling>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Object*)>(&::Newtonsoft::Json::JsonConvert::ToString)> {
  constexpr static std::size_t size = 0x6f4;
  constexpr static std::size_t addrs = 0x5cd4be8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "ToString", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.SerializeObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Object*)>(&::Newtonsoft::Json::JsonConvert::SerializeObject)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5cd52dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "SerializeObject", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.SerializeObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Object*, ::Newtonsoft::Json::Formatting)>(&::Newtonsoft::Json::JsonConvert::SerializeObject)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5cd53bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
                                                             { "SerializeObject", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Newtonsoft::Json::Formatting>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.SerializeObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Object*, ::ArrayW<::Newtonsoft::Json::JsonConverter*>)>(&::Newtonsoft::Json::JsonConvert::SerializeObject)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5cd549c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
                                                             { "SerializeObject", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<::Newtonsoft::Json::JsonConverter*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.SerializeObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Object*, ::Newtonsoft::Json::Formatting, ::ArrayW<::Newtonsoft::Json::JsonConverter*>)>(
    &::Newtonsoft::Json::JsonConvert::SerializeObject)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5cd55c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
            { "SerializeObject", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Newtonsoft::Json::Formatting>(), ::i2c::type_of<::ArrayW<::Newtonsoft::Json::JsonConverter*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.SerializeObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Object*, ::Newtonsoft::Json::JsonSerializerSettings*)>(&::Newtonsoft::Json::JsonConvert::SerializeObject)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5cd5724;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
                                                             { "SerializeObject", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Newtonsoft::Json::JsonSerializerSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.SerializeObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Object*, ::System::Type*, ::Newtonsoft::Json::JsonSerializerSettings*)>(
    &::Newtonsoft::Json::JsonConvert::SerializeObject)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5cd533c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
                            { "SerializeObject", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Newtonsoft::Json::JsonSerializerSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.SerializeObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Object*, ::Newtonsoft::Json::Formatting, ::Newtonsoft::Json::JsonSerializerSettings*)>(
    &::Newtonsoft::Json::JsonConvert::SerializeObject)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5cd5428;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
            { "SerializeObject", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Newtonsoft::Json::Formatting>(), ::i2c::type_of<::Newtonsoft::Json::JsonSerializerSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.SerializeObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Object*, ::System::Type*, ::Newtonsoft::Json::Formatting, ::Newtonsoft::Json::JsonSerializerSettings*)>(
    &::Newtonsoft::Json::JsonConvert::SerializeObject)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5cd5680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
                                                             { "SerializeObject",
                                                               {},
                                                               { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Newtonsoft::Json::Formatting>(),
                                                                 ::i2c::type_of<::Newtonsoft::Json::JsonSerializerSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.SerializeObjectInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Object*, ::System::Type*, ::Newtonsoft::Json::JsonSerializer*)>(
    &::Newtonsoft::Json::JsonConvert::SerializeObjectInternal)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x5cd57c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
                            { "SerializeObjectInternal", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Newtonsoft::Json::JsonSerializer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.DeserializeObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::StringW)>(&::Newtonsoft::Json::JsonConvert::DeserializeObject)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5cd5a38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "DeserializeObject", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.DeserializeObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::StringW, ::Newtonsoft::Json::JsonSerializerSettings*)>(&::Newtonsoft::Json::JsonConvert::DeserializeObject)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5cd5cbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
                                                             { "DeserializeObject", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Newtonsoft::Json::JsonSerializerSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.DeserializeObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::StringW, ::System::Type*)>(&::Newtonsoft::Json::JsonConvert::DeserializeObject)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5cd5d28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "DeserializeObject", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.DeserializeObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::StringW, ::System::Type*, ::ArrayW<::Newtonsoft::Json::JsonConverter*>)>(
    &::Newtonsoft::Json::JsonConvert::DeserializeObject)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5cd5d94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
                            { "DeserializeObject", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::Newtonsoft::Json::JsonConverter*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.DeserializeObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::StringW, ::System::Type*, ::Newtonsoft::Json::JsonSerializerSettings*)>(
    &::Newtonsoft::Json::JsonConvert::DeserializeObject)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x5cd5a98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
                            { "DeserializeObject", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Newtonsoft::Json::JsonSerializerSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.PopulateObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::System::Object*)>(&::Newtonsoft::Json::JsonConvert::PopulateObject)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5cd5f94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "PopulateObject", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.PopulateObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::System::Object*, ::Newtonsoft::Json::JsonSerializerSettings*)>(&::Newtonsoft::Json::JsonConvert::PopulateObject)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x5cd6000;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
                            { "PopulateObject", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Newtonsoft::Json::JsonSerializerSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.SerializeXmlNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Xml::XmlNode*)>(&::Newtonsoft::Json::JsonConvert::SerializeXmlNode)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5cd62dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "SerializeXmlNode", {}, { ::i2c::type_of<::System::Xml::XmlNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.SerializeXmlNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Xml::XmlNode*, ::Newtonsoft::Json::Formatting)>(&::Newtonsoft::Json::JsonConvert::SerializeXmlNode)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5cd6338;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
                                                             { "SerializeXmlNode", {}, { ::i2c::type_of<::System::Xml::XmlNode*>(), ::i2c::type_of<::Newtonsoft::Json::Formatting>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.SerializeXmlNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Xml::XmlNode*, ::Newtonsoft::Json::Formatting, bool)>(&::Newtonsoft::Json::JsonConvert::SerializeXmlNode)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5cd6430;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
                                                { "SerializeXmlNode", {}, { ::i2c::type_of<::System::Xml::XmlNode*>(), ::i2c::type_of<::Newtonsoft::Json::Formatting>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.DeserializeXmlNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlDocument* (*)(::StringW)>(&::Newtonsoft::Json::JsonConvert::DeserializeXmlNode)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5cd6530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "DeserializeXmlNode", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.DeserializeXmlNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlDocument* (*)(::StringW, ::StringW)>(&::Newtonsoft::Json::JsonConvert::DeserializeXmlNode)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5cd658c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "DeserializeXmlNode", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.DeserializeXmlNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlDocument* (*)(::StringW, ::StringW, bool)>(&::Newtonsoft::Json::JsonConvert::DeserializeXmlNode)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5cd65f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "DeserializeXmlNode", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.DeserializeXmlNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlDocument* (*)(::StringW, ::StringW, bool, bool)>(&::Newtonsoft::Json::JsonConvert::DeserializeXmlNode)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x5cd666c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
                                                { "DeserializeXmlNode", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.SerializeXNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Xml::Linq::XObject*)>(&::Newtonsoft::Json::JsonConvert::SerializeXNode)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5cd6818;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "SerializeXNode", {}, { ::i2c::type_of<::System::Xml::Linq::XObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.SerializeXNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Xml::Linq::XObject*, ::Newtonsoft::Json::Formatting)>(&::Newtonsoft::Json::JsonConvert::SerializeXNode)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5cd6874;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
                                                             { "SerializeXNode", {}, { ::i2c::type_of<::System::Xml::Linq::XObject*>(), ::i2c::type_of<::Newtonsoft::Json::Formatting>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.SerializeXNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Xml::Linq::XObject*, ::Newtonsoft::Json::Formatting, bool)>(&::Newtonsoft::Json::JsonConvert::SerializeXNode)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5cd68e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
                                         { "SerializeXNode", {}, { ::i2c::type_of<::System::Xml::Linq::XObject*>(), ::i2c::type_of<::Newtonsoft::Json::Formatting>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.DeserializeXNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Linq::XDocument* (*)(::StringW)>(&::Newtonsoft::Json::JsonConvert::DeserializeXNode)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5cd69e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "DeserializeXNode", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.DeserializeXNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Linq::XDocument* (*)(::StringW, ::StringW)>(&::Newtonsoft::Json::JsonConvert::DeserializeXNode)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5cd6a3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "DeserializeXNode", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.DeserializeXNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Linq::XDocument* (*)(::StringW, ::StringW, bool)>(&::Newtonsoft::Json::JsonConvert::DeserializeXNode)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5cd6aa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "DeserializeXNode", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.DeserializeXNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Linq::XDocument* (*)(::StringW, ::StringW, bool, bool)>(&::Newtonsoft::Json::JsonConvert::DeserializeXNode)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x5cd6b1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
                                                { "DeserializeXNode", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::JsonConvert::setStaticF__DefaultSettings_k__BackingField(::System::Func_1<::Newtonsoft::Json::JsonSerializerSettings*>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<::Newtonsoft::Json::JsonSerializerSettings*>*, "<DefaultSettings>k__BackingField", ::Newtonsoft::Json::JsonConvert*>(
      std::forward<::System::Func_1<::Newtonsoft::Json::JsonSerializerSettings*>*>(value));
}
inline ::System::Func_1<::Newtonsoft::Json::JsonSerializerSettings*>* Newtonsoft::Json::JsonConvert::getStaticF__DefaultSettings_k__BackingField() {
  return ::cordl_internals::getStaticField<::System::Func_1<::Newtonsoft::Json::JsonSerializerSettings*>*, "<DefaultSettings>k__BackingField", ::Newtonsoft::Json::JsonConvert*>();
}
inline void Newtonsoft::Json::JsonConvert::setStaticF_True(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "True", ::Newtonsoft::Json::JsonConvert*>(std::forward<::StringW>(value));
}
inline ::StringW Newtonsoft::Json::JsonConvert::getStaticF_True() {
  return ::cordl_internals::getStaticField<::StringW, "True", ::Newtonsoft::Json::JsonConvert*>();
}
inline void Newtonsoft::Json::JsonConvert::setStaticF_False(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "False", ::Newtonsoft::Json::JsonConvert*>(std::forward<::StringW>(value));
}
inline ::StringW Newtonsoft::Json::JsonConvert::getStaticF_False() {
  return ::cordl_internals::getStaticField<::StringW, "False", ::Newtonsoft::Json::JsonConvert*>();
}
inline void Newtonsoft::Json::JsonConvert::setStaticF_Null(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "Null", ::Newtonsoft::Json::JsonConvert*>(std::forward<::StringW>(value));
}
inline ::StringW Newtonsoft::Json::JsonConvert::getStaticF_Null() {
  return ::cordl_internals::getStaticField<::StringW, "Null", ::Newtonsoft::Json::JsonConvert*>();
}
inline void Newtonsoft::Json::JsonConvert::setStaticF_Undefined(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "Undefined", ::Newtonsoft::Json::JsonConvert*>(std::forward<::StringW>(value));
}
inline ::StringW Newtonsoft::Json::JsonConvert::getStaticF_Undefined() {
  return ::cordl_internals::getStaticField<::StringW, "Undefined", ::Newtonsoft::Json::JsonConvert*>();
}
inline void Newtonsoft::Json::JsonConvert::setStaticF_PositiveInfinity(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "PositiveInfinity", ::Newtonsoft::Json::JsonConvert*>(std::forward<::StringW>(value));
}
inline ::StringW Newtonsoft::Json::JsonConvert::getStaticF_PositiveInfinity() {
  return ::cordl_internals::getStaticField<::StringW, "PositiveInfinity", ::Newtonsoft::Json::JsonConvert*>();
}
inline void Newtonsoft::Json::JsonConvert::setStaticF_NegativeInfinity(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "NegativeInfinity", ::Newtonsoft::Json::JsonConvert*>(std::forward<::StringW>(value));
}
inline ::StringW Newtonsoft::Json::JsonConvert::getStaticF_NegativeInfinity() {
  return ::cordl_internals::getStaticField<::StringW, "NegativeInfinity", ::Newtonsoft::Json::JsonConvert*>();
}
inline void Newtonsoft::Json::JsonConvert::setStaticF_NaN(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "NaN", ::Newtonsoft::Json::JsonConvert*>(std::forward<::StringW>(value));
}
inline ::StringW Newtonsoft::Json::JsonConvert::getStaticF_NaN() {
  return ::cordl_internals::getStaticField<::StringW, "NaN", ::Newtonsoft::Json::JsonConvert*>();
}
inline ::System::Func_1<::Newtonsoft::Json::JsonSerializerSettings*>* Newtonsoft::Json::JsonConvert::get_DefaultSettings() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "get_DefaultSettings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Func_1<::Newtonsoft::Json::JsonSerializerSettings*>*>(nullptr, ___internal_method);
}
inline void Newtonsoft::Json::JsonConvert::set_DefaultSettings(::System::Func_1<::Newtonsoft::Json::JsonSerializerSettings*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "set_DefaultSettings", {}, { ::i2c::type_of<::System::Func_1<::Newtonsoft::Json::JsonSerializerSettings*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::StringW Newtonsoft::Json::JsonConvert::ToString(::System::DateTime value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "ToString", {}, { ::i2c::type_of<::System::DateTime>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::StringW Newtonsoft::Json::JsonConvert::ToString(::System::DateTime value, ::Newtonsoft::Json::DateFormatHandling format, ::Newtonsoft::Json::DateTimeZoneHandling timeZoneHandling) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
          { "ToString", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::Newtonsoft::Json::DateFormatHandling>(), ::i2c::type_of<::Newtonsoft::Json::DateTimeZoneHandling>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, format, timeZoneHandling);
}
inline ::StringW Newtonsoft::Json::JsonConvert::ToString(::System::DateTimeOffset value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "ToString", {}, { ::i2c::type_of<::System::DateTimeOffset>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::StringW Newtonsoft::Json::JsonConvert::ToString(::System::DateTimeOffset value, ::Newtonsoft::Json::DateFormatHandling format) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
                                                           { "ToString", {}, { ::i2c::type_of<::System::DateTimeOffset>(), ::i2c::type_of<::Newtonsoft::Json::DateFormatHandling>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, format);
}
inline ::StringW Newtonsoft::Json::JsonConvert::ToString(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "ToString", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::StringW Newtonsoft::Json::JsonConvert::ToString(char16_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "ToString", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::StringW Newtonsoft::Json::JsonConvert::ToString(::System::Enum* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "ToString", {}, { ::i2c::type_of<::System::Enum*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::StringW Newtonsoft::Json::JsonConvert::ToString(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "ToString", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::StringW Newtonsoft::Json::JsonConvert::ToString(int16_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "ToString", {}, { ::i2c::type_of<int16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::StringW Newtonsoft::Json::JsonConvert::ToString(uint16_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "ToString", {}, { ::i2c::type_of<uint16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::StringW Newtonsoft::Json::JsonConvert::ToString(uint32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "ToString", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::StringW Newtonsoft::Json::JsonConvert::ToString(int64_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "ToString", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::StringW Newtonsoft::Json::JsonConvert::ToStringInternal(::System::Numerics::BigInteger value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "ToStringInternal", {}, { ::i2c::type_of<::System::Numerics::BigInteger>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::StringW Newtonsoft::Json::JsonConvert::ToString(uint64_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "ToString", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::StringW Newtonsoft::Json::JsonConvert::ToString(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "ToString", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::StringW Newtonsoft::Json::JsonConvert::ToString(float_t value, ::Newtonsoft::Json::FloatFormatHandling floatFormatHandling, char16_t quoteChar, bool nullable) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
                          { "ToString", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::Newtonsoft::Json::FloatFormatHandling>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, floatFormatHandling, quoteChar, nullable);
}
inline ::StringW Newtonsoft::Json::JsonConvert::EnsureFloatFormat(double_t value, ::StringW text, ::Newtonsoft::Json::FloatFormatHandling floatFormatHandling, char16_t quoteChar, bool nullable) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "EnsureFloatFormat",
                                                                                 {},
                                                                                 { ::i2c::type_of<double_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Newtonsoft::Json::FloatFormatHandling>(),
                                                                                   ::i2c::type_of<char16_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, text, floatFormatHandling, quoteChar, nullable);
}
inline ::StringW Newtonsoft::Json::JsonConvert::ToString(double_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "ToString", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::StringW Newtonsoft::Json::JsonConvert::ToString(double_t value, ::Newtonsoft::Json::FloatFormatHandling floatFormatHandling, char16_t quoteChar, bool nullable) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
                          { "ToString", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<::Newtonsoft::Json::FloatFormatHandling>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, floatFormatHandling, quoteChar, nullable);
}
inline ::StringW Newtonsoft::Json::JsonConvert::EnsureDecimalPlace(double_t value, ::StringW text) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "EnsureDecimalPlace", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, text);
}
inline ::StringW Newtonsoft::Json::JsonConvert::EnsureDecimalPlace(::StringW text) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "EnsureDecimalPlace", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, text);
}
inline ::StringW Newtonsoft::Json::JsonConvert::ToString(uint8_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "ToString", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::StringW Newtonsoft::Json::JsonConvert::ToString(int8_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "ToString", {}, { ::i2c::type_of<int8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::StringW Newtonsoft::Json::JsonConvert::ToString(::System::Decimal value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "ToString", {}, { ::i2c::type_of<::System::Decimal>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::StringW Newtonsoft::Json::JsonConvert::ToString(::System::Guid value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "ToString", {}, { ::i2c::type_of<::System::Guid>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::StringW Newtonsoft::Json::JsonConvert::ToString(::System::Guid value, char16_t quoteChar) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "ToString", {}, { ::i2c::type_of<::System::Guid>(), ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, quoteChar);
}
inline ::StringW Newtonsoft::Json::JsonConvert::ToString(::System::TimeSpan value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "ToString", {}, { ::i2c::type_of<::System::TimeSpan>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::StringW Newtonsoft::Json::JsonConvert::ToString(::System::TimeSpan value, char16_t quoteChar) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "ToString", {}, { ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, quoteChar);
}
inline ::StringW Newtonsoft::Json::JsonConvert::ToString(::System::Uri* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "ToString", {}, { ::i2c::type_of<::System::Uri*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::StringW Newtonsoft::Json::JsonConvert::ToString(::System::Uri* value, char16_t quoteChar) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "ToString", {}, { ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, quoteChar);
}
inline ::StringW Newtonsoft::Json::JsonConvert::ToString(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "ToString", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::StringW Newtonsoft::Json::JsonConvert::ToString(::StringW value, char16_t delimiter) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "ToString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, delimiter);
}
inline ::StringW Newtonsoft::Json::JsonConvert::ToString(::StringW value, char16_t delimiter, ::Newtonsoft::Json::StringEscapeHandling stringEscapeHandling) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
                                              { "ToString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<::Newtonsoft::Json::StringEscapeHandling>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, delimiter, stringEscapeHandling);
}
inline ::StringW Newtonsoft::Json::JsonConvert::ToString(::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "ToString", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::StringW Newtonsoft::Json::JsonConvert::SerializeObject(::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "SerializeObject", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::StringW Newtonsoft::Json::JsonConvert::SerializeObject(::System::Object* value, ::Newtonsoft::Json::Formatting formatting) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "SerializeObject", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Newtonsoft::Json::Formatting>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, formatting);
}
inline ::StringW Newtonsoft::Json::JsonConvert::SerializeObject(::System::Object* value, ::ArrayW<::Newtonsoft::Json::JsonConverter*> converters) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
                                                           { "SerializeObject", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<::Newtonsoft::Json::JsonConverter*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, converters);
}
inline ::StringW Newtonsoft::Json::JsonConvert::SerializeObject(::System::Object* value, ::Newtonsoft::Json::Formatting formatting, ::ArrayW<::Newtonsoft::Json::JsonConverter*> converters) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
          { "SerializeObject", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Newtonsoft::Json::Formatting>(), ::i2c::type_of<::ArrayW<::Newtonsoft::Json::JsonConverter*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, formatting, converters);
}
inline ::StringW Newtonsoft::Json::JsonConvert::SerializeObject(::System::Object* value, ::Newtonsoft::Json::JsonSerializerSettings* settings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
                                                           { "SerializeObject", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Newtonsoft::Json::JsonSerializerSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, settings);
}
inline ::StringW Newtonsoft::Json::JsonConvert::SerializeObject(::System::Object* value, ::System::Type* type, ::Newtonsoft::Json::JsonSerializerSettings* settings) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
                          { "SerializeObject", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Newtonsoft::Json::JsonSerializerSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, type, settings);
}
inline ::StringW Newtonsoft::Json::JsonConvert::SerializeObject(::System::Object* value, ::Newtonsoft::Json::Formatting formatting, ::Newtonsoft::Json::JsonSerializerSettings* settings) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
          { "SerializeObject", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Newtonsoft::Json::Formatting>(), ::i2c::type_of<::Newtonsoft::Json::JsonSerializerSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, formatting, settings);
}
inline ::StringW Newtonsoft::Json::JsonConvert::SerializeObject(::System::Object* value, ::System::Type* type, ::Newtonsoft::Json::Formatting formatting,
                                                                ::Newtonsoft::Json::JsonSerializerSettings* settings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
                                                           { "SerializeObject",
                                                             {},
                                                             { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Newtonsoft::Json::Formatting>(),
                                                               ::i2c::type_of<::Newtonsoft::Json::JsonSerializerSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, type, formatting, settings);
}
inline ::StringW Newtonsoft::Json::JsonConvert::SerializeObjectInternal(::System::Object* value, ::System::Type* type, ::Newtonsoft::Json::JsonSerializer* jsonSerializer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
                          { "SerializeObjectInternal", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Newtonsoft::Json::JsonSerializer*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, type, jsonSerializer);
}
inline ::System::Object* Newtonsoft::Json::JsonConvert::DeserializeObject(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "DeserializeObject", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, value);
}
inline ::System::Object* Newtonsoft::Json::JsonConvert::DeserializeObject(::StringW value, ::Newtonsoft::Json::JsonSerializerSettings* settings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
                                                           { "DeserializeObject", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Newtonsoft::Json::JsonSerializerSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, value, settings);
}
inline ::System::Object* Newtonsoft::Json::JsonConvert::DeserializeObject(::StringW value, ::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "DeserializeObject", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, value, type);
}
template <typename T> inline T Newtonsoft::Json::JsonConvert::DeserializeObject(::StringW value) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "DeserializeObject", { ::i2c::class_of<T>() }, { ::i2c::type_of<::StringW>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, value);
}
template <typename T> inline T Newtonsoft::Json::JsonConvert::DeserializeAnonymousType(::StringW value, T anonymousTypeObject) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "DeserializeAnonymousType", { ::i2c::class_of<T>() }, { ::i2c::type_of<::StringW>(), ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, value, anonymousTypeObject);
}
template <typename T> inline T Newtonsoft::Json::JsonConvert::DeserializeAnonymousType(::StringW value, T anonymousTypeObject, ::Newtonsoft::Json::JsonSerializerSettings* settings) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
                       { "DeserializeAnonymousType", { ::i2c::class_of<T>() }, { ::i2c::type_of<::StringW>(), ::i2c::type_of<T>(), ::i2c::type_of<::Newtonsoft::Json::JsonSerializerSettings*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, value, anonymousTypeObject, settings);
}
template <typename T> inline T Newtonsoft::Json::JsonConvert::DeserializeObject(::StringW value, ::ArrayW<::Newtonsoft::Json::JsonConverter*> converters) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
                                              { "DeserializeObject", { ::i2c::class_of<T>() }, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::Newtonsoft::Json::JsonConverter*>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, value, converters);
}
template <typename T> inline T Newtonsoft::Json::JsonConvert::DeserializeObject(::StringW value, ::Newtonsoft::Json::JsonSerializerSettings* settings) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
                                              { "DeserializeObject", { ::i2c::class_of<T>() }, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Newtonsoft::Json::JsonSerializerSettings*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, value, settings);
}
inline ::System::Object* Newtonsoft::Json::JsonConvert::DeserializeObject(::StringW value, ::System::Type* type, ::ArrayW<::Newtonsoft::Json::JsonConverter*> converters) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
                          { "DeserializeObject", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::Newtonsoft::Json::JsonConverter*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, value, type, converters);
}
inline ::System::Object* Newtonsoft::Json::JsonConvert::DeserializeObject(::StringW value, ::System::Type* type, ::Newtonsoft::Json::JsonSerializerSettings* settings) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
                          { "DeserializeObject", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Newtonsoft::Json::JsonSerializerSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, value, type, settings);
}
inline void Newtonsoft::Json::JsonConvert::PopulateObject(::StringW value, ::System::Object* target) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "PopulateObject", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value, target);
}
inline void Newtonsoft::Json::JsonConvert::PopulateObject(::StringW value, ::System::Object* target, ::Newtonsoft::Json::JsonSerializerSettings* settings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
                                       { "PopulateObject", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Newtonsoft::Json::JsonSerializerSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value, target, settings);
}
inline ::StringW Newtonsoft::Json::JsonConvert::SerializeXmlNode(::System::Xml::XmlNode* node) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "SerializeXmlNode", {}, { ::i2c::type_of<::System::Xml::XmlNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, node);
}
inline ::StringW Newtonsoft::Json::JsonConvert::SerializeXmlNode(::System::Xml::XmlNode* node, ::Newtonsoft::Json::Formatting formatting) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
                                                           { "SerializeXmlNode", {}, { ::i2c::type_of<::System::Xml::XmlNode*>(), ::i2c::type_of<::Newtonsoft::Json::Formatting>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, node, formatting);
}
inline ::StringW Newtonsoft::Json::JsonConvert::SerializeXmlNode(::System::Xml::XmlNode* node, ::Newtonsoft::Json::Formatting formatting, bool omitRootObject) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
                                              { "SerializeXmlNode", {}, { ::i2c::type_of<::System::Xml::XmlNode*>(), ::i2c::type_of<::Newtonsoft::Json::Formatting>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, node, formatting, omitRootObject);
}
inline ::System::Xml::XmlDocument* Newtonsoft::Json::JsonConvert::DeserializeXmlNode(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "DeserializeXmlNode", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlDocument*>(nullptr, ___internal_method, value);
}
inline ::System::Xml::XmlDocument* Newtonsoft::Json::JsonConvert::DeserializeXmlNode(::StringW value, ::StringW deserializeRootElementName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "DeserializeXmlNode", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlDocument*>(nullptr, ___internal_method, value, deserializeRootElementName);
}
inline ::System::Xml::XmlDocument* Newtonsoft::Json::JsonConvert::DeserializeXmlNode(::StringW value, ::StringW deserializeRootElementName, bool writeArrayAttribute) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "DeserializeXmlNode", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlDocument*>(nullptr, ___internal_method, value, deserializeRootElementName, writeArrayAttribute);
}
inline ::System::Xml::XmlDocument* Newtonsoft::Json::JsonConvert::DeserializeXmlNode(::StringW value, ::StringW deserializeRootElementName, bool writeArrayAttribute, bool encodeSpecialCharacters) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
                                              { "DeserializeXmlNode", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlDocument*>(nullptr, ___internal_method, value, deserializeRootElementName, writeArrayAttribute, encodeSpecialCharacters);
}
inline ::StringW Newtonsoft::Json::JsonConvert::SerializeXNode(::System::Xml::Linq::XObject* node) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "SerializeXNode", {}, { ::i2c::type_of<::System::Xml::Linq::XObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, node);
}
inline ::StringW Newtonsoft::Json::JsonConvert::SerializeXNode(::System::Xml::Linq::XObject* node, ::Newtonsoft::Json::Formatting formatting) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
                                                           { "SerializeXNode", {}, { ::i2c::type_of<::System::Xml::Linq::XObject*>(), ::i2c::type_of<::Newtonsoft::Json::Formatting>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, node, formatting);
}
inline ::StringW Newtonsoft::Json::JsonConvert::SerializeXNode(::System::Xml::Linq::XObject* node, ::Newtonsoft::Json::Formatting formatting, bool omitRootObject) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
                                       { "SerializeXNode", {}, { ::i2c::type_of<::System::Xml::Linq::XObject*>(), ::i2c::type_of<::Newtonsoft::Json::Formatting>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, node, formatting, omitRootObject);
}
inline ::System::Xml::Linq::XDocument* Newtonsoft::Json::JsonConvert::DeserializeXNode(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "DeserializeXNode", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Linq::XDocument*>(nullptr, ___internal_method, value);
}
inline ::System::Xml::Linq::XDocument* Newtonsoft::Json::JsonConvert::DeserializeXNode(::StringW value, ::StringW deserializeRootElementName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "DeserializeXNode", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Linq::XDocument*>(nullptr, ___internal_method, value, deserializeRootElementName);
}
inline ::System::Xml::Linq::XDocument* Newtonsoft::Json::JsonConvert::DeserializeXNode(::StringW value, ::StringW deserializeRootElementName, bool writeArrayAttribute) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(), { "DeserializeXNode", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Linq::XDocument*>(nullptr, ___internal_method, value, deserializeRootElementName, writeArrayAttribute);
}
inline ::System::Xml::Linq::XDocument* Newtonsoft::Json::JsonConvert::DeserializeXNode(::StringW value, ::StringW deserializeRootElementName, bool writeArrayAttribute, bool encodeSpecialCharacters) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
                                                           { "DeserializeXNode", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Linq::XDocument*>(nullptr, ___internal_method, value, deserializeRootElementName, writeArrayAttribute, encodeSpecialCharacters);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonConvert::JsonConvert() {}
