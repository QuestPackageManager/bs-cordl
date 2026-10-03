#pragma once
// IWYU pragma private; include "System/Xml/XmlConvert.hpp"
#include "System/Xml/zzzz__XmlCharType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/zzzz__XmlConvert_def.hpp"
#include "System/Text/RegularExpressions/zzzz__Regex_def.hpp"
#include "System/Xml/zzzz__ExceptionType_def.hpp"
#include "System/Xml/zzzz__XmlDateTimeSerializationMode_def.hpp"
#include "System/zzzz__ArgumentException_def.hpp"
#include "System/zzzz__DateTimeOffset_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::System::Xml::XmlConvert.EncodeName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::Xml::XmlConvert::EncodeName)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x67025b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "EncodeName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.EncodeLocalName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::Xml::XmlConvert::EncodeLocalName)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6702f7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "EncodeLocalName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.DecodeName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::Xml::XmlConvert::DecodeName)> {
  constexpr static std::size_t size = 0x8b0;
  constexpr static std::size_t addrs = 0x6702fdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "DecodeName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.EncodeName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, bool, bool)>(&::System::Xml::XmlConvert::EncodeName)> {
  constexpr static std::size_t size = 0x96c;
  constexpr static std::size_t addrs = 0x6702610;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "EncodeName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.FromHex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(char16_t)>(&::System::Xml::XmlConvert::FromHex)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x670388c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "FromHex", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.FromBinHexString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::StringW)>(&::System::Xml::XmlConvert::FromBinHexString)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x67038b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "FromBinHexString", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.FromBinHexString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::StringW, bool)>(&::System::Xml::XmlConvert::FromBinHexString)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6703914;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "FromBinHexString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.ToBinHexString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<uint8_t>)>(&::System::Xml::XmlConvert::ToBinHexString)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6703980;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "ToBinHexString", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.VerifyName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::Xml::XmlConvert::VerifyName)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x67039e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "VerifyName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.TryVerifyName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Xml::XmlConvert::TryVerifyName)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x6703c00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "TryVerifyName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.VerifyQName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::System::Xml::ExceptionType)>(&::System::Xml::XmlConvert::VerifyQName)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x6703ebc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "VerifyQName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::ExceptionType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.VerifyNCName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::Xml::XmlConvert::VerifyNCName)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x67040c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "VerifyNCName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.VerifyNCName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::System::Xml::ExceptionType)>(&::System::Xml::XmlConvert::VerifyNCName)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x6704124;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "VerifyNCName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::ExceptionType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.TryVerifyNCName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Xml::XmlConvert::TryVerifyNCName)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6704284;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "TryVerifyNCName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.VerifyTOKEN
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::Xml::XmlConvert::VerifyTOKEN)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x6704330;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "VerifyTOKEN", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.TryVerifyTOKEN
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Xml::XmlConvert::TryVerifyTOKEN)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x6704468;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "TryVerifyTOKEN", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.TryVerifyNMTOKEN
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Xml::XmlConvert::TryVerifyNMTOKEN)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x67045a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "TryVerifyNMTOKEN", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.TryVerifyNormalizedString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Xml::XmlConvert::TryVerifyNormalizedString)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x67046d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "TryVerifyNormalizedString", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(bool)>(&::System::Xml::XmlConvert::ToString)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x67047a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "ToString", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(char16_t)>(&::System::Xml::XmlConvert::ToString)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6704820;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "ToString", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Decimal)>(&::System::Xml::XmlConvert::ToString)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6704858;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "ToString", {}, { ::i2c::type_of<::System::Decimal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int8_t)>(&::System::Xml::XmlConvert::ToString)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x67048f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "ToString", {}, { ::i2c::type_of<int8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int16_t)>(&::System::Xml::XmlConvert::ToString)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6704924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "ToString", {}, { ::i2c::type_of<int16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int32_t)>(&::System::Xml::XmlConvert::ToString)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6704950;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "ToString", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int64_t)>(&::System::Xml::XmlConvert::ToString)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x670497c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "ToString", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(uint8_t)>(&::System::Xml::XmlConvert::ToString)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x67049a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "ToString", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(uint16_t)>(&::System::Xml::XmlConvert::ToString)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x67049d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "ToString", {}, { ::i2c::type_of<uint16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(uint32_t)>(&::System::Xml::XmlConvert::ToString)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x67049fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "ToString", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(uint64_t)>(&::System::Xml::XmlConvert::ToString)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6704a28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "ToString", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(float_t)>(&::System::Xml::XmlConvert::ToString)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x6704a50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "ToString", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(double_t)>(&::System::Xml::XmlConvert::ToString)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x6704bf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "ToString", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::TimeSpan)>(&::System::Xml::XmlConvert::ToString)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6704d1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "ToString", {}, { ::i2c::type_of<::System::TimeSpan>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::DateTime, ::StringW)>(&::System::Xml::XmlConvert::ToString)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6704d58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "ToString", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::DateTime, ::System::Xml::XmlDateTimeSerializationMode)>(&::System::Xml::XmlConvert::ToString)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x6704e04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(),
                                                             { "ToString", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::Xml::XmlDateTimeSerializationMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::DateTimeOffset)>(&::System::Xml::XmlConvert::ToString)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x67051ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "ToString", {}, { ::i2c::type_of<::System::DateTimeOffset>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Guid)>(&::System::Xml::XmlConvert::ToString)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6705278;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "ToString", {}, { ::i2c::type_of<::System::Guid>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.ToBoolean
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::System::Xml::XmlConvert::ToBoolean)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x670529c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "ToBoolean", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.TryToBoolean
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW, ::by_ref<bool>)>(&::System::Xml::XmlConvert::TryToBoolean)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x67054d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "TryToBoolean", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.ToChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (*)(::StringW)>(&::System::Xml::XmlConvert::ToChar)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6705710;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "ToChar", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.TryToChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW, ::by_ref<char16_t>)>(&::System::Xml::XmlConvert::TryToChar)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x67057c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "TryToChar", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.ToDecimal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(::StringW)>(&::System::Xml::XmlConvert::ToDecimal)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6705968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "ToDecimal", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.TryToDecimal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW, ::by_ref<::System::Decimal>)>(&::System::Xml::XmlConvert::TryToDecimal)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x67059dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "TryToDecimal", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Decimal>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.ToInteger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(::StringW)>(&::System::Xml::XmlConvert::ToInteger)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6705b84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "ToInteger", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.TryToInteger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW, ::by_ref<::System::Decimal>)>(&::System::Xml::XmlConvert::TryToInteger)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x6705bf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "TryToInteger", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Decimal>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.ToSByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int8_t (*)(::StringW)>(&::System::Xml::XmlConvert::ToSByte)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6705da0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "ToSByte", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.TryToSByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW, ::by_ref<int8_t>)>(&::System::Xml::XmlConvert::TryToSByte)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x6705dc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "TryToSByte", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.ToInt16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)(::StringW)>(&::System::Xml::XmlConvert::ToInt16)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6705f40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "ToInt16", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.TryToInt16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW, ::by_ref<int16_t>)>(&::System::Xml::XmlConvert::TryToInt16)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x6705f68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "TryToInt16", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.ToInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW)>(&::System::Xml::XmlConvert::ToInt32)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x67060e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "ToInt32", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.TryToInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW, ::by_ref<int32_t>)>(&::System::Xml::XmlConvert::TryToInt32)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x6706108;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "TryToInt32", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.ToInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::StringW)>(&::System::Xml::XmlConvert::ToInt64)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6706280;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "ToInt64", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.TryToInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW, ::by_ref<int64_t>)>(&::System::Xml::XmlConvert::TryToInt64)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x67062a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "TryToInt64", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.ToByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(::StringW)>(&::System::Xml::XmlConvert::ToByte)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6706420;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "ToByte", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.TryToByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW, ::by_ref<uint8_t>)>(&::System::Xml::XmlConvert::TryToByte)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x6706448;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "TryToByte", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.ToUInt16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (*)(::StringW)>(&::System::Xml::XmlConvert::ToUInt16)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x67065c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "ToUInt16", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.TryToUInt16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW, ::by_ref<uint16_t>)>(&::System::Xml::XmlConvert::TryToUInt16)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x67065e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "TryToUInt16", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<uint16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.ToUInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::StringW)>(&::System::Xml::XmlConvert::ToUInt32)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6706760;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "ToUInt32", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.TryToUInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW, ::by_ref<uint32_t>)>(&::System::Xml::XmlConvert::TryToUInt32)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x6706788;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "TryToUInt32", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.ToUInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::StringW)>(&::System::Xml::XmlConvert::ToUInt64)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6706900;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "ToUInt64", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.TryToUInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW, ::by_ref<uint64_t>)>(&::System::Xml::XmlConvert::TryToUInt64)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x6706928;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "TryToUInt64", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<uint64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.ToSingle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::StringW)>(&::System::Xml::XmlConvert::ToSingle)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x6706aa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "ToSingle", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.TryToSingle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW, ::by_ref<float_t>)>(&::System::Xml::XmlConvert::TryToSingle)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x6706bb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "TryToSingle", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.ToDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::StringW)>(&::System::Xml::XmlConvert::ToDouble)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x6706e04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "ToDouble", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.TryToDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW, ::by_ref<double_t>)>(&::System::Xml::XmlConvert::TryToDouble)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x6706f14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "TryToDouble", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<double_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.ToXPathDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::System::Object*)>(&::System::Xml::XmlConvert::ToXPathDouble)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x6707168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "ToXPathDouble", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.ToTimeSpan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (*)(::StringW)>(&::System::Xml::XmlConvert::ToTimeSpan)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x6707398;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "ToTimeSpan", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.TryToTimeSpan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW, ::by_ref<::System::TimeSpan>)>(&::System::Xml::XmlConvert::TryToTimeSpan)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x670751c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "TryToTimeSpan", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::TimeSpan>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.get_AllDateTimeFormats
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)()>(&::System::Xml::XmlConvert::get_AllDateTimeFormats)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x67075d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "get_AllDateTimeFormats", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.CreateAllDateTimeFormats
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::Xml::XmlConvert::CreateAllDateTimeFormats)> {
  constexpr static std::size_t size = 0x478;
  constexpr static std::size_t addrs = 0x670766c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "CreateAllDateTimeFormats", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.ToDateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(::StringW)>(&::System::Xml::XmlConvert::ToDateTime)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6707ae4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "ToDateTime", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.ToDateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(::StringW, ::ArrayW<::StringW>)>(&::System::Xml::XmlConvert::ToDateTime)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6707b44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "ToDateTime", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.ToDateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(::StringW, ::System::Xml::XmlDateTimeSerializationMode)>(&::System::Xml::XmlConvert::ToDateTime)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x6707bf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "ToDateTime", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlDateTimeSerializationMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.ToDateTimeOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTimeOffset (*)(::StringW)>(&::System::Xml::XmlConvert::ToDateTimeOffset)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6707e2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "ToDateTimeOffset", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.ToGuid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (*)(::StringW)>(&::System::Xml::XmlConvert::ToGuid)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6707ef8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "ToGuid", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.TryToGuid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW, ::by_ref<::System::Guid>)>(&::System::Xml::XmlConvert::TryToGuid)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x6707f24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "TryToGuid", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Guid>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.SwitchToLocalTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(::System::DateTime)>(&::System::Xml::XmlConvert::SwitchToLocalTime)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6705034;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "SwitchToLocalTime", {}, { ::i2c::type_of<::System::DateTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.SwitchToUtcTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(::System::DateTime)>(&::System::Xml::XmlConvert::SwitchToUtcTime)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6705108;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "SwitchToUtcTime", {}, { ::i2c::type_of<::System::DateTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.ToUri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Uri* (*)(::StringW)>(&::System::Xml::XmlConvert::ToUri)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x670810c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "ToUri", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.TryToUri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW, ::by_ref<::System::Uri*>)>(&::System::Xml::XmlConvert::TryToUri)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x67082cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "TryToUri", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Uri*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.StrEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<char16_t>, int32_t, int32_t, ::StringW)>(&::System::Xml::XmlConvert::StrEqual)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6708504;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(),
                                                { "StrEqual", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.TrimString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::Xml::XmlConvert::TrimString)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6705460;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "TrimString", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.TrimStringStart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::Xml::XmlConvert::TrimStringStart)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x67085b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "TrimStringStart", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.TrimStringEnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::Xml::XmlConvert::TrimStringEnd)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6708628;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "TrimStringEnd", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.SplitString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)(::StringW)>(&::System::Xml::XmlConvert::SplitString)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6708698;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "SplitString", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.IsNegativeZero
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(double_t)>(&::System::Xml::XmlConvert::IsNegativeZero)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6704b78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "IsNegativeZero", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.DoubleToInt64Bits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(double_t)>(&::System::Xml::XmlConvert::DoubleToInt64Bits)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x670870c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "DoubleToInt64Bits", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.VerifyCharData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::System::Xml::ExceptionType, ::System::Xml::ExceptionType)>(&::System::Xml::XmlConvert::VerifyCharData)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x6708714;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(),
                                         { "VerifyCharData", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::ExceptionType>(), ::i2c::type_of<::System::Xml::ExceptionType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.CreateException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW, ::System::Xml::ExceptionType, int32_t, int32_t)>(&::System::Xml::XmlConvert::CreateException)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x6708934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(),
                            { "CreateException", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::ExceptionType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.CreateException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW, ::StringW, ::System::Xml::ExceptionType, int32_t, int32_t)>(&::System::Xml::XmlConvert::CreateException)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x6708cfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(),
                            { "CreateException",
                              {},
                              { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::ExceptionType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.CreateException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW, ::ArrayW<::StringW>, ::System::Xml::ExceptionType)>(&::System::Xml::XmlConvert::CreateException)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6708e44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(),
                                                { "CreateException", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::System::Xml::ExceptionType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.CreateException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW, ::ArrayW<::StringW>, ::System::Xml::ExceptionType, int32_t, int32_t)>(
    &::System::Xml::XmlConvert::CreateException)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6703fe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "CreateException",
                                                                                          {},
                                                                                          { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>(),
                                                                                            ::i2c::type_of<::System::Xml::ExceptionType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.CreateInvalidSurrogatePairException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(char16_t, char16_t)>(&::System::Xml::XmlConvert::CreateInvalidSurrogatePairException)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6708f2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "CreateInvalidSurrogatePairException", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.CreateInvalidSurrogatePairException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(char16_t, char16_t, ::System::Xml::ExceptionType)>(&::System::Xml::XmlConvert::CreateInvalidSurrogatePairException)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6708f98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(),
                                         { "CreateInvalidSurrogatePairException", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<::System::Xml::ExceptionType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.CreateInvalidSurrogatePairException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(char16_t, char16_t, ::System::Xml::ExceptionType, int32_t, int32_t)>(
    &::System::Xml::XmlConvert::CreateInvalidSurrogatePairException)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x6708a0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(),
                            { "CreateInvalidSurrogatePairException",
                              {},
                              { ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<::System::Xml::ExceptionType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.CreateInvalidHighSurrogateCharException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(char16_t)>(&::System::Xml::XmlConvert::CreateInvalidHighSurrogateCharException)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6709010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "CreateInvalidHighSurrogateCharException", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.CreateInvalidHighSurrogateCharException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(char16_t, ::System::Xml::ExceptionType)>(&::System::Xml::XmlConvert::CreateInvalidHighSurrogateCharException)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x670906c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(),
                                                             { "CreateInvalidHighSurrogateCharException", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<::System::Xml::ExceptionType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.CreateInvalidHighSurrogateCharException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(char16_t, ::System::Xml::ExceptionType, int32_t, int32_t)>(
    &::System::Xml::XmlConvert::CreateInvalidHighSurrogateCharException)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x67090dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Xml::XmlConvert*>(),
            { "CreateInvalidHighSurrogateCharException", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<::System::Xml::ExceptionType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.CreateInvalidCharException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW, int32_t, ::System::Xml::ExceptionType)>(&::System::Xml::XmlConvert::CreateInvalidCharException)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6708b8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(),
                                                { "CreateInvalidCharException", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Xml::ExceptionType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.CreateInvalidCharException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(char16_t, char16_t)>(&::System::Xml::XmlConvert::CreateInvalidCharException)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x67091e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "CreateInvalidCharException", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.CreateInvalidCharException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(char16_t, char16_t, ::System::Xml::ExceptionType)>(&::System::Xml::XmlConvert::CreateInvalidCharException)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6709250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(),
                                                { "CreateInvalidCharException", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<::System::Xml::ExceptionType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.CreateInvalidNameCharException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW, int32_t, ::System::Xml::ExceptionType)>(&::System::Xml::XmlConvert::CreateInvalidNameCharException)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6703b38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(),
                                                { "CreateInvalidNameCharException", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Xml::ExceptionType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConvert.CreateInvalidNameArgumentException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ArgumentException* (*)(::StringW, ::StringW)>(&::System::Xml::XmlConvert::CreateInvalidNameArgumentException)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6709548;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "CreateInvalidNameArgumentException", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void System::Xml::XmlConvert::setStaticF_xmlCharType(::System::Xml::XmlCharType value) {
  ::cordl_internals::setStaticField<::System::Xml::XmlCharType, "xmlCharType", ::System::Xml::XmlConvert*>(std::forward<::System::Xml::XmlCharType>(value));
}
inline ::System::Xml::XmlCharType System::Xml::XmlConvert::getStaticF_xmlCharType() {
  return ::cordl_internals::getStaticField<::System::Xml::XmlCharType, "xmlCharType", ::System::Xml::XmlConvert*>();
}
inline void System::Xml::XmlConvert::setStaticF_crt(::ArrayW<char16_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<char16_t>, "crt", ::System::Xml::XmlConvert*>(std::forward<::ArrayW<char16_t>>(value));
}
inline ::ArrayW<char16_t> System::Xml::XmlConvert::getStaticF_crt() {
  return ::cordl_internals::getStaticField<::ArrayW<char16_t>, "crt", ::System::Xml::XmlConvert*>();
}
inline void System::Xml::XmlConvert::setStaticF_c_EncodedCharLength(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "c_EncodedCharLength", ::System::Xml::XmlConvert*>(std::forward<int32_t>(value));
}
inline int32_t System::Xml::XmlConvert::getStaticF_c_EncodedCharLength() {
  return ::cordl_internals::getStaticField<int32_t, "c_EncodedCharLength", ::System::Xml::XmlConvert*>();
}
inline void System::Xml::XmlConvert::setStaticF_c_EncodeCharPattern(::System::Text::RegularExpressions::Regex* value) {
  ::cordl_internals::setStaticField<::System::Text::RegularExpressions::Regex*, "c_EncodeCharPattern", ::System::Xml::XmlConvert*>(std::forward<::System::Text::RegularExpressions::Regex*>(value));
}
inline ::System::Text::RegularExpressions::Regex* System::Xml::XmlConvert::getStaticF_c_EncodeCharPattern() {
  return ::cordl_internals::getStaticField<::System::Text::RegularExpressions::Regex*, "c_EncodeCharPattern", ::System::Xml::XmlConvert*>();
}
inline void System::Xml::XmlConvert::setStaticF_c_DecodeCharPattern(::System::Text::RegularExpressions::Regex* value) {
  ::cordl_internals::setStaticField<::System::Text::RegularExpressions::Regex*, "c_DecodeCharPattern", ::System::Xml::XmlConvert*>(std::forward<::System::Text::RegularExpressions::Regex*>(value));
}
inline ::System::Text::RegularExpressions::Regex* System::Xml::XmlConvert::getStaticF_c_DecodeCharPattern() {
  return ::cordl_internals::getStaticField<::System::Text::RegularExpressions::Regex*, "c_DecodeCharPattern", ::System::Xml::XmlConvert*>();
}
inline void System::Xml::XmlConvert::setStaticF_s_allDateTimeFormats(::ArrayW<::StringW> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW>, "s_allDateTimeFormats", ::System::Xml::XmlConvert*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> System::Xml::XmlConvert::getStaticF_s_allDateTimeFormats() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "s_allDateTimeFormats", ::System::Xml::XmlConvert*>();
}
inline void System::Xml::XmlConvert::setStaticF_WhitespaceChars(::ArrayW<char16_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<char16_t>, "WhitespaceChars", ::System::Xml::XmlConvert*>(std::forward<::ArrayW<char16_t>>(value));
}
inline ::ArrayW<char16_t> System::Xml::XmlConvert::getStaticF_WhitespaceChars() {
  return ::cordl_internals::getStaticField<::ArrayW<char16_t>, "WhitespaceChars", ::System::Xml::XmlConvert*>();
}
inline ::StringW System::Xml::XmlConvert::EncodeName(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "EncodeName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, name);
}
inline ::StringW System::Xml::XmlConvert::EncodeLocalName(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "EncodeLocalName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, name);
}
inline ::StringW System::Xml::XmlConvert::DecodeName(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "DecodeName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, name);
}
inline ::StringW System::Xml::XmlConvert::EncodeName(::StringW name, bool first, bool local) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "EncodeName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, name, first, local);
}
inline int32_t System::Xml::XmlConvert::FromHex(char16_t digit) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "FromHex", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, digit);
}
inline ::ArrayW<uint8_t> System::Xml::XmlConvert::FromBinHexString(::StringW s) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "FromBinHexString", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, s);
}
inline ::ArrayW<uint8_t> System::Xml::XmlConvert::FromBinHexString(::StringW s, bool allowOddCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "FromBinHexString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, s, allowOddCount);
}
inline ::StringW System::Xml::XmlConvert::ToBinHexString(::ArrayW<uint8_t> inArray) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "ToBinHexString", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, inArray);
}
inline ::StringW System::Xml::XmlConvert::VerifyName(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "VerifyName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, name);
}
inline ::System::Exception* System::Xml::XmlConvert::TryVerifyName(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "TryVerifyName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, name);
}
inline ::StringW System::Xml::XmlConvert::VerifyQName(::StringW name, ::System::Xml::ExceptionType exceptionType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "VerifyQName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::ExceptionType>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, name, exceptionType);
}
inline ::StringW System::Xml::XmlConvert::VerifyNCName(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "VerifyNCName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, name);
}
inline ::StringW System::Xml::XmlConvert::VerifyNCName(::StringW name, ::System::Xml::ExceptionType exceptionType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "VerifyNCName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::ExceptionType>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, name, exceptionType);
}
inline ::System::Exception* System::Xml::XmlConvert::TryVerifyNCName(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "TryVerifyNCName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, name);
}
inline ::StringW System::Xml::XmlConvert::VerifyTOKEN(::StringW token) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "VerifyTOKEN", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, token);
}
inline ::System::Exception* System::Xml::XmlConvert::TryVerifyTOKEN(::StringW token) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "TryVerifyTOKEN", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, token);
}
inline ::System::Exception* System::Xml::XmlConvert::TryVerifyNMTOKEN(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "TryVerifyNMTOKEN", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, name);
}
inline ::System::Exception* System::Xml::XmlConvert::TryVerifyNormalizedString(::StringW str) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "TryVerifyNormalizedString", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, str);
}
inline ::StringW System::Xml::XmlConvert::ToString(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "ToString", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::StringW System::Xml::XmlConvert::ToString(char16_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "ToString", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::StringW System::Xml::XmlConvert::ToString(::System::Decimal value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "ToString", {}, { ::i2c::type_of<::System::Decimal>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::StringW System::Xml::XmlConvert::ToString(int8_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "ToString", {}, { ::i2c::type_of<int8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::StringW System::Xml::XmlConvert::ToString(int16_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "ToString", {}, { ::i2c::type_of<int16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::StringW System::Xml::XmlConvert::ToString(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "ToString", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::StringW System::Xml::XmlConvert::ToString(int64_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "ToString", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::StringW System::Xml::XmlConvert::ToString(uint8_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "ToString", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::StringW System::Xml::XmlConvert::ToString(uint16_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "ToString", {}, { ::i2c::type_of<uint16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::StringW System::Xml::XmlConvert::ToString(uint32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "ToString", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::StringW System::Xml::XmlConvert::ToString(uint64_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "ToString", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::StringW System::Xml::XmlConvert::ToString(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "ToString", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::StringW System::Xml::XmlConvert::ToString(double_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "ToString", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::StringW System::Xml::XmlConvert::ToString(::System::TimeSpan value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "ToString", {}, { ::i2c::type_of<::System::TimeSpan>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::StringW System::Xml::XmlConvert::ToString(::System::DateTime value, ::StringW format) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "ToString", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, format);
}
inline ::StringW System::Xml::XmlConvert::ToString(::System::DateTime value, ::System::Xml::XmlDateTimeSerializationMode dateTimeOption) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "ToString", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::Xml::XmlDateTimeSerializationMode>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, dateTimeOption);
}
inline ::StringW System::Xml::XmlConvert::ToString(::System::DateTimeOffset value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "ToString", {}, { ::i2c::type_of<::System::DateTimeOffset>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::StringW System::Xml::XmlConvert::ToString(::System::Guid value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "ToString", {}, { ::i2c::type_of<::System::Guid>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline bool System::Xml::XmlConvert::ToBoolean(::StringW s) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "ToBoolean", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, s);
}
inline ::System::Exception* System::Xml::XmlConvert::TryToBoolean(::StringW s, ::by_ref<bool> result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "TryToBoolean", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, s, result);
}
inline char16_t System::Xml::XmlConvert::ToChar(::StringW s) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "ToChar", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(nullptr, ___internal_method, s);
}
inline ::System::Exception* System::Xml::XmlConvert::TryToChar(::StringW s, ::by_ref<char16_t> result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "TryToChar", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, s, result);
}
inline ::System::Decimal System::Xml::XmlConvert::ToDecimal(::StringW s) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "ToDecimal", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, s);
}
inline ::System::Exception* System::Xml::XmlConvert::TryToDecimal(::StringW s, ::by_ref<::System::Decimal> result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "TryToDecimal", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Decimal>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, s, result);
}
inline ::System::Decimal System::Xml::XmlConvert::ToInteger(::StringW s) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "ToInteger", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, s);
}
inline ::System::Exception* System::Xml::XmlConvert::TryToInteger(::StringW s, ::by_ref<::System::Decimal> result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "TryToInteger", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Decimal>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, s, result);
}
inline int8_t System::Xml::XmlConvert::ToSByte(::StringW s) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "ToSByte", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int8_t>(nullptr, ___internal_method, s);
}
inline ::System::Exception* System::Xml::XmlConvert::TryToSByte(::StringW s, ::by_ref<int8_t> result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "TryToSByte", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, s, result);
}
inline int16_t System::Xml::XmlConvert::ToInt16(::StringW s) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "ToInt16", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method, s);
}
inline ::System::Exception* System::Xml::XmlConvert::TryToInt16(::StringW s, ::by_ref<int16_t> result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "TryToInt16", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, s, result);
}
inline int32_t System::Xml::XmlConvert::ToInt32(::StringW s) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "ToInt32", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, s);
}
inline ::System::Exception* System::Xml::XmlConvert::TryToInt32(::StringW s, ::by_ref<int32_t> result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "TryToInt32", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, s, result);
}
inline int64_t System::Xml::XmlConvert::ToInt64(::StringW s) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "ToInt64", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, s);
}
inline ::System::Exception* System::Xml::XmlConvert::TryToInt64(::StringW s, ::by_ref<int64_t> result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "TryToInt64", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, s, result);
}
inline uint8_t System::Xml::XmlConvert::ToByte(::StringW s) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "ToByte", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, s);
}
inline ::System::Exception* System::Xml::XmlConvert::TryToByte(::StringW s, ::by_ref<uint8_t> result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "TryToByte", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, s, result);
}
inline uint16_t System::Xml::XmlConvert::ToUInt16(::StringW s) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "ToUInt16", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<uint16_t>(nullptr, ___internal_method, s);
}
inline ::System::Exception* System::Xml::XmlConvert::TryToUInt16(::StringW s, ::by_ref<uint16_t> result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "TryToUInt16", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<uint16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, s, result);
}
inline uint32_t System::Xml::XmlConvert::ToUInt32(::StringW s) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "ToUInt32", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, s);
}
inline ::System::Exception* System::Xml::XmlConvert::TryToUInt32(::StringW s, ::by_ref<uint32_t> result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "TryToUInt32", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, s, result);
}
inline uint64_t System::Xml::XmlConvert::ToUInt64(::StringW s) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "ToUInt64", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, s);
}
inline ::System::Exception* System::Xml::XmlConvert::TryToUInt64(::StringW s, ::by_ref<uint64_t> result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "TryToUInt64", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<uint64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, s, result);
}
inline float_t System::Xml::XmlConvert::ToSingle(::StringW s) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "ToSingle", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, s);
}
inline ::System::Exception* System::Xml::XmlConvert::TryToSingle(::StringW s, ::by_ref<float_t> result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "TryToSingle", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, s, result);
}
inline double_t System::Xml::XmlConvert::ToDouble(::StringW s) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "ToDouble", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, s);
}
inline ::System::Exception* System::Xml::XmlConvert::TryToDouble(::StringW s, ::by_ref<double_t> result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "TryToDouble", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<double_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, s, result);
}
inline double_t System::Xml::XmlConvert::ToXPathDouble(::System::Object* o) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "ToXPathDouble", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, o);
}
inline ::System::TimeSpan System::Xml::XmlConvert::ToTimeSpan(::StringW s) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "ToTimeSpan", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(nullptr, ___internal_method, s);
}
inline ::System::Exception* System::Xml::XmlConvert::TryToTimeSpan(::StringW s, ::by_ref<::System::TimeSpan> result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "TryToTimeSpan", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::TimeSpan>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, s, result);
}
inline ::ArrayW<::StringW> System::Xml::XmlConvert::get_AllDateTimeFormats() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "get_AllDateTimeFormats", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method);
}
inline void System::Xml::XmlConvert::CreateAllDateTimeFormats() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "CreateAllDateTimeFormats", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::System::DateTime System::Xml::XmlConvert::ToDateTime(::StringW s) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "ToDateTime", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, s);
}
inline ::System::DateTime System::Xml::XmlConvert::ToDateTime(::StringW s, ::ArrayW<::StringW> formats) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "ToDateTime", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, s, formats);
}
inline ::System::DateTime System::Xml::XmlConvert::ToDateTime(::StringW s, ::System::Xml::XmlDateTimeSerializationMode dateTimeOption) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "ToDateTime", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlDateTimeSerializationMode>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, s, dateTimeOption);
}
inline ::System::DateTimeOffset System::Xml::XmlConvert::ToDateTimeOffset(::StringW s) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "ToDateTimeOffset", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTimeOffset>(nullptr, ___internal_method, s);
}
inline ::System::Guid System::Xml::XmlConvert::ToGuid(::StringW s) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "ToGuid", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Guid>(nullptr, ___internal_method, s);
}
inline ::System::Exception* System::Xml::XmlConvert::TryToGuid(::StringW s, ::by_ref<::System::Guid> result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "TryToGuid", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Guid>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, s, result);
}
inline ::System::DateTime System::Xml::XmlConvert::SwitchToLocalTime(::System::DateTime value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "SwitchToLocalTime", {}, { ::i2c::type_of<::System::DateTime>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, value);
}
inline ::System::DateTime System::Xml::XmlConvert::SwitchToUtcTime(::System::DateTime value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "SwitchToUtcTime", {}, { ::i2c::type_of<::System::DateTime>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, value);
}
inline ::System::Uri* System::Xml::XmlConvert::ToUri(::StringW s) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "ToUri", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Uri*>(nullptr, ___internal_method, s);
}
inline ::System::Exception* System::Xml::XmlConvert::TryToUri(::StringW s, ::by_ref<::System::Uri*> result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "TryToUri", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Uri*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, s, result);
}
inline bool System::Xml::XmlConvert::StrEqual(::ArrayW<char16_t> chars, int32_t strPos1, int32_t strLen1, ::StringW str2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(),
                                              { "StrEqual", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, chars, strPos1, strLen1, str2);
}
inline ::StringW System::Xml::XmlConvert::TrimString(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "TrimString", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::StringW System::Xml::XmlConvert::TrimStringStart(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "TrimStringStart", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::StringW System::Xml::XmlConvert::TrimStringEnd(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "TrimStringEnd", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::ArrayW<::StringW> System::Xml::XmlConvert::SplitString(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "SplitString", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method, value);
}
inline bool System::Xml::XmlConvert::IsNegativeZero(double_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "IsNegativeZero", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value);
}
inline int64_t System::Xml::XmlConvert::DoubleToInt64Bits(double_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "DoubleToInt64Bits", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, value);
}
inline void System::Xml::XmlConvert::VerifyCharData(::StringW data, ::System::Xml::ExceptionType invCharExceptionType, ::System::Xml::ExceptionType invSurrogateExceptionType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(),
                                       { "VerifyCharData", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::ExceptionType>(), ::i2c::type_of<::System::Xml::ExceptionType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, invCharExceptionType, invSurrogateExceptionType);
}
inline ::System::Exception* System::Xml::XmlConvert::CreateException(::StringW res, ::System::Xml::ExceptionType exceptionType, int32_t lineNo, int32_t linePos) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(),
                          { "CreateException", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::ExceptionType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, res, exceptionType, lineNo, linePos);
}
inline ::System::Exception* System::Xml::XmlConvert::CreateException(::StringW res, ::StringW arg, ::System::Xml::ExceptionType exceptionType, int32_t lineNo, int32_t linePos) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(),
                          { "CreateException",
                            {},
                            { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::ExceptionType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, res, arg, exceptionType, lineNo, linePos);
}
inline ::System::Exception* System::Xml::XmlConvert::CreateException(::StringW res, ::ArrayW<::StringW> args, ::System::Xml::ExceptionType exceptionType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(),
                                              { "CreateException", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::System::Xml::ExceptionType>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, res, args, exceptionType);
}
inline ::System::Exception* System::Xml::XmlConvert::CreateException(::StringW res, ::ArrayW<::StringW> args, ::System::Xml::ExceptionType exceptionType, int32_t lineNo, int32_t linePos) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "CreateException",
                                                                                        {},
                                                                                        { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>(),
                                                                                          ::i2c::type_of<::System::Xml::ExceptionType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, res, args, exceptionType, lineNo, linePos);
}
inline ::System::Exception* System::Xml::XmlConvert::CreateInvalidSurrogatePairException(char16_t low, char16_t hi) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "CreateInvalidSurrogatePairException", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, low, hi);
}
inline ::System::Exception* System::Xml::XmlConvert::CreateInvalidSurrogatePairException(char16_t low, char16_t hi, ::System::Xml::ExceptionType exceptionType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(),
                                       { "CreateInvalidSurrogatePairException", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<::System::Xml::ExceptionType>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, low, hi, exceptionType);
}
inline ::System::Exception* System::Xml::XmlConvert::CreateInvalidSurrogatePairException(char16_t low, char16_t hi, ::System::Xml::ExceptionType exceptionType, int32_t lineNo, int32_t linePos) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "CreateInvalidSurrogatePairException",
                                                                                               {},
                                                                                               { ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<::System::Xml::ExceptionType>(),
                                                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, low, hi, exceptionType, lineNo, linePos);
}
inline ::System::Exception* System::Xml::XmlConvert::CreateInvalidHighSurrogateCharException(char16_t hi) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "CreateInvalidHighSurrogateCharException", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, hi);
}
inline ::System::Exception* System::Xml::XmlConvert::CreateInvalidHighSurrogateCharException(char16_t hi, ::System::Xml::ExceptionType exceptionType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(),
                                                           { "CreateInvalidHighSurrogateCharException", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<::System::Xml::ExceptionType>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, hi, exceptionType);
}
inline ::System::Exception* System::Xml::XmlConvert::CreateInvalidHighSurrogateCharException(char16_t hi, ::System::Xml::ExceptionType exceptionType, int32_t lineNo, int32_t linePos) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Xml::XmlConvert*>(),
          { "CreateInvalidHighSurrogateCharException", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<::System::Xml::ExceptionType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, hi, exceptionType, lineNo, linePos);
}
inline ::System::Exception* System::Xml::XmlConvert::CreateInvalidCharException(::StringW data, int32_t invCharPos, ::System::Xml::ExceptionType exceptionType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(),
                                              { "CreateInvalidCharException", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Xml::ExceptionType>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, data, invCharPos, exceptionType);
}
inline ::System::Exception* System::Xml::XmlConvert::CreateInvalidCharException(char16_t invChar, char16_t nextChar) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "CreateInvalidCharException", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, invChar, nextChar);
}
inline ::System::Exception* System::Xml::XmlConvert::CreateInvalidCharException(char16_t invChar, char16_t nextChar, ::System::Xml::ExceptionType exceptionType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(),
                                              { "CreateInvalidCharException", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<::System::Xml::ExceptionType>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, invChar, nextChar, exceptionType);
}
inline ::System::Exception* System::Xml::XmlConvert::CreateInvalidNameCharException(::StringW name, int32_t index, ::System::Xml::ExceptionType exceptionType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(),
                                              { "CreateInvalidNameCharException", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Xml::ExceptionType>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, name, index, exceptionType);
}
inline ::System::ArgumentException* System::Xml::XmlConvert::CreateInvalidNameArgumentException(::StringW name, ::StringW argumentName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConvert*>(), { "CreateInvalidNameArgumentException", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ArgumentException*>(nullptr, ___internal_method, name, argumentName);
}
// Ctor Parameters []
constexpr ::System::Xml::XmlConvert::XmlConvert() {}
