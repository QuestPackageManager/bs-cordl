#pragma once
// IWYU pragma private; include "System\Xml\XmlBaseReader.hpp"
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseReader_XmlNode::*)(
    ::System::Xml::XmlNodeType, ::System::Xml::PrefixHandle*, ::System::Xml::StringHandle*, ::System::Xml::ValueHandle*, ::System::Xml::XmlNode_XmlBaseReader_XmlNodeFlags, ::System::Xml::ReadState,
    ::System::Xml::XmlBaseReader_XmlAttributeTextNode*, int32_t)>(&::System::Xml::XmlBaseReader_XmlNode::_ctor)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x610ec98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlNode*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<::System::Xml::XmlNodeType>(), ::i2c::type_of<::System::Xml::PrefixHandle*>(), ::i2c::type_of<::System::Xml::StringHandle*>(),
                                                    ::i2c::type_of<::System::Xml::ValueHandle*>(), ::i2c::type_of<::System::Xml::XmlNode_XmlBaseReader_XmlNodeFlags>(),
                                                    ::i2c::type_of<::System::Xml::ReadState>(), ::i2c::type_of<::System::Xml::XmlBaseReader_XmlAttributeTextNode*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlNode.get_ReadState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::ReadState (::System::Xml::XmlBaseReader_XmlNode::*)()>(&::System::Xml::XmlBaseReader_XmlNode::get_ReadState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x610edd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlNode*>(), { "get_ReadState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlNode.get_LocalName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::StringHandle* (::System::Xml::XmlBaseReader_XmlNode::*)()>(&::System::Xml::XmlBaseReader_XmlNode::get_LocalName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x610ede0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlNode*>(), { "get_LocalName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlNode.get_Prefix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::PrefixHandle* (::System::Xml::XmlBaseReader_XmlNode::*)()>(&::System::Xml::XmlBaseReader_XmlNode::get_Prefix)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x610ede8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlNode*>(), { "get_Prefix", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlNode.get_CanGetAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlBaseReader_XmlNode::*)()>(&::System::Xml::XmlBaseReader_XmlNode::get_CanGetAttribute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x610edf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlNode*>(), { "get_CanGetAttribute", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlNode.get_CanMoveToElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlBaseReader_XmlNode::*)()>(&::System::Xml::XmlBaseReader_XmlNode::get_CanMoveToElement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x610edf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlNode*>(), { "get_CanMoveToElement", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlNode.get_AttributeText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlBaseReader_XmlAttributeTextNode* (::System::Xml::XmlBaseReader_XmlNode::*)()>(
    &::System::Xml::XmlBaseReader_XmlNode::get_AttributeText)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x610ee00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlNode*>(), { "get_AttributeText", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlNode.get_SkipValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlBaseReader_XmlNode::*)()>(&::System::Xml::XmlBaseReader_XmlNode::get_SkipValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x610ee08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlNode*>(), { "get_SkipValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlNode.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::ValueHandle* (::System::Xml::XmlBaseReader_XmlNode::*)()>(&::System::Xml::XmlBaseReader_XmlNode::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x610ee10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlNode*>(), { "get_Value", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlNode.get_DepthDelta
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlBaseReader_XmlNode::*)()>(&::System::Xml::XmlBaseReader_XmlNode::get_DepthDelta)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x610ee18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlNode*>(), { "get_DepthDelta", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlNode.get_HasContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlBaseReader_XmlNode::*)()>(&::System::Xml::XmlBaseReader_XmlNode::get_HasContent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x610ee20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlNode*>(), { "get_HasContent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlNode.get_NodeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNodeType (::System::Xml::XmlBaseReader_XmlNode::*)()>(&::System::Xml::XmlBaseReader_XmlNode::get_NodeType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x610ee28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlNode*>(), { "get_NodeType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlNode.set_NodeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseReader_XmlNode::*)(::System::Xml::XmlNodeType)>(&::System::Xml::XmlBaseReader_XmlNode::set_NodeType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x610ee30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlNode*>(), { "set_NodeType", {}, { ::i2c::type_of<::System::Xml::XmlNodeType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlNode.get_QNameType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlBaseReader_QNameType (::System::Xml::XmlBaseReader_XmlNode::*)()>(&::System::Xml::XmlBaseReader_XmlNode::get_QNameType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x610ee38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlNode*>(), { "get_QNameType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlNode.set_QNameType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseReader_XmlNode::*)(::System::Xml::XmlBaseReader_QNameType)>(&::System::Xml::XmlBaseReader_XmlNode::set_QNameType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x610ee40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlNode*>(), { "set_QNameType", {}, { ::i2c::type_of<::System::Xml::XmlBaseReader_QNameType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlNode.get_Namespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlBaseReader_Namespace* (::System::Xml::XmlBaseReader_XmlNode::*)()>(&::System::Xml::XmlBaseReader_XmlNode::get_Namespace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x610ee48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlNode*>(), { "get_Namespace", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlNode.set_Namespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseReader_XmlNode::*)(::System::Xml::XmlBaseReader_Namespace*)>(&::System::Xml::XmlBaseReader_XmlNode::set_Namespace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x610ee50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlNode*>(), { "set_Namespace", {}, { ::i2c::type_of<::System::Xml::XmlBaseReader_Namespace*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlNode.get_IsAtomicValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlBaseReader_XmlNode::*)()>(&::System::Xml::XmlBaseReader_XmlNode::get_IsAtomicValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x610ee58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlNode*>(), { "get_IsAtomicValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlNode.set_IsAtomicValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseReader_XmlNode::*)(bool)>(&::System::Xml::XmlBaseReader_XmlNode::set_IsAtomicValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x610ee60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlNode*>(), { "set_IsAtomicValue", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlNode.get_ExitScope
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlBaseReader_XmlNode::*)()>(&::System::Xml::XmlBaseReader_XmlNode::get_ExitScope)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x610ee68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlNode*>(), { "get_ExitScope", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlNode.set_ExitScope
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseReader_XmlNode::*)(bool)>(&::System::Xml::XmlBaseReader_XmlNode::set_ExitScope)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x610ee70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlNode*>(), { "set_ExitScope", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlNode.get_IsEmptyElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlBaseReader_XmlNode::*)()>(&::System::Xml::XmlBaseReader_XmlNode::get_IsEmptyElement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x610ee78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlNode*>(), { "get_IsEmptyElement", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlNode.set_IsEmptyElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseReader_XmlNode::*)(bool)>(&::System::Xml::XmlBaseReader_XmlNode::set_IsEmptyElement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x610ee80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlNode*>(), { "set_IsEmptyElement", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlNode.get_QuoteChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::System::Xml::XmlBaseReader_XmlNode::*)()>(&::System::Xml::XmlBaseReader_XmlNode::get_QuoteChar)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x610ee88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlNode*>(), { "get_QuoteChar", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlNode.set_QuoteChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseReader_XmlNode::*)(char16_t)>(&::System::Xml::XmlBaseReader_XmlNode::set_QuoteChar)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x610ee90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlNode*>(), { "set_QuoteChar", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlNode.IsLocalName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlBaseReader_XmlNode::*)(::StringW)>(&::System::Xml::XmlBaseReader_XmlNode::IsLocalName)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x610b404;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlNode*>(), { "IsLocalName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlNode.IsLocalName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlBaseReader_XmlNode::*)(::System::Xml::XmlDictionaryString*)>(&::System::Xml::XmlBaseReader_XmlNode::IsLocalName)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x610b534;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlNode*>(), { "IsLocalName", {}, { ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlNode.IsNamespaceUri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlBaseReader_XmlNode::*)(::StringW)>(&::System::Xml::XmlBaseReader_XmlNode::IsNamespaceUri)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x610b648;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlNode*>(), { "IsNamespaceUri", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlNode.IsNamespaceUri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlBaseReader_XmlNode::*)(::System::Xml::XmlDictionaryString*)>(&::System::Xml::XmlBaseReader_XmlNode::IsNamespaceUri)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x610b714;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlNode*>(), { "IsNamespaceUri", {}, { ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlNode.IsLocalNameAndNamespaceUri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlBaseReader_XmlNode::*)(::StringW, ::StringW)>(&::System::Xml::XmlBaseReader_XmlNode::IsLocalNameAndNamespaceUri)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x610a014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlNode*>(),
                                                                                           { "IsLocalNameAndNamespaceUri", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlNode.IsPrefixAndLocalName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlBaseReader_XmlNode::*)(::StringW, ::StringW)>(&::System::Xml::XmlBaseReader_XmlNode::IsPrefixAndLocalName)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x6109dc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlNode*>(), { "IsPrefixAndLocalName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlNode.TryGetLocalNameAsDictionaryString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlBaseReader_XmlNode::*)(::by_ref<::System::Xml::XmlDictionaryString*>)>(
    &::System::Xml::XmlBaseReader_XmlNode::TryGetLocalNameAsDictionaryString)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x610e25c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlNode*>(),
                                                             { "TryGetLocalNameAsDictionaryString", {}, { ::i2c::type_of<::by_ref<::System::Xml::XmlDictionaryString*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlNode.TryGetNamespaceUriAsDictionaryString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlBaseReader_XmlNode::*)(::by_ref<::System::Xml::XmlDictionaryString*>)>(
    &::System::Xml::XmlBaseReader_XmlNode::TryGetNamespaceUriAsDictionaryString)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x610e298;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlNode*>(),
                                                             { "TryGetNamespaceUriAsDictionaryString", {}, { ::i2c::type_of<::by_ref<::System::Xml::XmlDictionaryString*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlNode.TryGetValueAsDictionaryString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlBaseReader_XmlNode::*)(::by_ref<::System::Xml::XmlDictionaryString*>)>(
    &::System::Xml::XmlBaseReader_XmlNode::TryGetValueAsDictionaryString)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x610e2e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlNode*>(), { "TryGetValueAsDictionaryString", {}, { ::i2c::type_of<::by_ref<::System::Xml::XmlDictionaryString*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlNode.get_ValueAsString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlBaseReader_XmlNode::*)()>(&::System::Xml::XmlBaseReader_XmlNode::get_ValueAsString)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x610a14c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlNode*>(), { "get_ValueAsString", {}, {} })));
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
  this->___prefix = value;
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
  this->___localName = value;
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
  this->___value = value;
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
  this->___ns = value;
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
  this->___attributeTextNode = value;
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
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlNode*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<::System::Xml::XmlNodeType>(), ::i2c::type_of<::System::Xml::PrefixHandle*>(), ::i2c::type_of<::System::Xml::StringHandle*>(),
                                                  ::i2c::type_of<::System::Xml::ValueHandle*>(), ::i2c::type_of<::System::Xml::XmlNode_XmlBaseReader_XmlNodeFlags>(),
                                                  ::i2c::type_of<::System::Xml::ReadState>(), ::i2c::type_of<::System::Xml::XmlBaseReader_XmlAttributeTextNode*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nodeType, prefix, localName, value, nodeFlags, readState, attributeTextNode, depthDelta);
}
inline ::System::Xml::ReadState System::Xml::XmlBaseReader_XmlNode::get_ReadState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlNode*>(), { "get_ReadState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::ReadState>(this, ___internal_method);
}
inline ::System::Xml::StringHandle* System::Xml::XmlBaseReader_XmlNode::get_LocalName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlNode*>(), { "get_LocalName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::StringHandle*>(this, ___internal_method);
}
inline ::System::Xml::PrefixHandle* System::Xml::XmlBaseReader_XmlNode::get_Prefix() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlNode*>(), { "get_Prefix", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::PrefixHandle*>(this, ___internal_method);
}
inline bool System::Xml::XmlBaseReader_XmlNode::get_CanGetAttribute() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlNode*>(), { "get_CanGetAttribute", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Xml::XmlBaseReader_XmlNode::get_CanMoveToElement() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlNode*>(), { "get_CanMoveToElement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Xml::XmlBaseReader_XmlAttributeTextNode* System::Xml::XmlBaseReader_XmlNode::get_AttributeText() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlNode*>(), { "get_AttributeText", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlBaseReader_XmlAttributeTextNode*>(this, ___internal_method);
}
inline bool System::Xml::XmlBaseReader_XmlNode::get_SkipValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlNode*>(), { "get_SkipValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Xml::ValueHandle* System::Xml::XmlBaseReader_XmlNode::get_Value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlNode*>(), { "get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::ValueHandle*>(this, ___internal_method);
}
inline int32_t System::Xml::XmlBaseReader_XmlNode::get_DepthDelta() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlNode*>(), { "get_DepthDelta", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Xml::XmlBaseReader_XmlNode::get_HasContent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlNode*>(), { "get_HasContent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Xml::XmlNodeType System::Xml::XmlBaseReader_XmlNode::get_NodeType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlNode*>(), { "get_NodeType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNodeType>(this, ___internal_method);
}
inline void System::Xml::XmlBaseReader_XmlNode::set_NodeType(::System::Xml::XmlNodeType value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlNode*>(), { "set_NodeType", {}, { ::i2c::type_of<::System::Xml::XmlNodeType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Xml::XmlBaseReader_QNameType System::Xml::XmlBaseReader_XmlNode::get_QNameType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlNode*>(), { "get_QNameType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlBaseReader_QNameType>(this, ___internal_method);
}
inline void System::Xml::XmlBaseReader_XmlNode::set_QNameType(::System::Xml::XmlBaseReader_QNameType value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlNode*>(), { "set_QNameType", {}, { ::i2c::type_of<::System::Xml::XmlBaseReader_QNameType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Xml::XmlBaseReader_Namespace* System::Xml::XmlBaseReader_XmlNode::get_Namespace() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlNode*>(), { "get_Namespace", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlBaseReader_Namespace*>(this, ___internal_method);
}
inline void System::Xml::XmlBaseReader_XmlNode::set_Namespace(::System::Xml::XmlBaseReader_Namespace* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlNode*>(), { "set_Namespace", {}, { ::i2c::type_of<::System::Xml::XmlBaseReader_Namespace*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Xml::XmlBaseReader_XmlNode::get_IsAtomicValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlNode*>(), { "get_IsAtomicValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Xml::XmlBaseReader_XmlNode::set_IsAtomicValue(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlNode*>(), { "set_IsAtomicValue", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Xml::XmlBaseReader_XmlNode::get_ExitScope() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlNode*>(), { "get_ExitScope", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Xml::XmlBaseReader_XmlNode::set_ExitScope(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlNode*>(), { "set_ExitScope", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Xml::XmlBaseReader_XmlNode::get_IsEmptyElement() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlNode*>(), { "get_IsEmptyElement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Xml::XmlBaseReader_XmlNode::set_IsEmptyElement(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlNode*>(), { "set_IsEmptyElement", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline char16_t System::Xml::XmlBaseReader_XmlNode::get_QuoteChar() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlNode*>(), { "get_QuoteChar", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(this, ___internal_method);
}
inline void System::Xml::XmlBaseReader_XmlNode::set_QuoteChar(char16_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlNode*>(), { "set_QuoteChar", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Xml::XmlBaseReader_XmlNode::IsLocalName(::StringW localName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlNode*>(), { "IsLocalName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, localName);
}
inline bool System::Xml::XmlBaseReader_XmlNode::IsLocalName(::System::Xml::XmlDictionaryString* localName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlNode*>(), { "IsLocalName", {}, { ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, localName);
}
inline bool System::Xml::XmlBaseReader_XmlNode::IsNamespaceUri(::StringW ns) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlNode*>(), { "IsNamespaceUri", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ns);
}
inline bool System::Xml::XmlBaseReader_XmlNode::IsNamespaceUri(::System::Xml::XmlDictionaryString* ns) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlNode*>(), { "IsNamespaceUri", {}, { ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ns);
}
inline bool System::Xml::XmlBaseReader_XmlNode::IsLocalNameAndNamespaceUri(::StringW localName, ::StringW ns) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlNode*>(), { "IsLocalNameAndNamespaceUri", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, localName, ns);
}
inline bool System::Xml::XmlBaseReader_XmlNode::IsPrefixAndLocalName(::StringW prefix, ::StringW localName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlNode*>(), { "IsPrefixAndLocalName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, prefix, localName);
}
inline bool System::Xml::XmlBaseReader_XmlNode::TryGetLocalNameAsDictionaryString(::by_ref<::System::Xml::XmlDictionaryString*> localName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlNode*>(), { "TryGetLocalNameAsDictionaryString", {}, { ::i2c::type_of<::by_ref<::System::Xml::XmlDictionaryString*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, localName);
}
inline bool System::Xml::XmlBaseReader_XmlNode::TryGetNamespaceUriAsDictionaryString(::by_ref<::System::Xml::XmlDictionaryString*> ns) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlNode*>(),
                                                           { "TryGetNamespaceUriAsDictionaryString", {}, { ::i2c::type_of<::by_ref<::System::Xml::XmlDictionaryString*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ns);
}
inline bool System::Xml::XmlBaseReader_XmlNode::TryGetValueAsDictionaryString(::by_ref<::System::Xml::XmlDictionaryString*> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlNode*>(), { "TryGetValueAsDictionaryString", {}, { ::i2c::type_of<::by_ref<::System::Xml::XmlDictionaryString*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline ::StringW System::Xml::XmlBaseReader_XmlNode::get_ValueAsString() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlNode*>(), { "get_ValueAsString", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Xml::XmlBaseReader_XmlNode* System::Xml::XmlBaseReader_XmlNode::New_ctor(::System::Xml::XmlNodeType nodeType, ::System::Xml::PrefixHandle* prefix,
                                                                                          ::System::Xml::StringHandle* localName, ::System::Xml::ValueHandle* value,
                                                                                          ::System::Xml::XmlNode_XmlBaseReader_XmlNodeFlags nodeFlags, ::System::Xml::ReadState readState,
                                                                                          ::System::Xml::XmlBaseReader_XmlAttributeTextNode* attributeTextNode, int32_t depthDelta) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlBaseReader_XmlNode*>(nodeType, prefix, localName, value, nodeFlags, readState, attributeTextNode, depthDelta));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlBaseReader_XmlNode::XmlBaseReader_XmlNode() {}
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlElementNode._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseReader_XmlElementNode::*)(::System::Xml::XmlBufferReader*)>(&::System::Xml::XmlBaseReader_XmlElementNode::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x61077f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlElementNode*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlBufferReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlElementNode._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseReader_XmlElementNode::*)(::System::Xml::PrefixHandle*, ::System::Xml::StringHandle*, ::System::Xml::ValueHandle*)>(
    &::System::Xml::XmlBaseReader_XmlElementNode::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x610efd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlElementNode*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Xml::PrefixHandle*>(), ::i2c::type_of<::System::Xml::StringHandle*>(), ::i2c::type_of<::System::Xml::ValueHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlElementNode.get_EndElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlBaseReader_XmlEndElementNode* (::System::Xml::XmlBaseReader_XmlElementNode::*)()>(
    &::System::Xml::XmlBaseReader_XmlElementNode::get_EndElement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x610f0d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlElementNode*>(), { "get_EndElement", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlElementNode.get_BufferOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlBaseReader_XmlElementNode::*)()>(&::System::Xml::XmlBaseReader_XmlElementNode::get_BufferOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x610f0e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlElementNode*>(), { "get_BufferOffset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlElementNode.set_BufferOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseReader_XmlElementNode::*)(int32_t)>(&::System::Xml::XmlBaseReader_XmlElementNode::set_BufferOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x610f0e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlElementNode*>(), { "set_BufferOffset", {}, { ::i2c::type_of<int32_t>() } })));
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
  this->___endElementNode = value;
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
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlElementNode*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlBufferReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bufferReader);
}
inline void System::Xml::XmlBaseReader_XmlElementNode::_ctor(::System::Xml::PrefixHandle* prefix, ::System::Xml::StringHandle* localName, ::System::Xml::ValueHandle* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlElementNode*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Xml::PrefixHandle*>(), ::i2c::type_of<::System::Xml::StringHandle*>(), ::i2c::type_of<::System::Xml::ValueHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, value);
}
inline ::System::Xml::XmlBaseReader_XmlEndElementNode* System::Xml::XmlBaseReader_XmlElementNode::get_EndElement() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlElementNode*>(), { "get_EndElement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlBaseReader_XmlEndElementNode*>(this, ___internal_method);
}
inline int32_t System::Xml::XmlBaseReader_XmlElementNode::get_BufferOffset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlElementNode*>(), { "get_BufferOffset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Xml::XmlBaseReader_XmlElementNode::set_BufferOffset(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlElementNode*>(), { "set_BufferOffset", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Xml::XmlBaseReader_XmlElementNode* System::Xml::XmlBaseReader_XmlElementNode::New_ctor(::System::Xml::XmlBufferReader* bufferReader) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlBaseReader_XmlElementNode*>(bufferReader));
}
inline ::System::Xml::XmlBaseReader_XmlElementNode* System::Xml::XmlBaseReader_XmlElementNode::New_ctor(::System::Xml::PrefixHandle* prefix, ::System::Xml::StringHandle* localName,
                                                                                                        ::System::Xml::ValueHandle* value) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlBaseReader_XmlElementNode*>(prefix, localName, value));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlBaseReader_XmlElementNode::XmlBaseReader_XmlElementNode() {}
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlAttributeNode._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseReader_XmlAttributeNode::*)(::System::Xml::XmlBufferReader*)>(
    &::System::Xml::XmlBaseReader_XmlAttributeNode::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6109078;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlAttributeNode*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlBufferReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlAttributeNode._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseReader_XmlAttributeNode::*)(::System::Xml::PrefixHandle*, ::System::Xml::StringHandle*,
                                                                                                               ::System::Xml::ValueHandle*)>(&::System::Xml::XmlBaseReader_XmlAttributeNode::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x610f0f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlAttributeNode*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Xml::PrefixHandle*>(), ::i2c::type_of<::System::Xml::StringHandle*>(), ::i2c::type_of<::System::Xml::ValueHandle*>() } })));
    return ___internal_method;
  }
};
inline void System::Xml::XmlBaseReader_XmlAttributeNode::_ctor(::System::Xml::XmlBufferReader* bufferReader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlAttributeNode*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlBufferReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bufferReader);
}
inline void System::Xml::XmlBaseReader_XmlAttributeNode::_ctor(::System::Xml::PrefixHandle* prefix, ::System::Xml::StringHandle* localName, ::System::Xml::ValueHandle* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlAttributeNode*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Xml::PrefixHandle*>(), ::i2c::type_of<::System::Xml::StringHandle*>(), ::i2c::type_of<::System::Xml::ValueHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, value);
}
inline ::System::Xml::XmlBaseReader_XmlAttributeNode* System::Xml::XmlBaseReader_XmlAttributeNode::New_ctor(::System::Xml::XmlBufferReader* bufferReader) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlBaseReader_XmlAttributeNode*>(bufferReader));
}
inline ::System::Xml::XmlBaseReader_XmlAttributeNode* System::Xml::XmlBaseReader_XmlAttributeNode::New_ctor(::System::Xml::PrefixHandle* prefix, ::System::Xml::StringHandle* localName,
                                                                                                            ::System::Xml::ValueHandle* value) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlBaseReader_XmlAttributeNode*>(prefix, localName, value));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlBaseReader_XmlAttributeNode::XmlBaseReader_XmlAttributeNode() {}
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlEndElementNode._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseReader_XmlEndElementNode::*)(::System::Xml::PrefixHandle*, ::System::Xml::StringHandle*,
                                                                                                                ::System::Xml::ValueHandle*)>(&::System::Xml::XmlBaseReader_XmlEndElementNode::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x610f09c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlEndElementNode*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Xml::PrefixHandle*>(), ::i2c::type_of<::System::Xml::StringHandle*>(), ::i2c::type_of<::System::Xml::ValueHandle*>() } })));
    return ___internal_method;
  }
};
inline void System::Xml::XmlBaseReader_XmlEndElementNode::_ctor(::System::Xml::PrefixHandle* prefix, ::System::Xml::StringHandle* localName, ::System::Xml::ValueHandle* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlEndElementNode*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Xml::PrefixHandle*>(), ::i2c::type_of<::System::Xml::StringHandle*>(), ::i2c::type_of<::System::Xml::ValueHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, value);
}
inline ::System::Xml::XmlBaseReader_XmlEndElementNode* System::Xml::XmlBaseReader_XmlEndElementNode::New_ctor(::System::Xml::PrefixHandle* prefix, ::System::Xml::StringHandle* localName,
                                                                                                              ::System::Xml::ValueHandle* value) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlBaseReader_XmlEndElementNode*>(prefix, localName, value));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlBaseReader_XmlEndElementNode::XmlBaseReader_XmlEndElementNode() {}
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlTextNode._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseReader_XmlTextNode::*)(
    ::System::Xml::XmlNodeType, ::System::Xml::PrefixHandle*, ::System::Xml::StringHandle*, ::System::Xml::ValueHandle*, ::System::Xml::XmlNode_XmlBaseReader_XmlNodeFlags, ::System::Xml::ReadState,
    ::System::Xml::XmlBaseReader_XmlAttributeTextNode*, int32_t)>(&::System::Xml::XmlBaseReader_XmlTextNode::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x610f1f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlTextNode*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<::System::Xml::XmlNodeType>(), ::i2c::type_of<::System::Xml::PrefixHandle*>(), ::i2c::type_of<::System::Xml::StringHandle*>(),
                                                    ::i2c::type_of<::System::Xml::ValueHandle*>(), ::i2c::type_of<::System::Xml::XmlNode_XmlBaseReader_XmlNodeFlags>(),
                                                    ::i2c::type_of<::System::Xml::ReadState>(), ::i2c::type_of<::System::Xml::XmlBaseReader_XmlAttributeTextNode*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void System::Xml::XmlBaseReader_XmlTextNode::_ctor(::System::Xml::XmlNodeType nodeType, ::System::Xml::PrefixHandle* prefix, ::System::Xml::StringHandle* localName,
                                                          ::System::Xml::ValueHandle* value, ::System::Xml::XmlNode_XmlBaseReader_XmlNodeFlags nodeFlags, ::System::Xml::ReadState readState,
                                                          ::System::Xml::XmlBaseReader_XmlAttributeTextNode* attributeTextNode, int32_t depthDelta) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlTextNode*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<::System::Xml::XmlNodeType>(), ::i2c::type_of<::System::Xml::PrefixHandle*>(), ::i2c::type_of<::System::Xml::StringHandle*>(),
                                                  ::i2c::type_of<::System::Xml::ValueHandle*>(), ::i2c::type_of<::System::Xml::XmlNode_XmlBaseReader_XmlNodeFlags>(),
                                                  ::i2c::type_of<::System::Xml::ReadState>(), ::i2c::type_of<::System::Xml::XmlBaseReader_XmlAttributeTextNode*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nodeType, prefix, localName, value, nodeFlags, readState, attributeTextNode, depthDelta);
}
inline ::System::Xml::XmlBaseReader_XmlTextNode* System::Xml::XmlBaseReader_XmlTextNode::New_ctor(::System::Xml::XmlNodeType nodeType, ::System::Xml::PrefixHandle* prefix,
                                                                                                  ::System::Xml::StringHandle* localName, ::System::Xml::ValueHandle* value,
                                                                                                  ::System::Xml::XmlNode_XmlBaseReader_XmlNodeFlags nodeFlags, ::System::Xml::ReadState readState,
                                                                                                  ::System::Xml::XmlBaseReader_XmlAttributeTextNode* attributeTextNode, int32_t depthDelta) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlBaseReader_XmlTextNode*>(nodeType, prefix, localName, value, nodeFlags, readState, attributeTextNode, depthDelta));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlBaseReader_XmlTextNode::XmlBaseReader_XmlTextNode() {}
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlAtomicTextNode._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseReader_XmlAtomicTextNode::*)(::System::Xml::XmlBufferReader*)>(
    &::System::Xml::XmlBaseReader_XmlAtomicTextNode::_ctor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x61078c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlAtomicTextNode*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlBufferReader*>() } })));
    return ___internal_method;
  }
};
inline void System::Xml::XmlBaseReader_XmlAtomicTextNode::_ctor(::System::Xml::XmlBufferReader* bufferReader) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlAtomicTextNode*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlBufferReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bufferReader);
}
inline ::System::Xml::XmlBaseReader_XmlAtomicTextNode* System::Xml::XmlBaseReader_XmlAtomicTextNode::New_ctor(::System::Xml::XmlBufferReader* bufferReader) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlBaseReader_XmlAtomicTextNode*>(bufferReader));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlBaseReader_XmlAtomicTextNode::XmlBaseReader_XmlAtomicTextNode() {}
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlComplexTextNode._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseReader_XmlComplexTextNode::*)(::System::Xml::XmlBufferReader*)>(
    &::System::Xml::XmlBaseReader_XmlComplexTextNode::_ctor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x61087f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlComplexTextNode*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlBufferReader*>() } })));
    return ___internal_method;
  }
};
inline void System::Xml::XmlBaseReader_XmlComplexTextNode::_ctor(::System::Xml::XmlBufferReader* bufferReader) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlComplexTextNode*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlBufferReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bufferReader);
}
inline ::System::Xml::XmlBaseReader_XmlComplexTextNode* System::Xml::XmlBaseReader_XmlComplexTextNode::New_ctor(::System::Xml::XmlBufferReader* bufferReader) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlBaseReader_XmlComplexTextNode*>(bufferReader));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlBaseReader_XmlComplexTextNode::XmlBaseReader_XmlComplexTextNode() {}
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlWhitespaceTextNode._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseReader_XmlWhitespaceTextNode::*)(::System::Xml::XmlBufferReader*)>(
    &::System::Xml::XmlBaseReader_XmlWhitespaceTextNode::_ctor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6108988;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlWhitespaceTextNode*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlBufferReader*>() } })));
    return ___internal_method;
  }
};
inline void System::Xml::XmlBaseReader_XmlWhitespaceTextNode::_ctor(::System::Xml::XmlBufferReader* bufferReader) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlWhitespaceTextNode*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlBufferReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bufferReader);
}
inline ::System::Xml::XmlBaseReader_XmlWhitespaceTextNode* System::Xml::XmlBaseReader_XmlWhitespaceTextNode::New_ctor(::System::Xml::XmlBufferReader* bufferReader) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlBaseReader_XmlWhitespaceTextNode*>(bufferReader));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlBaseReader_XmlWhitespaceTextNode::XmlBaseReader_XmlWhitespaceTextNode() {}
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlCDataNode._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseReader_XmlCDataNode::*)(::System::Xml::XmlBufferReader*)>(&::System::Xml::XmlBaseReader_XmlCDataNode::_ctor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6108678;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlCDataNode*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlBufferReader*>() } })));
    return ___internal_method;
  }
};
inline void System::Xml::XmlBaseReader_XmlCDataNode::_ctor(::System::Xml::XmlBufferReader* bufferReader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlCDataNode*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlBufferReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bufferReader);
}
inline ::System::Xml::XmlBaseReader_XmlCDataNode* System::Xml::XmlBaseReader_XmlCDataNode::New_ctor(::System::Xml::XmlBufferReader* bufferReader) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlBaseReader_XmlCDataNode*>(bufferReader));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlBaseReader_XmlCDataNode::XmlBaseReader_XmlCDataNode() {}
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlAttributeTextNode._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseReader_XmlAttributeTextNode::*)(
    ::System::Xml::PrefixHandle*, ::System::Xml::StringHandle*, ::System::Xml::ValueHandle*)>(&::System::Xml::XmlBaseReader_XmlAttributeTextNode::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x610f1b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlAttributeTextNode*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Xml::PrefixHandle*>(), ::i2c::type_of<::System::Xml::StringHandle*>(), ::i2c::type_of<::System::Xml::ValueHandle*>() } })));
    return ___internal_method;
  }
};
inline void System::Xml::XmlBaseReader_XmlAttributeTextNode::_ctor(::System::Xml::PrefixHandle* prefix, ::System::Xml::StringHandle* localName, ::System::Xml::ValueHandle* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlAttributeTextNode*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Xml::PrefixHandle*>(), ::i2c::type_of<::System::Xml::StringHandle*>(), ::i2c::type_of<::System::Xml::ValueHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, value);
}
inline ::System::Xml::XmlBaseReader_XmlAttributeTextNode* System::Xml::XmlBaseReader_XmlAttributeTextNode::New_ctor(::System::Xml::PrefixHandle* prefix, ::System::Xml::StringHandle* localName,
                                                                                                                    ::System::Xml::ValueHandle* value) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlBaseReader_XmlAttributeTextNode*>(prefix, localName, value));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlBaseReader_XmlAttributeTextNode::XmlBaseReader_XmlAttributeTextNode() {}
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlInitialNode._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseReader_XmlInitialNode::*)(::System::Xml::XmlBufferReader*)>(&::System::Xml::XmlBaseReader_XmlInitialNode::_ctor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x610e9d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlInitialNode*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlBufferReader*>() } })));
    return ___internal_method;
  }
};
inline void System::Xml::XmlBaseReader_XmlInitialNode::_ctor(::System::Xml::XmlBufferReader* bufferReader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlInitialNode*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlBufferReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bufferReader);
}
inline ::System::Xml::XmlBaseReader_XmlInitialNode* System::Xml::XmlBaseReader_XmlInitialNode::New_ctor(::System::Xml::XmlBufferReader* bufferReader) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlBaseReader_XmlInitialNode*>(bufferReader));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlBaseReader_XmlInitialNode::XmlBaseReader_XmlInitialNode() {}
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlDeclarationNode._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseReader_XmlDeclarationNode::*)(::System::Xml::XmlBufferReader*)>(
    &::System::Xml::XmlBaseReader_XmlDeclarationNode::_ctor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x61083b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlDeclarationNode*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlBufferReader*>() } })));
    return ___internal_method;
  }
};
inline void System::Xml::XmlBaseReader_XmlDeclarationNode::_ctor(::System::Xml::XmlBufferReader* bufferReader) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlDeclarationNode*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlBufferReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bufferReader);
}
inline ::System::Xml::XmlBaseReader_XmlDeclarationNode* System::Xml::XmlBaseReader_XmlDeclarationNode::New_ctor(::System::Xml::XmlBufferReader* bufferReader) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlBaseReader_XmlDeclarationNode*>(bufferReader));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlBaseReader_XmlDeclarationNode::XmlBaseReader_XmlDeclarationNode() {}
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlCommentNode._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseReader_XmlCommentNode::*)(::System::Xml::XmlBufferReader*)>(&::System::Xml::XmlBaseReader_XmlCommentNode::_ctor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6108514;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlCommentNode*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlBufferReader*>() } })));
    return ___internal_method;
  }
};
inline void System::Xml::XmlBaseReader_XmlCommentNode::_ctor(::System::Xml::XmlBufferReader* bufferReader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlCommentNode*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlBufferReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bufferReader);
}
inline ::System::Xml::XmlBaseReader_XmlCommentNode* System::Xml::XmlBaseReader_XmlCommentNode::New_ctor(::System::Xml::XmlBufferReader* bufferReader) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlBaseReader_XmlCommentNode*>(bufferReader));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlBaseReader_XmlCommentNode::XmlBaseReader_XmlCommentNode() {}
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlEndOfFileNode._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseReader_XmlEndOfFileNode::*)(::System::Xml::XmlBufferReader*)>(
    &::System::Xml::XmlBaseReader_XmlEndOfFileNode::_ctor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x610eac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlEndOfFileNode*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlBufferReader*>() } })));
    return ___internal_method;
  }
};
inline void System::Xml::XmlBaseReader_XmlEndOfFileNode::_ctor(::System::Xml::XmlBufferReader* bufferReader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlEndOfFileNode*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlBufferReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bufferReader);
}
inline ::System::Xml::XmlBaseReader_XmlEndOfFileNode* System::Xml::XmlBaseReader_XmlEndOfFileNode::New_ctor(::System::Xml::XmlBufferReader* bufferReader) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlBaseReader_XmlEndOfFileNode*>(bufferReader));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlBaseReader_XmlEndOfFileNode::XmlBaseReader_XmlEndOfFileNode() {}
//  Writing Method size for method: ::System::Xml::XmlBaseReader_XmlClosedNode._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseReader_XmlClosedNode::*)(::System::Xml::XmlBufferReader*)>(&::System::Xml::XmlBaseReader_XmlClosedNode::_ctor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x610ebac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlClosedNode*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlBufferReader*>() } })));
    return ___internal_method;
  }
};
inline void System::Xml::XmlBaseReader_XmlClosedNode::_ctor(::System::Xml::XmlBufferReader* bufferReader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_XmlClosedNode*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlBufferReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bufferReader);
}
inline ::System::Xml::XmlBaseReader_XmlClosedNode* System::Xml::XmlBaseReader_XmlClosedNode::New_ctor(::System::Xml::XmlBufferReader* bufferReader) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlBaseReader_XmlClosedNode*>(bufferReader));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlBaseReader_XmlClosedNode::XmlBaseReader_XmlClosedNode() {}
//  Writing Method size for method: ::System::Xml::XmlBaseReader_AttributeSorter.Sort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlBaseReader_AttributeSorter::*)(::ArrayW<::System::Xml::XmlBaseReader_XmlAttributeNode*>, int32_t)>(
    &::System::Xml::XmlBaseReader_AttributeSorter::Sort)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x610ac68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_AttributeSorter*>(),
                                                             { "Sort", {}, { ::i2c::type_of<::ArrayW<::System::Xml::XmlBaseReader_XmlAttributeNode*>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_AttributeSorter.GetIndeces
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseReader_AttributeSorter::*)(::by_ref<int32_t>, ::by_ref<int32_t>)>(
    &::System::Xml::XmlBaseReader_AttributeSorter::GetIndeces)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x610ac98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_AttributeSorter*>(),
                                                                                           { "GetIndeces", {}, { ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_AttributeSorter.Close
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseReader_AttributeSorter::*)()>(&::System::Xml::XmlBaseReader_AttributeSorter::Close)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6109a70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_AttributeSorter*>(), { "Close", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_AttributeSorter.Sort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlBaseReader_AttributeSorter::*)()>(&::System::Xml::XmlBaseReader_AttributeSorter::Sort)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x610f1fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_AttributeSorter*>(), { "Sort", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_AttributeSorter.IsSorted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlBaseReader_AttributeSorter::*)()>(&::System::Xml::XmlBaseReader_AttributeSorter::IsSorted)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x610f334;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_AttributeSorter*>(), { "IsSorted", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_AttributeSorter.Compare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlBaseReader_AttributeSorter::*)(::System::Object*, ::System::Object*)>(
    &::System::Xml::XmlBaseReader_AttributeSorter::Compare)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x610f424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_AttributeSorter*>(),
                                                                                           { "Compare", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_AttributeSorter.CompareQNameType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlBaseReader_AttributeSorter::*)(::System::Xml::XmlBaseReader_QNameType, ::System::Xml::XmlBaseReader_QNameType)>(
    &::System::Xml::XmlBaseReader_AttributeSorter::CompareQNameType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x610f53c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_AttributeSorter*>(),
                                                { "CompareQNameType", {}, { ::i2c::type_of<::System::Xml::XmlBaseReader_QNameType>(), ::i2c::type_of<::System::Xml::XmlBaseReader_QNameType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_AttributeSorter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseReader_AttributeSorter::*)()>(&::System::Xml::XmlBaseReader_AttributeSorter::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x610ac64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_AttributeSorter*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Object*>& System::Xml::XmlBaseReader_AttributeSorter::__cordl_internal_get_indeces() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indeces;
}
constexpr ::ArrayW<::System::Object*> const& System::Xml::XmlBaseReader_AttributeSorter::__cordl_internal_get_indeces() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indeces;
}
constexpr void System::Xml::XmlBaseReader_AttributeSorter::__cordl_internal_set_indeces(::ArrayW<::System::Object*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___indeces = value;
}
constexpr ::ArrayW<::System::Xml::XmlBaseReader_XmlAttributeNode*>& System::Xml::XmlBaseReader_AttributeSorter::__cordl_internal_get_attributeNodes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeNodes;
}
constexpr ::ArrayW<::System::Xml::XmlBaseReader_XmlAttributeNode*> const& System::Xml::XmlBaseReader_AttributeSorter::__cordl_internal_get_attributeNodes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeNodes;
}
constexpr void System::Xml::XmlBaseReader_AttributeSorter::__cordl_internal_set_attributeNodes(::ArrayW<::System::Xml::XmlBaseReader_XmlAttributeNode*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___attributeNodes = value;
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
inline bool System::Xml::XmlBaseReader_AttributeSorter::Sort(::ArrayW<::System::Xml::XmlBaseReader_XmlAttributeNode*> attributeNodes, int32_t attributeCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_AttributeSorter*>(),
                                                           { "Sort", {}, { ::i2c::type_of<::ArrayW<::System::Xml::XmlBaseReader_XmlAttributeNode*>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, attributeNodes, attributeCount);
}
inline void System::Xml::XmlBaseReader_AttributeSorter::GetIndeces(::by_ref<int32_t> attributeIndex1, ::by_ref<int32_t> attributeIndex2) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_AttributeSorter*>(),
                                                                                         { "GetIndeces", {}, { ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attributeIndex1, attributeIndex2);
}
inline void System::Xml::XmlBaseReader_AttributeSorter::Close() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_AttributeSorter*>(), { "Close", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Xml::XmlBaseReader_AttributeSorter::Sort() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_AttributeSorter*>(), { "Sort", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Xml::XmlBaseReader_AttributeSorter::IsSorted() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_AttributeSorter*>(), { "IsSorted", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t System::Xml::XmlBaseReader_AttributeSorter::Compare(::System::Object* obj1, ::System::Object* obj2) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_AttributeSorter*>(),
                                                                                         { "Compare", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, obj1, obj2);
}
inline int32_t System::Xml::XmlBaseReader_AttributeSorter::CompareQNameType(::System::Xml::XmlBaseReader_QNameType type1, ::System::Xml::XmlBaseReader_QNameType type2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_AttributeSorter*>(),
                                              { "CompareQNameType", {}, { ::i2c::type_of<::System::Xml::XmlBaseReader_QNameType>(), ::i2c::type_of<::System::Xml::XmlBaseReader_QNameType>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, type1, type2);
}
inline void System::Xml::XmlBaseReader_AttributeSorter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_AttributeSorter*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::XmlBaseReader_AttributeSorter* System::Xml::XmlBaseReader_AttributeSorter::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlBaseReader_AttributeSorter*>());
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute::*)()>(&::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x610f978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute.get_Depth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute::*)()>(
    &::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute::get_Depth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x610fb38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute*>(), { "get_Depth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute.set_Depth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute::*)(int32_t)>(
    &::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute::set_Depth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x610fb40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute*>(), { "set_Depth", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute.get_XmlLang
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute::*)()>(
    &::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute::get_XmlLang)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x610fb48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute*>(), { "get_XmlLang", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute.set_XmlLang
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute::*)(::StringW)>(
    &::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute::set_XmlLang)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x610fb50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute*>(), { "set_XmlLang", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute.get_XmlSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlSpace (::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute::*)()>(
    &::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute::get_XmlSpace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x610fb58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute*>(), { "get_XmlSpace", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute.set_XmlSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute::*)(::System::Xml::XmlSpace)>(
    &::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute::set_XmlSpace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x610fb60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute*>(), { "set_XmlSpace", {}, { ::i2c::type_of<::System::Xml::XmlSpace>() } })));
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
  this->___lang = value;
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
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute::get_Depth() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute*>(), { "get_Depth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute::set_Depth(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute*>(), { "set_Depth", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute::get_XmlLang() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute*>(), { "get_XmlLang", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute::set_XmlLang(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute*>(), { "set_XmlLang", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Xml::XmlSpace System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute::get_XmlSpace() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute*>(), { "get_XmlSpace", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlSpace>(this, ___internal_method);
}
inline void System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute::set_XmlSpace(::System::Xml::XmlSpace value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute*>(), { "set_XmlSpace", {}, { ::i2c::type_of<::System::Xml::XmlSpace>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute* System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute*>());
}
// Ctor Parameters []
constexpr ::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute::NamespaceManager_XmlBaseReader_XmlAttribute() {}
//  Writing Method size for method: ::System::Xml::XmlBaseReader_Namespace._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseReader_Namespace::*)(::System::Xml::XmlBufferReader*)>(&::System::Xml::XmlBaseReader_Namespace::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x610f6fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_Namespace*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlBufferReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_Namespace.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseReader_Namespace::*)()>(&::System::Xml::XmlBaseReader_Namespace::Clear)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x610f97c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_Namespace*>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_Namespace.get_Depth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlBaseReader_Namespace::*)()>(&::System::Xml::XmlBaseReader_Namespace::get_Depth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x610fb68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_Namespace*>(), { "get_Depth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_Namespace.set_Depth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseReader_Namespace::*)(int32_t)>(&::System::Xml::XmlBaseReader_Namespace::set_Depth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x610fb70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_Namespace*>(), { "set_Depth", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_Namespace.get_Prefix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::PrefixHandle* (::System::Xml::XmlBaseReader_Namespace::*)()>(&::System::Xml::XmlBaseReader_Namespace::get_Prefix)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x610fb78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_Namespace*>(), { "get_Prefix", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_Namespace.IsUri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlBaseReader_Namespace::*)(::StringW)>(&::System::Xml::XmlBaseReader_Namespace::IsUri)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x610ee98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_Namespace*>(), { "IsUri", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_Namespace.IsUri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlBaseReader_Namespace::*)(::System::Xml::XmlDictionaryString*)>(&::System::Xml::XmlBaseReader_Namespace::IsUri)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x610ef30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_Namespace*>(), { "IsUri", {}, { ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_Namespace.get_Uri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::StringHandle* (::System::Xml::XmlBaseReader_Namespace::*)()>(&::System::Xml::XmlBaseReader_Namespace::get_Uri)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x610fb80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_Namespace*>(), { "get_Uri", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_Namespace.get_OuterUri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlBaseReader_Namespace* (::System::Xml::XmlBaseReader_Namespace::*)()>(&::System::Xml::XmlBaseReader_Namespace::get_OuterUri)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x610fb88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_Namespace*>(), { "get_OuterUri", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_Namespace.set_OuterUri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseReader_Namespace::*)(::System::Xml::XmlBaseReader_Namespace*)>(
    &::System::Xml::XmlBaseReader_Namespace::set_OuterUri)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x610fb90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_Namespace*>(), { "set_OuterUri", {}, { ::i2c::type_of<::System::Xml::XmlBaseReader_Namespace*>() } })));
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
  this->___prefix = value;
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
  this->___uri = value;
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
  this->___outerUri = value;
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
  this->___uriString = value;
}
inline void System::Xml::XmlBaseReader_Namespace::_ctor(::System::Xml::XmlBufferReader* bufferReader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_Namespace*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlBufferReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bufferReader);
}
inline void System::Xml::XmlBaseReader_Namespace::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_Namespace*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t System::Xml::XmlBaseReader_Namespace::get_Depth() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_Namespace*>(), { "get_Depth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Xml::XmlBaseReader_Namespace::set_Depth(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_Namespace*>(), { "set_Depth", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Xml::PrefixHandle* System::Xml::XmlBaseReader_Namespace::get_Prefix() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_Namespace*>(), { "get_Prefix", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::PrefixHandle*>(this, ___internal_method);
}
inline bool System::Xml::XmlBaseReader_Namespace::IsUri(::StringW s) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_Namespace*>(), { "IsUri", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, s);
}
inline bool System::Xml::XmlBaseReader_Namespace::IsUri(::System::Xml::XmlDictionaryString* s) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_Namespace*>(), { "IsUri", {}, { ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, s);
}
inline ::System::Xml::StringHandle* System::Xml::XmlBaseReader_Namespace::get_Uri() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_Namespace*>(), { "get_Uri", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::StringHandle*>(this, ___internal_method);
}
inline ::System::Xml::XmlBaseReader_Namespace* System::Xml::XmlBaseReader_Namespace::get_OuterUri() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_Namespace*>(), { "get_OuterUri", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlBaseReader_Namespace*>(this, ___internal_method);
}
inline void System::Xml::XmlBaseReader_Namespace::set_OuterUri(::System::Xml::XmlBaseReader_Namespace* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_Namespace*>(), { "set_OuterUri", {}, { ::i2c::type_of<::System::Xml::XmlBaseReader_Namespace*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Xml::XmlBaseReader_Namespace* System::Xml::XmlBaseReader_Namespace::New_ctor(::System::Xml::XmlBufferReader* bufferReader) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlBaseReader_Namespace*>(bufferReader));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlBaseReader_Namespace::XmlBaseReader_Namespace() {}
//  Writing Method size for method: ::System::Xml::XmlBaseReader_NamespaceManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseReader_NamespaceManager::*)(::System::Xml::XmlBufferReader*)>(
    &::System::Xml::XmlBaseReader_NamespaceManager::_ctor)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6107700;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_NamespaceManager*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlBufferReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_NamespaceManager.Close
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseReader_NamespaceManager::*)()>(&::System::Xml::XmlBaseReader_NamespaceManager::Close)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6109a28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_NamespaceManager*>(), { "Close", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_NamespaceManager.get_XmlNamespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlBaseReader_Namespace* (*)()>(&::System::Xml::XmlBaseReader_NamespaceManager::get_XmlNamespace)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x610f544;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_NamespaceManager*>(), { "get_XmlNamespace", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_NamespaceManager.get_EmptyNamespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlBaseReader_Namespace* (*)()>(&::System::Xml::XmlBaseReader_NamespaceManager::get_EmptyNamespace)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x610f798;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_NamespaceManager*>(), { "get_EmptyNamespace", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_NamespaceManager.get_XmlLang
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlBaseReader_NamespaceManager::*)()>(&::System::Xml::XmlBaseReader_NamespaceManager::get_XmlLang)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x610f7f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_NamespaceManager*>(), { "get_XmlLang", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_NamespaceManager.get_XmlSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlSpace (::System::Xml::XmlBaseReader_NamespaceManager::*)()>(&::System::Xml::XmlBaseReader_NamespaceManager::get_XmlSpace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x610f7fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_NamespaceManager*>(), { "get_XmlSpace", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_NamespaceManager.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseReader_NamespaceManager::*)()>(&::System::Xml::XmlBaseReader_NamespaceManager::Clear)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6107c6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_NamespaceManager*>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_NamespaceManager.EnterScope
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseReader_NamespaceManager::*)()>(&::System::Xml::XmlBaseReader_NamespaceManager::EnterScope)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6108d58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_NamespaceManager*>(), { "EnterScope", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_NamespaceManager.ExitScope
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseReader_NamespaceManager::*)()>(&::System::Xml::XmlBaseReader_NamespaceManager::ExitScope)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x6108d9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_NamespaceManager*>(), { "ExitScope", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_NamespaceManager.AddLangAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseReader_NamespaceManager::*)(::StringW)>(&::System::Xml::XmlBaseReader_NamespaceManager::AddLangAttribute)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6109890;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_NamespaceManager*>(), { "AddLangAttribute", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_NamespaceManager.AddSpaceAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseReader_NamespaceManager::*)(::System::Xml::XmlSpace)>(
    &::System::Xml::XmlBaseReader_NamespaceManager::AddSpaceAttribute)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x61098b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_NamespaceManager*>(), { "AddSpaceAttribute", {}, { ::i2c::type_of<::System::Xml::XmlSpace>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_NamespaceManager.AddAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseReader_NamespaceManager::*)()>(&::System::Xml::XmlBaseReader_NamespaceManager::AddAttribute)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x610f804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_NamespaceManager*>(), { "AddAttribute", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_NamespaceManager.Register
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseReader_NamespaceManager::*)(::System::Xml::XmlBaseReader_Namespace*)>(
    &::System::Xml::XmlBaseReader_NamespaceManager::Register)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6109614;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_NamespaceManager*>(), { "Register", {}, { ::i2c::type_of<::System::Xml::XmlBaseReader_Namespace*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_NamespaceManager.AddNamespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlBaseReader_Namespace* (::System::Xml::XmlBaseReader_NamespaceManager::*)()>(
    &::System::Xml::XmlBaseReader_NamespaceManager::AddNamespace)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x6109158;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_NamespaceManager*>(), { "AddNamespace", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_NamespaceManager.LookupNamespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlBaseReader_Namespace* (::System::Xml::XmlBaseReader_NamespaceManager::*)(::System::Xml::PrefixHandleType)>(
    &::System::Xml::XmlBaseReader_NamespaceManager::LookupNamespace)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x610f984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_NamespaceManager*>(), { "LookupNamespace", {}, { ::i2c::type_of<::System::Xml::PrefixHandleType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_NamespaceManager.LookupNamespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlBaseReader_Namespace* (::System::Xml::XmlBaseReader_NamespaceManager::*)(::System::Xml::PrefixHandle*)>(
    &::System::Xml::XmlBaseReader_NamespaceManager::LookupNamespace)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x610a598;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_NamespaceManager*>(), { "LookupNamespace", {}, { ::i2c::type_of<::System::Xml::PrefixHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_NamespaceManager.LookupNamespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlBaseReader_Namespace* (::System::Xml::XmlBaseReader_NamespaceManager::*)(::StringW)>(
    &::System::Xml::XmlBaseReader_NamespaceManager::LookupNamespace)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x610a3f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_NamespaceManager*>(), { "LookupNamespace", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_NamespaceManager.TryGetShortPrefix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlBaseReader_NamespaceManager::*)(::StringW, ::by_ref<::System::Xml::PrefixHandleType>)>(
    &::System::Xml::XmlBaseReader_NamespaceManager::TryGetShortPrefix)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x610f9b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_NamespaceManager*>(),
                                                             { "TryGetShortPrefix", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Xml::PrefixHandleType>>() } })));
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
  this->___bufferReader = value;
}
constexpr ::ArrayW<::System::Xml::XmlBaseReader_Namespace*>& System::Xml::XmlBaseReader_NamespaceManager::__cordl_internal_get_namespaces() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___namespaces;
}
constexpr ::ArrayW<::System::Xml::XmlBaseReader_Namespace*> const& System::Xml::XmlBaseReader_NamespaceManager::__cordl_internal_get_namespaces() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___namespaces;
}
constexpr void System::Xml::XmlBaseReader_NamespaceManager::__cordl_internal_set_namespaces(::ArrayW<::System::Xml::XmlBaseReader_Namespace*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___namespaces = value;
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
constexpr ::ArrayW<::System::Xml::XmlBaseReader_Namespace*>& System::Xml::XmlBaseReader_NamespaceManager::__cordl_internal_get_shortPrefixUri() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shortPrefixUri;
}
constexpr ::ArrayW<::System::Xml::XmlBaseReader_Namespace*> const& System::Xml::XmlBaseReader_NamespaceManager::__cordl_internal_get_shortPrefixUri() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shortPrefixUri;
}
constexpr void System::Xml::XmlBaseReader_NamespaceManager::__cordl_internal_set_shortPrefixUri(::ArrayW<::System::Xml::XmlBaseReader_Namespace*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___shortPrefixUri = value;
}
constexpr ::ArrayW<::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute*>& System::Xml::XmlBaseReader_NamespaceManager::__cordl_internal_get_attributes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributes;
}
constexpr ::ArrayW<::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute*> const& System::Xml::XmlBaseReader_NamespaceManager::__cordl_internal_get_attributes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributes;
}
constexpr void System::Xml::XmlBaseReader_NamespaceManager::__cordl_internal_set_attributes(::ArrayW<::System::Xml::NamespaceManager_XmlBaseReader_XmlAttribute*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___attributes = value;
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
  this->___lang = value;
}
inline void System::Xml::XmlBaseReader_NamespaceManager::setStaticF_emptyNamespace(::System::Xml::XmlBaseReader_Namespace* value) {
  ::cordl_internals::setStaticField<::System::Xml::XmlBaseReader_Namespace*, "emptyNamespace", ::System::Xml::XmlBaseReader_NamespaceManager*>(
      std::forward<::System::Xml::XmlBaseReader_Namespace*>(value));
}
inline ::System::Xml::XmlBaseReader_Namespace* System::Xml::XmlBaseReader_NamespaceManager::getStaticF_emptyNamespace() {
  return ::cordl_internals::getStaticField<::System::Xml::XmlBaseReader_Namespace*, "emptyNamespace", ::System::Xml::XmlBaseReader_NamespaceManager*>();
}
inline void System::Xml::XmlBaseReader_NamespaceManager::setStaticF_xmlNamespace(::System::Xml::XmlBaseReader_Namespace* value) {
  ::cordl_internals::setStaticField<::System::Xml::XmlBaseReader_Namespace*, "xmlNamespace", ::System::Xml::XmlBaseReader_NamespaceManager*>(
      std::forward<::System::Xml::XmlBaseReader_Namespace*>(value));
}
inline ::System::Xml::XmlBaseReader_Namespace* System::Xml::XmlBaseReader_NamespaceManager::getStaticF_xmlNamespace() {
  return ::cordl_internals::getStaticField<::System::Xml::XmlBaseReader_Namespace*, "xmlNamespace", ::System::Xml::XmlBaseReader_NamespaceManager*>();
}
inline void System::Xml::XmlBaseReader_NamespaceManager::_ctor(::System::Xml::XmlBufferReader* bufferReader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_NamespaceManager*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlBufferReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bufferReader);
}
inline void System::Xml::XmlBaseReader_NamespaceManager::Close() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_NamespaceManager*>(), { "Close", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::XmlBaseReader_Namespace* System::Xml::XmlBaseReader_NamespaceManager::get_XmlNamespace() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_NamespaceManager*>(), { "get_XmlNamespace", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlBaseReader_Namespace*>(nullptr, ___internal_method);
}
inline ::System::Xml::XmlBaseReader_Namespace* System::Xml::XmlBaseReader_NamespaceManager::get_EmptyNamespace() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_NamespaceManager*>(), { "get_EmptyNamespace", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlBaseReader_Namespace*>(nullptr, ___internal_method);
}
inline ::StringW System::Xml::XmlBaseReader_NamespaceManager::get_XmlLang() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_NamespaceManager*>(), { "get_XmlLang", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Xml::XmlSpace System::Xml::XmlBaseReader_NamespaceManager::get_XmlSpace() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_NamespaceManager*>(), { "get_XmlSpace", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlSpace>(this, ___internal_method);
}
inline void System::Xml::XmlBaseReader_NamespaceManager::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_NamespaceManager*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlBaseReader_NamespaceManager::EnterScope() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_NamespaceManager*>(), { "EnterScope", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlBaseReader_NamespaceManager::ExitScope() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_NamespaceManager*>(), { "ExitScope", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlBaseReader_NamespaceManager::AddLangAttribute(::StringW lang) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_NamespaceManager*>(), { "AddLangAttribute", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lang);
}
inline void System::Xml::XmlBaseReader_NamespaceManager::AddSpaceAttribute(::System::Xml::XmlSpace space) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_NamespaceManager*>(), { "AddSpaceAttribute", {}, { ::i2c::type_of<::System::Xml::XmlSpace>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, space);
}
inline void System::Xml::XmlBaseReader_NamespaceManager::AddAttribute() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_NamespaceManager*>(), { "AddAttribute", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlBaseReader_NamespaceManager::Register(::System::Xml::XmlBaseReader_Namespace* nameSpace) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_NamespaceManager*>(), { "Register", {}, { ::i2c::type_of<::System::Xml::XmlBaseReader_Namespace*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nameSpace);
}
inline ::System::Xml::XmlBaseReader_Namespace* System::Xml::XmlBaseReader_NamespaceManager::AddNamespace() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_NamespaceManager*>(), { "AddNamespace", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlBaseReader_Namespace*>(this, ___internal_method);
}
inline ::System::Xml::XmlBaseReader_Namespace* System::Xml::XmlBaseReader_NamespaceManager::LookupNamespace(::System::Xml::PrefixHandleType prefix) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_NamespaceManager*>(), { "LookupNamespace", {}, { ::i2c::type_of<::System::Xml::PrefixHandleType>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlBaseReader_Namespace*>(this, ___internal_method, prefix);
}
inline ::System::Xml::XmlBaseReader_Namespace* System::Xml::XmlBaseReader_NamespaceManager::LookupNamespace(::System::Xml::PrefixHandle* prefix) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_NamespaceManager*>(), { "LookupNamespace", {}, { ::i2c::type_of<::System::Xml::PrefixHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlBaseReader_Namespace*>(this, ___internal_method, prefix);
}
inline ::System::Xml::XmlBaseReader_Namespace* System::Xml::XmlBaseReader_NamespaceManager::LookupNamespace(::StringW prefix) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_NamespaceManager*>(), { "LookupNamespace", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlBaseReader_Namespace*>(this, ___internal_method, prefix);
}
inline bool System::Xml::XmlBaseReader_NamespaceManager::TryGetShortPrefix(::StringW s, ::by_ref<::System::Xml::PrefixHandleType> shortPrefix) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_NamespaceManager*>(),
                                                           { "TryGetShortPrefix", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Xml::PrefixHandleType>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, s, shortPrefix);
}
inline ::System::Xml::XmlBaseReader_NamespaceManager* System::Xml::XmlBaseReader_NamespaceManager::New_ctor(::System::Xml::XmlBufferReader* bufferReader) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlBaseReader_NamespaceManager*>(bufferReader));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlBaseReader_NamespaceManager::XmlBaseReader_NamespaceManager() {}
//  Writing Method size for method: ::System::Xml::XmlBaseReader_QuotaNameTable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseReader_QuotaNameTable::*)(::System::Xml::XmlDictionaryReader*, int32_t)>(
    &::System::Xml::XmlBaseReader_QuotaNameTable::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x610b214;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_QuotaNameTable*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlDictionaryReader*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_QuotaNameTable.Get
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlBaseReader_QuotaNameTable::*)(::ArrayW<char16_t>, int32_t, int32_t)>(
    &::System::Xml::XmlBaseReader_QuotaNameTable::Get)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x610fb98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_QuotaNameTable*>(), { ::i2c::class_of<::System::Xml::XmlBaseReader_QuotaNameTable*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_QuotaNameTable.Get
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlBaseReader_QuotaNameTable::*)(::StringW)>(&::System::Xml::XmlBaseReader_QuotaNameTable::Get)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x610fbb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_QuotaNameTable*>(), { ::i2c::class_of<::System::Xml::XmlBaseReader_QuotaNameTable*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_QuotaNameTable.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseReader_QuotaNameTable::*)(int32_t)>(&::System::Xml::XmlBaseReader_QuotaNameTable::Add)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x610fbd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_QuotaNameTable*>(), { "Add", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_QuotaNameTable.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlBaseReader_QuotaNameTable::*)(::ArrayW<char16_t>, int32_t, int32_t)>(
    &::System::Xml::XmlBaseReader_QuotaNameTable::Add)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x610fc00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_QuotaNameTable*>(), { ::i2c::class_of<::System::Xml::XmlBaseReader_QuotaNameTable*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader_QuotaNameTable.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlBaseReader_QuotaNameTable::*)(::StringW)>(&::System::Xml::XmlBaseReader_QuotaNameTable::Add)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x610fc98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_QuotaNameTable*>(), { ::i2c::class_of<::System::Xml::XmlBaseReader_QuotaNameTable*>(), 7 }));
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
  this->___reader = value;
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
  this->___nameTable = value;
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
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_QuotaNameTable*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlDictionaryReader*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, maxCharCount);
}
inline ::StringW System::Xml::XmlBaseReader_QuotaNameTable::Get(::ArrayW<char16_t> chars, int32_t offset, int32_t count) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseReader_QuotaNameTable*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, chars, offset, count);
}
inline ::StringW System::Xml::XmlBaseReader_QuotaNameTable::Get(::StringW value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseReader_QuotaNameTable*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, value);
}
inline void System::Xml::XmlBaseReader_QuotaNameTable::Add(int32_t charCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader_QuotaNameTable*>(), { "Add", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, charCount);
}
inline ::StringW System::Xml::XmlBaseReader_QuotaNameTable::Add(::ArrayW<char16_t> chars, int32_t offset, int32_t count) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseReader_QuotaNameTable*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, chars, offset, count);
}
inline ::StringW System::Xml::XmlBaseReader_QuotaNameTable::Add(::StringW value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseReader_QuotaNameTable*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, value);
}
inline ::System::Xml::XmlBaseReader_QuotaNameTable* System::Xml::XmlBaseReader_QuotaNameTable::New_ctor(::System::Xml::XmlDictionaryReader* reader, int32_t maxCharCount) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlBaseReader_QuotaNameTable*>(reader, maxCharCount));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlBaseReader_QuotaNameTable::XmlBaseReader_QuotaNameTable() {}
//  Writing Method size for method: ::System::Xml::XmlBaseReader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::_ctor)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x610759c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.get_BinHexEncoding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::BinHexEncoding* (*)()>(&::System::Xml::XmlBaseReader::get_BinHexEncoding)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x61079b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { "get_BinHexEncoding", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.get_Base64Encoding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::Base64Encoding* (*)()>(&::System::Xml::XmlBaseReader::get_Base64Encoding)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6107a80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { "get_Base64Encoding", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.get_BufferReader
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlBufferReader* (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::get_BufferReader)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6107b50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { "get_BufferReader", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.get_Quotas
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlDictionaryReaderQuotas* (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::get_Quotas)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6107b58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 75 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.get_Node
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlBaseReader_XmlNode* (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::get_Node)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6107b60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { "get_Node", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.MoveToNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseReader::*)(::System::Xml::XmlBaseReader_XmlNode*)>(&::System::Xml::XmlBaseReader::MoveToNode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6107b68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { "MoveToNode", {}, { ::i2c::type_of<::System::Xml::XmlBaseReader_XmlNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.MoveToInitial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseReader::*)(::System::Xml::XmlDictionaryReaderQuotas*)>(&::System::Xml::XmlBaseReader::MoveToInitial)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6107b78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { "MoveToInitial", {}, { ::i2c::type_of<::System::Xml::XmlDictionaryReaderQuotas*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.MoveToDeclaration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlBaseReader_XmlDeclarationNode* (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::MoveToDeclaration)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x6107d64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { "MoveToDeclaration", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.CheckStandalone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlBaseReader::*)(int32_t)>(&::System::Xml::XmlBaseReader::CheckStandalone)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x61081c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { "CheckStandalone", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.CheckDeclAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlBaseReader::*)(int32_t, ::StringW, ::StringW, bool, ::StringW)>(&::System::Xml::XmlBaseReader::CheckDeclAttribute)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6108030;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::System::Xml::XmlBaseReader*>(),
                         { "CheckDeclAttribute", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.MoveToComment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlBaseReader_XmlCommentNode* (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::MoveToComment)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x610849c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { "MoveToComment", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.MoveToCData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlBaseReader_XmlCDataNode* (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::MoveToCData)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6108600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { "MoveToCData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.MoveToAtomicText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlBaseReader_XmlAtomicTextNode* (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::MoveToAtomicText)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6108764;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { "MoveToAtomicText", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.MoveToComplexText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlBaseReader_XmlComplexTextNode* (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::MoveToComplexText)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x610877c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { "MoveToComplexText", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.MoveToWhitespaceText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlBaseReader_XmlTextNode* (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::MoveToWhitespaceText)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x61088e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { "MoveToWhitespaceText", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.get_ElementNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlBaseReader_XmlElementNode* (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::get_ElementNode)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6108a74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { "get_ElementNode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.MoveToEndElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::MoveToEndElement)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6108ab8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { "MoveToEndElement", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.MoveToEndOfFile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::MoveToEndOfFile)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6108b18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { "MoveToEndOfFile", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.EnterScope
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlBaseReader_XmlElementNode* (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::EnterScope)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x6108b98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { "EnterScope", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.ExitScope
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::ExitScope)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6108d68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { "ExitScope", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.AddAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlBaseReader_XmlAttributeNode* (::System::Xml::XmlBaseReader::*)(::System::Xml::XmlBaseReader_QNameType, bool)>(
    &::System::Xml::XmlBaseReader::AddAttribute)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x6108ee8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { "AddAttribute", {}, { ::i2c::type_of<::System::Xml::XmlBaseReader_QNameType>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.AddNamespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlBaseReader_Namespace* (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::AddNamespace)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6109144;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { "AddNamespace", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.AddAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlBaseReader_XmlAttributeNode* (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::AddAttribute)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x61092d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { "AddAttribute", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.AddXmlAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlBaseReader_XmlAttributeNode* (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::AddXmlAttribute)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x61092dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { "AddXmlAttribute", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.AddXmlnsAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlBaseReader_XmlAttributeNode* (::System::Xml::XmlBaseReader::*)(::System::Xml::XmlBaseReader_Namespace*)>(
    &::System::Xml::XmlBaseReader::AddXmlnsAttribute)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x61092e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { "AddXmlnsAttribute", {}, { ::i2c::type_of<::System::Xml::XmlBaseReader_Namespace*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.FixXmlAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseReader::*)(::System::Xml::XmlBaseReader_XmlAttributeNode*)>(&::System::Xml::XmlBaseReader::FixXmlAttribute)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x61096ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { "FixXmlAttribute", {}, { ::i2c::type_of<::System::Xml::XmlBaseReader_XmlAttributeNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.get_OutsideRootElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::get_OutsideRootElement)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x61098d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { "get_OutsideRootElement", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.get_CanReadValueChunk
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::get_CanReadValueChunk)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61098e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 61 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.get_BaseURI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::get_BaseURI)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x61098f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.get_IsDefault
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::get_IsDefault)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6109904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.get_AttributeCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::get_AttributeCount)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x610990c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 39 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.Close
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::Close)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6109934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 52 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.get_Depth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::get_Depth)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6109a8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { "get_Depth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.get_EOF
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::get_EOF)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6109aac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 51 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.GetAttributeNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlBaseReader_XmlAttributeNode* (::System::Xml::XmlBaseReader::*)(int32_t)>(&::System::Xml::XmlBaseReader::GetAttributeNode)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x6109acc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { "GetAttributeNode", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.GetAttributeNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlBaseReader_XmlAttributeNode* (::System::Xml::XmlBaseReader::*)(::StringW)>(&::System::Xml::XmlBaseReader::GetAttributeNode)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x6109c08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { "GetAttributeNode", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.GetAttributeNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlBaseReader_XmlAttributeNode* (::System::Xml::XmlBaseReader::*)(::StringW, ::StringW)>(
    &::System::Xml::XmlBaseReader::GetAttributeNode)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x6109ef8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { "GetAttributeNode", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.GetAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlBaseReader::*)(int32_t)>(&::System::Xml::XmlBaseReader::GetAttribute)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x610a134;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 42 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.GetAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlBaseReader::*)(::StringW)>(&::System::Xml::XmlBaseReader::GetAttribute)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x610a184;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 40 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.GetAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlBaseReader::*)(::StringW, ::StringW)>(&::System::Xml::XmlBaseReader::GetAttribute)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x610a1a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 41 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.get_IsEmptyElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::get_IsEmptyElement)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x610a1bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { "get_IsEmptyElement", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.get_LocalName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::get_LocalName)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x610a1d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.LookupNamespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlBaseReader::*)(::StringW)>(&::System::Xml::XmlBaseReader::LookupNamespace)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x610a32c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 56 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.LookupNamespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlBaseReader_Namespace* (::System::Xml::XmlBaseReader::*)(::System::Xml::PrefixHandle*)>(
    &::System::Xml::XmlBaseReader::LookupNamespace)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x610a54c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { "LookupNamespace", {}, { ::i2c::type_of<::System::Xml::PrefixHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.ProcessAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::ProcessAttributes)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x610a6c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { "ProcessAttributes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.ProcessAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseReader::*)(::ArrayW<::System::Xml::XmlBaseReader_XmlAttributeNode*>, int32_t)>(
    &::System::Xml::XmlBaseReader::ProcessAttributes)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0x610a6e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(),
                                                             { "ProcessAttributes", {}, { ::i2c::type_of<::ArrayW<::System::Xml::XmlBaseReader_XmlAttributeNode*>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.CheckAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseReader::*)(::ArrayW<::System::Xml::XmlBaseReader_XmlAttributeNode*>, int32_t)>(
    &::System::Xml::XmlBaseReader::CheckAttributes)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x610aaa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(),
                                                             { "CheckAttributes", {}, { ::i2c::type_of<::ArrayW<::System::Xml::XmlBaseReader_XmlAttributeNode*>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.MoveToAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseReader::*)(int32_t)>(&::System::Xml::XmlBaseReader::MoveToAttribute)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x610acac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 45 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.MoveToAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlBaseReader::*)(::StringW)>(&::System::Xml::XmlBaseReader::MoveToAttribute)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x610acdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 43 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.MoveToAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlBaseReader::*)(::StringW, ::StringW)>(&::System::Xml::XmlBaseReader::MoveToAttribute)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x610ad10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 44 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.MoveToElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::MoveToElement)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x610ad44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 48 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.MoveToContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNodeType (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::MoveToContent)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x610adc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 64 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.MoveToFirstAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::MoveToFirstAttribute)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x610aeb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 46 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.MoveToNextAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::MoveToNextAttribute)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x610af0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 47 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.get_NamespaceURI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::get_NamespaceURI)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x610af74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.get_NameTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNameTable* (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::get_NameTable)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x610b074;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 55 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.get_NodeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNodeType (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::get_NodeType)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x610b288;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { "get_NodeType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.get_Prefix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::get_Prefix)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x610b2a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.get_QuoteChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::get_QuoteChar)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x610b388;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.GetLocalName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlBaseReader::*)(bool)>(&::System::Xml::XmlBaseReader::GetLocalName)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x610a1fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { "GetLocalName", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.GetNamespaceUri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlBaseReader::*)(bool)>(&::System::Xml::XmlBaseReader::GetNamespaceUri)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x610af9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { "GetNamespaceUri", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.IsLocalName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlBaseReader::*)(::StringW)>(&::System::Xml::XmlBaseReader::IsLocalName)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x610b3a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 77 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.IsLocalName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlBaseReader::*)(::System::Xml::XmlDictionaryString*)>(&::System::Xml::XmlBaseReader::IsLocalName)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x610b4d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 78 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.IsNamespaceUri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlBaseReader::*)(::StringW)>(&::System::Xml::XmlBaseReader::IsNamespaceUri)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x610b5fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 79 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.IsNamespaceUri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlBaseReader::*)(::System::Xml::XmlDictionaryString*)>(&::System::Xml::XmlBaseReader::IsNamespaceUri)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x610b6c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 80 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.IsStartElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::IsStartElement)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x610b798;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { "IsStartElement", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.IsStartElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlBaseReader::*)(::StringW, ::StringW)>(&::System::Xml::XmlBaseReader::IsStartElement)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x610b820;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 69 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.IsStartElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlBaseReader::*)(::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*)>(
    &::System::Xml::XmlBaseReader::IsStartElement)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x610b8fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 81 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.IndexOfLocalName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlBaseReader::*)(::ArrayW<::System::Xml::XmlDictionaryString*>, ::System::Xml::XmlDictionaryString*)>(
    &::System::Xml::XmlBaseReader::IndexOfLocalName)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x610ba14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 82 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.ReadValueChunk
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlBaseReader::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&::System::Xml::XmlBaseReader::ReadValueChunk)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x610bc60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 62 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.ReadElementContentAsString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::ReadElementContentAsString)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x610bf5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 38 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.ReadElementString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::ReadElementString)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x610c008;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 66 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.ReadStartElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::ReadStartElement)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x610c0a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 65 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.ReadEndElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::ReadEndElement)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x610c0f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 67 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.ReadAttributeValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::ReadAttributeValue)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x610c210;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 49 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.get_ReadState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::ReadState (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::get_ReadState)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x610c240;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 53 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.SkipValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseReader::*)(::System::Xml::XmlBaseReader_XmlNode*)>(&::System::Xml::XmlBaseReader::SkipValue)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x610c258;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { "SkipValue", {}, { ::i2c::type_of<::System::Xml::XmlBaseReader_XmlNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.TryGetBase64ContentLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlBaseReader::*)(::by_ref<int32_t>)>(&::System::Xml::XmlBaseReader::TryGetBase64ContentLength)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x610c280;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 83 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.ReadContentAsBase64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::ReadContentAsBase64)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x610c2e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 84 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.ReadContentAsBase64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlBaseReader::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Xml::XmlBaseReader::ReadContentAsBase64)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x610c3d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 59 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.ReadContentAsBinHex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlBaseReader::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Xml::XmlBaseReader::ReadContentAsBinHex)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x610cd04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 60 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.ReadBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlBaseReader::*)(::System::Text::Encoding*, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t, int32_t, bool)>(
    &::System::Xml::XmlBaseReader::ReadBytes)> {
  constexpr static std::size_t size = 0x5cc;
  constexpr static std::size_t addrs = 0x610c738;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(),
                                                             { "ReadBytes",
                                                               {},
                                                               { ::i2c::type_of<::System::Text::Encoding*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.ReadContentAsString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::ReadContentAsString)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x610d060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.ReadContentAsBoolean
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::ReadContentAsBoolean)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x610d12c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.ReadContentAsLong
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::ReadContentAsLong)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x610d1fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.ReadContentAsInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::ReadContentAsInt)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x610d2cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.ReadContentAsDateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::ReadContentAsDateTime)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x610d39c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.ReadContentAsDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::ReadContentAsDouble)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x610d46c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.ReadContentAsFloat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::ReadContentAsFloat)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x610d548;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.ReadContentAsDecimal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::ReadContentAsDecimal)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x610d624;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.ReadContentAsUniqueId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::UniqueId* (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::ReadContentAsUniqueId)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x610d6fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 86 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.ReadContentAsTimeSpan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::ReadContentAsTimeSpan)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x610d7cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 88 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.ReadContentAsGuid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::ReadContentAsGuid)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x610d89c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 87 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.ReadContentAsObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::ReadContentAsObject)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x610d974;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.ReadContentAs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::XmlBaseReader::*)(::System::Type*, ::System::Xml::IXmlNamespaceResolver*)>(
    &::System::Xml::XmlBaseReader::ReadContentAs)> {
  constexpr static std::size_t size = 0x5e4;
  constexpr static std::size_t addrs = 0x610d9f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 30 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.ResolveEntity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::ResolveEntity)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x610dfd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 58 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.Skip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::Skip)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x610e028;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 54 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::get_Value)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x610e108;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.get_ValueType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::get_ValueType)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x610e134;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.get_XmlLang
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::get_XmlLang)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x610e218;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.get_XmlSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlSpace (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::get_XmlSpace)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x610e230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.TryGetLocalNameAsDictionaryString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlBaseReader::*)(::by_ref<::System::Xml::XmlDictionaryString*>)>(
    &::System::Xml::XmlBaseReader::TryGetLocalNameAsDictionaryString)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x610e248;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 92 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.TryGetNamespaceUriAsDictionaryString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlBaseReader::*)(::by_ref<::System::Xml::XmlDictionaryString*>)>(
    &::System::Xml::XmlBaseReader::TryGetNamespaceUriAsDictionaryString)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x610e284;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 93 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.TryGetValueAsDictionaryString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlBaseReader::*)(::by_ref<::System::Xml::XmlDictionaryString*>)>(
    &::System::Xml::XmlBaseReader::TryGetValueAsDictionaryString)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x610e2d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 94 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.GetOpenElements
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::GetOpenElements)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x610e330;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { "GetOpenElements", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.GetCharBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<char16_t> (::System::Xml::XmlBaseReader::*)(int32_t)>(&::System::Xml::XmlBaseReader::GetCharBuffer)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x610cfc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { "GetCharBuffer", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.SignStartElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseReader::*)(::System::Xml::XmlSigningNodeWriter*)>(&::System::Xml::XmlBaseReader::SignStartElement)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x610e410;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { "SignStartElement", {}, { ::i2c::type_of<::System::Xml::XmlSigningNodeWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.SignAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseReader::*)(::System::Xml::XmlSigningNodeWriter*, ::System::Xml::XmlBaseReader_XmlAttributeNode*)>(
    &::System::Xml::XmlBaseReader::SignAttribute)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x610e498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(),
                                         { "SignAttribute", {}, { ::i2c::type_of<::System::Xml::XmlSigningNodeWriter*>(), ::i2c::type_of<::System::Xml::XmlBaseReader_XmlAttributeNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.SignEndElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseReader::*)(::System::Xml::XmlSigningNodeWriter*)>(&::System::Xml::XmlBaseReader::SignEndElement)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x610e5bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { "SignEndElement", {}, { ::i2c::type_of<::System::Xml::XmlSigningNodeWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.SignNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseReader::*)(::System::Xml::XmlSigningNodeWriter*)>(&::System::Xml::XmlBaseReader::SignNode)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x610e648;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { "SignNode", {}, { ::i2c::type_of<::System::Xml::XmlSigningNodeWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlBaseReader.SignNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlBaseReader::*)()>(&::System::Xml::XmlBaseReader::SignNode)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x610e7e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { "SignNode", {}, {} })));
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
  this->___bufferReader = value;
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
  this->___node = value;
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
  this->___nsMgr = value;
}
constexpr ::ArrayW<::System::Xml::XmlBaseReader_XmlElementNode*>& System::Xml::XmlBaseReader::__cordl_internal_get_elementNodes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementNodes;
}
constexpr ::ArrayW<::System::Xml::XmlBaseReader_XmlElementNode*> const& System::Xml::XmlBaseReader::__cordl_internal_get_elementNodes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementNodes;
}
constexpr void System::Xml::XmlBaseReader::__cordl_internal_set_elementNodes(::ArrayW<::System::Xml::XmlBaseReader_XmlElementNode*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___elementNodes = value;
}
constexpr ::ArrayW<::System::Xml::XmlBaseReader_XmlAttributeNode*>& System::Xml::XmlBaseReader::__cordl_internal_get_attributeNodes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeNodes;
}
constexpr ::ArrayW<::System::Xml::XmlBaseReader_XmlAttributeNode*> const& System::Xml::XmlBaseReader::__cordl_internal_get_attributeNodes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeNodes;
}
constexpr void System::Xml::XmlBaseReader::__cordl_internal_set_attributeNodes(::ArrayW<::System::Xml::XmlBaseReader_XmlAttributeNode*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___attributeNodes = value;
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
  this->___atomicTextNode = value;
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
  this->___quotas = value;
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
  this->___nameTable = value;
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
  this->___declarationNode = value;
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
  this->___complexTextNode = value;
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
  this->___whitespaceTextNode = value;
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
  this->___cdataNode = value;
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
  this->___commentNode = value;
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
  this->___rootElementNode = value;
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
constexpr ::ArrayW<char16_t>& System::Xml::XmlBaseReader::__cordl_internal_get_chars() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chars;
}
constexpr ::ArrayW<char16_t> const& System::Xml::XmlBaseReader::__cordl_internal_get_chars() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chars;
}
constexpr void System::Xml::XmlBaseReader::__cordl_internal_set_chars(::ArrayW<char16_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___chars = value;
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
  this->___prefix = value;
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
  this->___localName = value;
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
  this->___ns = value;
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
  this->___value = value;
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
constexpr ::ArrayW<char16_t>& System::Xml::XmlBaseReader::__cordl_internal_get_trailChars() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___trailChars;
}
constexpr ::ArrayW<char16_t> const& System::Xml::XmlBaseReader::__cordl_internal_get_trailChars() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___trailChars;
}
constexpr void System::Xml::XmlBaseReader::__cordl_internal_set_trailChars(::ArrayW<char16_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___trailChars = value;
}
constexpr ::ArrayW<uint8_t>& System::Xml::XmlBaseReader::__cordl_internal_get_trailBytes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___trailBytes;
}
constexpr ::ArrayW<uint8_t> const& System::Xml::XmlBaseReader::__cordl_internal_get_trailBytes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___trailBytes;
}
constexpr void System::Xml::XmlBaseReader::__cordl_internal_set_trailBytes(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___trailBytes = value;
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
  this->___signingWriter = value;
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
  this->___attributeSorter = value;
}
inline void System::Xml::XmlBaseReader::setStaticF_initialNode(::System::Xml::XmlBaseReader_XmlInitialNode* value) {
  ::cordl_internals::setStaticField<::System::Xml::XmlBaseReader_XmlInitialNode*, "initialNode", ::System::Xml::XmlBaseReader*>(std::forward<::System::Xml::XmlBaseReader_XmlInitialNode*>(value));
}
inline ::System::Xml::XmlBaseReader_XmlInitialNode* System::Xml::XmlBaseReader::getStaticF_initialNode() {
  return ::cordl_internals::getStaticField<::System::Xml::XmlBaseReader_XmlInitialNode*, "initialNode", ::System::Xml::XmlBaseReader*>();
}
inline void System::Xml::XmlBaseReader::setStaticF_endOfFileNode(::System::Xml::XmlBaseReader_XmlEndOfFileNode* value) {
  ::cordl_internals::setStaticField<::System::Xml::XmlBaseReader_XmlEndOfFileNode*, "endOfFileNode", ::System::Xml::XmlBaseReader*>(
      std::forward<::System::Xml::XmlBaseReader_XmlEndOfFileNode*>(value));
}
inline ::System::Xml::XmlBaseReader_XmlEndOfFileNode* System::Xml::XmlBaseReader::getStaticF_endOfFileNode() {
  return ::cordl_internals::getStaticField<::System::Xml::XmlBaseReader_XmlEndOfFileNode*, "endOfFileNode", ::System::Xml::XmlBaseReader*>();
}
inline void System::Xml::XmlBaseReader::setStaticF_closedNode(::System::Xml::XmlBaseReader_XmlClosedNode* value) {
  ::cordl_internals::setStaticField<::System::Xml::XmlBaseReader_XmlClosedNode*, "closedNode", ::System::Xml::XmlBaseReader*>(std::forward<::System::Xml::XmlBaseReader_XmlClosedNode*>(value));
}
inline ::System::Xml::XmlBaseReader_XmlClosedNode* System::Xml::XmlBaseReader::getStaticF_closedNode() {
  return ::cordl_internals::getStaticField<::System::Xml::XmlBaseReader_XmlClosedNode*, "closedNode", ::System::Xml::XmlBaseReader*>();
}
inline void System::Xml::XmlBaseReader::setStaticF_binhexEncoding(::System::Text::BinHexEncoding* value) {
  ::cordl_internals::setStaticField<::System::Text::BinHexEncoding*, "binhexEncoding", ::System::Xml::XmlBaseReader*>(std::forward<::System::Text::BinHexEncoding*>(value));
}
inline ::System::Text::BinHexEncoding* System::Xml::XmlBaseReader::getStaticF_binhexEncoding() {
  return ::cordl_internals::getStaticField<::System::Text::BinHexEncoding*, "binhexEncoding", ::System::Xml::XmlBaseReader*>();
}
inline void System::Xml::XmlBaseReader::setStaticF_base64Encoding(::System::Text::Base64Encoding* value) {
  ::cordl_internals::setStaticField<::System::Text::Base64Encoding*, "base64Encoding", ::System::Xml::XmlBaseReader*>(std::forward<::System::Text::Base64Encoding*>(value));
}
inline ::System::Text::Base64Encoding* System::Xml::XmlBaseReader::getStaticF_base64Encoding() {
  return ::cordl_internals::getStaticField<::System::Text::Base64Encoding*, "base64Encoding", ::System::Xml::XmlBaseReader*>();
}
inline void System::Xml::XmlBaseReader::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Text::BinHexEncoding* System::Xml::XmlBaseReader::get_BinHexEncoding() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { "get_BinHexEncoding", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::BinHexEncoding*>(nullptr, ___internal_method);
}
inline ::System::Text::Base64Encoding* System::Xml::XmlBaseReader::get_Base64Encoding() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { "get_Base64Encoding", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::Base64Encoding*>(nullptr, ___internal_method);
}
inline ::System::Xml::XmlBufferReader* System::Xml::XmlBaseReader::get_BufferReader() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { "get_BufferReader", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlBufferReader*>(this, ___internal_method);
}
inline ::System::Xml::XmlDictionaryReaderQuotas* System::Xml::XmlBaseReader::get_Quotas() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 75 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlDictionaryReaderQuotas*>(this, ___internal_method);
}
inline ::System::Xml::XmlBaseReader_XmlNode* System::Xml::XmlBaseReader::get_Node() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { "get_Node", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlBaseReader_XmlNode*>(this, ___internal_method);
}
inline void System::Xml::XmlBaseReader::MoveToNode(::System::Xml::XmlBaseReader_XmlNode* node) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { "MoveToNode", {}, { ::i2c::type_of<::System::Xml::XmlBaseReader_XmlNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline void System::Xml::XmlBaseReader::MoveToInitial(::System::Xml::XmlDictionaryReaderQuotas* quotas) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { "MoveToInitial", {}, { ::i2c::type_of<::System::Xml::XmlDictionaryReaderQuotas*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, quotas);
}
inline ::System::Xml::XmlBaseReader_XmlDeclarationNode* System::Xml::XmlBaseReader::MoveToDeclaration() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { "MoveToDeclaration", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlBaseReader_XmlDeclarationNode*>(this, ___internal_method);
}
inline bool System::Xml::XmlBaseReader::CheckStandalone(int32_t attr) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { "CheckStandalone", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, attr);
}
inline bool System::Xml::XmlBaseReader::CheckDeclAttribute(int32_t index, ::StringW localName, ::StringW value, bool checkLower, ::StringW valueSR) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(),
                          { "CheckDeclAttribute", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, index, localName, value, checkLower, valueSR);
}
inline ::System::Xml::XmlBaseReader_XmlCommentNode* System::Xml::XmlBaseReader::MoveToComment() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { "MoveToComment", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlBaseReader_XmlCommentNode*>(this, ___internal_method);
}
inline ::System::Xml::XmlBaseReader_XmlCDataNode* System::Xml::XmlBaseReader::MoveToCData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { "MoveToCData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlBaseReader_XmlCDataNode*>(this, ___internal_method);
}
inline ::System::Xml::XmlBaseReader_XmlAtomicTextNode* System::Xml::XmlBaseReader::MoveToAtomicText() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { "MoveToAtomicText", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlBaseReader_XmlAtomicTextNode*>(this, ___internal_method);
}
inline ::System::Xml::XmlBaseReader_XmlComplexTextNode* System::Xml::XmlBaseReader::MoveToComplexText() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { "MoveToComplexText", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlBaseReader_XmlComplexTextNode*>(this, ___internal_method);
}
inline ::System::Xml::XmlBaseReader_XmlTextNode* System::Xml::XmlBaseReader::MoveToWhitespaceText() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { "MoveToWhitespaceText", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlBaseReader_XmlTextNode*>(this, ___internal_method);
}
inline ::System::Xml::XmlBaseReader_XmlElementNode* System::Xml::XmlBaseReader::get_ElementNode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { "get_ElementNode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlBaseReader_XmlElementNode*>(this, ___internal_method);
}
inline void System::Xml::XmlBaseReader::MoveToEndElement() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { "MoveToEndElement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlBaseReader::MoveToEndOfFile() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { "MoveToEndOfFile", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::XmlBaseReader_XmlElementNode* System::Xml::XmlBaseReader::EnterScope() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { "EnterScope", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlBaseReader_XmlElementNode*>(this, ___internal_method);
}
inline void System::Xml::XmlBaseReader::ExitScope() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { "ExitScope", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::XmlBaseReader_XmlAttributeNode* System::Xml::XmlBaseReader::AddAttribute(::System::Xml::XmlBaseReader_QNameType qnameType, bool isAtomicValue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { "AddAttribute", {}, { ::i2c::type_of<::System::Xml::XmlBaseReader_QNameType>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlBaseReader_XmlAttributeNode*>(this, ___internal_method, qnameType, isAtomicValue);
}
inline ::System::Xml::XmlBaseReader_Namespace* System::Xml::XmlBaseReader::AddNamespace() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { "AddNamespace", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlBaseReader_Namespace*>(this, ___internal_method);
}
inline ::System::Xml::XmlBaseReader_XmlAttributeNode* System::Xml::XmlBaseReader::AddAttribute() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { "AddAttribute", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlBaseReader_XmlAttributeNode*>(this, ___internal_method);
}
inline ::System::Xml::XmlBaseReader_XmlAttributeNode* System::Xml::XmlBaseReader::AddXmlAttribute() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { "AddXmlAttribute", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlBaseReader_XmlAttributeNode*>(this, ___internal_method);
}
inline ::System::Xml::XmlBaseReader_XmlAttributeNode* System::Xml::XmlBaseReader::AddXmlnsAttribute(::System::Xml::XmlBaseReader_Namespace* ns) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { "AddXmlnsAttribute", {}, { ::i2c::type_of<::System::Xml::XmlBaseReader_Namespace*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlBaseReader_XmlAttributeNode*>(this, ___internal_method, ns);
}
inline void System::Xml::XmlBaseReader::FixXmlAttribute(::System::Xml::XmlBaseReader_XmlAttributeNode* attributeNode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { "FixXmlAttribute", {}, { ::i2c::type_of<::System::Xml::XmlBaseReader_XmlAttributeNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attributeNode);
}
inline bool System::Xml::XmlBaseReader::get_OutsideRootElement() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { "get_OutsideRootElement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Xml::XmlBaseReader::get_CanReadValueChunk() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 61 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlBaseReader::get_BaseURI() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::Xml::XmlBaseReader::get_IsDefault() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t System::Xml::XmlBaseReader::get_AttributeCount() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 39 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Xml::XmlBaseReader::Close() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 52 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t System::Xml::XmlBaseReader::get_Depth() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { "get_Depth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Xml::XmlBaseReader::get_EOF() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 51 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Xml::XmlBaseReader_XmlAttributeNode* System::Xml::XmlBaseReader::GetAttributeNode(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { "GetAttributeNode", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlBaseReader_XmlAttributeNode*>(this, ___internal_method, index);
}
inline ::System::Xml::XmlBaseReader_XmlAttributeNode* System::Xml::XmlBaseReader::GetAttributeNode(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { "GetAttributeNode", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlBaseReader_XmlAttributeNode*>(this, ___internal_method, name);
}
inline ::System::Xml::XmlBaseReader_XmlAttributeNode* System::Xml::XmlBaseReader::GetAttributeNode(::StringW localName, ::StringW namespaceUri) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { "GetAttributeNode", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlBaseReader_XmlAttributeNode*>(this, ___internal_method, localName, namespaceUri);
}
inline ::StringW System::Xml::XmlBaseReader::GetAttribute(int32_t index) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 42 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, index);
}
inline ::StringW System::Xml::XmlBaseReader::GetAttribute(::StringW name) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 40 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, name);
}
inline ::StringW System::Xml::XmlBaseReader::GetAttribute(::StringW localName, ::StringW namespaceUri) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 41 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, localName, namespaceUri);
}
inline bool System::Xml::XmlBaseReader::get_IsEmptyElement() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { "get_IsEmptyElement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlBaseReader::get_LocalName() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlBaseReader::LookupNamespace(::StringW prefix) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 56 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, prefix);
}
inline ::System::Xml::XmlBaseReader_Namespace* System::Xml::XmlBaseReader::LookupNamespace(::System::Xml::PrefixHandle* prefix) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { "LookupNamespace", {}, { ::i2c::type_of<::System::Xml::PrefixHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlBaseReader_Namespace*>(this, ___internal_method, prefix);
}
inline void System::Xml::XmlBaseReader::ProcessAttributes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { "ProcessAttributes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlBaseReader::ProcessAttributes(::ArrayW<::System::Xml::XmlBaseReader_XmlAttributeNode*> attributeNodes, int32_t attributeCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(),
                                                           { "ProcessAttributes", {}, { ::i2c::type_of<::ArrayW<::System::Xml::XmlBaseReader_XmlAttributeNode*>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attributeNodes, attributeCount);
}
inline void System::Xml::XmlBaseReader::CheckAttributes(::ArrayW<::System::Xml::XmlBaseReader_XmlAttributeNode*> attributeNodes, int32_t attributeCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(),
                                                           { "CheckAttributes", {}, { ::i2c::type_of<::ArrayW<::System::Xml::XmlBaseReader_XmlAttributeNode*>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attributeNodes, attributeCount);
}
inline void System::Xml::XmlBaseReader::MoveToAttribute(int32_t index) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 45 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline bool System::Xml::XmlBaseReader::MoveToAttribute(::StringW name) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 43 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name);
}
inline bool System::Xml::XmlBaseReader::MoveToAttribute(::StringW localName, ::StringW namespaceUri) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 44 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, localName, namespaceUri);
}
inline bool System::Xml::XmlBaseReader::MoveToElement() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 48 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Xml::XmlNodeType System::Xml::XmlBaseReader::MoveToContent() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 64 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNodeType>(this, ___internal_method);
}
inline bool System::Xml::XmlBaseReader::MoveToFirstAttribute() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 46 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Xml::XmlBaseReader::MoveToNextAttribute() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 47 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlBaseReader::get_NamespaceURI() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Xml::XmlNameTable* System::Xml::XmlBaseReader::get_NameTable() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 55 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNameTable*>(this, ___internal_method);
}
inline ::System::Xml::XmlNodeType System::Xml::XmlBaseReader::get_NodeType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { "get_NodeType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNodeType>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlBaseReader::get_Prefix() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline char16_t System::Xml::XmlBaseReader::get_QuoteChar() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlBaseReader::GetLocalName(bool enforceAtomization) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { "GetLocalName", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, enforceAtomization);
}
inline ::StringW System::Xml::XmlBaseReader::GetNamespaceUri(bool enforceAtomization) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { "GetNamespaceUri", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, enforceAtomization);
}
inline bool System::Xml::XmlBaseReader::IsLocalName(::StringW localName) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 77 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, localName);
}
inline bool System::Xml::XmlBaseReader::IsLocalName(::System::Xml::XmlDictionaryString* localName) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 78 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, localName);
}
inline bool System::Xml::XmlBaseReader::IsNamespaceUri(::StringW namespaceUri) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 79 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, namespaceUri);
}
inline bool System::Xml::XmlBaseReader::IsNamespaceUri(::System::Xml::XmlDictionaryString* namespaceUri) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 80 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, namespaceUri);
}
inline bool System::Xml::XmlBaseReader::IsStartElement() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { "IsStartElement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Xml::XmlBaseReader::IsStartElement(::StringW localName, ::StringW namespaceUri) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 69 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, localName, namespaceUri);
}
inline bool System::Xml::XmlBaseReader::IsStartElement(::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 81 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, localName, namespaceUri);
}
inline int32_t System::Xml::XmlBaseReader::IndexOfLocalName(::ArrayW<::System::Xml::XmlDictionaryString*> localNames, ::System::Xml::XmlDictionaryString* namespaceUri) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 82 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, localNames, namespaceUri);
}
inline int32_t System::Xml::XmlBaseReader::ReadValueChunk(::ArrayW<char16_t> chars, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 62 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, chars, offset, count);
}
inline ::StringW System::Xml::XmlBaseReader::ReadElementContentAsString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 38 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlBaseReader::ReadElementString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 66 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Xml::XmlBaseReader::ReadStartElement() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 65 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlBaseReader::ReadEndElement() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 67 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Xml::XmlBaseReader::ReadAttributeValue() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 49 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Xml::ReadState System::Xml::XmlBaseReader::get_ReadState() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 53 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::ReadState>(this, ___internal_method);
}
inline void System::Xml::XmlBaseReader::SkipValue(::System::Xml::XmlBaseReader_XmlNode* node) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { "SkipValue", {}, { ::i2c::type_of<::System::Xml::XmlBaseReader_XmlNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline bool System::Xml::XmlBaseReader::TryGetBase64ContentLength(::by_ref<int32_t> length) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 83 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, length);
}
inline ::ArrayW<uint8_t> System::Xml::XmlBaseReader::ReadContentAsBase64() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 84 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline int32_t System::Xml::XmlBaseReader::ReadContentAsBase64(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 59 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, count);
}
inline int32_t System::Xml::XmlBaseReader::ReadContentAsBinHex(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 60 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, count);
}
inline int32_t System::Xml::XmlBaseReader::ReadBytes(::System::Text::Encoding* encoding, int32_t byteBlock, int32_t charBlock, ::ArrayW<uint8_t> buffer, int32_t offset, int32_t byteCount,
                                                     bool readContent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(),
                                                           { "ReadBytes",
                                                             {},
                                                             { ::i2c::type_of<::System::Text::Encoding*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, encoding, byteBlock, charBlock, buffer, offset, byteCount, readContent);
}
inline ::StringW System::Xml::XmlBaseReader::ReadContentAsString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::Xml::XmlBaseReader::ReadContentAsBoolean() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int64_t System::Xml::XmlBaseReader::ReadContentAsLong() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int32_t System::Xml::XmlBaseReader::ReadContentAsInt() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::DateTime System::Xml::XmlBaseReader::ReadContentAsDateTime() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline double_t System::Xml::XmlBaseReader::ReadContentAsDouble() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline float_t System::Xml::XmlBaseReader::ReadContentAsFloat() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::System::Decimal System::Xml::XmlBaseReader::ReadContentAsDecimal() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal>(this, ___internal_method);
}
inline ::System::Xml::UniqueId* System::Xml::XmlBaseReader::ReadContentAsUniqueId() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 86 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::UniqueId*>(this, ___internal_method);
}
inline ::System::TimeSpan System::Xml::XmlBaseReader::ReadContentAsTimeSpan() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 88 })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(this, ___internal_method);
}
inline ::System::Guid System::Xml::XmlBaseReader::ReadContentAsGuid() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 87 })));
  return ::cordl_internals::RunMethodRethrow<::System::Guid>(this, ___internal_method);
}
inline ::System::Object* System::Xml::XmlBaseReader::ReadContentAsObject() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Object* System::Xml::XmlBaseReader::ReadContentAs(::System::Type* type, ::System::Xml::IXmlNamespaceResolver* namespaceResolver) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, type, namespaceResolver);
}
inline void System::Xml::XmlBaseReader::ResolveEntity() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 58 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlBaseReader::Skip() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 54 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlBaseReader::get_Value() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Type* System::Xml::XmlBaseReader::get_ValueType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlBaseReader::get_XmlLang() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Xml::XmlSpace System::Xml::XmlBaseReader::get_XmlSpace() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlSpace>(this, ___internal_method);
}
inline bool System::Xml::XmlBaseReader::TryGetLocalNameAsDictionaryString(::by_ref<::System::Xml::XmlDictionaryString*> localName) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 92 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, localName);
}
inline bool System::Xml::XmlBaseReader::TryGetNamespaceUriAsDictionaryString(::by_ref<::System::Xml::XmlDictionaryString*> localName) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 93 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, localName);
}
inline bool System::Xml::XmlBaseReader::TryGetValueAsDictionaryString(::by_ref<::System::Xml::XmlDictionaryString*> value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlBaseReader*>(), 94 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline ::StringW System::Xml::XmlBaseReader::GetOpenElements() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { "GetOpenElements", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::ArrayW<char16_t> System::Xml::XmlBaseReader::GetCharBuffer(int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { "GetCharBuffer", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<char16_t>>(this, ___internal_method, count);
}
inline void System::Xml::XmlBaseReader::SignStartElement(::System::Xml::XmlSigningNodeWriter* writer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { "SignStartElement", {}, { ::i2c::type_of<::System::Xml::XmlSigningNodeWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
inline void System::Xml::XmlBaseReader::SignAttribute(::System::Xml::XmlSigningNodeWriter* writer, ::System::Xml::XmlBaseReader_XmlAttributeNode* attributeNode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(),
                                              { "SignAttribute", {}, { ::i2c::type_of<::System::Xml::XmlSigningNodeWriter*>(), ::i2c::type_of<::System::Xml::XmlBaseReader_XmlAttributeNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, attributeNode);
}
inline void System::Xml::XmlBaseReader::SignEndElement(::System::Xml::XmlSigningNodeWriter* writer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { "SignEndElement", {}, { ::i2c::type_of<::System::Xml::XmlSigningNodeWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
inline void System::Xml::XmlBaseReader::SignNode(::System::Xml::XmlSigningNodeWriter* writer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { "SignNode", {}, { ::i2c::type_of<::System::Xml::XmlSigningNodeWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
inline void System::Xml::XmlBaseReader::SignNode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlBaseReader*>(), { "SignNode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::XmlBaseReader* System::Xml::XmlBaseReader::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlBaseReader*>());
}
// Ctor Parameters []
constexpr ::System::Xml::XmlBaseReader::XmlBaseReader() {}
