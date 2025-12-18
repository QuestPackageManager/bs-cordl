#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/ExtensionDataReader.hpp"
#include "System/Xml/zzzz__ReadState_impl.hpp"
#include "System/Xml/zzzz__XmlNodeType_impl.hpp"
#include "System/Xml/zzzz__XmlReader_impl.hpp"
#include "System/Runtime/Serialization/zzzz__ExtensionDataReader_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Runtime/Serialization/zzzz__ClassDataNode_def.hpp"
#include "System/Runtime/Serialization/zzzz__CollectionDataNode_def.hpp"
#include "System/Runtime/Serialization/zzzz__ElementData_def.hpp"
#include "System/Runtime/Serialization/zzzz__ExtensionDataReader_def.hpp"
#include "System/Runtime/Serialization/zzzz__IDataNode_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializableDataNode_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlDataNode_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlObjectSerializerReadContext_def.hpp"
#include "System/Xml/zzzz__ReadState_def.hpp"
#include "System/Xml/zzzz__XmlNameTable_def.hpp"
#include "System/Xml/zzzz__XmlNodeReader_def.hpp"
#include "System/Xml/zzzz__XmlNodeType_def.hpp"
#include "System/Xml/zzzz__XmlSpace_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Runtime::Serialization::ExtensionDataReader_ExtensionDataNodeType::ExtensionDataReader_ExtensionDataNodeType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::ExtensionDataReader_ExtensionDataNodeType::ExtensionDataReader_ExtensionDataNodeType() {}
constexpr ::System::Runtime::Serialization::ExtensionDataReader_ExtensionDataNodeType System::Runtime::Serialization::ExtensionDataReader_ExtensionDataNodeType::None{ static_cast<int32_t>(0x0) };
constexpr ::System::Runtime::Serialization::ExtensionDataReader_ExtensionDataNodeType System::Runtime::Serialization::ExtensionDataReader_ExtensionDataNodeType::Element{ static_cast<int32_t>(0x1) };
constexpr ::System::Runtime::Serialization::ExtensionDataReader_ExtensionDataNodeType System::Runtime::Serialization::ExtensionDataReader_ExtensionDataNodeType::EndElement{ static_cast<int32_t>(
    0x2) };
constexpr ::System::Runtime::Serialization::ExtensionDataReader_ExtensionDataNodeType System::Runtime::Serialization::ExtensionDataReader_ExtensionDataNodeType::Text{ static_cast<int32_t>(0x3) };
constexpr ::System::Runtime::Serialization::ExtensionDataReader_ExtensionDataNodeType System::Runtime::Serialization::ExtensionDataReader_ExtensionDataNodeType::Xml{ static_cast<int32_t>(0x4) };
constexpr ::System::Runtime::Serialization::ExtensionDataReader_ExtensionDataNodeType System::Runtime::Serialization::ExtensionDataReader_ExtensionDataNodeType::ReferencedElement{
  static_cast<int32_t>(0x5)
};
constexpr ::System::Runtime::Serialization::ExtensionDataReader_ExtensionDataNodeType System::Runtime::Serialization::ExtensionDataReader_ExtensionDataNodeType::NullElement{ static_cast<int32_t>(
    0x6) };
//  Writing Method size for method: ::System::Runtime::Serialization::ExtensionDataReader._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ExtensionDataReader::*)(
    ::System::Runtime::Serialization::XmlObjectSerializerReadContext*)>(&::System::Runtime::Serialization::ExtensionDataReader::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5f9c6f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ExtensionDataReader.SetDeserializedValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ExtensionDataReader::*)(::System::Object*)>(
    &::System::Runtime::Serialization::ExtensionDataReader::SetDeserializedValue)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5f9c798;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), "SetDeserializedValue",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ExtensionDataReader.GetCurrentNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::IDataNode* (::System::Runtime::Serialization::ExtensionDataReader::*)()>(
    &::System::Runtime::Serialization::ExtensionDataReader::GetCurrentNode)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5f9c910;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(),
                                                                               "GetCurrentNode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ExtensionDataReader.SetDataNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ExtensionDataReader::*)(
    ::System::Runtime::Serialization::IDataNode*, ::StringW, ::StringW)>(&::System::Runtime::Serialization::ExtensionDataReader::SetDataNode)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5f9c940;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), "SetDataNode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::IDataNode*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ExtensionDataReader.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ExtensionDataReader::*)()>(
    &::System::Runtime::Serialization::ExtensionDataReader::Reset)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5f9cb9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(),
                                                                               "Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ExtensionDataReader.get_IsXmlDataNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::ExtensionDataReader::*)()>(
    &::System::Runtime::Serialization::ExtensionDataReader::get_IsXmlDataNode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f9cbc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(),
                                                                               "get_IsXmlDataNode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ExtensionDataReader.get_NodeType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNodeType (::System::Runtime::Serialization::ExtensionDataReader::*)()>(
    &::System::Runtime::Serialization::ExtensionDataReader::get_NodeType)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5f9cbd0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ExtensionDataReader.get_LocalName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Serialization::ExtensionDataReader::*)()>(
    &::System::Runtime::Serialization::ExtensionDataReader::get_LocalName)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5f9cc00;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ExtensionDataReader.get_NamespaceURI
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Serialization::ExtensionDataReader::*)()>(
    &::System::Runtime::Serialization::ExtensionDataReader::get_NamespaceURI)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5f9cc30;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ExtensionDataReader.get_Prefix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Serialization::ExtensionDataReader::*)()>(
    &::System::Runtime::Serialization::ExtensionDataReader::get_Prefix)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5f9cc60;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ExtensionDataReader.get_Value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Serialization::ExtensionDataReader::*)()>(
    &::System::Runtime::Serialization::ExtensionDataReader::get_Value)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5f9cc90;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ExtensionDataReader.get_Depth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Runtime::Serialization::ExtensionDataReader::*)()>(
    &::System::Runtime::Serialization::ExtensionDataReader::get_Depth)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5f9ccc0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ExtensionDataReader.get_AttributeCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Runtime::Serialization::ExtensionDataReader::*)()>(
    &::System::Runtime::Serialization::ExtensionDataReader::get_AttributeCount)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5f9ccf0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), 39));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ExtensionDataReader.get_EOF
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::ExtensionDataReader::*)()>(
    &::System::Runtime::Serialization::ExtensionDataReader::get_EOF)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5f9cd24;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), 51));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ExtensionDataReader.get_ReadState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::ReadState (::System::Runtime::Serialization::ExtensionDataReader::*)()>(
    &::System::Runtime::Serialization::ExtensionDataReader::get_ReadState)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5f9cd60;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), 53));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ExtensionDataReader.get_IsEmptyElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::ExtensionDataReader::*)()>(
    &::System::Runtime::Serialization::ExtensionDataReader::get_IsEmptyElement)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5f9cd94;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ExtensionDataReader.get_IsDefault
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::ExtensionDataReader::*)()>(
    &::System::Runtime::Serialization::ExtensionDataReader::get_IsDefault)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5f9cdc8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ExtensionDataReader.get_QuoteChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (::System::Runtime::Serialization::ExtensionDataReader::*)()>(
    &::System::Runtime::Serialization::ExtensionDataReader::get_QuoteChar)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5f9cdfc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ExtensionDataReader.get_XmlSpace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlSpace (::System::Runtime::Serialization::ExtensionDataReader::*)()>(
    &::System::Runtime::Serialization::ExtensionDataReader::get_XmlSpace)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5f9ce30;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ExtensionDataReader.get_XmlLang
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Serialization::ExtensionDataReader::*)()>(
    &::System::Runtime::Serialization::ExtensionDataReader::get_XmlLang)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5f9ce64;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ExtensionDataReader.MoveToFirstAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::ExtensionDataReader::*)()>(
    &::System::Runtime::Serialization::ExtensionDataReader::MoveToFirstAttribute)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5f9cea4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), 46));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ExtensionDataReader.MoveToNextAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::ExtensionDataReader::*)()>(
    &::System::Runtime::Serialization::ExtensionDataReader::MoveToNextAttribute)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5f9cf04;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), 47));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ExtensionDataReader.MoveToAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ExtensionDataReader::*)(int32_t)>(
    &::System::Runtime::Serialization::ExtensionDataReader::MoveToAttribute)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5f9cf68;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), 45));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ExtensionDataReader.GetAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Serialization::ExtensionDataReader::*)(::StringW, ::StringW)>(
    &::System::Runtime::Serialization::ExtensionDataReader::GetAttribute)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5f9d054;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), 41));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ExtensionDataReader.MoveToAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::ExtensionDataReader::*)(::StringW, ::StringW)>(
    &::System::Runtime::Serialization::ExtensionDataReader::MoveToAttribute)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5f9d12c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), 44));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ExtensionDataReader.MoveToElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::ExtensionDataReader::*)()>(
    &::System::Runtime::Serialization::ExtensionDataReader::MoveToElement)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5f9d21c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), 48));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ExtensionDataReader.SetElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ExtensionDataReader::*)()>(
    &::System::Runtime::Serialization::ExtensionDataReader::SetElement)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5f9cb54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(),
                                                                               "SetElement", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ExtensionDataReader.LookupNamespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Serialization::ExtensionDataReader::*)(::StringW)>(
    &::System::Runtime::Serialization::ExtensionDataReader::LookupNamespace)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5f9d270;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), 56));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ExtensionDataReader.Skip
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ExtensionDataReader::*)()>(
    &::System::Runtime::Serialization::ExtensionDataReader::Skip)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5f9d350;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), 54));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ExtensionDataReader.IsElementNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::ExtensionDataReader::*)(
    ::System::Runtime::Serialization::ExtensionDataReader_ExtensionDataNodeType)>(&::System::Runtime::Serialization::ExtensionDataReader::IsElementNode)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f9d4a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), "IsElementNode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ExtensionDataReader_ExtensionDataNodeType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ExtensionDataReader.Close
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ExtensionDataReader::*)()>(
    &::System::Runtime::Serialization::ExtensionDataReader::Close)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5f9d4c0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), 52));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ExtensionDataReader.Read
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::ExtensionDataReader::*)()>(
    &::System::Runtime::Serialization::ExtensionDataReader::Read)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x5f9d518;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), 50));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ExtensionDataReader.get_Name
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Serialization::ExtensionDataReader::*)()>(
    &::System::Runtime::Serialization::ExtensionDataReader::get_Name)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5f9db84;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ExtensionDataReader.get_BaseURI
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Serialization::ExtensionDataReader::*)()>(
    &::System::Runtime::Serialization::ExtensionDataReader::get_BaseURI)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5f9dbc0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ExtensionDataReader.get_NameTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNameTable* (::System::Runtime::Serialization::ExtensionDataReader::*)()>(
    &::System::Runtime::Serialization::ExtensionDataReader::get_NameTable)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5f9dc00;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), 55));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ExtensionDataReader.GetAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Serialization::ExtensionDataReader::*)(::StringW)>(
    &::System::Runtime::Serialization::ExtensionDataReader::GetAttribute)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5f9dc34;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), 40));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ExtensionDataReader.GetAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Serialization::ExtensionDataReader::*)(int32_t)>(
    &::System::Runtime::Serialization::ExtensionDataReader::GetAttribute)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5f9dc68;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), 42));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ExtensionDataReader.MoveToAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::ExtensionDataReader::*)(::StringW)>(
    &::System::Runtime::Serialization::ExtensionDataReader::MoveToAttribute)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5f9dc9c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), 43));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ExtensionDataReader.ResolveEntity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ExtensionDataReader::*)()>(
    &::System::Runtime::Serialization::ExtensionDataReader::ResolveEntity)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5f9dcd0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), 58));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ExtensionDataReader.ReadAttributeValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::ExtensionDataReader::*)()>(
    &::System::Runtime::Serialization::ExtensionDataReader::ReadAttributeValue)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5f9dd00;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), 49));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ExtensionDataReader.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ExtensionDataReader::*)(::System::Runtime::Serialization::IDataNode*)>(
    &::System::Runtime::Serialization::ExtensionDataReader::MoveNext)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x5f9d6dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), "MoveNext", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::IDataNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ExtensionDataReader.SetNextElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ExtensionDataReader::*)(
    ::System::Runtime::Serialization::IDataNode*, ::StringW, ::StringW, ::StringW)>(&::System::Runtime::Serialization::ExtensionDataReader::SetNextElement)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x5f9c964;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), "SetNextElement", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::IDataNode*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ExtensionDataReader.AddDeserializedDataNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ExtensionDataReader::*)(::System::Runtime::Serialization::IDataNode*)>(
    &::System::Runtime::Serialization::ExtensionDataReader::AddDeserializedDataNode)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x5f9ec10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), "AddDeserializedDataNode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::IDataNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ExtensionDataReader.CheckIfNodeHandled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::ExtensionDataReader::*)(::System::Runtime::Serialization::IDataNode*)>(
    &::System::Runtime::Serialization::ExtensionDataReader::CheckIfNodeHandled)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x5f9e958;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), "CheckIfNodeHandled", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::IDataNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ExtensionDataReader.MoveNextInClass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ExtensionDataReader::*)(::System::Runtime::Serialization::ClassDataNode*)>(
    &::System::Runtime::Serialization::ExtensionDataReader::MoveNextInClass)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x5f9dd34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), "MoveNextInClass", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ClassDataNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ExtensionDataReader.MoveNextInCollection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ExtensionDataReader::*)(
    ::System::Runtime::Serialization::CollectionDataNode*)>(&::System::Runtime::Serialization::ExtensionDataReader::MoveNextInCollection)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x5f9df90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), "MoveNextInCollection", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::CollectionDataNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ExtensionDataReader.MoveNextInISerializable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ExtensionDataReader::*)(
    ::System::Runtime::Serialization::ISerializableDataNode*)>(&::System::Runtime::Serialization::ExtensionDataReader::MoveNextInISerializable)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x5f9e1e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), "MoveNextInISerializable", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ISerializableDataNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ExtensionDataReader.MoveNextInXml
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ExtensionDataReader::*)(::System::Runtime::Serialization::XmlDataNode*)>(
    &::System::Runtime::Serialization::ExtensionDataReader::MoveNextInXml)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x5f9e410;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), "MoveNextInXml", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlDataNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ExtensionDataReader.MoveToDeserializedObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ExtensionDataReader::*)(::System::Runtime::Serialization::IDataNode*)>(
    &::System::Runtime::Serialization::ExtensionDataReader::MoveToDeserializedObject)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x5f9e5f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), "MoveToDeserializedObject", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::IDataNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ExtensionDataReader.MoveToText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::ExtensionDataReader::*)(
    ::System::Type*, ::System::Runtime::Serialization::IDataNode*, bool)>(&::System::Runtime::Serialization::ExtensionDataReader::MoveToText)> {
  constexpr static std::size_t size = 0x1748;
  constexpr static std::size_t addrs = 0x5f9f0e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), "MoveToText", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::IDataNode*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ExtensionDataReader.PushElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ExtensionDataReader::*)()>(
    &::System::Runtime::Serialization::ExtensionDataReader::PushElement)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5f9da90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(),
                                                                               "PushElement", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ExtensionDataReader.PopElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ExtensionDataReader::*)()>(
    &::System::Runtime::Serialization::ExtensionDataReader::PopElement)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5f9db28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(),
                                                                               "PopElement", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ExtensionDataReader.GrowElementsIfNeeded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ExtensionDataReader::*)()>(
    &::System::Runtime::Serialization::ExtensionDataReader::GrowElementsIfNeeded)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5fa0c1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(),
                                                                               "GrowElementsIfNeeded", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ExtensionDataReader.GetNextElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::ElementData* (::System::Runtime::Serialization::ExtensionDataReader::*)()>(
    &::System::Runtime::Serialization::ExtensionDataReader::GetNextElement)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5f9e8d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(),
                                                                               "GetNextElement", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ExtensionDataReader.GetPrefix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::System::Runtime::Serialization::ExtensionDataReader::GetPrefix)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x5f9ee54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), "GetPrefix",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ExtensionDataReader.AddPrefix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW)>(&::System::Runtime::Serialization::ExtensionDataReader::AddPrefix)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5f9c620;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), "AddPrefix", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Hashtable*& System::Runtime::Serialization::ExtensionDataReader::__cordl_internal_get_cache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cache;
}
constexpr ::System::Collections::Hashtable* const& System::Runtime::Serialization::ExtensionDataReader::__cordl_internal_get_cache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cache;
}
constexpr void System::Runtime::Serialization::ExtensionDataReader::__cordl_internal_set_cache(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cache)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Runtime::Serialization::ElementData*, ::Array<::System::Runtime::Serialization::ElementData*>*>&
System::Runtime::Serialization::ExtensionDataReader::__cordl_internal_get_elements() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elements;
}
constexpr ::ArrayW<::System::Runtime::Serialization::ElementData*, ::Array<::System::Runtime::Serialization::ElementData*>*> const&
System::Runtime::Serialization::ExtensionDataReader::__cordl_internal_get_elements() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elements;
}
constexpr void System::Runtime::Serialization::ExtensionDataReader::__cordl_internal_set_elements(
    ::ArrayW<::System::Runtime::Serialization::ElementData*, ::Array<::System::Runtime::Serialization::ElementData*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___elements)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Serialization::ElementData*& System::Runtime::Serialization::ExtensionDataReader::__cordl_internal_get_element() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___element;
}
constexpr ::System::Runtime::Serialization::ElementData* const& System::Runtime::Serialization::ExtensionDataReader::__cordl_internal_get_element() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___element;
}
constexpr void System::Runtime::Serialization::ExtensionDataReader::__cordl_internal_set_element(::System::Runtime::Serialization::ElementData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___element)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Serialization::ElementData*& System::Runtime::Serialization::ExtensionDataReader::__cordl_internal_get_nextElement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextElement;
}
constexpr ::System::Runtime::Serialization::ElementData* const& System::Runtime::Serialization::ExtensionDataReader::__cordl_internal_get_nextElement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextElement;
}
constexpr void System::Runtime::Serialization::ExtensionDataReader::__cordl_internal_set_nextElement(::System::Runtime::Serialization::ElementData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___nextElement)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::ReadState& System::Runtime::Serialization::ExtensionDataReader::__cordl_internal_get_readState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readState;
}
constexpr ::System::Xml::ReadState const& System::Runtime::Serialization::ExtensionDataReader::__cordl_internal_get_readState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readState;
}
constexpr void System::Runtime::Serialization::ExtensionDataReader::__cordl_internal_set_readState(::System::Xml::ReadState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___readState = value;
}
constexpr ::System::Runtime::Serialization::ExtensionDataReader_ExtensionDataNodeType& System::Runtime::Serialization::ExtensionDataReader::__cordl_internal_get_internalNodeType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___internalNodeType;
}
constexpr ::System::Runtime::Serialization::ExtensionDataReader_ExtensionDataNodeType const& System::Runtime::Serialization::ExtensionDataReader::__cordl_internal_get_internalNodeType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___internalNodeType;
}
constexpr void System::Runtime::Serialization::ExtensionDataReader::__cordl_internal_set_internalNodeType(::System::Runtime::Serialization::ExtensionDataReader_ExtensionDataNodeType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___internalNodeType = value;
}
constexpr ::System::Xml::XmlNodeType& System::Runtime::Serialization::ExtensionDataReader::__cordl_internal_get_nodeType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nodeType;
}
constexpr ::System::Xml::XmlNodeType const& System::Runtime::Serialization::ExtensionDataReader::__cordl_internal_get_nodeType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nodeType;
}
constexpr void System::Runtime::Serialization::ExtensionDataReader::__cordl_internal_set_nodeType(::System::Xml::XmlNodeType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nodeType = value;
}
constexpr int32_t& System::Runtime::Serialization::ExtensionDataReader::__cordl_internal_get_depth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___depth;
}
constexpr int32_t const& System::Runtime::Serialization::ExtensionDataReader::__cordl_internal_get_depth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___depth;
}
constexpr void System::Runtime::Serialization::ExtensionDataReader::__cordl_internal_set_depth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___depth = value;
}
constexpr ::StringW& System::Runtime::Serialization::ExtensionDataReader::__cordl_internal_get_localName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localName;
}
constexpr ::StringW const& System::Runtime::Serialization::ExtensionDataReader::__cordl_internal_get_localName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localName;
}
constexpr void System::Runtime::Serialization::ExtensionDataReader::__cordl_internal_set_localName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___localName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Runtime::Serialization::ExtensionDataReader::__cordl_internal_get_ns() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ns;
}
constexpr ::StringW const& System::Runtime::Serialization::ExtensionDataReader::__cordl_internal_get_ns() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ns;
}
constexpr void System::Runtime::Serialization::ExtensionDataReader::__cordl_internal_set_ns(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ns)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Runtime::Serialization::ExtensionDataReader::__cordl_internal_get_prefix() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prefix;
}
constexpr ::StringW const& System::Runtime::Serialization::ExtensionDataReader::__cordl_internal_get_prefix() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prefix;
}
constexpr void System::Runtime::Serialization::ExtensionDataReader::__cordl_internal_set_prefix(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___prefix)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Runtime::Serialization::ExtensionDataReader::__cordl_internal_get_value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr ::StringW const& System::Runtime::Serialization::ExtensionDataReader::__cordl_internal_get_value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr void System::Runtime::Serialization::ExtensionDataReader::__cordl_internal_set_value(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___value)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Runtime::Serialization::ExtensionDataReader::__cordl_internal_get_attributeCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeCount;
}
constexpr int32_t const& System::Runtime::Serialization::ExtensionDataReader::__cordl_internal_get_attributeCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeCount;
}
constexpr void System::Runtime::Serialization::ExtensionDataReader::__cordl_internal_set_attributeCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___attributeCount = value;
}
constexpr int32_t& System::Runtime::Serialization::ExtensionDataReader::__cordl_internal_get_attributeIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeIndex;
}
constexpr int32_t const& System::Runtime::Serialization::ExtensionDataReader::__cordl_internal_get_attributeIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeIndex;
}
constexpr void System::Runtime::Serialization::ExtensionDataReader::__cordl_internal_set_attributeIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___attributeIndex = value;
}
constexpr ::System::Xml::XmlNodeReader*& System::Runtime::Serialization::ExtensionDataReader::__cordl_internal_get_xmlNodeReader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlNodeReader;
}
constexpr ::System::Xml::XmlNodeReader* const& System::Runtime::Serialization::ExtensionDataReader::__cordl_internal_get_xmlNodeReader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlNodeReader;
}
constexpr void System::Runtime::Serialization::ExtensionDataReader::__cordl_internal_set_xmlNodeReader(::System::Xml::XmlNodeReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___xmlNodeReader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Queue_1<::System::Runtime::Serialization::IDataNode*>*& System::Runtime::Serialization::ExtensionDataReader::__cordl_internal_get_deserializedDataNodes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___deserializedDataNodes;
}
constexpr ::System::Collections::Generic::Queue_1<::System::Runtime::Serialization::IDataNode*>* const&
System::Runtime::Serialization::ExtensionDataReader::__cordl_internal_get_deserializedDataNodes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___deserializedDataNodes;
}
constexpr void
System::Runtime::Serialization::ExtensionDataReader::__cordl_internal_set_deserializedDataNodes(::System::Collections::Generic::Queue_1<::System::Runtime::Serialization::IDataNode*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___deserializedDataNodes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Serialization::XmlObjectSerializerReadContext*& System::Runtime::Serialization::ExtensionDataReader::__cordl_internal_get_context() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___context;
}
constexpr ::System::Runtime::Serialization::XmlObjectSerializerReadContext* const& System::Runtime::Serialization::ExtensionDataReader::__cordl_internal_get_context() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___context;
}
constexpr void System::Runtime::Serialization::ExtensionDataReader::__cordl_internal_set_context(::System::Runtime::Serialization::XmlObjectSerializerReadContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___context)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Runtime::Serialization::ExtensionDataReader::setStaticF_nsToPrefixTable(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, "nsToPrefixTable",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* System::Runtime::Serialization::ExtensionDataReader::getStaticF_nsToPrefixTable() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, "nsToPrefixTable",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get>();
}
inline void System::Runtime::Serialization::ExtensionDataReader::setStaticF_prefixToNsTable(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, "prefixToNsTable",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* System::Runtime::Serialization::ExtensionDataReader::getStaticF_prefixToNsTable() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, "prefixToNsTable",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get>();
}
inline void System::Runtime::Serialization::ExtensionDataReader::_ctor(::System::Runtime::Serialization::XmlObjectSerializerReadContext* context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void System::Runtime::Serialization::ExtensionDataReader::SetDeserializedValue(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), "SetDeserializedValue",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj);
}
inline ::System::Runtime::Serialization::IDataNode* System::Runtime::Serialization::ExtensionDataReader::GetCurrentNode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(),
                                                                             "GetCurrentNode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::IDataNode*, false>(this, ___internal_method);
}
inline void System::Runtime::Serialization::ExtensionDataReader::SetDataNode(::System::Runtime::Serialization::IDataNode* dataNode, ::StringW name, ::StringW ns) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), "SetDataNode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::IDataNode*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dataNode, name, ns);
}
inline void System::Runtime::Serialization::ExtensionDataReader::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(),
                                                                             "Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::ExtensionDataReader::get_IsXmlDataNode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(),
                                                                             "get_IsXmlDataNode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Xml::XmlNodeType System::Runtime::Serialization::ExtensionDataReader::get_NodeType() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNodeType, false>(this, ___internal_method);
}
inline ::StringW System::Runtime::Serialization::ExtensionDataReader::get_LocalName() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Runtime::Serialization::ExtensionDataReader::get_NamespaceURI() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Runtime::Serialization::ExtensionDataReader::get_Prefix() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Runtime::Serialization::ExtensionDataReader::get_Value() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline int32_t System::Runtime::Serialization::ExtensionDataReader::get_Depth() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::Runtime::Serialization::ExtensionDataReader::get_AttributeCount() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), 39)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::ExtensionDataReader::get_EOF() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), 51)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Xml::ReadState System::Runtime::Serialization::ExtensionDataReader::get_ReadState() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), 53)));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::ReadState, false>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::ExtensionDataReader::get_IsEmptyElement() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::ExtensionDataReader::get_IsDefault() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline char16_t System::Runtime::Serialization::ExtensionDataReader::get_QuoteChar() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<char16_t, false>(this, ___internal_method);
}
inline ::System::Xml::XmlSpace System::Runtime::Serialization::ExtensionDataReader::get_XmlSpace() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlSpace, false>(this, ___internal_method);
}
inline ::StringW System::Runtime::Serialization::ExtensionDataReader::get_XmlLang() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::ExtensionDataReader::MoveToFirstAttribute() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), 46)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::ExtensionDataReader::MoveToNextAttribute() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), 47)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Runtime::Serialization::ExtensionDataReader::MoveToAttribute(int32_t index) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), 45)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
inline ::StringW System::Runtime::Serialization::ExtensionDataReader::GetAttribute(::StringW name, ::StringW namespaceURI) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), 41)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, name, namespaceURI);
}
inline bool System::Runtime::Serialization::ExtensionDataReader::MoveToAttribute(::StringW name, ::StringW namespaceURI) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), 44)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, name, namespaceURI);
}
inline bool System::Runtime::Serialization::ExtensionDataReader::MoveToElement() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), 48)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Runtime::Serialization::ExtensionDataReader::SetElement() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(),
                                                                             "SetElement", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW System::Runtime::Serialization::ExtensionDataReader::LookupNamespace(::StringW prefix) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), 56)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, prefix);
}
inline void System::Runtime::Serialization::ExtensionDataReader::Skip() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), 54)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::ExtensionDataReader::IsElementNode(::System::Runtime::Serialization::ExtensionDataReader_ExtensionDataNodeType nodeType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), "IsElementNode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ExtensionDataReader_ExtensionDataNodeType>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeType);
}
inline void System::Runtime::Serialization::ExtensionDataReader::Close() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), 52)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::ExtensionDataReader::Read() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), 50)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW System::Runtime::Serialization::ExtensionDataReader::get_Name() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Runtime::Serialization::ExtensionDataReader::get_BaseURI() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Xml::XmlNameTable* System::Runtime::Serialization::ExtensionDataReader::get_NameTable() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), 55)));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNameTable*, false>(this, ___internal_method);
}
inline ::StringW System::Runtime::Serialization::ExtensionDataReader::GetAttribute(::StringW name) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), 40)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, name);
}
inline ::StringW System::Runtime::Serialization::ExtensionDataReader::GetAttribute(int32_t i) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), 42)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, i);
}
inline bool System::Runtime::Serialization::ExtensionDataReader::MoveToAttribute(::StringW name) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), 43)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, name);
}
inline void System::Runtime::Serialization::ExtensionDataReader::ResolveEntity() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), 58)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::ExtensionDataReader::ReadAttributeValue() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), 49)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Runtime::Serialization::ExtensionDataReader::MoveNext(::System::Runtime::Serialization::IDataNode* dataNode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), "MoveNext", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::IDataNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dataNode);
}
inline void System::Runtime::Serialization::ExtensionDataReader::SetNextElement(::System::Runtime::Serialization::IDataNode* node, ::StringW name, ::StringW ns, ::StringW prefix) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), "SetNextElement", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::IDataNode*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node, name, ns, prefix);
}
inline void System::Runtime::Serialization::ExtensionDataReader::AddDeserializedDataNode(::System::Runtime::Serialization::IDataNode* node) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), "AddDeserializedDataNode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::IDataNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node);
}
inline bool System::Runtime::Serialization::ExtensionDataReader::CheckIfNodeHandled(::System::Runtime::Serialization::IDataNode* node) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), "CheckIfNodeHandled", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::IDataNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, node);
}
inline void System::Runtime::Serialization::ExtensionDataReader::MoveNextInClass(::System::Runtime::Serialization::ClassDataNode* dataNode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), "MoveNextInClass", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ClassDataNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dataNode);
}
inline void System::Runtime::Serialization::ExtensionDataReader::MoveNextInCollection(::System::Runtime::Serialization::CollectionDataNode* dataNode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), "MoveNextInCollection", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::CollectionDataNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dataNode);
}
inline void System::Runtime::Serialization::ExtensionDataReader::MoveNextInISerializable(::System::Runtime::Serialization::ISerializableDataNode* dataNode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), "MoveNextInISerializable", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ISerializableDataNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dataNode);
}
inline void System::Runtime::Serialization::ExtensionDataReader::MoveNextInXml(::System::Runtime::Serialization::XmlDataNode* dataNode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), "MoveNextInXml", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlDataNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dataNode);
}
inline void System::Runtime::Serialization::ExtensionDataReader::MoveToDeserializedObject(::System::Runtime::Serialization::IDataNode* dataNode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), "MoveToDeserializedObject", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::IDataNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dataNode);
}
inline bool System::Runtime::Serialization::ExtensionDataReader::MoveToText(::System::Type* type, ::System::Runtime::Serialization::IDataNode* dataNode, bool isTypedNode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), "MoveToText", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::IDataNode*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, type, dataNode, isTypedNode);
}
inline void System::Runtime::Serialization::ExtensionDataReader::PushElement() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(),
                                                                             "PushElement", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Runtime::Serialization::ExtensionDataReader::PopElement() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(),
                                                                             "PopElement", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Runtime::Serialization::ExtensionDataReader::GrowElementsIfNeeded() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(),
                                                                             "GrowElementsIfNeeded", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::ElementData* System::Runtime::Serialization::ExtensionDataReader::GetNextElement() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(),
                                                                             "GetNextElement", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::ElementData*, false>(this, ___internal_method);
}
inline ::StringW System::Runtime::Serialization::ExtensionDataReader::GetPrefix(::StringW ns) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), "GetPrefix",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, ns);
}
inline void System::Runtime::Serialization::ExtensionDataReader::AddPrefix(::StringW prefix, ::StringW ns) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataReader*>::get(), "AddPrefix", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, prefix, ns);
}
inline ::System::Runtime::Serialization::ExtensionDataReader* System::Runtime::Serialization::ExtensionDataReader::New_ctor(::System::Runtime::Serialization::XmlObjectSerializerReadContext* context) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Serialization::ExtensionDataReader*>(context));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::ExtensionDataReader::ExtensionDataReader() {}
