#pragma once
// IWYU pragma private; include "System/Xml/DocumentXPathNavigator.hpp"
#include "System/Xml/XPath/zzzz__XPathNavigator_impl.hpp"
#include "System/Xml/zzzz__DocumentXPathNavigator_def.hpp"
#include "System/Xml/Schema/zzzz__IXmlSchemaInfo_def.hpp"
#include "System/Xml/XPath/zzzz__XPathNamespaceScope_def.hpp"
#include "System/Xml/XPath/zzzz__XPathNavigator_def.hpp"
#include "System/Xml/XPath/zzzz__XPathNodeType_def.hpp"
#include "System/Xml/zzzz__XmlAttributeCollection_def.hpp"
#include "System/Xml/zzzz__XmlAttribute_def.hpp"
#include "System/Xml/zzzz__XmlDocument_def.hpp"
#include "System/Xml/zzzz__XmlElement_def.hpp"
#include "System/Xml/zzzz__XmlNameTable_def.hpp"
#include "System/Xml/zzzz__XmlNode_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Xml::DocumentXPathNavigator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::DocumentXPathNavigator::*)(::System::Xml::XmlDocument*, ::System::Xml::XmlNode*)>(
    &::System::Xml::DocumentXPathNavigator::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x62ae4e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::DocumentXPathNavigator*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlDocument*>(), ::i2c::type_of<::System::Xml::XmlNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DocumentXPathNavigator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::DocumentXPathNavigator::*)(::System::Xml::DocumentXPathNavigator*)>(&::System::Xml::DocumentXPathNavigator::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x62ae628;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::DocumentXPathNavigator*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::DocumentXPathNavigator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DocumentXPathNavigator.Clone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XPath::XPathNavigator* (::System::Xml::DocumentXPathNavigator::*)()>(&::System::Xml::DocumentXPathNavigator::Clone)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x62ae6a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::DocumentXPathNavigator*>(), { ::i2c::class_of<::System::Xml::DocumentXPathNavigator*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DocumentXPathNavigator.get_NameTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNameTable* (::System::Xml::DocumentXPathNavigator::*)()>(&::System::Xml::DocumentXPathNavigator::get_NameTable)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x62ae704;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::DocumentXPathNavigator*>(), { ::i2c::class_of<::System::Xml::DocumentXPathNavigator*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DocumentXPathNavigator.get_NodeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XPath::XPathNodeType (::System::Xml::DocumentXPathNavigator::*)()>(&::System::Xml::DocumentXPathNavigator::get_NodeType)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x62ae740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::DocumentXPathNavigator*>(), { ::i2c::class_of<::System::Xml::DocumentXPathNavigator*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DocumentXPathNavigator.get_LocalName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::DocumentXPathNavigator::*)()>(&::System::Xml::DocumentXPathNavigator::get_LocalName)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x62ae7b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::DocumentXPathNavigator*>(), { ::i2c::class_of<::System::Xml::DocumentXPathNavigator*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DocumentXPathNavigator.get_NamespaceURI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::DocumentXPathNavigator::*)()>(&::System::Xml::DocumentXPathNavigator::get_NamespaceURI)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x62ae7d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::DocumentXPathNavigator*>(), { ::i2c::class_of<::System::Xml::DocumentXPathNavigator*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DocumentXPathNavigator.get_Prefix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::DocumentXPathNavigator::*)()>(&::System::Xml::DocumentXPathNavigator::get_Prefix)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x62ae8b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::DocumentXPathNavigator*>(), { ::i2c::class_of<::System::Xml::DocumentXPathNavigator*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DocumentXPathNavigator.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::DocumentXPathNavigator::*)()>(&::System::Xml::DocumentXPathNavigator::get_Value)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x62ae96c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::DocumentXPathNavigator*>(), { ::i2c::class_of<::System::Xml::DocumentXPathNavigator*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DocumentXPathNavigator.get_ValueDocument
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::DocumentXPathNavigator::*)()>(&::System::Xml::DocumentXPathNavigator::get_ValueDocument)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x62aea04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::DocumentXPathNavigator*>(), { "get_ValueDocument", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DocumentXPathNavigator.get_ValueText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::DocumentXPathNavigator::*)()>(&::System::Xml::DocumentXPathNavigator::get_ValueText)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x62aea48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::DocumentXPathNavigator*>(), { "get_ValueText", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DocumentXPathNavigator.get_UnderlyingObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::DocumentXPathNavigator::*)()>(&::System::Xml::DocumentXPathNavigator::get_UnderlyingObject)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x62aec68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::DocumentXPathNavigator*>(), { ::i2c::class_of<::System::Xml::DocumentXPathNavigator*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DocumentXPathNavigator.MoveToNamespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::DocumentXPathNavigator::*)(::StringW)>(&::System::Xml::DocumentXPathNavigator::MoveToNamespace)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x62aec80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::DocumentXPathNavigator*>(), { ::i2c::class_of<::System::Xml::DocumentXPathNavigator*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DocumentXPathNavigator.MoveToFirstNamespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::DocumentXPathNavigator::*)(::System::Xml::XPath::XPathNamespaceScope)>(
    &::System::Xml::DocumentXPathNavigator::MoveToFirstNamespace)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x62aef5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::DocumentXPathNavigator*>(), { ::i2c::class_of<::System::Xml::DocumentXPathNavigator*>(), 30 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DocumentXPathNavigator.MoveToFirstNamespaceLocal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Xml::XmlAttributeCollection*, ::by_ref<int32_t>)>(&::System::Xml::DocumentXPathNavigator::MoveToFirstNamespaceLocal)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x62af15c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::DocumentXPathNavigator*>(),
                                                             { "MoveToFirstNamespaceLocal", {}, { ::i2c::type_of<::System::Xml::XmlAttributeCollection*>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DocumentXPathNavigator.MoveToFirstNamespaceGlobal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::Xml::XmlAttributeCollection*>, ::by_ref<int32_t>)>(
    &::System::Xml::DocumentXPathNavigator::MoveToFirstNamespaceGlobal)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x62af304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::DocumentXPathNavigator*>(),
                                                { "MoveToFirstNamespaceGlobal", {}, { ::i2c::type_of<::by_ref<::System::Xml::XmlAttributeCollection*>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DocumentXPathNavigator.MoveToNextNamespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::DocumentXPathNavigator::*)(::System::Xml::XPath::XPathNamespaceScope)>(
    &::System::Xml::DocumentXPathNavigator::MoveToNextNamespace)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x62af58c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::DocumentXPathNavigator*>(), { ::i2c::class_of<::System::Xml::DocumentXPathNavigator*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DocumentXPathNavigator.MoveToNextNamespaceLocal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Xml::XmlAttributeCollection*, ::by_ref<int32_t>)>(&::System::Xml::DocumentXPathNavigator::MoveToNextNamespaceLocal)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x62af948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::DocumentXPathNavigator*>(),
                                                             { "MoveToNextNamespaceLocal", {}, { ::i2c::type_of<::System::Xml::XmlAttributeCollection*>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DocumentXPathNavigator.MoveToNextNamespaceGlobal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::Xml::XmlAttributeCollection*>, ::by_ref<int32_t>)>(
    &::System::Xml::DocumentXPathNavigator::MoveToNextNamespaceGlobal)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x62af448;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::DocumentXPathNavigator*>(),
                                                { "MoveToNextNamespaceGlobal", {}, { ::i2c::type_of<::by_ref<::System::Xml::XmlAttributeCollection*>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DocumentXPathNavigator.PathHasDuplicateNamespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::DocumentXPathNavigator::*)(::System::Xml::XmlElement*, ::System::Xml::XmlElement*, ::StringW)>(
    &::System::Xml::DocumentXPathNavigator::PathHasDuplicateNamespace)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x62af99c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::DocumentXPathNavigator*>(),
                            { "PathHasDuplicateNamespace", {}, { ::i2c::type_of<::System::Xml::XmlElement*>(), ::i2c::type_of<::System::Xml::XmlElement*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DocumentXPathNavigator.LookupNamespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::DocumentXPathNavigator::*)(::StringW)>(&::System::Xml::DocumentXPathNavigator::LookupNamespace)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x62afa94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::DocumentXPathNavigator*>(), { ::i2c::class_of<::System::Xml::DocumentXPathNavigator*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DocumentXPathNavigator.MoveToParent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::DocumentXPathNavigator::*)()>(&::System::Xml::DocumentXPathNavigator::MoveToParent)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x62afaf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::DocumentXPathNavigator*>(), { ::i2c::class_of<::System::Xml::DocumentXPathNavigator*>(), 32 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DocumentXPathNavigator.IsSamePosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::DocumentXPathNavigator::*)(::System::Xml::XPath::XPathNavigator*)>(
    &::System::Xml::DocumentXPathNavigator::IsSamePosition)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x62afc3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::DocumentXPathNavigator*>(), { ::i2c::class_of<::System::Xml::DocumentXPathNavigator*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DocumentXPathNavigator.get_SchemaInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::IXmlSchemaInfo* (::System::Xml::DocumentXPathNavigator::*)()>(&::System::Xml::DocumentXPathNavigator::get_SchemaInfo)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x62afcd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::DocumentXPathNavigator*>(), { ::i2c::class_of<::System::Xml::DocumentXPathNavigator*>(), 34 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DocumentXPathNavigator.ResetPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::DocumentXPathNavigator::*)(::System::Xml::XmlNode*)>(&::System::Xml::DocumentXPathNavigator::ResetPosition)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x62ae558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::DocumentXPathNavigator*>(), { "ResetPosition", {}, { ::i2c::type_of<::System::Xml::XmlNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DocumentXPathNavigator.ResetAttributePosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Xml::XmlAttribute*, ::System::Xml::XmlAttributeCollection*, ::by_ref<int32_t>)>(
    &::System::Xml::DocumentXPathNavigator::ResetAttributePosition)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x62af8b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Xml::DocumentXPathNavigator*>(),
            { "ResetAttributePosition", {}, { ::i2c::type_of<::System::Xml::XmlAttribute*>(), ::i2c::type_of<::System::Xml::XmlAttributeCollection*>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DocumentXPathNavigator.CheckAttributePosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Xml::XmlAttribute*, ::by_ref<::System::Xml::XmlAttributeCollection*>, int32_t)>(
    &::System::Xml::DocumentXPathNavigator::CheckAttributePosition)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x62af820;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Xml::DocumentXPathNavigator*>(),
            { "CheckAttributePosition", {}, { ::i2c::type_of<::System::Xml::XmlAttribute*>(), ::i2c::type_of<::by_ref<::System::Xml::XmlAttributeCollection*>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DocumentXPathNavigator.CalibrateText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::DocumentXPathNavigator::*)()>(&::System::Xml::DocumentXPathNavigator::CalibrateText)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x62ae76c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::DocumentXPathNavigator*>(), { "CalibrateText", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DocumentXPathNavigator.ParentNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNode* (::System::Xml::DocumentXPathNavigator::*)(::System::Xml::XmlNode*)>(
    &::System::Xml::DocumentXPathNavigator::ParentNode)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x62afbc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::DocumentXPathNavigator*>(), { "ParentNode", {}, { ::i2c::type_of<::System::Xml::XmlNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DocumentXPathNavigator.ParentNodeTail
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNode* (::System::Xml::DocumentXPathNavigator::*)(::System::Xml::XmlNode*)>(
    &::System::Xml::DocumentXPathNavigator::ParentNodeTail)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x62afd54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::DocumentXPathNavigator*>(), { "ParentNodeTail", {}, { ::i2c::type_of<::System::Xml::XmlNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DocumentXPathNavigator.NextSibling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNode* (::System::Xml::DocumentXPathNavigator::*)(::System::Xml::XmlNode*)>(
    &::System::Xml::DocumentXPathNavigator::NextSibling)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x62aec0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::DocumentXPathNavigator*>(), { "NextSibling", {}, { ::i2c::type_of<::System::Xml::XmlNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DocumentXPathNavigator.NextSiblingTail
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNode* (::System::Xml::DocumentXPathNavigator::*)(::System::Xml::XmlNode*, ::System::Xml::XmlNode*)>(
    &::System::Xml::DocumentXPathNavigator::NextSiblingTail)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x62afd9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::DocumentXPathNavigator*>(),
                                                             { "NextSiblingTail", {}, { ::i2c::type_of<::System::Xml::XmlNode*>(), ::i2c::type_of<::System::Xml::XmlNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DocumentXPathNavigator.PreviousText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNode* (::System::Xml::DocumentXPathNavigator::*)(::System::Xml::XmlNode*)>(
    &::System::Xml::DocumentXPathNavigator::PreviousText)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x62afcf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::DocumentXPathNavigator*>(), { "PreviousText", {}, { ::i2c::type_of<::System::Xml::XmlNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DocumentXPathNavigator.PreviousTextTail
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNode* (::System::Xml::DocumentXPathNavigator::*)(::System::Xml::XmlNode*, ::System::Xml::XmlNode*)>(
    &::System::Xml::DocumentXPathNavigator::PreviousTextTail)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x62afe50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::DocumentXPathNavigator*>(),
                                                             { "PreviousTextTail", {}, { ::i2c::type_of<::System::Xml::XmlNode*>(), ::i2c::type_of<::System::Xml::XmlNode*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlDocument*& System::Xml::DocumentXPathNavigator::__cordl_internal_get_document() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___document;
}
constexpr ::System::Xml::XmlDocument* const& System::Xml::DocumentXPathNavigator::__cordl_internal_get_document() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___document;
}
constexpr void System::Xml::DocumentXPathNavigator::__cordl_internal_set_document(::System::Xml::XmlDocument* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___document = value;
}
constexpr ::System::Xml::XmlNode*& System::Xml::DocumentXPathNavigator::__cordl_internal_get_source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___source;
}
constexpr ::System::Xml::XmlNode* const& System::Xml::DocumentXPathNavigator::__cordl_internal_get_source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___source;
}
constexpr void System::Xml::DocumentXPathNavigator::__cordl_internal_set_source(::System::Xml::XmlNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___source = value;
}
constexpr int32_t& System::Xml::DocumentXPathNavigator::__cordl_internal_get_attributeIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeIndex;
}
constexpr int32_t const& System::Xml::DocumentXPathNavigator::__cordl_internal_get_attributeIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeIndex;
}
constexpr void System::Xml::DocumentXPathNavigator::__cordl_internal_set_attributeIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___attributeIndex = value;
}
constexpr ::System::Xml::XmlElement*& System::Xml::DocumentXPathNavigator::__cordl_internal_get_namespaceParent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___namespaceParent;
}
constexpr ::System::Xml::XmlElement* const& System::Xml::DocumentXPathNavigator::__cordl_internal_get_namespaceParent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___namespaceParent;
}
constexpr void System::Xml::DocumentXPathNavigator::__cordl_internal_set_namespaceParent(::System::Xml::XmlElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___namespaceParent = value;
}
inline void System::Xml::DocumentXPathNavigator::_ctor(::System::Xml::XmlDocument* document, ::System::Xml::XmlNode* node) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::DocumentXPathNavigator*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlDocument*>(), ::i2c::type_of<::System::Xml::XmlNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, document, node);
}
inline void System::Xml::DocumentXPathNavigator::_ctor(::System::Xml::DocumentXPathNavigator* other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::DocumentXPathNavigator*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::DocumentXPathNavigator*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline ::System::Xml::XPath::XPathNavigator* System::Xml::DocumentXPathNavigator::Clone() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::DocumentXPathNavigator*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XPath::XPathNavigator*>(this, ___internal_method);
}
inline ::System::Xml::XmlNameTable* System::Xml::DocumentXPathNavigator::get_NameTable() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::DocumentXPathNavigator*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNameTable*>(this, ___internal_method);
}
inline ::System::Xml::XPath::XPathNodeType System::Xml::DocumentXPathNavigator::get_NodeType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::DocumentXPathNavigator*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XPath::XPathNodeType>(this, ___internal_method);
}
inline ::StringW System::Xml::DocumentXPathNavigator::get_LocalName() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::DocumentXPathNavigator*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Xml::DocumentXPathNavigator::get_NamespaceURI() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::DocumentXPathNavigator*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Xml::DocumentXPathNavigator::get_Prefix() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::DocumentXPathNavigator*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Xml::DocumentXPathNavigator::get_Value() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::DocumentXPathNavigator*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Xml::DocumentXPathNavigator::get_ValueDocument() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::DocumentXPathNavigator*>(), { "get_ValueDocument", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Xml::DocumentXPathNavigator::get_ValueText() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::DocumentXPathNavigator*>(), { "get_ValueText", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Object* System::Xml::DocumentXPathNavigator::get_UnderlyingObject() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::DocumentXPathNavigator*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline bool System::Xml::DocumentXPathNavigator::MoveToNamespace(::StringW name) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::DocumentXPathNavigator*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name);
}
inline bool System::Xml::DocumentXPathNavigator::MoveToFirstNamespace(::System::Xml::XPath::XPathNamespaceScope scope) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::DocumentXPathNavigator*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, scope);
}
inline bool System::Xml::DocumentXPathNavigator::MoveToFirstNamespaceLocal(::System::Xml::XmlAttributeCollection* attributes, ::by_ref<int32_t> index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::DocumentXPathNavigator*>(),
                                                           { "MoveToFirstNamespaceLocal", {}, { ::i2c::type_of<::System::Xml::XmlAttributeCollection*>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, attributes, index);
}
inline bool System::Xml::DocumentXPathNavigator::MoveToFirstNamespaceGlobal(::by_ref<::System::Xml::XmlAttributeCollection*> attributes, ::by_ref<int32_t> index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::DocumentXPathNavigator*>(),
                                              { "MoveToFirstNamespaceGlobal", {}, { ::i2c::type_of<::by_ref<::System::Xml::XmlAttributeCollection*>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, attributes, index);
}
inline bool System::Xml::DocumentXPathNavigator::MoveToNextNamespace(::System::Xml::XPath::XPathNamespaceScope scope) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::DocumentXPathNavigator*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, scope);
}
inline bool System::Xml::DocumentXPathNavigator::MoveToNextNamespaceLocal(::System::Xml::XmlAttributeCollection* attributes, ::by_ref<int32_t> index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::DocumentXPathNavigator*>(),
                                                           { "MoveToNextNamespaceLocal", {}, { ::i2c::type_of<::System::Xml::XmlAttributeCollection*>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, attributes, index);
}
inline bool System::Xml::DocumentXPathNavigator::MoveToNextNamespaceGlobal(::by_ref<::System::Xml::XmlAttributeCollection*> attributes, ::by_ref<int32_t> index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::DocumentXPathNavigator*>(),
                                              { "MoveToNextNamespaceGlobal", {}, { ::i2c::type_of<::by_ref<::System::Xml::XmlAttributeCollection*>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, attributes, index);
}
inline bool System::Xml::DocumentXPathNavigator::PathHasDuplicateNamespace(::System::Xml::XmlElement* top, ::System::Xml::XmlElement* bottom, ::StringW localName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::DocumentXPathNavigator*>(),
                          { "PathHasDuplicateNamespace", {}, { ::i2c::type_of<::System::Xml::XmlElement*>(), ::i2c::type_of<::System::Xml::XmlElement*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, top, bottom, localName);
}
inline ::StringW System::Xml::DocumentXPathNavigator::LookupNamespace(::StringW prefix) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::DocumentXPathNavigator*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, prefix);
}
inline bool System::Xml::DocumentXPathNavigator::MoveToParent() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::DocumentXPathNavigator*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Xml::DocumentXPathNavigator::IsSamePosition(::System::Xml::XPath::XPathNavigator* other) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::DocumentXPathNavigator*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline ::System::Xml::Schema::IXmlSchemaInfo* System::Xml::DocumentXPathNavigator::get_SchemaInfo() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::DocumentXPathNavigator*>(), 34 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::IXmlSchemaInfo*>(this, ___internal_method);
}
inline void System::Xml::DocumentXPathNavigator::ResetPosition(::System::Xml::XmlNode* node) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::DocumentXPathNavigator*>(), { "ResetPosition", {}, { ::i2c::type_of<::System::Xml::XmlNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline bool System::Xml::DocumentXPathNavigator::ResetAttributePosition(::System::Xml::XmlAttribute* attribute, ::System::Xml::XmlAttributeCollection* attributes, ::by_ref<int32_t> index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Xml::DocumentXPathNavigator*>(),
          { "ResetAttributePosition", {}, { ::i2c::type_of<::System::Xml::XmlAttribute*>(), ::i2c::type_of<::System::Xml::XmlAttributeCollection*>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, attribute, attributes, index);
}
inline bool System::Xml::DocumentXPathNavigator::CheckAttributePosition(::System::Xml::XmlAttribute* attribute, ::by_ref<::System::Xml::XmlAttributeCollection*> attributes, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Xml::DocumentXPathNavigator*>(),
          { "CheckAttributePosition", {}, { ::i2c::type_of<::System::Xml::XmlAttribute*>(), ::i2c::type_of<::by_ref<::System::Xml::XmlAttributeCollection*>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, attribute, attributes, index);
}
inline void System::Xml::DocumentXPathNavigator::CalibrateText() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::DocumentXPathNavigator*>(), { "CalibrateText", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::XmlNode* System::Xml::DocumentXPathNavigator::ParentNode(::System::Xml::XmlNode* node) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::DocumentXPathNavigator*>(), { "ParentNode", {}, { ::i2c::type_of<::System::Xml::XmlNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNode*>(this, ___internal_method, node);
}
inline ::System::Xml::XmlNode* System::Xml::DocumentXPathNavigator::ParentNodeTail(::System::Xml::XmlNode* parent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::DocumentXPathNavigator*>(), { "ParentNodeTail", {}, { ::i2c::type_of<::System::Xml::XmlNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNode*>(this, ___internal_method, parent);
}
inline ::System::Xml::XmlNode* System::Xml::DocumentXPathNavigator::NextSibling(::System::Xml::XmlNode* node) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::DocumentXPathNavigator*>(), { "NextSibling", {}, { ::i2c::type_of<::System::Xml::XmlNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNode*>(this, ___internal_method, node);
}
inline ::System::Xml::XmlNode* System::Xml::DocumentXPathNavigator::NextSiblingTail(::System::Xml::XmlNode* node, ::System::Xml::XmlNode* sibling) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::DocumentXPathNavigator*>(),
                                                           { "NextSiblingTail", {}, { ::i2c::type_of<::System::Xml::XmlNode*>(), ::i2c::type_of<::System::Xml::XmlNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNode*>(this, ___internal_method, node, sibling);
}
inline ::System::Xml::XmlNode* System::Xml::DocumentXPathNavigator::PreviousText(::System::Xml::XmlNode* node) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::DocumentXPathNavigator*>(), { "PreviousText", {}, { ::i2c::type_of<::System::Xml::XmlNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNode*>(this, ___internal_method, node);
}
inline ::System::Xml::XmlNode* System::Xml::DocumentXPathNavigator::PreviousTextTail(::System::Xml::XmlNode* node, ::System::Xml::XmlNode* text) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::DocumentXPathNavigator*>(),
                                                           { "PreviousTextTail", {}, { ::i2c::type_of<::System::Xml::XmlNode*>(), ::i2c::type_of<::System::Xml::XmlNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNode*>(this, ___internal_method, node, text);
}
inline ::System::Xml::DocumentXPathNavigator* System::Xml::DocumentXPathNavigator::New_ctor(::System::Xml::XmlDocument* document, ::System::Xml::XmlNode* node) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::DocumentXPathNavigator*>(document, node));
}
inline ::System::Xml::DocumentXPathNavigator* System::Xml::DocumentXPathNavigator::New_ctor(::System::Xml::DocumentXPathNavigator* other) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::DocumentXPathNavigator*>(other));
}
// Ctor Parameters []
constexpr ::System::Xml::DocumentXPathNavigator::DocumentXPathNavigator() {}
