#pragma once
#include "System/Xml/zzzz__XmlNode_impl.hpp"
#include "System/Xml/zzzz__XmlDocument_def.hpp"
#include "System/Xml/zzzz__XmlElement_def.hpp"
#include "System/Xml/zzzz__XmlNodeChangedEventArgs_def.hpp"
#include "System/Xml/zzzz__XmlNamedNodeMap_def.hpp"
#include "System/zzzz__WeakReference_def.hpp"
#include "System/Xml/zzzz__EmptyEnumerator_def.hpp"
#include "System/Xml/zzzz__XmlText_def.hpp"
#include "System/Xml/zzzz__XmlDeclaration_def.hpp"
#include "System/Xml/zzzz__XmlComment_def.hpp"
#include "System/Xml/Schema/zzzz__IXmlSchemaInfo_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSet_def.hpp"
#include "System/Xml/zzzz__XmlResolver_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaElementDecl_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Xml/zzzz__XmlNodeChangedAction_def.hpp"
#include "System/Xml/zzzz__XmlSignificantWhitespace_def.hpp"
#include "System/Xml/zzzz__XmlCDataSection_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Xml/zzzz__XmlWhitespace_def.hpp"
#include "System/Xml/zzzz__XmlAttribute_def.hpp"
#include "System/Xml/zzzz__XmlProcessingInstruction_def.hpp"
#include "System/Xml/zzzz__XmlNode_def.hpp"
#include "System/Xml/zzzz__XmlDocumentType_def.hpp"
#include "System/Xml/zzzz__XmlNameTable_def.hpp"
#include "System/Xml/zzzz__XmlEntityReference_def.hpp"
#include "System/Xml/zzzz__XmlEntity_def.hpp"
#include "System/Xml/zzzz__XmlNodeType_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaInfo_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaAttDef_def.hpp"
#include "System/Xml/zzzz__XmlImplementation_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
#include "System/Xml/zzzz__DomNameTable_def.hpp"
#include "System/Xml/zzzz__XmlLinkedNode_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Xml/zzzz__XmlNodeChangedEventHandler_def.hpp"
#include "System/Xml/zzzz__XmlDocumentFragment_def.hpp"
#include "System/Xml/zzzz__XmlName_def.hpp"
#include "System/Xml/zzzz__XmlTextReader_def.hpp"
//  Writing Method size for method: ::System::Xml::XmlDocument._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlDocument::*)()>(&::System::Xml::XmlDocument::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x288486c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlDocument::*)(::System::Xml::XmlImplementation*)>(&::System::Xml::XmlDocument::_ctor)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0x28848d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlImplementation*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.get_DtdSchemaInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::SchemaInfo* (::System::Xml::XmlDocument::*)()>(
    &::System::Xml::XmlDocument::get_DtdSchemaInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2884c98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "get_DtdSchemaInfo",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.set_DtdSchemaInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlDocument::*)(::System::Xml::Schema::SchemaInfo*)>(
    &::System::Xml::XmlDocument::set_DtdSchemaInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2884ca0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "set_DtdSchemaInfo", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::SchemaInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.CheckName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::System::Xml::XmlDocument::CheckName)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2881ab4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "CheckName", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.AddXmlName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Xml::XmlName* (::System::Xml::XmlDocument::*)(::StringW, ::StringW, ::StringW, ::System::Xml::Schema::IXmlSchemaInfo*)>(&::System::Xml::XmlDocument::AddXmlName)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2884ca8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "AddXmlName", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::IXmlSchemaInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.GetXmlName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Xml::XmlName* (::System::Xml::XmlDocument::*)(::StringW, ::StringW, ::StringW, ::System::Xml::Schema::IXmlSchemaInfo*)>(&::System::Xml::XmlDocument::GetXmlName)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2884cc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "GetXmlName", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::IXmlSchemaInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.AddAttrXmlName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Xml::XmlName* (::System::Xml::XmlDocument::*)(::StringW, ::StringW, ::StringW, ::System::Xml::Schema::IXmlSchemaInfo*)>(&::System::Xml::XmlDocument::AddAttrXmlName)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x2881bc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "AddAttrXmlName", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::IXmlSchemaInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.AddIdInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlDocument::*)(::System::Xml::XmlName*, ::System::Xml::XmlName*)>(
    &::System::Xml::XmlDocument::AddIdInfo)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2884cd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "AddIdInfo", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlName*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlName*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.GetIDInfoByElement_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlName* (::System::Xml::XmlDocument::*)(::System::Xml::XmlName*)>(
    &::System::Xml::XmlDocument::GetIDInfoByElement_)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2884d98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "GetIDInfoByElement_", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlName*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.GetIDInfoByElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlName* (::System::Xml::XmlDocument::*)(::System::Xml::XmlName*)>(
    &::System::Xml::XmlDocument::GetIDInfoByElement)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2883734;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "GetIDInfoByElement", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlName*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.GetElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::WeakReference* (::System::Xml::XmlDocument::*)(::System::Collections::ArrayList*, ::System::Xml::XmlElement*)>(&::System::Xml::XmlDocument::GetElement)> {
  constexpr static std::size_t size = 0x650;
  constexpr static std::size_t addrs = 0x2884e6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "GetElement", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ArrayList*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.AddElementWithId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlDocument::*)(::StringW, ::System::Xml::XmlElement*)>(
    &::System::Xml::XmlDocument::AddElementWithId)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x2883748;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "AddElementWithId", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.RemoveElementWithId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlDocument::*)(::StringW, ::System::Xml::XmlElement*)>(
    &::System::Xml::XmlDocument::RemoveElementWithId)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x288393c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "RemoveElementWithId", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.CloneNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNode* (::System::Xml::XmlDocument::*)(bool)>(&::System::Xml::XmlDocument::CloneNode)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x28854bc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), 27));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.get_NodeType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNodeType (::System::Xml::XmlDocument::*)()>(&::System::Xml::XmlDocument::get_NodeType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28855b8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.get_ParentNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNode* (::System::Xml::XmlDocument::*)()>(&::System::Xml::XmlDocument::get_ParentNode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28855c0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.get_DocumentType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlDocumentType* (::System::Xml::XmlDocument::*)()>(&::System::Xml::XmlDocument::get_DocumentType)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x28855c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), 46));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.get_Declaration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlDeclaration* (::System::Xml::XmlDocument::*)()>(&::System::Xml::XmlDocument::get_Declaration)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2885654;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), 47));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.get_Implementation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlImplementation* (::System::Xml::XmlDocument::*)()>(
    &::System::Xml::XmlDocument::get_Implementation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28856f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "get_Implementation",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.get_Name
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlDocument::*)()>(&::System::Xml::XmlDocument::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2885700;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.get_LocalName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlDocument::*)()>(&::System::Xml::XmlDocument::get_LocalName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2885708;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), 31));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.get_DocumentElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlElement* (::System::Xml::XmlDocument::*)()>(&::System::Xml::XmlDocument::get_DocumentElement)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2885710;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "get_DocumentElement",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.get_IsContainer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlDocument::*)()>(&::System::Xml::XmlDocument::get_IsContainer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x288579c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.get_LastNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlLinkedNode* (::System::Xml::XmlDocument::*)()>(&::System::Xml::XmlDocument::get_LastNode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28857a4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.set_LastNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlDocument::*)(::System::Xml::XmlLinkedNode*)>(&::System::Xml::XmlDocument::set_LastNode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28857ac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.get_OwnerDocument
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlDocument* (::System::Xml::XmlDocument::*)()>(&::System::Xml::XmlDocument::get_OwnerDocument)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28857b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.set_Schemas
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlDocument::*)(::System::Xml::Schema::XmlSchemaSet*)>(
    &::System::Xml::XmlDocument::set_Schemas)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28857bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "set_Schemas", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaSet*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.get_CanReportValidity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlDocument::*)()>(&::System::Xml::XmlDocument::get_CanReportValidity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28857c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "get_CanReportValidity",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.get_HasSetResolver
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlDocument::*)()>(&::System::Xml::XmlDocument::get_HasSetResolver)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28857cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "get_HasSetResolver",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.GetResolver
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlResolver* (::System::Xml::XmlDocument::*)()>(&::System::Xml::XmlDocument::GetResolver)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28857d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "GetResolver",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.set_XmlResolver
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlDocument::*)(::System::Xml::XmlResolver*)>(&::System::Xml::XmlDocument::set_XmlResolver)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x28857dc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), 48));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.IsValidChildType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlDocument::*)(::System::Xml::XmlNodeType)>(&::System::Xml::XmlDocument::IsValidChildType)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2885964;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.HasNodeTypeInPrevSiblings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlDocument::*)(::System::Xml::XmlNodeType, ::System::Xml::XmlNode*)>(
    &::System::Xml::XmlDocument::HasNodeTypeInPrevSiblings)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2885a54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "HasNodeTypeInPrevSiblings", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNodeType>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.HasNodeTypeInNextSiblings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlDocument::*)(::System::Xml::XmlNodeType, ::System::Xml::XmlNode*)>(
    &::System::Xml::XmlDocument::HasNodeTypeInNextSiblings)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2885b04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "HasNodeTypeInNextSiblings", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNodeType>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.CanInsertAfter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlDocument::*)(::System::Xml::XmlNode*, ::System::Xml::XmlNode*)>(
    &::System::Xml::XmlDocument::CanInsertAfter)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2885b68;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), 25));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.CreateAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlAttribute* (::System::Xml::XmlDocument::*)(::StringW)>(
    &::System::Xml::XmlDocument::CreateAttribute)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2885c60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "CreateAttribute", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.SetDefaultNamespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlDocument::*)(::StringW, ::StringW, ByRef<::StringW>)>(
    &::System::Xml::XmlDocument::SetDefaultNamespace)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2885d20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "SetDefaultNamespace", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.CreateCDataSection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlCDataSection* (::System::Xml::XmlDocument::*)(::StringW)>(
    &::System::Xml::XmlDocument::CreateCDataSection)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2885db0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), 49));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.CreateComment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlComment* (::System::Xml::XmlDocument::*)(::StringW)>(&::System::Xml::XmlDocument::CreateComment)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2885e2c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), 50));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.CreateDocumentType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlDocumentType* (::System::Xml::XmlDocument::*)(::StringW, ::StringW, ::StringW, ::StringW)>(
    &::System::Xml::XmlDocument::CreateDocumentType)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2885ea0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), 51));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.CreateDocumentFragment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlDocumentFragment* (::System::Xml::XmlDocument::*)()>(
    &::System::Xml::XmlDocument::CreateDocumentFragment)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2885f34;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), 52));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.CreateElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlElement* (::System::Xml::XmlDocument::*)(::StringW)>(&::System::Xml::XmlDocument::CreateElement)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2885f98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "CreateElement", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.AddDefaultAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlDocument::*)(::System::Xml::XmlElement*)>(
    &::System::Xml::XmlDocument::AddDefaultAttributes)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x2886048;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "AddDefaultAttributes", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.GetSchemaElementDecl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::SchemaElementDecl* (::System::Xml::XmlDocument::*)(::System::Xml::XmlElement*)>(
    &::System::Xml::XmlDocument::GetSchemaElementDecl)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x28862d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "GetSchemaElementDecl", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.PrepareDefaultAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlAttribute* (
    ::System::Xml::XmlDocument::*)(::System::Xml::Schema::SchemaAttDef*, ::StringW, ::StringW, ::StringW)>(&::System::Xml::XmlDocument::PrepareDefaultAttribute)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x28863e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "PrepareDefaultAttribute", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::SchemaAttDef*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.CreateEntityReference
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlEntityReference* (::System::Xml::XmlDocument::*)(::StringW)>(
    &::System::Xml::XmlDocument::CreateEntityReference)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x28864dc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), 53));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.CreateProcessingInstruction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlProcessingInstruction* (::System::Xml::XmlDocument::*)(::StringW, ::StringW)>(
    &::System::Xml::XmlDocument::CreateProcessingInstruction)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2886550;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), 54));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.CreateXmlDeclaration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlDeclaration* (::System::Xml::XmlDocument::*)(::StringW, ::StringW, ::StringW)>(
    &::System::Xml::XmlDocument::CreateXmlDeclaration)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x28865cc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), 55));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.CreateTextNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlText* (::System::Xml::XmlDocument::*)(::StringW)>(&::System::Xml::XmlDocument::CreateTextNode)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2886654;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), 56));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.CreateSignificantWhitespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlSignificantWhitespace* (::System::Xml::XmlDocument::*)(::StringW)>(
    &::System::Xml::XmlDocument::CreateSignificantWhitespace)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x28866c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), 57));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.CreateWhitespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlWhitespace* (::System::Xml::XmlDocument::*)(::StringW)>(
    &::System::Xml::XmlDocument::CreateWhitespace)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x288673c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), 58));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.CreateAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlAttribute* (::System::Xml::XmlDocument::*)(::StringW, ::StringW)>(
    &::System::Xml::XmlDocument::CreateAttribute)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x28867b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "CreateAttribute", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.CreateElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlElement* (::System::Xml::XmlDocument::*)(::StringW, ::StringW)>(
    &::System::Xml::XmlDocument::CreateElement)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2886854;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "CreateElement", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.ImportNodeInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNode* (::System::Xml::XmlDocument::*)(::System::Xml::XmlNode*, bool)>(
    &::System::Xml::XmlDocument::ImportNodeInternal)> {
  constexpr static std::size_t size = 0x4b0;
  constexpr static std::size_t addrs = 0x28868f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "ImportNodeInternal", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNode*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.ImportAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlDocument::*)(::System::Xml::XmlNode*, ::System::Xml::XmlNode*)>(
    &::System::Xml::XmlDocument::ImportAttributes)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2886da8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "ImportAttributes", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNode*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.ImportChildren
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlDocument::*)(::System::Xml::XmlNode*, ::System::Xml::XmlNode*, bool)>(
    &::System::Xml::XmlDocument::ImportChildren)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x288551c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "ImportChildren", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNode*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNode*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.get_NameTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNameTable* (::System::Xml::XmlDocument::*)()>(&::System::Xml::XmlDocument::get_NameTable)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x28814a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "get_NameTable",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.CreateAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlAttribute* (::System::Xml::XmlDocument::*)(::StringW, ::StringW, ::StringW)>(
    &::System::Xml::XmlDocument::CreateAttribute)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2886ebc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), 59));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.CreateDefaultAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlAttribute* (::System::Xml::XmlDocument::*)(::StringW, ::StringW, ::StringW)>(
    &::System::Xml::XmlDocument::CreateDefaultAttribute)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2886f5c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), 60));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.CreateElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlElement* (::System::Xml::XmlDocument::*)(::StringW, ::StringW, ::StringW)>(
    &::System::Xml::XmlDocument::CreateElement)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2886fe8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), 61));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.get_IsReadOnly
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlDocument::*)()>(&::System::Xml::XmlDocument::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28870a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), 32));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.get_Entities
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNamedNodeMap* (::System::Xml::XmlDocument::*)()>(&::System::Xml::XmlDocument::get_Entities)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x28870a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "get_Entities",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.set_Entities
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlDocument::*)(::System::Xml::XmlNamedNodeMap*)>(&::System::Xml::XmlDocument::set_Entities)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2887118;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "set_Entities", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNamedNodeMap*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.get_IsLoading
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlDocument::*)()>(&::System::Xml::XmlDocument::get_IsLoading)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2887120;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "get_IsLoading",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.set_IsLoading
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlDocument::*)(bool)>(&::System::Xml::XmlDocument::set_IsLoading)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2887128;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "set_IsLoading", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.get_ActualLoadingStatus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlDocument::*)()>(&::System::Xml::XmlDocument::get_ActualLoadingStatus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2887134;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "get_ActualLoadingStatus",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.SetupReader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlTextReader* (::System::Xml::XmlDocument::*)(::System::Xml::XmlTextReader*)>(
    &::System::Xml::XmlDocument::SetupReader)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x288713c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "SetupReader", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlTextReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.Load
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlDocument::*)(::System::Xml::XmlReader*)>(&::System::Xml::XmlDocument::Load)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x28871a8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), 62));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.LoadXml
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlDocument::*)(::StringW)>(&::System::Xml::XmlDocument::LoadXml)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x28872bc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), 63));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.set_InnerText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlDocument::*)(::StringW)>(&::System::Xml::XmlDocument::set_InnerText)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2887408;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), 34));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.set_InnerXml
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlDocument::*)(::StringW)>(&::System::Xml::XmlDocument::set_InnerXml)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2887468;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), 35));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.GetEventArgs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNodeChangedEventArgs* (
    ::System::Xml::XmlDocument::*)(::System::Xml::XmlNode*, ::System::Xml::XmlNode*, ::System::Xml::XmlNode*, ::StringW, ::StringW, ::System::Xml::XmlNodeChangedAction)>(
    &::System::Xml::XmlDocument::GetEventArgs)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x2887478;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), 42));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.GetInsertEventArgsForLoad
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Xml::XmlNodeChangedEventArgs* (::System::Xml::XmlDocument::*)(::System::Xml::XmlNode*, ::System::Xml::XmlNode*)>(&::System::Xml::XmlDocument::GetInsertEventArgsForLoad)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x288232c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "GetInsertEventArgsForLoad", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNode*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.BeforeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlDocument::*)(::System::Xml::XmlNodeChangedEventArgs*)>(
    &::System::Xml::XmlDocument::BeforeEvent)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2887578;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), 43));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.AfterEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlDocument::*)(::System::Xml::XmlNodeChangedEventArgs*)>(
    &::System::Xml::XmlDocument::AfterEvent)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x28875cc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), 44));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.GetDefaultAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Xml::XmlAttribute* (::System::Xml::XmlDocument::*)(::System::Xml::XmlElement*, ::StringW, ::StringW, ::StringW)>(&::System::Xml::XmlDocument::GetDefaultAttribute)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x28834a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "GetDefaultAttribute", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlElement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.GetEntityNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlEntity* (::System::Xml::XmlDocument::*)(::StringW)>(&::System::Xml::XmlDocument::GetEntityNode)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2887620;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "GetEntityNode", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.get_BaseURI
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlDocument::*)()>(&::System::Xml::XmlDocument::get_BaseURI)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28876e8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), 36));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.SetBaseURI
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlDocument::*)(::StringW)>(&::System::Xml::XmlDocument::SetBaseURI)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28876f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "SetBaseURI", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDocument.AppendChildForLoad
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNode* (::System::Xml::XmlDocument::*)(::System::Xml::XmlNode*, ::System::Xml::XmlDocument*)>(
    &::System::Xml::XmlDocument::AppendChildForLoad)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x28876f8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), 23));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlImplementation*& System::Xml::XmlDocument::__get_implementation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___implementation;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlImplementation*> const& System::Xml::XmlDocument::__get_implementation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___implementation;
}
constexpr void System::Xml::XmlDocument::__set_implementation(::System::Xml::XmlImplementation* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___implementation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::DomNameTable*& System::Xml::XmlDocument::__get_domNameTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___domNameTable;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::DomNameTable*> const& System::Xml::XmlDocument::__get_domNameTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___domNameTable;
}
constexpr void System::Xml::XmlDocument::__set_domNameTable(::System::Xml::DomNameTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___domNameTable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlLinkedNode*& System::Xml::XmlDocument::__get_lastChild() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___lastChild;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlLinkedNode*> const& System::Xml::XmlDocument::__get_lastChild() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___lastChild;
}
constexpr void System::Xml::XmlDocument::__set_lastChild(::System::Xml::XmlLinkedNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lastChild)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlNamedNodeMap*& System::Xml::XmlDocument::__get_entities() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___entities;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlNamedNodeMap*> const& System::Xml::XmlDocument::__get_entities() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___entities;
}
constexpr void System::Xml::XmlDocument::__set_entities(::System::Xml::XmlNamedNodeMap* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___entities)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Hashtable*& System::Xml::XmlDocument::__get_htElementIdMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___htElementIdMap;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& System::Xml::XmlDocument::__get_htElementIdMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___htElementIdMap;
}
constexpr void System::Xml::XmlDocument::__set_htElementIdMap(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___htElementIdMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Hashtable*& System::Xml::XmlDocument::__get_htElementIDAttrDecl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___htElementIDAttrDecl;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& System::Xml::XmlDocument::__get_htElementIDAttrDecl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___htElementIDAttrDecl;
}
constexpr void System::Xml::XmlDocument::__set_htElementIDAttrDecl(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___htElementIDAttrDecl)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::SchemaInfo*& System::Xml::XmlDocument::__get_schemaInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___schemaInfo;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::SchemaInfo*> const& System::Xml::XmlDocument::__get_schemaInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___schemaInfo;
}
constexpr void System::Xml::XmlDocument::__set_schemaInfo(::System::Xml::Schema::SchemaInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___schemaInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::XmlSchemaSet*& System::Xml::XmlDocument::__get_schemas() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___schemas;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaSet*> const& System::Xml::XmlDocument::__get_schemas() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___schemas;
}
constexpr void System::Xml::XmlDocument::__set_schemas(::System::Xml::Schema::XmlSchemaSet* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___schemas)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Xml::XmlDocument::__get_reportValidity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___reportValidity;
}
constexpr bool const& System::Xml::XmlDocument::__get_reportValidity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___reportValidity;
}
constexpr void System::Xml::XmlDocument::__set_reportValidity(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___reportValidity = value;
}
constexpr bool& System::Xml::XmlDocument::__get_actualLoadingStatus() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___actualLoadingStatus;
}
constexpr bool const& System::Xml::XmlDocument::__get_actualLoadingStatus() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___actualLoadingStatus;
}
constexpr void System::Xml::XmlDocument::__set_actualLoadingStatus(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___actualLoadingStatus = value;
}
constexpr ::System::Xml::XmlNodeChangedEventHandler*& System::Xml::XmlDocument::__get_onNodeInsertingDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___onNodeInsertingDelegate;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlNodeChangedEventHandler*> const& System::Xml::XmlDocument::__get_onNodeInsertingDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___onNodeInsertingDelegate;
}
constexpr void System::Xml::XmlDocument::__set_onNodeInsertingDelegate(::System::Xml::XmlNodeChangedEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onNodeInsertingDelegate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlNodeChangedEventHandler*& System::Xml::XmlDocument::__get_onNodeInsertedDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___onNodeInsertedDelegate;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlNodeChangedEventHandler*> const& System::Xml::XmlDocument::__get_onNodeInsertedDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___onNodeInsertedDelegate;
}
constexpr void System::Xml::XmlDocument::__set_onNodeInsertedDelegate(::System::Xml::XmlNodeChangedEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onNodeInsertedDelegate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlNodeChangedEventHandler*& System::Xml::XmlDocument::__get_onNodeRemovingDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___onNodeRemovingDelegate;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlNodeChangedEventHandler*> const& System::Xml::XmlDocument::__get_onNodeRemovingDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___onNodeRemovingDelegate;
}
constexpr void System::Xml::XmlDocument::__set_onNodeRemovingDelegate(::System::Xml::XmlNodeChangedEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onNodeRemovingDelegate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlNodeChangedEventHandler*& System::Xml::XmlDocument::__get_onNodeRemovedDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___onNodeRemovedDelegate;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlNodeChangedEventHandler*> const& System::Xml::XmlDocument::__get_onNodeRemovedDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___onNodeRemovedDelegate;
}
constexpr void System::Xml::XmlDocument::__set_onNodeRemovedDelegate(::System::Xml::XmlNodeChangedEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onNodeRemovedDelegate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlNodeChangedEventHandler*& System::Xml::XmlDocument::__get_onNodeChangingDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___onNodeChangingDelegate;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlNodeChangedEventHandler*> const& System::Xml::XmlDocument::__get_onNodeChangingDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___onNodeChangingDelegate;
}
constexpr void System::Xml::XmlDocument::__set_onNodeChangingDelegate(::System::Xml::XmlNodeChangedEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onNodeChangingDelegate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlNodeChangedEventHandler*& System::Xml::XmlDocument::__get_onNodeChangedDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___onNodeChangedDelegate;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlNodeChangedEventHandler*> const& System::Xml::XmlDocument::__get_onNodeChangedDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___onNodeChangedDelegate;
}
constexpr void System::Xml::XmlDocument::__set_onNodeChangedDelegate(::System::Xml::XmlNodeChangedEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onNodeChangedDelegate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Xml::XmlDocument::__get_fEntRefNodesPresent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___fEntRefNodesPresent;
}
constexpr bool const& System::Xml::XmlDocument::__get_fEntRefNodesPresent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___fEntRefNodesPresent;
}
constexpr void System::Xml::XmlDocument::__set_fEntRefNodesPresent(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___fEntRefNodesPresent = value;
}
constexpr bool& System::Xml::XmlDocument::__get_fCDataNodesPresent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___fCDataNodesPresent;
}
constexpr bool const& System::Xml::XmlDocument::__get_fCDataNodesPresent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___fCDataNodesPresent;
}
constexpr void System::Xml::XmlDocument::__set_fCDataNodesPresent(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___fCDataNodesPresent = value;
}
constexpr bool& System::Xml::XmlDocument::__get_preserveWhitespace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___preserveWhitespace;
}
constexpr bool const& System::Xml::XmlDocument::__get_preserveWhitespace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___preserveWhitespace;
}
constexpr void System::Xml::XmlDocument::__set_preserveWhitespace(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___preserveWhitespace = value;
}
constexpr bool& System::Xml::XmlDocument::__get_isLoading() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___isLoading;
}
constexpr bool const& System::Xml::XmlDocument::__get_isLoading() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___isLoading;
}
constexpr void System::Xml::XmlDocument::__set_isLoading(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___isLoading = value;
}
constexpr ::StringW& System::Xml::XmlDocument::__get_strDocumentName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___strDocumentName;
}
constexpr ::StringW const& System::Xml::XmlDocument::__get_strDocumentName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___strDocumentName;
}
constexpr void System::Xml::XmlDocument::__set_strDocumentName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___strDocumentName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::XmlDocument::__get_strDocumentFragmentName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___strDocumentFragmentName;
}
constexpr ::StringW const& System::Xml::XmlDocument::__get_strDocumentFragmentName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___strDocumentFragmentName;
}
constexpr void System::Xml::XmlDocument::__set_strDocumentFragmentName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___strDocumentFragmentName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::XmlDocument::__get_strCommentName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___strCommentName;
}
constexpr ::StringW const& System::Xml::XmlDocument::__get_strCommentName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___strCommentName;
}
constexpr void System::Xml::XmlDocument::__set_strCommentName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___strCommentName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::XmlDocument::__get_strTextName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___strTextName;
}
constexpr ::StringW const& System::Xml::XmlDocument::__get_strTextName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___strTextName;
}
constexpr void System::Xml::XmlDocument::__set_strTextName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___strTextName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::XmlDocument::__get_strCDataSectionName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___strCDataSectionName;
}
constexpr ::StringW const& System::Xml::XmlDocument::__get_strCDataSectionName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___strCDataSectionName;
}
constexpr void System::Xml::XmlDocument::__set_strCDataSectionName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___strCDataSectionName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::XmlDocument::__get_strEntityName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___strEntityName;
}
constexpr ::StringW const& System::Xml::XmlDocument::__get_strEntityName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___strEntityName;
}
constexpr void System::Xml::XmlDocument::__set_strEntityName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___strEntityName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::XmlDocument::__get_strID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___strID;
}
constexpr ::StringW const& System::Xml::XmlDocument::__get_strID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___strID;
}
constexpr void System::Xml::XmlDocument::__set_strID(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___strID)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::XmlDocument::__get_strXmlns() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___strXmlns;
}
constexpr ::StringW const& System::Xml::XmlDocument::__get_strXmlns() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___strXmlns;
}
constexpr void System::Xml::XmlDocument::__set_strXmlns(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___strXmlns)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::XmlDocument::__get_strXml() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___strXml;
}
constexpr ::StringW const& System::Xml::XmlDocument::__get_strXml() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___strXml;
}
constexpr void System::Xml::XmlDocument::__set_strXml(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___strXml)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::XmlDocument::__get_strSpace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___strSpace;
}
constexpr ::StringW const& System::Xml::XmlDocument::__get_strSpace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___strSpace;
}
constexpr void System::Xml::XmlDocument::__set_strSpace(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___strSpace)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::XmlDocument::__get_strLang() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___strLang;
}
constexpr ::StringW const& System::Xml::XmlDocument::__get_strLang() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___strLang;
}
constexpr void System::Xml::XmlDocument::__set_strLang(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___strLang)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::XmlDocument::__get_strEmpty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___strEmpty;
}
constexpr ::StringW const& System::Xml::XmlDocument::__get_strEmpty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___strEmpty;
}
constexpr void System::Xml::XmlDocument::__set_strEmpty(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___strEmpty)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::XmlDocument::__get_strNonSignificantWhitespaceName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___strNonSignificantWhitespaceName;
}
constexpr ::StringW const& System::Xml::XmlDocument::__get_strNonSignificantWhitespaceName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___strNonSignificantWhitespaceName;
}
constexpr void System::Xml::XmlDocument::__set_strNonSignificantWhitespaceName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___strNonSignificantWhitespaceName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::XmlDocument::__get_strSignificantWhitespaceName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___strSignificantWhitespaceName;
}
constexpr ::StringW const& System::Xml::XmlDocument::__get_strSignificantWhitespaceName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___strSignificantWhitespaceName;
}
constexpr void System::Xml::XmlDocument::__set_strSignificantWhitespaceName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___strSignificantWhitespaceName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::XmlDocument::__get_strReservedXmlns() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___strReservedXmlns;
}
constexpr ::StringW const& System::Xml::XmlDocument::__get_strReservedXmlns() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___strReservedXmlns;
}
constexpr void System::Xml::XmlDocument::__set_strReservedXmlns(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___strReservedXmlns)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::XmlDocument::__get_strReservedXml() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___strReservedXml;
}
constexpr ::StringW const& System::Xml::XmlDocument::__get_strReservedXml() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___strReservedXml;
}
constexpr void System::Xml::XmlDocument::__set_strReservedXml(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___strReservedXml)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::XmlDocument::__get_baseURI() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___baseURI;
}
constexpr ::StringW const& System::Xml::XmlDocument::__get_baseURI() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___baseURI;
}
constexpr void System::Xml::XmlDocument::__set_baseURI(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___baseURI)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlResolver*& System::Xml::XmlDocument::__get_resolver() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___resolver;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlResolver*> const& System::Xml::XmlDocument::__get_resolver() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___resolver;
}
constexpr void System::Xml::XmlDocument::__set_resolver(::System::Xml::XmlResolver* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___resolver)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Xml::XmlDocument::__get_bSetResolver() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___bSetResolver;
}
constexpr bool const& System::Xml::XmlDocument::__get_bSetResolver() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___bSetResolver;
}
constexpr void System::Xml::XmlDocument::__set_bSetResolver(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___bSetResolver = value;
}
constexpr ::System::Object*& System::Xml::XmlDocument::__get_objLock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___objLock;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Xml::XmlDocument::__get_objLock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___objLock;
}
constexpr void System::Xml::XmlDocument::__set_objLock(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___objLock)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Xml::XmlDocument::setStaticF_EmptyEnumerator(::System::Xml::EmptyEnumerator* value) {
  ::cordl_internals::setStaticField<::System::Xml::EmptyEnumerator*, "EmptyEnumerator", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get>(
      std::forward<::System::Xml::EmptyEnumerator*>(value));
}
inline ::System::Xml::EmptyEnumerator* System::Xml::XmlDocument::getStaticF_EmptyEnumerator() {
  return ::cordl_internals::getStaticField<::System::Xml::EmptyEnumerator*, "EmptyEnumerator", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get>();
}
inline void System::Xml::XmlDocument::setStaticF_NotKnownSchemaInfo(::System::Xml::Schema::IXmlSchemaInfo* value) {
  ::cordl_internals::setStaticField<::System::Xml::Schema::IXmlSchemaInfo*, "NotKnownSchemaInfo", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get>(
      std::forward<::System::Xml::Schema::IXmlSchemaInfo*>(value));
}
inline ::System::Xml::Schema::IXmlSchemaInfo* System::Xml::XmlDocument::getStaticF_NotKnownSchemaInfo() {
  return ::cordl_internals::getStaticField<::System::Xml::Schema::IXmlSchemaInfo*, "NotKnownSchemaInfo", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get>();
}
inline void System::Xml::XmlDocument::setStaticF_ValidSchemaInfo(::System::Xml::Schema::IXmlSchemaInfo* value) {
  ::cordl_internals::setStaticField<::System::Xml::Schema::IXmlSchemaInfo*, "ValidSchemaInfo", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get>(
      std::forward<::System::Xml::Schema::IXmlSchemaInfo*>(value));
}
inline ::System::Xml::Schema::IXmlSchemaInfo* System::Xml::XmlDocument::getStaticF_ValidSchemaInfo() {
  return ::cordl_internals::getStaticField<::System::Xml::Schema::IXmlSchemaInfo*, "ValidSchemaInfo", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get>();
}
inline void System::Xml::XmlDocument::setStaticF_InvalidSchemaInfo(::System::Xml::Schema::IXmlSchemaInfo* value) {
  ::cordl_internals::setStaticField<::System::Xml::Schema::IXmlSchemaInfo*, "InvalidSchemaInfo", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get>(
      std::forward<::System::Xml::Schema::IXmlSchemaInfo*>(value));
}
inline ::System::Xml::Schema::IXmlSchemaInfo* System::Xml::XmlDocument::getStaticF_InvalidSchemaInfo() {
  return ::cordl_internals::getStaticField<::System::Xml::Schema::IXmlSchemaInfo*, "InvalidSchemaInfo", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get>();
}
inline ::System::Xml::XmlDocument* System::Xml::XmlDocument::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Xml::XmlDocument*>());
}
inline void System::Xml::XmlDocument::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Xml::XmlDocument* System::Xml::XmlDocument::New_ctor(::System::Xml::XmlImplementation* imp) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Xml::XmlDocument*>(imp));
}
inline void System::Xml::XmlDocument::_ctor(::System::Xml::XmlImplementation* imp) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlImplementation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, imp);
}
inline ::System::Xml::Schema::SchemaInfo* System::Xml::XmlDocument::get_DtdSchemaInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "get_DtdSchemaInfo",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::SchemaInfo*, false>(this, ___internal_method);
}
inline void System::Xml::XmlDocument::set_DtdSchemaInfo(::System::Xml::Schema::SchemaInfo* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "set_DtdSchemaInfo", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::SchemaInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Xml::XmlDocument::CheckName(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "CheckName", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, name);
}
inline ::System::Xml::XmlName* System::Xml::XmlDocument::AddXmlName(::StringW prefix, ::StringW localName, ::StringW namespaceURI, ::System::Xml::Schema::IXmlSchemaInfo* schemaInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "AddXmlName", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::IXmlSchemaInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlName*, false>(this, ___internal_method, prefix, localName, namespaceURI, schemaInfo);
}
inline ::System::Xml::XmlName* System::Xml::XmlDocument::GetXmlName(::StringW prefix, ::StringW localName, ::StringW namespaceURI, ::System::Xml::Schema::IXmlSchemaInfo* schemaInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "GetXmlName", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::IXmlSchemaInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlName*, false>(this, ___internal_method, prefix, localName, namespaceURI, schemaInfo);
}
inline ::System::Xml::XmlName* System::Xml::XmlDocument::AddAttrXmlName(::StringW prefix, ::StringW localName, ::StringW namespaceURI, ::System::Xml::Schema::IXmlSchemaInfo* schemaInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "AddAttrXmlName", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::IXmlSchemaInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlName*, false>(this, ___internal_method, prefix, localName, namespaceURI, schemaInfo);
}
inline bool System::Xml::XmlDocument::AddIdInfo(::System::Xml::XmlName* eleName, ::System::Xml::XmlName* attrName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "AddIdInfo", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlName*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlName*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, eleName, attrName);
}
inline ::System::Xml::XmlName* System::Xml::XmlDocument::GetIDInfoByElement_(::System::Xml::XmlName* eleName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "GetIDInfoByElement_", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlName*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlName*, false>(this, ___internal_method, eleName);
}
inline ::System::Xml::XmlName* System::Xml::XmlDocument::GetIDInfoByElement(::System::Xml::XmlName* eleName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "GetIDInfoByElement", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlName*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlName*, false>(this, ___internal_method, eleName);
}
inline ::System::WeakReference* System::Xml::XmlDocument::GetElement(::System::Collections::ArrayList* elementList, ::System::Xml::XmlElement* elem) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "GetElement", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ArrayList*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::WeakReference*, false>(this, ___internal_method, elementList, elem);
}
inline void System::Xml::XmlDocument::AddElementWithId(::StringW id, ::System::Xml::XmlElement* elem) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "AddElementWithId", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id, elem);
}
inline void System::Xml::XmlDocument::RemoveElementWithId(::StringW id, ::System::Xml::XmlElement* elem) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "RemoveElementWithId", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id, elem);
}
inline ::System::Xml::XmlNode* System::Xml::XmlDocument::CloneNode(bool deep) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "CloneNode", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNode*, false>(this, ___internal_method, deep);
}
inline ::System::Xml::XmlNodeType System::Xml::XmlDocument::get_NodeType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "get_NodeType",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNodeType, false>(this, ___internal_method);
}
inline ::System::Xml::XmlNode* System::Xml::XmlDocument::get_ParentNode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "get_ParentNode",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNode*, false>(this, ___internal_method);
}
inline ::System::Xml::XmlDocumentType* System::Xml::XmlDocument::get_DocumentType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "get_DocumentType",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlDocumentType*, false>(this, ___internal_method);
}
inline ::System::Xml::XmlDeclaration* System::Xml::XmlDocument::get_Declaration() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "get_Declaration",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlDeclaration*, false>(this, ___internal_method);
}
inline ::System::Xml::XmlImplementation* System::Xml::XmlDocument::get_Implementation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "get_Implementation",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlImplementation*, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlDocument::get_Name() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "get_Name",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlDocument::get_LocalName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "get_LocalName",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Xml::XmlElement* System::Xml::XmlDocument::get_DocumentElement() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "get_DocumentElement",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlElement*, false>(this, ___internal_method);
}
inline bool System::Xml::XmlDocument::get_IsContainer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "get_IsContainer",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Xml::XmlLinkedNode* System::Xml::XmlDocument::get_LastNode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "get_LastNode",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlLinkedNode*, false>(this, ___internal_method);
}
inline void System::Xml::XmlDocument::set_LastNode(::System::Xml::XmlLinkedNode* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "set_LastNode", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlLinkedNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Xml::XmlDocument* System::Xml::XmlDocument::get_OwnerDocument() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "get_OwnerDocument",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlDocument*, false>(this, ___internal_method);
}
inline void System::Xml::XmlDocument::set_Schemas(::System::Xml::Schema::XmlSchemaSet* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "set_Schemas", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaSet*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool System::Xml::XmlDocument::get_CanReportValidity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "get_CanReportValidity",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Xml::XmlDocument::get_HasSetResolver() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "get_HasSetResolver",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Xml::XmlResolver* System::Xml::XmlDocument::GetResolver() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "GetResolver",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlResolver*, false>(this, ___internal_method);
}
inline void System::Xml::XmlDocument::set_XmlResolver(::System::Xml::XmlResolver* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "set_XmlResolver", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlResolver*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool System::Xml::XmlDocument::IsValidChildType(::System::Xml::XmlNodeType type) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "IsValidChildType", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNodeType>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, type);
}
inline bool System::Xml::XmlDocument::HasNodeTypeInPrevSiblings(::System::Xml::XmlNodeType nt, ::System::Xml::XmlNode* refNode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "HasNodeTypeInPrevSiblings", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNodeType>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nt, refNode);
}
inline bool System::Xml::XmlDocument::HasNodeTypeInNextSiblings(::System::Xml::XmlNodeType nt, ::System::Xml::XmlNode* refNode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "HasNodeTypeInNextSiblings", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNodeType>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nt, refNode);
}
inline bool System::Xml::XmlDocument::CanInsertAfter(::System::Xml::XmlNode* newChild, ::System::Xml::XmlNode* refChild) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "CanInsertAfter", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNode*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, newChild, refChild);
}
inline ::System::Xml::XmlAttribute* System::Xml::XmlDocument::CreateAttribute(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "CreateAttribute", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlAttribute*, false>(this, ___internal_method, name);
}
inline void System::Xml::XmlDocument::SetDefaultNamespace(::StringW prefix, ::StringW localName, ByRef<::StringW> namespaceURI) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "SetDefaultNamespace", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, prefix, localName, namespaceURI);
}
inline ::System::Xml::XmlCDataSection* System::Xml::XmlDocument::CreateCDataSection(::StringW data) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "CreateCDataSection", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlCDataSection*, false>(this, ___internal_method, data);
}
inline ::System::Xml::XmlComment* System::Xml::XmlDocument::CreateComment(::StringW data) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "CreateComment", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlComment*, false>(this, ___internal_method, data);
}
inline ::System::Xml::XmlDocumentType* System::Xml::XmlDocument::CreateDocumentType(::StringW name, ::StringW publicId, ::StringW systemId, ::StringW internalSubset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "CreateDocumentType", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlDocumentType*, false>(this, ___internal_method, name, publicId, systemId, internalSubset);
}
inline ::System::Xml::XmlDocumentFragment* System::Xml::XmlDocument::CreateDocumentFragment() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "CreateDocumentFragment",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlDocumentFragment*, false>(this, ___internal_method);
}
inline ::System::Xml::XmlElement* System::Xml::XmlDocument::CreateElement(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "CreateElement", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlElement*, false>(this, ___internal_method, name);
}
inline void System::Xml::XmlDocument::AddDefaultAttributes(::System::Xml::XmlElement* elem) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "AddDefaultAttributes", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, elem);
}
inline ::System::Xml::Schema::SchemaElementDecl* System::Xml::XmlDocument::GetSchemaElementDecl(::System::Xml::XmlElement* elem) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "GetSchemaElementDecl", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::SchemaElementDecl*, false>(this, ___internal_method, elem);
}
inline ::System::Xml::XmlAttribute* System::Xml::XmlDocument::PrepareDefaultAttribute(::System::Xml::Schema::SchemaAttDef* attdef, ::StringW attrPrefix, ::StringW attrLocalname,
                                                                                      ::StringW attrNamespaceURI) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "PrepareDefaultAttribute", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::SchemaAttDef*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlAttribute*, false>(this, ___internal_method, attdef, attrPrefix, attrLocalname, attrNamespaceURI);
}
inline ::System::Xml::XmlEntityReference* System::Xml::XmlDocument::CreateEntityReference(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "CreateEntityReference", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlEntityReference*, false>(this, ___internal_method, name);
}
inline ::System::Xml::XmlProcessingInstruction* System::Xml::XmlDocument::CreateProcessingInstruction(::StringW target, ::StringW data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "CreateProcessingInstruction", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlProcessingInstruction*, false>(this, ___internal_method, target, data);
}
inline ::System::Xml::XmlDeclaration* System::Xml::XmlDocument::CreateXmlDeclaration(::StringW version, ::StringW encoding, ::StringW standalone) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "CreateXmlDeclaration", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlDeclaration*, false>(this, ___internal_method, version, encoding, standalone);
}
inline ::System::Xml::XmlText* System::Xml::XmlDocument::CreateTextNode(::StringW text) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "CreateTextNode", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlText*, false>(this, ___internal_method, text);
}
inline ::System::Xml::XmlSignificantWhitespace* System::Xml::XmlDocument::CreateSignificantWhitespace(::StringW text) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "CreateSignificantWhitespace", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlSignificantWhitespace*, false>(this, ___internal_method, text);
}
inline ::System::Xml::XmlWhitespace* System::Xml::XmlDocument::CreateWhitespace(::StringW text) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "CreateWhitespace", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlWhitespace*, false>(this, ___internal_method, text);
}
inline ::System::Xml::XmlAttribute* System::Xml::XmlDocument::CreateAttribute(::StringW qualifiedName, ::StringW namespaceURI) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "CreateAttribute", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlAttribute*, false>(this, ___internal_method, qualifiedName, namespaceURI);
}
inline ::System::Xml::XmlElement* System::Xml::XmlDocument::CreateElement(::StringW qualifiedName, ::StringW namespaceURI) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "CreateElement", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlElement*, false>(this, ___internal_method, qualifiedName, namespaceURI);
}
inline ::System::Xml::XmlNode* System::Xml::XmlDocument::ImportNodeInternal(::System::Xml::XmlNode* node, bool deep) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "ImportNodeInternal", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNode*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNode*, false>(this, ___internal_method, node, deep);
}
inline void System::Xml::XmlDocument::ImportAttributes(::System::Xml::XmlNode* fromElem, ::System::Xml::XmlNode* toElem) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "ImportAttributes", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNode*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, fromElem, toElem);
}
inline void System::Xml::XmlDocument::ImportChildren(::System::Xml::XmlNode* fromNode, ::System::Xml::XmlNode* toNode, bool deep) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "ImportChildren", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNode*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNode*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, fromNode, toNode, deep);
}
inline ::System::Xml::XmlNameTable* System::Xml::XmlDocument::get_NameTable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "get_NameTable",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNameTable*, false>(this, ___internal_method);
}
inline ::System::Xml::XmlAttribute* System::Xml::XmlDocument::CreateAttribute(::StringW prefix, ::StringW localName, ::StringW namespaceURI) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "CreateAttribute", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlAttribute*, false>(this, ___internal_method, prefix, localName, namespaceURI);
}
inline ::System::Xml::XmlAttribute* System::Xml::XmlDocument::CreateDefaultAttribute(::StringW prefix, ::StringW localName, ::StringW namespaceURI) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "CreateDefaultAttribute", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlAttribute*, false>(this, ___internal_method, prefix, localName, namespaceURI);
}
inline ::System::Xml::XmlElement* System::Xml::XmlDocument::CreateElement(::StringW prefix, ::StringW localName, ::StringW namespaceURI) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "CreateElement", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlElement*, false>(this, ___internal_method, prefix, localName, namespaceURI);
}
inline bool System::Xml::XmlDocument::get_IsReadOnly() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "get_IsReadOnly",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Xml::XmlNamedNodeMap* System::Xml::XmlDocument::get_Entities() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "get_Entities",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNamedNodeMap*, false>(this, ___internal_method);
}
inline void System::Xml::XmlDocument::set_Entities(::System::Xml::XmlNamedNodeMap* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "set_Entities", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNamedNodeMap*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool System::Xml::XmlDocument::get_IsLoading() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "get_IsLoading",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Xml::XmlDocument::set_IsLoading(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "set_IsLoading", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool System::Xml::XmlDocument::get_ActualLoadingStatus() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "get_ActualLoadingStatus",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Xml::XmlTextReader* System::Xml::XmlDocument::SetupReader(::System::Xml::XmlTextReader* tr) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "SetupReader", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlTextReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlTextReader*, false>(this, ___internal_method, tr);
}
inline void System::Xml::XmlDocument::Load(::System::Xml::XmlReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "Load", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader);
}
inline void System::Xml::XmlDocument::LoadXml(::StringW xml) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "LoadXml", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xml);
}
inline void System::Xml::XmlDocument::set_InnerText(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "set_InnerText", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Xml::XmlDocument::set_InnerXml(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "set_InnerXml", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Xml::XmlNodeChangedEventArgs* System::Xml::XmlDocument::GetEventArgs(::System::Xml::XmlNode* node, ::System::Xml::XmlNode* oldParent, ::System::Xml::XmlNode* newParent,
                                                                                      ::StringW oldValue, ::StringW newValue, ::System::Xml::XmlNodeChangedAction action) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "GetEventArgs", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNode*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNode*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNode*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNodeChangedAction>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNodeChangedEventArgs*, false>(this, ___internal_method, node, oldParent, newParent, oldValue, newValue, action);
}
inline ::System::Xml::XmlNodeChangedEventArgs* System::Xml::XmlDocument::GetInsertEventArgsForLoad(::System::Xml::XmlNode* node, ::System::Xml::XmlNode* newParent) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "GetInsertEventArgsForLoad", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNode*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNodeChangedEventArgs*, false>(this, ___internal_method, node, newParent);
}
inline void System::Xml::XmlDocument::BeforeEvent(::System::Xml::XmlNodeChangedEventArgs* args) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "BeforeEvent", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNodeChangedEventArgs*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, args);
}
inline void System::Xml::XmlDocument::AfterEvent(::System::Xml::XmlNodeChangedEventArgs* args) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "AfterEvent", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNodeChangedEventArgs*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, args);
}
inline ::System::Xml::XmlAttribute* System::Xml::XmlDocument::GetDefaultAttribute(::System::Xml::XmlElement* elem, ::StringW attrPrefix, ::StringW attrLocalname, ::StringW attrNamespaceURI) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "GetDefaultAttribute", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlElement*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlAttribute*, false>(this, ___internal_method, elem, attrPrefix, attrLocalname, attrNamespaceURI);
}
inline ::System::Xml::XmlEntity* System::Xml::XmlDocument::GetEntityNode(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "GetEntityNode", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlEntity*, false>(this, ___internal_method, name);
}
inline ::StringW System::Xml::XmlDocument::get_BaseURI() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "get_BaseURI",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void System::Xml::XmlDocument::SetBaseURI(::StringW inBaseURI) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "SetBaseURI", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inBaseURI);
}
inline ::System::Xml::XmlNode* System::Xml::XmlDocument::AppendChildForLoad(::System::Xml::XmlNode* newChild, ::System::Xml::XmlDocument* doc) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDocument*>::get(), "AppendChildForLoad", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNode*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDocument*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNode*, false>(this, ___internal_method, newChild, doc);
}
// Ctor Parameters []
constexpr ::System::Xml::XmlDocument::XmlDocument() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
