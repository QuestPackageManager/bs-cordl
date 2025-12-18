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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlLoader::*)()>(&::System::Xml::XmlLoader::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6103804;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlLoader*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlLoader.Load
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlLoader::*)(::System::Xml::XmlDocument*, ::System::Xml::XmlReader*, bool)>(
    &::System::Xml::XmlLoader::Load)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x6109ef4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlLoader*>::get(), "Load", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDocument*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlLoader.LoadDocSequence
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlLoader::*)(::System::Xml::XmlDocument*)>(&::System::Xml::XmlLoader::LoadDocSequence)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x610df3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlLoader*>::get(), "LoadDocSequence", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDocument*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlLoader.ReadCurrentNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNode* (::System::Xml::XmlLoader::*)(::System::Xml::XmlDocument*, ::System::Xml::XmlReader*)>(
    &::System::Xml::XmlLoader::ReadCurrentNode)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x6109c74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlLoader*>::get(), "ReadCurrentNode", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDocument*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlLoader.LoadNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNode* (::System::Xml::XmlLoader::*)(bool)>(&::System::Xml::XmlLoader::LoadNode)> {
  constexpr static std::size_t size = 0x58c;
  constexpr static std::size_t addrs = 0x610dfa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlLoader*>::get(), "LoadNode", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlLoader.LoadAttributeNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlAttribute* (::System::Xml::XmlLoader::*)()>(&::System::Xml::XmlLoader::LoadAttributeNode)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x610e534;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlLoader*>::get(), "LoadAttributeNode",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlLoader.LoadDefaultAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlAttribute* (::System::Xml::XmlLoader::*)()>(&::System::Xml::XmlLoader::LoadDefaultAttribute)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x610ee8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlLoader*>::get(), "LoadDefaultAttribute",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlLoader.LoadAttributeValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlLoader::*)(::System::Xml::XmlNode*, bool)>(&::System::Xml::XmlLoader::LoadAttributeValue)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x610f034;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlLoader*>::get(), "LoadAttributeValue", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNode*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlLoader.LoadEntityReferenceNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlEntityReference* (::System::Xml::XmlLoader::*)(bool)>(
    &::System::Xml::XmlLoader::LoadEntityReferenceNode)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x610e830;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlLoader*>::get(), "LoadEntityReferenceNode",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlLoader.LoadDeclarationNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlDeclaration* (::System::Xml::XmlLoader::*)()>(&::System::Xml::XmlLoader::LoadDeclarationNode)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x610ea0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlLoader*>::get(), "LoadDeclarationNode",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlLoader.LoadDocumentTypeNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlDocumentType* (::System::Xml::XmlLoader::*)()>(&::System::Xml::XmlLoader::LoadDocumentTypeNode)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x610ebb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlLoader*>::get(), "LoadDocumentTypeNode",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlLoader.LoadNodeDirect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNode* (::System::Xml::XmlLoader::*)()>(&::System::Xml::XmlLoader::LoadNodeDirect)> {
  constexpr static std::size_t size = 0x4a8;
  constexpr static std::size_t addrs = 0x610f32c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlLoader*>::get(), "LoadNodeDirect",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlLoader.LoadAttributeNodeDirect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlAttribute* (::System::Xml::XmlLoader::*)()>(&::System::Xml::XmlLoader::LoadAttributeNodeDirect)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x61103f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlLoader*>::get(), "LoadAttributeNodeDirect",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlLoader.ParseDocumentType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlLoader::*)(::System::Xml::XmlDocumentType*)>(&::System::Xml::XmlLoader::ParseDocumentType)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x610b818;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlLoader*>::get(), "ParseDocumentType", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDocumentType*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlLoader.ParseDocumentType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlLoader::*)(::System::Xml::XmlDocumentType*, bool, ::System::Xml::XmlResolver*)>(
    &::System::Xml::XmlLoader::ParseDocumentType)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x6110534;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlLoader*>::get(), "ParseDocumentType", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDocumentType*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlResolver*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlLoader.LoadDocumentType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlLoader::*)(::System::Xml::IDtdInfo*, ::System::Xml::XmlDocumentType*)>(
    &::System::Xml::XmlLoader::LoadDocumentType)> {
  constexpr static std::size_t size = 0xc1c;
  constexpr static std::size_t addrs = 0x610f7d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlLoader*>::get(), "LoadDocumentType", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::IDtdInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDocumentType*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlLoader.GetContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlParserContext* (::System::Xml::XmlLoader::*)(::System::Xml::XmlNode*)>(
    &::System::Xml::XmlLoader::GetContext)> {
  constexpr static std::size_t size = 0x894;
  constexpr static std::size_t addrs = 0x61107f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlLoader*>::get(), "GetContext", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlLoader.ParsePartialContent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Xml::XmlNamespaceManager* (::System::Xml::XmlLoader::*)(::System::Xml::XmlNode*, ::StringW, ::System::Xml::XmlNodeType)>(&::System::Xml::XmlLoader::ParsePartialContent)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x610b174;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlLoader*>::get(), "ParsePartialContent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNode*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNodeType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlLoader.LoadInnerXmlElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlLoader::*)(::System::Xml::XmlElement*, ::StringW)>(
    &::System::Xml::XmlLoader::LoadInnerXmlElement)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x610cda4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlLoader*>::get(), "LoadInnerXmlElement", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlElement*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlLoader.LoadInnerXmlAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlLoader::*)(::System::Xml::XmlAttribute*, ::StringW)>(
    &::System::Xml::XmlLoader::LoadInnerXmlAttribute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6103808;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlLoader*>::get(), "LoadInnerXmlAttribute", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlAttribute*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlLoader.RemoveDuplicateNamespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlLoader::*)(::System::Xml::XmlElement*, ::System::Xml::XmlNamespaceManager*, bool)>(
    &::System::Xml::XmlLoader::RemoveDuplicateNamespace)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x611130c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlLoader*>::get(), "RemoveDuplicateNamespace", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlElement*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNamespaceManager*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlLoader.EntitizeName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlLoader::*)(::StringW)>(&::System::Xml::XmlLoader::EntitizeName)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x61115a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlLoader*>::get(), "EntitizeName", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlLoader.ExpandEntity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlLoader::*)(::System::Xml::XmlEntity*)>(&::System::Xml::XmlLoader::ExpandEntity)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x610d0f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlLoader*>::get(), "ExpandEntity", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlEntity*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlLoader.ExpandEntityReference
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlLoader::*)(::System::Xml::XmlEntityReference*)>(
    &::System::Xml::XmlLoader::ExpandEntityReference)> {
  constexpr static std::size_t size = 0x5e0;
  constexpr static std::size_t addrs = 0x610d38c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlLoader*>::get(), "ExpandEntityReference", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlEntityReference*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlLoader.CreateInnerXmlReader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlReader* (
    ::System::Xml::XmlLoader::*)(::StringW, ::System::Xml::XmlNodeType, ::System::Xml::XmlParserContext*, ::System::Xml::XmlDocument*)>(&::System::Xml::XmlLoader::CreateInnerXmlReader)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x6111088;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlLoader*>::get(), "CreateInnerXmlReader", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNodeType>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlParserContext*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDocument*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlLoader.ParseXmlDeclarationValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::ByRef<::StringW>, ::ByRef<::StringW>, ::ByRef<::StringW>)>(
    &::System::Xml::XmlLoader::ParseXmlDeclarationValue)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x610682c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlLoader*>::get(), "ParseXmlDeclarationValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlLoader.UnexpectedNodeType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (*)(::System::Xml::XmlNodeType)>(&::System::Xml::XmlLoader::UnexpectedNodeType)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x610ed5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlLoader*>::get(), "UnexpectedNodeType", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNodeType>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___doc)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___reader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlLoader*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlLoader::Load(::System::Xml::XmlDocument* doc, ::System::Xml::XmlReader* reader, bool preserveWhitespace) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlLoader*>::get(), "Load", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDocument*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReader*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, doc, reader, preserveWhitespace);
}
inline void System::Xml::XmlLoader::LoadDocSequence(::System::Xml::XmlDocument* parentDoc) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlLoader*>::get(), "LoadDocSequence", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDocument*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parentDoc);
}
inline ::System::Xml::XmlNode* System::Xml::XmlLoader::ReadCurrentNode(::System::Xml::XmlDocument* doc, ::System::Xml::XmlReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlLoader*>::get(), "ReadCurrentNode", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDocument*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNode*, false>(this, ___internal_method, doc, reader);
}
inline ::System::Xml::XmlNode* System::Xml::XmlLoader::LoadNode(bool skipOverWhitespace) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlLoader*>::get(), "LoadNode", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNode*, false>(this, ___internal_method, skipOverWhitespace);
}
inline ::System::Xml::XmlAttribute* System::Xml::XmlLoader::LoadAttributeNode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlLoader*>::get(), "LoadAttributeNode",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlAttribute*, false>(this, ___internal_method);
}
inline ::System::Xml::XmlAttribute* System::Xml::XmlLoader::LoadDefaultAttribute() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlLoader*>::get(), "LoadDefaultAttribute",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlAttribute*, false>(this, ___internal_method);
}
inline void System::Xml::XmlLoader::LoadAttributeValue(::System::Xml::XmlNode* parent, bool direct) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlLoader*>::get(), "LoadAttributeValue", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNode*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parent, direct);
}
inline ::System::Xml::XmlEntityReference* System::Xml::XmlLoader::LoadEntityReferenceNode(bool direct) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlLoader*>::get(), "LoadEntityReferenceNode",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlEntityReference*, false>(this, ___internal_method, direct);
}
inline ::System::Xml::XmlDeclaration* System::Xml::XmlLoader::LoadDeclarationNode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlLoader*>::get(), "LoadDeclarationNode",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlDeclaration*, false>(this, ___internal_method);
}
inline ::System::Xml::XmlDocumentType* System::Xml::XmlLoader::LoadDocumentTypeNode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlLoader*>::get(), "LoadDocumentTypeNode",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlDocumentType*, false>(this, ___internal_method);
}
inline ::System::Xml::XmlNode* System::Xml::XmlLoader::LoadNodeDirect() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlLoader*>::get(), "LoadNodeDirect",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNode*, false>(this, ___internal_method);
}
inline ::System::Xml::XmlAttribute* System::Xml::XmlLoader::LoadAttributeNodeDirect() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlLoader*>::get(), "LoadAttributeNodeDirect",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlAttribute*, false>(this, ___internal_method);
}
inline void System::Xml::XmlLoader::ParseDocumentType(::System::Xml::XmlDocumentType* dtNode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlLoader*>::get(), "ParseDocumentType", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDocumentType*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dtNode);
}
inline void System::Xml::XmlLoader::ParseDocumentType(::System::Xml::XmlDocumentType* dtNode, bool bUseResolver, ::System::Xml::XmlResolver* resolver) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlLoader*>::get(), "ParseDocumentType", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDocumentType*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlResolver*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dtNode, bUseResolver, resolver);
}
inline void System::Xml::XmlLoader::LoadDocumentType(::System::Xml::IDtdInfo* dtdInfo, ::System::Xml::XmlDocumentType* dtNode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlLoader*>::get(), "LoadDocumentType", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::IDtdInfo*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDocumentType*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dtdInfo, dtNode);
}
inline ::System::Xml::XmlParserContext* System::Xml::XmlLoader::GetContext(::System::Xml::XmlNode* node) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlLoader*>::get(), "GetContext", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlParserContext*, false>(this, ___internal_method, node);
}
inline ::System::Xml::XmlNamespaceManager* System::Xml::XmlLoader::ParsePartialContent(::System::Xml::XmlNode* parentNode, ::StringW innerxmltext, ::System::Xml::XmlNodeType nt) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlLoader*>::get(), "ParsePartialContent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNode*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNodeType>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNamespaceManager*, false>(this, ___internal_method, parentNode, innerxmltext, nt);
}
inline void System::Xml::XmlLoader::LoadInnerXmlElement(::System::Xml::XmlElement* node, ::StringW innerxmltext) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlLoader*>::get(), "LoadInnerXmlElement", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlElement*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node, innerxmltext);
}
inline void System::Xml::XmlLoader::LoadInnerXmlAttribute(::System::Xml::XmlAttribute* node, ::StringW innerxmltext) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlLoader*>::get(), "LoadInnerXmlAttribute", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlAttribute*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node, innerxmltext);
}
inline void System::Xml::XmlLoader::RemoveDuplicateNamespace(::System::Xml::XmlElement* elem, ::System::Xml::XmlNamespaceManager* mgr, bool fCheckElemAttrs) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlLoader*>::get(), "RemoveDuplicateNamespace", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlElement*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNamespaceManager*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, elem, mgr, fCheckElemAttrs);
}
inline ::StringW System::Xml::XmlLoader::EntitizeName(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlLoader*>::get(), "EntitizeName", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, name);
}
inline void System::Xml::XmlLoader::ExpandEntity(::System::Xml::XmlEntity* ent) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlLoader*>::get(), "ExpandEntity", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlEntity*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ent);
}
inline void System::Xml::XmlLoader::ExpandEntityReference(::System::Xml::XmlEntityReference* eref) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlLoader*>::get(), "ExpandEntityReference", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlEntityReference*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eref);
}
inline ::System::Xml::XmlReader* System::Xml::XmlLoader::CreateInnerXmlReader(::StringW xmlFragment, ::System::Xml::XmlNodeType nt, ::System::Xml::XmlParserContext* context,
                                                                              ::System::Xml::XmlDocument* doc) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlLoader*>::get(), "CreateInnerXmlReader", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNodeType>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlParserContext*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDocument*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlReader*, false>(this, ___internal_method, xmlFragment, nt, context, doc);
}
inline void System::Xml::XmlLoader::ParseXmlDeclarationValue(::StringW strValue, ::ByRef<::StringW> version, ::ByRef<::StringW> encoding, ::ByRef<::StringW> standalone) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlLoader*>::get(), "ParseXmlDeclarationValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, strValue, version, encoding, standalone);
}
inline ::System::Exception* System::Xml::XmlLoader::UnexpectedNodeType(::System::Xml::XmlNodeType nodetype) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlLoader*>::get(), "UnexpectedNodeType", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNodeType>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(nullptr, ___internal_method, nodetype);
}
inline ::System::Xml::XmlLoader* System::Xml::XmlLoader::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::XmlLoader*>());
}
// Ctor Parameters []
constexpr ::System::Xml::XmlLoader::XmlLoader() {}
