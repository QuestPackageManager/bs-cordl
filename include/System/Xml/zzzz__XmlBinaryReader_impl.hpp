#pragma once
// IWYU pragma private; include "System/Xml/XmlBinaryReader.hpp"
#include "System/Xml/zzzz__XmlBaseReader_impl.hpp"
#include "System/Xml/zzzz__XmlBinaryNodeType_impl.hpp"
#include "System/Xml/zzzz__XmlBinaryReader_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Xml/zzzz__IXmlDictionary_def.hpp"
#include "System/Xml/zzzz__OnXmlDictionaryReaderClose_def.hpp"
#include "System/Xml/zzzz__PrefixHandle_def.hpp"
#include "System/Xml/zzzz__StringHandle_def.hpp"
#include "System/Xml/zzzz__ValueHandleType_def.hpp"
#include "System/Xml/zzzz__ValueHandle_def.hpp"
#include "System/Xml/zzzz__XmlBaseReader_def.hpp"
#include "System/Xml/zzzz__XmlBinaryNodeType_def.hpp"
#include "System/Xml/zzzz__XmlBinaryReaderSession_def.hpp"
#include "System/Xml/zzzz__XmlBinaryReader_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryReaderQuotas_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryString_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "System/zzzz__Type_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::System::Xml::XmlBinaryReader_ArrayState::XmlBinaryReader_ArrayState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::XmlBinaryReader_ArrayState::XmlBinaryReader_ArrayState() {}
constexpr ::System::Xml::XmlBinaryReader_ArrayState System::Xml::XmlBinaryReader_ArrayState::None{ static_cast<int32_t>(0x0) };
constexpr ::System::Xml::XmlBinaryReader_ArrayState System::Xml::XmlBinaryReader_ArrayState::Element{ static_cast<int32_t>(0x1) };
constexpr ::System::Xml::XmlBinaryReader_ArrayState System::Xml::XmlBinaryReader_ArrayState::Content{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::System::Xml::XmlBinaryReader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryReader::*)()>(&::System::Xml::XmlBinaryReader::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x653348c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryReader.SetInput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryReader::*)(::System::IO::Stream*, ::System::Xml::IXmlDictionary*, ::System::Xml::XmlDictionaryReaderQuotas*,
                                                                                                ::System::Xml::XmlBinaryReaderSession*, ::System::Xml::OnXmlDictionaryReaderClose*)>(
    &::System::Xml::XmlBinaryReader::SetInput)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x65334e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(),
                                         { "SetInput",
                                           {},
                                           { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Xml::IXmlDictionary*>(), ::i2c::type_of<::System::Xml::XmlDictionaryReaderQuotas*>(),
                                             ::i2c::type_of<::System::Xml::XmlBinaryReaderSession*>(), ::i2c::type_of<::System::Xml::OnXmlDictionaryReaderClose*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryReader.MoveToInitial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryReader::*)(::System::Xml::XmlDictionaryReaderQuotas*, ::System::Xml::XmlBinaryReaderSession*,
                                                                                                ::System::Xml::OnXmlDictionaryReaderClose*)>(&::System::Xml::XmlBinaryReader::MoveToInitial)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6533574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(),
                                                             { "MoveToInitial",
                                                               {},
                                                               { ::i2c::type_of<::System::Xml::XmlDictionaryReaderQuotas*>(), ::i2c::type_of<::System::Xml::XmlBinaryReaderSession*>(),
                                                                 ::i2c::type_of<::System::Xml::OnXmlDictionaryReaderClose*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryReader.Close
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryReader::*)()>(&::System::Xml::XmlBinaryReader::Close)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6533654;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { ::i2c::class_of<::System::Xml::XmlBinaryReader*>(), 52 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryReader.ReadElementContentAsString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlBinaryReader::*)()>(&::System::Xml::XmlBinaryReader::ReadElementContentAsString)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x6533740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { ::i2c::class_of<::System::Xml::XmlBinaryReader*>(), 38 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryReader.ReadElementContentAsBoolean
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlBinaryReader::*)()>(&::System::Xml::XmlBinaryReader::ReadElementContentAsBoolean)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x6533ad4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { ::i2c::class_of<::System::Xml::XmlBinaryReader*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryReader.ReadElementContentAsInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlBinaryReader::*)()>(&::System::Xml::XmlBinaryReader::ReadElementContentAsInt)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x6533c2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { ::i2c::class_of<::System::Xml::XmlBinaryReader*>(), 36 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryReader.CanOptimizeReadElementContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlBinaryReader::*)()>(&::System::Xml::XmlBinaryReader::CanOptimizeReadElementContent)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x65338a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { "CanOptimizeReadElementContent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryReader.ReadElementContentAsFloat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::System::Xml::XmlBinaryReader::*)()>(&::System::Xml::XmlBinaryReader::ReadElementContentAsFloat)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6533ea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { ::i2c::class_of<::System::Xml::XmlBinaryReader*>(), 34 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryReader.ReadElementContentAsDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::System::Xml::XmlBinaryReader::*)()>(&::System::Xml::XmlBinaryReader::ReadElementContentAsDouble)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6534010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { ::i2c::class_of<::System::Xml::XmlBinaryReader*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryReader.ReadElementContentAsDecimal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (::System::Xml::XmlBinaryReader::*)()>(&::System::Xml::XmlBinaryReader::ReadElementContentAsDecimal)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x65341f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { ::i2c::class_of<::System::Xml::XmlBinaryReader*>(), 35 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryReader.ReadElementContentAsDateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::Xml::XmlBinaryReader::*)()>(&::System::Xml::XmlBinaryReader::ReadElementContentAsDateTime)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6534438;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { ::i2c::class_of<::System::Xml::XmlBinaryReader*>(), 32 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryReader.ReadElementContentAsTimeSpan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (::System::Xml::XmlBinaryReader::*)()>(&::System::Xml::XmlBinaryReader::ReadElementContentAsTimeSpan)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6534698;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { ::i2c::class_of<::System::Xml::XmlBinaryReader*>(), 92 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryReader.ReadElementContentAsGuid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::System::Xml::XmlBinaryReader::*)()>(&::System::Xml::XmlBinaryReader::ReadElementContentAsGuid)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x65348ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { ::i2c::class_of<::System::Xml::XmlBinaryReader*>(), 91 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryReader.TryGetBase64ContentLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlBinaryReader::*)(::by_ref<int32_t>)>(&::System::Xml::XmlBinaryReader::TryGetBase64ContentLength)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x65349f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { ::i2c::class_of<::System::Xml::XmlBinaryReader*>(), 84 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryReader.ReadTextWithEndElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryReader::*)()>(&::System::Xml::XmlBinaryReader::ReadTextWithEndElement)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x65339bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { "ReadTextWithEndElement", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryReader.MoveToAtomicTextWithEndElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlBaseReader_XmlAtomicTextNode* (::System::Xml::XmlBinaryReader::*)()>(
    &::System::Xml::XmlBinaryReader::MoveToAtomicTextWithEndElement)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6535728;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { "MoveToAtomicTextWithEndElement", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryReader.Read
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlBinaryReader::*)()>(&::System::Xml::XmlBinaryReader::Read)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6535748;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { ::i2c::class_of<::System::Xml::XmlBinaryReader*>(), 50 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryReader.ReadNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlBinaryReader::*)()>(&::System::Xml::XmlBinaryReader::ReadNode)> {
  constexpr static std::size_t size = 0x9f0;
  constexpr static std::size_t addrs = 0x6534d38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { "ReadNode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryReader.VerifyWhitespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryReader::*)()>(&::System::Xml::XmlBinaryReader::VerifyWhitespace)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6535af0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { "VerifyWhitespace", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryReader.ReadAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryReader::*)()>(&::System::Xml::XmlBinaryReader::ReadAttributes)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6535998;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { "ReadAttributes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryReader.ReadAttributes2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryReader::*)()>(&::System::Xml::XmlBinaryReader::ReadAttributes2)> {
  constexpr static std::size_t size = 0x454;
  constexpr static std::size_t addrs = 0x65363b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { "ReadAttributes2", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryReader.ReadText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryReader::*)(::System::Xml::XmlBaseReader_XmlTextNode*, ::System::Xml::ValueHandleType, int32_t)>(
    &::System::Xml::XmlBinaryReader::ReadText)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6535b2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(),
                            { "ReadText", {}, { ::i2c::type_of<::System::Xml::XmlBaseReader_XmlTextNode*>(), ::i2c::type_of<::System::Xml::ValueHandleType>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryReader.ReadBinaryText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryReader::*)(::System::Xml::XmlBaseReader_XmlTextNode*, int32_t)>(&::System::Xml::XmlBinaryReader::ReadBinaryText)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6535e6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { "ReadBinaryText", {}, { ::i2c::type_of<::System::Xml::XmlBaseReader_XmlTextNode*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryReader.ReadPartialUTF8Text
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryReader::*)(bool, int32_t)>(&::System::Xml::XmlBinaryReader::ReadPartialUTF8Text)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x6535bd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { "ReadPartialUTF8Text", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryReader.ReadUnicodeText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryReader::*)(bool, int32_t)>(&::System::Xml::XmlBinaryReader::ReadUnicodeText)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6535dd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { "ReadUnicodeText", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryReader.ReadPartialUnicodeText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryReader::*)(bool, int32_t)>(&::System::Xml::XmlBinaryReader::ReadPartialUnicodeText)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x6536994;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { "ReadPartialUnicodeText", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryReader.ReadPartialBinaryText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryReader::*)(bool, int32_t)>(&::System::Xml::XmlBinaryReader::ReadPartialBinaryText)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x6535e78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { "ReadPartialBinaryText", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryReader.InsertNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryReader::*)(::System::Xml::XmlBinaryNodeType, int32_t)>(&::System::Xml::XmlBinaryReader::InsertNode)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x65368d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { "InsertNode", {}, { ::i2c::type_of<::System::Xml::XmlBinaryNodeType>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryReader.ReadAttributeText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryReader::*)(::System::Xml::XmlBaseReader_XmlAttributeTextNode*)>(
    &::System::Xml::XmlBinaryReader::ReadAttributeText)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6536808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { "ReadAttributeText", {}, { ::i2c::type_of<::System::Xml::XmlBaseReader_XmlAttributeTextNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryReader.ReadName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryReader::*)(::System::Xml::ValueHandle*)>(&::System::Xml::XmlBinaryReader::ReadName)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6535a70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { "ReadName", {}, { ::i2c::type_of<::System::Xml::ValueHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryReader.ReadName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryReader::*)(::System::Xml::StringHandle*)>(&::System::Xml::XmlBinaryReader::ReadName)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6535918;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { "ReadName", {}, { ::i2c::type_of<::System::Xml::StringHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryReader.ReadName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryReader::*)(::System::Xml::PrefixHandle*)>(&::System::Xml::XmlBinaryReader::ReadName)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x65359c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { "ReadName", {}, { ::i2c::type_of<::System::Xml::PrefixHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryReader.ReadDictionaryName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryReader::*)(::System::Xml::StringHandle*)>(&::System::Xml::XmlBinaryReader::ReadDictionaryName)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6535a48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { "ReadDictionaryName", {}, { ::i2c::type_of<::System::Xml::StringHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryReader.GetNodeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlBinaryNodeType (::System::Xml::XmlBinaryReader::*)()>(&::System::Xml::XmlBinaryReader::GetNodeType)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x65338c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { "GetNodeType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryReader.SkipNodeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryReader::*)()>(&::System::Xml::XmlBinaryReader::SkipNodeType)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x65338e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { "SkipNodeType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryReader.ReadDictionaryKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlBinaryReader::*)()>(&::System::Xml::XmlBinaryReader::ReadDictionaryKey)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x65339d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { "ReadDictionaryKey", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryReader.ReadMultiByteUInt31
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlBinaryReader::*)()>(&::System::Xml::XmlBinaryReader::ReadMultiByteUInt31)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6536cac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { "ReadMultiByteUInt31", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryReader.ReadUInt8
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlBinaryReader::*)()>(&::System::Xml::XmlBinaryReader::ReadUInt8)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6533908;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { "ReadUInt8", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryReader.ReadUInt16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlBinaryReader::*)()>(&::System::Xml::XmlBinaryReader::ReadUInt16)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6535db0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { "ReadUInt16", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryReader.ReadUInt31
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlBinaryReader::*)()>(&::System::Xml::XmlBinaryReader::ReadUInt31)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6535dc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { "ReadUInt31", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryReader.IsValidArrayType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlBinaryReader::*)(::System::Xml::XmlBinaryNodeType)>(&::System::Xml::XmlBinaryReader::IsValidArrayType)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6536edc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { "IsValidArrayType", {}, { ::i2c::type_of<::System::Xml::XmlBinaryNodeType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryReader.ReadArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryReader::*)()>(&::System::Xml::XmlBinaryReader::ReadArray)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6536000;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { "ReadArray", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryReader.MoveToArrayElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryReader::*)()>(&::System::Xml::XmlBinaryReader::MoveToArrayElement)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x653581c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { "MoveToArrayElement", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryReader.SkipArrayElements
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryReader::*)(int32_t)>(&::System::Xml::XmlBinaryReader::SkipArrayElements)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6536f20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { "SkipArrayElements", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryReader.IsStartArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlBinaryReader::*)(::by_ref<::System::Type*>)>(&::System::Xml::XmlBinaryReader::IsStartArray)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x6536f54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { ::i2c::class_of<::System::Xml::XmlBinaryReader*>(), 97 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryReader.TryGetArrayLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlBinaryReader::*)(::by_ref<int32_t>)>(&::System::Xml::XmlBinaryReader::TryGetArrayLength)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6537178;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { ::i2c::class_of<::System::Xml::XmlBinaryReader*>(), 98 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryReader.IsStartArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlBinaryReader::*)(::StringW, ::StringW, ::System::Xml::XmlBinaryNodeType)>(
    &::System::Xml::XmlBinaryReader::IsStartArray)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x65371a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(),
                                                { "IsStartArray", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlBinaryNodeType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryReader.IsStartArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlBinaryReader::*)(::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*,
                                                                                                ::System::Xml::XmlBinaryNodeType)>(&::System::Xml::XmlBinaryReader::IsStartArray)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6537204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(),
                            { "IsStartArray",
                              {},
                              { ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlBinaryNodeType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryReader.CheckArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBinaryReader::*)(::System::Array*, int32_t, int32_t)>(&::System::Xml::XmlBinaryReader::CheckArray)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x6537260;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { "CheckArray", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryReader.ReadArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlBinaryReader::*)(::ArrayW<bool>, int32_t, int32_t)>(&::System::Xml::XmlBinaryReader::ReadArray)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6537494;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { "ReadArray", {}, { ::i2c::type_of<::ArrayW<bool>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryReader.ReadArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlBinaryReader::*)(::StringW, ::StringW, ::ArrayW<bool>, int32_t, int32_t)>(
    &::System::Xml::XmlBinaryReader::ReadArray)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6537568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { ::i2c::class_of<::System::Xml::XmlBinaryReader*>(), 99 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryReader.ReadArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlBinaryReader::*)(::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*, ::ArrayW<bool>, int32_t,
                                                                                                   int32_t)>(&::System::Xml::XmlBinaryReader::ReadArray)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6537618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { ::i2c::class_of<::System::Xml::XmlBinaryReader*>(), 100 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryReader.ReadArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlBinaryReader::*)(::ArrayW<int16_t>, int32_t, int32_t)>(&::System::Xml::XmlBinaryReader::ReadArray)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x65376c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { "ReadArray", {}, { ::i2c::type_of<::ArrayW<int16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryReader.ReadArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlBinaryReader::*)(::StringW, ::StringW, ::ArrayW<int16_t>, int32_t, int32_t)>(
    &::System::Xml::XmlBinaryReader::ReadArray)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6537794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { ::i2c::class_of<::System::Xml::XmlBinaryReader*>(), 101 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryReader.ReadArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlBinaryReader::*)(::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*, ::ArrayW<int16_t>, int32_t,
                                                                                                   int32_t)>(&::System::Xml::XmlBinaryReader::ReadArray)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6537844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { ::i2c::class_of<::System::Xml::XmlBinaryReader*>(), 102 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryReader.ReadArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlBinaryReader::*)(::ArrayW<int32_t>, int32_t, int32_t)>(&::System::Xml::XmlBinaryReader::ReadArray)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x65378f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { "ReadArray", {}, { ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryReader.ReadArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlBinaryReader::*)(::StringW, ::StringW, ::ArrayW<int32_t>, int32_t, int32_t)>(
    &::System::Xml::XmlBinaryReader::ReadArray)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x65379c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { ::i2c::class_of<::System::Xml::XmlBinaryReader*>(), 103 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryReader.ReadArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlBinaryReader::*)(::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*, ::ArrayW<int32_t>, int32_t,
                                                                                                   int32_t)>(&::System::Xml::XmlBinaryReader::ReadArray)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6537a70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { ::i2c::class_of<::System::Xml::XmlBinaryReader*>(), 104 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryReader.ReadArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlBinaryReader::*)(::ArrayW<int64_t>, int32_t, int32_t)>(&::System::Xml::XmlBinaryReader::ReadArray)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6537b20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { "ReadArray", {}, { ::i2c::type_of<::ArrayW<int64_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryReader.ReadArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlBinaryReader::*)(::StringW, ::StringW, ::ArrayW<int64_t>, int32_t, int32_t)>(
    &::System::Xml::XmlBinaryReader::ReadArray)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6537bec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { ::i2c::class_of<::System::Xml::XmlBinaryReader*>(), 105 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryReader.ReadArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlBinaryReader::*)(::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*, ::ArrayW<int64_t>, int32_t,
                                                                                                   int32_t)>(&::System::Xml::XmlBinaryReader::ReadArray)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6537c9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { ::i2c::class_of<::System::Xml::XmlBinaryReader*>(), 106 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryReader.ReadArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlBinaryReader::*)(::ArrayW<float_t>, int32_t, int32_t)>(&::System::Xml::XmlBinaryReader::ReadArray)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6537d4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { "ReadArray", {}, { ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryReader.ReadArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlBinaryReader::*)(::StringW, ::StringW, ::ArrayW<float_t>, int32_t, int32_t)>(
    &::System::Xml::XmlBinaryReader::ReadArray)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6537e18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { ::i2c::class_of<::System::Xml::XmlBinaryReader*>(), 107 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryReader.ReadArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlBinaryReader::*)(::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*, ::ArrayW<float_t>, int32_t,
                                                                                                   int32_t)>(&::System::Xml::XmlBinaryReader::ReadArray)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6537ec8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { ::i2c::class_of<::System::Xml::XmlBinaryReader*>(), 108 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryReader.ReadArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlBinaryReader::*)(::ArrayW<double_t>, int32_t, int32_t)>(&::System::Xml::XmlBinaryReader::ReadArray)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6537f78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { "ReadArray", {}, { ::i2c::type_of<::ArrayW<double_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryReader.ReadArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlBinaryReader::*)(::StringW, ::StringW, ::ArrayW<double_t>, int32_t, int32_t)>(
    &::System::Xml::XmlBinaryReader::ReadArray)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6538044;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { ::i2c::class_of<::System::Xml::XmlBinaryReader*>(), 109 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryReader.ReadArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlBinaryReader::*)(::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*, ::ArrayW<double_t>,
                                                                                                   int32_t, int32_t)>(&::System::Xml::XmlBinaryReader::ReadArray)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x65380f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { ::i2c::class_of<::System::Xml::XmlBinaryReader*>(), 110 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryReader.ReadArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlBinaryReader::*)(::ArrayW<::System::Decimal>, int32_t, int32_t)>(&::System::Xml::XmlBinaryReader::ReadArray)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x65381a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(),
                                                             { "ReadArray", {}, { ::i2c::type_of<::ArrayW<::System::Decimal>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryReader.ReadArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlBinaryReader::*)(::StringW, ::StringW, ::ArrayW<::System::Decimal>, int32_t, int32_t)>(
    &::System::Xml::XmlBinaryReader::ReadArray)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6538270;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { ::i2c::class_of<::System::Xml::XmlBinaryReader*>(), 111 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryReader.ReadArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlBinaryReader::*)(::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*,
                                                                                                   ::ArrayW<::System::Decimal>, int32_t, int32_t)>(&::System::Xml::XmlBinaryReader::ReadArray)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6538320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { ::i2c::class_of<::System::Xml::XmlBinaryReader*>(), 112 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryReader.ReadArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlBinaryReader::*)(::ArrayW<::System::DateTime>, int32_t, int32_t)>(&::System::Xml::XmlBinaryReader::ReadArray)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x65383d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(),
                                                             { "ReadArray", {}, { ::i2c::type_of<::ArrayW<::System::DateTime>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryReader.ReadArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlBinaryReader::*)(::StringW, ::StringW, ::ArrayW<::System::DateTime>, int32_t, int32_t)>(
    &::System::Xml::XmlBinaryReader::ReadArray)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x65384c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { ::i2c::class_of<::System::Xml::XmlBinaryReader*>(), 113 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryReader.ReadArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlBinaryReader::*)(::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*,
                                                                                                   ::ArrayW<::System::DateTime>, int32_t, int32_t)>(&::System::Xml::XmlBinaryReader::ReadArray)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6538570;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { ::i2c::class_of<::System::Xml::XmlBinaryReader*>(), 114 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryReader.ReadArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlBinaryReader::*)(::ArrayW<::System::Guid>, int32_t, int32_t)>(&::System::Xml::XmlBinaryReader::ReadArray)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6538620;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(),
                                                             { "ReadArray", {}, { ::i2c::type_of<::ArrayW<::System::Guid>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryReader.ReadArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlBinaryReader::*)(::StringW, ::StringW, ::ArrayW<::System::Guid>, int32_t, int32_t)>(
    &::System::Xml::XmlBinaryReader::ReadArray)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6538710;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { ::i2c::class_of<::System::Xml::XmlBinaryReader*>(), 115 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryReader.ReadArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlBinaryReader::*)(::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*, ::ArrayW<::System::Guid>,
                                                                                                   int32_t, int32_t)>(&::System::Xml::XmlBinaryReader::ReadArray)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x65387c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { ::i2c::class_of<::System::Xml::XmlBinaryReader*>(), 116 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryReader.ReadArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlBinaryReader::*)(::ArrayW<::System::TimeSpan>, int32_t, int32_t)>(&::System::Xml::XmlBinaryReader::ReadArray)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6538870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(),
                                                             { "ReadArray", {}, { ::i2c::type_of<::ArrayW<::System::TimeSpan>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryReader.ReadArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlBinaryReader::*)(::StringW, ::StringW, ::ArrayW<::System::TimeSpan>, int32_t, int32_t)>(
    &::System::Xml::XmlBinaryReader::ReadArray)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6538960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { ::i2c::class_of<::System::Xml::XmlBinaryReader*>(), 117 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBinaryReader.ReadArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlBinaryReader::*)(::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*,
                                                                                                   ::ArrayW<::System::TimeSpan>, int32_t, int32_t)>(&::System::Xml::XmlBinaryReader::ReadArray)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6538a10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { ::i2c::class_of<::System::Xml::XmlBinaryReader*>(), 118 }));
    return ___internal_method;
  }
};
constexpr bool& System::Xml::XmlBinaryReader::__cordl_internal_get_isTextWithEndElement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isTextWithEndElement;
}
constexpr bool const& System::Xml::XmlBinaryReader::__cordl_internal_get_isTextWithEndElement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isTextWithEndElement;
}
constexpr void System::Xml::XmlBinaryReader::__cordl_internal_set_isTextWithEndElement(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isTextWithEndElement = value;
}
constexpr bool& System::Xml::XmlBinaryReader::__cordl_internal_get_buffered() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buffered;
}
constexpr bool const& System::Xml::XmlBinaryReader::__cordl_internal_get_buffered() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buffered;
}
constexpr void System::Xml::XmlBinaryReader::__cordl_internal_set_buffered(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___buffered = value;
}
constexpr ::System::Xml::XmlBinaryReader_ArrayState& System::Xml::XmlBinaryReader::__cordl_internal_get_arrayState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___arrayState;
}
constexpr ::System::Xml::XmlBinaryReader_ArrayState const& System::Xml::XmlBinaryReader::__cordl_internal_get_arrayState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___arrayState;
}
constexpr void System::Xml::XmlBinaryReader::__cordl_internal_set_arrayState(::System::Xml::XmlBinaryReader_ArrayState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___arrayState = value;
}
constexpr int32_t& System::Xml::XmlBinaryReader::__cordl_internal_get_arrayCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___arrayCount;
}
constexpr int32_t const& System::Xml::XmlBinaryReader::__cordl_internal_get_arrayCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___arrayCount;
}
constexpr void System::Xml::XmlBinaryReader::__cordl_internal_set_arrayCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___arrayCount = value;
}
constexpr int32_t& System::Xml::XmlBinaryReader::__cordl_internal_get_maxBytesPerRead() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxBytesPerRead;
}
constexpr int32_t const& System::Xml::XmlBinaryReader::__cordl_internal_get_maxBytesPerRead() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxBytesPerRead;
}
constexpr void System::Xml::XmlBinaryReader::__cordl_internal_set_maxBytesPerRead(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxBytesPerRead = value;
}
constexpr ::System::Xml::XmlBinaryNodeType& System::Xml::XmlBinaryReader::__cordl_internal_get_arrayNodeType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___arrayNodeType;
}
constexpr ::System::Xml::XmlBinaryNodeType const& System::Xml::XmlBinaryReader::__cordl_internal_get_arrayNodeType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___arrayNodeType;
}
constexpr void System::Xml::XmlBinaryReader::__cordl_internal_set_arrayNodeType(::System::Xml::XmlBinaryNodeType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___arrayNodeType = value;
}
constexpr ::System::Xml::OnXmlDictionaryReaderClose*& System::Xml::XmlBinaryReader::__cordl_internal_get_onClose() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onClose;
}
constexpr ::System::Xml::OnXmlDictionaryReaderClose* const& System::Xml::XmlBinaryReader::__cordl_internal_get_onClose() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onClose;
}
constexpr void System::Xml::XmlBinaryReader::__cordl_internal_set_onClose(::System::Xml::OnXmlDictionaryReaderClose* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___onClose = value;
}
inline void System::Xml::XmlBinaryReader::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlBinaryReader::SetInput(::System::IO::Stream* stream, ::System::Xml::IXmlDictionary* dictionary, ::System::Xml::XmlDictionaryReaderQuotas* quotas,
                                                   ::System::Xml::XmlBinaryReaderSession* session, ::System::Xml::OnXmlDictionaryReaderClose* onClose) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(),
                                       { "SetInput",
                                         {},
                                         { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Xml::IXmlDictionary*>(), ::i2c::type_of<::System::Xml::XmlDictionaryReaderQuotas*>(),
                                           ::i2c::type_of<::System::Xml::XmlBinaryReaderSession*>(), ::i2c::type_of<::System::Xml::OnXmlDictionaryReaderClose*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, dictionary, quotas, session, onClose);
}
inline void System::Xml::XmlBinaryReader::MoveToInitial(::System::Xml::XmlDictionaryReaderQuotas* quotas, ::System::Xml::XmlBinaryReaderSession* session,
                                                        ::System::Xml::OnXmlDictionaryReaderClose* onClose) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { "MoveToInitial",
                                                                                {},
                                                                                { ::i2c::type_of<::System::Xml::XmlDictionaryReaderQuotas*>(), ::i2c::type_of<::System::Xml::XmlBinaryReaderSession*>(),
                                                                                  ::i2c::type_of<::System::Xml::OnXmlDictionaryReaderClose*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, quotas, session, onClose);
}
inline void System::Xml::XmlBinaryReader::Close() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryReader*>(), 52 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlBinaryReader::ReadElementContentAsString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryReader*>(), 38 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::Xml::XmlBinaryReader::ReadElementContentAsBoolean() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryReader*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t System::Xml::XmlBinaryReader::ReadElementContentAsInt() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryReader*>(), 36 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Xml::XmlBinaryReader::CanOptimizeReadElementContent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { "CanOptimizeReadElementContent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t System::Xml::XmlBinaryReader::ReadElementContentAsFloat() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryReader*>(), 34 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline double_t System::Xml::XmlBinaryReader::ReadElementContentAsDouble() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryReader*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline ::System::Decimal System::Xml::XmlBinaryReader::ReadElementContentAsDecimal() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryReader*>(), 35 })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal>(this, ___internal_method);
}
inline ::System::DateTime System::Xml::XmlBinaryReader::ReadElementContentAsDateTime() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryReader*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline ::System::TimeSpan System::Xml::XmlBinaryReader::ReadElementContentAsTimeSpan() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryReader*>(), 92 })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(this, ___internal_method);
}
inline ::System::Guid System::Xml::XmlBinaryReader::ReadElementContentAsGuid() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryReader*>(), 91 })));
  return ::cordl_internals::RunMethodRethrow<::System::Guid>(this, ___internal_method);
}
inline bool System::Xml::XmlBinaryReader::TryGetBase64ContentLength(::by_ref<int32_t> length) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryReader*>(), 84 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, length);
}
inline void System::Xml::XmlBinaryReader::ReadTextWithEndElement() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { "ReadTextWithEndElement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::XmlBaseReader_XmlAtomicTextNode* System::Xml::XmlBinaryReader::MoveToAtomicTextWithEndElement() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { "MoveToAtomicTextWithEndElement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlBaseReader_XmlAtomicTextNode*>(this, ___internal_method);
}
inline bool System::Xml::XmlBinaryReader::Read() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryReader*>(), 50 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Xml::XmlBinaryReader::ReadNode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { "ReadNode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Xml::XmlBinaryReader::VerifyWhitespace() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { "VerifyWhitespace", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlBinaryReader::ReadAttributes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { "ReadAttributes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlBinaryReader::ReadAttributes2() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { "ReadAttributes2", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlBinaryReader::ReadText(::System::Xml::XmlBaseReader_XmlTextNode* textNode, ::System::Xml::ValueHandleType type, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(),
                          { "ReadText", {}, { ::i2c::type_of<::System::Xml::XmlBaseReader_XmlTextNode*>(), ::i2c::type_of<::System::Xml::ValueHandleType>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, textNode, type, length);
}
inline void System::Xml::XmlBinaryReader::ReadBinaryText(::System::Xml::XmlBaseReader_XmlTextNode* textNode, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { "ReadBinaryText", {}, { ::i2c::type_of<::System::Xml::XmlBaseReader_XmlTextNode*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, textNode, length);
}
inline void System::Xml::XmlBinaryReader::ReadPartialUTF8Text(bool withEndElement, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { "ReadPartialUTF8Text", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, withEndElement, length);
}
inline void System::Xml::XmlBinaryReader::ReadUnicodeText(bool withEndElement, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { "ReadUnicodeText", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, withEndElement, length);
}
inline void System::Xml::XmlBinaryReader::ReadPartialUnicodeText(bool withEndElement, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { "ReadPartialUnicodeText", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, withEndElement, length);
}
inline void System::Xml::XmlBinaryReader::ReadPartialBinaryText(bool withEndElement, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { "ReadPartialBinaryText", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, withEndElement, length);
}
inline void System::Xml::XmlBinaryReader::InsertNode(::System::Xml::XmlBinaryNodeType nodeType, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { "InsertNode", {}, { ::i2c::type_of<::System::Xml::XmlBinaryNodeType>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nodeType, length);
}
inline void System::Xml::XmlBinaryReader::ReadAttributeText(::System::Xml::XmlBaseReader_XmlAttributeTextNode* textNode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { "ReadAttributeText", {}, { ::i2c::type_of<::System::Xml::XmlBaseReader_XmlAttributeTextNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, textNode);
}
inline void System::Xml::XmlBinaryReader::ReadName(::System::Xml::ValueHandle* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { "ReadName", {}, { ::i2c::type_of<::System::Xml::ValueHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlBinaryReader::ReadName(::System::Xml::StringHandle* handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { "ReadName", {}, { ::i2c::type_of<::System::Xml::StringHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle);
}
inline void System::Xml::XmlBinaryReader::ReadName(::System::Xml::PrefixHandle* prefix) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { "ReadName", {}, { ::i2c::type_of<::System::Xml::PrefixHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix);
}
inline void System::Xml::XmlBinaryReader::ReadDictionaryName(::System::Xml::StringHandle* s) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { "ReadDictionaryName", {}, { ::i2c::type_of<::System::Xml::StringHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
inline ::System::Xml::XmlBinaryNodeType System::Xml::XmlBinaryReader::GetNodeType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { "GetNodeType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlBinaryNodeType>(this, ___internal_method);
}
inline void System::Xml::XmlBinaryReader::SkipNodeType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { "SkipNodeType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t System::Xml::XmlBinaryReader::ReadDictionaryKey() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { "ReadDictionaryKey", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Xml::XmlBinaryReader::ReadMultiByteUInt31() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { "ReadMultiByteUInt31", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Xml::XmlBinaryReader::ReadUInt8() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { "ReadUInt8", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Xml::XmlBinaryReader::ReadUInt16() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { "ReadUInt16", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Xml::XmlBinaryReader::ReadUInt31() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { "ReadUInt31", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Xml::XmlBinaryReader::IsValidArrayType(::System::Xml::XmlBinaryNodeType nodeType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { "IsValidArrayType", {}, { ::i2c::type_of<::System::Xml::XmlBinaryNodeType>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, nodeType);
}
inline void System::Xml::XmlBinaryReader::ReadArray() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { "ReadArray", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlBinaryReader::MoveToArrayElement() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { "MoveToArrayElement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlBinaryReader::SkipArrayElements(int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { "SkipArrayElements", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, count);
}
inline bool System::Xml::XmlBinaryReader::IsStartArray(::by_ref<::System::Type*> type) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryReader*>(), 97 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, type);
}
inline bool System::Xml::XmlBinaryReader::TryGetArrayLength(::by_ref<int32_t> count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryReader*>(), 98 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, count);
}
inline bool System::Xml::XmlBinaryReader::IsStartArray(::StringW localName, ::StringW namespaceUri, ::System::Xml::XmlBinaryNodeType nodeType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(),
                                                           { "IsStartArray", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlBinaryNodeType>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, localName, namespaceUri, nodeType);
}
inline bool System::Xml::XmlBinaryReader::IsStartArray(::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri, ::System::Xml::XmlBinaryNodeType nodeType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(),
                          { "IsStartArray",
                            {},
                            { ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlBinaryNodeType>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, localName, namespaceUri, nodeType);
}
inline void System::Xml::XmlBinaryReader::CheckArray(::System::Array* array, int32_t offset, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { "CheckArray", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, offset, count);
}
inline int32_t System::Xml::XmlBinaryReader::ReadArray(::ArrayW<bool> array, int32_t offset, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { "ReadArray", {}, { ::i2c::type_of<::ArrayW<bool>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, array, offset, count);
}
inline int32_t System::Xml::XmlBinaryReader::ReadArray(::StringW localName, ::StringW namespaceUri, ::ArrayW<bool> array, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryReader*>(), 99 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, localName, namespaceUri, array, offset, count);
}
inline int32_t System::Xml::XmlBinaryReader::ReadArray(::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri, ::ArrayW<bool> array, int32_t offset,
                                                       int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryReader*>(), 100 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, localName, namespaceUri, array, offset, count);
}
inline int32_t System::Xml::XmlBinaryReader::ReadArray(::ArrayW<int16_t> array, int32_t offset, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { "ReadArray", {}, { ::i2c::type_of<::ArrayW<int16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, array, offset, count);
}
inline int32_t System::Xml::XmlBinaryReader::ReadArray(::StringW localName, ::StringW namespaceUri, ::ArrayW<int16_t> array, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryReader*>(), 101 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, localName, namespaceUri, array, offset, count);
}
inline int32_t System::Xml::XmlBinaryReader::ReadArray(::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri, ::ArrayW<int16_t> array, int32_t offset,
                                                       int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryReader*>(), 102 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, localName, namespaceUri, array, offset, count);
}
inline int32_t System::Xml::XmlBinaryReader::ReadArray(::ArrayW<int32_t> array, int32_t offset, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { "ReadArray", {}, { ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, array, offset, count);
}
inline int32_t System::Xml::XmlBinaryReader::ReadArray(::StringW localName, ::StringW namespaceUri, ::ArrayW<int32_t> array, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryReader*>(), 103 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, localName, namespaceUri, array, offset, count);
}
inline int32_t System::Xml::XmlBinaryReader::ReadArray(::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri, ::ArrayW<int32_t> array, int32_t offset,
                                                       int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryReader*>(), 104 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, localName, namespaceUri, array, offset, count);
}
inline int32_t System::Xml::XmlBinaryReader::ReadArray(::ArrayW<int64_t> array, int32_t offset, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { "ReadArray", {}, { ::i2c::type_of<::ArrayW<int64_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, array, offset, count);
}
inline int32_t System::Xml::XmlBinaryReader::ReadArray(::StringW localName, ::StringW namespaceUri, ::ArrayW<int64_t> array, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryReader*>(), 105 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, localName, namespaceUri, array, offset, count);
}
inline int32_t System::Xml::XmlBinaryReader::ReadArray(::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri, ::ArrayW<int64_t> array, int32_t offset,
                                                       int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryReader*>(), 106 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, localName, namespaceUri, array, offset, count);
}
inline int32_t System::Xml::XmlBinaryReader::ReadArray(::ArrayW<float_t> array, int32_t offset, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { "ReadArray", {}, { ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, array, offset, count);
}
inline int32_t System::Xml::XmlBinaryReader::ReadArray(::StringW localName, ::StringW namespaceUri, ::ArrayW<float_t> array, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryReader*>(), 107 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, localName, namespaceUri, array, offset, count);
}
inline int32_t System::Xml::XmlBinaryReader::ReadArray(::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri, ::ArrayW<float_t> array, int32_t offset,
                                                       int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryReader*>(), 108 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, localName, namespaceUri, array, offset, count);
}
inline int32_t System::Xml::XmlBinaryReader::ReadArray(::ArrayW<double_t> array, int32_t offset, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(), { "ReadArray", {}, { ::i2c::type_of<::ArrayW<double_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, array, offset, count);
}
inline int32_t System::Xml::XmlBinaryReader::ReadArray(::StringW localName, ::StringW namespaceUri, ::ArrayW<double_t> array, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryReader*>(), 109 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, localName, namespaceUri, array, offset, count);
}
inline int32_t System::Xml::XmlBinaryReader::ReadArray(::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri, ::ArrayW<double_t> array, int32_t offset,
                                                       int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryReader*>(), 110 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, localName, namespaceUri, array, offset, count);
}
inline int32_t System::Xml::XmlBinaryReader::ReadArray(::ArrayW<::System::Decimal> array, int32_t offset, int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(),
                                                           { "ReadArray", {}, { ::i2c::type_of<::ArrayW<::System::Decimal>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, array, offset, count);
}
inline int32_t System::Xml::XmlBinaryReader::ReadArray(::StringW localName, ::StringW namespaceUri, ::ArrayW<::System::Decimal> array, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryReader*>(), 111 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, localName, namespaceUri, array, offset, count);
}
inline int32_t System::Xml::XmlBinaryReader::ReadArray(::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri, ::ArrayW<::System::Decimal> array,
                                                       int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryReader*>(), 112 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, localName, namespaceUri, array, offset, count);
}
inline int32_t System::Xml::XmlBinaryReader::ReadArray(::ArrayW<::System::DateTime> array, int32_t offset, int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(),
                                                           { "ReadArray", {}, { ::i2c::type_of<::ArrayW<::System::DateTime>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, array, offset, count);
}
inline int32_t System::Xml::XmlBinaryReader::ReadArray(::StringW localName, ::StringW namespaceUri, ::ArrayW<::System::DateTime> array, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryReader*>(), 113 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, localName, namespaceUri, array, offset, count);
}
inline int32_t System::Xml::XmlBinaryReader::ReadArray(::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri, ::ArrayW<::System::DateTime> array,
                                                       int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryReader*>(), 114 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, localName, namespaceUri, array, offset, count);
}
inline int32_t System::Xml::XmlBinaryReader::ReadArray(::ArrayW<::System::Guid> array, int32_t offset, int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(),
                                                           { "ReadArray", {}, { ::i2c::type_of<::ArrayW<::System::Guid>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, array, offset, count);
}
inline int32_t System::Xml::XmlBinaryReader::ReadArray(::StringW localName, ::StringW namespaceUri, ::ArrayW<::System::Guid> array, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryReader*>(), 115 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, localName, namespaceUri, array, offset, count);
}
inline int32_t System::Xml::XmlBinaryReader::ReadArray(::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri, ::ArrayW<::System::Guid> array, int32_t offset,
                                                       int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryReader*>(), 116 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, localName, namespaceUri, array, offset, count);
}
inline int32_t System::Xml::XmlBinaryReader::ReadArray(::ArrayW<::System::TimeSpan> array, int32_t offset, int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBinaryReader*>(),
                                                           { "ReadArray", {}, { ::i2c::type_of<::ArrayW<::System::TimeSpan>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, array, offset, count);
}
inline int32_t System::Xml::XmlBinaryReader::ReadArray(::StringW localName, ::StringW namespaceUri, ::ArrayW<::System::TimeSpan> array, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryReader*>(), 117 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, localName, namespaceUri, array, offset, count);
}
inline int32_t System::Xml::XmlBinaryReader::ReadArray(::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri, ::ArrayW<::System::TimeSpan> array,
                                                       int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBinaryReader*>(), 118 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, localName, namespaceUri, array, offset, count);
}
inline ::System::Xml::XmlBinaryReader* System::Xml::XmlBinaryReader::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlBinaryReader*>());
}
// Ctor Parameters []
constexpr ::System::Xml::XmlBinaryReader::XmlBinaryReader() {}
