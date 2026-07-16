#pragma once
// IWYU pragma private; include "System/Xml/XmlDocument.hpp"
#include "System/Xml/zzzz__XmlNode_impl.hpp"
#include "System/Xml/zzzz__XmlDocument_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Xml/Schema/zzzz__IXmlSchemaInfo_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaAttDef_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaElementDecl_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaInfo_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSet_def.hpp"
#include "System/Xml/XPath/zzzz__XPathNavigator_def.hpp"
#include "System/Xml/XPath/zzzz__XPathNodeType_def.hpp"
#include "System/Xml/zzzz__DomNameTable_def.hpp"
#include "System/Xml/zzzz__EmptyEnumerator_def.hpp"
#include "System/Xml/zzzz__XmlAttribute_def.hpp"
#include "System/Xml/zzzz__XmlCDataSection_def.hpp"
#include "System/Xml/zzzz__XmlComment_def.hpp"
#include "System/Xml/zzzz__XmlDeclaration_def.hpp"
#include "System/Xml/zzzz__XmlDocumentFragment_def.hpp"
#include "System/Xml/zzzz__XmlDocumentType_def.hpp"
#include "System/Xml/zzzz__XmlElement_def.hpp"
#include "System/Xml/zzzz__XmlEntityReference_def.hpp"
#include "System/Xml/zzzz__XmlEntity_def.hpp"
#include "System/Xml/zzzz__XmlImplementation_def.hpp"
#include "System/Xml/zzzz__XmlLinkedNode_def.hpp"
#include "System/Xml/zzzz__XmlNameTable_def.hpp"
#include "System/Xml/zzzz__XmlName_def.hpp"
#include "System/Xml/zzzz__XmlNamedNodeMap_def.hpp"
#include "System/Xml/zzzz__XmlNodeChangedAction_def.hpp"
#include "System/Xml/zzzz__XmlNodeChangedEventArgs_def.hpp"
#include "System/Xml/zzzz__XmlNodeChangedEventHandler_def.hpp"
#include "System/Xml/zzzz__XmlNodeType_def.hpp"
#include "System/Xml/zzzz__XmlNode_def.hpp"
#include "System/Xml/zzzz__XmlProcessingInstruction_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
#include "System/Xml/zzzz__XmlResolver_def.hpp"
#include "System/Xml/zzzz__XmlSignificantWhitespace_def.hpp"
#include "System/Xml/zzzz__XmlTextReader_def.hpp"
#include "System/Xml/zzzz__XmlText_def.hpp"
#include "System/Xml/zzzz__XmlWhitespace_def.hpp"
#include "System/Xml/zzzz__XmlWriter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__WeakReference_def.hpp"
//  Writing Method size for method: ::System::Xml::XmlDocument._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlDocument::*)()>(&::System::Xml::XmlDocument::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x62b5ed4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlDocument::*)(::System::Xml::XmlNameTable*)>(&::System::Xml::XmlDocument::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x62b6350;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlNameTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlDocument::*)(::System::Xml::XmlImplementation*)>(&::System::Xml::XmlDocument::_ctor)> {
  constexpr static std::size_t size = 0x3c4;
  constexpr static std::size_t addrs = 0x62b5f8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlImplementation*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.get_DtdSchemaInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::SchemaInfo* (::System::Xml::XmlDocument::*)()>(&::System::Xml::XmlDocument::get_DtdSchemaInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62b63c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { "get_DtdSchemaInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.set_DtdSchemaInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlDocument::*)(::System::Xml::Schema::SchemaInfo*)>(&::System::Xml::XmlDocument::set_DtdSchemaInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62b63c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { "set_DtdSchemaInfo", {}, { ::i2c::type_of<::System::Xml::Schema::SchemaInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.CheckName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::System::Xml::XmlDocument::CheckName)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x62b0728;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { "CheckName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.AddXmlName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlName* (::System::Xml::XmlDocument::*)(::StringW, ::StringW, ::StringW, ::System::Xml::Schema::IXmlSchemaInfo*)>(
    &::System::Xml::XmlDocument::AddXmlName)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x62b63d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::System::Xml::XmlDocument*>(),
                         { "AddXmlName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Schema::IXmlSchemaInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.GetXmlName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlName* (::System::Xml::XmlDocument::*)(::StringW, ::StringW, ::StringW, ::System::Xml::Schema::IXmlSchemaInfo*)>(
    &::System::Xml::XmlDocument::GetXmlName)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x62b63e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::System::Xml::XmlDocument*>(),
                         { "GetXmlName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Schema::IXmlSchemaInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.AddAttrXmlName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlName* (::System::Xml::XmlDocument::*)(::StringW, ::StringW, ::StringW, ::System::Xml::Schema::IXmlSchemaInfo*)>(
    &::System::Xml::XmlDocument::AddAttrXmlName)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x62b0854;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Xml::XmlDocument*>(),
            { "AddAttrXmlName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Schema::IXmlSchemaInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.AddIdInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlDocument::*)(::System::Xml::XmlName*, ::System::Xml::XmlName*)>(&::System::Xml::XmlDocument::AddIdInfo)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x62b63f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { "AddIdInfo", {}, { ::i2c::type_of<::System::Xml::XmlName*>(), ::i2c::type_of<::System::Xml::XmlName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.GetIDInfoByElement_
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlName* (::System::Xml::XmlDocument::*)(::System::Xml::XmlName*)>(&::System::Xml::XmlDocument::GetIDInfoByElement_)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x62b64c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { "GetIDInfoByElement_", {}, { ::i2c::type_of<::System::Xml::XmlName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.GetIDInfoByElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlName* (::System::Xml::XmlDocument::*)(::System::Xml::XmlName*)>(&::System::Xml::XmlDocument::GetIDInfoByElement)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x62b4944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { "GetIDInfoByElement", {}, { ::i2c::type_of<::System::Xml::XmlName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.GetElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::WeakReference* (::System::Xml::XmlDocument::*)(::System::Collections::ArrayList*, ::System::Xml::XmlElement*)>(
    &::System::Xml::XmlDocument::GetElement)> {
  constexpr static std::size_t size = 0x5fc;
  constexpr static std::size_t addrs = 0x62b6590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(),
                                                             { "GetElement", {}, { ::i2c::type_of<::System::Collections::ArrayList*>(), ::i2c::type_of<::System::Xml::XmlElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.AddElementWithId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlDocument::*)(::StringW, ::System::Xml::XmlElement*)>(&::System::Xml::XmlDocument::AddElementWithId)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x62b4958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { "AddElementWithId", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.RemoveElementWithId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlDocument::*)(::StringW, ::System::Xml::XmlElement*)>(&::System::Xml::XmlDocument::RemoveElementWithId)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x62b4b60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { "RemoveElementWithId", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.CloneNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNode* (::System::Xml::XmlDocument::*)(bool)>(&::System::Xml::XmlDocument::CloneNode)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x62b6b8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { ::i2c::class_of<::System::Xml::XmlDocument*>(), 32 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.get_NodeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNodeType (::System::Xml::XmlDocument::*)()>(&::System::Xml::XmlDocument::get_NodeType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62b6c84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { ::i2c::class_of<::System::Xml::XmlDocument*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.get_ParentNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNode* (::System::Xml::XmlDocument::*)()>(&::System::Xml::XmlDocument::get_ParentNode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62b6c8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { ::i2c::class_of<::System::Xml::XmlDocument*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.get_DocumentType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlDocumentType* (::System::Xml::XmlDocument::*)()>(&::System::Xml::XmlDocument::get_DocumentType)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x62b6c94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { ::i2c::class_of<::System::Xml::XmlDocument*>(), 60 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.get_Declaration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlDeclaration* (::System::Xml::XmlDocument::*)()>(&::System::Xml::XmlDocument::get_Declaration)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x62b6d24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { ::i2c::class_of<::System::Xml::XmlDocument*>(), 61 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.get_Implementation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlImplementation* (::System::Xml::XmlDocument::*)()>(&::System::Xml::XmlDocument::get_Implementation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62b6dcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { "get_Implementation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlDocument::*)()>(&::System::Xml::XmlDocument::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62b6dd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { ::i2c::class_of<::System::Xml::XmlDocument*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.get_LocalName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlDocument::*)()>(&::System::Xml::XmlDocument::get_LocalName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62b6ddc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { ::i2c::class_of<::System::Xml::XmlDocument*>(), 37 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.get_DocumentElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlElement* (::System::Xml::XmlDocument::*)()>(&::System::Xml::XmlDocument::get_DocumentElement)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x62aeb7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { "get_DocumentElement", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.get_IsContainer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlDocument::*)()>(&::System::Xml::XmlDocument::get_IsContainer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62b6de4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { ::i2c::class_of<::System::Xml::XmlDocument*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.get_LastNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlLinkedNode* (::System::Xml::XmlDocument::*)()>(&::System::Xml::XmlDocument::get_LastNode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62b6dec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { ::i2c::class_of<::System::Xml::XmlDocument*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.set_LastNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlDocument::*)(::System::Xml::XmlLinkedNode*)>(&::System::Xml::XmlDocument::set_LastNode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62b6df4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { ::i2c::class_of<::System::Xml::XmlDocument*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.get_OwnerDocument
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlDocument* (::System::Xml::XmlDocument::*)()>(&::System::Xml::XmlDocument::get_OwnerDocument)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62b6dfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { ::i2c::class_of<::System::Xml::XmlDocument*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.set_Schemas
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlDocument::*)(::System::Xml::Schema::XmlSchemaSet*)>(&::System::Xml::XmlDocument::set_Schemas)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62b6e04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { "set_Schemas", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaSet*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.get_CanReportValidity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlDocument::*)()>(&::System::Xml::XmlDocument::get_CanReportValidity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62b6e0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { "get_CanReportValidity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.get_HasSetResolver
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlDocument::*)()>(&::System::Xml::XmlDocument::get_HasSetResolver)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62b6e14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { "get_HasSetResolver", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.GetResolver
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlResolver* (::System::Xml::XmlDocument::*)()>(&::System::Xml::XmlDocument::GetResolver)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62b6e1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { "GetResolver", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.set_XmlResolver
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlDocument::*)(::System::Xml::XmlResolver*)>(&::System::Xml::XmlDocument::set_XmlResolver)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x62b6e24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { ::i2c::class_of<::System::Xml::XmlDocument*>(), 62 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.IsValidChildType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlDocument::*)(::System::Xml::XmlNodeType)>(&::System::Xml::XmlDocument::IsValidChildType)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x62b6fac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { ::i2c::class_of<::System::Xml::XmlDocument*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.HasNodeTypeInPrevSiblings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlDocument::*)(::System::Xml::XmlNodeType, ::System::Xml::XmlNode*)>(
    &::System::Xml::XmlDocument::HasNodeTypeInPrevSiblings)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x62b7090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(),
                                                             { "HasNodeTypeInPrevSiblings", {}, { ::i2c::type_of<::System::Xml::XmlNodeType>(), ::i2c::type_of<::System::Xml::XmlNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.HasNodeTypeInNextSiblings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlDocument::*)(::System::Xml::XmlNodeType, ::System::Xml::XmlNode*)>(
    &::System::Xml::XmlDocument::HasNodeTypeInNextSiblings)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x62b7144;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(),
                                                             { "HasNodeTypeInNextSiblings", {}, { ::i2c::type_of<::System::Xml::XmlNodeType>(), ::i2c::type_of<::System::Xml::XmlNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.CanInsertBefore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlDocument::*)(::System::Xml::XmlNode*, ::System::Xml::XmlNode*)>(&::System::Xml::XmlDocument::CanInsertBefore)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x62b71a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { ::i2c::class_of<::System::Xml::XmlDocument*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.CanInsertAfter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlDocument::*)(::System::Xml::XmlNode*, ::System::Xml::XmlNode*)>(&::System::Xml::XmlDocument::CanInsertAfter)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x62b730c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { ::i2c::class_of<::System::Xml::XmlDocument*>(), 30 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.CreateAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlAttribute* (::System::Xml::XmlDocument::*)(::StringW)>(&::System::Xml::XmlDocument::CreateAttribute)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x62b7400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { "CreateAttribute", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.SetDefaultNamespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlDocument::*)(::StringW, ::StringW, ::by_ref<::StringW>)>(&::System::Xml::XmlDocument::SetDefaultNamespace)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x62b7530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(),
                                                             { "SetDefaultNamespace", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.CreateCDataSection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlCDataSection* (::System::Xml::XmlDocument::*)(::StringW)>(&::System::Xml::XmlDocument::CreateCDataSection)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x62b75b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { ::i2c::class_of<::System::Xml::XmlDocument*>(), 63 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.CreateComment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlComment* (::System::Xml::XmlDocument::*)(::StringW)>(&::System::Xml::XmlDocument::CreateComment)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x62b7628;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { ::i2c::class_of<::System::Xml::XmlDocument*>(), 64 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.CreateDocumentType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlDocumentType* (::System::Xml::XmlDocument::*)(::StringW, ::StringW, ::StringW, ::StringW)>(
    &::System::Xml::XmlDocument::CreateDocumentType)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x62b7694;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { ::i2c::class_of<::System::Xml::XmlDocument*>(), 65 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.CreateDocumentFragment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlDocumentFragment* (::System::Xml::XmlDocument::*)()>(&::System::Xml::XmlDocument::CreateDocumentFragment)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x62b77e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { ::i2c::class_of<::System::Xml::XmlDocument*>(), 66 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.CreateElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlElement* (::System::Xml::XmlDocument::*)(::StringW)>(&::System::Xml::XmlDocument::CreateElement)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x62b7898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { "CreateElement", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.AddDefaultAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlDocument::*)(::System::Xml::XmlElement*)>(&::System::Xml::XmlDocument::AddDefaultAttributes)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x62b7900;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { "AddDefaultAttributes", {}, { ::i2c::type_of<::System::Xml::XmlElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.GetSchemaElementDecl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::SchemaElementDecl* (::System::Xml::XmlDocument::*)(::System::Xml::XmlElement*)>(
    &::System::Xml::XmlDocument::GetSchemaElementDecl)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x62b7bb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { "GetSchemaElementDecl", {}, { ::i2c::type_of<::System::Xml::XmlElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.PrepareDefaultAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlAttribute* (::System::Xml::XmlDocument::*)(::System::Xml::Schema::SchemaAttDef*, ::StringW, ::StringW, ::StringW)>(
    &::System::Xml::XmlDocument::PrepareDefaultAttribute)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x62b7ccc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Xml::XmlDocument*>(),
            { "PrepareDefaultAttribute", {}, { ::i2c::type_of<::System::Xml::Schema::SchemaAttDef*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.CreateEntityReference
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlEntityReference* (::System::Xml::XmlDocument::*)(::StringW)>(&::System::Xml::XmlDocument::CreateEntityReference)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x62b7dd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { ::i2c::class_of<::System::Xml::XmlDocument*>(), 67 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.CreateProcessingInstruction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlProcessingInstruction* (::System::Xml::XmlDocument::*)(::StringW, ::StringW)>(
    &::System::Xml::XmlDocument::CreateProcessingInstruction)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x62b7f0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { ::i2c::class_of<::System::Xml::XmlDocument*>(), 68 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.CreateXmlDeclaration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlDeclaration* (::System::Xml::XmlDocument::*)(::StringW, ::StringW, ::StringW)>(
    &::System::Xml::XmlDocument::CreateXmlDeclaration)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x62b7f80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { ::i2c::class_of<::System::Xml::XmlDocument*>(), 69 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.CreateTextNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlText* (::System::Xml::XmlDocument::*)(::StringW)>(&::System::Xml::XmlDocument::CreateTextNode)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x62b8004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { ::i2c::class_of<::System::Xml::XmlDocument*>(), 70 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.CreateSignificantWhitespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlSignificantWhitespace* (::System::Xml::XmlDocument::*)(::StringW)>(&::System::Xml::XmlDocument::CreateSignificantWhitespace)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x62b8070;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { ::i2c::class_of<::System::Xml::XmlDocument*>(), 71 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.CreateNavigator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XPath::XPathNavigator* (::System::Xml::XmlDocument::*)()>(&::System::Xml::XmlDocument::CreateNavigator)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x62b80e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { ::i2c::class_of<::System::Xml::XmlDocument*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.CreateNavigator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XPath::XPathNavigator* (::System::Xml::XmlDocument::*)(::System::Xml::XmlNode*)>(&::System::Xml::XmlDocument::CreateNavigator)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x62b80f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { ::i2c::class_of<::System::Xml::XmlDocument*>(), 72 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.IsTextNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Xml::XmlNodeType)>(&::System::Xml::XmlDocument::IsTextNode)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x62b8428;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { "IsTextNode", {}, { ::i2c::type_of<::System::Xml::XmlNodeType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.NormalizeText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNode* (::System::Xml::XmlDocument::*)(::System::Xml::XmlNode*)>(&::System::Xml::XmlDocument::NormalizeText)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x62b8274;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { "NormalizeText", {}, { ::i2c::type_of<::System::Xml::XmlNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.CreateWhitespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlWhitespace* (::System::Xml::XmlDocument::*)(::StringW)>(&::System::Xml::XmlDocument::CreateWhitespace)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x62b8440;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { ::i2c::class_of<::System::Xml::XmlDocument*>(), 73 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.CreateAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlAttribute* (::System::Xml::XmlDocument::*)(::StringW, ::StringW)>(&::System::Xml::XmlDocument::CreateAttribute)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x62b84b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { "CreateAttribute", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.CreateElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlElement* (::System::Xml::XmlDocument::*)(::StringW, ::StringW)>(&::System::Xml::XmlDocument::CreateElement)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x62b8514;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { "CreateElement", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.ImportNodeInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNode* (::System::Xml::XmlDocument::*)(::System::Xml::XmlNode*, bool)>(&::System::Xml::XmlDocument::ImportNodeInternal)> {
  constexpr static std::size_t size = 0x4e8;
  constexpr static std::size_t addrs = 0x62b8578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { "ImportNodeInternal", {}, { ::i2c::type_of<::System::Xml::XmlNode*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.ImportAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlDocument::*)(::System::Xml::XmlNode*, ::System::Xml::XmlNode*)>(&::System::Xml::XmlDocument::ImportAttributes)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x62b8a60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { "ImportAttributes", {}, { ::i2c::type_of<::System::Xml::XmlNode*>(), ::i2c::type_of<::System::Xml::XmlNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.ImportChildren
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlDocument::*)(::System::Xml::XmlNode*, ::System::Xml::XmlNode*, bool)>(&::System::Xml::XmlDocument::ImportChildren)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x62b6bec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(),
                                                { "ImportChildren", {}, { ::i2c::type_of<::System::Xml::XmlNode*>(), ::i2c::type_of<::System::Xml::XmlNode*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.get_NameTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNameTable* (::System::Xml::XmlDocument::*)()>(&::System::Xml::XmlDocument::get_NameTable)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x62ae728;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { "get_NameTable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.CreateAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlAttribute* (::System::Xml::XmlDocument::*)(::StringW, ::StringW, ::StringW)>(&::System::Xml::XmlDocument::CreateAttribute)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x62b8b74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { ::i2c::class_of<::System::Xml::XmlDocument*>(), 74 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.CreateDefaultAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlAttribute* (::System::Xml::XmlDocument::*)(::StringW, ::StringW, ::StringW)>(
    &::System::Xml::XmlDocument::CreateDefaultAttribute)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x62b8c10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { ::i2c::class_of<::System::Xml::XmlDocument*>(), 75 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.CreateElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlElement* (::System::Xml::XmlDocument::*)(::StringW, ::StringW, ::StringW)>(&::System::Xml::XmlDocument::CreateElement)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x62b8c94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { ::i2c::class_of<::System::Xml::XmlDocument*>(), 76 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.get_IsReadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlDocument::*)()>(&::System::Xml::XmlDocument::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62b8e64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { ::i2c::class_of<::System::Xml::XmlDocument*>(), 38 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.get_Entities
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNamedNodeMap* (::System::Xml::XmlDocument::*)()>(&::System::Xml::XmlDocument::get_Entities)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x62b8e6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { "get_Entities", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.set_Entities
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlDocument::*)(::System::Xml::XmlNamedNodeMap*)>(&::System::Xml::XmlDocument::set_Entities)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62b8ec8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { "set_Entities", {}, { ::i2c::type_of<::System::Xml::XmlNamedNodeMap*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.get_IsLoading
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlDocument::*)()>(&::System::Xml::XmlDocument::get_IsLoading)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62b8ed0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { "get_IsLoading", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.set_IsLoading
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlDocument::*)(bool)>(&::System::Xml::XmlDocument::set_IsLoading)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62b8ed8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { "set_IsLoading", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.get_ActualLoadingStatus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlDocument::*)()>(&::System::Xml::XmlDocument::get_ActualLoadingStatus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62b8ee0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { "get_ActualLoadingStatus", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.ReadNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNode* (::System::Xml::XmlDocument::*)(::System::Xml::XmlReader*)>(&::System::Xml::XmlDocument::ReadNode)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x62b8ee8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { ::i2c::class_of<::System::Xml::XmlDocument*>(), 77 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.SetupReader
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlTextReader* (::System::Xml::XmlDocument::*)(::System::Xml::XmlTextReader*)>(&::System::Xml::XmlDocument::SetupReader)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x62b90cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { "SetupReader", {}, { ::i2c::type_of<::System::Xml::XmlTextReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.Load
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlDocument::*)(::System::Xml::XmlReader*)>(&::System::Xml::XmlDocument::Load)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x62b912c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { ::i2c::class_of<::System::Xml::XmlDocument*>(), 78 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.LoadXml
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlDocument::*)(::StringW)>(&::System::Xml::XmlDocument::LoadXml)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x62b9450;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { ::i2c::class_of<::System::Xml::XmlDocument*>(), 79 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.set_InnerText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlDocument::*)(::StringW)>(&::System::Xml::XmlDocument::set_InnerText)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x62b959c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { ::i2c::class_of<::System::Xml::XmlDocument*>(), 40 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.set_InnerXml
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlDocument::*)(::StringW)>(&::System::Xml::XmlDocument::set_InnerXml)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x62b95ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { ::i2c::class_of<::System::Xml::XmlDocument*>(), 41 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.Save
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlDocument::*)(::System::Xml::XmlWriter*)>(&::System::Xml::XmlDocument::Save)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x62b95fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { ::i2c::class_of<::System::Xml::XmlDocument*>(), 80 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.WriteTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlDocument::*)(::System::Xml::XmlWriter*)>(&::System::Xml::XmlDocument::WriteTo)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x62b9824;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { ::i2c::class_of<::System::Xml::XmlDocument*>(), 44 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.WriteContentTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlDocument::*)(::System::Xml::XmlWriter*)>(&::System::Xml::XmlDocument::WriteContentTo)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x62b9834;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { ::i2c::class_of<::System::Xml::XmlDocument*>(), 45 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.GetEventArgs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNodeChangedEventArgs* (
    ::System::Xml::XmlDocument::*)(::System::Xml::XmlNode*, ::System::Xml::XmlNode*, ::System::Xml::XmlNode*, ::StringW, ::StringW, ::System::Xml::XmlNodeChangedAction)>(
    &::System::Xml::XmlDocument::GetEventArgs)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x62b9b54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { ::i2c::class_of<::System::Xml::XmlDocument*>(), 51 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.GetInsertEventArgsForLoad
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNodeChangedEventArgs* (::System::Xml::XmlDocument::*)(::System::Xml::XmlNode*, ::System::Xml::XmlNode*)>(
    &::System::Xml::XmlDocument::GetInsertEventArgsForLoad)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x62b139c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(),
                                                             { "GetInsertEventArgsForLoad", {}, { ::i2c::type_of<::System::Xml::XmlNode*>(), ::i2c::type_of<::System::Xml::XmlNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.BeforeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlDocument::*)(::System::Xml::XmlNodeChangedEventArgs*)>(&::System::Xml::XmlDocument::BeforeEvent)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x62b9ce0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { ::i2c::class_of<::System::Xml::XmlDocument*>(), 52 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.AfterEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlDocument::*)(::System::Xml::XmlNodeChangedEventArgs*)>(&::System::Xml::XmlDocument::AfterEvent)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x62b9d34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { ::i2c::class_of<::System::Xml::XmlDocument*>(), 53 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.GetDefaultAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlAttribute* (::System::Xml::XmlDocument::*)(::System::Xml::XmlElement*, ::StringW, ::StringW, ::StringW)>(
    &::System::Xml::XmlDocument::GetDefaultAttribute)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x62b4640;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(),
                            { "GetDefaultAttribute", {}, { ::i2c::type_of<::System::Xml::XmlElement*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.get_Version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlDocument::*)()>(&::System::Xml::XmlDocument::get_Version)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x62b9d88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { "get_Version", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.get_Encoding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlDocument::*)()>(&::System::Xml::XmlDocument::get_Encoding)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x62b9dac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { "get_Encoding", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.get_Standalone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlDocument::*)()>(&::System::Xml::XmlDocument::get_Standalone)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x62b9800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { "get_Standalone", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.GetEntityNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlEntity* (::System::Xml::XmlDocument::*)(::StringW)>(&::System::Xml::XmlDocument::GetEntityNode)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x62b9dd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { "GetEntityNode", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.get_SchemaInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::IXmlSchemaInfo* (::System::Xml::XmlDocument::*)()>(&::System::Xml::XmlDocument::get_SchemaInfo)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x62b9efc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { ::i2c::class_of<::System::Xml::XmlDocument*>(), 42 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.get_BaseURI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlDocument::*)()>(&::System::Xml::XmlDocument::get_BaseURI)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62ba058;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { ::i2c::class_of<::System::Xml::XmlDocument*>(), 43 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.SetBaseURI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlDocument::*)(::StringW)>(&::System::Xml::XmlDocument::SetBaseURI)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62ba060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { "SetBaseURI", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.AppendChildForLoad
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNode* (::System::Xml::XmlDocument::*)(::System::Xml::XmlNode*, ::System::Xml::XmlDocument*)>(
    &::System::Xml::XmlDocument::AppendChildForLoad)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x62ba068;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { ::i2c::class_of<::System::Xml::XmlDocument*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.get_XPNodeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XPath::XPathNodeType (::System::Xml::XmlDocument::*)()>(&::System::Xml::XmlDocument::get_XPNodeType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62ba230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { ::i2c::class_of<::System::Xml::XmlDocument*>(), 56 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.get_HasEntityReferences
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlDocument::*)()>(&::System::Xml::XmlDocument::get_HasEntityReferences)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62ba238;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { "get_HasEntityReferences", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.get_NamespaceXml
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlAttribute* (::System::Xml::XmlDocument::*)()>(&::System::Xml::XmlDocument::get_NamespaceXml)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x62aeeb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { "get_NamespaceXml", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlImplementation*& System::Xml::XmlDocument::__cordl_internal_get_implementation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___implementation;
}
constexpr ::System::Xml::XmlImplementation* const& System::Xml::XmlDocument::__cordl_internal_get_implementation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___implementation;
}
constexpr void System::Xml::XmlDocument::__cordl_internal_set_implementation(::System::Xml::XmlImplementation* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___implementation = value;
}
constexpr ::System::Xml::DomNameTable*& System::Xml::XmlDocument::__cordl_internal_get_domNameTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___domNameTable;
}
constexpr ::System::Xml::DomNameTable* const& System::Xml::XmlDocument::__cordl_internal_get_domNameTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___domNameTable;
}
constexpr void System::Xml::XmlDocument::__cordl_internal_set_domNameTable(::System::Xml::DomNameTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___domNameTable = value;
}
constexpr ::System::Xml::XmlLinkedNode*& System::Xml::XmlDocument::__cordl_internal_get_lastChild() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastChild;
}
constexpr ::System::Xml::XmlLinkedNode* const& System::Xml::XmlDocument::__cordl_internal_get_lastChild() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastChild;
}
constexpr void System::Xml::XmlDocument::__cordl_internal_set_lastChild(::System::Xml::XmlLinkedNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastChild = value;
}
constexpr ::System::Xml::XmlNamedNodeMap*& System::Xml::XmlDocument::__cordl_internal_get_entities() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___entities;
}
constexpr ::System::Xml::XmlNamedNodeMap* const& System::Xml::XmlDocument::__cordl_internal_get_entities() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___entities;
}
constexpr void System::Xml::XmlDocument::__cordl_internal_set_entities(::System::Xml::XmlNamedNodeMap* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___entities = value;
}
constexpr ::System::Collections::Hashtable*& System::Xml::XmlDocument::__cordl_internal_get_htElementIdMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___htElementIdMap;
}
constexpr ::System::Collections::Hashtable* const& System::Xml::XmlDocument::__cordl_internal_get_htElementIdMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___htElementIdMap;
}
constexpr void System::Xml::XmlDocument::__cordl_internal_set_htElementIdMap(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___htElementIdMap = value;
}
constexpr ::System::Collections::Hashtable*& System::Xml::XmlDocument::__cordl_internal_get_htElementIDAttrDecl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___htElementIDAttrDecl;
}
constexpr ::System::Collections::Hashtable* const& System::Xml::XmlDocument::__cordl_internal_get_htElementIDAttrDecl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___htElementIDAttrDecl;
}
constexpr void System::Xml::XmlDocument::__cordl_internal_set_htElementIDAttrDecl(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___htElementIDAttrDecl = value;
}
constexpr ::System::Xml::Schema::SchemaInfo*& System::Xml::XmlDocument::__cordl_internal_get_schemaInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schemaInfo;
}
constexpr ::System::Xml::Schema::SchemaInfo* const& System::Xml::XmlDocument::__cordl_internal_get_schemaInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schemaInfo;
}
constexpr void System::Xml::XmlDocument::__cordl_internal_set_schemaInfo(::System::Xml::Schema::SchemaInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___schemaInfo = value;
}
constexpr ::System::Xml::Schema::XmlSchemaSet*& System::Xml::XmlDocument::__cordl_internal_get_schemas() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schemas;
}
constexpr ::System::Xml::Schema::XmlSchemaSet* const& System::Xml::XmlDocument::__cordl_internal_get_schemas() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schemas;
}
constexpr void System::Xml::XmlDocument::__cordl_internal_set_schemas(::System::Xml::Schema::XmlSchemaSet* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___schemas = value;
}
constexpr bool& System::Xml::XmlDocument::__cordl_internal_get_reportValidity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reportValidity;
}
constexpr bool const& System::Xml::XmlDocument::__cordl_internal_get_reportValidity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reportValidity;
}
constexpr void System::Xml::XmlDocument::__cordl_internal_set_reportValidity(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___reportValidity = value;
}
constexpr bool& System::Xml::XmlDocument::__cordl_internal_get_actualLoadingStatus() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___actualLoadingStatus;
}
constexpr bool const& System::Xml::XmlDocument::__cordl_internal_get_actualLoadingStatus() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___actualLoadingStatus;
}
constexpr void System::Xml::XmlDocument::__cordl_internal_set_actualLoadingStatus(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___actualLoadingStatus = value;
}
constexpr ::System::Xml::XmlNodeChangedEventHandler*& System::Xml::XmlDocument::__cordl_internal_get_onNodeInsertingDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onNodeInsertingDelegate;
}
constexpr ::System::Xml::XmlNodeChangedEventHandler* const& System::Xml::XmlDocument::__cordl_internal_get_onNodeInsertingDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onNodeInsertingDelegate;
}
constexpr void System::Xml::XmlDocument::__cordl_internal_set_onNodeInsertingDelegate(::System::Xml::XmlNodeChangedEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___onNodeInsertingDelegate = value;
}
constexpr ::System::Xml::XmlNodeChangedEventHandler*& System::Xml::XmlDocument::__cordl_internal_get_onNodeInsertedDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onNodeInsertedDelegate;
}
constexpr ::System::Xml::XmlNodeChangedEventHandler* const& System::Xml::XmlDocument::__cordl_internal_get_onNodeInsertedDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onNodeInsertedDelegate;
}
constexpr void System::Xml::XmlDocument::__cordl_internal_set_onNodeInsertedDelegate(::System::Xml::XmlNodeChangedEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___onNodeInsertedDelegate = value;
}
constexpr ::System::Xml::XmlNodeChangedEventHandler*& System::Xml::XmlDocument::__cordl_internal_get_onNodeRemovingDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onNodeRemovingDelegate;
}
constexpr ::System::Xml::XmlNodeChangedEventHandler* const& System::Xml::XmlDocument::__cordl_internal_get_onNodeRemovingDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onNodeRemovingDelegate;
}
constexpr void System::Xml::XmlDocument::__cordl_internal_set_onNodeRemovingDelegate(::System::Xml::XmlNodeChangedEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___onNodeRemovingDelegate = value;
}
constexpr ::System::Xml::XmlNodeChangedEventHandler*& System::Xml::XmlDocument::__cordl_internal_get_onNodeRemovedDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onNodeRemovedDelegate;
}
constexpr ::System::Xml::XmlNodeChangedEventHandler* const& System::Xml::XmlDocument::__cordl_internal_get_onNodeRemovedDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onNodeRemovedDelegate;
}
constexpr void System::Xml::XmlDocument::__cordl_internal_set_onNodeRemovedDelegate(::System::Xml::XmlNodeChangedEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___onNodeRemovedDelegate = value;
}
constexpr ::System::Xml::XmlNodeChangedEventHandler*& System::Xml::XmlDocument::__cordl_internal_get_onNodeChangingDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onNodeChangingDelegate;
}
constexpr ::System::Xml::XmlNodeChangedEventHandler* const& System::Xml::XmlDocument::__cordl_internal_get_onNodeChangingDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onNodeChangingDelegate;
}
constexpr void System::Xml::XmlDocument::__cordl_internal_set_onNodeChangingDelegate(::System::Xml::XmlNodeChangedEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___onNodeChangingDelegate = value;
}
constexpr ::System::Xml::XmlNodeChangedEventHandler*& System::Xml::XmlDocument::__cordl_internal_get_onNodeChangedDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onNodeChangedDelegate;
}
constexpr ::System::Xml::XmlNodeChangedEventHandler* const& System::Xml::XmlDocument::__cordl_internal_get_onNodeChangedDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onNodeChangedDelegate;
}
constexpr void System::Xml::XmlDocument::__cordl_internal_set_onNodeChangedDelegate(::System::Xml::XmlNodeChangedEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___onNodeChangedDelegate = value;
}
constexpr bool& System::Xml::XmlDocument::__cordl_internal_get_fEntRefNodesPresent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fEntRefNodesPresent;
}
constexpr bool const& System::Xml::XmlDocument::__cordl_internal_get_fEntRefNodesPresent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fEntRefNodesPresent;
}
constexpr void System::Xml::XmlDocument::__cordl_internal_set_fEntRefNodesPresent(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fEntRefNodesPresent = value;
}
constexpr bool& System::Xml::XmlDocument::__cordl_internal_get_fCDataNodesPresent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fCDataNodesPresent;
}
constexpr bool const& System::Xml::XmlDocument::__cordl_internal_get_fCDataNodesPresent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fCDataNodesPresent;
}
constexpr void System::Xml::XmlDocument::__cordl_internal_set_fCDataNodesPresent(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fCDataNodesPresent = value;
}
constexpr bool& System::Xml::XmlDocument::__cordl_internal_get_preserveWhitespace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___preserveWhitespace;
}
constexpr bool const& System::Xml::XmlDocument::__cordl_internal_get_preserveWhitespace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___preserveWhitespace;
}
constexpr void System::Xml::XmlDocument::__cordl_internal_set_preserveWhitespace(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___preserveWhitespace = value;
}
constexpr bool& System::Xml::XmlDocument::__cordl_internal_get_isLoading() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isLoading;
}
constexpr bool const& System::Xml::XmlDocument::__cordl_internal_get_isLoading() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isLoading;
}
constexpr void System::Xml::XmlDocument::__cordl_internal_set_isLoading(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isLoading = value;
}
constexpr ::StringW& System::Xml::XmlDocument::__cordl_internal_get_strDocumentName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___strDocumentName;
}
constexpr ::StringW const& System::Xml::XmlDocument::__cordl_internal_get_strDocumentName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___strDocumentName;
}
constexpr void System::Xml::XmlDocument::__cordl_internal_set_strDocumentName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___strDocumentName = value;
}
constexpr ::StringW& System::Xml::XmlDocument::__cordl_internal_get_strDocumentFragmentName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___strDocumentFragmentName;
}
constexpr ::StringW const& System::Xml::XmlDocument::__cordl_internal_get_strDocumentFragmentName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___strDocumentFragmentName;
}
constexpr void System::Xml::XmlDocument::__cordl_internal_set_strDocumentFragmentName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___strDocumentFragmentName = value;
}
constexpr ::StringW& System::Xml::XmlDocument::__cordl_internal_get_strCommentName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___strCommentName;
}
constexpr ::StringW const& System::Xml::XmlDocument::__cordl_internal_get_strCommentName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___strCommentName;
}
constexpr void System::Xml::XmlDocument::__cordl_internal_set_strCommentName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___strCommentName = value;
}
constexpr ::StringW& System::Xml::XmlDocument::__cordl_internal_get_strTextName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___strTextName;
}
constexpr ::StringW const& System::Xml::XmlDocument::__cordl_internal_get_strTextName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___strTextName;
}
constexpr void System::Xml::XmlDocument::__cordl_internal_set_strTextName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___strTextName = value;
}
constexpr ::StringW& System::Xml::XmlDocument::__cordl_internal_get_strCDataSectionName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___strCDataSectionName;
}
constexpr ::StringW const& System::Xml::XmlDocument::__cordl_internal_get_strCDataSectionName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___strCDataSectionName;
}
constexpr void System::Xml::XmlDocument::__cordl_internal_set_strCDataSectionName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___strCDataSectionName = value;
}
constexpr ::StringW& System::Xml::XmlDocument::__cordl_internal_get_strEntityName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___strEntityName;
}
constexpr ::StringW const& System::Xml::XmlDocument::__cordl_internal_get_strEntityName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___strEntityName;
}
constexpr void System::Xml::XmlDocument::__cordl_internal_set_strEntityName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___strEntityName = value;
}
constexpr ::StringW& System::Xml::XmlDocument::__cordl_internal_get_strID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___strID;
}
constexpr ::StringW const& System::Xml::XmlDocument::__cordl_internal_get_strID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___strID;
}
constexpr void System::Xml::XmlDocument::__cordl_internal_set_strID(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___strID = value;
}
constexpr ::StringW& System::Xml::XmlDocument::__cordl_internal_get_strXmlns() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___strXmlns;
}
constexpr ::StringW const& System::Xml::XmlDocument::__cordl_internal_get_strXmlns() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___strXmlns;
}
constexpr void System::Xml::XmlDocument::__cordl_internal_set_strXmlns(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___strXmlns = value;
}
constexpr ::StringW& System::Xml::XmlDocument::__cordl_internal_get_strXml() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___strXml;
}
constexpr ::StringW const& System::Xml::XmlDocument::__cordl_internal_get_strXml() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___strXml;
}
constexpr void System::Xml::XmlDocument::__cordl_internal_set_strXml(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___strXml = value;
}
constexpr ::StringW& System::Xml::XmlDocument::__cordl_internal_get_strSpace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___strSpace;
}
constexpr ::StringW const& System::Xml::XmlDocument::__cordl_internal_get_strSpace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___strSpace;
}
constexpr void System::Xml::XmlDocument::__cordl_internal_set_strSpace(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___strSpace = value;
}
constexpr ::StringW& System::Xml::XmlDocument::__cordl_internal_get_strLang() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___strLang;
}
constexpr ::StringW const& System::Xml::XmlDocument::__cordl_internal_get_strLang() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___strLang;
}
constexpr void System::Xml::XmlDocument::__cordl_internal_set_strLang(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___strLang = value;
}
constexpr ::StringW& System::Xml::XmlDocument::__cordl_internal_get_strEmpty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___strEmpty;
}
constexpr ::StringW const& System::Xml::XmlDocument::__cordl_internal_get_strEmpty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___strEmpty;
}
constexpr void System::Xml::XmlDocument::__cordl_internal_set_strEmpty(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___strEmpty = value;
}
constexpr ::StringW& System::Xml::XmlDocument::__cordl_internal_get_strNonSignificantWhitespaceName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___strNonSignificantWhitespaceName;
}
constexpr ::StringW const& System::Xml::XmlDocument::__cordl_internal_get_strNonSignificantWhitespaceName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___strNonSignificantWhitespaceName;
}
constexpr void System::Xml::XmlDocument::__cordl_internal_set_strNonSignificantWhitespaceName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___strNonSignificantWhitespaceName = value;
}
constexpr ::StringW& System::Xml::XmlDocument::__cordl_internal_get_strSignificantWhitespaceName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___strSignificantWhitespaceName;
}
constexpr ::StringW const& System::Xml::XmlDocument::__cordl_internal_get_strSignificantWhitespaceName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___strSignificantWhitespaceName;
}
constexpr void System::Xml::XmlDocument::__cordl_internal_set_strSignificantWhitespaceName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___strSignificantWhitespaceName = value;
}
constexpr ::StringW& System::Xml::XmlDocument::__cordl_internal_get_strReservedXmlns() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___strReservedXmlns;
}
constexpr ::StringW const& System::Xml::XmlDocument::__cordl_internal_get_strReservedXmlns() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___strReservedXmlns;
}
constexpr void System::Xml::XmlDocument::__cordl_internal_set_strReservedXmlns(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___strReservedXmlns = value;
}
constexpr ::StringW& System::Xml::XmlDocument::__cordl_internal_get_strReservedXml() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___strReservedXml;
}
constexpr ::StringW const& System::Xml::XmlDocument::__cordl_internal_get_strReservedXml() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___strReservedXml;
}
constexpr void System::Xml::XmlDocument::__cordl_internal_set_strReservedXml(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___strReservedXml = value;
}
constexpr ::StringW& System::Xml::XmlDocument::__cordl_internal_get_baseURI() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___baseURI;
}
constexpr ::StringW const& System::Xml::XmlDocument::__cordl_internal_get_baseURI() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___baseURI;
}
constexpr void System::Xml::XmlDocument::__cordl_internal_set_baseURI(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___baseURI = value;
}
constexpr ::System::Xml::XmlResolver*& System::Xml::XmlDocument::__cordl_internal_get_resolver() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resolver;
}
constexpr ::System::Xml::XmlResolver* const& System::Xml::XmlDocument::__cordl_internal_get_resolver() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resolver;
}
constexpr void System::Xml::XmlDocument::__cordl_internal_set_resolver(::System::Xml::XmlResolver* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___resolver = value;
}
constexpr bool& System::Xml::XmlDocument::__cordl_internal_get_bSetResolver() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bSetResolver;
}
constexpr bool const& System::Xml::XmlDocument::__cordl_internal_get_bSetResolver() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bSetResolver;
}
constexpr void System::Xml::XmlDocument::__cordl_internal_set_bSetResolver(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bSetResolver = value;
}
constexpr ::System::Object*& System::Xml::XmlDocument::__cordl_internal_get_objLock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objLock;
}
constexpr ::System::Object* const& System::Xml::XmlDocument::__cordl_internal_get_objLock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objLock;
}
constexpr void System::Xml::XmlDocument::__cordl_internal_set_objLock(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___objLock = value;
}
constexpr ::System::Xml::XmlAttribute*& System::Xml::XmlDocument::__cordl_internal_get_namespaceXml() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___namespaceXml;
}
constexpr ::System::Xml::XmlAttribute* const& System::Xml::XmlDocument::__cordl_internal_get_namespaceXml() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___namespaceXml;
}
constexpr void System::Xml::XmlDocument::__cordl_internal_set_namespaceXml(::System::Xml::XmlAttribute* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___namespaceXml = value;
}
inline void System::Xml::XmlDocument::setStaticF_EmptyEnumerator(::System::Xml::EmptyEnumerator* value) {
  ::cordl_internals::setStaticField<::System::Xml::EmptyEnumerator*, "EmptyEnumerator", ::System::Xml::XmlDocument*>(std::forward<::System::Xml::EmptyEnumerator*>(value));
}
inline ::System::Xml::EmptyEnumerator* System::Xml::XmlDocument::getStaticF_EmptyEnumerator() {
  return ::cordl_internals::getStaticField<::System::Xml::EmptyEnumerator*, "EmptyEnumerator", ::System::Xml::XmlDocument*>();
}
inline void System::Xml::XmlDocument::setStaticF_NotKnownSchemaInfo(::System::Xml::Schema::IXmlSchemaInfo* value) {
  ::cordl_internals::setStaticField<::System::Xml::Schema::IXmlSchemaInfo*, "NotKnownSchemaInfo", ::System::Xml::XmlDocument*>(std::forward<::System::Xml::Schema::IXmlSchemaInfo*>(value));
}
inline ::System::Xml::Schema::IXmlSchemaInfo* System::Xml::XmlDocument::getStaticF_NotKnownSchemaInfo() {
  return ::cordl_internals::getStaticField<::System::Xml::Schema::IXmlSchemaInfo*, "NotKnownSchemaInfo", ::System::Xml::XmlDocument*>();
}
inline void System::Xml::XmlDocument::setStaticF_ValidSchemaInfo(::System::Xml::Schema::IXmlSchemaInfo* value) {
  ::cordl_internals::setStaticField<::System::Xml::Schema::IXmlSchemaInfo*, "ValidSchemaInfo", ::System::Xml::XmlDocument*>(std::forward<::System::Xml::Schema::IXmlSchemaInfo*>(value));
}
inline ::System::Xml::Schema::IXmlSchemaInfo* System::Xml::XmlDocument::getStaticF_ValidSchemaInfo() {
  return ::cordl_internals::getStaticField<::System::Xml::Schema::IXmlSchemaInfo*, "ValidSchemaInfo", ::System::Xml::XmlDocument*>();
}
inline void System::Xml::XmlDocument::setStaticF_InvalidSchemaInfo(::System::Xml::Schema::IXmlSchemaInfo* value) {
  ::cordl_internals::setStaticField<::System::Xml::Schema::IXmlSchemaInfo*, "InvalidSchemaInfo", ::System::Xml::XmlDocument*>(std::forward<::System::Xml::Schema::IXmlSchemaInfo*>(value));
}
inline ::System::Xml::Schema::IXmlSchemaInfo* System::Xml::XmlDocument::getStaticF_InvalidSchemaInfo() {
  return ::cordl_internals::getStaticField<::System::Xml::Schema::IXmlSchemaInfo*, "InvalidSchemaInfo", ::System::Xml::XmlDocument*>();
}
inline void System::Xml::XmlDocument::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlDocument::_ctor(::System::Xml::XmlNameTable* nt) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlNameTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nt);
}
inline void System::Xml::XmlDocument::_ctor(::System::Xml::XmlImplementation* imp) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlImplementation*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, imp);
}
inline ::System::Xml::Schema::SchemaInfo* System::Xml::XmlDocument::get_DtdSchemaInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { "get_DtdSchemaInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::SchemaInfo*>(this, ___internal_method);
}
inline void System::Xml::XmlDocument::set_DtdSchemaInfo(::System::Xml::Schema::SchemaInfo* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { "set_DtdSchemaInfo", {}, { ::i2c::type_of<::System::Xml::Schema::SchemaInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlDocument::CheckName(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { "CheckName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name);
}
inline ::System::Xml::XmlName* System::Xml::XmlDocument::AddXmlName(::StringW prefix, ::StringW localName, ::StringW namespaceURI, ::System::Xml::Schema::IXmlSchemaInfo* schemaInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(),
                          { "AddXmlName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Schema::IXmlSchemaInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlName*>(this, ___internal_method, prefix, localName, namespaceURI, schemaInfo);
}
inline ::System::Xml::XmlName* System::Xml::XmlDocument::GetXmlName(::StringW prefix, ::StringW localName, ::StringW namespaceURI, ::System::Xml::Schema::IXmlSchemaInfo* schemaInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(),
                          { "GetXmlName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Schema::IXmlSchemaInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlName*>(this, ___internal_method, prefix, localName, namespaceURI, schemaInfo);
}
inline ::System::Xml::XmlName* System::Xml::XmlDocument::AddAttrXmlName(::StringW prefix, ::StringW localName, ::StringW namespaceURI, ::System::Xml::Schema::IXmlSchemaInfo* schemaInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::System::Xml::XmlDocument*>(),
                       { "AddAttrXmlName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Schema::IXmlSchemaInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlName*>(this, ___internal_method, prefix, localName, namespaceURI, schemaInfo);
}
inline bool System::Xml::XmlDocument::AddIdInfo(::System::Xml::XmlName* eleName, ::System::Xml::XmlName* attrName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { "AddIdInfo", {}, { ::i2c::type_of<::System::Xml::XmlName*>(), ::i2c::type_of<::System::Xml::XmlName*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, eleName, attrName);
}
inline ::System::Xml::XmlName* System::Xml::XmlDocument::GetIDInfoByElement_(::System::Xml::XmlName* eleName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { "GetIDInfoByElement_", {}, { ::i2c::type_of<::System::Xml::XmlName*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlName*>(this, ___internal_method, eleName);
}
inline ::System::Xml::XmlName* System::Xml::XmlDocument::GetIDInfoByElement(::System::Xml::XmlName* eleName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { "GetIDInfoByElement", {}, { ::i2c::type_of<::System::Xml::XmlName*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlName*>(this, ___internal_method, eleName);
}
inline ::System::WeakReference* System::Xml::XmlDocument::GetElement(::System::Collections::ArrayList* elementList, ::System::Xml::XmlElement* elem) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(),
                                                           { "GetElement", {}, { ::i2c::type_of<::System::Collections::ArrayList*>(), ::i2c::type_of<::System::Xml::XmlElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::WeakReference*>(this, ___internal_method, elementList, elem);
}
inline void System::Xml::XmlDocument::AddElementWithId(::StringW id, ::System::Xml::XmlElement* elem) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { "AddElementWithId", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, elem);
}
inline void System::Xml::XmlDocument::RemoveElementWithId(::StringW id, ::System::Xml::XmlElement* elem) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { "RemoveElementWithId", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, elem);
}
inline ::System::Xml::XmlNode* System::Xml::XmlDocument::CloneNode(bool deep) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDocument*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNode*>(this, ___internal_method, deep);
}
inline ::System::Xml::XmlNodeType System::Xml::XmlDocument::get_NodeType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDocument*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNodeType>(this, ___internal_method);
}
inline ::System::Xml::XmlNode* System::Xml::XmlDocument::get_ParentNode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDocument*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNode*>(this, ___internal_method);
}
inline ::System::Xml::XmlDocumentType* System::Xml::XmlDocument::get_DocumentType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDocument*>(), 60 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlDocumentType*>(this, ___internal_method);
}
inline ::System::Xml::XmlDeclaration* System::Xml::XmlDocument::get_Declaration() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDocument*>(), 61 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlDeclaration*>(this, ___internal_method);
}
inline ::System::Xml::XmlImplementation* System::Xml::XmlDocument::get_Implementation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { "get_Implementation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlImplementation*>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlDocument::get_Name() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDocument*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlDocument::get_LocalName() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDocument*>(), 37 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Xml::XmlElement* System::Xml::XmlDocument::get_DocumentElement() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { "get_DocumentElement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlElement*>(this, ___internal_method);
}
inline bool System::Xml::XmlDocument::get_IsContainer() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDocument*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Xml::XmlLinkedNode* System::Xml::XmlDocument::get_LastNode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDocument*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlLinkedNode*>(this, ___internal_method);
}
inline void System::Xml::XmlDocument::set_LastNode(::System::Xml::XmlLinkedNode* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDocument*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Xml::XmlDocument* System::Xml::XmlDocument::get_OwnerDocument() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDocument*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlDocument*>(this, ___internal_method);
}
inline void System::Xml::XmlDocument::set_Schemas(::System::Xml::Schema::XmlSchemaSet* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { "set_Schemas", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaSet*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Xml::XmlDocument::get_CanReportValidity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { "get_CanReportValidity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Xml::XmlDocument::get_HasSetResolver() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { "get_HasSetResolver", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Xml::XmlResolver* System::Xml::XmlDocument::GetResolver() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { "GetResolver", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlResolver*>(this, ___internal_method);
}
inline void System::Xml::XmlDocument::set_XmlResolver(::System::Xml::XmlResolver* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDocument*>(), 62 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Xml::XmlDocument::IsValidChildType(::System::Xml::XmlNodeType type) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDocument*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, type);
}
inline bool System::Xml::XmlDocument::HasNodeTypeInPrevSiblings(::System::Xml::XmlNodeType nt, ::System::Xml::XmlNode* refNode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(),
                                                           { "HasNodeTypeInPrevSiblings", {}, { ::i2c::type_of<::System::Xml::XmlNodeType>(), ::i2c::type_of<::System::Xml::XmlNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, nt, refNode);
}
inline bool System::Xml::XmlDocument::HasNodeTypeInNextSiblings(::System::Xml::XmlNodeType nt, ::System::Xml::XmlNode* refNode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(),
                                                           { "HasNodeTypeInNextSiblings", {}, { ::i2c::type_of<::System::Xml::XmlNodeType>(), ::i2c::type_of<::System::Xml::XmlNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, nt, refNode);
}
inline bool System::Xml::XmlDocument::CanInsertBefore(::System::Xml::XmlNode* newChild, ::System::Xml::XmlNode* refChild) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDocument*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, newChild, refChild);
}
inline bool System::Xml::XmlDocument::CanInsertAfter(::System::Xml::XmlNode* newChild, ::System::Xml::XmlNode* refChild) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDocument*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, newChild, refChild);
}
inline ::System::Xml::XmlAttribute* System::Xml::XmlDocument::CreateAttribute(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { "CreateAttribute", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlAttribute*>(this, ___internal_method, name);
}
inline void System::Xml::XmlDocument::SetDefaultNamespace(::StringW prefix, ::StringW localName, ::by_ref<::StringW> namespaceURI) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(),
                                                           { "SetDefaultNamespace", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, namespaceURI);
}
inline ::System::Xml::XmlCDataSection* System::Xml::XmlDocument::CreateCDataSection(::StringW data) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDocument*>(), 63 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlCDataSection*>(this, ___internal_method, data);
}
inline ::System::Xml::XmlComment* System::Xml::XmlDocument::CreateComment(::StringW data) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDocument*>(), 64 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlComment*>(this, ___internal_method, data);
}
inline ::System::Xml::XmlDocumentType* System::Xml::XmlDocument::CreateDocumentType(::StringW name, ::StringW publicId, ::StringW systemId, ::StringW internalSubset) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDocument*>(), 65 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlDocumentType*>(this, ___internal_method, name, publicId, systemId, internalSubset);
}
inline ::System::Xml::XmlDocumentFragment* System::Xml::XmlDocument::CreateDocumentFragment() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDocument*>(), 66 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlDocumentFragment*>(this, ___internal_method);
}
inline ::System::Xml::XmlElement* System::Xml::XmlDocument::CreateElement(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { "CreateElement", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlElement*>(this, ___internal_method, name);
}
inline void System::Xml::XmlDocument::AddDefaultAttributes(::System::Xml::XmlElement* elem) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { "AddDefaultAttributes", {}, { ::i2c::type_of<::System::Xml::XmlElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, elem);
}
inline ::System::Xml::Schema::SchemaElementDecl* System::Xml::XmlDocument::GetSchemaElementDecl(::System::Xml::XmlElement* elem) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { "GetSchemaElementDecl", {}, { ::i2c::type_of<::System::Xml::XmlElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::SchemaElementDecl*>(this, ___internal_method, elem);
}
inline ::System::Xml::XmlAttribute* System::Xml::XmlDocument::PrepareDefaultAttribute(::System::Xml::Schema::SchemaAttDef* attdef, ::StringW attrPrefix, ::StringW attrLocalname,
                                                                                      ::StringW attrNamespaceURI) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Xml::XmlDocument*>(),
          { "PrepareDefaultAttribute", {}, { ::i2c::type_of<::System::Xml::Schema::SchemaAttDef*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlAttribute*>(this, ___internal_method, attdef, attrPrefix, attrLocalname, attrNamespaceURI);
}
inline ::System::Xml::XmlEntityReference* System::Xml::XmlDocument::CreateEntityReference(::StringW name) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDocument*>(), 67 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlEntityReference*>(this, ___internal_method, name);
}
inline ::System::Xml::XmlProcessingInstruction* System::Xml::XmlDocument::CreateProcessingInstruction(::StringW target, ::StringW data) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDocument*>(), 68 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlProcessingInstruction*>(this, ___internal_method, target, data);
}
inline ::System::Xml::XmlDeclaration* System::Xml::XmlDocument::CreateXmlDeclaration(::StringW version, ::StringW encoding, ::StringW standalone) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDocument*>(), 69 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlDeclaration*>(this, ___internal_method, version, encoding, standalone);
}
inline ::System::Xml::XmlText* System::Xml::XmlDocument::CreateTextNode(::StringW text) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDocument*>(), 70 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlText*>(this, ___internal_method, text);
}
inline ::System::Xml::XmlSignificantWhitespace* System::Xml::XmlDocument::CreateSignificantWhitespace(::StringW text) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDocument*>(), 71 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlSignificantWhitespace*>(this, ___internal_method, text);
}
inline ::System::Xml::XPath::XPathNavigator* System::Xml::XmlDocument::CreateNavigator() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDocument*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XPath::XPathNavigator*>(this, ___internal_method);
}
inline ::System::Xml::XPath::XPathNavigator* System::Xml::XmlDocument::CreateNavigator(::System::Xml::XmlNode* node) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDocument*>(), 72 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XPath::XPathNavigator*>(this, ___internal_method, node);
}
inline bool System::Xml::XmlDocument::IsTextNode(::System::Xml::XmlNodeType nt) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { "IsTextNode", {}, { ::i2c::type_of<::System::Xml::XmlNodeType>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, nt);
}
inline ::System::Xml::XmlNode* System::Xml::XmlDocument::NormalizeText(::System::Xml::XmlNode* n) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { "NormalizeText", {}, { ::i2c::type_of<::System::Xml::XmlNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNode*>(this, ___internal_method, n);
}
inline ::System::Xml::XmlWhitespace* System::Xml::XmlDocument::CreateWhitespace(::StringW text) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDocument*>(), 73 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlWhitespace*>(this, ___internal_method, text);
}
inline ::System::Xml::XmlAttribute* System::Xml::XmlDocument::CreateAttribute(::StringW qualifiedName, ::StringW namespaceURI) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { "CreateAttribute", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlAttribute*>(this, ___internal_method, qualifiedName, namespaceURI);
}
inline ::System::Xml::XmlElement* System::Xml::XmlDocument::CreateElement(::StringW qualifiedName, ::StringW namespaceURI) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { "CreateElement", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlElement*>(this, ___internal_method, qualifiedName, namespaceURI);
}
inline ::System::Xml::XmlNode* System::Xml::XmlDocument::ImportNodeInternal(::System::Xml::XmlNode* node, bool deep) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { "ImportNodeInternal", {}, { ::i2c::type_of<::System::Xml::XmlNode*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNode*>(this, ___internal_method, node, deep);
}
inline void System::Xml::XmlDocument::ImportAttributes(::System::Xml::XmlNode* fromElem, ::System::Xml::XmlNode* toElem) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { "ImportAttributes", {}, { ::i2c::type_of<::System::Xml::XmlNode*>(), ::i2c::type_of<::System::Xml::XmlNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fromElem, toElem);
}
inline void System::Xml::XmlDocument::ImportChildren(::System::Xml::XmlNode* fromNode, ::System::Xml::XmlNode* toNode, bool deep) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(),
                                              { "ImportChildren", {}, { ::i2c::type_of<::System::Xml::XmlNode*>(), ::i2c::type_of<::System::Xml::XmlNode*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fromNode, toNode, deep);
}
inline ::System::Xml::XmlNameTable* System::Xml::XmlDocument::get_NameTable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { "get_NameTable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNameTable*>(this, ___internal_method);
}
inline ::System::Xml::XmlAttribute* System::Xml::XmlDocument::CreateAttribute(::StringW prefix, ::StringW localName, ::StringW namespaceURI) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDocument*>(), 74 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlAttribute*>(this, ___internal_method, prefix, localName, namespaceURI);
}
inline ::System::Xml::XmlAttribute* System::Xml::XmlDocument::CreateDefaultAttribute(::StringW prefix, ::StringW localName, ::StringW namespaceURI) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDocument*>(), 75 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlAttribute*>(this, ___internal_method, prefix, localName, namespaceURI);
}
inline ::System::Xml::XmlElement* System::Xml::XmlDocument::CreateElement(::StringW prefix, ::StringW localName, ::StringW namespaceURI) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDocument*>(), 76 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlElement*>(this, ___internal_method, prefix, localName, namespaceURI);
}
inline bool System::Xml::XmlDocument::get_IsReadOnly() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDocument*>(), 38 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Xml::XmlNamedNodeMap* System::Xml::XmlDocument::get_Entities() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { "get_Entities", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNamedNodeMap*>(this, ___internal_method);
}
inline void System::Xml::XmlDocument::set_Entities(::System::Xml::XmlNamedNodeMap* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { "set_Entities", {}, { ::i2c::type_of<::System::Xml::XmlNamedNodeMap*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Xml::XmlDocument::get_IsLoading() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { "get_IsLoading", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Xml::XmlDocument::set_IsLoading(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { "set_IsLoading", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Xml::XmlDocument::get_ActualLoadingStatus() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { "get_ActualLoadingStatus", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Xml::XmlNode* System::Xml::XmlDocument::ReadNode(::System::Xml::XmlReader* reader) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDocument*>(), 77 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNode*>(this, ___internal_method, reader);
}
inline ::System::Xml::XmlTextReader* System::Xml::XmlDocument::SetupReader(::System::Xml::XmlTextReader* tr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { "SetupReader", {}, { ::i2c::type_of<::System::Xml::XmlTextReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlTextReader*>(this, ___internal_method, tr);
}
inline void System::Xml::XmlDocument::Load(::System::Xml::XmlReader* reader) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDocument*>(), 78 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
inline void System::Xml::XmlDocument::LoadXml(::StringW xml) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDocument*>(), 79 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xml);
}
inline void System::Xml::XmlDocument::set_InnerText(::StringW value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDocument*>(), 40 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlDocument::set_InnerXml(::StringW value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDocument*>(), 41 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlDocument::Save(::System::Xml::XmlWriter* w) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDocument*>(), 80 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, w);
}
inline void System::Xml::XmlDocument::WriteTo(::System::Xml::XmlWriter* w) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDocument*>(), 44 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, w);
}
inline void System::Xml::XmlDocument::WriteContentTo(::System::Xml::XmlWriter* xw) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDocument*>(), 45 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xw);
}
inline ::System::Xml::XmlNodeChangedEventArgs* System::Xml::XmlDocument::GetEventArgs(::System::Xml::XmlNode* node, ::System::Xml::XmlNode* oldParent, ::System::Xml::XmlNode* newParent,
                                                                                      ::StringW oldValue, ::StringW newValue, ::System::Xml::XmlNodeChangedAction action) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDocument*>(), 51 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNodeChangedEventArgs*>(this, ___internal_method, node, oldParent, newParent, oldValue, newValue, action);
}
inline ::System::Xml::XmlNodeChangedEventArgs* System::Xml::XmlDocument::GetInsertEventArgsForLoad(::System::Xml::XmlNode* node, ::System::Xml::XmlNode* newParent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(),
                                                           { "GetInsertEventArgsForLoad", {}, { ::i2c::type_of<::System::Xml::XmlNode*>(), ::i2c::type_of<::System::Xml::XmlNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNodeChangedEventArgs*>(this, ___internal_method, node, newParent);
}
inline void System::Xml::XmlDocument::BeforeEvent(::System::Xml::XmlNodeChangedEventArgs* args) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDocument*>(), 52 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void System::Xml::XmlDocument::AfterEvent(::System::Xml::XmlNodeChangedEventArgs* args) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDocument*>(), 53 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline ::System::Xml::XmlAttribute* System::Xml::XmlDocument::GetDefaultAttribute(::System::Xml::XmlElement* elem, ::StringW attrPrefix, ::StringW attrLocalname, ::StringW attrNamespaceURI) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(),
                          { "GetDefaultAttribute", {}, { ::i2c::type_of<::System::Xml::XmlElement*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlAttribute*>(this, ___internal_method, elem, attrPrefix, attrLocalname, attrNamespaceURI);
}
inline ::StringW System::Xml::XmlDocument::get_Version() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { "get_Version", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlDocument::get_Encoding() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { "get_Encoding", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlDocument::get_Standalone() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { "get_Standalone", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Xml::XmlEntity* System::Xml::XmlDocument::GetEntityNode(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { "GetEntityNode", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlEntity*>(this, ___internal_method, name);
}
inline ::System::Xml::Schema::IXmlSchemaInfo* System::Xml::XmlDocument::get_SchemaInfo() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDocument*>(), 42 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::IXmlSchemaInfo*>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlDocument::get_BaseURI() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDocument*>(), 43 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Xml::XmlDocument::SetBaseURI(::StringW inBaseURI) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { "SetBaseURI", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inBaseURI);
}
inline ::System::Xml::XmlNode* System::Xml::XmlDocument::AppendChildForLoad(::System::Xml::XmlNode* newChild, ::System::Xml::XmlDocument* doc) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDocument*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNode*>(this, ___internal_method, newChild, doc);
}
inline ::System::Xml::XPath::XPathNodeType System::Xml::XmlDocument::get_XPNodeType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlDocument*>(), 56 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XPath::XPathNodeType>(this, ___internal_method);
}
inline bool System::Xml::XmlDocument::get_HasEntityReferences() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { "get_HasEntityReferences", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Xml::XmlAttribute* System::Xml::XmlDocument::get_NamespaceXml() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlDocument*>(), { "get_NamespaceXml", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlAttribute*>(this, ___internal_method);
}
inline ::System::Xml::XmlDocument* System::Xml::XmlDocument::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlDocument*>());
}
inline ::System::Xml::XmlDocument* System::Xml::XmlDocument::New_ctor(::System::Xml::XmlNameTable* nt) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlDocument*>(nt));
}
inline ::System::Xml::XmlDocument* System::Xml::XmlDocument::New_ctor(::System::Xml::XmlImplementation* imp) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlDocument*>(imp));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlDocument::XmlDocument() {}
