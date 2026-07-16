#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Converters/XmlDocumentWrapper.hpp"
#include "Newtonsoft/Json/Converters/zzzz__XmlNodeWrapper_impl.hpp"
#include "Newtonsoft/Json/Converters/zzzz__XmlDocumentWrapper_def.hpp"
#include "Newtonsoft/Json/Converters/zzzz__IXmlDocument_def.hpp"
#include "Newtonsoft/Json/Converters/zzzz__IXmlElement_def.hpp"
#include "Newtonsoft/Json/Converters/zzzz__IXmlNode_def.hpp"
#include "System/Xml/zzzz__XmlDocument_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XmlDocumentWrapper._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Converters::XmlDocumentWrapper::*)(::System::Xml::XmlDocument*)>(
    &::Newtonsoft::Json::Converters::XmlDocumentWrapper::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5d9ca74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlDocumentWrapper*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlDocument*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XmlDocumentWrapper.CreateComment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Converters::IXmlNode* (::Newtonsoft::Json::Converters::XmlDocumentWrapper::*)(::StringW)>(
    &::Newtonsoft::Json::Converters::XmlDocumentWrapper::CreateComment)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5d9ca88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlDocumentWrapper*>(), { "CreateComment", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XmlDocumentWrapper.CreateTextNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Converters::IXmlNode* (::Newtonsoft::Json::Converters::XmlDocumentWrapper::*)(::StringW)>(
    &::Newtonsoft::Json::Converters::XmlDocumentWrapper::CreateTextNode)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5d9cb0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlDocumentWrapper*>(), { "CreateTextNode", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XmlDocumentWrapper.CreateCDataSection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Converters::IXmlNode* (::Newtonsoft::Json::Converters::XmlDocumentWrapper::*)(::StringW)>(
    &::Newtonsoft::Json::Converters::XmlDocumentWrapper::CreateCDataSection)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5d9cb90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlDocumentWrapper*>(), { "CreateCDataSection", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XmlDocumentWrapper.CreateWhitespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Converters::IXmlNode* (::Newtonsoft::Json::Converters::XmlDocumentWrapper::*)(::StringW)>(
    &::Newtonsoft::Json::Converters::XmlDocumentWrapper::CreateWhitespace)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5d9cc14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlDocumentWrapper*>(), { "CreateWhitespace", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XmlDocumentWrapper.CreateSignificantWhitespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Converters::IXmlNode* (::Newtonsoft::Json::Converters::XmlDocumentWrapper::*)(::StringW)>(
    &::Newtonsoft::Json::Converters::XmlDocumentWrapper::CreateSignificantWhitespace)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5d9cc98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlDocumentWrapper*>(), { "CreateSignificantWhitespace", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XmlDocumentWrapper.CreateXmlDeclaration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Converters::IXmlNode* (::Newtonsoft::Json::Converters::XmlDocumentWrapper::*)(::StringW, ::StringW, ::StringW)>(
    &::Newtonsoft::Json::Converters::XmlDocumentWrapper::CreateXmlDeclaration)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5d9cd1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlDocumentWrapper*>(),
                                                             { "CreateXmlDeclaration", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XmlDocumentWrapper.CreateXmlDocumentType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Converters::IXmlNode* (::Newtonsoft::Json::Converters::XmlDocumentWrapper::*)(::StringW, ::StringW, ::StringW, ::StringW)>(
    &::Newtonsoft::Json::Converters::XmlDocumentWrapper::CreateXmlDocumentType)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5d9cdc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlDocumentWrapper*>(),
                                         { "CreateXmlDocumentType", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XmlDocumentWrapper.CreateProcessingInstruction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Converters::IXmlNode* (::Newtonsoft::Json::Converters::XmlDocumentWrapper::*)(::StringW, ::StringW)>(
    &::Newtonsoft::Json::Converters::XmlDocumentWrapper::CreateProcessingInstruction)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5d9ce78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlDocumentWrapper*>(),
                                                                                           { "CreateProcessingInstruction", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XmlDocumentWrapper.CreateElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Converters::IXmlElement* (::Newtonsoft::Json::Converters::XmlDocumentWrapper::*)(::StringW)>(
    &::Newtonsoft::Json::Converters::XmlDocumentWrapper::CreateElement)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5d9cf04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlDocumentWrapper*>(), { "CreateElement", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XmlDocumentWrapper.CreateElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Converters::IXmlElement* (::Newtonsoft::Json::Converters::XmlDocumentWrapper::*)(::StringW, ::StringW)>(
    &::Newtonsoft::Json::Converters::XmlDocumentWrapper::CreateElement)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5d9cf90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlDocumentWrapper*>(),
                                                                                           { "CreateElement", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XmlDocumentWrapper.CreateAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Converters::IXmlNode* (::Newtonsoft::Json::Converters::XmlDocumentWrapper::*)(::StringW, ::StringW)>(
    &::Newtonsoft::Json::Converters::XmlDocumentWrapper::CreateAttribute)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5d9d018;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlDocumentWrapper*>(),
                                                                                           { "CreateAttribute", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XmlDocumentWrapper.CreateAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Converters::IXmlNode* (::Newtonsoft::Json::Converters::XmlDocumentWrapper::*)(::StringW, ::StringW, ::StringW)>(
    &::Newtonsoft::Json::Converters::XmlDocumentWrapper::CreateAttribute)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5d9d0d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlDocumentWrapper*>(),
                                                             { "CreateAttribute", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XmlDocumentWrapper.get_DocumentElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Converters::IXmlElement* (::Newtonsoft::Json::Converters::XmlDocumentWrapper::*)()>(
    &::Newtonsoft::Json::Converters::XmlDocumentWrapper::get_DocumentElement)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5d9d184;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlDocumentWrapper*>(), { "get_DocumentElement", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlDocument*& Newtonsoft::Json::Converters::XmlDocumentWrapper::__cordl_internal_get__document() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____document;
}
constexpr ::System::Xml::XmlDocument* const& Newtonsoft::Json::Converters::XmlDocumentWrapper::__cordl_internal_get__document() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____document;
}
constexpr void Newtonsoft::Json::Converters::XmlDocumentWrapper::__cordl_internal_set__document(::System::Xml::XmlDocument* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____document = value;
}
inline void Newtonsoft::Json::Converters::XmlDocumentWrapper::_ctor(::System::Xml::XmlDocument* document) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlDocumentWrapper*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlDocument*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, document);
}
inline ::Newtonsoft::Json::Converters::IXmlNode* Newtonsoft::Json::Converters::XmlDocumentWrapper::CreateComment(::StringW data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlDocumentWrapper*>(), { "CreateComment", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Converters::IXmlNode*>(this, ___internal_method, data);
}
inline ::Newtonsoft::Json::Converters::IXmlNode* Newtonsoft::Json::Converters::XmlDocumentWrapper::CreateTextNode(::StringW text) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlDocumentWrapper*>(), { "CreateTextNode", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Converters::IXmlNode*>(this, ___internal_method, text);
}
inline ::Newtonsoft::Json::Converters::IXmlNode* Newtonsoft::Json::Converters::XmlDocumentWrapper::CreateCDataSection(::StringW data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlDocumentWrapper*>(), { "CreateCDataSection", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Converters::IXmlNode*>(this, ___internal_method, data);
}
inline ::Newtonsoft::Json::Converters::IXmlNode* Newtonsoft::Json::Converters::XmlDocumentWrapper::CreateWhitespace(::StringW text) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlDocumentWrapper*>(), { "CreateWhitespace", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Converters::IXmlNode*>(this, ___internal_method, text);
}
inline ::Newtonsoft::Json::Converters::IXmlNode* Newtonsoft::Json::Converters::XmlDocumentWrapper::CreateSignificantWhitespace(::StringW text) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlDocumentWrapper*>(), { "CreateSignificantWhitespace", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Converters::IXmlNode*>(this, ___internal_method, text);
}
inline ::Newtonsoft::Json::Converters::IXmlNode* Newtonsoft::Json::Converters::XmlDocumentWrapper::CreateXmlDeclaration(::StringW version, ::StringW encoding, ::StringW standalone) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlDocumentWrapper*>(),
                                                           { "CreateXmlDeclaration", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Converters::IXmlNode*>(this, ___internal_method, version, encoding, standalone);
}
inline ::Newtonsoft::Json::Converters::IXmlNode* Newtonsoft::Json::Converters::XmlDocumentWrapper::CreateXmlDocumentType(::StringW name, ::StringW publicId, ::StringW systemId,
                                                                                                                         ::StringW internalSubset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlDocumentWrapper*>(),
                                       { "CreateXmlDocumentType", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Converters::IXmlNode*>(this, ___internal_method, name, publicId, systemId, internalSubset);
}
inline ::Newtonsoft::Json::Converters::IXmlNode* Newtonsoft::Json::Converters::XmlDocumentWrapper::CreateProcessingInstruction(::StringW target, ::StringW data) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlDocumentWrapper*>(),
                                                                                         { "CreateProcessingInstruction", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Converters::IXmlNode*>(this, ___internal_method, target, data);
}
inline ::Newtonsoft::Json::Converters::IXmlElement* Newtonsoft::Json::Converters::XmlDocumentWrapper::CreateElement(::StringW elementName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlDocumentWrapper*>(), { "CreateElement", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Converters::IXmlElement*>(this, ___internal_method, elementName);
}
inline ::Newtonsoft::Json::Converters::IXmlElement* Newtonsoft::Json::Converters::XmlDocumentWrapper::CreateElement(::StringW qualifiedName, ::StringW namespaceUri) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlDocumentWrapper*>(), { "CreateElement", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Converters::IXmlElement*>(this, ___internal_method, qualifiedName, namespaceUri);
}
inline ::Newtonsoft::Json::Converters::IXmlNode* Newtonsoft::Json::Converters::XmlDocumentWrapper::CreateAttribute(::StringW name, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlDocumentWrapper*>(),
                                                                                         { "CreateAttribute", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Converters::IXmlNode*>(this, ___internal_method, name, value);
}
inline ::Newtonsoft::Json::Converters::IXmlNode* Newtonsoft::Json::Converters::XmlDocumentWrapper::CreateAttribute(::StringW qualifiedName, ::StringW namespaceUri, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlDocumentWrapper*>(),
                                                           { "CreateAttribute", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Converters::IXmlNode*>(this, ___internal_method, qualifiedName, namespaceUri, value);
}
inline ::Newtonsoft::Json::Converters::IXmlElement* Newtonsoft::Json::Converters::XmlDocumentWrapper::get_DocumentElement() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlDocumentWrapper*>(), { "get_DocumentElement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Converters::IXmlElement*>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Converters::XmlDocumentWrapper* Newtonsoft::Json::Converters::XmlDocumentWrapper::New_ctor(::System::Xml::XmlDocument* document) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Converters::XmlDocumentWrapper*>(document));
}
/// @brief Convert operator to "::Newtonsoft::Json::Converters::IXmlDocument"
constexpr Newtonsoft::Json::Converters::XmlDocumentWrapper::operator ::Newtonsoft::Json::Converters::IXmlDocument*() noexcept {
  return static_cast<::Newtonsoft::Json::Converters::IXmlDocument*>(static_cast<void*>(this));
}
/// @brief Convert to "::Newtonsoft::Json::Converters::IXmlDocument"
constexpr ::Newtonsoft::Json::Converters::IXmlDocument* Newtonsoft::Json::Converters::XmlDocumentWrapper::i___Newtonsoft__Json__Converters__IXmlDocument() noexcept {
  return static_cast<::Newtonsoft::Json::Converters::IXmlDocument*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Newtonsoft::Json::Converters::IXmlNode"
constexpr Newtonsoft::Json::Converters::XmlDocumentWrapper::operator ::Newtonsoft::Json::Converters::IXmlNode*() noexcept {
  return static_cast<::Newtonsoft::Json::Converters::IXmlNode*>(static_cast<void*>(this));
}
/// @brief Convert to "::Newtonsoft::Json::Converters::IXmlNode"
constexpr ::Newtonsoft::Json::Converters::IXmlNode* Newtonsoft::Json::Converters::XmlDocumentWrapper::i___Newtonsoft__Json__Converters__IXmlNode() noexcept {
  return static_cast<::Newtonsoft::Json::Converters::IXmlNode*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Converters::XmlDocumentWrapper::XmlDocumentWrapper() {}
