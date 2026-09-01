#pragma once
// IWYU pragma private; include "System\Xml\XmlConverter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/zzzz__XmlConverter_def.hpp"
#include "System/Text/zzzz__Base64Encoding_def.hpp"
#include "System/Text/zzzz__UTF8Encoding_def.hpp"
#include "System/Text/zzzz__UnicodeEncoding_def.hpp"
#include "System/Xml/zzzz__UniqueId_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::System::Xml::XmlConverter.get_Base64Encoding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::Base64Encoding* (*)()>(&::System::Xml::XmlConverter::get_Base64Encoding)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x611b544;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "get_Base64Encoding", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConverter.get_UTF8Encoding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::UTF8Encoding* (*)()>(&::System::Xml::XmlConverter::get_UTF8Encoding)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x611b614;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "get_UTF8Encoding", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConverter.get_UnicodeEncoding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::UnicodeEncoding* (*)()>(&::System::Xml::XmlConverter::get_UnicodeEncoding)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x611b700;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "get_UnicodeEncoding", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConverter.ToBoolean
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::System::Xml::XmlConverter::ToBoolean)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x611b7f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToBoolean", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConverter.ToBoolean
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Xml::XmlConverter::ToBoolean)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x611b928;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToBoolean", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConverter.ToInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW)>(&::System::Xml::XmlConverter::ToInt32)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x611b9f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToInt32", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConverter.ToInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Xml::XmlConverter::ToInt32)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x611bb54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToInt32", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConverter.ToInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::StringW)>(&::System::Xml::XmlConverter::ToInt64)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x611bd74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToInt64", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConverter.ToInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Xml::XmlConverter::ToInt64)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x611bed8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToInt64", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConverter.ToSingle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::StringW)>(&::System::Xml::XmlConverter::ToSingle)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x611c16c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToSingle", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConverter.ToSingle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Xml::XmlConverter::ToSingle)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x611c2c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToSingle", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConverter.ToDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::StringW)>(&::System::Xml::XmlConverter::ToDouble)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x611c504;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToDouble", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConverter.ToDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Xml::XmlConverter::ToDouble)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x611c658;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToDouble", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConverter.ToDecimal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(::StringW)>(&::System::Xml::XmlConverter::ToDecimal)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x611c87c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToDecimal", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConverter.ToDecimal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Xml::XmlConverter::ToDecimal)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x611c9d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToDecimal", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConverter.ToDateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(int64_t)>(&::System::Xml::XmlConverter::ToDateTime)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x611ca44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToDateTime", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConverter.ToDateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(::StringW)>(&::System::Xml::XmlConverter::ToDateTime)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x611cbf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToDateTime", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConverter.ToDateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Xml::XmlConverter::ToDateTime)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x611cd28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToDateTime", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConverter.ToUniqueId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::UniqueId* (*)(::StringW)>(&::System::Xml::XmlConverter::ToUniqueId)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x611d498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToUniqueId", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConverter.ToUniqueId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::UniqueId* (*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Xml::XmlConverter::ToUniqueId)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x611d7a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToUniqueId", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConverter.ToTimeSpan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (*)(::StringW)>(&::System::Xml::XmlConverter::ToTimeSpan)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x611d818;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToTimeSpan", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConverter.ToTimeSpan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Xml::XmlConverter::ToTimeSpan)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x611d96c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToTimeSpan", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConverter.ToGuid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (*)(::StringW)>(&::System::Xml::XmlConverter::ToGuid)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x611d9e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToGuid", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConverter.ToGuid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Xml::XmlConverter::ToGuid)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x611db3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToGuid", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConverter.ToUInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::StringW)>(&::System::Xml::XmlConverter::ToUInt64)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x611dbb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToUInt64", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConverter.ToUInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Xml::XmlConverter::ToUInt64)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x611dcd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToUInt64", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConverter.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Xml::XmlConverter::ToString)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x611802c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToString", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConverter.ToStringUnicode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Xml::XmlConverter::ToStringUnicode)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x6116da4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(),
                                                             { "ToStringUnicode", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConverter.ToBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::StringW)>(&::System::Xml::XmlConverter::ToBytes)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x611dd48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToBytes", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConverter.ToChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<char16_t>, int32_t)>(&::System::Xml::XmlConverter::ToChars)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x6116a5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Xml::XmlConverter*>(),
            { "ToChars", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConverter.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(bool)>(&::System::Xml::XmlConverter::ToString)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x611de68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToString", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConverter.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int32_t)>(&::System::Xml::XmlConverter::ToString)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x611dee0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToString", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConverter.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int64_t)>(&::System::Xml::XmlConverter::ToString)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x611cb74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToString", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConverter.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(float_t)>(&::System::Xml::XmlConverter::ToString)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x611df5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToString", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConverter.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(double_t)>(&::System::Xml::XmlConverter::ToString)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x611dfc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToString", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConverter.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Decimal)>(&::System::Xml::XmlConverter::ToString)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x611e024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToString", {}, { ::i2c::type_of<::System::Decimal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConverter.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::TimeSpan)>(&::System::Xml::XmlConverter::ToString)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x611e090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToString", {}, { ::i2c::type_of<::System::TimeSpan>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConverter.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Xml::UniqueId*)>(&::System::Xml::XmlConverter::ToString)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x611e114;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToString", {}, { ::i2c::type_of<::System::Xml::UniqueId*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConverter.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Guid)>(&::System::Xml::XmlConverter::ToString)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x611e12c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToString", {}, { ::i2c::type_of<::System::Guid>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConverter.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(uint64_t)>(&::System::Xml::XmlConverter::ToString)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x611e150;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToString", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConverter.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::DateTime)>(&::System::Xml::XmlConverter::ToString)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x611e174;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToString", {}, { ::i2c::type_of<::System::DateTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConverter.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Object*)>(&::System::Xml::XmlConverter::ToString)> {
  constexpr static std::size_t size = 0x47c;
  constexpr static std::size_t addrs = 0x611e68c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToString", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConverter.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<::System::Object*>)>(&::System::Xml::XmlConverter::ToString)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x611eb08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToString", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConverter.TryParseInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<uint8_t>, int32_t, int32_t, ::by_ref<int32_t>)>(&::System::Xml::XmlConverter::TryParseInt32)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x611bc14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(),
                                         { "TryParseInt32", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConverter.TryParseInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<uint8_t>, int32_t, int32_t, ::by_ref<int64_t>)>(&::System::Xml::XmlConverter::TryParseInt64)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x611bf98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(),
                                         { "TryParseInt64", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConverter.TryParseSingle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<uint8_t>, int32_t, int32_t, ::by_ref<float_t>)>(&::System::Xml::XmlConverter::TryParseSingle)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x611c380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(),
                            { "TryParseSingle", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConverter.TryParseDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<uint8_t>, int32_t, int32_t, ::by_ref<double_t>)>(&::System::Xml::XmlConverter::TryParseDouble)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x611c718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(),
                            { "TryParseDouble", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<double_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConverter.ToInt32D2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<uint8_t>, int32_t)>(&::System::Xml::XmlConverter::ToInt32D2)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x611ec88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToInt32D2", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConverter.ToInt32D4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Xml::XmlConverter::ToInt32D4)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x611ecec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToInt32D4", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConverter.ToInt32D7
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Xml::XmlConverter::ToInt32D7)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x611ed5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToInt32D7", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConverter.TryParseDateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<uint8_t>, int32_t, int32_t, ::by_ref<::System::DateTime>)>(&::System::Xml::XmlConverter::TryParseDateTime)> {
  constexpr static std::size_t size = 0x6b0;
  constexpr static std::size_t addrs = 0x611cde8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::System::Xml::XmlConverter*>(),
                         { "TryParseDateTime", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::System::DateTime>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConverter.ToChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(bool, ::ArrayW<uint8_t>, int32_t)>(&::System::Xml::XmlConverter::ToChars)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x611edd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToChars", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConverter.ToCharsR
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, ::ArrayW<uint8_t>, int32_t)>(&::System::Xml::XmlConverter::ToCharsR)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x611eeec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToCharsR", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConverter.ToChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, ::ArrayW<uint8_t>, int32_t)>(&::System::Xml::XmlConverter::ToChars)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x611f034;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToChars", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConverter.ToCharsR
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int64_t, ::ArrayW<uint8_t>, int32_t)>(&::System::Xml::XmlConverter::ToCharsR)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x611f0d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToCharsR", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConverter.ToChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int64_t, ::ArrayW<uint8_t>, int32_t)>(&::System::Xml::XmlConverter::ToChars)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x611f234;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToChars", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConverter.IsNegativeZero
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(float_t)>(&::System::Xml::XmlConverter::IsNegativeZero)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x611f2d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "IsNegativeZero", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConverter.IsNegativeZero
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(double_t)>(&::System::Xml::XmlConverter::IsNegativeZero)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x611f2e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "IsNegativeZero", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConverter.ToInfinity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(bool, ::ArrayW<uint8_t>, int32_t)>(&::System::Xml::XmlConverter::ToInfinity)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x611f2f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToInfinity", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConverter.ToZero
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(bool, ::ArrayW<uint8_t>, int32_t)>(&::System::Xml::XmlConverter::ToZero)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x611f3d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToZero", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConverter.ToChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(double_t, ::ArrayW<uint8_t>, int32_t)>(&::System::Xml::XmlConverter::ToChars)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x611f440;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToChars", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConverter.ToChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(float_t, ::ArrayW<uint8_t>, int32_t)>(&::System::Xml::XmlConverter::ToChars)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x611f604;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToChars", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConverter.ToChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Decimal, ::ArrayW<uint8_t>, int32_t)>(&::System::Xml::XmlConverter::ToChars)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x611f768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(),
                                                             { "ToChars", {}, { ::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConverter.ToChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint64_t, ::ArrayW<uint8_t>, int32_t)>(&::System::Xml::XmlConverter::ToChars)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x611f854;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToChars", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConverter.ToAsciiChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, ::ArrayW<uint8_t>, int32_t)>(&::System::Xml::XmlConverter::ToAsciiChars)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x611f5a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToAsciiChars", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConverter.ToCharsD2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, ::ArrayW<uint8_t>, int32_t)>(&::System::Xml::XmlConverter::ToCharsD2)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x611f8e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToCharsD2", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConverter.ToCharsD4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, ::ArrayW<uint8_t>, int32_t)>(&::System::Xml::XmlConverter::ToCharsD4)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x611f98c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToCharsD4", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConverter.ToCharsD7
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, ::ArrayW<uint8_t>, int32_t)>(&::System::Xml::XmlConverter::ToCharsD7)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x611fa30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToCharsD7", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConverter.ToChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::DateTime, ::ArrayW<uint8_t>, int32_t)>(&::System::Xml::XmlConverter::ToChars)> {
  constexpr static std::size_t size = 0x47c;
  constexpr static std::size_t addrs = 0x611e210;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(),
                                                             { "ToChars", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConverter.IsWhitespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::System::Xml::XmlConverter::IsWhitespace)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x611fb40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "IsWhitespace", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConverter.IsWhitespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(char16_t)>(&::System::Xml::XmlConverter::IsWhitespace)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6117954;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "IsWhitespace", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConverter.StripWhitespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::Xml::XmlConverter::StripWhitespace)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x611fc14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "StripWhitespace", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlConverter.Trim
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::Xml::XmlConverter::Trim)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x611d604;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "Trim", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void System::Xml::XmlConverter::setStaticF_whiteSpaceChars(::ArrayW<char16_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<char16_t>, "whiteSpaceChars", ::System::Xml::XmlConverter*>(std::forward<::ArrayW<char16_t>>(value));
}
inline ::ArrayW<char16_t> System::Xml::XmlConverter::getStaticF_whiteSpaceChars() {
  return ::cordl_internals::getStaticField<::ArrayW<char16_t>, "whiteSpaceChars", ::System::Xml::XmlConverter*>();
}
inline void System::Xml::XmlConverter::setStaticF_utf8Encoding(::System::Text::UTF8Encoding* value) {
  ::cordl_internals::setStaticField<::System::Text::UTF8Encoding*, "utf8Encoding", ::System::Xml::XmlConverter*>(std::forward<::System::Text::UTF8Encoding*>(value));
}
inline ::System::Text::UTF8Encoding* System::Xml::XmlConverter::getStaticF_utf8Encoding() {
  return ::cordl_internals::getStaticField<::System::Text::UTF8Encoding*, "utf8Encoding", ::System::Xml::XmlConverter*>();
}
inline void System::Xml::XmlConverter::setStaticF_unicodeEncoding(::System::Text::UnicodeEncoding* value) {
  ::cordl_internals::setStaticField<::System::Text::UnicodeEncoding*, "unicodeEncoding", ::System::Xml::XmlConverter*>(std::forward<::System::Text::UnicodeEncoding*>(value));
}
inline ::System::Text::UnicodeEncoding* System::Xml::XmlConverter::getStaticF_unicodeEncoding() {
  return ::cordl_internals::getStaticField<::System::Text::UnicodeEncoding*, "unicodeEncoding", ::System::Xml::XmlConverter*>();
}
inline void System::Xml::XmlConverter::setStaticF_base64Encoding(::System::Text::Base64Encoding* value) {
  ::cordl_internals::setStaticField<::System::Text::Base64Encoding*, "base64Encoding", ::System::Xml::XmlConverter*>(std::forward<::System::Text::Base64Encoding*>(value));
}
inline ::System::Text::Base64Encoding* System::Xml::XmlConverter::getStaticF_base64Encoding() {
  return ::cordl_internals::getStaticField<::System::Text::Base64Encoding*, "base64Encoding", ::System::Xml::XmlConverter*>();
}
inline ::System::Text::Base64Encoding* System::Xml::XmlConverter::get_Base64Encoding() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "get_Base64Encoding", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::Base64Encoding*>(nullptr, ___internal_method);
}
inline ::System::Text::UTF8Encoding* System::Xml::XmlConverter::get_UTF8Encoding() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "get_UTF8Encoding", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::UTF8Encoding*>(nullptr, ___internal_method);
}
inline ::System::Text::UnicodeEncoding* System::Xml::XmlConverter::get_UnicodeEncoding() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "get_UnicodeEncoding", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::UnicodeEncoding*>(nullptr, ___internal_method);
}
inline bool System::Xml::XmlConverter::ToBoolean(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToBoolean", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value);
}
inline bool System::Xml::XmlConverter::ToBoolean(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToBoolean", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, buffer, offset, count);
}
inline int32_t System::Xml::XmlConverter::ToInt32(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToInt32", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
inline int32_t System::Xml::XmlConverter::ToInt32(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToInt32", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, buffer, offset, count);
}
inline int64_t System::Xml::XmlConverter::ToInt64(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToInt64", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, value);
}
inline int64_t System::Xml::XmlConverter::ToInt64(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToInt64", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, buffer, offset, count);
}
inline float_t System::Xml::XmlConverter::ToSingle(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToSingle", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t System::Xml::XmlConverter::ToSingle(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToSingle", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, buffer, offset, count);
}
inline double_t System::Xml::XmlConverter::ToDouble(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToDouble", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, value);
}
inline double_t System::Xml::XmlConverter::ToDouble(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToDouble", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, buffer, offset, count);
}
inline ::System::Decimal System::Xml::XmlConverter::ToDecimal(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToDecimal", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, value);
}
inline ::System::Decimal System::Xml::XmlConverter::ToDecimal(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToDecimal", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, buffer, offset, count);
}
inline ::System::DateTime System::Xml::XmlConverter::ToDateTime(int64_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToDateTime", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, value);
}
inline ::System::DateTime System::Xml::XmlConverter::ToDateTime(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToDateTime", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, value);
}
inline ::System::DateTime System::Xml::XmlConverter::ToDateTime(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToDateTime", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, buffer, offset, count);
}
inline ::System::Xml::UniqueId* System::Xml::XmlConverter::ToUniqueId(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToUniqueId", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::UniqueId*>(nullptr, ___internal_method, value);
}
inline ::System::Xml::UniqueId* System::Xml::XmlConverter::ToUniqueId(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToUniqueId", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::UniqueId*>(nullptr, ___internal_method, buffer, offset, count);
}
inline ::System::TimeSpan System::Xml::XmlConverter::ToTimeSpan(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToTimeSpan", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(nullptr, ___internal_method, value);
}
inline ::System::TimeSpan System::Xml::XmlConverter::ToTimeSpan(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToTimeSpan", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(nullptr, ___internal_method, buffer, offset, count);
}
inline ::System::Guid System::Xml::XmlConverter::ToGuid(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToGuid", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Guid>(nullptr, ___internal_method, value);
}
inline ::System::Guid System::Xml::XmlConverter::ToGuid(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToGuid", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Guid>(nullptr, ___internal_method, buffer, offset, count);
}
inline uint64_t System::Xml::XmlConverter::ToUInt64(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToUInt64", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, value);
}
inline uint64_t System::Xml::XmlConverter::ToUInt64(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToUInt64", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, buffer, offset, count);
}
inline ::StringW System::Xml::XmlConverter::ToString(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToString", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, buffer, offset, count);
}
inline ::StringW System::Xml::XmlConverter::ToStringUnicode(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToStringUnicode", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, buffer, offset, count);
}
inline ::ArrayW<uint8_t> System::Xml::XmlConverter::ToBytes(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToBytes", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, value);
}
inline int32_t System::Xml::XmlConverter::ToChars(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, ::ArrayW<char16_t> chars, int32_t charOffset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Xml::XmlConverter*>(),
          { "ToChars", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, buffer, offset, count, chars, charOffset);
}
inline ::StringW System::Xml::XmlConverter::ToString(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToString", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::StringW System::Xml::XmlConverter::ToString(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToString", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::StringW System::Xml::XmlConverter::ToString(int64_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToString", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::StringW System::Xml::XmlConverter::ToString(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToString", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::StringW System::Xml::XmlConverter::ToString(double_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToString", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::StringW System::Xml::XmlConverter::ToString(::System::Decimal value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToString", {}, { ::i2c::type_of<::System::Decimal>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::StringW System::Xml::XmlConverter::ToString(::System::TimeSpan value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToString", {}, { ::i2c::type_of<::System::TimeSpan>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::StringW System::Xml::XmlConverter::ToString(::System::Xml::UniqueId* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToString", {}, { ::i2c::type_of<::System::Xml::UniqueId*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::StringW System::Xml::XmlConverter::ToString(::System::Guid value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToString", {}, { ::i2c::type_of<::System::Guid>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::StringW System::Xml::XmlConverter::ToString(uint64_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToString", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::StringW System::Xml::XmlConverter::ToString(::System::DateTime value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToString", {}, { ::i2c::type_of<::System::DateTime>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::StringW System::Xml::XmlConverter::ToString(::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToString", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::StringW System::Xml::XmlConverter::ToString(::ArrayW<::System::Object*> objects) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToString", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, objects);
}
inline bool System::Xml::XmlConverter::TryParseInt32(::ArrayW<uint8_t> chars, int32_t offset, int32_t count, ::by_ref<int32_t> result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(),
                                       { "TryParseInt32", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, chars, offset, count, result);
}
inline bool System::Xml::XmlConverter::TryParseInt64(::ArrayW<uint8_t> chars, int32_t offset, int32_t count, ::by_ref<int64_t> result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(),
                                       { "TryParseInt64", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, chars, offset, count, result);
}
inline bool System::Xml::XmlConverter::TryParseSingle(::ArrayW<uint8_t> chars, int32_t offset, int32_t count, ::by_ref<float_t> result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(),
                                       { "TryParseSingle", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, chars, offset, count, result);
}
inline bool System::Xml::XmlConverter::TryParseDouble(::ArrayW<uint8_t> chars, int32_t offset, int32_t count, ::by_ref<double_t> result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(),
                                       { "TryParseDouble", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<double_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, chars, offset, count, result);
}
inline int32_t System::Xml::XmlConverter::ToInt32D2(::ArrayW<uint8_t> chars, int32_t offset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToInt32D2", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, chars, offset);
}
inline int32_t System::Xml::XmlConverter::ToInt32D4(::ArrayW<uint8_t> chars, int32_t offset, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToInt32D4", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, chars, offset, count);
}
inline int32_t System::Xml::XmlConverter::ToInt32D7(::ArrayW<uint8_t> chars, int32_t offset, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToInt32D7", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, chars, offset, count);
}
inline bool System::Xml::XmlConverter::TryParseDateTime(::ArrayW<uint8_t> chars, int32_t offset, int32_t count, ::by_ref<::System::DateTime> result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(),
                          { "TryParseDateTime", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::System::DateTime>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, chars, offset, count, result);
}
inline int32_t System::Xml::XmlConverter::ToChars(bool value, ::ArrayW<uint8_t> buffer, int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToChars", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value, buffer, offset);
}
inline int32_t System::Xml::XmlConverter::ToCharsR(int32_t value, ::ArrayW<uint8_t> chars, int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToCharsR", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value, chars, offset);
}
inline int32_t System::Xml::XmlConverter::ToChars(int32_t value, ::ArrayW<uint8_t> chars, int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToChars", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value, chars, offset);
}
inline int32_t System::Xml::XmlConverter::ToCharsR(int64_t value, ::ArrayW<uint8_t> chars, int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToCharsR", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value, chars, offset);
}
inline int32_t System::Xml::XmlConverter::ToChars(int64_t value, ::ArrayW<uint8_t> chars, int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToChars", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value, chars, offset);
}
inline bool System::Xml::XmlConverter::IsNegativeZero(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "IsNegativeZero", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value);
}
inline bool System::Xml::XmlConverter::IsNegativeZero(double_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "IsNegativeZero", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value);
}
inline int32_t System::Xml::XmlConverter::ToInfinity(bool isNegative, ::ArrayW<uint8_t> buffer, int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToInfinity", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, isNegative, buffer, offset);
}
inline int32_t System::Xml::XmlConverter::ToZero(bool isNegative, ::ArrayW<uint8_t> buffer, int32_t offset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToZero", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, isNegative, buffer, offset);
}
inline int32_t System::Xml::XmlConverter::ToChars(double_t value, ::ArrayW<uint8_t> buffer, int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToChars", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value, buffer, offset);
}
inline int32_t System::Xml::XmlConverter::ToChars(float_t value, ::ArrayW<uint8_t> buffer, int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToChars", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value, buffer, offset);
}
inline int32_t System::Xml::XmlConverter::ToChars(::System::Decimal value, ::ArrayW<uint8_t> buffer, int32_t offset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(),
                                                           { "ToChars", {}, { ::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value, buffer, offset);
}
inline int32_t System::Xml::XmlConverter::ToChars(uint64_t value, ::ArrayW<uint8_t> buffer, int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToChars", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value, buffer, offset);
}
inline int32_t System::Xml::XmlConverter::ToAsciiChars(::StringW s, ::ArrayW<uint8_t> buffer, int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToAsciiChars", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, s, buffer, offset);
}
inline int32_t System::Xml::XmlConverter::ToCharsD2(int32_t value, ::ArrayW<uint8_t> chars, int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToCharsD2", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value, chars, offset);
}
inline int32_t System::Xml::XmlConverter::ToCharsD4(int32_t value, ::ArrayW<uint8_t> chars, int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToCharsD4", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value, chars, offset);
}
inline int32_t System::Xml::XmlConverter::ToCharsD7(int32_t value, ::ArrayW<uint8_t> chars, int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "ToCharsD7", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value, chars, offset);
}
inline int32_t System::Xml::XmlConverter::ToChars(::System::DateTime value, ::ArrayW<uint8_t> chars, int32_t offset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(),
                                                           { "ToChars", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value, chars, offset);
}
inline bool System::Xml::XmlConverter::IsWhitespace(::StringW s) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "IsWhitespace", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, s);
}
inline bool System::Xml::XmlConverter::IsWhitespace(char16_t ch) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "IsWhitespace", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ch);
}
inline ::StringW System::Xml::XmlConverter::StripWhitespace(::StringW s) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "StripWhitespace", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, s);
}
inline ::StringW System::Xml::XmlConverter::Trim(::StringW s) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlConverter*>(), { "Trim", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, s);
}
// Ctor Parameters []
constexpr ::System::Xml::XmlConverter::XmlConverter() {}
