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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlReaderDelegator::*)(::System::Xml::XmlReader*)>(
    &::System::Runtime::Serialization::XmlReaderDelegator::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5fbe2b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.get_UnderlyingReader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlReader* (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::get_UnderlyingReader)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fbe368;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                               "get_UnderlyingReader", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.get_UnderlyingExtensionDataReader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::ExtensionDataReader* (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::get_UnderlyingExtensionDataReader)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5fbe370;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                 "get_UnderlyingExtensionDataReader", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.get_AttributeCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::get_AttributeCount)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5fbe3f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                               "get_AttributeCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.GetAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Serialization::XmlReaderDelegator::*)(::StringW)>(
    &::System::Runtime::Serialization::XmlReaderDelegator::GetAttribute)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5fbe420;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), "GetAttribute",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.GetAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Serialization::XmlReaderDelegator::*)(::StringW, ::StringW)>(
    &::System::Runtime::Serialization::XmlReaderDelegator::GetAttribute)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5fbe450;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), "GetAttribute", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.GetAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Serialization::XmlReaderDelegator::*)(int32_t)>(
    &::System::Runtime::Serialization::XmlReaderDelegator::GetAttribute)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5fbe480;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), "GetAttribute",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.get_IsEmptyElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::get_IsEmptyElement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fbe518;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                               "get_IsEmptyElement", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.IsNamespaceURI
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::XmlReaderDelegator::*)(::StringW)>(
    &::System::Runtime::Serialization::XmlReaderDelegator::IsNamespaceURI)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5fbe520;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), "IsNamespaceURI",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.IsLocalName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::XmlReaderDelegator::*)(::StringW)>(
    &::System::Runtime::Serialization::XmlReaderDelegator::IsLocalName)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5fbe574;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), "IsLocalName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.IsNamespaceUri
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::XmlReaderDelegator::*)(::System::Xml::XmlDictionaryString*)>(
    &::System::Runtime::Serialization::XmlReaderDelegator::IsNamespaceUri)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5fbe5c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), "IsNamespaceUri", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryString*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.IsLocalName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::XmlReaderDelegator::*)(::System::Xml::XmlDictionaryString*)>(
    &::System::Runtime::Serialization::XmlReaderDelegator::IsLocalName)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5fbe61c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), "IsLocalName", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryString*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.IndexOfLocalName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Runtime::Serialization::XmlReaderDelegator::*)(
    ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*>, ::System::Xml::XmlDictionaryString*)>(
    &::System::Runtime::Serialization::XmlReaderDelegator::IndexOfLocalName)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5fbe670;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), "IndexOfLocalName", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryString*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.IsStartElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::IsStartElement)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5fbe768;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                               "IsStartElement", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.IsStartElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::XmlReaderDelegator::*)(::StringW, ::StringW)>(
    &::System::Runtime::Serialization::XmlReaderDelegator::IsStartElement)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5fbe798;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), "IsStartElement", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.IsStartElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::XmlReaderDelegator::*)(
    ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*)>(&::System::Runtime::Serialization::XmlReaderDelegator::IsStartElement)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5fbe7c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), "IsStartElement", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryString*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryString*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.MoveToAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::XmlReaderDelegator::*)(::StringW)>(
    &::System::Runtime::Serialization::XmlReaderDelegator::MoveToAttribute)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5fbe830;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), "MoveToAttribute",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.MoveToAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::XmlReaderDelegator::*)(::StringW, ::StringW)>(
    &::System::Runtime::Serialization::XmlReaderDelegator::MoveToAttribute)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5fbe860;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), "MoveToAttribute", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.MoveToAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlReaderDelegator::*)(int32_t)>(
    &::System::Runtime::Serialization::XmlReaderDelegator::MoveToAttribute)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5fbe890;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), "MoveToAttribute",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.MoveToElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::MoveToElement)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5fbe920;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                               "MoveToElement", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.MoveToFirstAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::MoveToFirstAttribute)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5fbe950;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                               "MoveToFirstAttribute", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.MoveToNextAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::MoveToNextAttribute)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5fbe980;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                               "MoveToNextAttribute", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.get_NodeType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNodeType (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::get_NodeType)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5fbe9b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                               "get_NodeType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.Read
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::Read)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5fbe9dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                               "Read", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.MoveToContent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNodeType (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::MoveToContent)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5fbea60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                               "MoveToContent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadAttributeValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ReadAttributeValue)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5fbea90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                               "ReadAttributeValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadEndElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ReadEndElement)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5fbeac0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                               "ReadEndElement", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.CreateInvalidPrimitiveTypeException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (::System::Runtime::Serialization::XmlReaderDelegator::*)(::System::Type*)>(
    &::System::Runtime::Serialization::XmlReaderDelegator::CreateInvalidPrimitiveTypeException)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5fbeaec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), "CreateInvalidPrimitiveTypeException",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadElementContentAsAnyType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Runtime::Serialization::XmlReaderDelegator::*)(::System::Type*)>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ReadElementContentAsAnyType)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5fbeca4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), "ReadElementContentAsAnyType",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadContentAsAnyType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Runtime::Serialization::XmlReaderDelegator::*)(::System::Type*)>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ReadContentAsAnyType)> {
  constexpr static std::size_t size = 0x538;
  constexpr static std::size_t addrs = 0x5fbece0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), "ReadContentAsAnyType",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadExtensionData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::IDataNode* (
    ::System::Runtime::Serialization::XmlReaderDelegator::*)(::System::Type*)>(&::System::Runtime::Serialization::XmlReaderDelegator::ReadExtensionData)> {
  constexpr static std::size_t size = 0xa88;
  constexpr static std::size_t addrs = 0x5fbf8d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), "ReadExtensionData",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ThrowConversionException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlReaderDelegator::*)(::StringW, ::StringW)>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ThrowConversionException)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5fc0358;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), "ThrowConversionException", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ThrowNotAtElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ThrowNotAtElement)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5fc0424;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                               "ThrowNotAtElement", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadElementContentAsChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ReadElementContentAsChar)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5fc04cc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadContentAsChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ReadContentAsChar)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5fc05a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ToChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (::System::Runtime::Serialization::XmlReaderDelegator::*)(int32_t)>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ToChar)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5fc0518;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), "ToChar",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadElementContentAsString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ReadElementContentAsString)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5fc05bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                               "ReadElementContentAsString", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadContentAsString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ReadContentAsString)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5fbf550;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                               "ReadContentAsString", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadElementContentAsBoolean
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ReadElementContentAsBoolean)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5fc05ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                               "ReadElementContentAsBoolean", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadContentAsBoolean
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ReadContentAsBoolean)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5fbf218;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                               "ReadContentAsBoolean", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadElementContentAsFloat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ReadElementContentAsFloat)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5fc061c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                               "ReadElementContentAsFloat", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadContentAsSingle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ReadContentAsSingle)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5fbf3d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                               "ReadContentAsSingle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadElementContentAsDouble
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ReadElementContentAsDouble)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5fc064c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                               "ReadElementContentAsDouble", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadContentAsDouble
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ReadContentAsDouble)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5fbf450;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                               "ReadContentAsDouble", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadElementContentAsDecimal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ReadElementContentAsDecimal)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5fc067c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                               "ReadElementContentAsDecimal", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadContentAsDecimal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ReadContentAsDecimal)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5fbf4d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                               "ReadContentAsDecimal", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadElementContentAsBase64
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ReadElementContentAsBase64)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5fc06ac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadContentAsBase64
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ReadContentAsBase64)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5fc0890;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadContentAsBase64
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::System::Runtime::Serialization::XmlReaderDelegator::*)(::StringW)>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ReadContentAsBase64)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x5fc0704;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), "ReadContentAsBase64",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadElementContentAsDateTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ReadElementContentAsDateTime)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5fc0930;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadContentAsDateTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ReadContentAsDateTime)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5fc0960;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadElementContentAsInt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ReadElementContentAsInt)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5fc04e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                               "ReadElementContentAsInt", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadContentAsInt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ReadContentAsInt)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5fbf2d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                               "ReadContentAsInt", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadElementContentAsLong
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ReadElementContentAsLong)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5fc09e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                               "ReadElementContentAsLong", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadContentAsLong
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ReadContentAsLong)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5fbf350;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                               "ReadContentAsLong", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadElementContentAsShort
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ReadElementContentAsShort)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5fc0a10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                               "ReadElementContentAsShort", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadContentAsShort
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ReadContentAsShort)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5fbf2b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                               "ReadContentAsShort", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ToShort
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (::System::Runtime::Serialization::XmlReaderDelegator::*)(int32_t)>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ToShort)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5fc0a2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), "ToShort",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadElementContentAsUnsignedByte
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ReadElementContentAsUnsignedByte)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5fc0ab4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                 "ReadElementContentAsUnsignedByte", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadContentAsUnsignedByte
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ReadContentAsUnsignedByte)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5fbf298;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                               "ReadContentAsUnsignedByte", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ToByte
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (::System::Runtime::Serialization::XmlReaderDelegator::*)(int32_t)>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ToByte)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5fc0ad0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), "ToByte",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadElementContentAsSignedByte
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int8_t (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ReadElementContentAsSignedByte)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5fc0b58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                               "ReadElementContentAsSignedByte", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadContentAsSignedByte
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int8_t (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ReadContentAsSignedByte)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5fbf58c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                               "ReadContentAsSignedByte", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ToSByte
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int8_t (::System::Runtime::Serialization::XmlReaderDelegator::*)(int32_t)>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ToSByte)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5fc0b74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), "ToSByte",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadElementContentAsUnsignedInt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ReadElementContentAsUnsignedInt)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5fc0bfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                 "ReadElementContentAsUnsignedInt", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadContentAsUnsignedInt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ReadContentAsUnsignedInt)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5fbf5c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                               "ReadContentAsUnsignedInt", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ToUInt32
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::System::Runtime::Serialization::XmlReaderDelegator::*)(int64_t)>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ToUInt32)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5fc0c18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), "ToUInt32",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadElementContentAsUnsignedLong
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ReadElementContentAsUnsignedLong)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5fc0ca0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadContentAsUnsignedLong
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ReadContentAsUnsignedLong)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5fc0d68;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadElementContentAsUnsignedShort
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ReadElementContentAsUnsignedShort)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5fc0e24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                 "ReadElementContentAsUnsignedShort", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadContentAsUnsignedShort
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ReadContentAsUnsignedShort)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5fbf5a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                               "ReadContentAsUnsignedShort", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ToUInt16
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (::System::Runtime::Serialization::XmlReaderDelegator::*)(int32_t)>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ToUInt16)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5fc0e40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), "ToUInt16",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadElementContentAsTimeSpan
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ReadElementContentAsTimeSpan)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5fc0ec8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                               "ReadElementContentAsTimeSpan", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadContentAsTimeSpan
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ReadContentAsTimeSpan)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5fbf5e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                               "ReadContentAsTimeSpan", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadElementContentAsGuid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Guid (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ReadElementContentAsGuid)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5fc0f54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                               "ReadElementContentAsGuid", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadContentAsGuid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Guid (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ReadContentAsGuid)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5fbf660;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                               "ReadContentAsGuid", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadElementContentAsUri
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Uri* (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ReadElementContentAsUri)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5fc108c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                               "ReadElementContentAsUri", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadContentAsUri
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Uri* (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ReadContentAsUri)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5fbf78c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                               "ReadContentAsUri", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadElementContentAsQName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlQualifiedName* (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ReadElementContentAsQName)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5fc11dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                               "ReadElementContentAsQName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ReadContentAsQName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlQualifiedName* (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ReadContentAsQName)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5fc1218;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.ParseQualifiedName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlQualifiedName* (::System::Runtime::Serialization::XmlReaderDelegator::*)(::StringW)>(
    &::System::Runtime::Serialization::XmlReaderDelegator::ParseQualifiedName)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5fc1234;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), "ParseQualifiedName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.CheckExpectedArrayLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlReaderDelegator::*)(
    ::System::Runtime::Serialization::XmlObjectSerializerReadContext*, int32_t)>(&::System::Runtime::Serialization::XmlReaderDelegator::CheckExpectedArrayLength)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5fc12fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), "CheckExpectedArrayLength", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.GetArrayLengthQuota
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Runtime::Serialization::XmlReaderDelegator::*)(
    ::System::Runtime::Serialization::XmlObjectSerializerReadContext*)>(&::System::Runtime::Serialization::XmlReaderDelegator::GetArrayLengthQuota)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5fc1318;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), "GetArrayLengthQuota", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.CheckActualArrayLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlReaderDelegator::*)(
    int32_t, int32_t, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*)>(&::System::Runtime::Serialization::XmlReaderDelegator::CheckActualArrayLength)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5fc13e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), "CheckActualArrayLength", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryString*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryString*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.TryReadBooleanArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::XmlReaderDelegator::*)(
    ::System::Runtime::Serialization::XmlObjectSerializerReadContext*, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*, int32_t, ::ByRef<::ArrayW<bool, ::Array<bool>*>>)>(
    &::System::Runtime::Serialization::XmlReaderDelegator::TryReadBooleanArray)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x5fc14e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), "TryReadBooleanArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryString*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryString*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<bool, ::Array<bool>*>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.TryReadDateTimeArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::XmlReaderDelegator::*)(
    ::System::Runtime::Serialization::XmlObjectSerializerReadContext*, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*, int32_t,
    ::ByRef<::ArrayW<::System::DateTime, ::Array<::System::DateTime>*>>)>(&::System::Runtime::Serialization::XmlReaderDelegator::TryReadDateTimeArray)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x5fc1698;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), "TryReadDateTimeArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryString*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryString*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<::System::DateTime, ::Array<::System::DateTime>*>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.TryReadDecimalArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::XmlReaderDelegator::*)(
    ::System::Runtime::Serialization::XmlObjectSerializerReadContext*, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*, int32_t,
    ::ByRef<::ArrayW<::System::Decimal, ::Array<::System::Decimal>*>>)>(&::System::Runtime::Serialization::XmlReaderDelegator::TryReadDecimalArray)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x5fc1850;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), "TryReadDecimalArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryString*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryString*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<::System::Decimal, ::Array<::System::Decimal>*>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.TryReadInt32Array
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::XmlReaderDelegator::*)(
    ::System::Runtime::Serialization::XmlObjectSerializerReadContext*, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*, int32_t,
    ::ByRef<::ArrayW<int32_t, ::Array<int32_t>*>>)>(&::System::Runtime::Serialization::XmlReaderDelegator::TryReadInt32Array)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x5fc1a08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), "TryReadInt32Array", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryString*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryString*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<int32_t, ::Array<int32_t>*>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.TryReadInt64Array
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::XmlReaderDelegator::*)(
    ::System::Runtime::Serialization::XmlObjectSerializerReadContext*, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*, int32_t,
    ::ByRef<::ArrayW<int64_t, ::Array<int64_t>*>>)>(&::System::Runtime::Serialization::XmlReaderDelegator::TryReadInt64Array)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x5fc1bc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), "TryReadInt64Array", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryString*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryString*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<int64_t, ::Array<int64_t>*>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.TryReadSingleArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::XmlReaderDelegator::*)(
    ::System::Runtime::Serialization::XmlObjectSerializerReadContext*, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*, int32_t,
    ::ByRef<::ArrayW<float_t, ::Array<float_t>*>>)>(&::System::Runtime::Serialization::XmlReaderDelegator::TryReadSingleArray)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x5fc1d78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), "TryReadSingleArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryString*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryString*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<float_t, ::Array<float_t>*>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.TryReadDoubleArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::XmlReaderDelegator::*)(
    ::System::Runtime::Serialization::XmlObjectSerializerReadContext*, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*, int32_t,
    ::ByRef<::ArrayW<double_t, ::Array<double_t>*>>)>(&::System::Runtime::Serialization::XmlReaderDelegator::TryReadDoubleArray)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x5fc1f30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), "TryReadDoubleArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryString*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryString*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<double_t, ::Array<double_t>*>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.GetNamespacesInScope
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* (
    ::System::Runtime::Serialization::XmlReaderDelegator::*)(::System::Xml::XmlNamespaceScope)>(&::System::Runtime::Serialization::XmlReaderDelegator::GetNamespacesInScope)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5fc20e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), "GetNamespacesInScope", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNamespaceScope>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.HasLineInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::HasLineInfo)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5fc2200;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                               "HasLineInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.get_LineNumber
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::get_LineNumber)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5fc22b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                               "get_LineNumber", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.get_LinePosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::get_LinePosition)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5fc2374;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                               "get_LinePosition", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.get_Normalized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::get_Normalized)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5fc2430;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                               "get_Normalized", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.set_Normalized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlReaderDelegator::*)(bool)>(
    &::System::Runtime::Serialization::XmlReaderDelegator::set_Normalized)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5fc2548;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), "set_Normalized",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.get_WhitespaceHandling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::WhitespaceHandling (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::get_WhitespaceHandling)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5fc2684;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                               "get_WhitespaceHandling", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.set_WhitespaceHandling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlReaderDelegator::*)(::System::Xml::WhitespaceHandling)>(
    &::System::Runtime::Serialization::XmlReaderDelegator::set_WhitespaceHandling)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5fc27a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), "set_WhitespaceHandling", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::WhitespaceHandling>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.get_Name
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::get_Name)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5fc28dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                               "get_Name", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.get_LocalName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::get_LocalName)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5fbe74c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                               "get_LocalName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.get_NamespaceURI
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::get_NamespaceURI)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5fc28f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                               "get_NamespaceURI", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.get_Value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::get_Value)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5fc2914;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                               "get_Value", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.get_ValueType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::get_ValueType)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fc2930;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                               "get_ValueType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.get_Depth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::get_Depth)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5fc2950;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                               "get_Depth", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.LookupNamespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Serialization::XmlReaderDelegator::*)(::StringW)>(
    &::System::Runtime::Serialization::XmlReaderDelegator::LookupNamespace)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fc296c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), "LookupNamespace",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.get_EOF
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::get_EOF)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fc298c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                               "get_EOF", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlReaderDelegator.Skip
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlReaderDelegator::*)()>(
    &::System::Runtime::Serialization::XmlReaderDelegator::Skip)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5fc29ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                               "Skip", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___reader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___dictionaryReader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader);
}
inline ::System::Xml::XmlReader* System::Runtime::Serialization::XmlReaderDelegator::get_UnderlyingReader() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                             "get_UnderlyingReader", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlReader*, false>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::ExtensionDataReader* System::Runtime::Serialization::XmlReaderDelegator::get_UnderlyingExtensionDataReader() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                               "get_UnderlyingExtensionDataReader", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::ExtensionDataReader*, false>(this, ___internal_method);
}
inline int32_t System::Runtime::Serialization::XmlReaderDelegator::get_AttributeCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                             "get_AttributeCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::StringW System::Runtime::Serialization::XmlReaderDelegator::GetAttribute(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), "GetAttribute",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, name);
}
inline ::StringW System::Runtime::Serialization::XmlReaderDelegator::GetAttribute(::StringW name, ::StringW namespaceUri) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), "GetAttribute", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, name, namespaceUri);
}
inline ::StringW System::Runtime::Serialization::XmlReaderDelegator::GetAttribute(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), "GetAttribute",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, i);
}
inline bool System::Runtime::Serialization::XmlReaderDelegator::get_IsEmptyElement() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                             "get_IsEmptyElement", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::XmlReaderDelegator::IsNamespaceURI(::StringW ns) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), "IsNamespaceURI",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, ns);
}
inline bool System::Runtime::Serialization::XmlReaderDelegator::IsLocalName(::StringW localName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), "IsLocalName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, localName);
}
inline bool System::Runtime::Serialization::XmlReaderDelegator::IsNamespaceUri(::System::Xml::XmlDictionaryString* ns) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), "IsNamespaceUri", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryString*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, ns);
}
inline bool System::Runtime::Serialization::XmlReaderDelegator::IsLocalName(::System::Xml::XmlDictionaryString* localName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), "IsLocalName", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryString*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, localName);
}
inline int32_t System::Runtime::Serialization::XmlReaderDelegator::IndexOfLocalName(::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*> localNames,
                                                                                    ::System::Xml::XmlDictionaryString* ns) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), "IndexOfLocalName", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryString*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, localNames, ns);
}
inline bool System::Runtime::Serialization::XmlReaderDelegator::IsStartElement() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                             "IsStartElement", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::XmlReaderDelegator::IsStartElement(::StringW localname, ::StringW ns) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), "IsStartElement", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, localname, ns);
}
inline bool System::Runtime::Serialization::XmlReaderDelegator::IsStartElement(::System::Xml::XmlDictionaryString* localname, ::System::Xml::XmlDictionaryString* ns) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), "IsStartElement", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryString*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryString*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, localname, ns);
}
inline bool System::Runtime::Serialization::XmlReaderDelegator::MoveToAttribute(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), "MoveToAttribute",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, name);
}
inline bool System::Runtime::Serialization::XmlReaderDelegator::MoveToAttribute(::StringW name, ::StringW ns) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), "MoveToAttribute", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, name, ns);
}
inline void System::Runtime::Serialization::XmlReaderDelegator::MoveToAttribute(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), "MoveToAttribute",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, i);
}
inline bool System::Runtime::Serialization::XmlReaderDelegator::MoveToElement() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                             "MoveToElement", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::XmlReaderDelegator::MoveToFirstAttribute() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                             "MoveToFirstAttribute", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::XmlReaderDelegator::MoveToNextAttribute() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                             "MoveToNextAttribute", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Xml::XmlNodeType System::Runtime::Serialization::XmlReaderDelegator::get_NodeType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                             "get_NodeType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNodeType, false>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::XmlReaderDelegator::Read() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                             "Read", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Xml::XmlNodeType System::Runtime::Serialization::XmlReaderDelegator::MoveToContent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                             "MoveToContent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNodeType, false>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::XmlReaderDelegator::ReadAttributeValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                             "ReadAttributeValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Runtime::Serialization::XmlReaderDelegator::ReadEndElement() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                             "ReadEndElement", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Exception* System::Runtime::Serialization::XmlReaderDelegator::CreateInvalidPrimitiveTypeException(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), "CreateInvalidPrimitiveTypeException",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(this, ___internal_method, type);
}
inline ::System::Object* System::Runtime::Serialization::XmlReaderDelegator::ReadElementContentAsAnyType(::System::Type* valueType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), "ReadElementContentAsAnyType",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, valueType);
}
inline ::System::Object* System::Runtime::Serialization::XmlReaderDelegator::ReadContentAsAnyType(::System::Type* valueType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), "ReadContentAsAnyType",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, valueType);
}
inline ::System::Runtime::Serialization::IDataNode* System::Runtime::Serialization::XmlReaderDelegator::ReadExtensionData(::System::Type* valueType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), "ReadExtensionData",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::IDataNode*, false>(this, ___internal_method, valueType);
}
inline void System::Runtime::Serialization::XmlReaderDelegator::ThrowConversionException(::StringW value, ::StringW type) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), "ThrowConversionException", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value, type);
}
inline void System::Runtime::Serialization::XmlReaderDelegator::ThrowNotAtElement() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                             "ThrowNotAtElement", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline char16_t System::Runtime::Serialization::XmlReaderDelegator::ReadElementContentAsChar() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<char16_t, false>(this, ___internal_method);
}
inline char16_t System::Runtime::Serialization::XmlReaderDelegator::ReadContentAsChar() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<char16_t, false>(this, ___internal_method);
}
inline char16_t System::Runtime::Serialization::XmlReaderDelegator::ToChar(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), "ToChar",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<char16_t, false>(this, ___internal_method, value);
}
inline ::StringW System::Runtime::Serialization::XmlReaderDelegator::ReadElementContentAsString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                             "ReadElementContentAsString", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Runtime::Serialization::XmlReaderDelegator::ReadContentAsString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                             "ReadContentAsString", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::XmlReaderDelegator::ReadElementContentAsBoolean() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                             "ReadElementContentAsBoolean", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::XmlReaderDelegator::ReadContentAsBoolean() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                             "ReadContentAsBoolean", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline float_t System::Runtime::Serialization::XmlReaderDelegator::ReadElementContentAsFloat() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                             "ReadElementContentAsFloat", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t System::Runtime::Serialization::XmlReaderDelegator::ReadContentAsSingle() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                             "ReadContentAsSingle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline double_t System::Runtime::Serialization::XmlReaderDelegator::ReadElementContentAsDouble() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                             "ReadElementContentAsDouble", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline double_t System::Runtime::Serialization::XmlReaderDelegator::ReadContentAsDouble() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                             "ReadContentAsDouble", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline ::System::Decimal System::Runtime::Serialization::XmlReaderDelegator::ReadElementContentAsDecimal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                             "ReadElementContentAsDecimal", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal, false>(this, ___internal_method);
}
inline ::System::Decimal System::Runtime::Serialization::XmlReaderDelegator::ReadContentAsDecimal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                             "ReadContentAsDecimal", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> System::Runtime::Serialization::XmlReaderDelegator::ReadElementContentAsBase64() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> System::Runtime::Serialization::XmlReaderDelegator::ReadContentAsBase64() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> System::Runtime::Serialization::XmlReaderDelegator::ReadContentAsBase64(::StringW str) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), "ReadContentAsBase64",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, str);
}
inline ::System::DateTime System::Runtime::Serialization::XmlReaderDelegator::ReadElementContentAsDateTime() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(this, ___internal_method);
}
inline ::System::DateTime System::Runtime::Serialization::XmlReaderDelegator::ReadContentAsDateTime() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(this, ___internal_method);
}
inline int32_t System::Runtime::Serialization::XmlReaderDelegator::ReadElementContentAsInt() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                             "ReadElementContentAsInt", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::Runtime::Serialization::XmlReaderDelegator::ReadContentAsInt() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                             "ReadContentAsInt", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int64_t System::Runtime::Serialization::XmlReaderDelegator::ReadElementContentAsLong() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                             "ReadElementContentAsLong", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline int64_t System::Runtime::Serialization::XmlReaderDelegator::ReadContentAsLong() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                             "ReadContentAsLong", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline int16_t System::Runtime::Serialization::XmlReaderDelegator::ReadElementContentAsShort() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                             "ReadElementContentAsShort", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int16_t, false>(this, ___internal_method);
}
inline int16_t System::Runtime::Serialization::XmlReaderDelegator::ReadContentAsShort() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                             "ReadContentAsShort", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int16_t, false>(this, ___internal_method);
}
inline int16_t System::Runtime::Serialization::XmlReaderDelegator::ToShort(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), "ToShort",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int16_t, false>(this, ___internal_method, value);
}
inline uint8_t System::Runtime::Serialization::XmlReaderDelegator::ReadElementContentAsUnsignedByte() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                             "ReadElementContentAsUnsignedByte", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(this, ___internal_method);
}
inline uint8_t System::Runtime::Serialization::XmlReaderDelegator::ReadContentAsUnsignedByte() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                             "ReadContentAsUnsignedByte", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(this, ___internal_method);
}
inline uint8_t System::Runtime::Serialization::XmlReaderDelegator::ToByte(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), "ToByte",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(this, ___internal_method, value);
}
inline int8_t System::Runtime::Serialization::XmlReaderDelegator::ReadElementContentAsSignedByte() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                             "ReadElementContentAsSignedByte", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int8_t, false>(this, ___internal_method);
}
inline int8_t System::Runtime::Serialization::XmlReaderDelegator::ReadContentAsSignedByte() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                             "ReadContentAsSignedByte", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int8_t, false>(this, ___internal_method);
}
inline int8_t System::Runtime::Serialization::XmlReaderDelegator::ToSByte(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), "ToSByte",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int8_t, false>(this, ___internal_method, value);
}
inline uint32_t System::Runtime::Serialization::XmlReaderDelegator::ReadElementContentAsUnsignedInt() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                             "ReadElementContentAsUnsignedInt", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline uint32_t System::Runtime::Serialization::XmlReaderDelegator::ReadContentAsUnsignedInt() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                             "ReadContentAsUnsignedInt", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline uint32_t System::Runtime::Serialization::XmlReaderDelegator::ToUInt32(int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), "ToUInt32",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, value);
}
inline uint64_t System::Runtime::Serialization::XmlReaderDelegator::ReadElementContentAsUnsignedLong() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(this, ___internal_method);
}
inline uint64_t System::Runtime::Serialization::XmlReaderDelegator::ReadContentAsUnsignedLong() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(this, ___internal_method);
}
inline uint16_t System::Runtime::Serialization::XmlReaderDelegator::ReadElementContentAsUnsignedShort() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                               "ReadElementContentAsUnsignedShort", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint16_t, false>(this, ___internal_method);
}
inline uint16_t System::Runtime::Serialization::XmlReaderDelegator::ReadContentAsUnsignedShort() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                             "ReadContentAsUnsignedShort", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint16_t, false>(this, ___internal_method);
}
inline uint16_t System::Runtime::Serialization::XmlReaderDelegator::ToUInt16(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), "ToUInt16",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint16_t, false>(this, ___internal_method, value);
}
inline ::System::TimeSpan System::Runtime::Serialization::XmlReaderDelegator::ReadElementContentAsTimeSpan() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                             "ReadElementContentAsTimeSpan", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(this, ___internal_method);
}
inline ::System::TimeSpan System::Runtime::Serialization::XmlReaderDelegator::ReadContentAsTimeSpan() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                             "ReadContentAsTimeSpan", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(this, ___internal_method);
}
inline ::System::Guid System::Runtime::Serialization::XmlReaderDelegator::ReadElementContentAsGuid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                             "ReadElementContentAsGuid", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Guid, false>(this, ___internal_method);
}
inline ::System::Guid System::Runtime::Serialization::XmlReaderDelegator::ReadContentAsGuid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                             "ReadContentAsGuid", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Guid, false>(this, ___internal_method);
}
inline ::System::Uri* System::Runtime::Serialization::XmlReaderDelegator::ReadElementContentAsUri() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                             "ReadElementContentAsUri", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Uri*, false>(this, ___internal_method);
}
inline ::System::Uri* System::Runtime::Serialization::XmlReaderDelegator::ReadContentAsUri() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                             "ReadContentAsUri", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Uri*, false>(this, ___internal_method);
}
inline ::System::Xml::XmlQualifiedName* System::Runtime::Serialization::XmlReaderDelegator::ReadElementContentAsQName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                             "ReadElementContentAsQName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlQualifiedName*, false>(this, ___internal_method);
}
inline ::System::Xml::XmlQualifiedName* System::Runtime::Serialization::XmlReaderDelegator::ReadContentAsQName() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlQualifiedName*, false>(this, ___internal_method);
}
inline ::System::Xml::XmlQualifiedName* System::Runtime::Serialization::XmlReaderDelegator::ParseQualifiedName(::StringW str) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), "ParseQualifiedName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlQualifiedName*, false>(this, ___internal_method, str);
}
inline void System::Runtime::Serialization::XmlReaderDelegator::CheckExpectedArrayLength(::System::Runtime::Serialization::XmlObjectSerializerReadContext* context, int32_t arrayLength) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), "CheckExpectedArrayLength", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, arrayLength);
}
inline int32_t System::Runtime::Serialization::XmlReaderDelegator::GetArrayLengthQuota(::System::Runtime::Serialization::XmlObjectSerializerReadContext* context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), "GetArrayLengthQuota", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, context);
}
inline void System::Runtime::Serialization::XmlReaderDelegator::CheckActualArrayLength(int32_t expectedLength, int32_t actualLength, ::System::Xml::XmlDictionaryString* itemName,
                                                                                       ::System::Xml::XmlDictionaryString* itemNamespace) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), "CheckActualArrayLength", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryString*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryString*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, expectedLength, actualLength, itemName, itemNamespace);
}
inline bool System::Runtime::Serialization::XmlReaderDelegator::TryReadBooleanArray(::System::Runtime::Serialization::XmlObjectSerializerReadContext* context,
                                                                                    ::System::Xml::XmlDictionaryString* itemName, ::System::Xml::XmlDictionaryString* itemNamespace,
                                                                                    int32_t arrayLength, ::ByRef<::ArrayW<bool, ::Array<bool>*>> array) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), "TryReadBooleanArray", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryString*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryString*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<bool, ::Array<bool>*>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, context, itemName, itemNamespace, arrayLength, array);
}
inline bool System::Runtime::Serialization::XmlReaderDelegator::TryReadDateTimeArray(::System::Runtime::Serialization::XmlObjectSerializerReadContext* context,
                                                                                     ::System::Xml::XmlDictionaryString* itemName, ::System::Xml::XmlDictionaryString* itemNamespace,
                                                                                     int32_t arrayLength, ::ByRef<::ArrayW<::System::DateTime, ::Array<::System::DateTime>*>> array) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), "TryReadDateTimeArray", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryString*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryString*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<::System::DateTime, ::Array<::System::DateTime>*>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, context, itemName, itemNamespace, arrayLength, array);
}
inline bool System::Runtime::Serialization::XmlReaderDelegator::TryReadDecimalArray(::System::Runtime::Serialization::XmlObjectSerializerReadContext* context,
                                                                                    ::System::Xml::XmlDictionaryString* itemName, ::System::Xml::XmlDictionaryString* itemNamespace,
                                                                                    int32_t arrayLength, ::ByRef<::ArrayW<::System::Decimal, ::Array<::System::Decimal>*>> array) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), "TryReadDecimalArray", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryString*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryString*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<::System::Decimal, ::Array<::System::Decimal>*>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, context, itemName, itemNamespace, arrayLength, array);
}
inline bool System::Runtime::Serialization::XmlReaderDelegator::TryReadInt32Array(::System::Runtime::Serialization::XmlObjectSerializerReadContext* context,
                                                                                  ::System::Xml::XmlDictionaryString* itemName, ::System::Xml::XmlDictionaryString* itemNamespace, int32_t arrayLength,
                                                                                  ::ByRef<::ArrayW<int32_t, ::Array<int32_t>*>> array) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), "TryReadInt32Array", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryString*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryString*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<int32_t, ::Array<int32_t>*>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, context, itemName, itemNamespace, arrayLength, array);
}
inline bool System::Runtime::Serialization::XmlReaderDelegator::TryReadInt64Array(::System::Runtime::Serialization::XmlObjectSerializerReadContext* context,
                                                                                  ::System::Xml::XmlDictionaryString* itemName, ::System::Xml::XmlDictionaryString* itemNamespace, int32_t arrayLength,
                                                                                  ::ByRef<::ArrayW<int64_t, ::Array<int64_t>*>> array) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), "TryReadInt64Array", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryString*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryString*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<int64_t, ::Array<int64_t>*>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, context, itemName, itemNamespace, arrayLength, array);
}
inline bool System::Runtime::Serialization::XmlReaderDelegator::TryReadSingleArray(::System::Runtime::Serialization::XmlObjectSerializerReadContext* context,
                                                                                   ::System::Xml::XmlDictionaryString* itemName, ::System::Xml::XmlDictionaryString* itemNamespace, int32_t arrayLength,
                                                                                   ::ByRef<::ArrayW<float_t, ::Array<float_t>*>> array) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), "TryReadSingleArray", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryString*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryString*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<float_t, ::Array<float_t>*>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, context, itemName, itemNamespace, arrayLength, array);
}
inline bool System::Runtime::Serialization::XmlReaderDelegator::TryReadDoubleArray(::System::Runtime::Serialization::XmlObjectSerializerReadContext* context,
                                                                                   ::System::Xml::XmlDictionaryString* itemName, ::System::Xml::XmlDictionaryString* itemNamespace, int32_t arrayLength,
                                                                                   ::ByRef<::ArrayW<double_t, ::Array<double_t>*>> array) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), "TryReadDoubleArray", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryString*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryString*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<double_t, ::Array<double_t>*>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, context, itemName, itemNamespace, arrayLength, array);
}
inline ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* System::Runtime::Serialization::XmlReaderDelegator::GetNamespacesInScope(::System::Xml::XmlNamespaceScope scope) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), "GetNamespacesInScope", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNamespaceScope>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*, false>(this, ___internal_method, scope);
}
inline bool System::Runtime::Serialization::XmlReaderDelegator::HasLineInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                             "HasLineInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t System::Runtime::Serialization::XmlReaderDelegator::get_LineNumber() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                             "get_LineNumber", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::Runtime::Serialization::XmlReaderDelegator::get_LinePosition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                             "get_LinePosition", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::XmlReaderDelegator::get_Normalized() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                             "get_Normalized", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Runtime::Serialization::XmlReaderDelegator::set_Normalized(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), "set_Normalized",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Xml::WhitespaceHandling System::Runtime::Serialization::XmlReaderDelegator::get_WhitespaceHandling() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                             "get_WhitespaceHandling", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::WhitespaceHandling, false>(this, ___internal_method);
}
inline void System::Runtime::Serialization::XmlReaderDelegator::set_WhitespaceHandling(::System::Xml::WhitespaceHandling value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), "set_WhitespaceHandling", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::WhitespaceHandling>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW System::Runtime::Serialization::XmlReaderDelegator::get_Name() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                             "get_Name", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Runtime::Serialization::XmlReaderDelegator::get_LocalName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                             "get_LocalName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Runtime::Serialization::XmlReaderDelegator::get_NamespaceURI() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                             "get_NamespaceURI", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Runtime::Serialization::XmlReaderDelegator::get_Value() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                             "get_Value", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Type* System::Runtime::Serialization::XmlReaderDelegator::get_ValueType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                             "get_ValueType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline int32_t System::Runtime::Serialization::XmlReaderDelegator::get_Depth() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                             "get_Depth", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::StringW System::Runtime::Serialization::XmlReaderDelegator::LookupNamespace(::StringW prefix) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(), "LookupNamespace",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, prefix);
}
inline bool System::Runtime::Serialization::XmlReaderDelegator::get_EOF() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                             "get_EOF", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Runtime::Serialization::XmlReaderDelegator::Skip() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                             "Skip", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::XmlReaderDelegator* System::Runtime::Serialization::XmlReaderDelegator::New_ctor(::System::Xml::XmlReader* reader) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Serialization::XmlReaderDelegator*>(reader));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::XmlReaderDelegator::XmlReaderDelegator() {}
