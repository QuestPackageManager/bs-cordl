#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/XmlReaderDelegator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/zzzz__XmlReaderDelegator_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Runtime/Serialization/zzzz__ExtensionDataReader_def.hpp"
#include "System/Runtime/Serialization/zzzz__IDataNode_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlObjectSerializerReadContext_def.hpp"
#include "System/Xml/zzzz__WhitespaceHandling_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryReader_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryString_def.hpp"
#include "System/Xml/zzzz__XmlNamespaceScope_def.hpp"
#include "System/Xml/zzzz__XmlNodeType_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlReaderDelegator::*)(::System::Xml::XmlReader*)>(
    &::System::Runtime::Serialization::XmlReaderDelegator::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x616d5f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.get_UnderlyingReader
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlReader* (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::get_UnderlyingReader)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x616d6a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "get_UnderlyingReader", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.get_UnderlyingExtensionDataReader
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::ExtensionDataReader* (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::get_UnderlyingExtensionDataReader)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x616d6b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "get_UnderlyingExtensionDataReader", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.get_AttributeCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::get_AttributeCount)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x616d730;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "get_AttributeCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.GetAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Serialization::XmlReaderDelegator::*)(::StringW)>(
    &::System::Runtime::Serialization::XmlReaderDelegator::GetAttribute)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x616d760;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "GetAttribute", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.GetAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Serialization::XmlReaderDelegator::*)(::StringW, ::StringW)>(
    &::System::Runtime::Serialization::XmlReaderDelegator::GetAttribute)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x616d790;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(),
                                                                                           { "GetAttribute", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.GetAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Serialization::XmlReaderDelegator::*)(int32_t)>(
    &::System::Runtime::Serialization::XmlReaderDelegator::GetAttribute)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x616d7c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "GetAttribute", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.get_IsEmptyElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(&::System::Runtime::Serialization::XmlReaderDelegator::get_IsEmptyElement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x616d858;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "get_IsEmptyElement", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.IsNamespaceURI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::XmlReaderDelegator::*)(::StringW)>(
    &::System::Runtime::Serialization::XmlReaderDelegator::IsNamespaceURI)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x616d860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "IsNamespaceURI", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.IsLocalName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::XmlReaderDelegator::*)(::StringW)>(&::System::Runtime::Serialization::XmlReaderDelegator::IsLocalName)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x616d8b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "IsLocalName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.IsNamespaceUri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::XmlReaderDelegator::*)(::System::Xml::XmlDictionaryString*)>(
    &::System::Runtime::Serialization::XmlReaderDelegator::IsNamespaceUri)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x616d908;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(),
                                                                                           { "IsNamespaceUri", {}, { ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.IsLocalName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::XmlReaderDelegator::*)(::System::Xml::XmlDictionaryString*)>(
    &::System::Runtime::Serialization::XmlReaderDelegator::IsLocalName)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x616d95c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "IsLocalName", {}, { ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.IndexOfLocalName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Runtime::Serialization::XmlReaderDelegator::*)(
    ::ArrayW<::System::Xml::XmlDictionaryString*>, ::System::Xml::XmlDictionaryString*)>(&::System::Runtime::Serialization::XmlReaderDelegator::IndexOfLocalName)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x616d9b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(),
                                         { "IndexOfLocalName", {}, { ::i2c::type_of<::ArrayW<::System::Xml::XmlDictionaryString*>>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.IsStartElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(&::System::Runtime::Serialization::XmlReaderDelegator::IsStartElement)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x616daa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "IsStartElement", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.IsStartElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::XmlReaderDelegator::*)(::StringW, ::StringW)>(
    &::System::Runtime::Serialization::XmlReaderDelegator::IsStartElement)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x616dad8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(),
                                                                                           { "IsStartElement", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.IsStartElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::XmlReaderDelegator::*)(::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*)>(
    &::System::Runtime::Serialization::XmlReaderDelegator::IsStartElement)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x616db08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(),
                                                { "IsStartElement", {}, { ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.MoveToAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::XmlReaderDelegator::*)(::StringW)>(
    &::System::Runtime::Serialization::XmlReaderDelegator::MoveToAttribute)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x616db70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "MoveToAttribute", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.MoveToAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::XmlReaderDelegator::*)(::StringW, ::StringW)>(
    &::System::Runtime::Serialization::XmlReaderDelegator::MoveToAttribute)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x616dba0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(),
                                                                                           { "MoveToAttribute", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.MoveToAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlReaderDelegator::*)(int32_t)>(
    &::System::Runtime::Serialization::XmlReaderDelegator::MoveToAttribute)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x616dbd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "MoveToAttribute", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.MoveToElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(&::System::Runtime::Serialization::XmlReaderDelegator::MoveToElement)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x616dc60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "MoveToElement", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.MoveToFirstAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(&::System::Runtime::Serialization::XmlReaderDelegator::MoveToFirstAttribute)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x616dc90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "MoveToFirstAttribute", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.MoveToNextAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(&::System::Runtime::Serialization::XmlReaderDelegator::MoveToNextAttribute)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x616dcc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "MoveToNextAttribute", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.get_NodeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNodeType (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::get_NodeType)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x616dcf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "get_NodeType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.Read
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(&::System::Runtime::Serialization::XmlReaderDelegator::Read)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x616dd1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "Read", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.MoveToContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNodeType (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::MoveToContent)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x616dda0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "MoveToContent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadAttributeValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(&::System::Runtime::Serialization::XmlReaderDelegator::ReadAttributeValue)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x616ddd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ReadAttributeValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadEndElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(&::System::Runtime::Serialization::XmlReaderDelegator::ReadEndElement)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x616de00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ReadEndElement", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.CreateInvalidPrimitiveTypeException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (::System::Runtime::Serialization::XmlReaderDelegator::*)(::System::Type*)>(
    &::System::Runtime::Serialization::XmlReaderDelegator::CreateInvalidPrimitiveTypeException)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x616de2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(),
                                                                                           { "CreateInvalidPrimitiveTypeException", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadElementContentAsAnyType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::Serialization::XmlReaderDelegator::*)(::System::Type*)>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ReadElementContentAsAnyType)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x616dfe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ReadElementContentAsAnyType", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadContentAsAnyType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::Serialization::XmlReaderDelegator::*)(::System::Type*)>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ReadContentAsAnyType)> {
  constexpr static std::size_t size = 0x538;
  constexpr static std::size_t addrs = 0x616e020;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ReadContentAsAnyType", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadExtensionData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::IDataNode* (::System::Runtime::Serialization::XmlReaderDelegator::*)(::System::Type*)>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ReadExtensionData)> {
  constexpr static std::size_t size = 0xa88;
  constexpr static std::size_t addrs = 0x616ec10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ReadExtensionData", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ThrowConversionException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlReaderDelegator::*)(::StringW, ::StringW)>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ThrowConversionException)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x616f698;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(),
                                                                                           { "ThrowConversionException", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ThrowNotAtElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(&::System::Runtime::Serialization::XmlReaderDelegator::ThrowNotAtElement)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x616f764;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ThrowNotAtElement", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadElementContentAsChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ReadElementContentAsChar)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x616f80c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadContentAsChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ReadContentAsChar)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x616f8e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ToChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::System::Runtime::Serialization::XmlReaderDelegator::*)(int32_t)>(&::System::Runtime::Serialization::XmlReaderDelegator::ToChar)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x616f858;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ToChar", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadElementContentAsString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ReadElementContentAsString)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x616f8fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ReadElementContentAsString", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadContentAsString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ReadContentAsString)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x616e890;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ReadContentAsString", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadElementContentAsBoolean
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ReadElementContentAsBoolean)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x616f92c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ReadElementContentAsBoolean", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadContentAsBoolean
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(&::System::Runtime::Serialization::XmlReaderDelegator::ReadContentAsBoolean)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x616e558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ReadContentAsBoolean", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadElementContentAsFloat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ReadElementContentAsFloat)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x616f95c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ReadElementContentAsFloat", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadContentAsSingle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ReadContentAsSingle)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x616e710;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ReadContentAsSingle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadElementContentAsDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ReadElementContentAsDouble)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x616f98c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ReadElementContentAsDouble", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadContentAsDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ReadContentAsDouble)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x616e790;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ReadContentAsDouble", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadElementContentAsDecimal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ReadElementContentAsDecimal)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x616f9bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ReadElementContentAsDecimal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadContentAsDecimal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ReadContentAsDecimal)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x616e810;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ReadContentAsDecimal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadElementContentAsBase64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ReadElementContentAsBase64)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x616f9ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadContentAsBase64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ReadContentAsBase64)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x616fbd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadContentAsBase64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Runtime::Serialization::XmlReaderDelegator::*)(::StringW)>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ReadContentAsBase64)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x616fa44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ReadContentAsBase64", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadElementContentAsDateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ReadElementContentAsDateTime)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x616fc70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadContentAsDateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ReadContentAsDateTime)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x616fca0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadElementContentAsInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ReadElementContentAsInt)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x616f828;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ReadElementContentAsInt", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadContentAsInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(&::System::Runtime::Serialization::XmlReaderDelegator::ReadContentAsInt)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x616e610;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ReadContentAsInt", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadElementContentAsLong
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ReadElementContentAsLong)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x616fd20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ReadElementContentAsLong", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadContentAsLong
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(&::System::Runtime::Serialization::XmlReaderDelegator::ReadContentAsLong)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x616e690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ReadContentAsLong", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadElementContentAsShort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ReadElementContentAsShort)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x616fd50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ReadElementContentAsShort", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadContentAsShort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ReadContentAsShort)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x616e5f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ReadContentAsShort", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ToShort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (::System::Runtime::Serialization::XmlReaderDelegator::*)(int32_t)>(&::System::Runtime::Serialization::XmlReaderDelegator::ToShort)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x616fd6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ToShort", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadElementContentAsUnsignedByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ReadElementContentAsUnsignedByte)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x616fdf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ReadElementContentAsUnsignedByte", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadContentAsUnsignedByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ReadContentAsUnsignedByte)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x616e5d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ReadContentAsUnsignedByte", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ToByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::System::Runtime::Serialization::XmlReaderDelegator::*)(int32_t)>(&::System::Runtime::Serialization::XmlReaderDelegator::ToByte)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x616fe10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ToByte", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadElementContentAsSignedByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int8_t (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ReadElementContentAsSignedByte)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x616fe98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ReadElementContentAsSignedByte", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadContentAsSignedByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int8_t (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ReadContentAsSignedByte)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x616e8cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ReadContentAsSignedByte", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ToSByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int8_t (::System::Runtime::Serialization::XmlReaderDelegator::*)(int32_t)>(&::System::Runtime::Serialization::XmlReaderDelegator::ToSByte)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x616feb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ToSByte", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadElementContentAsUnsignedInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ReadElementContentAsUnsignedInt)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x616ff3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ReadElementContentAsUnsignedInt", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadContentAsUnsignedInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ReadContentAsUnsignedInt)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x616e904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ReadContentAsUnsignedInt", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ToUInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::System::Runtime::Serialization::XmlReaderDelegator::*)(int64_t)>(&::System::Runtime::Serialization::XmlReaderDelegator::ToUInt32)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x616ff58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ToUInt32", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadElementContentAsUnsignedLong
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ReadElementContentAsUnsignedLong)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x616ffe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadContentAsUnsignedLong
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ReadContentAsUnsignedLong)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x61700a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadElementContentAsUnsignedShort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ReadElementContentAsUnsignedShort)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6170164;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ReadElementContentAsUnsignedShort", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadContentAsUnsignedShort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ReadContentAsUnsignedShort)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x616e8e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ReadContentAsUnsignedShort", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ToUInt16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::System::Runtime::Serialization::XmlReaderDelegator::*)(int32_t)>(&::System::Runtime::Serialization::XmlReaderDelegator::ToUInt16)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6170180;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ToUInt16", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadElementContentAsTimeSpan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ReadElementContentAsTimeSpan)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6170208;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ReadElementContentAsTimeSpan", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadContentAsTimeSpan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ReadContentAsTimeSpan)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x616e920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ReadContentAsTimeSpan", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadElementContentAsGuid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ReadElementContentAsGuid)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x6170294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ReadElementContentAsGuid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadContentAsGuid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ReadContentAsGuid)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x616e9a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ReadContentAsGuid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadElementContentAsUri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Uri* (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ReadElementContentAsUri)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x61703cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ReadElementContentAsUri", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadContentAsUri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Uri* (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ReadContentAsUri)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x616eacc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ReadContentAsUri", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadElementContentAsQName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlQualifiedName* (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ReadElementContentAsQName)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x617051c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ReadElementContentAsQName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadContentAsQName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlQualifiedName* (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ReadContentAsQName)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6170558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ParseQualifiedName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlQualifiedName* (::System::Runtime::Serialization::XmlReaderDelegator::*)(::StringW)>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ParseQualifiedName)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6170574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ParseQualifiedName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.CheckExpectedArrayLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlReaderDelegator::*)(::System::Runtime::Serialization::XmlObjectSerializerReadContext*, int32_t)>(
    &::System::Runtime::Serialization::XmlReaderDelegator::CheckExpectedArrayLength)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x617063c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(),
                                         { "CheckExpectedArrayLength", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.GetArrayLengthQuota
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Runtime::Serialization::XmlReaderDelegator::*)(::System::Runtime::Serialization::XmlObjectSerializerReadContext*)>(
    &::System::Runtime::Serialization::XmlReaderDelegator::GetArrayLengthQuota)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6170658;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(),
                                                             { "GetArrayLengthQuota", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.CheckActualArrayLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlReaderDelegator::*)(
    int32_t, int32_t, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*)>(&::System::Runtime::Serialization::XmlReaderDelegator::CheckActualArrayLength)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6170720;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(),
                                                             { "CheckActualArrayLength",
                                                               {},
                                                               { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(),
                                                                 ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.TryReadBooleanArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::XmlReaderDelegator::*)(
    ::System::Runtime::Serialization::XmlObjectSerializerReadContext*, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*, int32_t, ::by_ref<::ArrayW<bool>>)>(
    &::System::Runtime::Serialization::XmlReaderDelegator::TryReadBooleanArray)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x6170820;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(),
                                                { "TryReadBooleanArray",
                                                  {},
                                                  { ::i2c::type_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(),
                                                    ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::ArrayW<bool>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.TryReadDateTimeArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::XmlReaderDelegator::*)(
    ::System::Runtime::Serialization::XmlObjectSerializerReadContext*, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*, int32_t, ::by_ref<::ArrayW<::System::DateTime>>)>(
    &::System::Runtime::Serialization::XmlReaderDelegator::TryReadDateTimeArray)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x61709d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(),
                                                { "TryReadDateTimeArray",
                                                  {},
                                                  { ::i2c::type_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(),
                                                    ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::ArrayW<::System::DateTime>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.TryReadDecimalArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::XmlReaderDelegator::*)(
    ::System::Runtime::Serialization::XmlObjectSerializerReadContext*, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*, int32_t, ::by_ref<::ArrayW<::System::Decimal>>)>(
    &::System::Runtime::Serialization::XmlReaderDelegator::TryReadDecimalArray)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x6170b90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(),
                                                { "TryReadDecimalArray",
                                                  {},
                                                  { ::i2c::type_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(),
                                                    ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::ArrayW<::System::Decimal>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.TryReadInt32Array
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::XmlReaderDelegator::*)(
    ::System::Runtime::Serialization::XmlObjectSerializerReadContext*, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*, int32_t, ::by_ref<::ArrayW<int32_t>>)>(
    &::System::Runtime::Serialization::XmlReaderDelegator::TryReadInt32Array)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x6170d48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(),
                                                { "TryReadInt32Array",
                                                  {},
                                                  { ::i2c::type_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(),
                                                    ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::ArrayW<int32_t>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.TryReadInt64Array
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::XmlReaderDelegator::*)(
    ::System::Runtime::Serialization::XmlObjectSerializerReadContext*, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*, int32_t, ::by_ref<::ArrayW<int64_t>>)>(
    &::System::Runtime::Serialization::XmlReaderDelegator::TryReadInt64Array)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x6170f00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(),
                                                { "TryReadInt64Array",
                                                  {},
                                                  { ::i2c::type_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(),
                                                    ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::ArrayW<int64_t>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.TryReadSingleArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::XmlReaderDelegator::*)(
    ::System::Runtime::Serialization::XmlObjectSerializerReadContext*, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*, int32_t, ::by_ref<::ArrayW<float_t>>)>(
    &::System::Runtime::Serialization::XmlReaderDelegator::TryReadSingleArray)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x61710b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(),
                                                { "TryReadSingleArray",
                                                  {},
                                                  { ::i2c::type_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(),
                                                    ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::ArrayW<float_t>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.TryReadDoubleArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::XmlReaderDelegator::*)(
    ::System::Runtime::Serialization::XmlObjectSerializerReadContext*, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*, int32_t, ::by_ref<::ArrayW<double_t>>)>(
    &::System::Runtime::Serialization::XmlReaderDelegator::TryReadDoubleArray)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x6171270;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(),
                                                { "TryReadDoubleArray",
                                                  {},
                                                  { ::i2c::type_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(),
                                                    ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::ArrayW<double_t>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.GetNamespacesInScope
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* (
    ::System::Runtime::Serialization::XmlReaderDelegator::*)(::System::Xml::XmlNamespaceScope)>(&::System::Runtime::Serialization::XmlReaderDelegator::GetNamespacesInScope)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x6171428;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(),
                                                                                           { "GetNamespacesInScope", {}, { ::i2c::type_of<::System::Xml::XmlNamespaceScope>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.HasLineInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(&::System::Runtime::Serialization::XmlReaderDelegator::HasLineInfo)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6171540;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "HasLineInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.get_LineNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(&::System::Runtime::Serialization::XmlReaderDelegator::get_LineNumber)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x61715f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "get_LineNumber", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.get_LinePosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(&::System::Runtime::Serialization::XmlReaderDelegator::get_LinePosition)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x61716b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "get_LinePosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.get_Normalized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(&::System::Runtime::Serialization::XmlReaderDelegator::get_Normalized)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x6171770;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "get_Normalized", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.set_Normalized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlReaderDelegator::*)(bool)>(&::System::Runtime::Serialization::XmlReaderDelegator::set_Normalized)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x6171888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "set_Normalized", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.get_WhitespaceHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::WhitespaceHandling (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::get_WhitespaceHandling)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x61719c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "get_WhitespaceHandling", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.set_WhitespaceHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlReaderDelegator::*)(::System::Xml::WhitespaceHandling)>(
    &::System::Runtime::Serialization::XmlReaderDelegator::set_WhitespaceHandling)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x6171ae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(),
                                                                                           { "set_WhitespaceHandling", {}, { ::i2c::type_of<::System::Xml::WhitespaceHandling>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(&::System::Runtime::Serialization::XmlReaderDelegator::get_Name)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6171c1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "get_Name", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.get_LocalName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(&::System::Runtime::Serialization::XmlReaderDelegator::get_LocalName)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x616da8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "get_LocalName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.get_NamespaceURI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::get_NamespaceURI)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6171c38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "get_NamespaceURI", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(&::System::Runtime::Serialization::XmlReaderDelegator::get_Value)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6171c54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "get_Value", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.get_ValueType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::get_ValueType)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6171c70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "get_ValueType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.get_Depth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(&::System::Runtime::Serialization::XmlReaderDelegator::get_Depth)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6171c90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "get_Depth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.LookupNamespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Serialization::XmlReaderDelegator::*)(::StringW)>(
    &::System::Runtime::Serialization::XmlReaderDelegator::LookupNamespace)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6171cac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "LookupNamespace", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.get_EOF
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(&::System::Runtime::Serialization::XmlReaderDelegator::get_EOF)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6171ccc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "get_EOF", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.Skip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(&::System::Runtime::Serialization::XmlReaderDelegator::Skip)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6171cec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "Skip", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlReader*& System::Runtime::Serialization::XmlReaderDelegator::__cordl_internal_get_reader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reader;
}
constexpr ::System::Xml::XmlReader* const& System::Runtime::Serialization::XmlReaderDelegator::__cordl_internal_get_reader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reader;
}
constexpr void System::Runtime::Serialization::XmlReaderDelegator::__cordl_internal_set_reader(::System::Xml::XmlReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___reader = value;
}
constexpr ::System::Xml::XmlDictionaryReader*& System::Runtime::Serialization::XmlReaderDelegator::__cordl_internal_get_dictionaryReader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dictionaryReader;
}
constexpr ::System::Xml::XmlDictionaryReader* const& System::Runtime::Serialization::XmlReaderDelegator::__cordl_internal_get_dictionaryReader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dictionaryReader;
}
constexpr void System::Runtime::Serialization::XmlReaderDelegator::__cordl_internal_set_dictionaryReader(::System::Xml::XmlDictionaryReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dictionaryReader = value;
}
constexpr bool& System::Runtime::Serialization::XmlReaderDelegator::__cordl_internal_get_isEndOfEmptyElement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isEndOfEmptyElement;
}
constexpr bool const& System::Runtime::Serialization::XmlReaderDelegator::__cordl_internal_get_isEndOfEmptyElement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isEndOfEmptyElement;
}
constexpr void System::Runtime::Serialization::XmlReaderDelegator::__cordl_internal_set_isEndOfEmptyElement(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isEndOfEmptyElement = value;
}
inline void System::Runtime::Serialization::XmlReaderDelegator::_ctor(::System::Xml::XmlReader* reader) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
inline ::System::Xml::XmlReader* System::Runtime::Serialization::XmlReaderDelegator::get_UnderlyingReader() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "get_UnderlyingReader", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlReader*>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::ExtensionDataReader* System::Runtime::Serialization::XmlReaderDelegator::get_UnderlyingExtensionDataReader() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "get_UnderlyingExtensionDataReader", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::ExtensionDataReader*>(this, ___internal_method);
}
inline int32_t System::Runtime::Serialization::XmlReaderDelegator::get_AttributeCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "get_AttributeCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW System::Runtime::Serialization::XmlReaderDelegator::GetAttribute(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "GetAttribute", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, name);
}
inline ::StringW System::Runtime::Serialization::XmlReaderDelegator::GetAttribute(::StringW name, ::StringW namespaceUri) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(),
                                                                                         { "GetAttribute", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, name, namespaceUri);
}
inline ::StringW System::Runtime::Serialization::XmlReaderDelegator::GetAttribute(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "GetAttribute", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, i);
}
inline bool System::Runtime::Serialization::XmlReaderDelegator::get_IsEmptyElement() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "get_IsEmptyElement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::XmlReaderDelegator::IsNamespaceURI(::StringW ns) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "IsNamespaceURI", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ns);
}
inline bool System::Runtime::Serialization::XmlReaderDelegator::IsLocalName(::StringW localName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "IsLocalName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, localName);
}
inline bool System::Runtime::Serialization::XmlReaderDelegator::IsNamespaceUri(::System::Xml::XmlDictionaryString* ns) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "IsNamespaceUri", {}, { ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ns);
}
inline bool System::Runtime::Serialization::XmlReaderDelegator::IsLocalName(::System::Xml::XmlDictionaryString* localName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "IsLocalName", {}, { ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, localName);
}
inline int32_t System::Runtime::Serialization::XmlReaderDelegator::IndexOfLocalName(::ArrayW<::System::Xml::XmlDictionaryString*> localNames, ::System::Xml::XmlDictionaryString* ns) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(),
                                              { "IndexOfLocalName", {}, { ::i2c::type_of<::ArrayW<::System::Xml::XmlDictionaryString*>>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, localNames, ns);
}
inline bool System::Runtime::Serialization::XmlReaderDelegator::IsStartElement() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "IsStartElement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::XmlReaderDelegator::IsStartElement(::StringW localname, ::StringW ns) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(),
                                                                                         { "IsStartElement", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, localname, ns);
}
inline bool System::Runtime::Serialization::XmlReaderDelegator::IsStartElement(::System::Xml::XmlDictionaryString* localname, ::System::Xml::XmlDictionaryString* ns) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(),
                                              { "IsStartElement", {}, { ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, localname, ns);
}
inline bool System::Runtime::Serialization::XmlReaderDelegator::MoveToAttribute(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "MoveToAttribute", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name);
}
inline bool System::Runtime::Serialization::XmlReaderDelegator::MoveToAttribute(::StringW name, ::StringW ns) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(),
                                                                                         { "MoveToAttribute", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name, ns);
}
inline void System::Runtime::Serialization::XmlReaderDelegator::MoveToAttribute(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "MoveToAttribute", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, i);
}
inline bool System::Runtime::Serialization::XmlReaderDelegator::MoveToElement() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "MoveToElement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::XmlReaderDelegator::MoveToFirstAttribute() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "MoveToFirstAttribute", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::XmlReaderDelegator::MoveToNextAttribute() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "MoveToNextAttribute", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Xml::XmlNodeType System::Runtime::Serialization::XmlReaderDelegator::get_NodeType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "get_NodeType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNodeType>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::XmlReaderDelegator::Read() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "Read", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Xml::XmlNodeType System::Runtime::Serialization::XmlReaderDelegator::MoveToContent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "MoveToContent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNodeType>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::XmlReaderDelegator::ReadAttributeValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ReadAttributeValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Runtime::Serialization::XmlReaderDelegator::ReadEndElement() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ReadEndElement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Exception* System::Runtime::Serialization::XmlReaderDelegator::CreateInvalidPrimitiveTypeException(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(),
                                                                                         { "CreateInvalidPrimitiveTypeException", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(this, ___internal_method, type);
}
inline ::System::Object* System::Runtime::Serialization::XmlReaderDelegator::ReadElementContentAsAnyType(::System::Type* valueType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ReadElementContentAsAnyType", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, valueType);
}
inline ::System::Object* System::Runtime::Serialization::XmlReaderDelegator::ReadContentAsAnyType(::System::Type* valueType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ReadContentAsAnyType", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, valueType);
}
inline ::System::Runtime::Serialization::IDataNode* System::Runtime::Serialization::XmlReaderDelegator::ReadExtensionData(::System::Type* valueType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ReadExtensionData", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::IDataNode*>(this, ___internal_method, valueType);
}
inline void System::Runtime::Serialization::XmlReaderDelegator::ThrowConversionException(::StringW value, ::StringW type) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(),
                                                                                         { "ThrowConversionException", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, type);
}
inline void System::Runtime::Serialization::XmlReaderDelegator::ThrowNotAtElement() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ThrowNotAtElement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline char16_t System::Runtime::Serialization::XmlReaderDelegator::ReadElementContentAsChar() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(this, ___internal_method);
}
inline char16_t System::Runtime::Serialization::XmlReaderDelegator::ReadContentAsChar() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(this, ___internal_method);
}
inline char16_t System::Runtime::Serialization::XmlReaderDelegator::ToChar(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ToChar", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(this, ___internal_method, value);
}
inline ::StringW System::Runtime::Serialization::XmlReaderDelegator::ReadElementContentAsString() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ReadElementContentAsString", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Runtime::Serialization::XmlReaderDelegator::ReadContentAsString() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ReadContentAsString", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::XmlReaderDelegator::ReadElementContentAsBoolean() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ReadElementContentAsBoolean", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::XmlReaderDelegator::ReadContentAsBoolean() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ReadContentAsBoolean", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t System::Runtime::Serialization::XmlReaderDelegator::ReadElementContentAsFloat() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ReadElementContentAsFloat", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t System::Runtime::Serialization::XmlReaderDelegator::ReadContentAsSingle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ReadContentAsSingle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline double_t System::Runtime::Serialization::XmlReaderDelegator::ReadElementContentAsDouble() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ReadElementContentAsDouble", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline double_t System::Runtime::Serialization::XmlReaderDelegator::ReadContentAsDouble() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ReadContentAsDouble", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline ::System::Decimal System::Runtime::Serialization::XmlReaderDelegator::ReadElementContentAsDecimal() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ReadElementContentAsDecimal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal>(this, ___internal_method);
}
inline ::System::Decimal System::Runtime::Serialization::XmlReaderDelegator::ReadContentAsDecimal() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ReadContentAsDecimal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> System::Runtime::Serialization::XmlReaderDelegator::ReadElementContentAsBase64() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> System::Runtime::Serialization::XmlReaderDelegator::ReadContentAsBase64() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> System::Runtime::Serialization::XmlReaderDelegator::ReadContentAsBase64(::StringW str) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ReadContentAsBase64", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, str);
}
inline ::System::DateTime System::Runtime::Serialization::XmlReaderDelegator::ReadElementContentAsDateTime() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline ::System::DateTime System::Runtime::Serialization::XmlReaderDelegator::ReadContentAsDateTime() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline int32_t System::Runtime::Serialization::XmlReaderDelegator::ReadElementContentAsInt() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ReadElementContentAsInt", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Runtime::Serialization::XmlReaderDelegator::ReadContentAsInt() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ReadContentAsInt", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int64_t System::Runtime::Serialization::XmlReaderDelegator::ReadElementContentAsLong() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ReadElementContentAsLong", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t System::Runtime::Serialization::XmlReaderDelegator::ReadContentAsLong() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ReadContentAsLong", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int16_t System::Runtime::Serialization::XmlReaderDelegator::ReadElementContentAsShort() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ReadElementContentAsShort", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int16_t>(this, ___internal_method);
}
inline int16_t System::Runtime::Serialization::XmlReaderDelegator::ReadContentAsShort() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ReadContentAsShort", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int16_t>(this, ___internal_method);
}
inline int16_t System::Runtime::Serialization::XmlReaderDelegator::ToShort(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ToShort", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int16_t>(this, ___internal_method, value);
}
inline uint8_t System::Runtime::Serialization::XmlReaderDelegator::ReadElementContentAsUnsignedByte() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ReadElementContentAsUnsignedByte", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method);
}
inline uint8_t System::Runtime::Serialization::XmlReaderDelegator::ReadContentAsUnsignedByte() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ReadContentAsUnsignedByte", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method);
}
inline uint8_t System::Runtime::Serialization::XmlReaderDelegator::ToByte(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ToByte", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method, value);
}
inline int8_t System::Runtime::Serialization::XmlReaderDelegator::ReadElementContentAsSignedByte() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ReadElementContentAsSignedByte", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int8_t>(this, ___internal_method);
}
inline int8_t System::Runtime::Serialization::XmlReaderDelegator::ReadContentAsSignedByte() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ReadContentAsSignedByte", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int8_t>(this, ___internal_method);
}
inline int8_t System::Runtime::Serialization::XmlReaderDelegator::ToSByte(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ToSByte", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int8_t>(this, ___internal_method, value);
}
inline uint32_t System::Runtime::Serialization::XmlReaderDelegator::ReadElementContentAsUnsignedInt() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ReadElementContentAsUnsignedInt", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline uint32_t System::Runtime::Serialization::XmlReaderDelegator::ReadContentAsUnsignedInt() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ReadContentAsUnsignedInt", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline uint32_t System::Runtime::Serialization::XmlReaderDelegator::ToUInt32(int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ToUInt32", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, value);
}
inline uint64_t System::Runtime::Serialization::XmlReaderDelegator::ReadElementContentAsUnsignedLong() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method);
}
inline uint64_t System::Runtime::Serialization::XmlReaderDelegator::ReadContentAsUnsignedLong() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method);
}
inline uint16_t System::Runtime::Serialization::XmlReaderDelegator::ReadElementContentAsUnsignedShort() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ReadElementContentAsUnsignedShort", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint16_t>(this, ___internal_method);
}
inline uint16_t System::Runtime::Serialization::XmlReaderDelegator::ReadContentAsUnsignedShort() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ReadContentAsUnsignedShort", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint16_t>(this, ___internal_method);
}
inline uint16_t System::Runtime::Serialization::XmlReaderDelegator::ToUInt16(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ToUInt16", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint16_t>(this, ___internal_method, value);
}
inline ::System::TimeSpan System::Runtime::Serialization::XmlReaderDelegator::ReadElementContentAsTimeSpan() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ReadElementContentAsTimeSpan", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(this, ___internal_method);
}
inline ::System::TimeSpan System::Runtime::Serialization::XmlReaderDelegator::ReadContentAsTimeSpan() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ReadContentAsTimeSpan", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(this, ___internal_method);
}
inline ::System::Guid System::Runtime::Serialization::XmlReaderDelegator::ReadElementContentAsGuid() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ReadElementContentAsGuid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Guid>(this, ___internal_method);
}
inline ::System::Guid System::Runtime::Serialization::XmlReaderDelegator::ReadContentAsGuid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ReadContentAsGuid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Guid>(this, ___internal_method);
}
inline ::System::Uri* System::Runtime::Serialization::XmlReaderDelegator::ReadElementContentAsUri() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ReadElementContentAsUri", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Uri*>(this, ___internal_method);
}
inline ::System::Uri* System::Runtime::Serialization::XmlReaderDelegator::ReadContentAsUri() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ReadContentAsUri", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Uri*>(this, ___internal_method);
}
inline ::System::Xml::XmlQualifiedName* System::Runtime::Serialization::XmlReaderDelegator::ReadElementContentAsQName() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ReadElementContentAsQName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlQualifiedName*>(this, ___internal_method);
}
inline ::System::Xml::XmlQualifiedName* System::Runtime::Serialization::XmlReaderDelegator::ReadContentAsQName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlQualifiedName*>(this, ___internal_method);
}
inline ::System::Xml::XmlQualifiedName* System::Runtime::Serialization::XmlReaderDelegator::ParseQualifiedName(::StringW str) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "ParseQualifiedName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlQualifiedName*>(this, ___internal_method, str);
}
inline void System::Runtime::Serialization::XmlReaderDelegator::CheckExpectedArrayLength(::System::Runtime::Serialization::XmlObjectSerializerReadContext* context, int32_t arrayLength) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(),
                                              { "CheckExpectedArrayLength", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, arrayLength);
}
inline int32_t System::Runtime::Serialization::XmlReaderDelegator::GetArrayLengthQuota(::System::Runtime::Serialization::XmlObjectSerializerReadContext* context) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(),
                                                           { "GetArrayLengthQuota", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, context);
}
inline void System::Runtime::Serialization::XmlReaderDelegator::CheckActualArrayLength(int32_t expectedLength, int32_t actualLength, ::System::Xml::XmlDictionaryString* itemName,
                                                                                       ::System::Xml::XmlDictionaryString* itemNamespace) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(),
                          { "CheckActualArrayLength",
                            {},
                            { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, expectedLength, actualLength, itemName, itemNamespace);
}
inline bool System::Runtime::Serialization::XmlReaderDelegator::TryReadBooleanArray(::System::Runtime::Serialization::XmlObjectSerializerReadContext* context,
                                                                                    ::System::Xml::XmlDictionaryString* itemName, ::System::Xml::XmlDictionaryString* itemNamespace,
                                                                                    int32_t arrayLength, ::by_ref<::ArrayW<bool>> array) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(),
                                              { "TryReadBooleanArray",
                                                {},
                                                { ::i2c::type_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(),
                                                  ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::ArrayW<bool>>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, context, itemName, itemNamespace, arrayLength, array);
}
inline bool System::Runtime::Serialization::XmlReaderDelegator::TryReadDateTimeArray(::System::Runtime::Serialization::XmlObjectSerializerReadContext* context,
                                                                                     ::System::Xml::XmlDictionaryString* itemName, ::System::Xml::XmlDictionaryString* itemNamespace,
                                                                                     int32_t arrayLength, ::by_ref<::ArrayW<::System::DateTime>> array) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(),
                                              { "TryReadDateTimeArray",
                                                {},
                                                { ::i2c::type_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(),
                                                  ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::ArrayW<::System::DateTime>>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, context, itemName, itemNamespace, arrayLength, array);
}
inline bool System::Runtime::Serialization::XmlReaderDelegator::TryReadDecimalArray(::System::Runtime::Serialization::XmlObjectSerializerReadContext* context,
                                                                                    ::System::Xml::XmlDictionaryString* itemName, ::System::Xml::XmlDictionaryString* itemNamespace,
                                                                                    int32_t arrayLength, ::by_ref<::ArrayW<::System::Decimal>> array) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(),
                                              { "TryReadDecimalArray",
                                                {},
                                                { ::i2c::type_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(),
                                                  ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::ArrayW<::System::Decimal>>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, context, itemName, itemNamespace, arrayLength, array);
}
inline bool System::Runtime::Serialization::XmlReaderDelegator::TryReadInt32Array(::System::Runtime::Serialization::XmlObjectSerializerReadContext* context,
                                                                                  ::System::Xml::XmlDictionaryString* itemName, ::System::Xml::XmlDictionaryString* itemNamespace, int32_t arrayLength,
                                                                                  ::by_ref<::ArrayW<int32_t>> array) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(),
                                              { "TryReadInt32Array",
                                                {},
                                                { ::i2c::type_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(),
                                                  ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::ArrayW<int32_t>>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, context, itemName, itemNamespace, arrayLength, array);
}
inline bool System::Runtime::Serialization::XmlReaderDelegator::TryReadInt64Array(::System::Runtime::Serialization::XmlObjectSerializerReadContext* context,
                                                                                  ::System::Xml::XmlDictionaryString* itemName, ::System::Xml::XmlDictionaryString* itemNamespace, int32_t arrayLength,
                                                                                  ::by_ref<::ArrayW<int64_t>> array) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(),
                                              { "TryReadInt64Array",
                                                {},
                                                { ::i2c::type_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(),
                                                  ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::ArrayW<int64_t>>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, context, itemName, itemNamespace, arrayLength, array);
}
inline bool System::Runtime::Serialization::XmlReaderDelegator::TryReadSingleArray(::System::Runtime::Serialization::XmlObjectSerializerReadContext* context,
                                                                                   ::System::Xml::XmlDictionaryString* itemName, ::System::Xml::XmlDictionaryString* itemNamespace, int32_t arrayLength,
                                                                                   ::by_ref<::ArrayW<float_t>> array) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(),
                                              { "TryReadSingleArray",
                                                {},
                                                { ::i2c::type_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(),
                                                  ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::ArrayW<float_t>>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, context, itemName, itemNamespace, arrayLength, array);
}
inline bool System::Runtime::Serialization::XmlReaderDelegator::TryReadDoubleArray(::System::Runtime::Serialization::XmlObjectSerializerReadContext* context,
                                                                                   ::System::Xml::XmlDictionaryString* itemName, ::System::Xml::XmlDictionaryString* itemNamespace, int32_t arrayLength,
                                                                                   ::by_ref<::ArrayW<double_t>> array) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(),
                                              { "TryReadDoubleArray",
                                                {},
                                                { ::i2c::type_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(),
                                                  ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::ArrayW<double_t>>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, context, itemName, itemNamespace, arrayLength, array);
}
inline ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* System::Runtime::Serialization::XmlReaderDelegator::GetNamespacesInScope(::System::Xml::XmlNamespaceScope scope) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(),
                                                                                         { "GetNamespacesInScope", {}, { ::i2c::type_of<::System::Xml::XmlNamespaceScope>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*>(this, ___internal_method, scope);
}
inline bool System::Runtime::Serialization::XmlReaderDelegator::HasLineInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "HasLineInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t System::Runtime::Serialization::XmlReaderDelegator::get_LineNumber() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "get_LineNumber", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Runtime::Serialization::XmlReaderDelegator::get_LinePosition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "get_LinePosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::XmlReaderDelegator::get_Normalized() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "get_Normalized", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Runtime::Serialization::XmlReaderDelegator::set_Normalized(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "set_Normalized", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Xml::WhitespaceHandling System::Runtime::Serialization::XmlReaderDelegator::get_WhitespaceHandling() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "get_WhitespaceHandling", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::WhitespaceHandling>(this, ___internal_method);
}
inline void System::Runtime::Serialization::XmlReaderDelegator::set_WhitespaceHandling(::System::Xml::WhitespaceHandling value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(),
                                                                                         { "set_WhitespaceHandling", {}, { ::i2c::type_of<::System::Xml::WhitespaceHandling>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW System::Runtime::Serialization::XmlReaderDelegator::get_Name() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "get_Name", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Runtime::Serialization::XmlReaderDelegator::get_LocalName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "get_LocalName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Runtime::Serialization::XmlReaderDelegator::get_NamespaceURI() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "get_NamespaceURI", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Runtime::Serialization::XmlReaderDelegator::get_Value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Type* System::Runtime::Serialization::XmlReaderDelegator::get_ValueType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "get_ValueType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline int32_t System::Runtime::Serialization::XmlReaderDelegator::get_Depth() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "get_Depth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW System::Runtime::Serialization::XmlReaderDelegator::LookupNamespace(::StringW prefix) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "LookupNamespace", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, prefix);
}
inline bool System::Runtime::Serialization::XmlReaderDelegator::get_EOF() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "get_EOF", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Runtime::Serialization::XmlReaderDelegator::Skip() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), { "Skip", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::XmlReaderDelegator* System::Runtime::Serialization::XmlReaderDelegator::New_ctor(::System::Xml::XmlReader* reader) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::XmlReaderDelegator*>(reader));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::XmlReaderDelegator::XmlReaderDelegator() {}
