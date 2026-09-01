#pragma once
// IWYU pragma private; include "System\Xml\ValueHandle.hpp"
#include "System/Xml/zzzz__ValueHandleType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/zzzz__ValueHandle_def.hpp"
#include "System/Text/zzzz__Base64Encoding_def.hpp"
#include "System/Xml/zzzz__UniqueId_def.hpp"
#include "System/Xml/zzzz__ValueHandleType_def.hpp"
#include "System/Xml/zzzz__XmlBufferReader_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryString_def.hpp"
#include "System/Xml/zzzz__XmlSigningNodeWriter_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Xml::ValueHandle._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::ValueHandle::*)(::System::Xml::XmlBufferReader*)>(&::System::Xml::ValueHandle::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6104788;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlBufferReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ValueHandle.get_Base64Encoding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::Base64Encoding* (*)()>(&::System::Xml::ValueHandle::get_Base64Encoding)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6104794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { "get_Base64Encoding", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ValueHandle.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::ValueHandle::*)(::System::Xml::ValueHandleType)>(&::System::Xml::ValueHandle::SetValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6104868;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { "SetValue", {}, { ::i2c::type_of<::System::Xml::ValueHandleType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ValueHandle.SetDictionaryValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::ValueHandle::*)(int32_t)>(&::System::Xml::ValueHandle::SetDictionaryValue)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6104870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { "SetDictionaryValue", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ValueHandle.SetCharValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::ValueHandle::*)(int32_t)>(&::System::Xml::ValueHandle::SetCharValue)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x610488c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { "SetCharValue", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ValueHandle.SetQNameValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::ValueHandle::*)(int32_t, int32_t)>(&::System::Xml::ValueHandle::SetQNameValue)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x610489c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { "SetQNameValue", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ValueHandle.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::ValueHandle::*)(::System::Xml::ValueHandleType, int32_t, int32_t)>(&::System::Xml::ValueHandle::SetValue)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6104880;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(),
                                                             { "SetValue", {}, { ::i2c::type_of<::System::Xml::ValueHandleType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ValueHandle.IsWhitespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::ValueHandle::*)()>(&::System::Xml::ValueHandle::IsWhitespace)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x61048ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { "IsWhitespace", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ValueHandle.ToType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Xml::ValueHandle::*)()>(&::System::Xml::ValueHandle::ToType)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x6104a40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { "ToType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ValueHandle.ToBoolean
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::ValueHandle::*)()>(&::System::Xml::ValueHandle::ToBoolean)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6104c6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { "ToBoolean", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ValueHandle.ToInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::ValueHandle::*)()>(&::System::Xml::ValueHandle::ToInt)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x61052d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { "ToInt", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ValueHandle.ToLong
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Xml::ValueHandle::*)()>(&::System::Xml::ValueHandle::ToLong)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x61054c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { "ToLong", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ValueHandle.ToULong
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::System::Xml::ValueHandle::*)()>(&::System::Xml::ValueHandle::ToULong)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x6105630;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { "ToULong", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ValueHandle.ToSingle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::System::Xml::ValueHandle::*)()>(&::System::Xml::ValueHandle::ToSingle)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x6105744;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { "ToSingle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ValueHandle.ToDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::System::Xml::ValueHandle::*)()>(&::System::Xml::ValueHandle::ToDouble)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x6105904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { "ToDouble", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ValueHandle.ToDecimal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (::System::Xml::ValueHandle::*)()>(&::System::Xml::ValueHandle::ToDecimal)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x6105a6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { "ToDecimal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ValueHandle.ToDateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::Xml::ValueHandle::*)()>(&::System::Xml::ValueHandle::ToDateTime)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6105c44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { "ToDateTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ValueHandle.ToUniqueId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::UniqueId* (::System::Xml::ValueHandle::*)()>(&::System::Xml::ValueHandle::ToUniqueId)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6105d3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { "ToUniqueId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ValueHandle.ToTimeSpan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (::System::Xml::ValueHandle::*)()>(&::System::Xml::ValueHandle::ToTimeSpan)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6105e2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { "ToTimeSpan", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ValueHandle.ToGuid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::System::Xml::ValueHandle::*)()>(&::System::Xml::ValueHandle::ToGuid)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6105efc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { "ToGuid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ValueHandle.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::ValueHandle::*)()>(&::System::Xml::ValueHandle::ToString)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6105fec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { ::i2c::class_of<::System::Xml::ValueHandle*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ValueHandle.ToByteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Xml::ValueHandle::*)()>(&::System::Xml::ValueHandle::ToByteArray)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x6105ff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { "ToByteArray", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ValueHandle.GetString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::ValueHandle::*)()>(&::System::Xml::ValueHandle::GetString)> {
  constexpr static std::size_t size = 0x530;
  constexpr static std::size_t addrs = 0x6104da0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { "GetString", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ValueHandle.Equals2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::ValueHandle::*)(::StringW, bool)>(&::System::Xml::ValueHandle::Equals2)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x6106688;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { "Equals2", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ValueHandle.Sign
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::ValueHandle::*)(::System::Xml::XmlSigningNodeWriter*)>(&::System::Xml::ValueHandle::Sign)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x61067c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { "Sign", {}, { ::i2c::type_of<::System::Xml::XmlSigningNodeWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ValueHandle.ToList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (::System::Xml::ValueHandle::*)()>(&::System::Xml::ValueHandle::ToList)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x61065c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { "ToList", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ValueHandle.ToObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::ValueHandle::*)()>(&::System::Xml::ValueHandle::ToObject)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x61069bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { "ToObject", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ValueHandle.TryReadBase64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::ValueHandle::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::by_ref<int32_t>)>(&::System::Xml::ValueHandle::TryReadBase64)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x6106c68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(),
                                         { "TryReadBase64", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ValueHandle.TryReadChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::ValueHandle::*)(::ArrayW<char16_t>, int32_t, int32_t, ::by_ref<int32_t>)>(&::System::Xml::ValueHandle::TryReadChars)> {
  constexpr static std::size_t size = 0x424;
  constexpr static std::size_t addrs = 0x6106e88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(),
                                         { "TryReadChars", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ValueHandle.TryReadUnicodeChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::ValueHandle::*)(::ArrayW<char16_t>, int32_t, int32_t, ::by_ref<int32_t>)>(
    &::System::Xml::ValueHandle::TryReadUnicodeChars)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x61072ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(),
                            { "TryReadUnicodeChars", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ValueHandle.TryGetDictionaryString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::ValueHandle::*)(::by_ref<::System::Xml::XmlDictionaryString*>)>(&::System::Xml::ValueHandle::TryGetDictionaryString)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x61073c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { "TryGetDictionaryString", {}, { ::i2c::type_of<::by_ref<::System::Xml::XmlDictionaryString*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ValueHandle.TryGetByteArrayLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::ValueHandle::*)(::by_ref<int32_t>)>(&::System::Xml::ValueHandle::TryGetByteArrayLength)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6107400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { "TryGetByteArrayLength", {}, { ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ValueHandle.GetCharsText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::ValueHandle::*)()>(&::System::Xml::ValueHandle::GetCharsText)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x61063f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { "GetCharsText", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ValueHandle.GetUnicodeCharsText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::ValueHandle::*)()>(&::System::Xml::ValueHandle::GetUnicodeCharsText)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6106484;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { "GetUnicodeCharsText", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ValueHandle.GetEscapedCharsText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::ValueHandle::*)()>(&::System::Xml::ValueHandle::GetEscapedCharsText)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x61064a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { "GetEscapedCharsText", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ValueHandle.GetCharText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::ValueHandle::*)()>(&::System::Xml::ValueHandle::GetCharText)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x61064c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { "GetCharText", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ValueHandle.GetChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::ValueHandle::*)()>(&::System::Xml::ValueHandle::GetChar)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6107428;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { "GetChar", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ValueHandle.GetInt8
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::ValueHandle::*)()>(&::System::Xml::ValueHandle::GetInt8)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6104d78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { "GetInt8", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ValueHandle.GetInt16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::ValueHandle::*)()>(&::System::Xml::ValueHandle::GetInt16)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x610544c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { "GetInt16", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ValueHandle.GetInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::ValueHandle::*)()>(&::System::Xml::ValueHandle::GetInt32)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x610546c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { "GetInt32", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ValueHandle.GetInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Xml::ValueHandle::*)()>(&::System::Xml::ValueHandle::GetInt64)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x610548c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { "GetInt64", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ValueHandle.GetUInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::System::Xml::ValueHandle::*)()>(&::System::Xml::ValueHandle::GetUInt64)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x61054ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { "GetUInt64", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ValueHandle.GetSingle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::System::Xml::ValueHandle::*)()>(&::System::Xml::ValueHandle::GetSingle)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x61058c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { "GetSingle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ValueHandle.GetDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::System::Xml::ValueHandle::*)()>(&::System::Xml::ValueHandle::GetDouble)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x61058e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { "GetDouble", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ValueHandle.GetDecimal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (::System::Xml::ValueHandle::*)()>(&::System::Xml::ValueHandle::GetDecimal)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6105c24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { "GetDecimal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ValueHandle.GetUniqueId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::UniqueId* (::System::Xml::ValueHandle::*)()>(&::System::Xml::ValueHandle::GetUniqueId)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6105e0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { "GetUniqueId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ValueHandle.GetGuid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::System::Xml::ValueHandle::*)()>(&::System::Xml::ValueHandle::GetGuid)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6105fcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { "GetGuid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ValueHandle.GetBase64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::ValueHandle::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Xml::ValueHandle::GetBase64)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x61063c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { "GetBase64", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ValueHandle.GetDictionaryString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlDictionaryString* (::System::Xml::ValueHandle::*)()>(&::System::Xml::ValueHandle::GetDictionaryString)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x61065a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { "GetDictionaryString", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ValueHandle.GetQNameDictionaryText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::ValueHandle::*)()>(&::System::Xml::ValueHandle::GetQNameDictionaryText)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x61065e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { "GetQNameDictionaryText", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlBufferReader*& System::Xml::ValueHandle::__cordl_internal_get_bufferReader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bufferReader;
}
constexpr ::System::Xml::XmlBufferReader* const& System::Xml::ValueHandle::__cordl_internal_get_bufferReader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bufferReader;
}
constexpr void System::Xml::ValueHandle::__cordl_internal_set_bufferReader(::System::Xml::XmlBufferReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bufferReader = value;
}
constexpr ::System::Xml::ValueHandleType& System::Xml::ValueHandle::__cordl_internal_get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr ::System::Xml::ValueHandleType const& System::Xml::ValueHandle::__cordl_internal_get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr void System::Xml::ValueHandle::__cordl_internal_set_type(::System::Xml::ValueHandleType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___type = value;
}
constexpr int32_t& System::Xml::ValueHandle::__cordl_internal_get_offset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offset;
}
constexpr int32_t const& System::Xml::ValueHandle::__cordl_internal_get_offset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offset;
}
constexpr void System::Xml::ValueHandle::__cordl_internal_set_offset(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___offset = value;
}
constexpr int32_t& System::Xml::ValueHandle::__cordl_internal_get_length() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___length;
}
constexpr int32_t const& System::Xml::ValueHandle::__cordl_internal_get_length() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___length;
}
constexpr void System::Xml::ValueHandle::__cordl_internal_set_length(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___length = value;
}
inline void System::Xml::ValueHandle::setStaticF_base64Encoding(::System::Text::Base64Encoding* value) {
  ::cordl_internals::setStaticField<::System::Text::Base64Encoding*, "base64Encoding", ::System::Xml::ValueHandle*>(std::forward<::System::Text::Base64Encoding*>(value));
}
inline ::System::Text::Base64Encoding* System::Xml::ValueHandle::getStaticF_base64Encoding() {
  return ::cordl_internals::getStaticField<::System::Text::Base64Encoding*, "base64Encoding", ::System::Xml::ValueHandle*>();
}
inline void System::Xml::ValueHandle::setStaticF_constStrings(::ArrayW<::StringW> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW>, "constStrings", ::System::Xml::ValueHandle*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> System::Xml::ValueHandle::getStaticF_constStrings() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "constStrings", ::System::Xml::ValueHandle*>();
}
inline void System::Xml::ValueHandle::_ctor(::System::Xml::XmlBufferReader* bufferReader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlBufferReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bufferReader);
}
inline ::System::Text::Base64Encoding* System::Xml::ValueHandle::get_Base64Encoding() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { "get_Base64Encoding", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::Base64Encoding*>(nullptr, ___internal_method);
}
inline void System::Xml::ValueHandle::SetValue(::System::Xml::ValueHandleType type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { "SetValue", {}, { ::i2c::type_of<::System::Xml::ValueHandleType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline void System::Xml::ValueHandle::SetDictionaryValue(int32_t key) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { "SetDictionaryValue", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
inline void System::Xml::ValueHandle::SetCharValue(int32_t ch) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { "SetCharValue", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ch);
}
inline void System::Xml::ValueHandle::SetQNameValue(int32_t prefix, int32_t key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { "SetQNameValue", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, key);
}
inline void System::Xml::ValueHandle::SetValue(::System::Xml::ValueHandleType type, int32_t offset, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(),
                                                           { "SetValue", {}, { ::i2c::type_of<::System::Xml::ValueHandleType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, offset, length);
}
inline bool System::Xml::ValueHandle::IsWhitespace() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { "IsWhitespace", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Type* System::Xml::ValueHandle::ToType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { "ToType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline bool System::Xml::ValueHandle::ToBoolean() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { "ToBoolean", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t System::Xml::ValueHandle::ToInt() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { "ToInt", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int64_t System::Xml::ValueHandle::ToLong() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { "ToLong", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline uint64_t System::Xml::ValueHandle::ToULong() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { "ToULong", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method);
}
inline float_t System::Xml::ValueHandle::ToSingle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { "ToSingle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline double_t System::Xml::ValueHandle::ToDouble() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { "ToDouble", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline ::System::Decimal System::Xml::ValueHandle::ToDecimal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { "ToDecimal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal>(this, ___internal_method);
}
inline ::System::DateTime System::Xml::ValueHandle::ToDateTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { "ToDateTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline ::System::Xml::UniqueId* System::Xml::ValueHandle::ToUniqueId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { "ToUniqueId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::UniqueId*>(this, ___internal_method);
}
inline ::System::TimeSpan System::Xml::ValueHandle::ToTimeSpan() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { "ToTimeSpan", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(this, ___internal_method);
}
inline ::System::Guid System::Xml::ValueHandle::ToGuid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { "ToGuid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Guid>(this, ___internal_method);
}
inline ::StringW System::Xml::ValueHandle::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::ValueHandle*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> System::Xml::ValueHandle::ToByteArray() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { "ToByteArray", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::StringW System::Xml::ValueHandle::GetString() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { "GetString", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::Xml::ValueHandle::Equals2(::StringW str, bool checkLower) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { "Equals2", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, str, checkLower);
}
inline void System::Xml::ValueHandle::Sign(::System::Xml::XmlSigningNodeWriter* writer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { "Sign", {}, { ::i2c::type_of<::System::Xml::XmlSigningNodeWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
inline ::ArrayW<::System::Object*> System::Xml::ValueHandle::ToList() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { "ToList", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(this, ___internal_method);
}
inline ::System::Object* System::Xml::ValueHandle::ToObject() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { "ToObject", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline bool System::Xml::ValueHandle::TryReadBase64(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, ::by_ref<int32_t> actual) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(),
                                       { "TryReadBase64", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, buffer, offset, count, actual);
}
inline bool System::Xml::ValueHandle::TryReadChars(::ArrayW<char16_t> chars, int32_t offset, int32_t count, ::by_ref<int32_t> actual) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(),
                                       { "TryReadChars", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, chars, offset, count, actual);
}
inline bool System::Xml::ValueHandle::TryReadUnicodeChars(::ArrayW<char16_t> chars, int32_t offset, int32_t count, ::by_ref<int32_t> actual) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(),
                          { "TryReadUnicodeChars", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, chars, offset, count, actual);
}
inline bool System::Xml::ValueHandle::TryGetDictionaryString(::by_ref<::System::Xml::XmlDictionaryString*> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { "TryGetDictionaryString", {}, { ::i2c::type_of<::by_ref<::System::Xml::XmlDictionaryString*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool System::Xml::ValueHandle::TryGetByteArrayLength(::by_ref<int32_t> length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { "TryGetByteArrayLength", {}, { ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, length);
}
inline ::StringW System::Xml::ValueHandle::GetCharsText() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { "GetCharsText", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Xml::ValueHandle::GetUnicodeCharsText() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { "GetUnicodeCharsText", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Xml::ValueHandle::GetEscapedCharsText() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { "GetEscapedCharsText", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Xml::ValueHandle::GetCharText() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { "GetCharText", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t System::Xml::ValueHandle::GetChar() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { "GetChar", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Xml::ValueHandle::GetInt8() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { "GetInt8", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Xml::ValueHandle::GetInt16() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { "GetInt16", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Xml::ValueHandle::GetInt32() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { "GetInt32", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int64_t System::Xml::ValueHandle::GetInt64() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { "GetInt64", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline uint64_t System::Xml::ValueHandle::GetUInt64() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { "GetUInt64", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method);
}
inline float_t System::Xml::ValueHandle::GetSingle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { "GetSingle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline double_t System::Xml::ValueHandle::GetDouble() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { "GetDouble", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline ::System::Decimal System::Xml::ValueHandle::GetDecimal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { "GetDecimal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal>(this, ___internal_method);
}
inline ::System::Xml::UniqueId* System::Xml::ValueHandle::GetUniqueId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { "GetUniqueId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::UniqueId*>(this, ___internal_method);
}
inline ::System::Guid System::Xml::ValueHandle::GetGuid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { "GetGuid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Guid>(this, ___internal_method);
}
inline void System::Xml::ValueHandle::GetBase64(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { "GetBase64", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, offset, count);
}
inline ::System::Xml::XmlDictionaryString* System::Xml::ValueHandle::GetDictionaryString() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { "GetDictionaryString", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlDictionaryString*>(this, ___internal_method);
}
inline ::StringW System::Xml::ValueHandle::GetQNameDictionaryText() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ValueHandle*>(), { "GetQNameDictionaryText", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Xml::ValueHandle* System::Xml::ValueHandle::New_ctor(::System::Xml::XmlBufferReader* bufferReader) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::ValueHandle*>(bufferReader));
}
// Ctor Parameters []
constexpr ::System::Xml::ValueHandle::ValueHandle() {}
