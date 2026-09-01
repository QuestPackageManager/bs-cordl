#pragma once
// IWYU pragma private; include "System\Xml\HtmlEncodedRawTextWriter.hpp"
#include "System/Xml/zzzz__AttributeProperties_impl.hpp"
#include "System/Xml/zzzz__ElementProperties_impl.hpp"
#include "System/Xml/zzzz__XmlEncodedRawTextWriter_impl.hpp"
#include "System/Xml/zzzz__HtmlEncodedRawTextWriter_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/IO/zzzz__TextWriter_def.hpp"
#include "System/Xml/zzzz__ByteStack_def.hpp"
#include "System/Xml/zzzz__TernaryTreeReadOnly_def.hpp"
#include "System/Xml/zzzz__XmlStandalone_def.hpp"
#include "System/Xml/zzzz__XmlWriterSettings_def.hpp"
//  Writing Method size for method: ::System::Xml::HtmlEncodedRawTextWriter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::HtmlEncodedRawTextWriter::*)(::System::IO::TextWriter*, ::System::Xml::XmlWriterSettings*)>(
    &::System::Xml::HtmlEncodedRawTextWriter::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x61ad110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::HtmlEncodedRawTextWriter*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::IO::TextWriter*>(), ::i2c::type_of<::System::Xml::XmlWriterSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlEncodedRawTextWriter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::HtmlEncodedRawTextWriter::*)(::System::IO::Stream*, ::System::Xml::XmlWriterSettings*)>(
    &::System::Xml::HtmlEncodedRawTextWriter::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x61ad380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::HtmlEncodedRawTextWriter*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Xml::XmlWriterSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlEncodedRawTextWriter.WriteXmlDeclaration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::HtmlEncodedRawTextWriter::*)(::System::Xml::XmlStandalone)>(
    &::System::Xml::HtmlEncodedRawTextWriter::WriteXmlDeclaration)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x61ad640;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::HtmlEncodedRawTextWriter*>(), { ::i2c::class_of<::System::Xml::HtmlEncodedRawTextWriter*>(), 46 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlEncodedRawTextWriter.WriteXmlDeclaration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::HtmlEncodedRawTextWriter::*)(::StringW)>(&::System::Xml::HtmlEncodedRawTextWriter::WriteXmlDeclaration)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x61ad644;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::HtmlEncodedRawTextWriter*>(), { ::i2c::class_of<::System::Xml::HtmlEncodedRawTextWriter*>(), 47 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlEncodedRawTextWriter.WriteDocType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::HtmlEncodedRawTextWriter::*)(::StringW, ::StringW, ::StringW, ::StringW)>(
    &::System::Xml::HtmlEncodedRawTextWriter::WriteDocType)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x61ad648;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::HtmlEncodedRawTextWriter*>(), { ::i2c::class_of<::System::Xml::HtmlEncodedRawTextWriter*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlEncodedRawTextWriter.WriteStartElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::HtmlEncodedRawTextWriter::*)(::StringW, ::StringW, ::StringW)>(
    &::System::Xml::HtmlEncodedRawTextWriter::WriteStartElement)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x61ad930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::HtmlEncodedRawTextWriter*>(), { ::i2c::class_of<::System::Xml::HtmlEncodedRawTextWriter*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlEncodedRawTextWriter.StartElementContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::HtmlEncodedRawTextWriter::*)()>(&::System::Xml::HtmlEncodedRawTextWriter::StartElementContent)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x61adc28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::HtmlEncodedRawTextWriter*>(), { ::i2c::class_of<::System::Xml::HtmlEncodedRawTextWriter*>(), 48 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlEncodedRawTextWriter.WriteEndElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::HtmlEncodedRawTextWriter::*)(::StringW, ::StringW, ::StringW)>(&::System::Xml::HtmlEncodedRawTextWriter::WriteEndElement)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x61add8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::HtmlEncodedRawTextWriter*>(), { ::i2c::class_of<::System::Xml::HtmlEncodedRawTextWriter*>(), 50 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlEncodedRawTextWriter.WriteFullEndElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::HtmlEncodedRawTextWriter::*)(::StringW, ::StringW, ::StringW)>(
    &::System::Xml::HtmlEncodedRawTextWriter::WriteFullEndElement)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x61adff8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::HtmlEncodedRawTextWriter*>(), { ::i2c::class_of<::System::Xml::HtmlEncodedRawTextWriter*>(), 51 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlEncodedRawTextWriter.WriteStartAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::HtmlEncodedRawTextWriter::*)(::StringW, ::StringW, ::StringW)>(
    &::System::Xml::HtmlEncodedRawTextWriter::WriteStartAttribute)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x61ae1fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::HtmlEncodedRawTextWriter*>(), { ::i2c::class_of<::System::Xml::HtmlEncodedRawTextWriter*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlEncodedRawTextWriter.WriteEndAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::HtmlEncodedRawTextWriter::*)()>(&::System::Xml::HtmlEncodedRawTextWriter::WriteEndAttribute)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x61ae49c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::HtmlEncodedRawTextWriter*>(), { ::i2c::class_of<::System::Xml::HtmlEncodedRawTextWriter*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlEncodedRawTextWriter.WriteProcessingInstruction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::HtmlEncodedRawTextWriter::*)(::StringW, ::StringW)>(&::System::Xml::HtmlEncodedRawTextWriter::WriteProcessingInstruction)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x61ae5bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::HtmlEncodedRawTextWriter*>(), { ::i2c::class_of<::System::Xml::HtmlEncodedRawTextWriter*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlEncodedRawTextWriter.WriteString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::HtmlEncodedRawTextWriter::*)(::StringW)>(&::System::Xml::HtmlEncodedRawTextWriter::WriteString)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x61ae9c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::HtmlEncodedRawTextWriter*>(), { ::i2c::class_of<::System::Xml::HtmlEncodedRawTextWriter*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlEncodedRawTextWriter.WriteEntityRef
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::HtmlEncodedRawTextWriter::*)(::StringW)>(&::System::Xml::HtmlEncodedRawTextWriter::WriteEntityRef)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x61aea74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::HtmlEncodedRawTextWriter*>(), { ::i2c::class_of<::System::Xml::HtmlEncodedRawTextWriter*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlEncodedRawTextWriter.WriteCharEntity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::HtmlEncodedRawTextWriter::*)(char16_t)>(&::System::Xml::HtmlEncodedRawTextWriter::WriteCharEntity)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x61aeac4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::HtmlEncodedRawTextWriter*>(), { ::i2c::class_of<::System::Xml::HtmlEncodedRawTextWriter*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlEncodedRawTextWriter.WriteSurrogateCharEntity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::HtmlEncodedRawTextWriter::*)(char16_t, char16_t)>(&::System::Xml::HtmlEncodedRawTextWriter::WriteSurrogateCharEntity)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x61aeb14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::HtmlEncodedRawTextWriter*>(), { ::i2c::class_of<::System::Xml::HtmlEncodedRawTextWriter*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlEncodedRawTextWriter.WriteChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::HtmlEncodedRawTextWriter::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&::System::Xml::HtmlEncodedRawTextWriter::WriteChars)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x61aeb64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::HtmlEncodedRawTextWriter*>(), { ::i2c::class_of<::System::Xml::HtmlEncodedRawTextWriter*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlEncodedRawTextWriter.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::HtmlEncodedRawTextWriter::*)(::System::Xml::XmlWriterSettings*)>(&::System::Xml::HtmlEncodedRawTextWriter::Init)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x61ad218;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::HtmlEncodedRawTextWriter*>(), { "Init", {}, { ::i2c::type_of<::System::Xml::XmlWriterSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlEncodedRawTextWriter.WriteMetaElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::HtmlEncodedRawTextWriter::*)()>(&::System::Xml::HtmlEncodedRawTextWriter::WriteMetaElement)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x61adc7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::HtmlEncodedRawTextWriter*>(), { "WriteMetaElement", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlEncodedRawTextWriter.WriteHtmlElementTextBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::HtmlEncodedRawTextWriter::*)(char16_t*, char16_t*)>(&::System::Xml::HtmlEncodedRawTextWriter::WriteHtmlElementTextBlock)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x61aea64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::HtmlEncodedRawTextWriter*>(),
                                                                                           { "WriteHtmlElementTextBlock", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<char16_t*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlEncodedRawTextWriter.WriteHtmlAttributeTextBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::HtmlEncodedRawTextWriter::*)(char16_t*, char16_t*)>(
    &::System::Xml::HtmlEncodedRawTextWriter::WriteHtmlAttributeTextBlock)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x61aea24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::HtmlEncodedRawTextWriter*>(),
                                                                                           { "WriteHtmlAttributeTextBlock", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<char16_t*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlEncodedRawTextWriter.WriteHtmlAttributeText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::HtmlEncodedRawTextWriter::*)(char16_t*, char16_t*)>(&::System::Xml::HtmlEncodedRawTextWriter::WriteHtmlAttributeText)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x61af638;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::HtmlEncodedRawTextWriter*>(), { "WriteHtmlAttributeText", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<char16_t*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlEncodedRawTextWriter.WriteUriAttributeText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::HtmlEncodedRawTextWriter::*)(char16_t*, char16_t*)>(&::System::Xml::HtmlEncodedRawTextWriter::WriteUriAttributeText)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x61af298;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::HtmlEncodedRawTextWriter*>(), { "WriteUriAttributeText", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<char16_t*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlEncodedRawTextWriter.OutputRestAmps
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::HtmlEncodedRawTextWriter::*)()>(&::System::Xml::HtmlEncodedRawTextWriter::OutputRestAmps)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x61ae528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::HtmlEncodedRawTextWriter*>(), { "OutputRestAmps", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::ByteStack*& System::Xml::HtmlEncodedRawTextWriter::__cordl_internal_get_elementScope() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementScope;
}
constexpr ::System::Xml::ByteStack* const& System::Xml::HtmlEncodedRawTextWriter::__cordl_internal_get_elementScope() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementScope;
}
constexpr void System::Xml::HtmlEncodedRawTextWriter::__cordl_internal_set_elementScope(::System::Xml::ByteStack* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___elementScope = value;
}
constexpr ::System::Xml::ElementProperties& System::Xml::HtmlEncodedRawTextWriter::__cordl_internal_get_currentElementProperties() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentElementProperties;
}
constexpr ::System::Xml::ElementProperties const& System::Xml::HtmlEncodedRawTextWriter::__cordl_internal_get_currentElementProperties() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentElementProperties;
}
constexpr void System::Xml::HtmlEncodedRawTextWriter::__cordl_internal_set_currentElementProperties(::System::Xml::ElementProperties value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currentElementProperties = value;
}
constexpr ::System::Xml::AttributeProperties& System::Xml::HtmlEncodedRawTextWriter::__cordl_internal_get_currentAttributeProperties() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentAttributeProperties;
}
constexpr ::System::Xml::AttributeProperties const& System::Xml::HtmlEncodedRawTextWriter::__cordl_internal_get_currentAttributeProperties() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentAttributeProperties;
}
constexpr void System::Xml::HtmlEncodedRawTextWriter::__cordl_internal_set_currentAttributeProperties(::System::Xml::AttributeProperties value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currentAttributeProperties = value;
}
constexpr bool& System::Xml::HtmlEncodedRawTextWriter::__cordl_internal_get_endsWithAmpersand() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endsWithAmpersand;
}
constexpr bool const& System::Xml::HtmlEncodedRawTextWriter::__cordl_internal_get_endsWithAmpersand() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endsWithAmpersand;
}
constexpr void System::Xml::HtmlEncodedRawTextWriter::__cordl_internal_set_endsWithAmpersand(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___endsWithAmpersand = value;
}
constexpr ::ArrayW<uint8_t>& System::Xml::HtmlEncodedRawTextWriter::__cordl_internal_get_uriEscapingBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uriEscapingBuffer;
}
constexpr ::ArrayW<uint8_t> const& System::Xml::HtmlEncodedRawTextWriter::__cordl_internal_get_uriEscapingBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uriEscapingBuffer;
}
constexpr void System::Xml::HtmlEncodedRawTextWriter::__cordl_internal_set_uriEscapingBuffer(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___uriEscapingBuffer = value;
}
constexpr ::StringW& System::Xml::HtmlEncodedRawTextWriter::__cordl_internal_get_mediaType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mediaType;
}
constexpr ::StringW const& System::Xml::HtmlEncodedRawTextWriter::__cordl_internal_get_mediaType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mediaType;
}
constexpr void System::Xml::HtmlEncodedRawTextWriter::__cordl_internal_set_mediaType(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mediaType = value;
}
constexpr bool& System::Xml::HtmlEncodedRawTextWriter::__cordl_internal_get_doNotEscapeUriAttributes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___doNotEscapeUriAttributes;
}
constexpr bool const& System::Xml::HtmlEncodedRawTextWriter::__cordl_internal_get_doNotEscapeUriAttributes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___doNotEscapeUriAttributes;
}
constexpr void System::Xml::HtmlEncodedRawTextWriter::__cordl_internal_set_doNotEscapeUriAttributes(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___doNotEscapeUriAttributes = value;
}
inline void System::Xml::HtmlEncodedRawTextWriter::setStaticF_elementPropertySearch(::System::Xml::TernaryTreeReadOnly* value) {
  ::cordl_internals::setStaticField<::System::Xml::TernaryTreeReadOnly*, "elementPropertySearch", ::System::Xml::HtmlEncodedRawTextWriter*>(std::forward<::System::Xml::TernaryTreeReadOnly*>(value));
}
inline ::System::Xml::TernaryTreeReadOnly* System::Xml::HtmlEncodedRawTextWriter::getStaticF_elementPropertySearch() {
  return ::cordl_internals::getStaticField<::System::Xml::TernaryTreeReadOnly*, "elementPropertySearch", ::System::Xml::HtmlEncodedRawTextWriter*>();
}
inline void System::Xml::HtmlEncodedRawTextWriter::setStaticF_attributePropertySearch(::System::Xml::TernaryTreeReadOnly* value) {
  ::cordl_internals::setStaticField<::System::Xml::TernaryTreeReadOnly*, "attributePropertySearch", ::System::Xml::HtmlEncodedRawTextWriter*>(std::forward<::System::Xml::TernaryTreeReadOnly*>(value));
}
inline ::System::Xml::TernaryTreeReadOnly* System::Xml::HtmlEncodedRawTextWriter::getStaticF_attributePropertySearch() {
  return ::cordl_internals::getStaticField<::System::Xml::TernaryTreeReadOnly*, "attributePropertySearch", ::System::Xml::HtmlEncodedRawTextWriter*>();
}
inline void System::Xml::HtmlEncodedRawTextWriter::_ctor(::System::IO::TextWriter* writer, ::System::Xml::XmlWriterSettings* settings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::HtmlEncodedRawTextWriter*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::IO::TextWriter*>(), ::i2c::type_of<::System::Xml::XmlWriterSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, settings);
}
inline void System::Xml::HtmlEncodedRawTextWriter::_ctor(::System::IO::Stream* stream, ::System::Xml::XmlWriterSettings* settings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::HtmlEncodedRawTextWriter*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Xml::XmlWriterSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, settings);
}
inline void System::Xml::HtmlEncodedRawTextWriter::WriteXmlDeclaration(::System::Xml::XmlStandalone standalone) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::HtmlEncodedRawTextWriter*>(), 46 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, standalone);
}
inline void System::Xml::HtmlEncodedRawTextWriter::WriteXmlDeclaration(::StringW xmldecl) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::HtmlEncodedRawTextWriter*>(), 47 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xmldecl);
}
inline void System::Xml::HtmlEncodedRawTextWriter::WriteDocType(::StringW name, ::StringW pubid, ::StringW sysid, ::StringW subset) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::HtmlEncodedRawTextWriter*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, pubid, sysid, subset);
}
inline void System::Xml::HtmlEncodedRawTextWriter::WriteStartElement(::StringW prefix, ::StringW localName, ::StringW ns) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::HtmlEncodedRawTextWriter*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, ns);
}
inline void System::Xml::HtmlEncodedRawTextWriter::StartElementContent() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::HtmlEncodedRawTextWriter*>(), 48 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::HtmlEncodedRawTextWriter::WriteEndElement(::StringW prefix, ::StringW localName, ::StringW ns) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::HtmlEncodedRawTextWriter*>(), 50 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, ns);
}
inline void System::Xml::HtmlEncodedRawTextWriter::WriteFullEndElement(::StringW prefix, ::StringW localName, ::StringW ns) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::HtmlEncodedRawTextWriter*>(), 51 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, ns);
}
inline void System::Xml::HtmlEncodedRawTextWriter::WriteStartAttribute(::StringW prefix, ::StringW localName, ::StringW ns) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::HtmlEncodedRawTextWriter*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, ns);
}
inline void System::Xml::HtmlEncodedRawTextWriter::WriteEndAttribute() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::HtmlEncodedRawTextWriter*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::HtmlEncodedRawTextWriter::WriteProcessingInstruction(::StringW target, ::StringW text) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::HtmlEncodedRawTextWriter*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target, text);
}
inline void System::Xml::HtmlEncodedRawTextWriter::WriteString(::StringW text) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::HtmlEncodedRawTextWriter*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline void System::Xml::HtmlEncodedRawTextWriter::WriteEntityRef(::StringW name) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::HtmlEncodedRawTextWriter*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void System::Xml::HtmlEncodedRawTextWriter::WriteCharEntity(char16_t ch) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::HtmlEncodedRawTextWriter*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ch);
}
inline void System::Xml::HtmlEncodedRawTextWriter::WriteSurrogateCharEntity(char16_t lowChar, char16_t highChar) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::HtmlEncodedRawTextWriter*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lowChar, highChar);
}
inline void System::Xml::HtmlEncodedRawTextWriter::WriteChars(::ArrayW<char16_t> buffer, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::HtmlEncodedRawTextWriter*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, index, count);
}
inline void System::Xml::HtmlEncodedRawTextWriter::Init(::System::Xml::XmlWriterSettings* settings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::HtmlEncodedRawTextWriter*>(), { "Init", {}, { ::i2c::type_of<::System::Xml::XmlWriterSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, settings);
}
inline void System::Xml::HtmlEncodedRawTextWriter::WriteMetaElement() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::HtmlEncodedRawTextWriter*>(), { "WriteMetaElement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::HtmlEncodedRawTextWriter::WriteHtmlElementTextBlock(char16_t* pSrc, char16_t* pSrcEnd) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::HtmlEncodedRawTextWriter*>(),
                                                                                         { "WriteHtmlElementTextBlock", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<char16_t*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pSrc, pSrcEnd);
}
inline void System::Xml::HtmlEncodedRawTextWriter::WriteHtmlAttributeTextBlock(char16_t* pSrc, char16_t* pSrcEnd) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::HtmlEncodedRawTextWriter*>(),
                                                                                         { "WriteHtmlAttributeTextBlock", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<char16_t*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pSrc, pSrcEnd);
}
inline void System::Xml::HtmlEncodedRawTextWriter::WriteHtmlAttributeText(char16_t* pSrc, char16_t* pSrcEnd) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::HtmlEncodedRawTextWriter*>(), { "WriteHtmlAttributeText", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<char16_t*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pSrc, pSrcEnd);
}
inline void System::Xml::HtmlEncodedRawTextWriter::WriteUriAttributeText(char16_t* pSrc, char16_t* pSrcEnd) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::HtmlEncodedRawTextWriter*>(), { "WriteUriAttributeText", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<char16_t*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pSrc, pSrcEnd);
}
inline void System::Xml::HtmlEncodedRawTextWriter::OutputRestAmps() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::HtmlEncodedRawTextWriter*>(), { "OutputRestAmps", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::HtmlEncodedRawTextWriter* System::Xml::HtmlEncodedRawTextWriter::New_ctor(::System::IO::TextWriter* writer, ::System::Xml::XmlWriterSettings* settings) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::HtmlEncodedRawTextWriter*>(writer, settings));
}
inline ::System::Xml::HtmlEncodedRawTextWriter* System::Xml::HtmlEncodedRawTextWriter::New_ctor(::System::IO::Stream* stream, ::System::Xml::XmlWriterSettings* settings) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::HtmlEncodedRawTextWriter*>(stream, settings));
}
// Ctor Parameters []
constexpr ::System::Xml::HtmlEncodedRawTextWriter::HtmlEncodedRawTextWriter() {}
