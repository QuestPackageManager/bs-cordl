#pragma once
// IWYU pragma private; include "Newtonsoft\Json\Converters\XDocumentWrapper.hpp"
#include "Newtonsoft/Json/Converters/zzzz__XContainerWrapper_impl.hpp"
#include "Newtonsoft/Json/Converters/zzzz__XDocumentWrapper_def.hpp"
#include "Newtonsoft/Json/Converters/zzzz__IXmlDocument_def.hpp"
#include "Newtonsoft/Json/Converters/zzzz__IXmlElement_def.hpp"
#include "Newtonsoft/Json/Converters/zzzz__IXmlNode_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Xml/Linq/zzzz__XDocument_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XDocumentWrapper.get_Document
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Linq::XDocument* (::Newtonsoft::Json::Converters::XDocumentWrapper::*)()>(
    &::Newtonsoft::Json::Converters::XDocumentWrapper::get_Document)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5da0414;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XDocumentWrapper*>(), { "get_Document", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XDocumentWrapper._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Converters::XDocumentWrapper::*)(::System::Xml::Linq::XDocument*)>(
    &::Newtonsoft::Json::Converters::XDocumentWrapper::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5da0490;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XDocumentWrapper*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::Linq::XDocument*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XDocumentWrapper.get_ChildNodes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* (::Newtonsoft::Json::Converters::XDocumentWrapper::*)()>(
    &::Newtonsoft::Json::Converters::XDocumentWrapper::get_ChildNodes)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5da04a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XDocumentWrapper*>(), { ::i2c::class_of<::Newtonsoft::Json::Converters::XDocumentWrapper*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XDocumentWrapper.get_HasChildNodes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Converters::XDocumentWrapper::*)()>(&::Newtonsoft::Json::Converters::XDocumentWrapper::get_HasChildNodes)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5da0a00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XDocumentWrapper*>(), { ::i2c::class_of<::Newtonsoft::Json::Converters::XDocumentWrapper*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XDocumentWrapper.CreateComment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Converters::IXmlNode* (::Newtonsoft::Json::Converters::XDocumentWrapper::*)(::StringW)>(
    &::Newtonsoft::Json::Converters::XDocumentWrapper::CreateComment)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5da0a64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XDocumentWrapper*>(), { "CreateComment", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XDocumentWrapper.CreateTextNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Converters::IXmlNode* (::Newtonsoft::Json::Converters::XDocumentWrapper::*)(::StringW)>(
    &::Newtonsoft::Json::Converters::XDocumentWrapper::CreateTextNode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5da0ae4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XDocumentWrapper*>(), { "CreateTextNode", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XDocumentWrapper.CreateCDataSection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Converters::IXmlNode* (::Newtonsoft::Json::Converters::XDocumentWrapper::*)(::StringW)>(
    &::Newtonsoft::Json::Converters::XDocumentWrapper::CreateCDataSection)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5da0b64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XDocumentWrapper*>(), { "CreateCDataSection", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XDocumentWrapper.CreateWhitespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Converters::IXmlNode* (::Newtonsoft::Json::Converters::XDocumentWrapper::*)(::StringW)>(
    &::Newtonsoft::Json::Converters::XDocumentWrapper::CreateWhitespace)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5da0be0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XDocumentWrapper*>(), { "CreateWhitespace", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XDocumentWrapper.CreateSignificantWhitespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Converters::IXmlNode* (::Newtonsoft::Json::Converters::XDocumentWrapper::*)(::StringW)>(
    &::Newtonsoft::Json::Converters::XDocumentWrapper::CreateSignificantWhitespace)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5da0c60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XDocumentWrapper*>(), { "CreateSignificantWhitespace", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XDocumentWrapper.CreateXmlDeclaration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Converters::IXmlNode* (::Newtonsoft::Json::Converters::XDocumentWrapper::*)(::StringW, ::StringW, ::StringW)>(
    &::Newtonsoft::Json::Converters::XDocumentWrapper::CreateXmlDeclaration)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5da0ce0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XDocumentWrapper*>(),
                                                             { "CreateXmlDeclaration", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XDocumentWrapper.CreateXmlDocumentType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Converters::IXmlNode* (::Newtonsoft::Json::Converters::XDocumentWrapper::*)(::StringW, ::StringW, ::StringW, ::StringW)>(
    &::Newtonsoft::Json::Converters::XDocumentWrapper::CreateXmlDocumentType)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5da0d6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XDocumentWrapper*>(),
                                         { "CreateXmlDocumentType", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XDocumentWrapper.CreateProcessingInstruction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Converters::IXmlNode* (::Newtonsoft::Json::Converters::XDocumentWrapper::*)(::StringW, ::StringW)>(
    &::Newtonsoft::Json::Converters::XDocumentWrapper::CreateProcessingInstruction)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5da0e14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XDocumentWrapper*>(),
                                                                                           { "CreateProcessingInstruction", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XDocumentWrapper.CreateElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Converters::IXmlElement* (::Newtonsoft::Json::Converters::XDocumentWrapper::*)(::StringW)>(
    &::Newtonsoft::Json::Converters::XDocumentWrapper::CreateElement)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5da0eac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XDocumentWrapper*>(), { "CreateElement", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XDocumentWrapper.CreateElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Converters::IXmlElement* (::Newtonsoft::Json::Converters::XDocumentWrapper::*)(::StringW, ::StringW)>(
    &::Newtonsoft::Json::Converters::XDocumentWrapper::CreateElement)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5da0f44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XDocumentWrapper*>(), { "CreateElement", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XDocumentWrapper.CreateAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Converters::IXmlNode* (::Newtonsoft::Json::Converters::XDocumentWrapper::*)(::StringW, ::StringW)>(
    &::Newtonsoft::Json::Converters::XDocumentWrapper::CreateAttribute)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5da1004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XDocumentWrapper*>(),
                                                                                           { "CreateAttribute", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XDocumentWrapper.CreateAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Converters::IXmlNode* (::Newtonsoft::Json::Converters::XDocumentWrapper::*)(::StringW, ::StringW, ::StringW)>(
    &::Newtonsoft::Json::Converters::XDocumentWrapper::CreateAttribute)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5da10ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XDocumentWrapper*>(),
                                                             { "CreateAttribute", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XDocumentWrapper.get_DocumentElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Converters::IXmlElement* (::Newtonsoft::Json::Converters::XDocumentWrapper::*)()>(
    &::Newtonsoft::Json::Converters::XDocumentWrapper::get_DocumentElement)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5da1174;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XDocumentWrapper*>(), { "get_DocumentElement", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XDocumentWrapper.AppendChild
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Converters::IXmlNode* (::Newtonsoft::Json::Converters::XDocumentWrapper::*)(::Newtonsoft::Json::Converters::IXmlNode*)>(
    &::Newtonsoft::Json::Converters::XDocumentWrapper::AppendChild)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5da11fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XDocumentWrapper*>(), { ::i2c::class_of<::Newtonsoft::Json::Converters::XDocumentWrapper*>(), 21 }));
    return ___internal_method;
  }
};
inline ::System::Xml::Linq::XDocument* Newtonsoft::Json::Converters::XDocumentWrapper::get_Document() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XDocumentWrapper*>(), { "get_Document", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Linq::XDocument*>(this, ___internal_method);
}
inline void Newtonsoft::Json::Converters::XDocumentWrapper::_ctor(::System::Xml::Linq::XDocument* document) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XDocumentWrapper*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::Linq::XDocument*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, document);
}
inline ::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* Newtonsoft::Json::Converters::XDocumentWrapper::get_ChildNodes() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Converters::XDocumentWrapper*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>*>(this, ___internal_method);
}
inline bool Newtonsoft::Json::Converters::XDocumentWrapper::get_HasChildNodes() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Converters::XDocumentWrapper*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Converters::IXmlNode* Newtonsoft::Json::Converters::XDocumentWrapper::CreateComment(::StringW text) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XDocumentWrapper*>(), { "CreateComment", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Converters::IXmlNode*>(this, ___internal_method, text);
}
inline ::Newtonsoft::Json::Converters::IXmlNode* Newtonsoft::Json::Converters::XDocumentWrapper::CreateTextNode(::StringW text) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XDocumentWrapper*>(), { "CreateTextNode", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Converters::IXmlNode*>(this, ___internal_method, text);
}
inline ::Newtonsoft::Json::Converters::IXmlNode* Newtonsoft::Json::Converters::XDocumentWrapper::CreateCDataSection(::StringW data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XDocumentWrapper*>(), { "CreateCDataSection", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Converters::IXmlNode*>(this, ___internal_method, data);
}
inline ::Newtonsoft::Json::Converters::IXmlNode* Newtonsoft::Json::Converters::XDocumentWrapper::CreateWhitespace(::StringW text) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XDocumentWrapper*>(), { "CreateWhitespace", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Converters::IXmlNode*>(this, ___internal_method, text);
}
inline ::Newtonsoft::Json::Converters::IXmlNode* Newtonsoft::Json::Converters::XDocumentWrapper::CreateSignificantWhitespace(::StringW text) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XDocumentWrapper*>(), { "CreateSignificantWhitespace", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Converters::IXmlNode*>(this, ___internal_method, text);
}
inline ::Newtonsoft::Json::Converters::IXmlNode* Newtonsoft::Json::Converters::XDocumentWrapper::CreateXmlDeclaration(::StringW version, ::StringW encoding, ::StringW standalone) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XDocumentWrapper*>(),
                                                           { "CreateXmlDeclaration", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Converters::IXmlNode*>(this, ___internal_method, version, encoding, standalone);
}
inline ::Newtonsoft::Json::Converters::IXmlNode* Newtonsoft::Json::Converters::XDocumentWrapper::CreateXmlDocumentType(::StringW name, ::StringW publicId, ::StringW systemId,
                                                                                                                       ::StringW internalSubset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XDocumentWrapper*>(),
                                       { "CreateXmlDocumentType", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Converters::IXmlNode*>(this, ___internal_method, name, publicId, systemId, internalSubset);
}
inline ::Newtonsoft::Json::Converters::IXmlNode* Newtonsoft::Json::Converters::XDocumentWrapper::CreateProcessingInstruction(::StringW target, ::StringW data) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XDocumentWrapper*>(),
                                                                                         { "CreateProcessingInstruction", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Converters::IXmlNode*>(this, ___internal_method, target, data);
}
inline ::Newtonsoft::Json::Converters::IXmlElement* Newtonsoft::Json::Converters::XDocumentWrapper::CreateElement(::StringW elementName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XDocumentWrapper*>(), { "CreateElement", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Converters::IXmlElement*>(this, ___internal_method, elementName);
}
inline ::Newtonsoft::Json::Converters::IXmlElement* Newtonsoft::Json::Converters::XDocumentWrapper::CreateElement(::StringW qualifiedName, ::StringW namespaceUri) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XDocumentWrapper*>(), { "CreateElement", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Converters::IXmlElement*>(this, ___internal_method, qualifiedName, namespaceUri);
}
inline ::Newtonsoft::Json::Converters::IXmlNode* Newtonsoft::Json::Converters::XDocumentWrapper::CreateAttribute(::StringW name, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XDocumentWrapper*>(), { "CreateAttribute", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Converters::IXmlNode*>(this, ___internal_method, name, value);
}
inline ::Newtonsoft::Json::Converters::IXmlNode* Newtonsoft::Json::Converters::XDocumentWrapper::CreateAttribute(::StringW qualifiedName, ::StringW namespaceUri, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XDocumentWrapper*>(),
                                                           { "CreateAttribute", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Converters::IXmlNode*>(this, ___internal_method, qualifiedName, namespaceUri, value);
}
inline ::Newtonsoft::Json::Converters::IXmlElement* Newtonsoft::Json::Converters::XDocumentWrapper::get_DocumentElement() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XDocumentWrapper*>(), { "get_DocumentElement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Converters::IXmlElement*>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Converters::IXmlNode* Newtonsoft::Json::Converters::XDocumentWrapper::AppendChild(::Newtonsoft::Json::Converters::IXmlNode* newChild) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Converters::XDocumentWrapper*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Converters::IXmlNode*>(this, ___internal_method, newChild);
}
inline ::Newtonsoft::Json::Converters::XDocumentWrapper* Newtonsoft::Json::Converters::XDocumentWrapper::New_ctor(::System::Xml::Linq::XDocument* document) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Converters::XDocumentWrapper*>(document));
}
/// @brief Convert operator to "::Newtonsoft::Json::Converters::IXmlDocument"
constexpr Newtonsoft::Json::Converters::XDocumentWrapper::operator ::Newtonsoft::Json::Converters::IXmlDocument*() noexcept {
  return static_cast<::Newtonsoft::Json::Converters::IXmlDocument*>(static_cast<void*>(this));
}
/// @brief Convert to "::Newtonsoft::Json::Converters::IXmlDocument"
constexpr ::Newtonsoft::Json::Converters::IXmlDocument* Newtonsoft::Json::Converters::XDocumentWrapper::i___Newtonsoft__Json__Converters__IXmlDocument() noexcept {
  return static_cast<::Newtonsoft::Json::Converters::IXmlDocument*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Newtonsoft::Json::Converters::IXmlNode"
constexpr Newtonsoft::Json::Converters::XDocumentWrapper::operator ::Newtonsoft::Json::Converters::IXmlNode*() noexcept {
  return static_cast<::Newtonsoft::Json::Converters::IXmlNode*>(static_cast<void*>(this));
}
/// @brief Convert to "::Newtonsoft::Json::Converters::IXmlNode"
constexpr ::Newtonsoft::Json::Converters::IXmlNode* Newtonsoft::Json::Converters::XDocumentWrapper::i___Newtonsoft__Json__Converters__IXmlNode() noexcept {
  return static_cast<::Newtonsoft::Json::Converters::IXmlNode*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Converters::XDocumentWrapper::XDocumentWrapper() {}
