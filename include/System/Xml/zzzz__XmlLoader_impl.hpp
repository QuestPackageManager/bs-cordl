#pragma once
// IWYU pragma private; include "System/Xml/XmlLoader.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/zzzz__XmlLoader_def.hpp"
#include "System/Xml/zzzz__IDtdInfo_def.hpp"
#include "System/Xml/zzzz__XmlAttribute_def.hpp"
#include "System/Xml/zzzz__XmlDeclaration_def.hpp"
#include "System/Xml/zzzz__XmlDocumentType_def.hpp"
#include "System/Xml/zzzz__XmlDocument_def.hpp"
#include "System/Xml/zzzz__XmlElement_def.hpp"
#include "System/Xml/zzzz__XmlEntityReference_def.hpp"
#include "System/Xml/zzzz__XmlEntity_def.hpp"
#include "System/Xml/zzzz__XmlNamespaceManager_def.hpp"
#include "System/Xml/zzzz__XmlNodeType_def.hpp"
#include "System/Xml/zzzz__XmlNode_def.hpp"
#include "System/Xml/zzzz__XmlParserContext_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
#include "System/Xml/zzzz__XmlResolver_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::System::Xml::XmlLoader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlLoader::*)()>(&::System::Xml::XmlLoader::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x62b2b44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlLoader*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlLoader.Load
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlLoader::*)(::System::Xml::XmlDocument*, ::System::Xml::XmlReader*, bool)>(&::System::Xml::XmlLoader::Load)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x62b9234;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlLoader*>(),
                                                             { "Load", {}, { ::i2c::type_of<::System::Xml::XmlDocument*>(), ::i2c::type_of<::System::Xml::XmlReader*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlLoader.LoadDocSequence
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlLoader::*)(::System::Xml::XmlDocument*)>(&::System::Xml::XmlLoader::LoadDocSequence)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x62bd27c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlLoader*>(), { "LoadDocSequence", {}, { ::i2c::type_of<::System::Xml::XmlDocument*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlLoader.ReadCurrentNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNode* (::System::Xml::XmlLoader::*)(::System::Xml::XmlDocument*, ::System::Xml::XmlReader*)>(
    &::System::Xml::XmlLoader::ReadCurrentNode)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x62b8fb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::XmlLoader*>(), { "ReadCurrentNode", {}, { ::i2c::type_of<::System::Xml::XmlDocument*>(), ::i2c::type_of<::System::Xml::XmlReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlLoader.LoadNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNode* (::System::Xml::XmlLoader::*)(bool)>(&::System::Xml::XmlLoader::LoadNode)> {
  constexpr static std::size_t size = 0x58c;
  constexpr static std::size_t addrs = 0x62bd2e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlLoader*>(), { "LoadNode", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlLoader.LoadAttributeNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlAttribute* (::System::Xml::XmlLoader::*)()>(&::System::Xml::XmlLoader::LoadAttributeNode)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x62bd874;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlLoader*>(), { "LoadAttributeNode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlLoader.LoadDefaultAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlAttribute* (::System::Xml::XmlLoader::*)()>(&::System::Xml::XmlLoader::LoadDefaultAttribute)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x62be1cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlLoader*>(), { "LoadDefaultAttribute", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlLoader.LoadAttributeValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlLoader::*)(::System::Xml::XmlNode*, bool)>(&::System::Xml::XmlLoader::LoadAttributeValue)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x62be374;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlLoader*>(), { "LoadAttributeValue", {}, { ::i2c::type_of<::System::Xml::XmlNode*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlLoader.LoadEntityReferenceNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlEntityReference* (::System::Xml::XmlLoader::*)(bool)>(&::System::Xml::XmlLoader::LoadEntityReferenceNode)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x62bdb70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlLoader*>(), { "LoadEntityReferenceNode", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlLoader.LoadDeclarationNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlDeclaration* (::System::Xml::XmlLoader::*)()>(&::System::Xml::XmlLoader::LoadDeclarationNode)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x62bdd4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlLoader*>(), { "LoadDeclarationNode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlLoader.LoadDocumentTypeNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlDocumentType* (::System::Xml::XmlLoader::*)()>(&::System::Xml::XmlLoader::LoadDocumentTypeNode)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x62bdef0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlLoader*>(), { "LoadDocumentTypeNode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlLoader.LoadNodeDirect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNode* (::System::Xml::XmlLoader::*)()>(&::System::Xml::XmlLoader::LoadNodeDirect)> {
  constexpr static std::size_t size = 0x4a8;
  constexpr static std::size_t addrs = 0x62be66c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlLoader*>(), { "LoadNodeDirect", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlLoader.LoadAttributeNodeDirect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlAttribute* (::System::Xml::XmlLoader::*)()>(&::System::Xml::XmlLoader::LoadAttributeNodeDirect)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x62bf730;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlLoader*>(), { "LoadAttributeNodeDirect", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlLoader.ParseDocumentType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlLoader::*)(::System::Xml::XmlDocumentType*)>(&::System::Xml::XmlLoader::ParseDocumentType)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x62bab58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlLoader*>(), { "ParseDocumentType", {}, { ::i2c::type_of<::System::Xml::XmlDocumentType*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlLoader.ParseDocumentType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlLoader::*)(::System::Xml::XmlDocumentType*, bool, ::System::Xml::XmlResolver*)>(
    &::System::Xml::XmlLoader::ParseDocumentType)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x62bf874;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::XmlLoader*>(),
                                         { "ParseDocumentType", {}, { ::i2c::type_of<::System::Xml::XmlDocumentType*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Xml::XmlResolver*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlLoader.LoadDocumentType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlLoader::*)(::System::Xml::IDtdInfo*, ::System::Xml::XmlDocumentType*)>(&::System::Xml::XmlLoader::LoadDocumentType)> {
  constexpr static std::size_t size = 0xc1c;
  constexpr static std::size_t addrs = 0x62beb14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlLoader*>(),
                                                             { "LoadDocumentType", {}, { ::i2c::type_of<::System::Xml::IDtdInfo*>(), ::i2c::type_of<::System::Xml::XmlDocumentType*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlLoader.GetContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlParserContext* (::System::Xml::XmlLoader::*)(::System::Xml::XmlNode*)>(&::System::Xml::XmlLoader::GetContext)> {
  constexpr static std::size_t size = 0x894;
  constexpr static std::size_t addrs = 0x62bfb34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlLoader*>(), { "GetContext", {}, { ::i2c::type_of<::System::Xml::XmlNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlLoader.ParsePartialContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNamespaceManager* (::System::Xml::XmlLoader::*)(::System::Xml::XmlNode*, ::StringW, ::System::Xml::XmlNodeType)>(
    &::System::Xml::XmlLoader::ParsePartialContent)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x62ba4b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::XmlLoader*>(),
                                         { "ParsePartialContent", {}, { ::i2c::type_of<::System::Xml::XmlNode*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlNodeType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlLoader.LoadInnerXmlElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlLoader::*)(::System::Xml::XmlElement*, ::StringW)>(&::System::Xml::XmlLoader::LoadInnerXmlElement)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x62bc0e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::XmlLoader*>(), { "LoadInnerXmlElement", {}, { ::i2c::type_of<::System::Xml::XmlElement*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlLoader.LoadInnerXmlAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlLoader::*)(::System::Xml::XmlAttribute*, ::StringW)>(&::System::Xml::XmlLoader::LoadInnerXmlAttribute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62b2b48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::XmlLoader*>(), { "LoadInnerXmlAttribute", {}, { ::i2c::type_of<::System::Xml::XmlAttribute*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlLoader.RemoveDuplicateNamespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlLoader::*)(::System::Xml::XmlElement*, ::System::Xml::XmlNamespaceManager*, bool)>(
    &::System::Xml::XmlLoader::RemoveDuplicateNamespace)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x62c064c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::XmlLoader*>(),
                            { "RemoveDuplicateNamespace", {}, { ::i2c::type_of<::System::Xml::XmlElement*>(), ::i2c::type_of<::System::Xml::XmlNamespaceManager*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlLoader.EntitizeName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlLoader::*)(::StringW)>(&::System::Xml::XmlLoader::EntitizeName)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x62c08e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlLoader*>(), { "EntitizeName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlLoader.ExpandEntity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlLoader::*)(::System::Xml::XmlEntity*)>(&::System::Xml::XmlLoader::ExpandEntity)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x62bc434;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlLoader*>(), { "ExpandEntity", {}, { ::i2c::type_of<::System::Xml::XmlEntity*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlLoader.ExpandEntityReference
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlLoader::*)(::System::Xml::XmlEntityReference*)>(&::System::Xml::XmlLoader::ExpandEntityReference)> {
  constexpr static std::size_t size = 0x5e0;
  constexpr static std::size_t addrs = 0x62bc6cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlLoader*>(), { "ExpandEntityReference", {}, { ::i2c::type_of<::System::Xml::XmlEntityReference*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlLoader.CreateInnerXmlReader
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlReader* (::System::Xml::XmlLoader::*)(::StringW, ::System::Xml::XmlNodeType, ::System::Xml::XmlParserContext*,
                                                                                                               ::System::Xml::XmlDocument*)>(&::System::Xml::XmlLoader::CreateInnerXmlReader)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x62c03c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::XmlLoader*>(), { "CreateInnerXmlReader",
                                                                                         {},
                                                                                         { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlNodeType>(),
                                                                                           ::i2c::type_of<::System::Xml::XmlParserContext*>(), ::i2c::type_of<::System::Xml::XmlDocument*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlLoader.ParseXmlDeclarationValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::by_ref<::StringW>, ::by_ref<::StringW>, ::by_ref<::StringW>)>(&::System::Xml::XmlLoader::ParseXmlDeclarationValue)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x62b5b6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Xml::XmlLoader*>(),
            { "ParseXmlDeclarationValue", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlLoader.UnexpectedNodeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::System::Xml::XmlNodeType)>(&::System::Xml::XmlLoader::UnexpectedNodeType)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x62be09c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlLoader*>(), { "UnexpectedNodeType", {}, { ::i2c::type_of<::System::Xml::XmlNodeType>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlDocument*& System::Xml::XmlLoader::__cordl_internal_get_doc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___doc;
}
constexpr ::System::Xml::XmlDocument* const& System::Xml::XmlLoader::__cordl_internal_get_doc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___doc;
}
constexpr void System::Xml::XmlLoader::__cordl_internal_set_doc(::System::Xml::XmlDocument* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___doc = value;
}
constexpr ::System::Xml::XmlReader*& System::Xml::XmlLoader::__cordl_internal_get_reader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reader;
}
constexpr ::System::Xml::XmlReader* const& System::Xml::XmlLoader::__cordl_internal_get_reader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reader;
}
constexpr void System::Xml::XmlLoader::__cordl_internal_set_reader(::System::Xml::XmlReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___reader = value;
}
constexpr bool& System::Xml::XmlLoader::__cordl_internal_get_preserveWhitespace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___preserveWhitespace;
}
constexpr bool const& System::Xml::XmlLoader::__cordl_internal_get_preserveWhitespace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___preserveWhitespace;
}
constexpr void System::Xml::XmlLoader::__cordl_internal_set_preserveWhitespace(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___preserveWhitespace = value;
}
inline void System::Xml::XmlLoader::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlLoader*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlLoader::Load(::System::Xml::XmlDocument* doc, ::System::Xml::XmlReader* reader, bool preserveWhitespace) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlLoader*>(),
                                                           { "Load", {}, { ::i2c::type_of<::System::Xml::XmlDocument*>(), ::i2c::type_of<::System::Xml::XmlReader*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, doc, reader, preserveWhitespace);
}
inline void System::Xml::XmlLoader::LoadDocSequence(::System::Xml::XmlDocument* parentDoc) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlLoader*>(), { "LoadDocSequence", {}, { ::i2c::type_of<::System::Xml::XmlDocument*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parentDoc);
}
inline ::System::Xml::XmlNode* System::Xml::XmlLoader::ReadCurrentNode(::System::Xml::XmlDocument* doc, ::System::Xml::XmlReader* reader) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::XmlLoader*>(), { "ReadCurrentNode", {}, { ::i2c::type_of<::System::Xml::XmlDocument*>(), ::i2c::type_of<::System::Xml::XmlReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNode*>(this, ___internal_method, doc, reader);
}
inline ::System::Xml::XmlNode* System::Xml::XmlLoader::LoadNode(bool skipOverWhitespace) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlLoader*>(), { "LoadNode", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNode*>(this, ___internal_method, skipOverWhitespace);
}
inline ::System::Xml::XmlAttribute* System::Xml::XmlLoader::LoadAttributeNode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlLoader*>(), { "LoadAttributeNode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlAttribute*>(this, ___internal_method);
}
inline ::System::Xml::XmlAttribute* System::Xml::XmlLoader::LoadDefaultAttribute() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlLoader*>(), { "LoadDefaultAttribute", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlAttribute*>(this, ___internal_method);
}
inline void System::Xml::XmlLoader::LoadAttributeValue(::System::Xml::XmlNode* parent, bool direct) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlLoader*>(), { "LoadAttributeValue", {}, { ::i2c::type_of<::System::Xml::XmlNode*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parent, direct);
}
inline ::System::Xml::XmlEntityReference* System::Xml::XmlLoader::LoadEntityReferenceNode(bool direct) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlLoader*>(), { "LoadEntityReferenceNode", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlEntityReference*>(this, ___internal_method, direct);
}
inline ::System::Xml::XmlDeclaration* System::Xml::XmlLoader::LoadDeclarationNode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlLoader*>(), { "LoadDeclarationNode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlDeclaration*>(this, ___internal_method);
}
inline ::System::Xml::XmlDocumentType* System::Xml::XmlLoader::LoadDocumentTypeNode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlLoader*>(), { "LoadDocumentTypeNode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlDocumentType*>(this, ___internal_method);
}
inline ::System::Xml::XmlNode* System::Xml::XmlLoader::LoadNodeDirect() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlLoader*>(), { "LoadNodeDirect", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNode*>(this, ___internal_method);
}
inline ::System::Xml::XmlAttribute* System::Xml::XmlLoader::LoadAttributeNodeDirect() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlLoader*>(), { "LoadAttributeNodeDirect", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlAttribute*>(this, ___internal_method);
}
inline void System::Xml::XmlLoader::ParseDocumentType(::System::Xml::XmlDocumentType* dtNode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlLoader*>(), { "ParseDocumentType", {}, { ::i2c::type_of<::System::Xml::XmlDocumentType*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dtNode);
}
inline void System::Xml::XmlLoader::ParseDocumentType(::System::Xml::XmlDocumentType* dtNode, bool bUseResolver, ::System::Xml::XmlResolver* resolver) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::XmlLoader*>(),
                                       { "ParseDocumentType", {}, { ::i2c::type_of<::System::Xml::XmlDocumentType*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Xml::XmlResolver*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dtNode, bUseResolver, resolver);
}
inline void System::Xml::XmlLoader::LoadDocumentType(::System::Xml::IDtdInfo* dtdInfo, ::System::Xml::XmlDocumentType* dtNode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlLoader*>(),
                                                           { "LoadDocumentType", {}, { ::i2c::type_of<::System::Xml::IDtdInfo*>(), ::i2c::type_of<::System::Xml::XmlDocumentType*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dtdInfo, dtNode);
}
inline ::System::Xml::XmlParserContext* System::Xml::XmlLoader::GetContext(::System::Xml::XmlNode* node) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlLoader*>(), { "GetContext", {}, { ::i2c::type_of<::System::Xml::XmlNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlParserContext*>(this, ___internal_method, node);
}
inline ::System::Xml::XmlNamespaceManager* System::Xml::XmlLoader::ParsePartialContent(::System::Xml::XmlNode* parentNode, ::StringW innerxmltext, ::System::Xml::XmlNodeType nt) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::XmlLoader*>(),
                                       { "ParsePartialContent", {}, { ::i2c::type_of<::System::Xml::XmlNode*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlNodeType>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNamespaceManager*>(this, ___internal_method, parentNode, innerxmltext, nt);
}
inline void System::Xml::XmlLoader::LoadInnerXmlElement(::System::Xml::XmlElement* node, ::StringW innerxmltext) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::XmlLoader*>(), { "LoadInnerXmlElement", {}, { ::i2c::type_of<::System::Xml::XmlElement*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node, innerxmltext);
}
inline void System::Xml::XmlLoader::LoadInnerXmlAttribute(::System::Xml::XmlAttribute* node, ::StringW innerxmltext) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::XmlLoader*>(), { "LoadInnerXmlAttribute", {}, { ::i2c::type_of<::System::Xml::XmlAttribute*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node, innerxmltext);
}
inline void System::Xml::XmlLoader::RemoveDuplicateNamespace(::System::Xml::XmlElement* elem, ::System::Xml::XmlNamespaceManager* mgr, bool fCheckElemAttrs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::XmlLoader*>(),
                          { "RemoveDuplicateNamespace", {}, { ::i2c::type_of<::System::Xml::XmlElement*>(), ::i2c::type_of<::System::Xml::XmlNamespaceManager*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, elem, mgr, fCheckElemAttrs);
}
inline ::StringW System::Xml::XmlLoader::EntitizeName(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlLoader*>(), { "EntitizeName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, name);
}
inline void System::Xml::XmlLoader::ExpandEntity(::System::Xml::XmlEntity* ent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlLoader*>(), { "ExpandEntity", {}, { ::i2c::type_of<::System::Xml::XmlEntity*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ent);
}
inline void System::Xml::XmlLoader::ExpandEntityReference(::System::Xml::XmlEntityReference* eref) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlLoader*>(), { "ExpandEntityReference", {}, { ::i2c::type_of<::System::Xml::XmlEntityReference*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eref);
}
inline ::System::Xml::XmlReader* System::Xml::XmlLoader::CreateInnerXmlReader(::StringW xmlFragment, ::System::Xml::XmlNodeType nt, ::System::Xml::XmlParserContext* context,
                                                                              ::System::Xml::XmlDocument* doc) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::XmlLoader*>(), { "CreateInnerXmlReader",
                                                                                       {},
                                                                                       { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlNodeType>(),
                                                                                         ::i2c::type_of<::System::Xml::XmlParserContext*>(), ::i2c::type_of<::System::Xml::XmlDocument*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlReader*>(this, ___internal_method, xmlFragment, nt, context, doc);
}
inline void System::Xml::XmlLoader::ParseXmlDeclarationValue(::StringW strValue, ::by_ref<::StringW> version, ::by_ref<::StringW> encoding, ::by_ref<::StringW> standalone) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Xml::XmlLoader*>(),
          { "ParseXmlDeclarationValue", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, strValue, version, encoding, standalone);
}
inline ::System::Exception* System::Xml::XmlLoader::UnexpectedNodeType(::System::Xml::XmlNodeType nodetype) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlLoader*>(), { "UnexpectedNodeType", {}, { ::i2c::type_of<::System::Xml::XmlNodeType>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, nodetype);
}
inline ::System::Xml::XmlLoader* System::Xml::XmlLoader::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlLoader*>());
}
// Ctor Parameters []
constexpr ::System::Xml::XmlLoader::XmlLoader() {}
