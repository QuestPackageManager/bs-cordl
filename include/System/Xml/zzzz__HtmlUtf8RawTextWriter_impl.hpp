#pragma once
// IWYU pragma private; include "System\Xml\HtmlUtf8RawTextWriter.hpp"
#include "System/Xml/zzzz__AttributeProperties_impl.hpp"
#include "System/Xml/zzzz__ElementProperties_impl.hpp"
#include "System/Xml/zzzz__XmlUtf8RawTextWriter_impl.hpp"
#include "System/Xml/zzzz__HtmlUtf8RawTextWriter_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Xml/zzzz__ByteStack_def.hpp"
#include "System/Xml/zzzz__TernaryTreeReadOnly_def.hpp"
#include "System/Xml/zzzz__XmlStandalone_def.hpp"
#include "System/Xml/zzzz__XmlWriterSettings_def.hpp"
//  Writing Method size for method: ::System::Xml::HtmlUtf8RawTextWriter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::HtmlUtf8RawTextWriter::*)(::System::IO::Stream*, ::System::Xml::XmlWriterSettings*)>(
    &::System::Xml::HtmlUtf8RawTextWriter::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x61b0160;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::HtmlUtf8RawTextWriter*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Xml::XmlWriterSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlUtf8RawTextWriter.WriteXmlDeclaration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::HtmlUtf8RawTextWriter::*)(::System::Xml::XmlStandalone)>(&::System::Xml::HtmlUtf8RawTextWriter::WriteXmlDeclaration)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x61b02f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::HtmlUtf8RawTextWriter*>(), { ::i2c::class_of<::System::Xml::HtmlUtf8RawTextWriter*>(), 46 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlUtf8RawTextWriter.WriteXmlDeclaration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::HtmlUtf8RawTextWriter::*)(::StringW)>(&::System::Xml::HtmlUtf8RawTextWriter::WriteXmlDeclaration)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x61b02f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::HtmlUtf8RawTextWriter*>(), { ::i2c::class_of<::System::Xml::HtmlUtf8RawTextWriter*>(), 47 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlUtf8RawTextWriter.WriteDocType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::HtmlUtf8RawTextWriter::*)(::StringW, ::StringW, ::StringW, ::StringW)>(
    &::System::Xml::HtmlUtf8RawTextWriter::WriteDocType)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x61b02fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::HtmlUtf8RawTextWriter*>(), { ::i2c::class_of<::System::Xml::HtmlUtf8RawTextWriter*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlUtf8RawTextWriter.WriteStartElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::HtmlUtf8RawTextWriter::*)(::StringW, ::StringW, ::StringW)>(&::System::Xml::HtmlUtf8RawTextWriter::WriteStartElement)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x61b0570;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::HtmlUtf8RawTextWriter*>(), { ::i2c::class_of<::System::Xml::HtmlUtf8RawTextWriter*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlUtf8RawTextWriter.StartElementContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::HtmlUtf8RawTextWriter::*)()>(&::System::Xml::HtmlUtf8RawTextWriter::StartElementContent)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x61b0688;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::HtmlUtf8RawTextWriter*>(), { ::i2c::class_of<::System::Xml::HtmlUtf8RawTextWriter*>(), 48 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlUtf8RawTextWriter.WriteEndElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::HtmlUtf8RawTextWriter::*)(::StringW, ::StringW, ::StringW)>(&::System::Xml::HtmlUtf8RawTextWriter::WriteEndElement)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x61b0808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::HtmlUtf8RawTextWriter*>(), { ::i2c::class_of<::System::Xml::HtmlUtf8RawTextWriter*>(), 50 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlUtf8RawTextWriter.WriteFullEndElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::HtmlUtf8RawTextWriter::*)(::StringW, ::StringW, ::StringW)>(&::System::Xml::HtmlUtf8RawTextWriter::WriteFullEndElement)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x61b08ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::HtmlUtf8RawTextWriter*>(), { ::i2c::class_of<::System::Xml::HtmlUtf8RawTextWriter*>(), 51 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlUtf8RawTextWriter.WriteStartAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::HtmlUtf8RawTextWriter::*)(::StringW, ::StringW, ::StringW)>(&::System::Xml::HtmlUtf8RawTextWriter::WriteStartAttribute)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x61b09d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::HtmlUtf8RawTextWriter*>(), { ::i2c::class_of<::System::Xml::HtmlUtf8RawTextWriter*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlUtf8RawTextWriter.WriteEndAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::HtmlUtf8RawTextWriter::*)()>(&::System::Xml::HtmlUtf8RawTextWriter::WriteEndAttribute)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x61b0b4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::HtmlUtf8RawTextWriter*>(), { ::i2c::class_of<::System::Xml::HtmlUtf8RawTextWriter*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlUtf8RawTextWriter.WriteProcessingInstruction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::HtmlUtf8RawTextWriter::*)(::StringW, ::StringW)>(&::System::Xml::HtmlUtf8RawTextWriter::WriteProcessingInstruction)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x61b0c7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::HtmlUtf8RawTextWriter*>(), { ::i2c::class_of<::System::Xml::HtmlUtf8RawTextWriter*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlUtf8RawTextWriter.WriteString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::HtmlUtf8RawTextWriter::*)(::StringW)>(&::System::Xml::HtmlUtf8RawTextWriter::WriteString)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x61b0d9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::HtmlUtf8RawTextWriter*>(), { ::i2c::class_of<::System::Xml::HtmlUtf8RawTextWriter*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlUtf8RawTextWriter.WriteEntityRef
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::HtmlUtf8RawTextWriter::*)(::StringW)>(&::System::Xml::HtmlUtf8RawTextWriter::WriteEntityRef)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x61b0e20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::HtmlUtf8RawTextWriter*>(), { ::i2c::class_of<::System::Xml::HtmlUtf8RawTextWriter*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlUtf8RawTextWriter.WriteCharEntity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::HtmlUtf8RawTextWriter::*)(char16_t)>(&::System::Xml::HtmlUtf8RawTextWriter::WriteCharEntity)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x61b0e70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::HtmlUtf8RawTextWriter*>(), { ::i2c::class_of<::System::Xml::HtmlUtf8RawTextWriter*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlUtf8RawTextWriter.WriteSurrogateCharEntity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::HtmlUtf8RawTextWriter::*)(char16_t, char16_t)>(&::System::Xml::HtmlUtf8RawTextWriter::WriteSurrogateCharEntity)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x61b0ec0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::HtmlUtf8RawTextWriter*>(), { ::i2c::class_of<::System::Xml::HtmlUtf8RawTextWriter*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlUtf8RawTextWriter.WriteChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::HtmlUtf8RawTextWriter::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&::System::Xml::HtmlUtf8RawTextWriter::WriteChars)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x61b0f10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::HtmlUtf8RawTextWriter*>(), { ::i2c::class_of<::System::Xml::HtmlUtf8RawTextWriter*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlUtf8RawTextWriter.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::HtmlUtf8RawTextWriter::*)(::System::Xml::XmlWriterSettings*)>(&::System::Xml::HtmlUtf8RawTextWriter::Init)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x61b018c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::HtmlUtf8RawTextWriter*>(), { "Init", {}, { ::i2c::type_of<::System::Xml::XmlWriterSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlUtf8RawTextWriter.WriteMetaElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::HtmlUtf8RawTextWriter::*)()>(&::System::Xml::HtmlUtf8RawTextWriter::WriteMetaElement)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x61b06e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::HtmlUtf8RawTextWriter*>(), { "WriteMetaElement", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlUtf8RawTextWriter.WriteHtmlElementTextBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::HtmlUtf8RawTextWriter::*)(char16_t*, char16_t*)>(&::System::Xml::HtmlUtf8RawTextWriter::WriteHtmlElementTextBlock)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x61b0e08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::HtmlUtf8RawTextWriter*>(), { "WriteHtmlElementTextBlock", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<char16_t*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlUtf8RawTextWriter.WriteHtmlAttributeTextBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::HtmlUtf8RawTextWriter::*)(char16_t*, char16_t*)>(&::System::Xml::HtmlUtf8RawTextWriter::WriteHtmlAttributeTextBlock)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x61b0dc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::HtmlUtf8RawTextWriter*>(),
                                                                                           { "WriteHtmlAttributeTextBlock", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<char16_t*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlUtf8RawTextWriter.WriteHtmlAttributeText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::HtmlUtf8RawTextWriter::*)(char16_t*, char16_t*)>(&::System::Xml::HtmlUtf8RawTextWriter::WriteHtmlAttributeText)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x61b12c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::HtmlUtf8RawTextWriter*>(), { "WriteHtmlAttributeText", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<char16_t*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlUtf8RawTextWriter.WriteUriAttributeText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::HtmlUtf8RawTextWriter::*)(char16_t*, char16_t*)>(&::System::Xml::HtmlUtf8RawTextWriter::WriteUriAttributeText)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0x61b0f54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::HtmlUtf8RawTextWriter*>(), { "WriteUriAttributeText", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<char16_t*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlUtf8RawTextWriter.OutputRestAmps
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::HtmlUtf8RawTextWriter::*)()>(&::System::Xml::HtmlUtf8RawTextWriter::OutputRestAmps)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x61b0bb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::HtmlUtf8RawTextWriter*>(), { "OutputRestAmps", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::ByteStack*& System::Xml::HtmlUtf8RawTextWriter::__cordl_internal_get_elementScope() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementScope;
}
constexpr ::System::Xml::ByteStack* const& System::Xml::HtmlUtf8RawTextWriter::__cordl_internal_get_elementScope() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementScope;
}
constexpr void System::Xml::HtmlUtf8RawTextWriter::__cordl_internal_set_elementScope(::System::Xml::ByteStack* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___elementScope = value;
}
constexpr ::System::Xml::ElementProperties& System::Xml::HtmlUtf8RawTextWriter::__cordl_internal_get_currentElementProperties() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentElementProperties;
}
constexpr ::System::Xml::ElementProperties const& System::Xml::HtmlUtf8RawTextWriter::__cordl_internal_get_currentElementProperties() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentElementProperties;
}
constexpr void System::Xml::HtmlUtf8RawTextWriter::__cordl_internal_set_currentElementProperties(::System::Xml::ElementProperties value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currentElementProperties = value;
}
constexpr ::System::Xml::AttributeProperties& System::Xml::HtmlUtf8RawTextWriter::__cordl_internal_get_currentAttributeProperties() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentAttributeProperties;
}
constexpr ::System::Xml::AttributeProperties const& System::Xml::HtmlUtf8RawTextWriter::__cordl_internal_get_currentAttributeProperties() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentAttributeProperties;
}
constexpr void System::Xml::HtmlUtf8RawTextWriter::__cordl_internal_set_currentAttributeProperties(::System::Xml::AttributeProperties value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currentAttributeProperties = value;
}
constexpr bool& System::Xml::HtmlUtf8RawTextWriter::__cordl_internal_get_endsWithAmpersand() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endsWithAmpersand;
}
constexpr bool const& System::Xml::HtmlUtf8RawTextWriter::__cordl_internal_get_endsWithAmpersand() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endsWithAmpersand;
}
constexpr void System::Xml::HtmlUtf8RawTextWriter::__cordl_internal_set_endsWithAmpersand(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___endsWithAmpersand = value;
}
constexpr ::ArrayW<uint8_t>& System::Xml::HtmlUtf8RawTextWriter::__cordl_internal_get_uriEscapingBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uriEscapingBuffer;
}
constexpr ::ArrayW<uint8_t> const& System::Xml::HtmlUtf8RawTextWriter::__cordl_internal_get_uriEscapingBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uriEscapingBuffer;
}
constexpr void System::Xml::HtmlUtf8RawTextWriter::__cordl_internal_set_uriEscapingBuffer(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___uriEscapingBuffer = value;
}
constexpr ::StringW& System::Xml::HtmlUtf8RawTextWriter::__cordl_internal_get_mediaType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mediaType;
}
constexpr ::StringW const& System::Xml::HtmlUtf8RawTextWriter::__cordl_internal_get_mediaType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mediaType;
}
constexpr void System::Xml::HtmlUtf8RawTextWriter::__cordl_internal_set_mediaType(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mediaType = value;
}
constexpr bool& System::Xml::HtmlUtf8RawTextWriter::__cordl_internal_get_doNotEscapeUriAttributes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___doNotEscapeUriAttributes;
}
constexpr bool const& System::Xml::HtmlUtf8RawTextWriter::__cordl_internal_get_doNotEscapeUriAttributes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___doNotEscapeUriAttributes;
}
constexpr void System::Xml::HtmlUtf8RawTextWriter::__cordl_internal_set_doNotEscapeUriAttributes(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___doNotEscapeUriAttributes = value;
}
inline void System::Xml::HtmlUtf8RawTextWriter::setStaticF_elementPropertySearch(::System::Xml::TernaryTreeReadOnly* value) {
  ::cordl_internals::setStaticField<::System::Xml::TernaryTreeReadOnly*, "elementPropertySearch", ::System::Xml::HtmlUtf8RawTextWriter*>(std::forward<::System::Xml::TernaryTreeReadOnly*>(value));
}
inline ::System::Xml::TernaryTreeReadOnly* System::Xml::HtmlUtf8RawTextWriter::getStaticF_elementPropertySearch() {
  return ::cordl_internals::getStaticField<::System::Xml::TernaryTreeReadOnly*, "elementPropertySearch", ::System::Xml::HtmlUtf8RawTextWriter*>();
}
inline void System::Xml::HtmlUtf8RawTextWriter::setStaticF_attributePropertySearch(::System::Xml::TernaryTreeReadOnly* value) {
  ::cordl_internals::setStaticField<::System::Xml::TernaryTreeReadOnly*, "attributePropertySearch", ::System::Xml::HtmlUtf8RawTextWriter*>(std::forward<::System::Xml::TernaryTreeReadOnly*>(value));
}
inline ::System::Xml::TernaryTreeReadOnly* System::Xml::HtmlUtf8RawTextWriter::getStaticF_attributePropertySearch() {
  return ::cordl_internals::getStaticField<::System::Xml::TernaryTreeReadOnly*, "attributePropertySearch", ::System::Xml::HtmlUtf8RawTextWriter*>();
}
inline void System::Xml::HtmlUtf8RawTextWriter::_ctor(::System::IO::Stream* stream, ::System::Xml::XmlWriterSettings* settings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::HtmlUtf8RawTextWriter*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Xml::XmlWriterSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, settings);
}
inline void System::Xml::HtmlUtf8RawTextWriter::WriteXmlDeclaration(::System::Xml::XmlStandalone standalone) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::HtmlUtf8RawTextWriter*>(), 46 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, standalone);
}
inline void System::Xml::HtmlUtf8RawTextWriter::WriteXmlDeclaration(::StringW xmldecl) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::HtmlUtf8RawTextWriter*>(), 47 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xmldecl);
}
inline void System::Xml::HtmlUtf8RawTextWriter::WriteDocType(::StringW name, ::StringW pubid, ::StringW sysid, ::StringW subset) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::HtmlUtf8RawTextWriter*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, pubid, sysid, subset);
}
inline void System::Xml::HtmlUtf8RawTextWriter::WriteStartElement(::StringW prefix, ::StringW localName, ::StringW ns) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::HtmlUtf8RawTextWriter*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, ns);
}
inline void System::Xml::HtmlUtf8RawTextWriter::StartElementContent() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::HtmlUtf8RawTextWriter*>(), 48 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::HtmlUtf8RawTextWriter::WriteEndElement(::StringW prefix, ::StringW localName, ::StringW ns) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::HtmlUtf8RawTextWriter*>(), 50 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, ns);
}
inline void System::Xml::HtmlUtf8RawTextWriter::WriteFullEndElement(::StringW prefix, ::StringW localName, ::StringW ns) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::HtmlUtf8RawTextWriter*>(), 51 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, ns);
}
inline void System::Xml::HtmlUtf8RawTextWriter::WriteStartAttribute(::StringW prefix, ::StringW localName, ::StringW ns) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::HtmlUtf8RawTextWriter*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, ns);
}
inline void System::Xml::HtmlUtf8RawTextWriter::WriteEndAttribute() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::HtmlUtf8RawTextWriter*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::HtmlUtf8RawTextWriter::WriteProcessingInstruction(::StringW target, ::StringW text) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::HtmlUtf8RawTextWriter*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target, text);
}
inline void System::Xml::HtmlUtf8RawTextWriter::WriteString(::StringW text) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::HtmlUtf8RawTextWriter*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline void System::Xml::HtmlUtf8RawTextWriter::WriteEntityRef(::StringW name) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::HtmlUtf8RawTextWriter*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void System::Xml::HtmlUtf8RawTextWriter::WriteCharEntity(char16_t ch) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::HtmlUtf8RawTextWriter*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ch);
}
inline void System::Xml::HtmlUtf8RawTextWriter::WriteSurrogateCharEntity(char16_t lowChar, char16_t highChar) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::HtmlUtf8RawTextWriter*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lowChar, highChar);
}
inline void System::Xml::HtmlUtf8RawTextWriter::WriteChars(::ArrayW<char16_t> buffer, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::HtmlUtf8RawTextWriter*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, index, count);
}
inline void System::Xml::HtmlUtf8RawTextWriter::Init(::System::Xml::XmlWriterSettings* settings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::HtmlUtf8RawTextWriter*>(), { "Init", {}, { ::i2c::type_of<::System::Xml::XmlWriterSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, settings);
}
inline void System::Xml::HtmlUtf8RawTextWriter::WriteMetaElement() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::HtmlUtf8RawTextWriter*>(), { "WriteMetaElement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::HtmlUtf8RawTextWriter::WriteHtmlElementTextBlock(char16_t* pSrc, char16_t* pSrcEnd) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::HtmlUtf8RawTextWriter*>(), { "WriteHtmlElementTextBlock", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<char16_t*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pSrc, pSrcEnd);
}
inline void System::Xml::HtmlUtf8RawTextWriter::WriteHtmlAttributeTextBlock(char16_t* pSrc, char16_t* pSrcEnd) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::HtmlUtf8RawTextWriter*>(), { "WriteHtmlAttributeTextBlock", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<char16_t*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pSrc, pSrcEnd);
}
inline void System::Xml::HtmlUtf8RawTextWriter::WriteHtmlAttributeText(char16_t* pSrc, char16_t* pSrcEnd) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::HtmlUtf8RawTextWriter*>(), { "WriteHtmlAttributeText", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<char16_t*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pSrc, pSrcEnd);
}
inline void System::Xml::HtmlUtf8RawTextWriter::WriteUriAttributeText(char16_t* pSrc, char16_t* pSrcEnd) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::HtmlUtf8RawTextWriter*>(), { "WriteUriAttributeText", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<char16_t*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pSrc, pSrcEnd);
}
inline void System::Xml::HtmlUtf8RawTextWriter::OutputRestAmps() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::HtmlUtf8RawTextWriter*>(), { "OutputRestAmps", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::HtmlUtf8RawTextWriter* System::Xml::HtmlUtf8RawTextWriter::New_ctor(::System::IO::Stream* stream, ::System::Xml::XmlWriterSettings* settings) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::HtmlUtf8RawTextWriter*>(stream, settings));
}
// Ctor Parameters []
constexpr ::System::Xml::HtmlUtf8RawTextWriter::HtmlUtf8RawTextWriter() {}
