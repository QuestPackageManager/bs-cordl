#pragma once
// IWYU pragma private; include "System/Xml/XmlBaseReader.hpp"
#include "System/Xml/zzzz__ReadState_impl.hpp"
#include "System/Xml/zzzz__XmlBaseReader_impl.hpp"
#include "System/Xml/zzzz__XmlDictionaryReader_impl.hpp"
#include "System/Xml/zzzz__XmlNameTable_impl.hpp"
#include "System/Xml/zzzz__XmlNodeType_impl.hpp"
#include "System/Xml/zzzz__XmlSpace_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/zzzz__XmlBaseReader_def.hpp"
#include "System/Collections/zzzz__IComparer_def.hpp"
#include "System/Text/zzzz__Base64Encoding_def.hpp"
#include "System/Text/zzzz__BinHexEncoding_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/Xml/zzzz__IXmlNamespaceResolver_def.hpp"
#include "System/Xml/zzzz__PrefixHandleType_def.hpp"
#include "System/Xml/zzzz__PrefixHandle_def.hpp"
#include "System/Xml/zzzz__ReadState_def.hpp"
#include "System/Xml/zzzz__StringHandle_def.hpp"
#include "System/Xml/zzzz__UniqueId_def.hpp"
#include "System/Xml/zzzz__ValueHandle_def.hpp"
#include "System/Xml/zzzz__XmlBaseReader_def.hpp"
#include "System/Xml/zzzz__XmlBufferReader_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryReaderQuotas_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryReader_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryString_def.hpp"
#include "System/Xml/zzzz__XmlNameTable_def.hpp"
#include "System/Xml/zzzz__XmlNodeType_def.hpp"
#include "System/Xml/zzzz__XmlSigningNodeWriter_def.hpp"
#include "System/Xml/zzzz__XmlSpace_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "System/zzzz__Type_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::XmlBaseReader_QNameType::XmlBaseReader_QNameType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::XmlBaseReader_QNameType::XmlBaseReader_QNameType() {}
constexpr ::System::Xml::XmlBaseReader_QNameType System::Xml::XmlBaseReader_QNameType::Normal{ static_cast<int32_t>(0x0) };
constexpr ::System::Xml::XmlBaseReader_QNameType System::Xml::XmlBaseReader_QNameType::Xmlns{ static_cast<int32_t>(0x1) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::XmlNode_XmlBaseReader_XmlNodeFlags::XmlNode_XmlBaseReader_XmlNodeFlags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::XmlNode_XmlBaseReader_XmlNodeFlags::XmlNode_XmlBaseReader_XmlNodeFlags() {}
constexpr ::System::Xml::XmlNode_XmlBaseReader_XmlNodeFlags System::Xml::XmlNode_XmlBaseReader_XmlNodeFlags::None{ static_cast<int32_t>(0x0) };
constexpr ::System::Xml::XmlNode_XmlBaseReader_XmlNodeFlags System::Xml::XmlNode_XmlBaseReader_XmlNodeFlags::CanGetAttribute{ static_cast<int32_t>(0x1) };
constexpr ::System::Xml::XmlNode_XmlBaseReader_XmlNodeFlags System::Xml::XmlNode_XmlBaseReader_XmlNodeFlags::CanMoveToElement{ static_cast<int32_t>(0x2) };
constexpr ::System::Xml::XmlNode_XmlBaseReader_XmlNodeFlags System::Xml::XmlNode_XmlBaseReader_XmlNodeFlags::HasValue{ static_cast<int32_t>(0x4) };
constexpr ::System::Xml::XmlNode_XmlBaseReader_XmlNodeFlags System::Xml::XmlNode_XmlBaseReader_XmlNodeFlags::AtomicValue{ static_cast<int32_t>(0x8) };
constexpr ::System::Xml::XmlNode_XmlBaseReader_XmlNodeFlags System::Xml::XmlNode_XmlBaseReader_XmlNodeFlags::SkipValue{ static_cast<int32_t>(0x10) };
constexpr ::System::Xml::XmlNode_XmlBaseReader_XmlNodeFlags System::Xml::XmlNode_XmlBaseReader_XmlNodeFlags::HasContent{ static_cast<int32_t>(0x20) };
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlNode._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlBaseReader_XmlNode::*)(
    ::System::Xml::XmlNodeType, ::System::Xml::PrefixHandle*, ::System::Xml::StringHandle*, ::System::Xml::ValueHandle*, ::System::Xml::XmlNode_XmlBaseReader_XmlNodeFlags, ::System::Xml::ReadState,
    ::System::Xml::XmlBaseReader_XmlAttributeTextNode*, int32_t)>(&::System::Xml::XmlBaseReader_XmlNode::_ctor)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5f5a140;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlNode*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 8>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNodeType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::PrefixHandle*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::StringHandle*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::ValueHandle*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNode_XmlBaseReader_XmlNodeFlags>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::ReadState>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlBaseReader_XmlAttributeTextNode*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlNode.get_ReadState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::ReadState (::System::Xml::XmlBaseReader_XmlNode::*)()>(
    &::System::Xml::XmlBaseReader_XmlNode::get_ReadState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5a280;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlNode*>::get(), "get_ReadState",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlNode.get_LocalName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::StringHandle* (::System::Xml::XmlBaseReader_XmlNode::*)()>(
    &::System::Xml::XmlBaseReader_XmlNode::get_LocalName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5a288;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlNode*>::get(), "get_LocalName",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlNode.get_Prefix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::PrefixHandle* (::System::Xml::XmlBaseReader_XmlNode::*)()>(
    &::System::Xml::XmlBaseReader_XmlNode::get_Prefix)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5a290;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlNode*>::get(), "get_Prefix",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlNode.get_CanGetAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlBaseReader_XmlNode::*)()>(&::System::Xml::XmlBaseReader_XmlNode::get_CanGetAttribute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5a298;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlNode*>::get(),
                                                                               "get_CanGetAttribute", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlNode.get_CanMoveToElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlBaseReader_XmlNode::*)()>(&::System::Xml::XmlBaseReader_XmlNode::get_CanMoveToElement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5a2a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlNode*>::get(),
                                                                               "get_CanMoveToElement", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlNode.get_AttributeText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlBaseReader_XmlAttributeTextNode* (::System::Xml::XmlBaseReader_XmlNode::*)()>(
    &::System::Xml::XmlBaseReader_XmlNode::get_AttributeText)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5a2a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlNode*>::get(),
                                                                               "get_AttributeText", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlNode.get_SkipValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlBaseReader_XmlNode::*)()>(&::System::Xml::XmlBaseReader_XmlNode::get_SkipValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5a2b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlNode*>::get(), "get_SkipValue",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlNode.get_Value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::ValueHandle* (::System::Xml::XmlBaseReader_XmlNode::*)()>(
    &::System::Xml::XmlBaseReader_XmlNode::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5a2b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlNode*>::get(), "get_Value",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlNode.get_DepthDelta
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlBaseReader_XmlNode::*)()>(&::System::Xml::XmlBaseReader_XmlNode::get_DepthDelta)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5a2c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlNode*>::get(), "get_DepthDelta",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlNode.get_HasContent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlBaseReader_XmlNode::*)()>(&::System::Xml::XmlBaseReader_XmlNode::get_HasContent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5a2c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlNode*>::get(), "get_HasContent",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlNode.get_NodeType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNodeType (::System::Xml::XmlBaseReader_XmlNode::*)()>(
    &::System::Xml::XmlBaseReader_XmlNode::get_NodeType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5a2d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlNode*>::get(), "get_NodeType",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlNode.set_NodeType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlBaseReader_XmlNode::*)(::System::Xml::XmlNodeType)>(
    &::System::Xml::XmlBaseReader_XmlNode::set_NodeType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5a2d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlNode*>::get(), "set_NodeType", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNodeType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlNode.get_QNameType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlBaseReader_QNameType (::System::Xml::XmlBaseReader_XmlNode::*)()>(
    &::System::Xml::XmlBaseReader_XmlNode::get_QNameType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5a2e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlNode*>::get(), "get_QNameType",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlNode.set_QNameType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlBaseReader_XmlNode::*)(::System::Xml::XmlBaseReader_QNameType)>(
    &::System::Xml::XmlBaseReader_XmlNode::set_QNameType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5a2e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlNode*>::get(), "set_QNameType", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlBaseReader_QNameType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlNode.get_Namespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlBaseReader_Namespace* (::System::Xml::XmlBaseReader_XmlNode::*)()>(
    &::System::Xml::XmlBaseReader_XmlNode::get_Namespace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5a2f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlNode*>::get(), "get_Namespace",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlNode.set_Namespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlBaseReader_XmlNode::*)(::System::Xml::XmlBaseReader_Namespace*)>(
    &::System::Xml::XmlBaseReader_XmlNode::set_Namespace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5a2f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlNode*>::get(), "set_Namespace", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlBaseReader_Namespace*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlNode.get_IsAtomicValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlBaseReader_XmlNode::*)()>(&::System::Xml::XmlBaseReader_XmlNode::get_IsAtomicValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5a300;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlNode*>::get(),
                                                                               "get_IsAtomicValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlNode.set_IsAtomicValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlBaseReader_XmlNode::*)(bool)>(&::System::Xml::XmlBaseReader_XmlNode::set_IsAtomicValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5a308;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlNode*>::get(), "set_IsAtomicValue",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlNode.get_ExitScope
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlBaseReader_XmlNode::*)()>(&::System::Xml::XmlBaseReader_XmlNode::get_ExitScope)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5a310;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlNode*>::get(), "get_ExitScope",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlNode.set_ExitScope
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlBaseReader_XmlNode::*)(bool)>(&::System::Xml::XmlBaseReader_XmlNode::set_ExitScope)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5a318;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlNode*>::get(), "set_ExitScope",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlNode.get_IsEmptyElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlBaseReader_XmlNode::*)()>(&::System::Xml::XmlBaseReader_XmlNode::get_IsEmptyElement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5a320;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlNode*>::get(),
                                                                               "get_IsEmptyElement", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlNode.set_IsEmptyElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlBaseReader_XmlNode::*)(bool)>(&::System::Xml::XmlBaseReader_XmlNode::set_IsEmptyElement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5a328;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlNode*>::get(), "set_IsEmptyElement",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlNode.get_QuoteChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (::System::Xml::XmlBaseReader_XmlNode::*)()>(&::System::Xml::XmlBaseReader_XmlNode::get_QuoteChar)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5a330;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlNode*>::get(), "get_QuoteChar",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlNode.set_QuoteChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlBaseReader_XmlNode::*)(char16_t)>(&::System::Xml::XmlBaseReader_XmlNode::set_QuoteChar)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5a338;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlNode*>::get(), "set_QuoteChar", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlNode.IsLocalName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlBaseReader_XmlNode::*)(::StringW)>(&::System::Xml::XmlBaseReader_XmlNode::IsLocalName)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5f568ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlNode*>::get(), "IsLocalName", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlNode.IsLocalName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlBaseReader_XmlNode::*)(::System::Xml::XmlDictionaryString*)>(
    &::System::Xml::XmlBaseReader_XmlNode::IsLocalName)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5f569dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlNode*>::get(), "IsLocalName", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryString*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlNode.IsNamespaceUri
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlBaseReader_XmlNode::*)(::StringW)>(&::System::Xml::XmlBaseReader_XmlNode::IsNamespaceUri)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5f56af0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlNode*>::get(), "IsNamespaceUri", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlNode.IsNamespaceUri
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlBaseReader_XmlNode::*)(::System::Xml::XmlDictionaryString*)>(
    &::System::Xml::XmlBaseReader_XmlNode::IsNamespaceUri)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5f56bbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlNode*>::get(), "IsNamespaceUri", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryString*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlNode.IsLocalNameAndNamespaceUri
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlBaseReader_XmlNode::*)(::StringW, ::StringW)>(
    &::System::Xml::XmlBaseReader_XmlNode::IsLocalNameAndNamespaceUri)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5f554bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlNode*>::get(), "IsLocalNameAndNamespaceUri", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlNode.IsPrefixAndLocalName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlBaseReader_XmlNode::*)(::StringW, ::StringW)>(
    &::System::Xml::XmlBaseReader_XmlNode::IsPrefixAndLocalName)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5f55268;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlNode*>::get(), "IsPrefixAndLocalName", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlNode.TryGetLocalNameAsDictionaryString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlBaseReader_XmlNode::*)(::ByRef<::System::Xml::XmlDictionaryString*>)>(
    &::System::Xml::XmlBaseReader_XmlNode::TryGetLocalNameAsDictionaryString)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5f59704;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlNode*>::get(), "TryGetLocalNameAsDictionaryString", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Xml::XmlDictionaryString*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlNode.TryGetNamespaceUriAsDictionaryString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlBaseReader_XmlNode::*)(::ByRef<::System::Xml::XmlDictionaryString*>)>(
    &::System::Xml::XmlBaseReader_XmlNode::TryGetNamespaceUriAsDictionaryString)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5f59740;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlNode*>::get(), "TryGetNamespaceUriAsDictionaryString", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Xml::XmlDictionaryString*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlNode.TryGetValueAsDictionaryString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlBaseReader_XmlNode::*)(::ByRef<::System::Xml::XmlDictionaryString*>)>(
    &::System::Xml::XmlBaseReader_XmlNode::TryGetValueAsDictionaryString)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5f5978c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlNode*>::get(), "TryGetValueAsDictionaryString", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Xml::XmlDictionaryString*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlNode.get_ValueAsString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlBaseReader_XmlNode::*)()>(&::System::Xml::XmlBaseReader_XmlNode::get_ValueAsString)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5f555f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlNode*>::get(),
                                                                               "get_ValueAsString", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlNodeType& System::Xml::XmlBaseReader_XmlNode::__cordl_internal_get_nodeType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nodeType;
}
constexpr ::System::Xml::XmlNodeType const& System::Xml::XmlBaseReader_XmlNode::__cordl_internal_get_nodeType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nodeType;
}
constexpr void System::Xml::XmlBaseReader_XmlNode::__cordl_internal_set_nodeType(::System::Xml::XmlNodeType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nodeType = value;
}
constexpr ::System::Xml::PrefixHandle*& System::Xml::XmlBaseReader_XmlNode::__cordl_internal_get_prefix() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prefix;
}
constexpr ::System::Xml::PrefixHandle* const& System::Xml::XmlBaseReader_XmlNode::__cordl_internal_get_prefix() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prefix;
}
constexpr void System::Xml::XmlBaseReader_XmlNode::__cordl_internal_set_prefix(::System::Xml::PrefixHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___prefix)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::StringHandle*& System::Xml::XmlBaseReader_XmlNode::__cordl_internal_get_localName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localName;
}
constexpr ::System::Xml::StringHandle* const& System::Xml::XmlBaseReader_XmlNode::__cordl_internal_get_localName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localName;
}
constexpr void System::Xml::XmlBaseReader_XmlNode::__cordl_internal_set_localName(::System::Xml::StringHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___localName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::ValueHandle*& System::Xml::XmlBaseReader_XmlNode::__cordl_internal_get_value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr ::System::Xml::ValueHandle* const& System::Xml::XmlBaseReader_XmlNode::__cordl_internal_get_value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr void System::Xml::XmlBaseReader_XmlNode::__cordl_internal_set_value(::System::Xml::ValueHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___value)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlBaseReader_Namespace*& System::Xml::XmlBaseReader_XmlNode::__cordl_internal_get_ns() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ns;
}
constexpr ::System::Xml::XmlBaseReader_Namespace* const& System::Xml::XmlBaseReader_XmlNode::__cordl_internal_get_ns() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ns;
}
constexpr void System::Xml::XmlBaseReader_XmlNode::__cordl_internal_set_ns(::System::Xml::XmlBaseReader_Namespace* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ns)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Xml::XmlBaseReader_XmlNode::__cordl_internal_get_hasValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasValue;
}
constexpr bool const& System::Xml::XmlBaseReader_XmlNode::__cordl_internal_get_hasValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasValue;
}
constexpr void System::Xml::XmlBaseReader_XmlNode::__cordl_internal_set_hasValue(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasValue = value;
}
constexpr bool& System::Xml::XmlBaseReader_XmlNode::__cordl_internal_get_canGetAttribute() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___canGetAttribute;
}
constexpr bool const& System::Xml::XmlBaseReader_XmlNode::__cordl_internal_get_canGetAttribute() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___canGetAttribute;
}
constexpr void System::Xml::XmlBaseReader_XmlNode::__cordl_internal_set_canGetAttribute(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___canGetAttribute = value;
}
constexpr bool& System::Xml::XmlBaseReader_XmlNode::__cordl_internal_get_canMoveToElement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___canMoveToElement;
}
constexpr bool const& System::Xml::XmlBaseReader_XmlNode::__cordl_internal_get_canMoveToElement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___canMoveToElement;
}
constexpr void System::Xml::XmlBaseReader_XmlNode::__cordl_internal_set_canMoveToElement(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___canMoveToElement = value;
}
constexpr ::System::Xml::ReadState& System::Xml::XmlBaseReader_XmlNode::__cordl_internal_get_readState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readState;
}
constexpr ::System::Xml::ReadState const& System::Xml::XmlBaseReader_XmlNode::__cordl_internal_get_readState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readState;
}
constexpr void System::Xml::XmlBaseReader_XmlNode::__cordl_internal_set_readState(::System::Xml::ReadState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___readState = value;
}
constexpr ::System::Xml::XmlBaseReader_XmlAttributeTextNode*& System::Xml::XmlBaseReader_XmlNode::__cordl_internal_get_attributeTextNode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeTextNode;
}
constexpr ::System::Xml::XmlBaseReader_XmlAttributeTextNode* const& System::Xml::XmlBaseReader_XmlNode::__cordl_internal_get_attributeTextNode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeTextNode;
}
constexpr void System::Xml::XmlBaseReader_XmlNode::__cordl_internal_set_attributeTextNode(::System::Xml::XmlBaseReader_XmlAttributeTextNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___attributeTextNode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Xml::XmlBaseReader_XmlNode::__cordl_internal_get_exitScope() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___exitScope;
}
constexpr bool const& System::Xml::XmlBaseReader_XmlNode::__cordl_internal_get_exitScope() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___exitScope;
}
constexpr void System::Xml::XmlBaseReader_XmlNode::__cordl_internal_set_exitScope(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___exitScope = value;
}
constexpr int32_t& System::Xml::XmlBaseReader_XmlNode::__cordl_internal_get_depthDelta() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___depthDelta;
}
constexpr int32_t const& System::Xml::XmlBaseReader_XmlNode::__cordl_internal_get_depthDelta() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___depthDelta;
}
constexpr void System::Xml::XmlBaseReader_XmlNode::__cordl_internal_set_depthDelta(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___depthDelta = value;
}
constexpr bool& System::Xml::XmlBaseReader_XmlNode::__cordl_internal_get_isAtomicValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isAtomicValue;
}
constexpr bool const& System::Xml::XmlBaseReader_XmlNode::__cordl_internal_get_isAtomicValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isAtomicValue;
}
constexpr void System::Xml::XmlBaseReader_XmlNode::__cordl_internal_set_isAtomicValue(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isAtomicValue = value;
}
constexpr bool& System::Xml::XmlBaseReader_XmlNode::__cordl_internal_get_skipValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___skipValue;
}
constexpr bool const& System::Xml::XmlBaseReader_XmlNode::__cordl_internal_get_skipValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___skipValue;
}
constexpr void System::Xml::XmlBaseReader_XmlNode::__cordl_internal_set_skipValue(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___skipValue = value;
}
constexpr ::System::Xml::XmlBaseReader_QNameType& System::Xml::XmlBaseReader_XmlNode::__cordl_internal_get_qnameType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___qnameType;
}
constexpr ::System::Xml::XmlBaseReader_QNameType const& System::Xml::XmlBaseReader_XmlNode::__cordl_internal_get_qnameType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___qnameType;
}
constexpr void System::Xml::XmlBaseReader_XmlNode::__cordl_internal_set_qnameType(::System::Xml::XmlBaseReader_QNameType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___qnameType = value;
}
constexpr bool& System::Xml::XmlBaseReader_XmlNode::__cordl_internal_get_hasContent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasContent;
}
constexpr bool const& System::Xml::XmlBaseReader_XmlNode::__cordl_internal_get_hasContent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasContent;
}
constexpr void System::Xml::XmlBaseReader_XmlNode::__cordl_internal_set_hasContent(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasContent = value;
}
constexpr bool& System::Xml::XmlBaseReader_XmlNode::__cordl_internal_get_isEmptyElement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isEmptyElement;
}
constexpr bool const& System::Xml::XmlBaseReader_XmlNode::__cordl_internal_get_isEmptyElement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isEmptyElement;
}
constexpr void System::Xml::XmlBaseReader_XmlNode::__cordl_internal_set_isEmptyElement(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isEmptyElement = value;
}
constexpr char16_t& System::Xml::XmlBaseReader_XmlNode::__cordl_internal_get_quoteChar() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___quoteChar;
}
constexpr char16_t const& System::Xml::XmlBaseReader_XmlNode::__cordl_internal_get_quoteChar() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___quoteChar;
}
constexpr void System::Xml::XmlBaseReader_XmlNode::__cordl_internal_set_quoteChar(char16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___quoteChar = value;
}
inline void System::Xml::XmlBaseReader_XmlNode::_ctor(::System::Xml::XmlNodeType nodeType, ::System::Xml::PrefixHandle* prefix, ::System::Xml::StringHandle* localName,
                                                      ::System::Xml::ValueHandle* value, ::System::Xml::XmlNode_XmlBaseReader_XmlNodeFlags nodeFlags, ::System::Xml::ReadState readState,
                                                      ::System::Xml::XmlBaseReader_XmlAttributeTextNode* attributeTextNode, int32_t depthDelta) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlNode*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 8>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNodeType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::PrefixHandle*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::StringHandle*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::ValueHandle*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNode_XmlBaseReader_XmlNodeFlags>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::ReadState>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlBaseReader_XmlAttributeTextNode*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nodeType, prefix, localName, value, nodeFlags, readState, attributeTextNode, depthDelta);
}
inline ::System::Xml::ReadState System::Xml::XmlBaseReader_XmlNode::get_ReadState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlNode*>::get(), "get_ReadState",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::ReadState, false>(this, ___internal_method);
}
inline ::System::Xml::StringHandle* System::Xml::XmlBaseReader_XmlNode::get_LocalName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlNode*>::get(), "get_LocalName",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::StringHandle*, false>(this, ___internal_method);
}
inline ::System::Xml::PrefixHandle* System::Xml::XmlBaseReader_XmlNode::get_Prefix() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlNode*>::get(), "get_Prefix",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::PrefixHandle*, false>(this, ___internal_method);
}
inline bool System::Xml::XmlBaseReader_XmlNode::get_CanGetAttribute() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlNode*>::get(),
                                                                             "get_CanGetAttribute", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Xml::XmlBaseReader_XmlNode::get_CanMoveToElement() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlNode*>::get(),
                                                                             "get_CanMoveToElement", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Xml::XmlBaseReader_XmlAttributeTextNode* System::Xml::XmlBaseReader_XmlNode::get_AttributeText() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlNode*>::get(), "get_AttributeText",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlBaseReader_XmlAttributeTextNode*, false>(this, ___internal_method);
}
inline bool System::Xml::XmlBaseReader_XmlNode::get_SkipValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlNode*>::get(), "get_SkipValue",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Xml::ValueHandle* System::Xml::XmlBaseReader_XmlNode::get_Value() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlNode*>::get(), "get_Value",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::ValueHandle*, false>(this, ___internal_method);
}
inline int32_t System::Xml::XmlBaseReader_XmlNode::get_DepthDelta() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlNode*>::get(), "get_DepthDelta",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool System::Xml::XmlBaseReader_XmlNode::get_HasContent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlNode*>::get(), "get_HasContent",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Xml::XmlNodeType System::Xml::XmlBaseReader_XmlNode::get_NodeType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlNode*>::get(), "get_NodeType",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNodeType, false>(this, ___internal_method);
}
inline void System::Xml::XmlBaseReader_XmlNode::set_NodeType(::System::Xml::XmlNodeType value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlNode*>::get(), "set_NodeType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNodeType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Xml::XmlBaseReader_QNameType System::Xml::XmlBaseReader_XmlNode::get_QNameType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlNode*>::get(), "get_QNameType",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlBaseReader_QNameType, false>(this, ___internal_method);
}
inline void System::Xml::XmlBaseReader_XmlNode::set_QNameType(::System::Xml::XmlBaseReader_QNameType value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlNode*>::get(), "set_QNameType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlBaseReader_QNameType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Xml::XmlBaseReader_Namespace* System::Xml::XmlBaseReader_XmlNode::get_Namespace() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlNode*>::get(), "get_Namespace",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlBaseReader_Namespace*, false>(this, ___internal_method);
}
inline void System::Xml::XmlBaseReader_XmlNode::set_Namespace(::System::Xml::XmlBaseReader_Namespace* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlNode*>::get(), "set_Namespace", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlBaseReader_Namespace*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool System::Xml::XmlBaseReader_XmlNode::get_IsAtomicValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlNode*>::get(), "get_IsAtomicValue",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Xml::XmlBaseReader_XmlNode::set_IsAtomicValue(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlNode*>::get(), "set_IsAtomicValue",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool System::Xml::XmlBaseReader_XmlNode::get_ExitScope() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlNode*>::get(), "get_ExitScope",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Xml::XmlBaseReader_XmlNode::set_ExitScope(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlNode*>::get(), "set_ExitScope",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool System::Xml::XmlBaseReader_XmlNode::get_IsEmptyElement() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlNode*>::get(), "get_IsEmptyElement",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Xml::XmlBaseReader_XmlNode::set_IsEmptyElement(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlNode*>::get(), "set_IsEmptyElement",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline char16_t System::Xml::XmlBaseReader_XmlNode::get_QuoteChar() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlNode*>::get(), "get_QuoteChar",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<char16_t, false>(this, ___internal_method);
}
inline void System::Xml::XmlBaseReader_XmlNode::set_QuoteChar(char16_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlNode*>::get(), "set_QuoteChar", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool System::Xml::XmlBaseReader_XmlNode::IsLocalName(::StringW localName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlNode*>::get(), "IsLocalName", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, localName);
}
inline bool System::Xml::XmlBaseReader_XmlNode::IsLocalName(::System::Xml::XmlDictionaryString* localName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlNode*>::get(), "IsLocalName", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryString*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, localName);
}
inline bool System::Xml::XmlBaseReader_XmlNode::IsNamespaceUri(::StringW ns) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlNode*>::get(), "IsNamespaceUri", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, ns);
}
inline bool System::Xml::XmlBaseReader_XmlNode::IsNamespaceUri(::System::Xml::XmlDictionaryString* ns) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlNode*>::get(), "IsNamespaceUri", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryString*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, ns);
}
inline bool System::Xml::XmlBaseReader_XmlNode::IsLocalNameAndNamespaceUri(::StringW localName, ::StringW ns) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlNode*>::get(), "IsLocalNameAndNamespaceUri", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, localName, ns);
}
inline bool System::Xml::XmlBaseReader_XmlNode::IsPrefixAndLocalName(::StringW prefix, ::StringW localName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlNode*>::get(), "IsPrefixAndLocalName", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, prefix, localName);
}
inline bool System::Xml::XmlBaseReader_XmlNode::TryGetLocalNameAsDictionaryString(::ByRef<::System::Xml::XmlDictionaryString*> localName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlNode*>::get(), "TryGetLocalNameAsDictionaryString", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Xml::XmlDictionaryString*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, localName);
}
inline bool System::Xml::XmlBaseReader_XmlNode::TryGetNamespaceUriAsDictionaryString(::ByRef<::System::Xml::XmlDictionaryString*> ns) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlNode*>::get(), "TryGetNamespaceUriAsDictionaryString", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Xml::XmlDictionaryString*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, ns);
}
inline bool System::Xml::XmlBaseReader_XmlNode::TryGetValueAsDictionaryString(::ByRef<::System::Xml::XmlDictionaryString*> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlNode*>::get(), "TryGetValueAsDictionaryString", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Xml::XmlDictionaryString*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value);
}
inline ::StringW System::Xml::XmlBaseReader_XmlNode::get_ValueAsString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlNode*>::get(), "get_ValueAsString",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Xml::XmlBaseReader_XmlNode* System::Xml::XmlBaseReader_XmlNode::New_ctor(::System::Xml::XmlNodeType nodeType, ::System::Xml::PrefixHandle* prefix,
                                                                                          ::System::Xml::StringHandle* localName, ::System::Xml::ValueHandle* value,
                                                                                          ::System::Xml::XmlNode_XmlBaseReader_XmlNodeFlags nodeFlags, ::System::Xml::ReadState readState,
                                                                                          ::System::Xml::XmlBaseReader_XmlAttributeTextNode* attributeTextNode, int32_t depthDelta) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::XmlBaseReader_XmlNode*>(nodeType, prefix, localName, value, nodeFlags, readState, attributeTextNode, depthDelta));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlBaseReader_XmlNode::XmlBaseReader_XmlNode() {}
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlElementNode._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlBaseReader_XmlElementNode::*)(::System::Xml::XmlBufferReader*)>(
    &::System::Xml::XmlBaseReader_XmlElementNode::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5f52ca0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlElementNode*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlBufferReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlElementNode._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlBaseReader_XmlElementNode::*)(
    ::System::Xml::PrefixHandle*, ::System::Xml::StringHandle*, ::System::Xml::ValueHandle*)>(&::System::Xml::XmlBaseReader_XmlElementNode::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5f5a47c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlElementNode*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::PrefixHandle*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::StringHandle*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::ValueHandle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlElementNode.get_EndElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlBaseReader_XmlEndElementNode* (::System::Xml::XmlBaseReader_XmlElementNode::*)()>(
    &::System::Xml::XmlBaseReader_XmlElementNode::get_EndElement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5a580;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlElementNode*>::get(),
                                                                               "get_EndElement", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlElementNode.get_BufferOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlBaseReader_XmlElementNode::*)()>(
    &::System::Xml::XmlBaseReader_XmlElementNode::get_BufferOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5a588;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlElementNode*>::get(),
                                                                               "get_BufferOffset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlElementNode.set_BufferOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlBaseReader_XmlElementNode::*)(int32_t)>(
    &::System::Xml::XmlBaseReader_XmlElementNode::set_BufferOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5a590;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlElementNode*>::get(), "set_BufferOffset",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlBaseReader_XmlEndElementNode*& System::Xml::XmlBaseReader_XmlElementNode::__cordl_internal_get_endElementNode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endElementNode;
}
constexpr ::System::Xml::XmlBaseReader_XmlEndElementNode* const& System::Xml::XmlBaseReader_XmlElementNode::__cordl_internal_get_endElementNode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endElementNode;
}
constexpr void System::Xml::XmlBaseReader_XmlElementNode::__cordl_internal_set_endElementNode(::System::Xml::XmlBaseReader_XmlEndElementNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___endElementNode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Xml::XmlBaseReader_XmlElementNode::__cordl_internal_get_bufferOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bufferOffset;
}
constexpr int32_t const& System::Xml::XmlBaseReader_XmlElementNode::__cordl_internal_get_bufferOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bufferOffset;
}
constexpr void System::Xml::XmlBaseReader_XmlElementNode::__cordl_internal_set_bufferOffset(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bufferOffset = value;
}
constexpr int32_t& System::Xml::XmlBaseReader_XmlElementNode::__cordl_internal_get_NameOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NameOffset;
}
constexpr int32_t const& System::Xml::XmlBaseReader_XmlElementNode::__cordl_internal_get_NameOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NameOffset;
}
constexpr void System::Xml::XmlBaseReader_XmlElementNode::__cordl_internal_set_NameOffset(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___NameOffset = value;
}
constexpr int32_t& System::Xml::XmlBaseReader_XmlElementNode::__cordl_internal_get_NameLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NameLength;
}
constexpr int32_t const& System::Xml::XmlBaseReader_XmlElementNode::__cordl_internal_get_NameLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NameLength;
}
constexpr void System::Xml::XmlBaseReader_XmlElementNode::__cordl_internal_set_NameLength(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___NameLength = value;
}
inline void System::Xml::XmlBaseReader_XmlElementNode::_ctor(::System::Xml::XmlBufferReader* bufferReader) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlElementNode*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlBufferReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bufferReader);
}
inline void System::Xml::XmlBaseReader_XmlElementNode::_ctor(::System::Xml::PrefixHandle* prefix, ::System::Xml::StringHandle* localName, ::System::Xml::ValueHandle* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlElementNode*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::PrefixHandle*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::StringHandle*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::ValueHandle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, prefix, localName, value);
}
inline ::System::Xml::XmlBaseReader_XmlEndElementNode* System::Xml::XmlBaseReader_XmlElementNode::get_EndElement() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlElementNode*>::get(),
                                                                             "get_EndElement", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlBaseReader_XmlEndElementNode*, false>(this, ___internal_method);
}
inline int32_t System::Xml::XmlBaseReader_XmlElementNode::get_BufferOffset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlElementNode*>::get(),
                                                                             "get_BufferOffset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void System::Xml::XmlBaseReader_XmlElementNode::set_BufferOffset(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlElementNode*>::get(), "set_BufferOffset",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Xml::XmlBaseReader_XmlElementNode* System::Xml::XmlBaseReader_XmlElementNode::New_ctor(::System::Xml::XmlBufferReader* bufferReader) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::XmlBaseReader_XmlElementNode*>(bufferReader));
}
inline ::System::Xml::XmlBaseReader_XmlElementNode* System::Xml::XmlBaseReader_XmlElementNode::New_ctor(::System::Xml::PrefixHandle* prefix, ::System::Xml::StringHandle* localName,
                                                                                                        ::System::Xml::ValueHandle* value) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::XmlBaseReader_XmlElementNode*>(prefix, localName, value));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlBaseReader_XmlElementNode::XmlBaseReader_XmlElementNode() {}
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlAttributeNode._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlBaseReader_XmlAttributeNode::*)(::System::Xml::XmlBufferReader*)>(
    &::System::Xml::XmlBaseReader_XmlAttributeNode::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5f54520;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlAttributeNode*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlBufferReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlAttributeNode._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlBaseReader_XmlAttributeNode::*)(
    ::System::Xml::PrefixHandle*, ::System::Xml::StringHandle*, ::System::Xml::ValueHandle*)>(&::System::Xml::XmlBaseReader_XmlAttributeNode::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5f5a598;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlAttributeNode*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::PrefixHandle*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::StringHandle*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::ValueHandle*>::get() })));
    return ___internal_method;
  }
};
inline void System::Xml::XmlBaseReader_XmlAttributeNode::_ctor(::System::Xml::XmlBufferReader* bufferReader) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlAttributeNode*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlBufferReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bufferReader);
}
inline void System::Xml::XmlBaseReader_XmlAttributeNode::_ctor(::System::Xml::PrefixHandle* prefix, ::System::Xml::StringHandle* localName, ::System::Xml::ValueHandle* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlAttributeNode*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::PrefixHandle*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::StringHandle*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::ValueHandle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, prefix, localName, value);
}
inline ::System::Xml::XmlBaseReader_XmlAttributeNode* System::Xml::XmlBaseReader_XmlAttributeNode::New_ctor(::System::Xml::XmlBufferReader* bufferReader) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::XmlBaseReader_XmlAttributeNode*>(bufferReader));
}
inline ::System::Xml::XmlBaseReader_XmlAttributeNode* System::Xml::XmlBaseReader_XmlAttributeNode::New_ctor(::System::Xml::PrefixHandle* prefix, ::System::Xml::StringHandle* localName,
                                                                                                            ::System::Xml::ValueHandle* value) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::XmlBaseReader_XmlAttributeNode*>(prefix, localName, value));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlBaseReader_XmlAttributeNode::XmlBaseReader_XmlAttributeNode() {}
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlEndElementNode._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlBaseReader_XmlEndElementNode::*)(
    ::System::Xml::PrefixHandle*, ::System::Xml::StringHandle*, ::System::Xml::ValueHandle*)>(&::System::Xml::XmlBaseReader_XmlEndElementNode::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5f5a544;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlEndElementNode*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::PrefixHandle*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::StringHandle*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::ValueHandle*>::get() })));
    return ___internal_method;
  }
};
inline void System::Xml::XmlBaseReader_XmlEndElementNode::_ctor(::System::Xml::PrefixHandle* prefix, ::System::Xml::StringHandle* localName, ::System::Xml::ValueHandle* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlEndElementNode*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::PrefixHandle*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::StringHandle*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::ValueHandle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, prefix, localName, value);
}
inline ::System::Xml::XmlBaseReader_XmlEndElementNode* System::Xml::XmlBaseReader_XmlEndElementNode::New_ctor(::System::Xml::PrefixHandle* prefix, ::System::Xml::StringHandle* localName,
                                                                                                              ::System::Xml::ValueHandle* value) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::XmlBaseReader_XmlEndElementNode*>(prefix, localName, value));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlBaseReader_XmlEndElementNode::XmlBaseReader_XmlEndElementNode() {}
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlTextNode._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlBaseReader_XmlTextNode::*)(
    ::System::Xml::XmlNodeType, ::System::Xml::PrefixHandle*, ::System::Xml::StringHandle*, ::System::Xml::ValueHandle*, ::System::Xml::XmlNode_XmlBaseReader_XmlNodeFlags, ::System::Xml::ReadState,
    ::System::Xml::XmlBaseReader_XmlAttributeTextNode*, int32_t)>(&::System::Xml::XmlBaseReader_XmlTextNode::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f5a698;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlTextNode*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 8>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNodeType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::PrefixHandle*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::StringHandle*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::ValueHandle*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNode_XmlBaseReader_XmlNodeFlags>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::ReadState>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlBaseReader_XmlAttributeTextNode*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void System::Xml::XmlBaseReader_XmlTextNode::_ctor(::System::Xml::XmlNodeType nodeType, ::System::Xml::PrefixHandle* prefix, ::System::Xml::StringHandle* localName,
                                                          ::System::Xml::ValueHandle* value, ::System::Xml::XmlNode_XmlBaseReader_XmlNodeFlags nodeFlags, ::System::Xml::ReadState readState,
                                                          ::System::Xml::XmlBaseReader_XmlAttributeTextNode* attributeTextNode, int32_t depthDelta) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlTextNode*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 8>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNodeType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::PrefixHandle*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::StringHandle*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::ValueHandle*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNode_XmlBaseReader_XmlNodeFlags>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::ReadState>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlBaseReader_XmlAttributeTextNode*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nodeType, prefix, localName, value, nodeFlags, readState, attributeTextNode, depthDelta);
}
inline ::System::Xml::XmlBaseReader_XmlTextNode* System::Xml::XmlBaseReader_XmlTextNode::New_ctor(::System::Xml::XmlNodeType nodeType, ::System::Xml::PrefixHandle* prefix,
                                                                                                  ::System::Xml::StringHandle* localName, ::System::Xml::ValueHandle* value,
                                                                                                  ::System::Xml::XmlNode_XmlBaseReader_XmlNodeFlags nodeFlags, ::System::Xml::ReadState readState,
                                                                                                  ::System::Xml::XmlBaseReader_XmlAttributeTextNode* attributeTextNode, int32_t depthDelta) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::XmlBaseReader_XmlTextNode*>(nodeType, prefix, localName, value, nodeFlags, readState, attributeTextNode, depthDelta));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlBaseReader_XmlTextNode::XmlBaseReader_XmlTextNode() {}
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlAtomicTextNode._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlBaseReader_XmlAtomicTextNode::*)(::System::Xml::XmlBufferReader*)>(
    &::System::Xml::XmlBaseReader_XmlAtomicTextNode::_ctor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5f52d6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlAtomicTextNode*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlBufferReader*>::get() })));
    return ___internal_method;
  }
};
inline void System::Xml::XmlBaseReader_XmlAtomicTextNode::_ctor(::System::Xml::XmlBufferReader* bufferReader) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlAtomicTextNode*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlBufferReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bufferReader);
}
inline ::System::Xml::XmlBaseReader_XmlAtomicTextNode* System::Xml::XmlBaseReader_XmlAtomicTextNode::New_ctor(::System::Xml::XmlBufferReader* bufferReader) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::XmlBaseReader_XmlAtomicTextNode*>(bufferReader));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlBaseReader_XmlAtomicTextNode::XmlBaseReader_XmlAtomicTextNode() {}
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlComplexTextNode._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlBaseReader_XmlComplexTextNode::*)(::System::Xml::XmlBufferReader*)>(
    &::System::Xml::XmlBaseReader_XmlComplexTextNode::_ctor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5f53c9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlComplexTextNode*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlBufferReader*>::get() })));
    return ___internal_method;
  }
};
inline void System::Xml::XmlBaseReader_XmlComplexTextNode::_ctor(::System::Xml::XmlBufferReader* bufferReader) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlComplexTextNode*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlBufferReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bufferReader);
}
inline ::System::Xml::XmlBaseReader_XmlComplexTextNode* System::Xml::XmlBaseReader_XmlComplexTextNode::New_ctor(::System::Xml::XmlBufferReader* bufferReader) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::XmlBaseReader_XmlComplexTextNode*>(bufferReader));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlBaseReader_XmlComplexTextNode::XmlBaseReader_XmlComplexTextNode() {}
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlWhitespaceTextNode._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlBaseReader_XmlWhitespaceTextNode::*)(::System::Xml::XmlBufferReader*)>(
    &::System::Xml::XmlBaseReader_XmlWhitespaceTextNode::_ctor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5f53e30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlWhitespaceTextNode*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlBufferReader*>::get() })));
    return ___internal_method;
  }
};
inline void System::Xml::XmlBaseReader_XmlWhitespaceTextNode::_ctor(::System::Xml::XmlBufferReader* bufferReader) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlWhitespaceTextNode*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlBufferReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bufferReader);
}
inline ::System::Xml::XmlBaseReader_XmlWhitespaceTextNode* System::Xml::XmlBaseReader_XmlWhitespaceTextNode::New_ctor(::System::Xml::XmlBufferReader* bufferReader) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::XmlBaseReader_XmlWhitespaceTextNode*>(bufferReader));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlBaseReader_XmlWhitespaceTextNode::XmlBaseReader_XmlWhitespaceTextNode() {}
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlCDataNode._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlBaseReader_XmlCDataNode::*)(::System::Xml::XmlBufferReader*)>(
    &::System::Xml::XmlBaseReader_XmlCDataNode::_ctor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5f53b20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlCDataNode*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlBufferReader*>::get() })));
    return ___internal_method;
  }
};
inline void System::Xml::XmlBaseReader_XmlCDataNode::_ctor(::System::Xml::XmlBufferReader* bufferReader) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlCDataNode*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlBufferReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bufferReader);
}
inline ::System::Xml::XmlBaseReader_XmlCDataNode* System::Xml::XmlBaseReader_XmlCDataNode::New_ctor(::System::Xml::XmlBufferReader* bufferReader) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::XmlBaseReader_XmlCDataNode*>(bufferReader));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlBaseReader_XmlCDataNode::XmlBaseReader_XmlCDataNode() {}
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlAttributeTextNode._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlBaseReader_XmlAttributeTextNode::*)(
    ::System::Xml::PrefixHandle*, ::System::Xml::StringHandle*, ::System::Xml::ValueHandle*)>(&::System::Xml::XmlBaseReader_XmlAttributeTextNode::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5f5a65c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlAttributeTextNode*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::PrefixHandle*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::StringHandle*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::ValueHandle*>::get() })));
    return ___internal_method;
  }
};
inline void System::Xml::XmlBaseReader_XmlAttributeTextNode::_ctor(::System::Xml::PrefixHandle* prefix, ::System::Xml::StringHandle* localName, ::System::Xml::ValueHandle* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlAttributeTextNode*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::PrefixHandle*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::StringHandle*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::ValueHandle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, prefix, localName, value);
}
inline ::System::Xml::XmlBaseReader_XmlAttributeTextNode* System::Xml::XmlBaseReader_XmlAttributeTextNode::New_ctor(::System::Xml::PrefixHandle* prefix, ::System::Xml::StringHandle* localName,
                                                                                                                    ::System::Xml::ValueHandle* value) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::XmlBaseReader_XmlAttributeTextNode*>(prefix, localName, value));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlBaseReader_XmlAttributeTextNode::XmlBaseReader_XmlAttributeTextNode() {}
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlInitialNode._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlBaseReader_XmlInitialNode::*)(::System::Xml::XmlBufferReader*)>(
    &::System::Xml::XmlBaseReader_XmlInitialNode::_ctor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5f59e7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlInitialNode*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlBufferReader*>::get() })));
    return ___internal_method;
  }
};
inline void System::Xml::XmlBaseReader_XmlInitialNode::_ctor(::System::Xml::XmlBufferReader* bufferReader) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlInitialNode*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlBufferReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bufferReader);
}
inline ::System::Xml::XmlBaseReader_XmlInitialNode* System::Xml::XmlBaseReader_XmlInitialNode::New_ctor(::System::Xml::XmlBufferReader* bufferReader) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::XmlBaseReader_XmlInitialNode*>(bufferReader));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlBaseReader_XmlInitialNode::XmlBaseReader_XmlInitialNode() {}
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlDeclarationNode._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlBaseReader_XmlDeclarationNode::*)(::System::Xml::XmlBufferReader*)>(
    &::System::Xml::XmlBaseReader_XmlDeclarationNode::_ctor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5f53858;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlDeclarationNode*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlBufferReader*>::get() })));
    return ___internal_method;
  }
};
inline void System::Xml::XmlBaseReader_XmlDeclarationNode::_ctor(::System::Xml::XmlBufferReader* bufferReader) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlDeclarationNode*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlBufferReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bufferReader);
}
inline ::System::Xml::XmlBaseReader_XmlDeclarationNode* System::Xml::XmlBaseReader_XmlDeclarationNode::New_ctor(::System::Xml::XmlBufferReader* bufferReader) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::XmlBaseReader_XmlDeclarationNode*>(bufferReader));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlBaseReader_XmlDeclarationNode::XmlBaseReader_XmlDeclarationNode() {}
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlCommentNode._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlBaseReader_XmlCommentNode::*)(::System::Xml::XmlBufferReader*)>(
    &::System::Xml::XmlBaseReader_XmlCommentNode::_ctor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5f539bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlCommentNode*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlBufferReader*>::get() })));
    return ___internal_method;
  }
};
inline void System::Xml::XmlBaseReader_XmlCommentNode::_ctor(::System::Xml::XmlBufferReader* bufferReader) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlCommentNode*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlBufferReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bufferReader);
}
inline ::System::Xml::XmlBaseReader_XmlCommentNode* System::Xml::XmlBaseReader_XmlCommentNode::New_ctor(::System::Xml::XmlBufferReader* bufferReader) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::XmlBaseReader_XmlCommentNode*>(bufferReader));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlBaseReader_XmlCommentNode::XmlBaseReader_XmlCommentNode() {}
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlEndOfFileNode._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlBaseReader_XmlEndOfFileNode::*)(::System::Xml::XmlBufferReader*)>(
    &::System::Xml::XmlBaseReader_XmlEndOfFileNode::_ctor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5f59f68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlEndOfFileNode*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlBufferReader*>::get() })));
    return ___internal_method;
  }
};
inline void System::Xml::XmlBaseReader_XmlEndOfFileNode::_ctor(::System::Xml::XmlBufferReader* bufferReader) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlEndOfFileNode*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlBufferReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bufferReader);
}
inline ::System::Xml::XmlBaseReader_XmlEndOfFileNode* System::Xml::XmlBaseReader_XmlEndOfFileNode::New_ctor(::System::Xml::XmlBufferReader* bufferReader) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::XmlBaseReader_XmlEndOfFileNode*>(bufferReader));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlBaseReader_XmlEndOfFileNode::XmlBaseReader_XmlEndOfFileNode() {}
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlClosedNode._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlBaseReader_XmlClosedNode::*)(::System::Xml::XmlBufferReader*)>(
    &::System::Xml::XmlBaseReader_XmlClosedNode::_ctor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5f5a054;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlClosedNode*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlBufferReader*>::get() })));
    return ___internal_method;
  }
};
inline void System::Xml::XmlBaseReader_XmlClosedNode::_ctor(::System::Xml::XmlBufferReader* bufferReader) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_XmlClosedNode*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlBufferReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bufferReader);
}
inline ::System::Xml::XmlBaseReader_XmlClosedNode* System::Xml::XmlBaseReader_XmlClosedNode::New_ctor(::System::Xml::XmlBufferReader* bufferReader) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::XmlBaseReader_XmlClosedNode*>(bufferReader));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlBaseReader_XmlClosedNode::XmlBaseReader_XmlClosedNode() {}
//  Writing Method size for method: ::System::Xml::XmlBaseReader_AttributeSorter.Sort
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlBaseReader_AttributeSorter::*)(
    ::ArrayW<::System::Xml::XmlBaseReader_XmlAttributeNode*, ::Array<::System::Xml::XmlBaseReader_XmlAttributeNode*>*>, int32_t)>(&::System::Xml::XmlBaseReader_AttributeSorter::Sort)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5f56110;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_AttributeSorter*>::get(), "Sort", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Xml::XmlBaseReader_XmlAttributeNode*, ::Array<::System::Xml::XmlBaseReader_XmlAttributeNode*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_AttributeSorter.GetIndeces
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlBaseReader_AttributeSorter::*)(::ByRef<int32_t>, ::ByRef<int32_t>)>(
    &::System::Xml::XmlBaseReader_AttributeSorter::GetIndeces)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5f56140;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_AttributeSorter*>::get(),
                                                                               "GetIndeces", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_AttributeSorter.Close
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlBaseReader_AttributeSorter::*)()>(&::System::Xml::XmlBaseReader_AttributeSorter::Close)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5f54f18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_AttributeSorter*>::get(), "Close",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_AttributeSorter.Sort
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlBaseReader_AttributeSorter::*)()>(&::System::Xml::XmlBaseReader_AttributeSorter::Sort)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5f5a6a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_AttributeSorter*>::get(), "Sort",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_AttributeSorter.IsSorted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlBaseReader_AttributeSorter::*)()>(&::System::Xml::XmlBaseReader_AttributeSorter::IsSorted)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5f5a7dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_AttributeSorter*>::get(), "IsSorted",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_AttributeSorter.Compare
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlBaseReader_AttributeSorter::*)(::System::Object*, ::System::Object*)>(
    &::System::Xml::XmlBaseReader_AttributeSorter::Compare)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5f5a8cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_AttributeSorter*>::get(), "Compare", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_AttributeSorter.CompareQNameType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlBaseReader_AttributeSorter::*)(
    ::System::Xml::XmlBaseReader_QNameType, ::System::Xml::XmlBaseReader_QNameType)>(&::System::Xml::XmlBaseReader_AttributeSorter::CompareQNameType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5a9e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_AttributeSorter*>::get(), "CompareQNameType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlBaseReader_QNameType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlBaseReader_QNameType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_AttributeSorter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlBaseReader_AttributeSorter::*)()>(&::System::Xml::XmlBaseReader_AttributeSorter::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f5610c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_AttributeSorter*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& System::Xml::XmlBaseReader_AttributeSorter::__cordl_internal_get_indeces() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indeces;
}
constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& System::Xml::XmlBaseReader_AttributeSorter::__cordl_internal_get_indeces() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indeces;
}
constexpr void System::Xml::XmlBaseReader_AttributeSorter::__cordl_internal_set_indeces(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___indeces)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Xml::XmlBaseReader_XmlAttributeNode*, ::Array<::System::Xml::XmlBaseReader_XmlAttributeNode*>*>&
System::Xml::XmlBaseReader_AttributeSorter::__cordl_internal_get_attributeNodes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeNodes;
}
constexpr ::ArrayW<::System::Xml::XmlBaseReader_XmlAttributeNode*, ::Array<::System::Xml::XmlBaseReader_XmlAttributeNode*>*> const&
System::Xml::XmlBaseReader_AttributeSorter::__cordl_internal_get_attributeNodes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeNodes;
}
constexpr void System::Xml::XmlBaseReader_AttributeSorter::__cordl_internal_set_attributeNodes(
    ::ArrayW<::System::Xml::XmlBaseReader_XmlAttributeNode*, ::Array<::System::Xml::XmlBaseReader_XmlAttributeNode*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___attributeNodes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Xml::XmlBaseReader_AttributeSorter::__cordl_internal_get_attributeCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeCount;
}
constexpr int32_t const& System::Xml::XmlBaseReader_AttributeSorter::__cordl_internal_get_attributeCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeCount;
}
constexpr void System::Xml::XmlBaseReader_AttributeSorter::__cordl_internal_set_attributeCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___attributeCount = value;
}
constexpr int32_t& System::Xml::XmlBaseReader_AttributeSorter::__cordl_internal_get_attributeIndex1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeIndex1;
}
constexpr int32_t const& System::Xml::XmlBaseReader_AttributeSorter::__cordl_internal_get_attributeIndex1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeIndex1;
}
constexpr void System::Xml::XmlBaseReader_AttributeSorter::__cordl_internal_set_attributeIndex1(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___attributeIndex1 = value;
}
constexpr int32_t& System::Xml::XmlBaseReader_AttributeSorter::__cordl_internal_get_attributeIndex2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeIndex2;
}
constexpr int32_t const& System::Xml::XmlBaseReader_AttributeSorter::__cordl_internal_get_attributeIndex2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeIndex2;
}
constexpr void System::Xml::XmlBaseReader_AttributeSorter::__cordl_internal_set_attributeIndex2(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___attributeIndex2 = value;
}
inline bool System::Xml::XmlBaseReader_AttributeSorter::Sort(::ArrayW<::System::Xml::XmlBaseReader_XmlAttributeNode*, ::Array<::System::Xml::XmlBaseReader_XmlAttributeNode*>*> attributeNodes,
                                                             int32_t attributeCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_AttributeSorter*>::get(), "Sort", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Xml::XmlBaseReader_XmlAttributeNode*, ::Array<::System::Xml::XmlBaseReader_XmlAttributeNode*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, attributeNodes, attributeCount);
}
inline void System::Xml::XmlBaseReader_AttributeSorter::GetIndeces(::ByRef<int32_t> attributeIndex1, ::ByRef<int32_t> attributeIndex2) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_AttributeSorter*>::get(), "GetIndeces", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, attributeIndex1, attributeIndex2);
}
inline void System::Xml::XmlBaseReader_AttributeSorter::Close() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_AttributeSorter*>::get(), "Close",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Xml::XmlBaseReader_AttributeSorter::Sort() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_AttributeSorter*>::get(), "Sort",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Xml::XmlBaseReader_AttributeSorter::IsSorted() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_AttributeSorter*>::get(), "IsSorted",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t System::Xml::XmlBaseReader_AttributeSorter::Compare(::System::Object* obj1, ::System::Object* obj2) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_AttributeSorter*>::get(), "Compare", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, obj1, obj2);
}
inline int32_t System::Xml::XmlBaseReader_AttributeSorter::CompareQNameType(::System::Xml::XmlBaseReader_QNameType type1, ::System::Xml::XmlBaseReader_QNameType type2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_AttributeSorter*>::get(), "CompareQNameType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlBaseReader_QNameType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlBaseReader_QNameType>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, type1, type2);
}
inline void System::Xml::XmlBaseReader_AttributeSorter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_AttributeSorter*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Xml::XmlBaseReader_AttributeSorter* System::Xml::XmlBaseReader_AttributeSorter::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::XmlBaseReader_AttributeSorter*>());
}
/// @brief Convert operator to "::System::Collections::IComparer"
constexpr System::Xml::XmlBaseReader_AttributeSorter::operator ::System::Collections::IComparer*() noexcept {
  return static_cast<::System::Collections::IComparer*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IComparer"
constexpr ::System::Collections::IComparer* System::Xml::XmlBaseReader_AttributeSorter::i___System__Collections__IComparer() noexcept {
  return static_cast<::System::Collections::IComparer*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlBaseReader_AttributeSorter::XmlBaseReader_AttributeSorter() {}
//  Writing Method size for method: ::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute::*)()>(
    &::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f5ae20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute.get_Depth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute::*)()>(
    &::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute::get_Depth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5afe0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute*>::get(), "get_Depth",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute.set_Depth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute::*)(int32_t)>(
    &::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute::set_Depth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5afe8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute*>::get(), "set_Depth",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute.get_XmlLang
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute::*)()>(
    &::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute::get_XmlLang)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5aff0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute*>::get(), "get_XmlLang",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute.set_XmlLang
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute::*)(::StringW)>(
    &::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute::set_XmlLang)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5aff8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute*>::get(), "set_XmlLang",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute.get_XmlSpace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlSpace (::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute::*)()>(
    &::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute::get_XmlSpace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5b000;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute*>::get(), "get_XmlSpace",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute.set_XmlSpace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute::*)(::System::Xml::XmlSpace)>(
    &::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute::set_XmlSpace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5b008;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute*>::get(), "set_XmlSpace", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlSpace>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlSpace& System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute::__cordl_internal_get_space() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___space;
}
constexpr ::System::Xml::XmlSpace const& System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute::__cordl_internal_get_space() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___space;
}
constexpr void System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute::__cordl_internal_set_space(::System::Xml::XmlSpace value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___space = value;
}
constexpr ::StringW& System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute::__cordl_internal_get_lang() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lang;
}
constexpr ::StringW const& System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute::__cordl_internal_get_lang() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lang;
}
constexpr void System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute::__cordl_internal_set_lang(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lang)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute::__cordl_internal_get_depth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___depth;
}
constexpr int32_t const& System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute::__cordl_internal_get_depth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___depth;
}
constexpr void System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute::__cordl_internal_set_depth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___depth = value;
}
inline void System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute::get_Depth() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute*>::get(),
                                                                             "get_Depth", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute::set_Depth(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute*>::get(), "set_Depth",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute::get_XmlLang() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute*>::get(),
                                                                             "get_XmlLang", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute::set_XmlLang(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute*>::get(), "set_XmlLang",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Xml::XmlSpace System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute::get_XmlSpace() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute*>::get(),
                                                                             "get_XmlSpace", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlSpace, false>(this, ___internal_method);
}
inline void System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute::set_XmlSpace(::System::Xml::XmlSpace value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute*>::get(), "set_XmlSpace", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlSpace>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute* System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute*>());
}
// Ctor Parameters []
constexpr ::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute::NamespaceManager_XmlBaseReader_XmlAttribute() {}
//  Writing Method size for method: ::System::Xml::XmlBaseReader_NamespaceManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlBaseReader_NamespaceManager::*)(::System::Xml::XmlBufferReader*)>(
    &::System::Xml::XmlBaseReader_NamespaceManager::_ctor)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5f52ba8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_NamespaceManager*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlBufferReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_NamespaceManager.Close
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlBaseReader_NamespaceManager::*)()>(&::System::Xml::XmlBaseReader_NamespaceManager::Close)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5f54ed0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_NamespaceManager*>::get(), "Close",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_NamespaceManager.get_XmlNamespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlBaseReader_Namespace* (*)()>(&::System::Xml::XmlBaseReader_NamespaceManager::get_XmlNamespace)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x5f5a9ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_NamespaceManager*>::get(),
                                                                               "get_XmlNamespace", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_NamespaceManager.get_EmptyNamespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlBaseReader_Namespace* (*)()>(&::System::Xml::XmlBaseReader_NamespaceManager::get_EmptyNamespace)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5f5ac40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_NamespaceManager*>::get(),
                                                                               "get_EmptyNamespace", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_NamespaceManager.get_XmlLang
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlBaseReader_NamespaceManager::*)()>(
    &::System::Xml::XmlBaseReader_NamespaceManager::get_XmlLang)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5ac9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_NamespaceManager*>::get(),
                                                                               "get_XmlLang", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_NamespaceManager.get_XmlSpace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlSpace (::System::Xml::XmlBaseReader_NamespaceManager::*)()>(
    &::System::Xml::XmlBaseReader_NamespaceManager::get_XmlSpace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5aca4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_NamespaceManager*>::get(),
                                                                               "get_XmlSpace", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_NamespaceManager.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlBaseReader_NamespaceManager::*)()>(&::System::Xml::XmlBaseReader_NamespaceManager::Clear)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5f53114;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_NamespaceManager*>::get(), "Clear",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_NamespaceManager.EnterScope
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlBaseReader_NamespaceManager::*)()>(
    &::System::Xml::XmlBaseReader_NamespaceManager::EnterScope)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f54200;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_NamespaceManager*>::get(),
                                                                               "EnterScope", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_NamespaceManager.ExitScope
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlBaseReader_NamespaceManager::*)()>(
    &::System::Xml::XmlBaseReader_NamespaceManager::ExitScope)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5f54244;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_NamespaceManager*>::get(),
                                                                               "ExitScope", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_NamespaceManager.AddLangAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlBaseReader_NamespaceManager::*)(::StringW)>(
    &::System::Xml::XmlBaseReader_NamespaceManager::AddLangAttribute)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5f54d38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_NamespaceManager*>::get(), "AddLangAttribute",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_NamespaceManager.AddSpaceAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlBaseReader_NamespaceManager::*)(::System::Xml::XmlSpace)>(
    &::System::Xml::XmlBaseReader_NamespaceManager::AddSpaceAttribute)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5f54d5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_NamespaceManager*>::get(), "AddSpaceAttribute", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlSpace>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_NamespaceManager.AddAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlBaseReader_NamespaceManager::*)()>(
    &::System::Xml::XmlBaseReader_NamespaceManager::AddAttribute)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5f5acac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_NamespaceManager*>::get(),
                                                                               "AddAttribute", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_NamespaceManager.Register
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlBaseReader_NamespaceManager::*)(::System::Xml::XmlBaseReader_Namespace*)>(
    &::System::Xml::XmlBaseReader_NamespaceManager::Register)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5f54abc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_NamespaceManager*>::get(), "Register", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlBaseReader_Namespace*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_NamespaceManager.AddNamespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlBaseReader_Namespace* (::System::Xml::XmlBaseReader_NamespaceManager::*)()>(
    &::System::Xml::XmlBaseReader_NamespaceManager::AddNamespace)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5f54600;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_NamespaceManager*>::get(),
                                                                               "AddNamespace", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_NamespaceManager.LookupNamespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlBaseReader_Namespace* (
    ::System::Xml::XmlBaseReader_NamespaceManager::*)(::System::Xml::PrefixHandleType)>(&::System::Xml::XmlBaseReader_NamespaceManager::LookupNamespace)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5f5ae2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_NamespaceManager*>::get(), "LookupNamespace", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::PrefixHandleType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_NamespaceManager.LookupNamespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlBaseReader_Namespace* (
    ::System::Xml::XmlBaseReader_NamespaceManager::*)(::System::Xml::PrefixHandle*)>(&::System::Xml::XmlBaseReader_NamespaceManager::LookupNamespace)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5f55a40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_NamespaceManager*>::get(), "LookupNamespace", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::PrefixHandle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_NamespaceManager.LookupNamespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlBaseReader_Namespace* (::System::Xml::XmlBaseReader_NamespaceManager::*)(::StringW)>(
    &::System::Xml::XmlBaseReader_NamespaceManager::LookupNamespace)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5f558a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_NamespaceManager*>::get(), "LookupNamespace",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_NamespaceManager.TryGetShortPrefix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlBaseReader_NamespaceManager::*)(::StringW, ::ByRef<::System::Xml::PrefixHandleType>)>(
    &::System::Xml::XmlBaseReader_NamespaceManager::TryGetShortPrefix)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5f5ae5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_NamespaceManager*>::get(), "TryGetShortPrefix", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Xml::PrefixHandleType>>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlBufferReader*& System::Xml::XmlBaseReader_NamespaceManager::__cordl_internal_get_bufferReader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bufferReader;
}
constexpr ::System::Xml::XmlBufferReader* const& System::Xml::XmlBaseReader_NamespaceManager::__cordl_internal_get_bufferReader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bufferReader;
}
constexpr void System::Xml::XmlBaseReader_NamespaceManager::__cordl_internal_set_bufferReader(::System::Xml::XmlBufferReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___bufferReader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Xml::XmlBaseReader_Namespace*, ::Array<::System::Xml::XmlBaseReader_Namespace*>*>& System::Xml::XmlBaseReader_NamespaceManager::__cordl_internal_get_namespaces() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___namespaces;
}
constexpr ::ArrayW<::System::Xml::XmlBaseReader_Namespace*, ::Array<::System::Xml::XmlBaseReader_Namespace*>*> const&
System::Xml::XmlBaseReader_NamespaceManager::__cordl_internal_get_namespaces() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___namespaces;
}
constexpr void
System::Xml::XmlBaseReader_NamespaceManager::__cordl_internal_set_namespaces(::ArrayW<::System::Xml::XmlBaseReader_Namespace*, ::Array<::System::Xml::XmlBaseReader_Namespace*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___namespaces)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Xml::XmlBaseReader_NamespaceManager::__cordl_internal_get_nsCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nsCount;
}
constexpr int32_t const& System::Xml::XmlBaseReader_NamespaceManager::__cordl_internal_get_nsCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nsCount;
}
constexpr void System::Xml::XmlBaseReader_NamespaceManager::__cordl_internal_set_nsCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nsCount = value;
}
constexpr int32_t& System::Xml::XmlBaseReader_NamespaceManager::__cordl_internal_get_depth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___depth;
}
constexpr int32_t const& System::Xml::XmlBaseReader_NamespaceManager::__cordl_internal_get_depth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___depth;
}
constexpr void System::Xml::XmlBaseReader_NamespaceManager::__cordl_internal_set_depth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___depth = value;
}
constexpr ::ArrayW<::System::Xml::XmlBaseReader_Namespace*, ::Array<::System::Xml::XmlBaseReader_Namespace*>*>& System::Xml::XmlBaseReader_NamespaceManager::__cordl_internal_get_shortPrefixUri() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shortPrefixUri;
}
constexpr ::ArrayW<::System::Xml::XmlBaseReader_Namespace*, ::Array<::System::Xml::XmlBaseReader_Namespace*>*> const&
System::Xml::XmlBaseReader_NamespaceManager::__cordl_internal_get_shortPrefixUri() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shortPrefixUri;
}
constexpr void
System::Xml::XmlBaseReader_NamespaceManager::__cordl_internal_set_shortPrefixUri(::ArrayW<::System::Xml::XmlBaseReader_Namespace*, ::Array<::System::Xml::XmlBaseReader_Namespace*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___shortPrefixUri)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute*, ::Array<::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute*>*>&
System::Xml::XmlBaseReader_NamespaceManager::__cordl_internal_get_attributes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributes;
}
constexpr ::ArrayW<::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute*, ::Array<::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute*>*> const&
System::Xml::XmlBaseReader_NamespaceManager::__cordl_internal_get_attributes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributes;
}
constexpr void System::Xml::XmlBaseReader_NamespaceManager::__cordl_internal_set_attributes(
    ::ArrayW<::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute*, ::Array<::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___attributes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Xml::XmlBaseReader_NamespaceManager::__cordl_internal_get_attributeCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeCount;
}
constexpr int32_t const& System::Xml::XmlBaseReader_NamespaceManager::__cordl_internal_get_attributeCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeCount;
}
constexpr void System::Xml::XmlBaseReader_NamespaceManager::__cordl_internal_set_attributeCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___attributeCount = value;
}
constexpr ::System::Xml::XmlSpace& System::Xml::XmlBaseReader_NamespaceManager::__cordl_internal_get_space() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___space;
}
constexpr ::System::Xml::XmlSpace const& System::Xml::XmlBaseReader_NamespaceManager::__cordl_internal_get_space() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___space;
}
constexpr void System::Xml::XmlBaseReader_NamespaceManager::__cordl_internal_set_space(::System::Xml::XmlSpace value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___space = value;
}
constexpr ::StringW& System::Xml::XmlBaseReader_NamespaceManager::__cordl_internal_get_lang() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lang;
}
constexpr ::StringW const& System::Xml::XmlBaseReader_NamespaceManager::__cordl_internal_get_lang() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lang;
}
constexpr void System::Xml::XmlBaseReader_NamespaceManager::__cordl_internal_set_lang(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lang)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Xml::XmlBaseReader_NamespaceManager::setStaticF_emptyNamespace(::System::Xml::XmlBaseReader_Namespace* value) {
  ::cordl_internals::setStaticField<::System::Xml::XmlBaseReader_Namespace*, "emptyNamespace",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_NamespaceManager*>::get>(
      std::forward<::System::Xml::XmlBaseReader_Namespace*>(value));
}
inline ::System::Xml::XmlBaseReader_Namespace* System::Xml::XmlBaseReader_NamespaceManager::getStaticF_emptyNamespace() {
  return ::cordl_internals::getStaticField<::System::Xml::XmlBaseReader_Namespace*, "emptyNamespace",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_NamespaceManager*>::get>();
}
inline void System::Xml::XmlBaseReader_NamespaceManager::setStaticF_xmlNamespace(::System::Xml::XmlBaseReader_Namespace* value) {
  ::cordl_internals::setStaticField<::System::Xml::XmlBaseReader_Namespace*, "xmlNamespace",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_NamespaceManager*>::get>(
      std::forward<::System::Xml::XmlBaseReader_Namespace*>(value));
}
inline ::System::Xml::XmlBaseReader_Namespace* System::Xml::XmlBaseReader_NamespaceManager::getStaticF_xmlNamespace() {
  return ::cordl_internals::getStaticField<::System::Xml::XmlBaseReader_Namespace*, "xmlNamespace",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_NamespaceManager*>::get>();
}
inline void System::Xml::XmlBaseReader_NamespaceManager::_ctor(::System::Xml::XmlBufferReader* bufferReader) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_NamespaceManager*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlBufferReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bufferReader);
}
inline void System::Xml::XmlBaseReader_NamespaceManager::Close() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_NamespaceManager*>::get(), "Close",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Xml::XmlBaseReader_Namespace* System::Xml::XmlBaseReader_NamespaceManager::get_XmlNamespace() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_NamespaceManager*>::get(),
                                                                             "get_XmlNamespace", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlBaseReader_Namespace*, false>(nullptr, ___internal_method);
}
inline ::System::Xml::XmlBaseReader_Namespace* System::Xml::XmlBaseReader_NamespaceManager::get_EmptyNamespace() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_NamespaceManager*>::get(),
                                                                             "get_EmptyNamespace", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlBaseReader_Namespace*, false>(nullptr, ___internal_method);
}
inline ::StringW System::Xml::XmlBaseReader_NamespaceManager::get_XmlLang() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_NamespaceManager*>::get(),
                                                                             "get_XmlLang", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Xml::XmlSpace System::Xml::XmlBaseReader_NamespaceManager::get_XmlSpace() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_NamespaceManager*>::get(),
                                                                             "get_XmlSpace", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlSpace, false>(this, ___internal_method);
}
inline void System::Xml::XmlBaseReader_NamespaceManager::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_NamespaceManager*>::get(), "Clear",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlBaseReader_NamespaceManager::EnterScope() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_NamespaceManager*>::get(),
                                                                             "EnterScope", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlBaseReader_NamespaceManager::ExitScope() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_NamespaceManager*>::get(), "ExitScope",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlBaseReader_NamespaceManager::AddLangAttribute(::StringW lang) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_NamespaceManager*>::get(), "AddLangAttribute",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lang);
}
inline void System::Xml::XmlBaseReader_NamespaceManager::AddSpaceAttribute(::System::Xml::XmlSpace space) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_NamespaceManager*>::get(), "AddSpaceAttribute", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlSpace>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, space);
}
inline void System::Xml::XmlBaseReader_NamespaceManager::AddAttribute() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_NamespaceManager*>::get(),
                                                                             "AddAttribute", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlBaseReader_NamespaceManager::Register(::System::Xml::XmlBaseReader_Namespace* nameSpace) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_NamespaceManager*>::get(), "Register", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlBaseReader_Namespace*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nameSpace);
}
inline ::System::Xml::XmlBaseReader_Namespace* System::Xml::XmlBaseReader_NamespaceManager::AddNamespace() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_NamespaceManager*>::get(),
                                                                             "AddNamespace", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlBaseReader_Namespace*, false>(this, ___internal_method);
}
inline ::System::Xml::XmlBaseReader_Namespace* System::Xml::XmlBaseReader_NamespaceManager::LookupNamespace(::System::Xml::PrefixHandleType prefix) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_NamespaceManager*>::get(), "LookupNamespace", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::PrefixHandleType>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlBaseReader_Namespace*, false>(this, ___internal_method, prefix);
}
inline ::System::Xml::XmlBaseReader_Namespace* System::Xml::XmlBaseReader_NamespaceManager::LookupNamespace(::System::Xml::PrefixHandle* prefix) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_NamespaceManager*>::get(), "LookupNamespace", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::PrefixHandle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlBaseReader_Namespace*, false>(this, ___internal_method, prefix);
}
inline ::System::Xml::XmlBaseReader_Namespace* System::Xml::XmlBaseReader_NamespaceManager::LookupNamespace(::StringW prefix) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_NamespaceManager*>::get(), "LookupNamespace",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlBaseReader_Namespace*, false>(this, ___internal_method, prefix);
}
inline bool System::Xml::XmlBaseReader_NamespaceManager::TryGetShortPrefix(::StringW s, ::ByRef<::System::Xml::PrefixHandleType> shortPrefix) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_NamespaceManager*>::get(), "TryGetShortPrefix", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Xml::PrefixHandleType>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, s, shortPrefix);
}
inline ::System::Xml::XmlBaseReader_NamespaceManager* System::Xml::XmlBaseReader_NamespaceManager::New_ctor(::System::Xml::XmlBufferReader* bufferReader) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::XmlBaseReader_NamespaceManager*>(bufferReader));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlBaseReader_NamespaceManager::XmlBaseReader_NamespaceManager() {}
//  Writing Method size for method: ::System::Xml::XmlBaseReader_Namespace._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlBaseReader_Namespace::*)(::System::Xml::XmlBufferReader*)>(
    &::System::Xml::XmlBaseReader_Namespace::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5f5aba4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_Namespace*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlBufferReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_Namespace.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlBaseReader_Namespace::*)()>(&::System::Xml::XmlBaseReader_Namespace::Clear)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5ae24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_Namespace*>::get(), "Clear",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_Namespace.get_Depth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlBaseReader_Namespace::*)()>(&::System::Xml::XmlBaseReader_Namespace::get_Depth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5b010;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_Namespace*>::get(), "get_Depth",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_Namespace.set_Depth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlBaseReader_Namespace::*)(int32_t)>(&::System::Xml::XmlBaseReader_Namespace::set_Depth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5b018;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_Namespace*>::get(), "set_Depth", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_Namespace.get_Prefix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::PrefixHandle* (::System::Xml::XmlBaseReader_Namespace::*)()>(
    &::System::Xml::XmlBaseReader_Namespace::get_Prefix)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5b020;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_Namespace*>::get(), "get_Prefix",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_Namespace.IsUri
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlBaseReader_Namespace::*)(::StringW)>(&::System::Xml::XmlBaseReader_Namespace::IsUri)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5f5a340;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_Namespace*>::get(), "IsUri", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_Namespace.IsUri
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlBaseReader_Namespace::*)(::System::Xml::XmlDictionaryString*)>(
    &::System::Xml::XmlBaseReader_Namespace::IsUri)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5f5a3d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_Namespace*>::get(), "IsUri", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryString*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_Namespace.get_Uri
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::StringHandle* (::System::Xml::XmlBaseReader_Namespace::*)()>(
    &::System::Xml::XmlBaseReader_Namespace::get_Uri)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5b028;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_Namespace*>::get(), "get_Uri",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_Namespace.get_OuterUri
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlBaseReader_Namespace* (::System::Xml::XmlBaseReader_Namespace::*)()>(
    &::System::Xml::XmlBaseReader_Namespace::get_OuterUri)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5b030;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_Namespace*>::get(), "get_OuterUri",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_Namespace.set_OuterUri
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlBaseReader_Namespace::*)(::System::Xml::XmlBaseReader_Namespace*)>(
    &::System::Xml::XmlBaseReader_Namespace::set_OuterUri)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5b038;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_Namespace*>::get(), "set_OuterUri", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlBaseReader_Namespace*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::PrefixHandle*& System::Xml::XmlBaseReader_Namespace::__cordl_internal_get_prefix() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prefix;
}
constexpr ::System::Xml::PrefixHandle* const& System::Xml::XmlBaseReader_Namespace::__cordl_internal_get_prefix() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prefix;
}
constexpr void System::Xml::XmlBaseReader_Namespace::__cordl_internal_set_prefix(::System::Xml::PrefixHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___prefix)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::StringHandle*& System::Xml::XmlBaseReader_Namespace::__cordl_internal_get_uri() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uri;
}
constexpr ::System::Xml::StringHandle* const& System::Xml::XmlBaseReader_Namespace::__cordl_internal_get_uri() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uri;
}
constexpr void System::Xml::XmlBaseReader_Namespace::__cordl_internal_set_uri(::System::Xml::StringHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___uri)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Xml::XmlBaseReader_Namespace::__cordl_internal_get_depth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___depth;
}
constexpr int32_t const& System::Xml::XmlBaseReader_Namespace::__cordl_internal_get_depth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___depth;
}
constexpr void System::Xml::XmlBaseReader_Namespace::__cordl_internal_set_depth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___depth = value;
}
constexpr ::System::Xml::XmlBaseReader_Namespace*& System::Xml::XmlBaseReader_Namespace::__cordl_internal_get_outerUri() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___outerUri;
}
constexpr ::System::Xml::XmlBaseReader_Namespace* const& System::Xml::XmlBaseReader_Namespace::__cordl_internal_get_outerUri() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___outerUri;
}
constexpr void System::Xml::XmlBaseReader_Namespace::__cordl_internal_set_outerUri(::System::Xml::XmlBaseReader_Namespace* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___outerUri)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::XmlBaseReader_Namespace::__cordl_internal_get_uriString() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uriString;
}
constexpr ::StringW const& System::Xml::XmlBaseReader_Namespace::__cordl_internal_get_uriString() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uriString;
}
constexpr void System::Xml::XmlBaseReader_Namespace::__cordl_internal_set_uriString(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___uriString)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Xml::XmlBaseReader_Namespace::_ctor(::System::Xml::XmlBufferReader* bufferReader) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_Namespace*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlBufferReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bufferReader);
}
inline void System::Xml::XmlBaseReader_Namespace::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_Namespace*>::get(), "Clear",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t System::Xml::XmlBaseReader_Namespace::get_Depth() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_Namespace*>::get(), "get_Depth",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void System::Xml::XmlBaseReader_Namespace::set_Depth(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_Namespace*>::get(), "set_Depth",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Xml::PrefixHandle* System::Xml::XmlBaseReader_Namespace::get_Prefix() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_Namespace*>::get(), "get_Prefix",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::PrefixHandle*, false>(this, ___internal_method);
}
inline bool System::Xml::XmlBaseReader_Namespace::IsUri(::StringW s) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_Namespace*>::get(), "IsUri", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, s);
}
inline bool System::Xml::XmlBaseReader_Namespace::IsUri(::System::Xml::XmlDictionaryString* s) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_Namespace*>::get(), "IsUri", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryString*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, s);
}
inline ::System::Xml::StringHandle* System::Xml::XmlBaseReader_Namespace::get_Uri() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_Namespace*>::get(), "get_Uri",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::StringHandle*, false>(this, ___internal_method);
}
inline ::System::Xml::XmlBaseReader_Namespace* System::Xml::XmlBaseReader_Namespace::get_OuterUri() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_Namespace*>::get(), "get_OuterUri",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlBaseReader_Namespace*, false>(this, ___internal_method);
}
inline void System::Xml::XmlBaseReader_Namespace::set_OuterUri(::System::Xml::XmlBaseReader_Namespace* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_Namespace*>::get(), "set_OuterUri", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlBaseReader_Namespace*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Xml::XmlBaseReader_Namespace* System::Xml::XmlBaseReader_Namespace::New_ctor(::System::Xml::XmlBufferReader* bufferReader) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::XmlBaseReader_Namespace*>(bufferReader));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlBaseReader_Namespace::XmlBaseReader_Namespace() {}
//  Writing Method size for method: ::System::Xml::XmlBaseReader_QuotaNameTable._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlBaseReader_QuotaNameTable::*)(::System::Xml::XmlDictionaryReader*, int32_t)>(
    &::System::Xml::XmlBaseReader_QuotaNameTable::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5f566bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_QuotaNameTable*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryReader*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_QuotaNameTable.Get
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlBaseReader_QuotaNameTable::*)(::ArrayW<char16_t, ::Array<char16_t>*>, int32_t, int32_t)>(
    &::System::Xml::XmlBaseReader_QuotaNameTable::Get)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5f5b040;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_QuotaNameTable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_QuotaNameTable*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_QuotaNameTable.Get
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlBaseReader_QuotaNameTable::*)(::StringW)>(
    &::System::Xml::XmlBaseReader_QuotaNameTable::Get)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5f5b05c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_QuotaNameTable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_QuotaNameTable*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_QuotaNameTable.Add
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlBaseReader_QuotaNameTable::*)(int32_t)>(&::System::Xml::XmlBaseReader_QuotaNameTable::Add)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5f5b078;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_QuotaNameTable*>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_QuotaNameTable.Add
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlBaseReader_QuotaNameTable::*)(::ArrayW<char16_t, ::Array<char16_t>*>, int32_t, int32_t)>(
    &::System::Xml::XmlBaseReader_QuotaNameTable::Add)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5f5b0a8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_QuotaNameTable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_QuotaNameTable*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_QuotaNameTable.Add
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlBaseReader_QuotaNameTable::*)(::StringW)>(
    &::System::Xml::XmlBaseReader_QuotaNameTable::Add)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5f5b140;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_QuotaNameTable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_QuotaNameTable*>::get(), 7));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlDictionaryReader*& System::Xml::XmlBaseReader_QuotaNameTable::__cordl_internal_get_reader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reader;
}
constexpr ::System::Xml::XmlDictionaryReader* const& System::Xml::XmlBaseReader_QuotaNameTable::__cordl_internal_get_reader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reader;
}
constexpr void System::Xml::XmlBaseReader_QuotaNameTable::__cordl_internal_set_reader(::System::Xml::XmlDictionaryReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___reader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlNameTable*& System::Xml::XmlBaseReader_QuotaNameTable::__cordl_internal_get_nameTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nameTable;
}
constexpr ::System::Xml::XmlNameTable* const& System::Xml::XmlBaseReader_QuotaNameTable::__cordl_internal_get_nameTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nameTable;
}
constexpr void System::Xml::XmlBaseReader_QuotaNameTable::__cordl_internal_set_nameTable(::System::Xml::XmlNameTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___nameTable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Xml::XmlBaseReader_QuotaNameTable::__cordl_internal_get_maxCharCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxCharCount;
}
constexpr int32_t const& System::Xml::XmlBaseReader_QuotaNameTable::__cordl_internal_get_maxCharCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxCharCount;
}
constexpr void System::Xml::XmlBaseReader_QuotaNameTable::__cordl_internal_set_maxCharCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxCharCount = value;
}
constexpr int32_t& System::Xml::XmlBaseReader_QuotaNameTable::__cordl_internal_get_charCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___charCount;
}
constexpr int32_t const& System::Xml::XmlBaseReader_QuotaNameTable::__cordl_internal_get_charCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___charCount;
}
constexpr void System::Xml::XmlBaseReader_QuotaNameTable::__cordl_internal_set_charCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___charCount = value;
}
inline void System::Xml::XmlBaseReader_QuotaNameTable::_ctor(::System::Xml::XmlDictionaryReader* reader, int32_t maxCharCount) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_QuotaNameTable*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryReader*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader, maxCharCount);
}
inline ::StringW System::Xml::XmlBaseReader_QuotaNameTable::Get(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_QuotaNameTable*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, chars, offset, count);
}
inline ::StringW System::Xml::XmlBaseReader_QuotaNameTable::Get(::StringW value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_QuotaNameTable*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, value);
}
inline void System::Xml::XmlBaseReader_QuotaNameTable::Add(int32_t charCount) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_QuotaNameTable*>::get(), "Add",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, charCount);
}
inline ::StringW System::Xml::XmlBaseReader_QuotaNameTable::Add(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_QuotaNameTable*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, chars, offset, count);
}
inline ::StringW System::Xml::XmlBaseReader_QuotaNameTable::Add(::StringW value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader_QuotaNameTable*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, value);
}
inline ::System::Xml::XmlBaseReader_QuotaNameTable* System::Xml::XmlBaseReader_QuotaNameTable::New_ctor(::System::Xml::XmlDictionaryReader* reader, int32_t maxCharCount) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::XmlBaseReader_QuotaNameTable*>(reader, maxCharCount));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlBaseReader_QuotaNameTable::XmlBaseReader_QuotaNameTable() {}
//  Writing Method size for method: ::System::Xml::XmlBaseReader._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::_ctor)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x5f52a44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.get_BinHexEncoding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::BinHexEncoding* (*)()>(&::System::Xml::XmlBaseReader::get_BinHexEncoding)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5f52e58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "get_BinHexEncoding",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.get_Base64Encoding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Base64Encoding* (*)()>(&::System::Xml::XmlBaseReader::get_Base64Encoding)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5f52f28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "get_Base64Encoding",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.get_BufferReader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlBufferReader* (::System::Xml::XmlBaseReader::*)()>(
    &::System::Xml::XmlBaseReader::get_BufferReader)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f52ff8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "get_BufferReader",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.get_Quotas
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlDictionaryReaderQuotas* (::System::Xml::XmlBaseReader::*)()>(
    &::System::Xml::XmlBaseReader::get_Quotas)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f53000;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 75));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.get_Node
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlBaseReader_XmlNode* (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::get_Node)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f53008;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "get_Node",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.MoveToNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlBaseReader::*)(::System::Xml::XmlBaseReader_XmlNode*)>(
    &::System::Xml::XmlBaseReader::MoveToNode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f53010;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "MoveToNode", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlBaseReader_XmlNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.MoveToInitial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlBaseReader::*)(::System::Xml::XmlDictionaryReaderQuotas*)>(
    &::System::Xml::XmlBaseReader::MoveToInitial)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5f53020;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "MoveToInitial", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryReaderQuotas*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.MoveToDeclaration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlBaseReader_XmlDeclarationNode* (::System::Xml::XmlBaseReader::*)()>(
    &::System::Xml::XmlBaseReader::MoveToDeclaration)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x5f5320c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "MoveToDeclaration",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.CheckStandalone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlBaseReader::*)(int32_t)>(&::System::Xml::XmlBaseReader::CheckStandalone)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x5f5366c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "CheckStandalone", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.CheckDeclAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlBaseReader::*)(int32_t, ::StringW, ::StringW, bool, ::StringW)>(
    &::System::Xml::XmlBaseReader::CheckDeclAttribute)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x5f534d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "CheckDeclAttribute", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.MoveToComment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlBaseReader_XmlCommentNode* (::System::Xml::XmlBaseReader::*)()>(
    &::System::Xml::XmlBaseReader::MoveToComment)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5f53944;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "MoveToComment",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.MoveToCData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlBaseReader_XmlCDataNode* (::System::Xml::XmlBaseReader::*)()>(
    &::System::Xml::XmlBaseReader::MoveToCData)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5f53aa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "MoveToCData",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.MoveToAtomicText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlBaseReader_XmlAtomicTextNode* (::System::Xml::XmlBaseReader::*)()>(
    &::System::Xml::XmlBaseReader::MoveToAtomicText)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f53c0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "MoveToAtomicText",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.MoveToComplexText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlBaseReader_XmlComplexTextNode* (::System::Xml::XmlBaseReader::*)()>(
    &::System::Xml::XmlBaseReader::MoveToComplexText)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5f53c24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "MoveToComplexText",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.MoveToWhitespaceText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlBaseReader_XmlTextNode* (::System::Xml::XmlBaseReader::*)()>(
    &::System::Xml::XmlBaseReader::MoveToWhitespaceText)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5f53d88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "MoveToWhitespaceText",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.get_ElementNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlBaseReader_XmlElementNode* (::System::Xml::XmlBaseReader::*)()>(
    &::System::Xml::XmlBaseReader::get_ElementNode)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5f53f1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "get_ElementNode",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.MoveToEndElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::MoveToEndElement)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5f53f60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "MoveToEndElement",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.MoveToEndOfFile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::MoveToEndOfFile)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5f53fc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "MoveToEndOfFile",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.EnterScope
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlBaseReader_XmlElementNode* (::System::Xml::XmlBaseReader::*)()>(
    &::System::Xml::XmlBaseReader::EnterScope)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x5f54040;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "EnterScope",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.ExitScope
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::ExitScope)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5f54210;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "ExitScope",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.AddAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Xml::XmlBaseReader_XmlAttributeNode* (::System::Xml::XmlBaseReader::*)(::System::Xml::XmlBaseReader_QNameType, bool)>(&::System::Xml::XmlBaseReader::AddAttribute)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5f54390;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "AddAttribute", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlBaseReader_QNameType>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.AddNamespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlBaseReader_Namespace* (::System::Xml::XmlBaseReader::*)()>(
    &::System::Xml::XmlBaseReader::AddNamespace)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5f545ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "AddNamespace",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.AddAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlBaseReader_XmlAttributeNode* (::System::Xml::XmlBaseReader::*)()>(
    &::System::Xml::XmlBaseReader::AddAttribute)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f54778;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "AddAttribute",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.AddXmlAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlBaseReader_XmlAttributeNode* (::System::Xml::XmlBaseReader::*)()>(
    &::System::Xml::XmlBaseReader::AddXmlAttribute)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f54784;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "AddXmlAttribute",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.AddXmlnsAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Xml::XmlBaseReader_XmlAttributeNode* (::System::Xml::XmlBaseReader::*)(::System::Xml::XmlBaseReader_Namespace*)>(&::System::Xml::XmlBaseReader::AddXmlnsAttribute)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x5f54790;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "AddXmlnsAttribute", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlBaseReader_Namespace*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.FixXmlAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlBaseReader::*)(::System::Xml::XmlBaseReader_XmlAttributeNode*)>(
    &::System::Xml::XmlBaseReader::FixXmlAttribute)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x5f54b54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "FixXmlAttribute", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlBaseReader_XmlAttributeNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.get_OutsideRootElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::get_OutsideRootElement)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f54d80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "get_OutsideRootElement",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.get_CanReadValueChunk
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::get_CanReadValueChunk)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f54d90;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 61));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.get_BaseURI
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::get_BaseURI)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5f54d98;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.get_IsDefault
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::get_IsDefault)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f54dac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.get_AttributeCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::get_AttributeCount)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5f54db4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 39));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.Close
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::Close)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5f54ddc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 52));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.get_Depth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::get_Depth)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f54f34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "get_Depth",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.get_EOF
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::get_EOF)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f54f54;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 51));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.GetAttributeNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlBaseReader_XmlAttributeNode* (::System::Xml::XmlBaseReader::*)(int32_t)>(
    &::System::Xml::XmlBaseReader::GetAttributeNode)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5f54f74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "GetAttributeNode", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.GetAttributeNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlBaseReader_XmlAttributeNode* (::System::Xml::XmlBaseReader::*)(::StringW)>(
    &::System::Xml::XmlBaseReader::GetAttributeNode)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x5f550b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "GetAttributeNode", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.GetAttributeNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlBaseReader_XmlAttributeNode* (::System::Xml::XmlBaseReader::*)(::StringW, ::StringW)>(
    &::System::Xml::XmlBaseReader::GetAttributeNode)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5f553a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "GetAttributeNode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.GetAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlBaseReader::*)(int32_t)>(&::System::Xml::XmlBaseReader::GetAttribute)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f555dc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 42));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.GetAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlBaseReader::*)(::StringW)>(&::System::Xml::XmlBaseReader::GetAttribute)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5f5562c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 40));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.GetAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlBaseReader::*)(::StringW, ::StringW)>(&::System::Xml::XmlBaseReader::GetAttribute)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5f55648;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 41));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.get_IsEmptyElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::get_IsEmptyElement)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f55664;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "get_IsEmptyElement",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.get_LocalName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::get_LocalName)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5f5567c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.LookupNamespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlBaseReader::*)(::StringW)>(&::System::Xml::XmlBaseReader::LookupNamespace)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5f557d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 56));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.LookupNamespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlBaseReader_Namespace* (::System::Xml::XmlBaseReader::*)(::System::Xml::PrefixHandle*)>(
    &::System::Xml::XmlBaseReader::LookupNamespace)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5f559f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "LookupNamespace", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::PrefixHandle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.ProcessAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::ProcessAttributes)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f55b70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "ProcessAttributes",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.ProcessAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlBaseReader::*)(
    ::ArrayW<::System::Xml::XmlBaseReader_XmlAttributeNode*, ::Array<::System::Xml::XmlBaseReader_XmlAttributeNode*>*>, int32_t)>(&::System::Xml::XmlBaseReader::ProcessAttributes)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0x5f55b88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "ProcessAttributes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Xml::XmlBaseReader_XmlAttributeNode*, ::Array<::System::Xml::XmlBaseReader_XmlAttributeNode*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.CheckAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlBaseReader::*)(
    ::ArrayW<::System::Xml::XmlBaseReader_XmlAttributeNode*, ::Array<::System::Xml::XmlBaseReader_XmlAttributeNode*>*>, int32_t)>(&::System::Xml::XmlBaseReader::CheckAttributes)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x5f55f50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "CheckAttributes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Xml::XmlBaseReader_XmlAttributeNode*, ::Array<::System::Xml::XmlBaseReader_XmlAttributeNode*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.MoveToAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlBaseReader::*)(int32_t)>(&::System::Xml::XmlBaseReader::MoveToAttribute)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5f56154;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 45));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.MoveToAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlBaseReader::*)(::StringW)>(&::System::Xml::XmlBaseReader::MoveToAttribute)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5f56184;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 43));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.MoveToAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlBaseReader::*)(::StringW, ::StringW)>(&::System::Xml::XmlBaseReader::MoveToAttribute)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5f561b8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 44));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.MoveToElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::MoveToElement)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5f561ec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 48));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.MoveToContent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNodeType (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::MoveToContent)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5f56268;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 64));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.MoveToFirstAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::MoveToFirstAttribute)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5f56360;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 46));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.MoveToNextAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::MoveToNextAttribute)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5f563b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 47));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.get_NamespaceURI
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::get_NamespaceURI)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5f5641c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.get_NameTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNameTable* (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::get_NameTable)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5f5651c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 55));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.get_NodeType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNodeType (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::get_NodeType)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f56730;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "get_NodeType",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.get_Prefix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::get_Prefix)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5f56748;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.get_QuoteChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::get_QuoteChar)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f56830;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.GetLocalName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlBaseReader::*)(bool)>(&::System::Xml::XmlBaseReader::GetLocalName)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5f556a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "GetLocalName", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.GetNamespaceUri
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlBaseReader::*)(bool)>(&::System::Xml::XmlBaseReader::GetNamespaceUri)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5f56444;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "GetNamespaceUri",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.IsLocalName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlBaseReader::*)(::StringW)>(&::System::Xml::XmlBaseReader::IsLocalName)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5f56848;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 77));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.IsLocalName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlBaseReader::*)(::System::Xml::XmlDictionaryString*)>(
    &::System::Xml::XmlBaseReader::IsLocalName)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5f56978;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 78));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.IsNamespaceUri
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlBaseReader::*)(::StringW)>(&::System::Xml::XmlBaseReader::IsNamespaceUri)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5f56aa4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 79));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.IsNamespaceUri
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlBaseReader::*)(::System::Xml::XmlDictionaryString*)>(
    &::System::Xml::XmlBaseReader::IsNamespaceUri)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5f56b70;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 80));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.IsStartElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::IsStartElement)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5f56c40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "IsStartElement",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.IsStartElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlBaseReader::*)(::StringW, ::StringW)>(&::System::Xml::XmlBaseReader::IsStartElement)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5f56cc8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 69));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.IsStartElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlBaseReader::*)(::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*)>(
    &::System::Xml::XmlBaseReader::IsStartElement)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5f56da4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 81));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.IndexOfLocalName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlBaseReader::*)(
    ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*>, ::System::Xml::XmlDictionaryString*)>(&::System::Xml::XmlBaseReader::IndexOfLocalName)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x5f56ebc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 82));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.ReadValueChunk
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlBaseReader::*)(::ArrayW<char16_t, ::Array<char16_t>*>, int32_t, int32_t)>(
    &::System::Xml::XmlBaseReader::ReadValueChunk)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x5f57108;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 62));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.ReadElementContentAsString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::ReadElementContentAsString)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5f57404;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 38));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.ReadElementString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::ReadElementString)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5f574b0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 66));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.ReadStartElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::ReadStartElement)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5f5754c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 65));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.ReadEndElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::ReadEndElement)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5f57598;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 67));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.ReadAttributeValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::ReadAttributeValue)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5f576b8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 49));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.get_ReadState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::ReadState (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::get_ReadState)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f576e8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 53));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.SkipValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlBaseReader::*)(::System::Xml::XmlBaseReader_XmlNode*)>(
    &::System::Xml::XmlBaseReader::SkipValue)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5f57700;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "SkipValue", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlBaseReader_XmlNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.TryGetBase64ContentLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlBaseReader::*)(::ByRef<int32_t>)>(&::System::Xml::XmlBaseReader::TryGetBase64ContentLength)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5f57728;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 83));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.ReadContentAsBase64
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::System::Xml::XmlBaseReader::*)()>(
    &::System::Xml::XmlBaseReader::ReadContentAsBase64)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5f5778c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 84));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.ReadContentAsBase64
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlBaseReader::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::System::Xml::XmlBaseReader::ReadContentAsBase64)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x5f57878;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 59));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.ReadContentAsBinHex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlBaseReader::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::System::Xml::XmlBaseReader::ReadContentAsBinHex)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x5f581ac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 60));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.ReadBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlBaseReader::*)(
    ::System::Text::Encoding*, int32_t, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, bool)>(&::System::Xml::XmlBaseReader::ReadBytes)> {
  constexpr static std::size_t size = 0x5cc;
  constexpr static std::size_t addrs = 0x5f57be0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "ReadBytes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.ReadContentAsString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::ReadContentAsString)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5f58508;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 29));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.ReadContentAsBoolean
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::ReadContentAsBoolean)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5f585d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.ReadContentAsLong
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::ReadContentAsLong)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5f586a4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 28));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.ReadContentAsInt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::ReadContentAsInt)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5f58774;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 27));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.ReadContentAsDateTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::ReadContentAsDateTime)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5f58844;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 23));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.ReadContentAsDouble
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::ReadContentAsDouble)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5f58914;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.ReadContentAsFloat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::ReadContentAsFloat)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5f589f0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 25));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.ReadContentAsDecimal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::ReadContentAsDecimal)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5f58acc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 26));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.ReadContentAsUniqueId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::UniqueId* (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::ReadContentAsUniqueId)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5f58ba4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 86));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.ReadContentAsTimeSpan
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::ReadContentAsTimeSpan)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5f58c74;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 88));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.ReadContentAsGuid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Guid (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::ReadContentAsGuid)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5f58d44;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 87));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.ReadContentAsObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::ReadContentAsObject)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5f58e1c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.ReadContentAs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Xml::XmlBaseReader::*)(::System::Type*, ::System::Xml::IXmlNamespaceResolver*)>(
    &::System::Xml::XmlBaseReader::ReadContentAs)> {
  constexpr static std::size_t size = 0x5e4;
  constexpr static std::size_t addrs = 0x5f58e9c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 30));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.ResolveEntity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::ResolveEntity)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5f59480;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 58));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.Skip
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::Skip)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5f594d0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 54));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.get_Value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::get_Value)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5f595b0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.get_ValueType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::get_ValueType)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5f595dc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.get_XmlLang
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::get_XmlLang)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f596c0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.get_XmlSpace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlSpace (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::get_XmlSpace)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f596d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.TryGetLocalNameAsDictionaryString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlBaseReader::*)(::ByRef<::System::Xml::XmlDictionaryString*>)>(
    &::System::Xml::XmlBaseReader::TryGetLocalNameAsDictionaryString)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5f596f0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 92));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.TryGetNamespaceUriAsDictionaryString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlBaseReader::*)(::ByRef<::System::Xml::XmlDictionaryString*>)>(
    &::System::Xml::XmlBaseReader::TryGetNamespaceUriAsDictionaryString)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5f5972c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 93));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.TryGetValueAsDictionaryString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlBaseReader::*)(::ByRef<::System::Xml::XmlDictionaryString*>)>(
    &::System::Xml::XmlBaseReader::TryGetValueAsDictionaryString)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5f59778;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 94));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.GetOpenElements
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::GetOpenElements)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5f597d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "GetOpenElements",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.GetCharBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<char16_t, ::Array<char16_t>*> (::System::Xml::XmlBaseReader::*)(int32_t)>(
    &::System::Xml::XmlBaseReader::GetCharBuffer)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5f58470;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "GetCharBuffer", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.SignStartElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlBaseReader::*)(::System::Xml::XmlSigningNodeWriter*)>(
    &::System::Xml::XmlBaseReader::SignStartElement)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5f598b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "SignStartElement", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlSigningNodeWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.SignAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Xml::XmlBaseReader::*)(::System::Xml::XmlSigningNodeWriter*, ::System::Xml::XmlBaseReader_XmlAttributeNode*)>(&::System::Xml::XmlBaseReader::SignAttribute)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5f59940;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "SignAttribute", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlSigningNodeWriter*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlBaseReader_XmlAttributeNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.SignEndElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlBaseReader::*)(::System::Xml::XmlSigningNodeWriter*)>(
    &::System::Xml::XmlBaseReader::SignEndElement)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5f59a64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "SignEndElement", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlSigningNodeWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.SignNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlBaseReader::*)(::System::Xml::XmlSigningNodeWriter*)>(
    &::System::Xml::XmlBaseReader::SignNode)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x5f59af0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "SignNode", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlSigningNodeWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.SignNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::SignNode)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5f59c8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "SignNode",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlBufferReader*& System::Xml::XmlBaseReader::__cordl_internal_get_bufferReader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bufferReader;
}
constexpr ::System::Xml::XmlBufferReader* const& System::Xml::XmlBaseReader::__cordl_internal_get_bufferReader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bufferReader;
}
constexpr void System::Xml::XmlBaseReader::__cordl_internal_set_bufferReader(::System::Xml::XmlBufferReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___bufferReader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlBaseReader_XmlNode*& System::Xml::XmlBaseReader::__cordl_internal_get_node() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___node;
}
constexpr ::System::Xml::XmlBaseReader_XmlNode* const& System::Xml::XmlBaseReader::__cordl_internal_get_node() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___node;
}
constexpr void System::Xml::XmlBaseReader::__cordl_internal_set_node(::System::Xml::XmlBaseReader_XmlNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___node)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlBaseReader_NamespaceManager*& System::Xml::XmlBaseReader::__cordl_internal_get_nsMgr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nsMgr;
}
constexpr ::System::Xml::XmlBaseReader_NamespaceManager* const& System::Xml::XmlBaseReader::__cordl_internal_get_nsMgr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nsMgr;
}
constexpr void System::Xml::XmlBaseReader::__cordl_internal_set_nsMgr(::System::Xml::XmlBaseReader_NamespaceManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___nsMgr)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Xml::XmlBaseReader_XmlElementNode*, ::Array<::System::Xml::XmlBaseReader_XmlElementNode*>*>& System::Xml::XmlBaseReader::__cordl_internal_get_elementNodes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementNodes;
}
constexpr ::ArrayW<::System::Xml::XmlBaseReader_XmlElementNode*, ::Array<::System::Xml::XmlBaseReader_XmlElementNode*>*> const& System::Xml::XmlBaseReader::__cordl_internal_get_elementNodes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementNodes;
}
constexpr void System::Xml::XmlBaseReader::__cordl_internal_set_elementNodes(::ArrayW<::System::Xml::XmlBaseReader_XmlElementNode*, ::Array<::System::Xml::XmlBaseReader_XmlElementNode*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___elementNodes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Xml::XmlBaseReader_XmlAttributeNode*, ::Array<::System::Xml::XmlBaseReader_XmlAttributeNode*>*>& System::Xml::XmlBaseReader::__cordl_internal_get_attributeNodes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeNodes;
}
constexpr ::ArrayW<::System::Xml::XmlBaseReader_XmlAttributeNode*, ::Array<::System::Xml::XmlBaseReader_XmlAttributeNode*>*> const&
System::Xml::XmlBaseReader::__cordl_internal_get_attributeNodes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeNodes;
}
constexpr void
System::Xml::XmlBaseReader::__cordl_internal_set_attributeNodes(::ArrayW<::System::Xml::XmlBaseReader_XmlAttributeNode*, ::Array<::System::Xml::XmlBaseReader_XmlAttributeNode*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___attributeNodes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlBaseReader_XmlAtomicTextNode*& System::Xml::XmlBaseReader::__cordl_internal_get_atomicTextNode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___atomicTextNode;
}
constexpr ::System::Xml::XmlBaseReader_XmlAtomicTextNode* const& System::Xml::XmlBaseReader::__cordl_internal_get_atomicTextNode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___atomicTextNode;
}
constexpr void System::Xml::XmlBaseReader::__cordl_internal_set_atomicTextNode(::System::Xml::XmlBaseReader_XmlAtomicTextNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___atomicTextNode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Xml::XmlBaseReader::__cordl_internal_get_depth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___depth;
}
constexpr int32_t const& System::Xml::XmlBaseReader::__cordl_internal_get_depth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___depth;
}
constexpr void System::Xml::XmlBaseReader::__cordl_internal_set_depth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___depth = value;
}
constexpr int32_t& System::Xml::XmlBaseReader::__cordl_internal_get_attributeCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeCount;
}
constexpr int32_t const& System::Xml::XmlBaseReader::__cordl_internal_get_attributeCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeCount;
}
constexpr void System::Xml::XmlBaseReader::__cordl_internal_set_attributeCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___attributeCount = value;
}
constexpr int32_t& System::Xml::XmlBaseReader::__cordl_internal_get_attributeStart() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeStart;
}
constexpr int32_t const& System::Xml::XmlBaseReader::__cordl_internal_get_attributeStart() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeStart;
}
constexpr void System::Xml::XmlBaseReader::__cordl_internal_set_attributeStart(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___attributeStart = value;
}
constexpr ::System::Xml::XmlDictionaryReaderQuotas*& System::Xml::XmlBaseReader::__cordl_internal_get_quotas() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___quotas;
}
constexpr ::System::Xml::XmlDictionaryReaderQuotas* const& System::Xml::XmlBaseReader::__cordl_internal_get_quotas() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___quotas;
}
constexpr void System::Xml::XmlBaseReader::__cordl_internal_set_quotas(::System::Xml::XmlDictionaryReaderQuotas* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___quotas)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlNameTable*& System::Xml::XmlBaseReader::__cordl_internal_get_nameTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nameTable;
}
constexpr ::System::Xml::XmlNameTable* const& System::Xml::XmlBaseReader::__cordl_internal_get_nameTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nameTable;
}
constexpr void System::Xml::XmlBaseReader::__cordl_internal_set_nameTable(::System::Xml::XmlNameTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___nameTable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlBaseReader_XmlDeclarationNode*& System::Xml::XmlBaseReader::__cordl_internal_get_declarationNode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___declarationNode;
}
constexpr ::System::Xml::XmlBaseReader_XmlDeclarationNode* const& System::Xml::XmlBaseReader::__cordl_internal_get_declarationNode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___declarationNode;
}
constexpr void System::Xml::XmlBaseReader::__cordl_internal_set_declarationNode(::System::Xml::XmlBaseReader_XmlDeclarationNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___declarationNode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlBaseReader_XmlComplexTextNode*& System::Xml::XmlBaseReader::__cordl_internal_get_complexTextNode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___complexTextNode;
}
constexpr ::System::Xml::XmlBaseReader_XmlComplexTextNode* const& System::Xml::XmlBaseReader::__cordl_internal_get_complexTextNode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___complexTextNode;
}
constexpr void System::Xml::XmlBaseReader::__cordl_internal_set_complexTextNode(::System::Xml::XmlBaseReader_XmlComplexTextNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___complexTextNode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlBaseReader_XmlWhitespaceTextNode*& System::Xml::XmlBaseReader::__cordl_internal_get_whitespaceTextNode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___whitespaceTextNode;
}
constexpr ::System::Xml::XmlBaseReader_XmlWhitespaceTextNode* const& System::Xml::XmlBaseReader::__cordl_internal_get_whitespaceTextNode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___whitespaceTextNode;
}
constexpr void System::Xml::XmlBaseReader::__cordl_internal_set_whitespaceTextNode(::System::Xml::XmlBaseReader_XmlWhitespaceTextNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___whitespaceTextNode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlBaseReader_XmlCDataNode*& System::Xml::XmlBaseReader::__cordl_internal_get_cdataNode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cdataNode;
}
constexpr ::System::Xml::XmlBaseReader_XmlCDataNode* const& System::Xml::XmlBaseReader::__cordl_internal_get_cdataNode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cdataNode;
}
constexpr void System::Xml::XmlBaseReader::__cordl_internal_set_cdataNode(::System::Xml::XmlBaseReader_XmlCDataNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cdataNode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlBaseReader_XmlCommentNode*& System::Xml::XmlBaseReader::__cordl_internal_get_commentNode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___commentNode;
}
constexpr ::System::Xml::XmlBaseReader_XmlCommentNode* const& System::Xml::XmlBaseReader::__cordl_internal_get_commentNode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___commentNode;
}
constexpr void System::Xml::XmlBaseReader::__cordl_internal_set_commentNode(::System::Xml::XmlBaseReader_XmlCommentNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___commentNode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlBaseReader_XmlElementNode*& System::Xml::XmlBaseReader::__cordl_internal_get_rootElementNode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rootElementNode;
}
constexpr ::System::Xml::XmlBaseReader_XmlElementNode* const& System::Xml::XmlBaseReader::__cordl_internal_get_rootElementNode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rootElementNode;
}
constexpr void System::Xml::XmlBaseReader::__cordl_internal_set_rootElementNode(::System::Xml::XmlBaseReader_XmlElementNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rootElementNode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Xml::XmlBaseReader::__cordl_internal_get_attributeIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeIndex;
}
constexpr int32_t const& System::Xml::XmlBaseReader::__cordl_internal_get_attributeIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeIndex;
}
constexpr void System::Xml::XmlBaseReader::__cordl_internal_set_attributeIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___attributeIndex = value;
}
constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& System::Xml::XmlBaseReader::__cordl_internal_get_chars() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chars;
}
constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& System::Xml::XmlBaseReader::__cordl_internal_get_chars() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chars;
}
constexpr void System::Xml::XmlBaseReader::__cordl_internal_set_chars(::ArrayW<char16_t, ::Array<char16_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___chars)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::XmlBaseReader::__cordl_internal_get_prefix() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prefix;
}
constexpr ::StringW const& System::Xml::XmlBaseReader::__cordl_internal_get_prefix() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prefix;
}
constexpr void System::Xml::XmlBaseReader::__cordl_internal_set_prefix(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___prefix)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::XmlBaseReader::__cordl_internal_get_localName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localName;
}
constexpr ::StringW const& System::Xml::XmlBaseReader::__cordl_internal_get_localName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localName;
}
constexpr void System::Xml::XmlBaseReader::__cordl_internal_set_localName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___localName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::XmlBaseReader::__cordl_internal_get_ns() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ns;
}
constexpr ::StringW const& System::Xml::XmlBaseReader::__cordl_internal_get_ns() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ns;
}
constexpr void System::Xml::XmlBaseReader::__cordl_internal_set_ns(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ns)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::XmlBaseReader::__cordl_internal_get_value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr ::StringW const& System::Xml::XmlBaseReader::__cordl_internal_get_value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr void System::Xml::XmlBaseReader::__cordl_internal_set_value(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___value)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Xml::XmlBaseReader::__cordl_internal_get_trailCharCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___trailCharCount;
}
constexpr int32_t const& System::Xml::XmlBaseReader::__cordl_internal_get_trailCharCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___trailCharCount;
}
constexpr void System::Xml::XmlBaseReader::__cordl_internal_set_trailCharCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___trailCharCount = value;
}
constexpr int32_t& System::Xml::XmlBaseReader::__cordl_internal_get_trailByteCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___trailByteCount;
}
constexpr int32_t const& System::Xml::XmlBaseReader::__cordl_internal_get_trailByteCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___trailByteCount;
}
constexpr void System::Xml::XmlBaseReader::__cordl_internal_set_trailByteCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___trailByteCount = value;
}
constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& System::Xml::XmlBaseReader::__cordl_internal_get_trailChars() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___trailChars;
}
constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& System::Xml::XmlBaseReader::__cordl_internal_get_trailChars() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___trailChars;
}
constexpr void System::Xml::XmlBaseReader::__cordl_internal_set_trailChars(::ArrayW<char16_t, ::Array<char16_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___trailChars)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& System::Xml::XmlBaseReader::__cordl_internal_get_trailBytes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___trailBytes;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& System::Xml::XmlBaseReader::__cordl_internal_get_trailBytes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___trailBytes;
}
constexpr void System::Xml::XmlBaseReader::__cordl_internal_set_trailBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___trailBytes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Xml::XmlBaseReader::__cordl_internal_get_rootElement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rootElement;
}
constexpr bool const& System::Xml::XmlBaseReader::__cordl_internal_get_rootElement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rootElement;
}
constexpr void System::Xml::XmlBaseReader::__cordl_internal_set_rootElement(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rootElement = value;
}
constexpr bool& System::Xml::XmlBaseReader::__cordl_internal_get_readingElement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readingElement;
}
constexpr bool const& System::Xml::XmlBaseReader::__cordl_internal_get_readingElement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readingElement;
}
constexpr void System::Xml::XmlBaseReader::__cordl_internal_set_readingElement(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___readingElement = value;
}
constexpr ::System::Xml::XmlSigningNodeWriter*& System::Xml::XmlBaseReader::__cordl_internal_get_signingWriter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signingWriter;
}
constexpr ::System::Xml::XmlSigningNodeWriter* const& System::Xml::XmlBaseReader::__cordl_internal_get_signingWriter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signingWriter;
}
constexpr void System::Xml::XmlBaseReader::__cordl_internal_set_signingWriter(::System::Xml::XmlSigningNodeWriter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___signingWriter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Xml::XmlBaseReader::__cordl_internal_get_signing() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signing;
}
constexpr bool const& System::Xml::XmlBaseReader::__cordl_internal_get_signing() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signing;
}
constexpr void System::Xml::XmlBaseReader::__cordl_internal_set_signing(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___signing = value;
}
constexpr ::System::Xml::XmlBaseReader_AttributeSorter*& System::Xml::XmlBaseReader::__cordl_internal_get_attributeSorter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeSorter;
}
constexpr ::System::Xml::XmlBaseReader_AttributeSorter* const& System::Xml::XmlBaseReader::__cordl_internal_get_attributeSorter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeSorter;
}
constexpr void System::Xml::XmlBaseReader::__cordl_internal_set_attributeSorter(::System::Xml::XmlBaseReader_AttributeSorter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___attributeSorter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Xml::XmlBaseReader::setStaticF_initialNode(::System::Xml::XmlBaseReader_XmlInitialNode* value) {
  ::cordl_internals::setStaticField<::System::Xml::XmlBaseReader_XmlInitialNode*, "initialNode", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get>(
      std::forward<::System::Xml::XmlBaseReader_XmlInitialNode*>(value));
}
inline ::System::Xml::XmlBaseReader_XmlInitialNode* System::Xml::XmlBaseReader::getStaticF_initialNode() {
  return ::cordl_internals::getStaticField<::System::Xml::XmlBaseReader_XmlInitialNode*, "initialNode", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get>();
}
inline void System::Xml::XmlBaseReader::setStaticF_endOfFileNode(::System::Xml::XmlBaseReader_XmlEndOfFileNode* value) {
  ::cordl_internals::setStaticField<::System::Xml::XmlBaseReader_XmlEndOfFileNode*, "endOfFileNode", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get>(
      std::forward<::System::Xml::XmlBaseReader_XmlEndOfFileNode*>(value));
}
inline ::System::Xml::XmlBaseReader_XmlEndOfFileNode* System::Xml::XmlBaseReader::getStaticF_endOfFileNode() {
  return ::cordl_internals::getStaticField<::System::Xml::XmlBaseReader_XmlEndOfFileNode*, "endOfFileNode",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get>();
}
inline void System::Xml::XmlBaseReader::setStaticF_closedNode(::System::Xml::XmlBaseReader_XmlClosedNode* value) {
  ::cordl_internals::setStaticField<::System::Xml::XmlBaseReader_XmlClosedNode*, "closedNode", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get>(
      std::forward<::System::Xml::XmlBaseReader_XmlClosedNode*>(value));
}
inline ::System::Xml::XmlBaseReader_XmlClosedNode* System::Xml::XmlBaseReader::getStaticF_closedNode() {
  return ::cordl_internals::getStaticField<::System::Xml::XmlBaseReader_XmlClosedNode*, "closedNode", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get>();
}
inline void System::Xml::XmlBaseReader::setStaticF_binhexEncoding(::System::Text::BinHexEncoding* value) {
  ::cordl_internals::setStaticField<::System::Text::BinHexEncoding*, "binhexEncoding", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get>(
      std::forward<::System::Text::BinHexEncoding*>(value));
}
inline ::System::Text::BinHexEncoding* System::Xml::XmlBaseReader::getStaticF_binhexEncoding() {
  return ::cordl_internals::getStaticField<::System::Text::BinHexEncoding*, "binhexEncoding", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get>();
}
inline void System::Xml::XmlBaseReader::setStaticF_base64Encoding(::System::Text::Base64Encoding* value) {
  ::cordl_internals::setStaticField<::System::Text::Base64Encoding*, "base64Encoding", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get>(
      std::forward<::System::Text::Base64Encoding*>(value));
}
inline ::System::Text::Base64Encoding* System::Xml::XmlBaseReader::getStaticF_base64Encoding() {
  return ::cordl_internals::getStaticField<::System::Text::Base64Encoding*, "base64Encoding", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get>();
}
inline void System::Xml::XmlBaseReader::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Text::BinHexEncoding* System::Xml::XmlBaseReader::get_BinHexEncoding() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "get_BinHexEncoding",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Text::BinHexEncoding*, false>(nullptr, ___internal_method);
}
inline ::System::Text::Base64Encoding* System::Xml::XmlBaseReader::get_Base64Encoding() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "get_Base64Encoding",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Text::Base64Encoding*, false>(nullptr, ___internal_method);
}
inline ::System::Xml::XmlBufferReader* System::Xml::XmlBaseReader::get_BufferReader() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "get_BufferReader",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlBufferReader*, false>(this, ___internal_method);
}
inline ::System::Xml::XmlDictionaryReaderQuotas* System::Xml::XmlBaseReader::get_Quotas() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 75)));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlDictionaryReaderQuotas*, false>(this, ___internal_method);
}
inline ::System::Xml::XmlBaseReader_XmlNode* System::Xml::XmlBaseReader::get_Node() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "get_Node",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlBaseReader_XmlNode*, false>(this, ___internal_method);
}
inline void System::Xml::XmlBaseReader::MoveToNode(::System::Xml::XmlBaseReader_XmlNode* node) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "MoveToNode", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlBaseReader_XmlNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node);
}
inline void System::Xml::XmlBaseReader::MoveToInitial(::System::Xml::XmlDictionaryReaderQuotas* quotas) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "MoveToInitial", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryReaderQuotas*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, quotas);
}
inline ::System::Xml::XmlBaseReader_XmlDeclarationNode* System::Xml::XmlBaseReader::MoveToDeclaration() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "MoveToDeclaration",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlBaseReader_XmlDeclarationNode*, false>(this, ___internal_method);
}
inline bool System::Xml::XmlBaseReader::CheckStandalone(int32_t attr) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "CheckStandalone",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, attr);
}
inline bool System::Xml::XmlBaseReader::CheckDeclAttribute(int32_t index, ::StringW localName, ::StringW value, bool checkLower, ::StringW valueSR) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "CheckDeclAttribute", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, index, localName, value, checkLower, valueSR);
}
inline ::System::Xml::XmlBaseReader_XmlCommentNode* System::Xml::XmlBaseReader::MoveToComment() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "MoveToComment",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlBaseReader_XmlCommentNode*, false>(this, ___internal_method);
}
inline ::System::Xml::XmlBaseReader_XmlCDataNode* System::Xml::XmlBaseReader::MoveToCData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "MoveToCData",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlBaseReader_XmlCDataNode*, false>(this, ___internal_method);
}
inline ::System::Xml::XmlBaseReader_XmlAtomicTextNode* System::Xml::XmlBaseReader::MoveToAtomicText() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "MoveToAtomicText",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlBaseReader_XmlAtomicTextNode*, false>(this, ___internal_method);
}
inline ::System::Xml::XmlBaseReader_XmlComplexTextNode* System::Xml::XmlBaseReader::MoveToComplexText() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "MoveToComplexText",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlBaseReader_XmlComplexTextNode*, false>(this, ___internal_method);
}
inline ::System::Xml::XmlBaseReader_XmlTextNode* System::Xml::XmlBaseReader::MoveToWhitespaceText() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "MoveToWhitespaceText",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlBaseReader_XmlTextNode*, false>(this, ___internal_method);
}
inline ::System::Xml::XmlBaseReader_XmlElementNode* System::Xml::XmlBaseReader::get_ElementNode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "get_ElementNode",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlBaseReader_XmlElementNode*, false>(this, ___internal_method);
}
inline void System::Xml::XmlBaseReader::MoveToEndElement() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "MoveToEndElement",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlBaseReader::MoveToEndOfFile() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "MoveToEndOfFile",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Xml::XmlBaseReader_XmlElementNode* System::Xml::XmlBaseReader::EnterScope() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "EnterScope",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlBaseReader_XmlElementNode*, false>(this, ___internal_method);
}
inline void System::Xml::XmlBaseReader::ExitScope() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "ExitScope",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Xml::XmlBaseReader_XmlAttributeNode* System::Xml::XmlBaseReader::AddAttribute(::System::Xml::XmlBaseReader_QNameType qnameType, bool isAtomicValue) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "AddAttribute", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlBaseReader_QNameType>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlBaseReader_XmlAttributeNode*, false>(this, ___internal_method, qnameType, isAtomicValue);
}
inline ::System::Xml::XmlBaseReader_Namespace* System::Xml::XmlBaseReader::AddNamespace() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "AddNamespace",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlBaseReader_Namespace*, false>(this, ___internal_method);
}
inline ::System::Xml::XmlBaseReader_XmlAttributeNode* System::Xml::XmlBaseReader::AddAttribute() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "AddAttribute",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlBaseReader_XmlAttributeNode*, false>(this, ___internal_method);
}
inline ::System::Xml::XmlBaseReader_XmlAttributeNode* System::Xml::XmlBaseReader::AddXmlAttribute() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "AddXmlAttribute",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlBaseReader_XmlAttributeNode*, false>(this, ___internal_method);
}
inline ::System::Xml::XmlBaseReader_XmlAttributeNode* System::Xml::XmlBaseReader::AddXmlnsAttribute(::System::Xml::XmlBaseReader_Namespace* ns) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "AddXmlnsAttribute", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlBaseReader_Namespace*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlBaseReader_XmlAttributeNode*, false>(this, ___internal_method, ns);
}
inline void System::Xml::XmlBaseReader::FixXmlAttribute(::System::Xml::XmlBaseReader_XmlAttributeNode* attributeNode) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "FixXmlAttribute", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlBaseReader_XmlAttributeNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, attributeNode);
}
inline bool System::Xml::XmlBaseReader::get_OutsideRootElement() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "get_OutsideRootElement",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Xml::XmlBaseReader::get_CanReadValueChunk() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 61)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlBaseReader::get_BaseURI() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool System::Xml::XmlBaseReader::get_IsDefault() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t System::Xml::XmlBaseReader::get_AttributeCount() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 39)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void System::Xml::XmlBaseReader::Close() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 52)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t System::Xml::XmlBaseReader::get_Depth() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "get_Depth",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool System::Xml::XmlBaseReader::get_EOF() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 51)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Xml::XmlBaseReader_XmlAttributeNode* System::Xml::XmlBaseReader::GetAttributeNode(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "GetAttributeNode",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlBaseReader_XmlAttributeNode*, false>(this, ___internal_method, index);
}
inline ::System::Xml::XmlBaseReader_XmlAttributeNode* System::Xml::XmlBaseReader::GetAttributeNode(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "GetAttributeNode", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlBaseReader_XmlAttributeNode*, false>(this, ___internal_method, name);
}
inline ::System::Xml::XmlBaseReader_XmlAttributeNode* System::Xml::XmlBaseReader::GetAttributeNode(::StringW localName, ::StringW namespaceUri) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "GetAttributeNode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlBaseReader_XmlAttributeNode*, false>(this, ___internal_method, localName, namespaceUri);
}
inline ::StringW System::Xml::XmlBaseReader::GetAttribute(int32_t index) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 42)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, index);
}
inline ::StringW System::Xml::XmlBaseReader::GetAttribute(::StringW name) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 40)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, name);
}
inline ::StringW System::Xml::XmlBaseReader::GetAttribute(::StringW localName, ::StringW namespaceUri) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 41)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, localName, namespaceUri);
}
inline bool System::Xml::XmlBaseReader::get_IsEmptyElement() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "get_IsEmptyElement",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlBaseReader::get_LocalName() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlBaseReader::LookupNamespace(::StringW prefix) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 56)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, prefix);
}
inline ::System::Xml::XmlBaseReader_Namespace* System::Xml::XmlBaseReader::LookupNamespace(::System::Xml::PrefixHandle* prefix) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "LookupNamespace", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::PrefixHandle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlBaseReader_Namespace*, false>(this, ___internal_method, prefix);
}
inline void System::Xml::XmlBaseReader::ProcessAttributes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "ProcessAttributes",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlBaseReader::ProcessAttributes(::ArrayW<::System::Xml::XmlBaseReader_XmlAttributeNode*, ::Array<::System::Xml::XmlBaseReader_XmlAttributeNode*>*> attributeNodes,
                                                          int32_t attributeCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "ProcessAttributes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Xml::XmlBaseReader_XmlAttributeNode*, ::Array<::System::Xml::XmlBaseReader_XmlAttributeNode*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, attributeNodes, attributeCount);
}
inline void System::Xml::XmlBaseReader::CheckAttributes(::ArrayW<::System::Xml::XmlBaseReader_XmlAttributeNode*, ::Array<::System::Xml::XmlBaseReader_XmlAttributeNode*>*> attributeNodes,
                                                        int32_t attributeCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "CheckAttributes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Xml::XmlBaseReader_XmlAttributeNode*, ::Array<::System::Xml::XmlBaseReader_XmlAttributeNode*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, attributeNodes, attributeCount);
}
inline void System::Xml::XmlBaseReader::MoveToAttribute(int32_t index) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 45)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
inline bool System::Xml::XmlBaseReader::MoveToAttribute(::StringW name) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 43)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, name);
}
inline bool System::Xml::XmlBaseReader::MoveToAttribute(::StringW localName, ::StringW namespaceUri) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 44)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, localName, namespaceUri);
}
inline bool System::Xml::XmlBaseReader::MoveToElement() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 48)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Xml::XmlNodeType System::Xml::XmlBaseReader::MoveToContent() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 64)));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNodeType, false>(this, ___internal_method);
}
inline bool System::Xml::XmlBaseReader::MoveToFirstAttribute() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 46)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Xml::XmlBaseReader::MoveToNextAttribute() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 47)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlBaseReader::get_NamespaceURI() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Xml::XmlNameTable* System::Xml::XmlBaseReader::get_NameTable() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 55)));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNameTable*, false>(this, ___internal_method);
}
inline ::System::Xml::XmlNodeType System::Xml::XmlBaseReader::get_NodeType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "get_NodeType",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNodeType, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlBaseReader::get_Prefix() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline char16_t System::Xml::XmlBaseReader::get_QuoteChar() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<char16_t, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlBaseReader::GetLocalName(bool enforceAtomization) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "GetLocalName", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, enforceAtomization);
}
inline ::StringW System::Xml::XmlBaseReader::GetNamespaceUri(bool enforceAtomization) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "GetNamespaceUri",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, enforceAtomization);
}
inline bool System::Xml::XmlBaseReader::IsLocalName(::StringW localName) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 77)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, localName);
}
inline bool System::Xml::XmlBaseReader::IsLocalName(::System::Xml::XmlDictionaryString* localName) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 78)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, localName);
}
inline bool System::Xml::XmlBaseReader::IsNamespaceUri(::StringW namespaceUri) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 79)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, namespaceUri);
}
inline bool System::Xml::XmlBaseReader::IsNamespaceUri(::System::Xml::XmlDictionaryString* namespaceUri) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 80)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, namespaceUri);
}
inline bool System::Xml::XmlBaseReader::IsStartElement() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "IsStartElement",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Xml::XmlBaseReader::IsStartElement(::StringW localName, ::StringW namespaceUri) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 69)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, localName, namespaceUri);
}
inline bool System::Xml::XmlBaseReader::IsStartElement(::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 81)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, localName, namespaceUri);
}
inline int32_t System::Xml::XmlBaseReader::IndexOfLocalName(::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*> localNames,
                                                            ::System::Xml::XmlDictionaryString* namespaceUri) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 82)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, localNames, namespaceUri);
}
inline int32_t System::Xml::XmlBaseReader::ReadValueChunk(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 62)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, chars, offset, count);
}
inline ::StringW System::Xml::XmlBaseReader::ReadElementContentAsString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 38)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlBaseReader::ReadElementString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 66)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void System::Xml::XmlBaseReader::ReadStartElement() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 65)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlBaseReader::ReadEndElement() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 67)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Xml::XmlBaseReader::ReadAttributeValue() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 49)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Xml::ReadState System::Xml::XmlBaseReader::get_ReadState() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 53)));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::ReadState, false>(this, ___internal_method);
}
inline void System::Xml::XmlBaseReader::SkipValue(::System::Xml::XmlBaseReader_XmlNode* node) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "SkipValue", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlBaseReader_XmlNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node);
}
inline bool System::Xml::XmlBaseReader::TryGetBase64ContentLength(::ByRef<int32_t> length) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 83)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, length);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> System::Xml::XmlBaseReader::ReadContentAsBase64() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 84)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline int32_t System::Xml::XmlBaseReader::ReadContentAsBase64(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 59)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, buffer, offset, count);
}
inline int32_t System::Xml::XmlBaseReader::ReadContentAsBinHex(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 60)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, buffer, offset, count);
}
inline int32_t System::Xml::XmlBaseReader::ReadBytes(::System::Text::Encoding* encoding, int32_t byteBlock, int32_t charBlock, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset,
                                                     int32_t byteCount, bool readContent) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "ReadBytes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, encoding, byteBlock, charBlock, buffer, offset, byteCount, readContent);
}
inline ::StringW System::Xml::XmlBaseReader::ReadContentAsString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 29)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool System::Xml::XmlBaseReader::ReadContentAsBoolean() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 22)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int64_t System::Xml::XmlBaseReader::ReadContentAsLong() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 28)));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline int32_t System::Xml::XmlBaseReader::ReadContentAsInt() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 27)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::DateTime System::Xml::XmlBaseReader::ReadContentAsDateTime() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 23)));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(this, ___internal_method);
}
inline double_t System::Xml::XmlBaseReader::ReadContentAsDouble() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 24)));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline float_t System::Xml::XmlBaseReader::ReadContentAsFloat() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 25)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::System::Decimal System::Xml::XmlBaseReader::ReadContentAsDecimal() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 26)));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal, false>(this, ___internal_method);
}
inline ::System::Xml::UniqueId* System::Xml::XmlBaseReader::ReadContentAsUniqueId() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 86)));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::UniqueId*, false>(this, ___internal_method);
}
inline ::System::TimeSpan System::Xml::XmlBaseReader::ReadContentAsTimeSpan() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 88)));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(this, ___internal_method);
}
inline ::System::Guid System::Xml::XmlBaseReader::ReadContentAsGuid() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 87)));
  return ::cordl_internals::RunMethodRethrow<::System::Guid, false>(this, ___internal_method);
}
inline ::System::Object* System::Xml::XmlBaseReader::ReadContentAsObject() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Object* System::Xml::XmlBaseReader::ReadContentAs(::System::Type* type, ::System::Xml::IXmlNamespaceResolver* namespaceResolver) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 30)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, type, namespaceResolver);
}
inline void System::Xml::XmlBaseReader::ResolveEntity() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 58)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlBaseReader::Skip() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 54)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlBaseReader::get_Value() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Type* System::Xml::XmlBaseReader::get_ValueType() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlBaseReader::get_XmlLang() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Xml::XmlSpace System::Xml::XmlBaseReader::get_XmlSpace() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlSpace, false>(this, ___internal_method);
}
inline bool System::Xml::XmlBaseReader::TryGetLocalNameAsDictionaryString(::ByRef<::System::Xml::XmlDictionaryString*> localName) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 92)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, localName);
}
inline bool System::Xml::XmlBaseReader::TryGetNamespaceUriAsDictionaryString(::ByRef<::System::Xml::XmlDictionaryString*> localName) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 93)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, localName);
}
inline bool System::Xml::XmlBaseReader::TryGetValueAsDictionaryString(::ByRef<::System::Xml::XmlDictionaryString*> value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), 94)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value);
}
inline ::StringW System::Xml::XmlBaseReader::GetOpenElements() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "GetOpenElements",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::ArrayW<char16_t, ::Array<char16_t>*> System::Xml::XmlBaseReader::GetCharBuffer(int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "GetCharBuffer", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<char16_t, ::Array<char16_t>*>, false>(this, ___internal_method, count);
}
inline void System::Xml::XmlBaseReader::SignStartElement(::System::Xml::XmlSigningNodeWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "SignStartElement", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlSigningNodeWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer);
}
inline void System::Xml::XmlBaseReader::SignAttribute(::System::Xml::XmlSigningNodeWriter* writer, ::System::Xml::XmlBaseReader_XmlAttributeNode* attributeNode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "SignAttribute", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlSigningNodeWriter*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlBaseReader_XmlAttributeNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, attributeNode);
}
inline void System::Xml::XmlBaseReader::SignEndElement(::System::Xml::XmlSigningNodeWriter* writer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "SignEndElement", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlSigningNodeWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer);
}
inline void System::Xml::XmlBaseReader::SignNode(::System::Xml::XmlSigningNodeWriter* writer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "SignNode", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlSigningNodeWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer);
}
inline void System::Xml::XmlBaseReader::SignNode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlBaseReader*>::get(), "SignNode",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Xml::XmlBaseReader* System::Xml::XmlBaseReader::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::XmlBaseReader*>());
}
// Ctor Parameters []
constexpr ::System::Xml::XmlBaseReader::XmlBaseReader() {}
