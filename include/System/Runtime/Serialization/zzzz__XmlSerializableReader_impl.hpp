#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/XmlSerializableReader.hpp"
#include "System/Xml/zzzz__XmlReader_impl.hpp"
#include "System/Runtime/Serialization/zzzz__XmlSerializableReader_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlReaderDelegator_def.hpp"
#include "System/Xml/Schema/zzzz__IXmlSchemaInfo_def.hpp"
#include "System/Xml/Serialization/zzzz__IXmlTextParser_def.hpp"
#include "System/Xml/zzzz__IXmlLineInfo_def.hpp"
#include "System/Xml/zzzz__IXmlNamespaceResolver_def.hpp"
#include "System/Xml/zzzz__ReadState_def.hpp"
#include "System/Xml/zzzz__WhitespaceHandling_def.hpp"
#include "System/Xml/zzzz__XmlNameTable_def.hpp"
#include "System/Xml/zzzz__XmlNodeType_def.hpp"
#include "System/Xml/zzzz__XmlReaderSettings_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
#include "System/Xml/zzzz__XmlSpace_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::XmlSerializableReader.get_InnerReader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlReader* (::System::Runtime::Serialization::XmlSerializableReader::*)()>(
    &::System::Runtime::Serialization::XmlSerializableReader::get_InnerReader)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fc29dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(),
                                                                               "get_InnerReader", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlSerializableReader.BeginRead
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlSerializableReader::*)(
    ::System::Runtime::Serialization::XmlReaderDelegator*)>(&::System::Runtime::Serialization::XmlSerializableReader::BeginRead)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5fc29e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), "BeginRead", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlReaderDelegator*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlSerializableReader.EndRead
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlSerializableReader::*)()>(
    &::System::Runtime::Serialization::XmlSerializableReader::EndRead)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5fc2a88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(),
                                                                               "EndRead", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlSerializableReader.Read
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::XmlSerializableReader::*)()>(
    &::System::Runtime::Serialization::XmlSerializableReader::Read)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5fc2b58;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 50));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlSerializableReader.Close
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlSerializableReader::*)()>(
    &::System::Runtime::Serialization::XmlSerializableReader::Close)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5fc2c00;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 52));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlSerializableReader.get_Settings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlReaderSettings* (::System::Runtime::Serialization::XmlSerializableReader::*)()>(
    &::System::Runtime::Serialization::XmlSerializableReader::get_Settings)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5fc2c34;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlSerializableReader.get_NodeType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNodeType (::System::Runtime::Serialization::XmlSerializableReader::*)()>(
    &::System::Runtime::Serialization::XmlSerializableReader::get_NodeType)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5fc2c50;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlSerializableReader.get_Name
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Serialization::XmlSerializableReader::*)()>(
    &::System::Runtime::Serialization::XmlSerializableReader::get_Name)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5fc2c6c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlSerializableReader.get_LocalName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Serialization::XmlSerializableReader::*)()>(
    &::System::Runtime::Serialization::XmlSerializableReader::get_LocalName)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5fc2c88;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlSerializableReader.get_NamespaceURI
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Serialization::XmlSerializableReader::*)()>(
    &::System::Runtime::Serialization::XmlSerializableReader::get_NamespaceURI)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5fc2ca4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlSerializableReader.get_Prefix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Serialization::XmlSerializableReader::*)()>(
    &::System::Runtime::Serialization::XmlSerializableReader::get_Prefix)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5fc2cc0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlSerializableReader.get_Value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Serialization::XmlSerializableReader::*)()>(
    &::System::Runtime::Serialization::XmlSerializableReader::get_Value)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5fc2cdc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlSerializableReader.get_Depth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Runtime::Serialization::XmlSerializableReader::*)()>(
    &::System::Runtime::Serialization::XmlSerializableReader::get_Depth)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5fc2cf8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlSerializableReader.get_BaseURI
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Serialization::XmlSerializableReader::*)()>(
    &::System::Runtime::Serialization::XmlSerializableReader::get_BaseURI)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fc2d14;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlSerializableReader.get_IsEmptyElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::XmlSerializableReader::*)()>(
    &::System::Runtime::Serialization::XmlSerializableReader::get_IsEmptyElement)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fc2d34;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlSerializableReader.get_IsDefault
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::XmlSerializableReader::*)()>(
    &::System::Runtime::Serialization::XmlSerializableReader::get_IsDefault)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fc2d54;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlSerializableReader.get_QuoteChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (::System::Runtime::Serialization::XmlSerializableReader::*)()>(
    &::System::Runtime::Serialization::XmlSerializableReader::get_QuoteChar)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fc2d74;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlSerializableReader.get_XmlSpace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlSpace (::System::Runtime::Serialization::XmlSerializableReader::*)()>(
    &::System::Runtime::Serialization::XmlSerializableReader::get_XmlSpace)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fc2d94;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlSerializableReader.get_XmlLang
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Serialization::XmlSerializableReader::*)()>(
    &::System::Runtime::Serialization::XmlSerializableReader::get_XmlLang)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fc2db4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlSerializableReader.get_SchemaInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::IXmlSchemaInfo* (::System::Runtime::Serialization::XmlSerializableReader::*)()>(
    &::System::Runtime::Serialization::XmlSerializableReader::get_SchemaInfo)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fc2dd4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlSerializableReader.get_ValueType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::Runtime::Serialization::XmlSerializableReader::*)()>(
    &::System::Runtime::Serialization::XmlSerializableReader::get_ValueType)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fc2df4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlSerializableReader.get_AttributeCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Runtime::Serialization::XmlSerializableReader::*)()>(
    &::System::Runtime::Serialization::XmlSerializableReader::get_AttributeCount)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fc2e14;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 39));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlSerializableReader.get_EOF
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::XmlSerializableReader::*)()>(
    &::System::Runtime::Serialization::XmlSerializableReader::get_EOF)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fc2e34;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 51));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlSerializableReader.get_ReadState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::ReadState (::System::Runtime::Serialization::XmlSerializableReader::*)()>(
    &::System::Runtime::Serialization::XmlSerializableReader::get_ReadState)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fc2e54;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 53));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlSerializableReader.get_NameTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNameTable* (::System::Runtime::Serialization::XmlSerializableReader::*)()>(
    &::System::Runtime::Serialization::XmlSerializableReader::get_NameTable)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fc2e74;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 55));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlSerializableReader.get_CanResolveEntity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::XmlSerializableReader::*)()>(
    &::System::Runtime::Serialization::XmlSerializableReader::get_CanResolveEntity)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fc2e94;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 57));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlSerializableReader.get_CanReadValueChunk
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::XmlSerializableReader::*)()>(
    &::System::Runtime::Serialization::XmlSerializableReader::get_CanReadValueChunk)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fc2eb4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 61));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlSerializableReader.get_HasAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::XmlSerializableReader::*)()>(
    &::System::Runtime::Serialization::XmlSerializableReader::get_HasAttributes)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fc2ed4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 71));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlSerializableReader.GetAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Serialization::XmlSerializableReader::*)(::StringW)>(
    &::System::Runtime::Serialization::XmlSerializableReader::GetAttribute)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fc2ef4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 40));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlSerializableReader.GetAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Serialization::XmlSerializableReader::*)(::StringW, ::StringW)>(
    &::System::Runtime::Serialization::XmlSerializableReader::GetAttribute)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fc2f14;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 41));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlSerializableReader.GetAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Serialization::XmlSerializableReader::*)(int32_t)>(
    &::System::Runtime::Serialization::XmlSerializableReader::GetAttribute)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fc2f34;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 42));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlSerializableReader.MoveToAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::XmlSerializableReader::*)(::StringW)>(
    &::System::Runtime::Serialization::XmlSerializableReader::MoveToAttribute)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fc2f54;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 43));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlSerializableReader.MoveToAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::XmlSerializableReader::*)(::StringW, ::StringW)>(
    &::System::Runtime::Serialization::XmlSerializableReader::MoveToAttribute)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fc2f74;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 44));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlSerializableReader.MoveToAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlSerializableReader::*)(int32_t)>(
    &::System::Runtime::Serialization::XmlSerializableReader::MoveToAttribute)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fc2f94;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 45));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlSerializableReader.MoveToFirstAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::XmlSerializableReader::*)()>(
    &::System::Runtime::Serialization::XmlSerializableReader::MoveToFirstAttribute)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fc2fb4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 46));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlSerializableReader.MoveToNextAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::XmlSerializableReader::*)()>(
    &::System::Runtime::Serialization::XmlSerializableReader::MoveToNextAttribute)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fc2fd4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 47));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlSerializableReader.MoveToElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::XmlSerializableReader::*)()>(
    &::System::Runtime::Serialization::XmlSerializableReader::MoveToElement)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fc2ff4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 48));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlSerializableReader.LookupNamespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Serialization::XmlSerializableReader::*)(::StringW)>(
    &::System::Runtime::Serialization::XmlSerializableReader::LookupNamespace)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fc3014;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 56));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlSerializableReader.ReadAttributeValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::XmlSerializableReader::*)()>(
    &::System::Runtime::Serialization::XmlSerializableReader::ReadAttributeValue)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fc3034;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 49));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlSerializableReader.ResolveEntity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlSerializableReader::*)()>(
    &::System::Runtime::Serialization::XmlSerializableReader::ResolveEntity)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fc3054;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 58));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlSerializableReader.IsStartElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::XmlSerializableReader::*)()>(
    &::System::Runtime::Serialization::XmlSerializableReader::IsStartElement)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fc3074;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 68));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlSerializableReader.IsStartElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::XmlSerializableReader::*)(::StringW, ::StringW)>(
    &::System::Runtime::Serialization::XmlSerializableReader::IsStartElement)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fc3094;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 69));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlSerializableReader.MoveToContent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNodeType (::System::Runtime::Serialization::XmlSerializableReader::*)()>(
    &::System::Runtime::Serialization::XmlSerializableReader::MoveToContent)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fc30b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 64));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlSerializableReader.ReadContentAsObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Runtime::Serialization::XmlSerializableReader::*)()>(
    &::System::Runtime::Serialization::XmlSerializableReader::ReadContentAsObject)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fc30d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlSerializableReader.ReadContentAsBoolean
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::XmlSerializableReader::*)()>(
    &::System::Runtime::Serialization::XmlSerializableReader::ReadContentAsBoolean)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fc30f4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlSerializableReader.ReadContentAsDateTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::System::Runtime::Serialization::XmlSerializableReader::*)()>(
    &::System::Runtime::Serialization::XmlSerializableReader::ReadContentAsDateTime)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fc3114;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 23));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlSerializableReader.ReadContentAsDouble
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::System::Runtime::Serialization::XmlSerializableReader::*)()>(
    &::System::Runtime::Serialization::XmlSerializableReader::ReadContentAsDouble)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fc3134;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlSerializableReader.ReadContentAsInt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Runtime::Serialization::XmlSerializableReader::*)()>(
    &::System::Runtime::Serialization::XmlSerializableReader::ReadContentAsInt)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fc3154;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 27));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlSerializableReader.ReadContentAsLong
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::System::Runtime::Serialization::XmlSerializableReader::*)()>(
    &::System::Runtime::Serialization::XmlSerializableReader::ReadContentAsLong)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fc3174;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 28));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlSerializableReader.ReadContentAsString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Serialization::XmlSerializableReader::*)()>(
    &::System::Runtime::Serialization::XmlSerializableReader::ReadContentAsString)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fc3194;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 29));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlSerializableReader.ReadContentAs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::System::Runtime::Serialization::XmlSerializableReader::*)(::System::Type*, ::System::Xml::IXmlNamespaceResolver*)>(&::System::Runtime::Serialization::XmlSerializableReader::ReadContentAs)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fc31b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 30));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlSerializableReader.ReadContentAsBase64
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Runtime::Serialization::XmlSerializableReader::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(&::System::Runtime::Serialization::XmlSerializableReader::ReadContentAsBase64)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fc31d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 59));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlSerializableReader.ReadContentAsBinHex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Runtime::Serialization::XmlSerializableReader::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(&::System::Runtime::Serialization::XmlSerializableReader::ReadContentAsBinHex)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fc31f4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 60));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlSerializableReader.ReadValueChunk
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Runtime::Serialization::XmlSerializableReader::*)(
    ::ArrayW<char16_t, ::Array<char16_t>*>, int32_t, int32_t)>(&::System::Runtime::Serialization::XmlSerializableReader::ReadValueChunk)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fc3214;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 62));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlSerializableReader.ReadString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Serialization::XmlSerializableReader::*)()>(
    &::System::Runtime::Serialization::XmlSerializableReader::ReadString)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fc3234;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 63));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlSerializableReader.System_Xml_Serialization_IXmlTextParser_get_Normalized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::XmlSerializableReader::*)()>(
    &::System::Runtime::Serialization::XmlSerializableReader::System_Xml_Serialization_IXmlTextParser_get_Normalized)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5fc3254;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(),
                                                 "System.Xml.Serialization.IXmlTextParser.get_Normalized", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlSerializableReader.System_Xml_Serialization_IXmlTextParser_set_Normalized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlSerializableReader::*)(bool)>(
    &::System::Runtime::Serialization::XmlSerializableReader::System_Xml_Serialization_IXmlTextParser_set_Normalized)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5fc3318;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(),
                                                                               "System.Xml.Serialization.IXmlTextParser.set_Normalized", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlSerializableReader.System_Xml_Serialization_IXmlTextParser_get_WhitespaceHandling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::WhitespaceHandling (::System::Runtime::Serialization::XmlSerializableReader::*)()>(
    &::System::Runtime::Serialization::XmlSerializableReader::System_Xml_Serialization_IXmlTextParser_get_WhitespaceHandling)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5fc33f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(),
                                    "System.Xml.Serialization.IXmlTextParser.get_WhitespaceHandling", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlSerializableReader.System_Xml_Serialization_IXmlTextParser_set_WhitespaceHandling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlSerializableReader::*)(::System::Xml::WhitespaceHandling)>(
    &::System::Runtime::Serialization::XmlSerializableReader::System_Xml_Serialization_IXmlTextParser_set_WhitespaceHandling)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5fc34c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), "System.Xml.Serialization.IXmlTextParser.set_WhitespaceHandling",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::WhitespaceHandling>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlSerializableReader.System_Xml_IXmlLineInfo_HasLineInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::XmlSerializableReader::*)()>(
    &::System::Runtime::Serialization::XmlSerializableReader::System_Xml_IXmlLineInfo_HasLineInfo)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5fc35a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(),
                                                 "System.Xml.IXmlLineInfo.HasLineInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlSerializableReader.System_Xml_IXmlLineInfo_get_LineNumber
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Runtime::Serialization::XmlSerializableReader::*)()>(
    &::System::Runtime::Serialization::XmlSerializableReader::System_Xml_IXmlLineInfo_get_LineNumber)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5fc3664;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(),
                                                 "System.Xml.IXmlLineInfo.get_LineNumber", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlSerializableReader.System_Xml_IXmlLineInfo_get_LinePosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Runtime::Serialization::XmlSerializableReader::*)()>(
    &::System::Runtime::Serialization::XmlSerializableReader::System_Xml_IXmlLineInfo_get_LinePosition)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5fc372c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(),
                                                 "System.Xml.IXmlLineInfo.get_LinePosition", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlSerializableReader._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlSerializableReader::*)()>(
    &::System::Runtime::Serialization::XmlSerializableReader::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5fc37f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::Serialization::XmlReaderDelegator*& System::Runtime::Serialization::XmlSerializableReader::__cordl_internal_get_xmlReader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlReader;
}
constexpr ::System::Runtime::Serialization::XmlReaderDelegator* const& System::Runtime::Serialization::XmlSerializableReader::__cordl_internal_get_xmlReader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlReader;
}
constexpr void System::Runtime::Serialization::XmlSerializableReader::__cordl_internal_set_xmlReader(::System::Runtime::Serialization::XmlReaderDelegator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___xmlReader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Runtime::Serialization::XmlSerializableReader::__cordl_internal_get_startDepth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startDepth;
}
constexpr int32_t const& System::Runtime::Serialization::XmlSerializableReader::__cordl_internal_get_startDepth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startDepth;
}
constexpr void System::Runtime::Serialization::XmlSerializableReader::__cordl_internal_set_startDepth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___startDepth = value;
}
constexpr bool& System::Runtime::Serialization::XmlSerializableReader::__cordl_internal_get_isRootEmptyElement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isRootEmptyElement;
}
constexpr bool const& System::Runtime::Serialization::XmlSerializableReader::__cordl_internal_get_isRootEmptyElement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isRootEmptyElement;
}
constexpr void System::Runtime::Serialization::XmlSerializableReader::__cordl_internal_set_isRootEmptyElement(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isRootEmptyElement = value;
}
constexpr ::System::Xml::XmlReader*& System::Runtime::Serialization::XmlSerializableReader::__cordl_internal_get_innerReader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___innerReader;
}
constexpr ::System::Xml::XmlReader* const& System::Runtime::Serialization::XmlSerializableReader::__cordl_internal_get_innerReader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___innerReader;
}
constexpr void System::Runtime::Serialization::XmlSerializableReader::__cordl_internal_set_innerReader(::System::Xml::XmlReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___innerReader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Xml::XmlReader* System::Runtime::Serialization::XmlSerializableReader::get_InnerReader() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(),
                                                                             "get_InnerReader", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlReader*, false>(this, ___internal_method);
}
inline void System::Runtime::Serialization::XmlSerializableReader::BeginRead(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), "BeginRead", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlReaderDelegator*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xmlReader);
}
inline void System::Runtime::Serialization::XmlSerializableReader::EndRead() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(),
                                                                             "EndRead", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::XmlSerializableReader::Read() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 50)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Runtime::Serialization::XmlSerializableReader::Close() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 52)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Xml::XmlReaderSettings* System::Runtime::Serialization::XmlSerializableReader::get_Settings() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlReaderSettings*, false>(this, ___internal_method);
}
inline ::System::Xml::XmlNodeType System::Runtime::Serialization::XmlSerializableReader::get_NodeType() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNodeType, false>(this, ___internal_method);
}
inline ::StringW System::Runtime::Serialization::XmlSerializableReader::get_Name() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Runtime::Serialization::XmlSerializableReader::get_LocalName() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Runtime::Serialization::XmlSerializableReader::get_NamespaceURI() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Runtime::Serialization::XmlSerializableReader::get_Prefix() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Runtime::Serialization::XmlSerializableReader::get_Value() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline int32_t System::Runtime::Serialization::XmlSerializableReader::get_Depth() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::StringW System::Runtime::Serialization::XmlSerializableReader::get_BaseURI() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::XmlSerializableReader::get_IsEmptyElement() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::XmlSerializableReader::get_IsDefault() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline char16_t System::Runtime::Serialization::XmlSerializableReader::get_QuoteChar() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<char16_t, false>(this, ___internal_method);
}
inline ::System::Xml::XmlSpace System::Runtime::Serialization::XmlSerializableReader::get_XmlSpace() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlSpace, false>(this, ___internal_method);
}
inline ::StringW System::Runtime::Serialization::XmlSerializableReader::get_XmlLang() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Xml::Schema::IXmlSchemaInfo* System::Runtime::Serialization::XmlSerializableReader::get_SchemaInfo() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::IXmlSchemaInfo*, false>(this, ___internal_method);
}
inline ::System::Type* System::Runtime::Serialization::XmlSerializableReader::get_ValueType() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline int32_t System::Runtime::Serialization::XmlSerializableReader::get_AttributeCount() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 39)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::XmlSerializableReader::get_EOF() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 51)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Xml::ReadState System::Runtime::Serialization::XmlSerializableReader::get_ReadState() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 53)));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::ReadState, false>(this, ___internal_method);
}
inline ::System::Xml::XmlNameTable* System::Runtime::Serialization::XmlSerializableReader::get_NameTable() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 55)));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNameTable*, false>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::XmlSerializableReader::get_CanResolveEntity() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 57)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::XmlSerializableReader::get_CanReadValueChunk() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 61)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::XmlSerializableReader::get_HasAttributes() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 71)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW System::Runtime::Serialization::XmlSerializableReader::GetAttribute(::StringW name) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 40)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, name);
}
inline ::StringW System::Runtime::Serialization::XmlSerializableReader::GetAttribute(::StringW name, ::StringW namespaceURI) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 41)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, name, namespaceURI);
}
inline ::StringW System::Runtime::Serialization::XmlSerializableReader::GetAttribute(int32_t i) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 42)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, i);
}
inline bool System::Runtime::Serialization::XmlSerializableReader::MoveToAttribute(::StringW name) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 43)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, name);
}
inline bool System::Runtime::Serialization::XmlSerializableReader::MoveToAttribute(::StringW name, ::StringW ns) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 44)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, name, ns);
}
inline void System::Runtime::Serialization::XmlSerializableReader::MoveToAttribute(int32_t i) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 45)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, i);
}
inline bool System::Runtime::Serialization::XmlSerializableReader::MoveToFirstAttribute() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 46)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::XmlSerializableReader::MoveToNextAttribute() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 47)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::XmlSerializableReader::MoveToElement() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 48)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW System::Runtime::Serialization::XmlSerializableReader::LookupNamespace(::StringW prefix) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 56)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, prefix);
}
inline bool System::Runtime::Serialization::XmlSerializableReader::ReadAttributeValue() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 49)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Runtime::Serialization::XmlSerializableReader::ResolveEntity() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 58)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::XmlSerializableReader::IsStartElement() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 68)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::XmlSerializableReader::IsStartElement(::StringW localname, ::StringW ns) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 69)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, localname, ns);
}
inline ::System::Xml::XmlNodeType System::Runtime::Serialization::XmlSerializableReader::MoveToContent() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 64)));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNodeType, false>(this, ___internal_method);
}
inline ::System::Object* System::Runtime::Serialization::XmlSerializableReader::ReadContentAsObject() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::XmlSerializableReader::ReadContentAsBoolean() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 22)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::DateTime System::Runtime::Serialization::XmlSerializableReader::ReadContentAsDateTime() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 23)));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(this, ___internal_method);
}
inline double_t System::Runtime::Serialization::XmlSerializableReader::ReadContentAsDouble() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 24)));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline int32_t System::Runtime::Serialization::XmlSerializableReader::ReadContentAsInt() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 27)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int64_t System::Runtime::Serialization::XmlSerializableReader::ReadContentAsLong() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 28)));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline ::StringW System::Runtime::Serialization::XmlSerializableReader::ReadContentAsString() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 29)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Object* System::Runtime::Serialization::XmlSerializableReader::ReadContentAs(::System::Type* returnType, ::System::Xml::IXmlNamespaceResolver* namespaceResolver) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 30)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, returnType, namespaceResolver);
}
inline int32_t System::Runtime::Serialization::XmlSerializableReader::ReadContentAsBase64(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t index, int32_t count) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 59)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, buffer, index, count);
}
inline int32_t System::Runtime::Serialization::XmlSerializableReader::ReadContentAsBinHex(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t index, int32_t count) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 60)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, buffer, index, count);
}
inline int32_t System::Runtime::Serialization::XmlSerializableReader::ReadValueChunk(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 62)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, buffer, index, count);
}
inline ::StringW System::Runtime::Serialization::XmlSerializableReader::ReadString() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), 63)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::XmlSerializableReader::System_Xml_Serialization_IXmlTextParser_get_Normalized() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(),
                                               "System.Xml.Serialization.IXmlTextParser.get_Normalized", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Runtime::Serialization::XmlSerializableReader::System_Xml_Serialization_IXmlTextParser_set_Normalized(bool value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(),
                                                                             "System.Xml.Serialization.IXmlTextParser.set_Normalized", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Xml::WhitespaceHandling System::Runtime::Serialization::XmlSerializableReader::System_Xml_Serialization_IXmlTextParser_get_WhitespaceHandling() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(),
                                               "System.Xml.Serialization.IXmlTextParser.get_WhitespaceHandling", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::WhitespaceHandling, false>(this, ___internal_method);
}
inline void System::Runtime::Serialization::XmlSerializableReader::System_Xml_Serialization_IXmlTextParser_set_WhitespaceHandling(::System::Xml::WhitespaceHandling value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(), "System.Xml.Serialization.IXmlTextParser.set_WhitespaceHandling",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::WhitespaceHandling>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool System::Runtime::Serialization::XmlSerializableReader::System_Xml_IXmlLineInfo_HasLineInfo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(),
                                               "System.Xml.IXmlLineInfo.HasLineInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t System::Runtime::Serialization::XmlSerializableReader::System_Xml_IXmlLineInfo_get_LineNumber() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(),
                                               "System.Xml.IXmlLineInfo.get_LineNumber", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::Runtime::Serialization::XmlSerializableReader::System_Xml_IXmlLineInfo_get_LinePosition() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(),
                                               "System.Xml.IXmlLineInfo.get_LinePosition", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void System::Runtime::Serialization::XmlSerializableReader::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableReader*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::XmlSerializableReader* System::Runtime::Serialization::XmlSerializableReader::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Serialization::XmlSerializableReader*>());
}
/// @brief Convert operator to "::System::Xml::IXmlLineInfo"
constexpr System::Runtime::Serialization::XmlSerializableReader::operator ::System::Xml::IXmlLineInfo*() noexcept {
  return static_cast<::System::Xml::IXmlLineInfo*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Xml::IXmlLineInfo"
constexpr ::System::Xml::IXmlLineInfo* System::Runtime::Serialization::XmlSerializableReader::i___System__Xml__IXmlLineInfo() noexcept {
  return static_cast<::System::Xml::IXmlLineInfo*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Xml::Serialization::IXmlTextParser"
constexpr System::Runtime::Serialization::XmlSerializableReader::operator ::System::Xml::Serialization::IXmlTextParser*() noexcept {
  return static_cast<::System::Xml::Serialization::IXmlTextParser*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Xml::Serialization::IXmlTextParser"
constexpr ::System::Xml::Serialization::IXmlTextParser* System::Runtime::Serialization::XmlSerializableReader::i___System__Xml__Serialization__IXmlTextParser() noexcept {
  return static_cast<::System::Xml::Serialization::IXmlTextParser*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::XmlSerializableReader::XmlSerializableReader() {}
