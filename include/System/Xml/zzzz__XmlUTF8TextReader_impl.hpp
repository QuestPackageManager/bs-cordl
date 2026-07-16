#pragma once
// IWYU pragma private; include "System/Xml/XmlUTF8TextReader.hpp"
#include "System/Xml/zzzz__XmlBaseReader_impl.hpp"
#include "System/Xml/zzzz__XmlUTF8TextReader_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/Xml/zzzz__IXmlLineInfo_def.hpp"
#include "System/Xml/zzzz__OnXmlDictionaryReaderClose_def.hpp"
#include "System/Xml/zzzz__PrefixHandle_def.hpp"
#include "System/Xml/zzzz__StringHandle_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryReaderQuotas_def.hpp"
//  Writing Method size for method: ::System::Xml::XmlUTF8TextReader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUTF8TextReader::*)()>(&::System::Xml::XmlUTF8TextReader::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x61245e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8TextReader*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8TextReader.SetInput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUTF8TextReader::*)(::System::IO::Stream*, ::System::Text::Encoding*, ::System::Xml::XmlDictionaryReaderQuotas*,
                                                                                                  ::System::Xml::OnXmlDictionaryReaderClose*)>(&::System::Xml::XmlUTF8TextReader::SetInput)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x61246a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8TextReader*>(),
                                                             { "SetInput",
                                                               {},
                                                               { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Text::Encoding*>(),
                                                                 ::i2c::type_of<::System::Xml::XmlDictionaryReaderQuotas*>(), ::i2c::type_of<::System::Xml::OnXmlDictionaryReaderClose*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8TextReader.MoveToInitial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUTF8TextReader::*)(::System::Xml::XmlDictionaryReaderQuotas*, ::System::Xml::OnXmlDictionaryReaderClose*)>(
    &::System::Xml::XmlUTF8TextReader::MoveToInitial)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6124790;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8TextReader*>(),
                                         { "MoveToInitial", {}, { ::i2c::type_of<::System::Xml::XmlDictionaryReaderQuotas*>(), ::i2c::type_of<::System::Xml::OnXmlDictionaryReaderClose*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8TextReader.Close
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUTF8TextReader::*)()>(&::System::Xml::XmlUTF8TextReader::Close)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x61247cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8TextReader*>(), { ::i2c::class_of<::System::Xml::XmlUTF8TextReader*>(), 52 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8TextReader.SkipWhitespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUTF8TextReader::*)()>(&::System::Xml::XmlUTF8TextReader::SkipWhitespace)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x61248bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8TextReader*>(), { "SkipWhitespace", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8TextReader.ReadDeclaration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUTF8TextReader::*)()>(&::System::Xml::XmlUTF8TextReader::ReadDeclaration)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x612498c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8TextReader*>(), { "ReadDeclaration", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8TextReader.VerifyNCName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUTF8TextReader::*)(::StringW)>(&::System::Xml::XmlUTF8TextReader::VerifyNCName)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x61254e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8TextReader*>(), { "VerifyNCName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8TextReader.ReadQualifiedName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUTF8TextReader::*)(::System::Xml::PrefixHandle*, ::System::Xml::StringHandle*)>(
    &::System::Xml::XmlUTF8TextReader::ReadQualifiedName)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x612589c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8TextReader*>(),
                                                             { "ReadQualifiedName", {}, { ::i2c::type_of<::System::Xml::PrefixHandle*>(), ::i2c::type_of<::System::Xml::StringHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8TextReader.ReadAttributeText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlUTF8TextReader::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Xml::XmlUTF8TextReader::ReadAttributeText)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6125c10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8TextReader*>(),
                                                             { "ReadAttributeText", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8TextReader.ReadAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUTF8TextReader::*)()>(&::System::Xml::XmlUTF8TextReader::ReadAttributes)> {
  constexpr static std::size_t size = 0x5e8;
  constexpr static std::size_t addrs = 0x6124e9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8TextReader*>(), { "ReadAttributes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8TextReader.ReadNonFFFE
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUTF8TextReader::*)()>(&::System::Xml::XmlUTF8TextReader::ReadNonFFFE)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x6125e10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8TextReader*>(), { "ReadNonFFFE", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8TextReader.IsNextCharacterNonFFFE
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlUTF8TextReader::*)(::ArrayW<uint8_t>, int32_t)>(&::System::Xml::XmlUTF8TextReader::IsNextCharacterNonFFFE)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6125f90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8TextReader*>(), { "IsNextCharacterNonFFFE", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8TextReader.BufferElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUTF8TextReader::*)()>(&::System::Xml::XmlUTF8TextReader::BufferElement)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x6124cd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8TextReader*>(), { "BufferElement", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8TextReader.ReadStartElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUTF8TextReader::*)()>(&::System::Xml::XmlUTF8TextReader::ReadStartElement)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x6125ff4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8TextReader*>(), { "ReadStartElement", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8TextReader.ReadEndElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUTF8TextReader::*)()>(&::System::Xml::XmlUTF8TextReader::ReadEndElement)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x61261f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8TextReader*>(), { "ReadEndElement", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8TextReader.ReadComment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUTF8TextReader::*)()>(&::System::Xml::XmlUTF8TextReader::ReadComment)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x6126488;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8TextReader*>(), { "ReadComment", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8TextReader.ReadCData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUTF8TextReader::*)()>(&::System::Xml::XmlUTF8TextReader::ReadCData)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x61267c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8TextReader*>(), { "ReadCData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8TextReader.ReadCharRef
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlUTF8TextReader::*)()>(&::System::Xml::XmlUTF8TextReader::ReadCharRef)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6125d74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8TextReader*>(), { "ReadCharRef", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8TextReader.ReadWhitespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUTF8TextReader::*)()>(&::System::Xml::XmlUTF8TextReader::ReadWhitespace)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6126a68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8TextReader*>(), { "ReadWhitespace", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8TextReader.ReadWhitespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlUTF8TextReader::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Xml::XmlUTF8TextReader::ReadWhitespace)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6126b30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8TextReader*>(),
                                                             { "ReadWhitespace", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8TextReader.ReadText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlUTF8TextReader::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Xml::XmlUTF8TextReader::ReadText)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6126ccc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8TextReader*>(), { "ReadText", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8TextReader.ReadTextAndWatchForInvalidCharacters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlUTF8TextReader::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::System::Xml::XmlUTF8TextReader::ReadTextAndWatchForInvalidCharacters)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x6126db4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8TextReader*>(),
                                                { "ReadTextAndWatchForInvalidCharacters", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8TextReader.BreakText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlUTF8TextReader::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Xml::XmlUTF8TextReader::BreakText)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6126c18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8TextReader*>(), { "BreakText", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8TextReader.ReadText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUTF8TextReader::*)(bool)>(&::System::Xml::XmlUTF8TextReader::ReadText)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x6126f64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8TextReader*>(), { "ReadText", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8TextReader.ReadEscapedText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUTF8TextReader::*)()>(&::System::Xml::XmlUTF8TextReader::ReadEscapedText)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x61270ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8TextReader*>(), { "ReadEscapedText", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8TextReader.Read
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlUTF8TextReader::*)()>(&::System::Xml::XmlUTF8TextReader::Read)> {
  constexpr static std::size_t size = 0x48c;
  constexpr static std::size_t addrs = 0x61271bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8TextReader*>(), { ::i2c::class_of<::System::Xml::XmlUTF8TextReader*>(), 50 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8TextReader.HasLineInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlUTF8TextReader::*)()>(&::System::Xml::XmlUTF8TextReader::HasLineInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6127698;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8TextReader*>(), { "HasLineInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8TextReader.get_LineNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlUTF8TextReader::*)()>(&::System::Xml::XmlUTF8TextReader::get_LineNumber)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x61276a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8TextReader*>(), { "get_LineNumber", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8TextReader.get_LinePosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlUTF8TextReader::*)()>(&::System::Xml::XmlUTF8TextReader::get_LinePosition)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6127780;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8TextReader*>(), { "get_LinePosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8TextReader.GetPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUTF8TextReader::*)(::by_ref<int32_t>, ::by_ref<int32_t>)>(&::System::Xml::XmlUTF8TextReader::GetPosition)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x61276c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8TextReader*>(), { "GetPosition", {}, { ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::PrefixHandle*& System::Xml::XmlUTF8TextReader::__cordl_internal_get_prefix() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prefix;
}
constexpr ::System::Xml::PrefixHandle* const& System::Xml::XmlUTF8TextReader::__cordl_internal_get_prefix() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prefix;
}
constexpr void System::Xml::XmlUTF8TextReader::__cordl_internal_set_prefix(::System::Xml::PrefixHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___prefix = value;
}
constexpr ::System::Xml::StringHandle*& System::Xml::XmlUTF8TextReader::__cordl_internal_get_localName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localName;
}
constexpr ::System::Xml::StringHandle* const& System::Xml::XmlUTF8TextReader::__cordl_internal_get_localName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localName;
}
constexpr void System::Xml::XmlUTF8TextReader::__cordl_internal_set_localName(::System::Xml::StringHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___localName = value;
}
constexpr ::ArrayW<int32_t>& System::Xml::XmlUTF8TextReader::__cordl_internal_get_rowOffsets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rowOffsets;
}
constexpr ::ArrayW<int32_t> const& System::Xml::XmlUTF8TextReader::__cordl_internal_get_rowOffsets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rowOffsets;
}
constexpr void System::Xml::XmlUTF8TextReader::__cordl_internal_set_rowOffsets(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rowOffsets = value;
}
constexpr ::System::Xml::OnXmlDictionaryReaderClose*& System::Xml::XmlUTF8TextReader::__cordl_internal_get_onClose() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onClose;
}
constexpr ::System::Xml::OnXmlDictionaryReaderClose* const& System::Xml::XmlUTF8TextReader::__cordl_internal_get_onClose() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onClose;
}
constexpr void System::Xml::XmlUTF8TextReader::__cordl_internal_set_onClose(::System::Xml::OnXmlDictionaryReaderClose* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___onClose = value;
}
constexpr bool& System::Xml::XmlUTF8TextReader::__cordl_internal_get_buffered() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buffered;
}
constexpr bool const& System::Xml::XmlUTF8TextReader::__cordl_internal_get_buffered() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buffered;
}
constexpr void System::Xml::XmlUTF8TextReader::__cordl_internal_set_buffered(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___buffered = value;
}
constexpr int32_t& System::Xml::XmlUTF8TextReader::__cordl_internal_get_maxBytesPerRead() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxBytesPerRead;
}
constexpr int32_t const& System::Xml::XmlUTF8TextReader::__cordl_internal_get_maxBytesPerRead() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxBytesPerRead;
}
constexpr void System::Xml::XmlUTF8TextReader::__cordl_internal_set_maxBytesPerRead(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxBytesPerRead = value;
}
inline void System::Xml::XmlUTF8TextReader::setStaticF_charType(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "charType", ::System::Xml::XmlUTF8TextReader*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> System::Xml::XmlUTF8TextReader::getStaticF_charType() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "charType", ::System::Xml::XmlUTF8TextReader*>();
}
inline void System::Xml::XmlUTF8TextReader::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8TextReader*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlUTF8TextReader::SetInput(::System::IO::Stream* stream, ::System::Text::Encoding* encoding, ::System::Xml::XmlDictionaryReaderQuotas* quotas,
                                                     ::System::Xml::OnXmlDictionaryReaderClose* onClose) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8TextReader*>(),
                                                           { "SetInput",
                                                             {},
                                                             { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Text::Encoding*>(),
                                                               ::i2c::type_of<::System::Xml::XmlDictionaryReaderQuotas*>(), ::i2c::type_of<::System::Xml::OnXmlDictionaryReaderClose*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, encoding, quotas, onClose);
}
inline void System::Xml::XmlUTF8TextReader::MoveToInitial(::System::Xml::XmlDictionaryReaderQuotas* quotas, ::System::Xml::OnXmlDictionaryReaderClose* onClose) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8TextReader*>(),
                                              { "MoveToInitial", {}, { ::i2c::type_of<::System::Xml::XmlDictionaryReaderQuotas*>(), ::i2c::type_of<::System::Xml::OnXmlDictionaryReaderClose*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, quotas, onClose);
}
inline void System::Xml::XmlUTF8TextReader::Close() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUTF8TextReader*>(), 52 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlUTF8TextReader::SkipWhitespace() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8TextReader*>(), { "SkipWhitespace", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlUTF8TextReader::ReadDeclaration() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8TextReader*>(), { "ReadDeclaration", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlUTF8TextReader::VerifyNCName(::StringW s) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8TextReader*>(), { "VerifyNCName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
inline void System::Xml::XmlUTF8TextReader::ReadQualifiedName(::System::Xml::PrefixHandle* prefix, ::System::Xml::StringHandle* localName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8TextReader*>(),
                                                           { "ReadQualifiedName", {}, { ::i2c::type_of<::System::Xml::PrefixHandle*>(), ::i2c::type_of<::System::Xml::StringHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName);
}
inline int32_t System::Xml::XmlUTF8TextReader::ReadAttributeText(::ArrayW<uint8_t> buffer, int32_t offset, int32_t offsetMax) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8TextReader*>(),
                                                           { "ReadAttributeText", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, offsetMax);
}
inline void System::Xml::XmlUTF8TextReader::ReadAttributes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8TextReader*>(), { "ReadAttributes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlUTF8TextReader::ReadNonFFFE() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8TextReader*>(), { "ReadNonFFFE", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Xml::XmlUTF8TextReader::IsNextCharacterNonFFFE(::ArrayW<uint8_t> buffer, int32_t offset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8TextReader*>(), { "IsNextCharacterNonFFFE", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, buffer, offset);
}
inline void System::Xml::XmlUTF8TextReader::BufferElement() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8TextReader*>(), { "BufferElement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlUTF8TextReader::ReadStartElement() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8TextReader*>(), { "ReadStartElement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlUTF8TextReader::ReadEndElement() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8TextReader*>(), { "ReadEndElement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlUTF8TextReader::ReadComment() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8TextReader*>(), { "ReadComment", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlUTF8TextReader::ReadCData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8TextReader*>(), { "ReadCData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t System::Xml::XmlUTF8TextReader::ReadCharRef() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8TextReader*>(), { "ReadCharRef", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Xml::XmlUTF8TextReader::ReadWhitespace() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8TextReader*>(), { "ReadWhitespace", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t System::Xml::XmlUTF8TextReader::ReadWhitespace(::ArrayW<uint8_t> buffer, int32_t offset, int32_t offsetMax) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8TextReader*>(),
                                                           { "ReadWhitespace", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, offsetMax);
}
inline int32_t System::Xml::XmlUTF8TextReader::ReadText(::ArrayW<uint8_t> buffer, int32_t offset, int32_t offsetMax) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8TextReader*>(), { "ReadText", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, offsetMax);
}
inline int32_t System::Xml::XmlUTF8TextReader::ReadTextAndWatchForInvalidCharacters(::ArrayW<uint8_t> buffer, int32_t offset, int32_t offsetMax) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8TextReader*>(),
                                              { "ReadTextAndWatchForInvalidCharacters", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, offsetMax);
}
inline int32_t System::Xml::XmlUTF8TextReader::BreakText(::ArrayW<uint8_t> buffer, int32_t offset, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8TextReader*>(), { "BreakText", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, length);
}
inline void System::Xml::XmlUTF8TextReader::ReadText(bool hasLeadingByteOf0xEF) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8TextReader*>(), { "ReadText", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hasLeadingByteOf0xEF);
}
inline void System::Xml::XmlUTF8TextReader::ReadEscapedText() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8TextReader*>(), { "ReadEscapedText", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Xml::XmlUTF8TextReader::Read() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlUTF8TextReader*>(), 50 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Xml::XmlUTF8TextReader::HasLineInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8TextReader*>(), { "HasLineInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t System::Xml::XmlUTF8TextReader::get_LineNumber() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8TextReader*>(), { "get_LineNumber", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Xml::XmlUTF8TextReader::get_LinePosition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8TextReader*>(), { "get_LinePosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Xml::XmlUTF8TextReader::GetPosition(::by_ref<int32_t> row, ::by_ref<int32_t> column) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8TextReader*>(), { "GetPosition", {}, { ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, row, column);
}
inline ::System::Xml::XmlUTF8TextReader* System::Xml::XmlUTF8TextReader::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlUTF8TextReader*>());
}
/// @brief Convert operator to "::System::Xml::IXmlLineInfo"
constexpr System::Xml::XmlUTF8TextReader::operator ::System::Xml::IXmlLineInfo*() noexcept {
  return static_cast<::System::Xml::IXmlLineInfo*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Xml::IXmlLineInfo"
constexpr ::System::Xml::IXmlLineInfo* System::Xml::XmlUTF8TextReader::i___System__Xml__IXmlLineInfo() noexcept {
  return static_cast<::System::Xml::IXmlLineInfo*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlUTF8TextReader::XmlUTF8TextReader() {}
