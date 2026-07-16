#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Converters/XmlNodeConverter.hpp"
#include "Newtonsoft/Json/zzzz__JsonConverter_impl.hpp"
#include "Newtonsoft/Json/Converters/zzzz__XmlNodeConverter_def.hpp"
#include "Newtonsoft/Json/Converters/zzzz__IXmlDocument_def.hpp"
#include "Newtonsoft/Json/Converters/zzzz__IXmlElement_def.hpp"
#include "Newtonsoft/Json/Converters/zzzz__IXmlNode_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonSerializer_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonWriter_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Xml/zzzz__XmlNamespaceManager_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XmlNodeConverter.get_DeserializeRootElementName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::Converters::XmlNodeConverter::*)()>(
    &::Newtonsoft::Json::Converters::XmlNodeConverter::get_DeserializeRootElementName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5da0758;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlNodeConverter*>(), { "get_DeserializeRootElementName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XmlNodeConverter.set_DeserializeRootElementName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Converters::XmlNodeConverter::*)(::StringW)>(
    &::Newtonsoft::Json::Converters::XmlNodeConverter::set_DeserializeRootElementName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5da0760;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlNodeConverter*>(), { "set_DeserializeRootElementName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XmlNodeConverter.get_WriteArrayAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Converters::XmlNodeConverter::*)()>(&::Newtonsoft::Json::Converters::XmlNodeConverter::get_WriteArrayAttribute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5da0768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlNodeConverter*>(), { "get_WriteArrayAttribute", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XmlNodeConverter.set_WriteArrayAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Converters::XmlNodeConverter::*)(bool)>(&::Newtonsoft::Json::Converters::XmlNodeConverter::set_WriteArrayAttribute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5da0770;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlNodeConverter*>(), { "set_WriteArrayAttribute", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XmlNodeConverter.get_OmitRootObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Converters::XmlNodeConverter::*)()>(&::Newtonsoft::Json::Converters::XmlNodeConverter::get_OmitRootObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5da0778;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlNodeConverter*>(), { "get_OmitRootObject", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XmlNodeConverter.set_OmitRootObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Converters::XmlNodeConverter::*)(bool)>(&::Newtonsoft::Json::Converters::XmlNodeConverter::set_OmitRootObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5da0780;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlNodeConverter*>(), { "set_OmitRootObject", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XmlNodeConverter.get_EncodeSpecialCharacters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Converters::XmlNodeConverter::*)()>(&::Newtonsoft::Json::Converters::XmlNodeConverter::get_EncodeSpecialCharacters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5da0788;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlNodeConverter*>(), { "get_EncodeSpecialCharacters", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XmlNodeConverter.set_EncodeSpecialCharacters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Converters::XmlNodeConverter::*)(bool)>(
    &::Newtonsoft::Json::Converters::XmlNodeConverter::set_EncodeSpecialCharacters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5da0790;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlNodeConverter*>(), { "set_EncodeSpecialCharacters", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XmlNodeConverter.WriteJson
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Converters::XmlNodeConverter::*)(
    ::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*)>(&::Newtonsoft::Json::Converters::XmlNodeConverter::WriteJson)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5da0798;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlNodeConverter*>(), { ::i2c::class_of<::Newtonsoft::Json::Converters::XmlNodeConverter*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XmlNodeConverter.WrapXml
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Converters::IXmlNode* (::Newtonsoft::Json::Converters::XmlNodeConverter::*)(::System::Object*)>(
    &::Newtonsoft::Json::Converters::XmlNodeConverter::WrapXml)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5da08e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlNodeConverter*>(), { "WrapXml", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XmlNodeConverter.PushParentNamespaces
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Converters::XmlNodeConverter::*)(::Newtonsoft::Json::Converters::IXmlNode*, ::System::Xml::XmlNamespaceManager*)>(
    &::Newtonsoft::Json::Converters::XmlNodeConverter::PushParentNamespaces)> {
  constexpr static std::size_t size = 0x5c4;
  constexpr static std::size_t addrs = 0x5da0a04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlNodeConverter*>(),
                                         { "PushParentNamespaces", {}, { ::i2c::type_of<::Newtonsoft::Json::Converters::IXmlNode*>(), ::i2c::type_of<::System::Xml::XmlNamespaceManager*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XmlNodeConverter.ResolveFullName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::Converters::XmlNodeConverter::*)(::Newtonsoft::Json::Converters::IXmlNode*, ::System::Xml::XmlNamespaceManager*)>(
    &::Newtonsoft::Json::Converters::XmlNodeConverter::ResolveFullName)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x5da2690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlNodeConverter*>(),
                                                { "ResolveFullName", {}, { ::i2c::type_of<::Newtonsoft::Json::Converters::IXmlNode*>(), ::i2c::type_of<::System::Xml::XmlNamespaceManager*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XmlNodeConverter.GetPropertyName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::Converters::XmlNodeConverter::*)(::Newtonsoft::Json::Converters::IXmlNode*, ::System::Xml::XmlNamespaceManager*)>(
    &::Newtonsoft::Json::Converters::XmlNodeConverter::GetPropertyName)> {
  constexpr static std::size_t size = 0x4d0;
  constexpr static std::size_t addrs = 0x5da2a20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlNodeConverter*>(),
                                                { "GetPropertyName", {}, { ::i2c::type_of<::Newtonsoft::Json::Converters::IXmlNode*>(), ::i2c::type_of<::System::Xml::XmlNamespaceManager*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XmlNodeConverter.IsArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Converters::XmlNodeConverter::*)(::Newtonsoft::Json::Converters::IXmlNode*)>(
    &::Newtonsoft::Json::Converters::XmlNodeConverter::IsArray)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x5da2ef0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlNodeConverter*>(), { "IsArray", {}, { ::i2c::type_of<::Newtonsoft::Json::Converters::IXmlNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XmlNodeConverter.SerializeGroupedNodes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Converters::XmlNodeConverter::*)(
    ::Newtonsoft::Json::JsonWriter*, ::Newtonsoft::Json::Converters::IXmlNode*, ::System::Xml::XmlNamespaceManager*, bool)>(&::Newtonsoft::Json::Converters::XmlNodeConverter::SerializeGroupedNodes)> {
  constexpr static std::size_t size = 0x9b4;
  constexpr static std::size_t addrs = 0x5da3234;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlNodeConverter*>(),
                                                             { "SerializeGroupedNodes",
                                                               {},
                                                               { ::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::Newtonsoft::Json::Converters::IXmlNode*>(),
                                                                 ::i2c::type_of<::System::Xml::XmlNamespaceManager*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XmlNodeConverter.WriteGroupedNodes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Converters::XmlNodeConverter::*)(
    ::Newtonsoft::Json::JsonWriter*, ::System::Xml::XmlNamespaceManager*, bool, ::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>*, ::StringW)>(
    &::Newtonsoft::Json::Converters::XmlNodeConverter::WriteGroupedNodes)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5da3be8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlNodeConverter*>(),
                                                { "WriteGroupedNodes",
                                                  {},
                                                  { ::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::System::Xml::XmlNamespaceManager*>(), ::i2c::type_of<bool>(),
                                                    ::i2c::type_of<::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XmlNodeConverter.WriteGroupedNodes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Converters::XmlNodeConverter::*)(::Newtonsoft::Json::JsonWriter*, ::System::Xml::XmlNamespaceManager*, bool,
                                                                                                                  ::Newtonsoft::Json::Converters::IXmlNode*, ::StringW)>(
    &::Newtonsoft::Json::Converters::XmlNodeConverter::WriteGroupedNodes)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5da3d70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlNodeConverter*>(),
                                                             { "WriteGroupedNodes",
                                                               {},
                                                               { ::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::System::Xml::XmlNamespaceManager*>(), ::i2c::type_of<bool>(),
                                                                 ::i2c::type_of<::Newtonsoft::Json::Converters::IXmlNode*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XmlNodeConverter.SerializeNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Converters::XmlNodeConverter::*)(
    ::Newtonsoft::Json::JsonWriter*, ::Newtonsoft::Json::Converters::IXmlNode*, ::System::Xml::XmlNamespaceManager*, bool)>(&::Newtonsoft::Json::Converters::XmlNodeConverter::SerializeNode)> {
  constexpr static std::size_t size = 0x16c8;
  constexpr static std::size_t addrs = 0x5da0fc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlNodeConverter*>(),
                                                             { "SerializeNode",
                                                               {},
                                                               { ::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::Newtonsoft::Json::Converters::IXmlNode*>(),
                                                                 ::i2c::type_of<::System::Xml::XmlNamespaceManager*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XmlNodeConverter.AllSameName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Newtonsoft::Json::Converters::IXmlNode*)>(&::Newtonsoft::Json::Converters::XmlNodeConverter::AllSameName)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x5da3e48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlNodeConverter*>(),
                                                                                           { "AllSameName", {}, { ::i2c::type_of<::Newtonsoft::Json::Converters::IXmlNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XmlNodeConverter.ReadJson
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Object* (::Newtonsoft::Json::Converters::XmlNodeConverter::*)(::Newtonsoft::Json::JsonReader*, ::System::Type*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*)>(
        &::Newtonsoft::Json::Converters::XmlNodeConverter::ReadJson)> {
  constexpr static std::size_t size = 0x7ec;
  constexpr static std::size_t addrs = 0x5da4354;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlNodeConverter*>(), { ::i2c::class_of<::Newtonsoft::Json::Converters::XmlNodeConverter*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XmlNodeConverter.DeserializeValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Converters::XmlNodeConverter::*)(
    ::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Converters::IXmlDocument*, ::System::Xml::XmlNamespaceManager*, ::StringW, ::Newtonsoft::Json::Converters::IXmlNode*)>(
    &::Newtonsoft::Json::Converters::XmlNodeConverter::DeserializeValue)> {
  constexpr static std::size_t size = 0x5ac;
  constexpr static std::size_t addrs = 0x5da55f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlNodeConverter*>(),
                                         { "DeserializeValue",
                                           {},
                                           { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::Newtonsoft::Json::Converters::IXmlDocument*>(),
                                             ::i2c::type_of<::System::Xml::XmlNamespaceManager*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Newtonsoft::Json::Converters::IXmlNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XmlNodeConverter.ReadElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Converters::XmlNodeConverter::*)(
    ::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Converters::IXmlDocument*, ::Newtonsoft::Json::Converters::IXmlNode*, ::StringW, ::System::Xml::XmlNamespaceManager*)>(
    &::Newtonsoft::Json::Converters::XmlNodeConverter::ReadElement)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x5da4b40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlNodeConverter*>(),
                                         { "ReadElement",
                                           {},
                                           { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::Newtonsoft::Json::Converters::IXmlDocument*>(),
                                             ::i2c::type_of<::Newtonsoft::Json::Converters::IXmlNode*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlNamespaceManager*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XmlNodeConverter.CreateElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Converters::XmlNodeConverter::*)(
    ::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Converters::IXmlDocument*, ::Newtonsoft::Json::Converters::IXmlNode*, ::StringW, ::System::Xml::XmlNamespaceManager*, ::StringW,
    ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*)>(&::Newtonsoft::Json::Converters::XmlNodeConverter::CreateElement)> {
  constexpr static std::size_t size = 0x72c;
  constexpr static std::size_t addrs = 0x5da795c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlNodeConverter*>(),
                                                { "CreateElement",
                                                  {},
                                                  { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::Newtonsoft::Json::Converters::IXmlDocument*>(),
                                                    ::i2c::type_of<::Newtonsoft::Json::Converters::IXmlNode*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlNamespaceManager*>(),
                                                    ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XmlNodeConverter.AddAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Converters::IXmlDocument*, ::Newtonsoft::Json::Converters::IXmlNode*, ::StringW,
                                                                ::StringW, ::System::Xml::XmlNamespaceManager*, ::StringW)>(&::Newtonsoft::Json::Converters::XmlNodeConverter::AddAttribute)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x5da75d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlNodeConverter*>(),
                                                             { "AddAttribute",
                                                               {},
                                                               { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::Newtonsoft::Json::Converters::IXmlDocument*>(),
                                                                 ::i2c::type_of<::Newtonsoft::Json::Converters::IXmlNode*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(),
                                                                 ::i2c::type_of<::System::Xml::XmlNamespaceManager*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XmlNodeConverter.ConvertTokenToXmlValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Newtonsoft::Json::JsonReader*)>(&::Newtonsoft::Json::Converters::XmlNodeConverter::ConvertTokenToXmlValue)> {
  constexpr static std::size_t size = 0x734;
  constexpr static std::size_t addrs = 0x5da5ba4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlNodeConverter*>(),
                                                                                           { "ConvertTokenToXmlValue", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XmlNodeConverter.ReadArrayElements
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Converters::XmlNodeConverter::*)(
    ::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Converters::IXmlDocument*, ::StringW, ::Newtonsoft::Json::Converters::IXmlNode*, ::System::Xml::XmlNamespaceManager*)>(
    &::Newtonsoft::Json::Converters::XmlNodeConverter::ReadArrayElements)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0x5da6b80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlNodeConverter*>(),
                                                { "ReadArrayElements",
                                                  {},
                                                  { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::Newtonsoft::Json::Converters::IXmlDocument*>(), ::i2c::type_of<::StringW>(),
                                                    ::i2c::type_of<::Newtonsoft::Json::Converters::IXmlNode*>(), ::i2c::type_of<::System::Xml::XmlNamespaceManager*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XmlNodeConverter.AddJsonArrayAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Converters::XmlNodeConverter::*)(
    ::Newtonsoft::Json::Converters::IXmlElement*, ::Newtonsoft::Json::Converters::IXmlDocument*)>(&::Newtonsoft::Json::Converters::XmlNodeConverter::AddJsonArrayAttribute)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x5da8274;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlNodeConverter*>(),
                            { "AddJsonArrayAttribute", {}, { ::i2c::type_of<::Newtonsoft::Json::Converters::IXmlElement*>(), ::i2c::type_of<::Newtonsoft::Json::Converters::IXmlDocument*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XmlNodeConverter.ShouldReadInto
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Converters::XmlNodeConverter::*)(::Newtonsoft::Json::JsonReader*)>(
    &::Newtonsoft::Json::Converters::XmlNodeConverter::ShouldReadInto)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5da6eec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlNodeConverter*>(), { "ShouldReadInto", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XmlNodeConverter.ReadAttributeElements
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* (
    ::Newtonsoft::Json::Converters::XmlNodeConverter::*)(::Newtonsoft::Json::JsonReader*, ::System::Xml::XmlNamespaceManager*)>(
    &::Newtonsoft::Json::Converters::XmlNodeConverter::ReadAttributeElements)> {
  constexpr static std::size_t size = 0x6a4;
  constexpr static std::size_t addrs = 0x5da6f30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlNodeConverter*>(),
                                                { "ReadAttributeElements", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::System::Xml::XmlNamespaceManager*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XmlNodeConverter.CreateInstruction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Converters::XmlNodeConverter::*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Converters::IXmlDocument*,
                                                                                                                  ::Newtonsoft::Json::Converters::IXmlNode*, ::StringW)>(
    &::Newtonsoft::Json::Converters::XmlNodeConverter::CreateInstruction)> {
  constexpr static std::size_t size = 0x4b0;
  constexpr static std::size_t addrs = 0x5da62d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlNodeConverter*>(),
                                                             { "CreateInstruction",
                                                               {},
                                                               { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::Newtonsoft::Json::Converters::IXmlDocument*>(),
                                                                 ::i2c::type_of<::Newtonsoft::Json::Converters::IXmlNode*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XmlNodeConverter.CreateDocumentType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::Newtonsoft::Json::Converters::XmlNodeConverter::*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Converters::IXmlDocument*, ::Newtonsoft::Json::Converters::IXmlNode*)>(
        &::Newtonsoft::Json::Converters::XmlNodeConverter::CreateDocumentType)> {
  constexpr static std::size_t size = 0x3f8;
  constexpr static std::size_t addrs = 0x5da6788;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlNodeConverter*>(),
                                                             { "CreateDocumentType",
                                                               {},
                                                               { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::Newtonsoft::Json::Converters::IXmlDocument*>(),
                                                                 ::i2c::type_of<::Newtonsoft::Json::Converters::IXmlNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XmlNodeConverter.CreateElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Converters::IXmlElement* (
    ::Newtonsoft::Json::Converters::XmlNodeConverter::*)(::StringW, ::Newtonsoft::Json::Converters::IXmlDocument*, ::StringW, ::System::Xml::XmlNamespaceManager*)>(
    &::Newtonsoft::Json::Converters::XmlNodeConverter::CreateElement)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x5da8088;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlNodeConverter*>(),
                                                                                           { "CreateElement",
                                                                                             {},
                                                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Newtonsoft::Json::Converters::IXmlDocument*>(),
                                                                                               ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlNamespaceManager*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XmlNodeConverter.DeserializeNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Converters::XmlNodeConverter::*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Converters::IXmlDocument*,
                                                                                                                  ::System::Xml::XmlNamespaceManager*, ::Newtonsoft::Json::Converters::IXmlNode*)>(
    &::Newtonsoft::Json::Converters::XmlNodeConverter::DeserializeNode)> {
  constexpr static std::size_t size = 0x760;
  constexpr static std::size_t addrs = 0x5da4e98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlNodeConverter*>(),
                                                             { "DeserializeNode",
                                                               {},
                                                               { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::Newtonsoft::Json::Converters::IXmlDocument*>(),
                                                                 ::i2c::type_of<::System::Xml::XmlNamespaceManager*>(), ::i2c::type_of<::Newtonsoft::Json::Converters::IXmlNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XmlNodeConverter.IsNamespaceAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Converters::XmlNodeConverter::*)(::StringW, ::by_ref<::StringW>)>(
    &::Newtonsoft::Json::Converters::XmlNodeConverter::IsNamespaceAttribute)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5da85d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlNodeConverter*>(),
                                                                                           { "IsNamespaceAttribute", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XmlNodeConverter.ValueAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Converters::XmlNodeConverter::*)(::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>*)>(
    &::Newtonsoft::Json::Converters::XmlNodeConverter::ValueAttributes)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x5da40a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlNodeConverter*>(),
                                                             { "ValueAttributes", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XmlNodeConverter.CanConvert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Converters::XmlNodeConverter::*)(::System::Type*)>(&::Newtonsoft::Json::Converters::XmlNodeConverter::CanConvert)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5da86a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlNodeConverter*>(), { ::i2c::class_of<::Newtonsoft::Json::Converters::XmlNodeConverter*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XmlNodeConverter.IsXObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Converters::XmlNodeConverter::*)(::System::Type*)>(&::Newtonsoft::Json::Converters::XmlNodeConverter::IsXObject)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5da8768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlNodeConverter*>(), { "IsXObject", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XmlNodeConverter.IsXmlNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Converters::XmlNodeConverter::*)(::System::Type*)>(&::Newtonsoft::Json::Converters::XmlNodeConverter::IsXmlNode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5da87e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlNodeConverter*>(), { "IsXmlNode", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XmlNodeConverter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Converters::XmlNodeConverter::*)()>(&::Newtonsoft::Json::Converters::XmlNodeConverter::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5da8868;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlNodeConverter*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& Newtonsoft::Json::Converters::XmlNodeConverter::__cordl_internal_get__DeserializeRootElementName_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DeserializeRootElementName_k__BackingField;
}
constexpr ::StringW const& Newtonsoft::Json::Converters::XmlNodeConverter::__cordl_internal_get__DeserializeRootElementName_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DeserializeRootElementName_k__BackingField;
}
constexpr void Newtonsoft::Json::Converters::XmlNodeConverter::__cordl_internal_set__DeserializeRootElementName_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____DeserializeRootElementName_k__BackingField = value;
}
constexpr bool& Newtonsoft::Json::Converters::XmlNodeConverter::__cordl_internal_get__WriteArrayAttribute_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____WriteArrayAttribute_k__BackingField;
}
constexpr bool const& Newtonsoft::Json::Converters::XmlNodeConverter::__cordl_internal_get__WriteArrayAttribute_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____WriteArrayAttribute_k__BackingField;
}
constexpr void Newtonsoft::Json::Converters::XmlNodeConverter::__cordl_internal_set__WriteArrayAttribute_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____WriteArrayAttribute_k__BackingField = value;
}
constexpr bool& Newtonsoft::Json::Converters::XmlNodeConverter::__cordl_internal_get__OmitRootObject_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____OmitRootObject_k__BackingField;
}
constexpr bool const& Newtonsoft::Json::Converters::XmlNodeConverter::__cordl_internal_get__OmitRootObject_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____OmitRootObject_k__BackingField;
}
constexpr void Newtonsoft::Json::Converters::XmlNodeConverter::__cordl_internal_set__OmitRootObject_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____OmitRootObject_k__BackingField = value;
}
constexpr bool& Newtonsoft::Json::Converters::XmlNodeConverter::__cordl_internal_get__EncodeSpecialCharacters_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____EncodeSpecialCharacters_k__BackingField;
}
constexpr bool const& Newtonsoft::Json::Converters::XmlNodeConverter::__cordl_internal_get__EncodeSpecialCharacters_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____EncodeSpecialCharacters_k__BackingField;
}
constexpr void Newtonsoft::Json::Converters::XmlNodeConverter::__cordl_internal_set__EncodeSpecialCharacters_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____EncodeSpecialCharacters_k__BackingField = value;
}
inline void Newtonsoft::Json::Converters::XmlNodeConverter::setStaticF_EmptyChildNodes(::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>*, "EmptyChildNodes", ::Newtonsoft::Json::Converters::XmlNodeConverter*>(
      std::forward<::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>*>(value));
}
inline ::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* Newtonsoft::Json::Converters::XmlNodeConverter::getStaticF_EmptyChildNodes() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>*, "EmptyChildNodes", ::Newtonsoft::Json::Converters::XmlNodeConverter*>();
}
inline ::StringW Newtonsoft::Json::Converters::XmlNodeConverter::get_DeserializeRootElementName() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlNodeConverter*>(), { "get_DeserializeRootElementName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Newtonsoft::Json::Converters::XmlNodeConverter::set_DeserializeRootElementName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlNodeConverter*>(), { "set_DeserializeRootElementName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Newtonsoft::Json::Converters::XmlNodeConverter::get_WriteArrayAttribute() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlNodeConverter*>(), { "get_WriteArrayAttribute", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Newtonsoft::Json::Converters::XmlNodeConverter::set_WriteArrayAttribute(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlNodeConverter*>(), { "set_WriteArrayAttribute", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Newtonsoft::Json::Converters::XmlNodeConverter::get_OmitRootObject() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlNodeConverter*>(), { "get_OmitRootObject", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Newtonsoft::Json::Converters::XmlNodeConverter::set_OmitRootObject(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlNodeConverter*>(), { "set_OmitRootObject", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Newtonsoft::Json::Converters::XmlNodeConverter::get_EncodeSpecialCharacters() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlNodeConverter*>(), { "get_EncodeSpecialCharacters", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Newtonsoft::Json::Converters::XmlNodeConverter::set_EncodeSpecialCharacters(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlNodeConverter*>(), { "set_EncodeSpecialCharacters", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Converters::XmlNodeConverter::WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::JsonSerializer* serializer) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Converters::XmlNodeConverter*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, value, serializer);
}
inline ::Newtonsoft::Json::Converters::IXmlNode* Newtonsoft::Json::Converters::XmlNodeConverter::WrapXml(::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlNodeConverter*>(), { "WrapXml", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Converters::IXmlNode*>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Converters::XmlNodeConverter::PushParentNamespaces(::Newtonsoft::Json::Converters::IXmlNode* node, ::System::Xml::XmlNamespaceManager* manager) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlNodeConverter*>(),
                                              { "PushParentNamespaces", {}, { ::i2c::type_of<::Newtonsoft::Json::Converters::IXmlNode*>(), ::i2c::type_of<::System::Xml::XmlNamespaceManager*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node, manager);
}
inline ::StringW Newtonsoft::Json::Converters::XmlNodeConverter::ResolveFullName(::Newtonsoft::Json::Converters::IXmlNode* node, ::System::Xml::XmlNamespaceManager* manager) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlNodeConverter*>(),
                                              { "ResolveFullName", {}, { ::i2c::type_of<::Newtonsoft::Json::Converters::IXmlNode*>(), ::i2c::type_of<::System::Xml::XmlNamespaceManager*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, node, manager);
}
inline ::StringW Newtonsoft::Json::Converters::XmlNodeConverter::GetPropertyName(::Newtonsoft::Json::Converters::IXmlNode* node, ::System::Xml::XmlNamespaceManager* manager) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlNodeConverter*>(),
                                              { "GetPropertyName", {}, { ::i2c::type_of<::Newtonsoft::Json::Converters::IXmlNode*>(), ::i2c::type_of<::System::Xml::XmlNamespaceManager*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, node, manager);
}
inline bool Newtonsoft::Json::Converters::XmlNodeConverter::IsArray(::Newtonsoft::Json::Converters::IXmlNode* node) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlNodeConverter*>(), { "IsArray", {}, { ::i2c::type_of<::Newtonsoft::Json::Converters::IXmlNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, node);
}
inline void Newtonsoft::Json::Converters::XmlNodeConverter::SerializeGroupedNodes(::Newtonsoft::Json::JsonWriter* writer, ::Newtonsoft::Json::Converters::IXmlNode* node,
                                                                                  ::System::Xml::XmlNamespaceManager* manager, bool writePropertyName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlNodeConverter*>(),
                                                           { "SerializeGroupedNodes",
                                                             {},
                                                             { ::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::Newtonsoft::Json::Converters::IXmlNode*>(),
                                                               ::i2c::type_of<::System::Xml::XmlNamespaceManager*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, node, manager, writePropertyName);
}
inline void Newtonsoft::Json::Converters::XmlNodeConverter::WriteGroupedNodes(::Newtonsoft::Json::JsonWriter* writer, ::System::Xml::XmlNamespaceManager* manager, bool writePropertyName,
                                                                              ::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* groupedNodes, ::StringW elementNames) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlNodeConverter*>(),
                                                           { "WriteGroupedNodes",
                                                             {},
                                                             { ::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::System::Xml::XmlNamespaceManager*>(), ::i2c::type_of<bool>(),
                                                               ::i2c::type_of<::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, manager, writePropertyName, groupedNodes, elementNames);
}
inline void Newtonsoft::Json::Converters::XmlNodeConverter::WriteGroupedNodes(::Newtonsoft::Json::JsonWriter* writer, ::System::Xml::XmlNamespaceManager* manager, bool writePropertyName,
                                                                              ::Newtonsoft::Json::Converters::IXmlNode* node, ::StringW elementNames) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlNodeConverter*>(),
                                                           { "WriteGroupedNodes",
                                                             {},
                                                             { ::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::System::Xml::XmlNamespaceManager*>(), ::i2c::type_of<bool>(),
                                                               ::i2c::type_of<::Newtonsoft::Json::Converters::IXmlNode*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, manager, writePropertyName, node, elementNames);
}
inline void Newtonsoft::Json::Converters::XmlNodeConverter::SerializeNode(::Newtonsoft::Json::JsonWriter* writer, ::Newtonsoft::Json::Converters::IXmlNode* node,
                                                                          ::System::Xml::XmlNamespaceManager* manager, bool writePropertyName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlNodeConverter*>(),
                                                           { "SerializeNode",
                                                             {},
                                                             { ::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::Newtonsoft::Json::Converters::IXmlNode*>(),
                                                               ::i2c::type_of<::System::Xml::XmlNamespaceManager*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, node, manager, writePropertyName);
}
inline bool Newtonsoft::Json::Converters::XmlNodeConverter::AllSameName(::Newtonsoft::Json::Converters::IXmlNode* node) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlNodeConverter*>(), { "AllSameName", {}, { ::i2c::type_of<::Newtonsoft::Json::Converters::IXmlNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, node);
}
inline ::System::Object* Newtonsoft::Json::Converters::XmlNodeConverter::ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::System::Object* existingValue,
                                                                                  ::Newtonsoft::Json::JsonSerializer* serializer) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Converters::XmlNodeConverter*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, reader, objectType, existingValue, serializer);
}
inline void Newtonsoft::Json::Converters::XmlNodeConverter::DeserializeValue(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Converters::IXmlDocument* document,
                                                                             ::System::Xml::XmlNamespaceManager* manager, ::StringW propertyName,
                                                                             ::Newtonsoft::Json::Converters::IXmlNode* currentNode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlNodeConverter*>(),
                                       { "DeserializeValue",
                                         {},
                                         { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::Newtonsoft::Json::Converters::IXmlDocument*>(),
                                           ::i2c::type_of<::System::Xml::XmlNamespaceManager*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Newtonsoft::Json::Converters::IXmlNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, document, manager, propertyName, currentNode);
}
inline void Newtonsoft::Json::Converters::XmlNodeConverter::ReadElement(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Converters::IXmlDocument* document,
                                                                        ::Newtonsoft::Json::Converters::IXmlNode* currentNode, ::StringW propertyName, ::System::Xml::XmlNamespaceManager* manager) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlNodeConverter*>(),
                                       { "ReadElement",
                                         {},
                                         { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::Newtonsoft::Json::Converters::IXmlDocument*>(),
                                           ::i2c::type_of<::Newtonsoft::Json::Converters::IXmlNode*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlNamespaceManager*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, document, currentNode, propertyName, manager);
}
inline void Newtonsoft::Json::Converters::XmlNodeConverter::CreateElement(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Converters::IXmlDocument* document,
                                                                          ::Newtonsoft::Json::Converters::IXmlNode* currentNode, ::StringW elementName, ::System::Xml::XmlNamespaceManager* manager,
                                                                          ::StringW elementPrefix, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* attributeNameValues) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlNodeConverter*>(),
                                              { "CreateElement",
                                                {},
                                                { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::Newtonsoft::Json::Converters::IXmlDocument*>(),
                                                  ::i2c::type_of<::Newtonsoft::Json::Converters::IXmlNode*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlNamespaceManager*>(),
                                                  ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, document, currentNode, elementName, manager, elementPrefix, attributeNameValues);
}
inline void Newtonsoft::Json::Converters::XmlNodeConverter::AddAttribute(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Converters::IXmlDocument* document,
                                                                         ::Newtonsoft::Json::Converters::IXmlNode* currentNode, ::StringW propertyName, ::StringW attributeName,
                                                                         ::System::Xml::XmlNamespaceManager* manager, ::StringW attributePrefix) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlNodeConverter*>(),
                                                           { "AddAttribute",
                                                             {},
                                                             { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::Newtonsoft::Json::Converters::IXmlDocument*>(),
                                                               ::i2c::type_of<::Newtonsoft::Json::Converters::IXmlNode*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(),
                                                               ::i2c::type_of<::System::Xml::XmlNamespaceManager*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, reader, document, currentNode, propertyName, attributeName, manager, attributePrefix);
}
inline ::StringW Newtonsoft::Json::Converters::XmlNodeConverter::ConvertTokenToXmlValue(::Newtonsoft::Json::JsonReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlNodeConverter*>(), { "ConvertTokenToXmlValue", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, reader);
}
inline void Newtonsoft::Json::Converters::XmlNodeConverter::ReadArrayElements(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Converters::IXmlDocument* document, ::StringW propertyName,
                                                                              ::Newtonsoft::Json::Converters::IXmlNode* currentNode, ::System::Xml::XmlNamespaceManager* manager) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlNodeConverter*>(),
                                              { "ReadArrayElements",
                                                {},
                                                { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::Newtonsoft::Json::Converters::IXmlDocument*>(), ::i2c::type_of<::StringW>(),
                                                  ::i2c::type_of<::Newtonsoft::Json::Converters::IXmlNode*>(), ::i2c::type_of<::System::Xml::XmlNamespaceManager*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, document, propertyName, currentNode, manager);
}
inline void Newtonsoft::Json::Converters::XmlNodeConverter::AddJsonArrayAttribute(::Newtonsoft::Json::Converters::IXmlElement* element, ::Newtonsoft::Json::Converters::IXmlDocument* document) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlNodeConverter*>(),
                          { "AddJsonArrayAttribute", {}, { ::i2c::type_of<::Newtonsoft::Json::Converters::IXmlElement*>(), ::i2c::type_of<::Newtonsoft::Json::Converters::IXmlDocument*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, element, document);
}
inline bool Newtonsoft::Json::Converters::XmlNodeConverter::ShouldReadInto(::Newtonsoft::Json::JsonReader* reader) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlNodeConverter*>(), { "ShouldReadInto", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, reader);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* Newtonsoft::Json::Converters::XmlNodeConverter::ReadAttributeElements(::Newtonsoft::Json::JsonReader* reader,
                                                                                                                                                 ::System::Xml::XmlNamespaceManager* manager) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlNodeConverter*>(),
                                              { "ReadAttributeElements", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::System::Xml::XmlNamespaceManager*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>(this, ___internal_method, reader, manager);
}
inline void Newtonsoft::Json::Converters::XmlNodeConverter::CreateInstruction(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Converters::IXmlDocument* document,
                                                                              ::Newtonsoft::Json::Converters::IXmlNode* currentNode, ::StringW propertyName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlNodeConverter*>(),
                                                           { "CreateInstruction",
                                                             {},
                                                             { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::Newtonsoft::Json::Converters::IXmlDocument*>(),
                                                               ::i2c::type_of<::Newtonsoft::Json::Converters::IXmlNode*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, document, currentNode, propertyName);
}
inline void Newtonsoft::Json::Converters::XmlNodeConverter::CreateDocumentType(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Converters::IXmlDocument* document,
                                                                               ::Newtonsoft::Json::Converters::IXmlNode* currentNode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlNodeConverter*>(),
                                                           { "CreateDocumentType",
                                                             {},
                                                             { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::Newtonsoft::Json::Converters::IXmlDocument*>(),
                                                               ::i2c::type_of<::Newtonsoft::Json::Converters::IXmlNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, document, currentNode);
}
inline ::Newtonsoft::Json::Converters::IXmlElement* Newtonsoft::Json::Converters::XmlNodeConverter::CreateElement(::StringW elementName, ::Newtonsoft::Json::Converters::IXmlDocument* document,
                                                                                                                  ::StringW elementPrefix, ::System::Xml::XmlNamespaceManager* manager) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlNodeConverter*>(),
                                                                                         { "CreateElement",
                                                                                           {},
                                                                                           { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Newtonsoft::Json::Converters::IXmlDocument*>(),
                                                                                             ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlNamespaceManager*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Converters::IXmlElement*>(this, ___internal_method, elementName, document, elementPrefix, manager);
}
inline void Newtonsoft::Json::Converters::XmlNodeConverter::DeserializeNode(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Converters::IXmlDocument* document,
                                                                            ::System::Xml::XmlNamespaceManager* manager, ::Newtonsoft::Json::Converters::IXmlNode* currentNode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlNodeConverter*>(),
                                                           { "DeserializeNode",
                                                             {},
                                                             { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::Newtonsoft::Json::Converters::IXmlDocument*>(),
                                                               ::i2c::type_of<::System::Xml::XmlNamespaceManager*>(), ::i2c::type_of<::Newtonsoft::Json::Converters::IXmlNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, document, manager, currentNode);
}
inline bool Newtonsoft::Json::Converters::XmlNodeConverter::IsNamespaceAttribute(::StringW attributeName, ::by_ref<::StringW> prefix) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlNodeConverter*>(),
                                                                                         { "IsNamespaceAttribute", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, attributeName, prefix);
}
inline bool Newtonsoft::Json::Converters::XmlNodeConverter::ValueAttributes(::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* c) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlNodeConverter*>(),
                                                           { "ValueAttributes", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, c);
}
inline bool Newtonsoft::Json::Converters::XmlNodeConverter::CanConvert(::System::Type* valueType) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Converters::XmlNodeConverter*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, valueType);
}
inline bool Newtonsoft::Json::Converters::XmlNodeConverter::IsXObject(::System::Type* valueType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlNodeConverter*>(), { "IsXObject", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, valueType);
}
inline bool Newtonsoft::Json::Converters::XmlNodeConverter::IsXmlNode(::System::Type* valueType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlNodeConverter*>(), { "IsXmlNode", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, valueType);
}
inline void Newtonsoft::Json::Converters::XmlNodeConverter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::XmlNodeConverter*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Converters::XmlNodeConverter* Newtonsoft::Json::Converters::XmlNodeConverter::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Converters::XmlNodeConverter*>());
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Converters::XmlNodeConverter::XmlNodeConverter() {}
