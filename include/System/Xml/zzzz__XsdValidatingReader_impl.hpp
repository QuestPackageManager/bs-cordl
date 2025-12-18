#pragma once
// IWYU pragma private; include "System/Xml/XsdValidatingReader.hpp"
#include "System/Xml/zzzz__XmlCharType_impl.hpp"
#include "System/Xml/zzzz__XmlReader_impl.hpp"
#include "System/Xml/zzzz__XsdValidatingReader_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Xml/Schema/zzzz__IXmlSchemaInfo_def.hpp"
#include "System/Xml/Schema/zzzz__Parser_def.hpp"
#include "System/Xml/Schema/zzzz__ValidationEventHandler_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaAttribute_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaElement_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaInfo_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaObject_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSimpleType_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaType_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaValidator_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaValidity_def.hpp"
#include "System/Xml/Schema/zzzz__XmlValueGetter_def.hpp"
#include "System/Xml/zzzz__AttributePSVIInfo_def.hpp"
#include "System/Xml/zzzz__IXmlLineInfo_def.hpp"
#include "System/Xml/zzzz__IXmlNamespaceResolver_def.hpp"
#include "System/Xml/zzzz__ReadContentAsBinaryHelper_def.hpp"
#include "System/Xml/zzzz__ReadState_def.hpp"
#include "System/Xml/zzzz__ValidatingReaderNodeData_def.hpp"
#include "System/Xml/zzzz__XmlNameTable_def.hpp"
#include "System/Xml/zzzz__XmlNamespaceManager_def.hpp"
#include "System/Xml/zzzz__XmlNamespaceScope_def.hpp"
#include "System/Xml/zzzz__XmlNodeType_def.hpp"
#include "System/Xml/zzzz__XmlReaderSettings_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
#include "System/Xml/zzzz__XmlResolver_def.hpp"
#include "System/Xml/zzzz__XmlSpace_def.hpp"
#include "System/Xml/zzzz__XsdCachingReader_def.hpp"
#include "System/Xml/zzzz__XsdValidatingReader_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::XsdValidatingReader_ValidatingReaderState::XsdValidatingReader_ValidatingReaderState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::XsdValidatingReader_ValidatingReaderState::XsdValidatingReader_ValidatingReaderState() {}
constexpr ::System::Xml::XsdValidatingReader_ValidatingReaderState System::Xml::XsdValidatingReader_ValidatingReaderState::None{ static_cast<int32_t>(0x0) };
constexpr ::System::Xml::XsdValidatingReader_ValidatingReaderState System::Xml::XsdValidatingReader_ValidatingReaderState::Init{ static_cast<int32_t>(0x1) };
constexpr ::System::Xml::XsdValidatingReader_ValidatingReaderState System::Xml::XsdValidatingReader_ValidatingReaderState::Read{ static_cast<int32_t>(0x2) };
constexpr ::System::Xml::XsdValidatingReader_ValidatingReaderState System::Xml::XsdValidatingReader_ValidatingReaderState::OnDefaultAttribute{ static_cast<int32_t>(0xffffffff) };
constexpr ::System::Xml::XsdValidatingReader_ValidatingReaderState System::Xml::XsdValidatingReader_ValidatingReaderState::OnReadAttributeValue{ static_cast<int32_t>(0xfffffffe) };
constexpr ::System::Xml::XsdValidatingReader_ValidatingReaderState System::Xml::XsdValidatingReader_ValidatingReaderState::OnAttribute{ static_cast<int32_t>(0x3) };
constexpr ::System::Xml::XsdValidatingReader_ValidatingReaderState System::Xml::XsdValidatingReader_ValidatingReaderState::ClearAttributes{ static_cast<int32_t>(0x4) };
constexpr ::System::Xml::XsdValidatingReader_ValidatingReaderState System::Xml::XsdValidatingReader_ValidatingReaderState::ParseInlineSchema{ static_cast<int32_t>(0x5) };
constexpr ::System::Xml::XsdValidatingReader_ValidatingReaderState System::Xml::XsdValidatingReader_ValidatingReaderState::ReadAhead{ static_cast<int32_t>(0x6) };
constexpr ::System::Xml::XsdValidatingReader_ValidatingReaderState System::Xml::XsdValidatingReader_ValidatingReaderState::OnReadBinaryContent{ static_cast<int32_t>(0x7) };
constexpr ::System::Xml::XsdValidatingReader_ValidatingReaderState System::Xml::XsdValidatingReader_ValidatingReaderState::ReaderClosed{ static_cast<int32_t>(0x8) };
constexpr ::System::Xml::XsdValidatingReader_ValidatingReaderState System::Xml::XsdValidatingReader_ValidatingReaderState::_cordl_EOF{ static_cast<int32_t>(0x9) };
constexpr ::System::Xml::XsdValidatingReader_ValidatingReaderState System::Xml::XsdValidatingReader_ValidatingReaderState::Error{ static_cast<int32_t>(0xa) };
//  Writing Method size for method: ::System::Xml::XsdValidatingReader._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XsdValidatingReader::*)(
    ::System::Xml::XmlReader*, ::System::Xml::XmlResolver*, ::System::Xml::XmlReaderSettings*, ::System::Xml::Schema::XmlSchemaObject*)>(&::System::Xml::XsdValidatingReader::_ctor)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x60f8104;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlResolver*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReaderSettings*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Xml::XsdValidatingReader::*)(::System::Xml::XmlReader*, ::System::Xml::XmlResolver*, ::System::Xml::XmlReaderSettings*)>(&::System::Xml::XsdValidatingReader::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60f87c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlResolver*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReaderSettings*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::Init)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x60f8298;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), "Init",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.SetupValidator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XsdValidatingReader::*)(
    ::System::Xml::XmlReaderSettings*, ::System::Xml::XmlReader*, ::System::Xml::Schema::XmlSchemaObject*)>(&::System::Xml::XsdValidatingReader::SetupValidator)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x60f85d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), "SetupValidator", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReaderSettings*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReader*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.get_Settings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlReaderSettings* (::System::Xml::XsdValidatingReader::*)()>(
    &::System::Xml::XsdValidatingReader::get_Settings)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x60f87c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.get_NodeType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNodeType (::System::Xml::XsdValidatingReader::*)()>(
    &::System::Xml::XsdValidatingReader::get_NodeType)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x60f889c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.get_Name
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::get_Name)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x60f8924;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.get_LocalName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::get_LocalName)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x60f8a3c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.get_NamespaceURI
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::get_NamespaceURI)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x60f8a78;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.get_Prefix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::get_Prefix)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x60f8ab4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.get_Value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::get_Value)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x60f8af0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.get_Depth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::get_Depth)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x60f8b2c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.get_BaseURI
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::get_BaseURI)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x60f8b68;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.get_IsEmptyElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::get_IsEmptyElement)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x60f8b88;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.get_IsDefault
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::get_IsDefault)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x60f8ba8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.get_QuoteChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::get_QuoteChar)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x60f8bdc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.get_XmlSpace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlSpace (::System::Xml::XsdValidatingReader::*)()>(
    &::System::Xml::XsdValidatingReader::get_XmlSpace)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x60f8bfc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.get_XmlLang
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::get_XmlLang)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x60f8c1c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.get_SchemaInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::IXmlSchemaInfo* (::System::Xml::XsdValidatingReader::*)()>(
    &::System::Xml::XsdValidatingReader::get_SchemaInfo)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x60f8c3c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.get_ValueType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::get_ValueType)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x60f8c40;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.ReadContentAsObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Xml::XsdValidatingReader::*)()>(
    &::System::Xml::XsdValidatingReader::ReadContentAsObject)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x60f8d20;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.ReadContentAsBoolean
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::ReadContentAsBoolean)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x60f8e00;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.ReadContentAsDateTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::System::Xml::XsdValidatingReader::*)()>(
    &::System::Xml::XsdValidatingReader::ReadContentAsDateTime)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x60f9140;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 23));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.ReadContentAsDouble
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::ReadContentAsDouble)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x60f9404;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.ReadContentAsFloat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::ReadContentAsFloat)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x60f96c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 25));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.ReadContentAsDecimal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (::System::Xml::XsdValidatingReader::*)()>(
    &::System::Xml::XsdValidatingReader::ReadContentAsDecimal)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x60f998c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 26));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.ReadContentAsInt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::ReadContentAsInt)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x60f9c50;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 27));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.ReadContentAsLong
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::ReadContentAsLong)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x60f9f14;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 28));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.ReadContentAsString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::ReadContentAsString)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x60fa1d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 29));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.ReadContentAs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Xml::XsdValidatingReader::*)(::System::Type*, ::System::Xml::IXmlNamespaceResolver*)>(
    &::System::Xml::XsdValidatingReader::ReadContentAs)> {
  constexpr static std::size_t size = 0x394;
  constexpr static std::size_t addrs = 0x60fa460;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 30));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.ReadElementContentAsBoolean
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::ReadElementContentAsBoolean)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x60faa10;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 31));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.ReadElementContentAsDateTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::System::Xml::XsdValidatingReader::*)()>(
    &::System::Xml::XsdValidatingReader::ReadElementContentAsDateTime)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x60fac7c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 32));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.ReadElementContentAsDouble
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::System::Xml::XsdValidatingReader::*)()>(
    &::System::Xml::XsdValidatingReader::ReadElementContentAsDouble)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x60faed4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 33));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.ReadElementContentAsFloat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::ReadElementContentAsFloat)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x60fb12c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 34));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.ReadElementContentAsDecimal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (::System::Xml::XsdValidatingReader::*)()>(
    &::System::Xml::XsdValidatingReader::ReadElementContentAsDecimal)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x60fb384;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 35));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.ReadElementContentAsInt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::ReadElementContentAsInt)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x60fb5dc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 36));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.ReadElementContentAsLong
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::ReadElementContentAsLong)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x60fb834;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 37));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.ReadElementContentAsString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XsdValidatingReader::*)()>(
    &::System::Xml::XsdValidatingReader::ReadElementContentAsString)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x60fba8c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 38));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.get_AttributeCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::get_AttributeCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60fbc8c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 39));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.GetAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XsdValidatingReader::*)(::StringW)>(&::System::Xml::XsdValidatingReader::GetAttribute)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x60fbc94;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 40));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.GetAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XsdValidatingReader::*)(::StringW, ::StringW)>(
    &::System::Xml::XsdValidatingReader::GetAttribute)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x60fbe74;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 41));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.GetAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XsdValidatingReader::*)(int32_t)>(&::System::Xml::XsdValidatingReader::GetAttribute)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x60fc074;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 42));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.MoveToAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XsdValidatingReader::*)(::StringW)>(&::System::Xml::XsdValidatingReader::MoveToAttribute)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x60fc15c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 43));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.MoveToAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XsdValidatingReader::*)(::StringW, ::StringW)>(
    &::System::Xml::XsdValidatingReader::MoveToAttribute)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x60fc3a4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 44));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.MoveToAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XsdValidatingReader::*)(int32_t)>(&::System::Xml::XsdValidatingReader::MoveToAttribute)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x60fc534;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 45));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.MoveToFirstAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::MoveToFirstAttribute)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x60fc6d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 46));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.MoveToNextAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::MoveToNextAttribute)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x60fc834;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 47));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.MoveToElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::MoveToElement)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x60fc998;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 48));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.Read
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::Read)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x60fc9ec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 50));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.get_EOF
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::get_EOF)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x60fce84;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 51));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.Close
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::Close)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x60fcea4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 52));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.get_ReadState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::ReadState (::System::Xml::XsdValidatingReader::*)()>(
    &::System::Xml::XsdValidatingReader::get_ReadState)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x60fced8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 53));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.Skip
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::Skip)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x60fcf0c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 54));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.get_NameTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNameTable* (::System::Xml::XsdValidatingReader::*)()>(
    &::System::Xml::XsdValidatingReader::get_NameTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60fd084;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 55));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.LookupNamespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XsdValidatingReader::*)(::StringW)>(&::System::Xml::XsdValidatingReader::LookupNamespace)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x60fd08c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 56));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.ResolveEntity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::ResolveEntity)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x60fd144;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 58));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.ReadAttributeValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::ReadAttributeValue)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x60fd17c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 49));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.ReadContentAsBase64
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XsdValidatingReader::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::System::Xml::XsdValidatingReader::ReadContentAsBase64)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x60fd2b0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 59));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.ReadContentAsBinHex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XsdValidatingReader::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::System::Xml::XsdValidatingReader::ReadContentAsBinHex)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x60fd364;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 60));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.System_Xml_Schema_IXmlSchemaInfo_get_IsDefault
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XsdValidatingReader::*)()>(
    &::System::Xml::XsdValidatingReader::System_Xml_Schema_IXmlSchemaInfo_get_IsDefault)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x60fd418;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), "System.Xml.Schema.IXmlSchemaInfo.get_IsDefault",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.System_Xml_Schema_IXmlSchemaInfo_get_IsNil
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XsdValidatingReader::*)()>(
    &::System::Xml::XsdValidatingReader::System_Xml_Schema_IXmlSchemaInfo_get_IsNil)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x60fd7a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), "System.Xml.Schema.IXmlSchemaInfo.get_IsNil",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.System_Xml_Schema_IXmlSchemaInfo_get_Validity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaValidity (::System::Xml::XsdValidatingReader::*)()>(
    &::System::Xml::XsdValidatingReader::System_Xml_Schema_IXmlSchemaInfo_get_Validity)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x60fd7f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), "System.Xml.Schema.IXmlSchemaInfo.get_Validity",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.System_Xml_Schema_IXmlSchemaInfo_get_MemberType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaSimpleType* (::System::Xml::XsdValidatingReader::*)()>(
    &::System::Xml::XsdValidatingReader::System_Xml_Schema_IXmlSchemaInfo_get_MemberType)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x60fd880;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), "System.Xml.Schema.IXmlSchemaInfo.get_MemberType",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.System_Xml_Schema_IXmlSchemaInfo_get_SchemaType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaType* (::System::Xml::XsdValidatingReader::*)()>(
    &::System::Xml::XsdValidatingReader::System_Xml_Schema_IXmlSchemaInfo_get_SchemaType)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x60fda14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), "System.Xml.Schema.IXmlSchemaInfo.get_SchemaType",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.System_Xml_Schema_IXmlSchemaInfo_get_SchemaElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaElement* (::System::Xml::XsdValidatingReader::*)()>(
    &::System::Xml::XsdValidatingReader::System_Xml_Schema_IXmlSchemaInfo_get_SchemaElement)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x60fda70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(),
                                                 "System.Xml.Schema.IXmlSchemaInfo.get_SchemaElement", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.System_Xml_Schema_IXmlSchemaInfo_get_SchemaAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaAttribute* (::System::Xml::XsdValidatingReader::*)()>(
    &::System::Xml::XsdValidatingReader::System_Xml_Schema_IXmlSchemaInfo_get_SchemaAttribute)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x60fdac4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(),
                                                 "System.Xml.Schema.IXmlSchemaInfo.get_SchemaAttribute", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.HasLineInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::HasLineInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60fdb08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), "HasLineInfo",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.get_LineNumber
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::get_LineNumber)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x60fdb10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), "get_LineNumber",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.get_LinePosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::get_LinePosition)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x60fdbc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), "get_LinePosition",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.System_Xml_IXmlNamespaceResolver_GetNamespacesInScope
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* (
    ::System::Xml::XsdValidatingReader::*)(::System::Xml::XmlNamespaceScope)>(&::System::Xml::XsdValidatingReader::System_Xml_IXmlNamespaceResolver_GetNamespacesInScope)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x60fdc78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), "System.Xml.IXmlNamespaceResolver.GetNamespacesInScope",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNamespaceScope>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.System_Xml_IXmlNamespaceResolver_LookupNamespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XsdValidatingReader::*)(::StringW)>(
    &::System::Xml::XsdValidatingReader::System_Xml_IXmlNamespaceResolver_LookupNamespace)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x60fdd44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), "System.Xml.IXmlNamespaceResolver.LookupNamespace",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.System_Xml_IXmlNamespaceResolver_LookupPrefix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XsdValidatingReader::*)(::StringW)>(
    &::System::Xml::XsdValidatingReader::System_Xml_IXmlNamespaceResolver_LookupPrefix)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x60fde14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), "System.Xml.IXmlNamespaceResolver.LookupPrefix",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.GetStringValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::GetStringValue)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x60fdee4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), "GetStringValue",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.get_ElementXmlType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaType* (::System::Xml::XsdValidatingReader::*)()>(
    &::System::Xml::XsdValidatingReader::get_ElementXmlType)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x60f90d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), "get_ElementXmlType",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.get_AttributeXmlType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaType* (::System::Xml::XsdValidatingReader::*)()>(
    &::System::Xml::XsdValidatingReader::get_AttributeXmlType)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x60f9104;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(),
                                                                               "get_AttributeXmlType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.get_AttributeSchemaInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaInfo* (::System::Xml::XsdValidatingReader::*)()>(
    &::System::Xml::XsdValidatingReader::get_AttributeSchemaInfo)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x60f8d08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(),
                                                                               "get_AttributeSchemaInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.ProcessReaderEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::ProcessReaderEvent)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x60fcb70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), "ProcessReaderEvent",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.ProcessElementEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::ProcessElementEvent)> {
  constexpr static std::size_t size = 0x488;
  constexpr static std::size_t addrs = 0x60fdf00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(),
                                                                               "ProcessElementEvent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.ProcessEndElementEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::ProcessEndElementEvent)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x60fe388;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(),
                                                                               "ProcessEndElementEvent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.ValidateAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::ValidateAttributes)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x60fe504;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), "ValidateAttributes",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.ClearAttributesInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::ClearAttributesInfo)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x60fce48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(),
                                                                               "ClearAttributesInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.GetAttributePSVI
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::AttributePSVIInfo* (::System::Xml::XsdValidatingReader::*)(::StringW)>(
    &::System::Xml::XsdValidatingReader::GetAttributePSVI)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x60fc214;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), "GetAttributePSVI", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.GetAttributePSVI
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::AttributePSVIInfo* (::System::Xml::XsdValidatingReader::*)(::StringW, ::StringW)>(
    &::System::Xml::XsdValidatingReader::GetAttributePSVI)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x60fc4bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), "GetAttributePSVI", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.GetDefaultAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::ValidatingReaderNodeData* (::System::Xml::XsdValidatingReader::*)(::StringW, bool)>(
    &::System::Xml::XsdValidatingReader::GetDefaultAttribute)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x60fbd00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), "GetDefaultAttribute", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.GetDefaultAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::ValidatingReaderNodeData* (::System::Xml::XsdValidatingReader::*)(::StringW, ::StringW, bool)>(
    &::System::Xml::XsdValidatingReader::GetDefaultAttribute)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x60fbf40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), "GetDefaultAttribute", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.AddAttributePSVI
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::AttributePSVIInfo* (::System::Xml::XsdValidatingReader::*)(int32_t)>(
    &::System::Xml::XsdValidatingReader::AddAttributePSVI)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x60fe7f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), "AddAttributePSVI", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.IsXSDRoot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XsdValidatingReader::*)(::StringW, ::StringW)>(&::System::Xml::XsdValidatingReader::IsXSDRoot)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x60fe4e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), "IsXSDRoot", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.ProcessInlineSchema
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::ProcessInlineSchema)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x60fcd98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(),
                                                                               "ProcessInlineSchema", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.InternalReadContentAsObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Xml::XsdValidatingReader::*)()>(
    &::System::Xml::XsdValidatingReader::InternalReadContentAsObject)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x60f90c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(),
                                                                               "InternalReadContentAsObject", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.InternalReadContentAsObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Xml::XsdValidatingReader::*)(bool)>(
    &::System::Xml::XsdValidatingReader::InternalReadContentAsObject)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x60f8dec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), "InternalReadContentAsObject",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.InternalReadContentAsObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Xml::XsdValidatingReader::*)(bool, ::ByRef<::StringW>)>(
    &::System::Xml::XsdValidatingReader::InternalReadContentAsObject)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x60fa7f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), "InternalReadContentAsObject", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.InternalReadElementContentAsObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Xml::XsdValidatingReader::*)(::ByRef<::System::Xml::Schema::XmlSchemaType*>)>(
    &::System::Xml::XsdValidatingReader::InternalReadElementContentAsObject)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x60fac64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), "InternalReadElementContentAsObject", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Xml::Schema::XmlSchemaType*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.InternalReadElementContentAsObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Xml::XsdValidatingReader::*)(::ByRef<::System::Xml::Schema::XmlSchemaType*>, bool)>(
    &::System::Xml::XsdValidatingReader::InternalReadElementContentAsObject)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x60fece0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), "InternalReadElementContentAsObject", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Xml::Schema::XmlSchemaType*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.InternalReadElementContentAsObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::System::Xml::XsdValidatingReader::*)(::ByRef<::System::Xml::Schema::XmlSchemaType*>, bool, ::ByRef<::StringW>)>(&::System::Xml::XsdValidatingReader::InternalReadElementContentAsObject)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x60fecf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), "InternalReadElementContentAsObject", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Xml::Schema::XmlSchemaType*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.ReadTillEndElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Xml::XsdValidatingReader::*)()>(
    &::System::Xml::XsdValidatingReader::ReadTillEndElement)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x60feab4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), "ReadTillEndElement",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.SwitchReader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::SwitchReader)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x60feec0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), "SwitchReader",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.ReadAheadForMemberType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::ReadAheadForMemberType)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x60fef44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(),
                                                                               "ReadAheadForMemberType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.GetIsDefault
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::GetIsDefault)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x60fd4a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), "GetIsDefault",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.GetMemberType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XsdValidatingReader::*)()>(&::System::Xml::XsdValidatingReader::GetMemberType)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x60fd900;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), "GetMemberType",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.ReturnBoxedValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::System::Xml::XsdValidatingReader::*)(::System::Object*, ::System::Xml::Schema::XmlSchemaType*, bool)>(&::System::Xml::XsdValidatingReader::ReturnBoxedValue)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x60fe94c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), "ReturnBoxedValue", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaType*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.GetCachingReader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XsdCachingReader* (::System::Xml::XsdValidatingReader::*)()>(
    &::System::Xml::XsdValidatingReader::GetCachingReader)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x60fe71c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), "GetCachingReader",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.CreateDummyTextNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::ValidatingReaderNodeData* (::System::Xml::XsdValidatingReader::*)(::StringW, int32_t)>(
    &::System::Xml::XsdValidatingReader::CreateDummyTextNode)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x60fd228;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), "CreateDummyTextNode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.CachingCallBack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XsdValidatingReader::*)(::System::Xml::XsdCachingReader*)>(
    &::System::Xml::XsdValidatingReader::CachingCallBack)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x60ff184;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), "CachingCallBack", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XsdCachingReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdValidatingReader.GetOriginalAtomicValueStringOfElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XsdValidatingReader::*)()>(
    &::System::Xml::XsdValidatingReader::GetOriginalAtomicValueStringOfElement)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x60fe6b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), "GetOriginalAtomicValueStringOfElement",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlReader*& System::Xml::XsdValidatingReader::__cordl_internal_get_coreReader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___coreReader;
}
constexpr ::System::Xml::XmlReader* const& System::Xml::XsdValidatingReader::__cordl_internal_get_coreReader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___coreReader;
}
constexpr void System::Xml::XsdValidatingReader::__cordl_internal_set_coreReader(::System::Xml::XmlReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___coreReader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::IXmlNamespaceResolver*& System::Xml::XsdValidatingReader::__cordl_internal_get_coreReaderNSResolver() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___coreReaderNSResolver;
}
constexpr ::System::Xml::IXmlNamespaceResolver* const& System::Xml::XsdValidatingReader::__cordl_internal_get_coreReaderNSResolver() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___coreReaderNSResolver;
}
constexpr void System::Xml::XsdValidatingReader::__cordl_internal_set_coreReaderNSResolver(::System::Xml::IXmlNamespaceResolver* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___coreReaderNSResolver)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::IXmlNamespaceResolver*& System::Xml::XsdValidatingReader::__cordl_internal_get_thisNSResolver() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___thisNSResolver;
}
constexpr ::System::Xml::IXmlNamespaceResolver* const& System::Xml::XsdValidatingReader::__cordl_internal_get_thisNSResolver() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___thisNSResolver;
}
constexpr void System::Xml::XsdValidatingReader::__cordl_internal_set_thisNSResolver(::System::Xml::IXmlNamespaceResolver* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___thisNSResolver)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::XmlSchemaValidator*& System::Xml::XsdValidatingReader::__cordl_internal_get_validator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validator;
}
constexpr ::System::Xml::Schema::XmlSchemaValidator* const& System::Xml::XsdValidatingReader::__cordl_internal_get_validator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validator;
}
constexpr void System::Xml::XsdValidatingReader::__cordl_internal_set_validator(::System::Xml::Schema::XmlSchemaValidator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___validator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlResolver*& System::Xml::XsdValidatingReader::__cordl_internal_get_xmlResolver() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlResolver;
}
constexpr ::System::Xml::XmlResolver* const& System::Xml::XsdValidatingReader::__cordl_internal_get_xmlResolver() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlResolver;
}
constexpr void System::Xml::XsdValidatingReader::__cordl_internal_set_xmlResolver(::System::Xml::XmlResolver* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___xmlResolver)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::ValidationEventHandler*& System::Xml::XsdValidatingReader::__cordl_internal_get_validationEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validationEvent;
}
constexpr ::System::Xml::Schema::ValidationEventHandler* const& System::Xml::XsdValidatingReader::__cordl_internal_get_validationEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validationEvent;
}
constexpr void System::Xml::XsdValidatingReader::__cordl_internal_set_validationEvent(::System::Xml::Schema::ValidationEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___validationEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XsdValidatingReader_ValidatingReaderState& System::Xml::XsdValidatingReader::__cordl_internal_get_validationState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validationState;
}
constexpr ::System::Xml::XsdValidatingReader_ValidatingReaderState const& System::Xml::XsdValidatingReader::__cordl_internal_get_validationState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validationState;
}
constexpr void System::Xml::XsdValidatingReader::__cordl_internal_set_validationState(::System::Xml::XsdValidatingReader_ValidatingReaderState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___validationState = value;
}
constexpr ::System::Xml::Schema::XmlValueGetter*& System::Xml::XsdValidatingReader::__cordl_internal_get_valueGetter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueGetter;
}
constexpr ::System::Xml::Schema::XmlValueGetter* const& System::Xml::XsdValidatingReader::__cordl_internal_get_valueGetter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueGetter;
}
constexpr void System::Xml::XsdValidatingReader::__cordl_internal_set_valueGetter(::System::Xml::Schema::XmlValueGetter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___valueGetter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlNamespaceManager*& System::Xml::XsdValidatingReader::__cordl_internal_get_nsManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nsManager;
}
constexpr ::System::Xml::XmlNamespaceManager* const& System::Xml::XsdValidatingReader::__cordl_internal_get_nsManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nsManager;
}
constexpr void System::Xml::XsdValidatingReader::__cordl_internal_set_nsManager(::System::Xml::XmlNamespaceManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___nsManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Xml::XsdValidatingReader::__cordl_internal_get_manageNamespaces() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___manageNamespaces;
}
constexpr bool const& System::Xml::XsdValidatingReader::__cordl_internal_get_manageNamespaces() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___manageNamespaces;
}
constexpr void System::Xml::XsdValidatingReader::__cordl_internal_set_manageNamespaces(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___manageNamespaces = value;
}
constexpr bool& System::Xml::XsdValidatingReader::__cordl_internal_get_processInlineSchema() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___processInlineSchema;
}
constexpr bool const& System::Xml::XsdValidatingReader::__cordl_internal_get_processInlineSchema() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___processInlineSchema;
}
constexpr void System::Xml::XsdValidatingReader::__cordl_internal_set_processInlineSchema(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___processInlineSchema = value;
}
constexpr bool& System::Xml::XsdValidatingReader::__cordl_internal_get_replayCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___replayCache;
}
constexpr bool const& System::Xml::XsdValidatingReader::__cordl_internal_get_replayCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___replayCache;
}
constexpr void System::Xml::XsdValidatingReader::__cordl_internal_set_replayCache(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___replayCache = value;
}
constexpr ::System::Xml::ValidatingReaderNodeData*& System::Xml::XsdValidatingReader::__cordl_internal_get_cachedNode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cachedNode;
}
constexpr ::System::Xml::ValidatingReaderNodeData* const& System::Xml::XsdValidatingReader::__cordl_internal_get_cachedNode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cachedNode;
}
constexpr void System::Xml::XsdValidatingReader::__cordl_internal_set_cachedNode(::System::Xml::ValidatingReaderNodeData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cachedNode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::AttributePSVIInfo*& System::Xml::XsdValidatingReader::__cordl_internal_get_attributePSVI() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributePSVI;
}
constexpr ::System::Xml::AttributePSVIInfo* const& System::Xml::XsdValidatingReader::__cordl_internal_get_attributePSVI() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributePSVI;
}
constexpr void System::Xml::XsdValidatingReader::__cordl_internal_set_attributePSVI(::System::Xml::AttributePSVIInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___attributePSVI)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Xml::XsdValidatingReader::__cordl_internal_get_attributeCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeCount;
}
constexpr int32_t const& System::Xml::XsdValidatingReader::__cordl_internal_get_attributeCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeCount;
}
constexpr void System::Xml::XsdValidatingReader::__cordl_internal_set_attributeCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___attributeCount = value;
}
constexpr int32_t& System::Xml::XsdValidatingReader::__cordl_internal_get_coreReaderAttributeCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___coreReaderAttributeCount;
}
constexpr int32_t const& System::Xml::XsdValidatingReader::__cordl_internal_get_coreReaderAttributeCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___coreReaderAttributeCount;
}
constexpr void System::Xml::XsdValidatingReader::__cordl_internal_set_coreReaderAttributeCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___coreReaderAttributeCount = value;
}
constexpr int32_t& System::Xml::XsdValidatingReader::__cordl_internal_get_currentAttrIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentAttrIndex;
}
constexpr int32_t const& System::Xml::XsdValidatingReader::__cordl_internal_get_currentAttrIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentAttrIndex;
}
constexpr void System::Xml::XsdValidatingReader::__cordl_internal_set_currentAttrIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currentAttrIndex = value;
}
constexpr ::ArrayW<::System::Xml::AttributePSVIInfo*, ::Array<::System::Xml::AttributePSVIInfo*>*>& System::Xml::XsdValidatingReader::__cordl_internal_get_attributePSVINodes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributePSVINodes;
}
constexpr ::ArrayW<::System::Xml::AttributePSVIInfo*, ::Array<::System::Xml::AttributePSVIInfo*>*> const& System::Xml::XsdValidatingReader::__cordl_internal_get_attributePSVINodes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributePSVINodes;
}
constexpr void System::Xml::XsdValidatingReader::__cordl_internal_set_attributePSVINodes(::ArrayW<::System::Xml::AttributePSVIInfo*, ::Array<::System::Xml::AttributePSVIInfo*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___attributePSVINodes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::ArrayList*& System::Xml::XsdValidatingReader::__cordl_internal_get_defaultAttributes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultAttributes;
}
constexpr ::System::Collections::ArrayList* const& System::Xml::XsdValidatingReader::__cordl_internal_get_defaultAttributes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultAttributes;
}
constexpr void System::Xml::XsdValidatingReader::__cordl_internal_set_defaultAttributes(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___defaultAttributes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::Parser*& System::Xml::XsdValidatingReader::__cordl_internal_get_inlineSchemaParser() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inlineSchemaParser;
}
constexpr ::System::Xml::Schema::Parser* const& System::Xml::XsdValidatingReader::__cordl_internal_get_inlineSchemaParser() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inlineSchemaParser;
}
constexpr void System::Xml::XsdValidatingReader::__cordl_internal_set_inlineSchemaParser(::System::Xml::Schema::Parser* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___inlineSchemaParser)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::Xml::XsdValidatingReader::__cordl_internal_get_atomicValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___atomicValue;
}
constexpr ::System::Object* const& System::Xml::XsdValidatingReader::__cordl_internal_get_atomicValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___atomicValue;
}
constexpr void System::Xml::XsdValidatingReader::__cordl_internal_set_atomicValue(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___atomicValue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::XmlSchemaInfo*& System::Xml::XsdValidatingReader::__cordl_internal_get_xmlSchemaInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlSchemaInfo;
}
constexpr ::System::Xml::Schema::XmlSchemaInfo* const& System::Xml::XsdValidatingReader::__cordl_internal_get_xmlSchemaInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlSchemaInfo;
}
constexpr void System::Xml::XsdValidatingReader::__cordl_internal_set_xmlSchemaInfo(::System::Xml::Schema::XmlSchemaInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___xmlSchemaInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::XsdValidatingReader::__cordl_internal_get_originalAtomicValueString() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___originalAtomicValueString;
}
constexpr ::StringW const& System::Xml::XsdValidatingReader::__cordl_internal_get_originalAtomicValueString() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___originalAtomicValueString;
}
constexpr void System::Xml::XsdValidatingReader::__cordl_internal_set_originalAtomicValueString(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___originalAtomicValueString)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlNameTable*& System::Xml::XsdValidatingReader::__cordl_internal_get_coreReaderNameTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___coreReaderNameTable;
}
constexpr ::System::Xml::XmlNameTable* const& System::Xml::XsdValidatingReader::__cordl_internal_get_coreReaderNameTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___coreReaderNameTable;
}
constexpr void System::Xml::XsdValidatingReader::__cordl_internal_set_coreReaderNameTable(::System::Xml::XmlNameTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___coreReaderNameTable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XsdCachingReader*& System::Xml::XsdValidatingReader::__cordl_internal_get_cachingReader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cachingReader;
}
constexpr ::System::Xml::XsdCachingReader* const& System::Xml::XsdValidatingReader::__cordl_internal_get_cachingReader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cachingReader;
}
constexpr void System::Xml::XsdValidatingReader::__cordl_internal_set_cachingReader(::System::Xml::XsdCachingReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cachingReader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::ValidatingReaderNodeData*& System::Xml::XsdValidatingReader::__cordl_internal_get_textNode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textNode;
}
constexpr ::System::Xml::ValidatingReaderNodeData* const& System::Xml::XsdValidatingReader::__cordl_internal_get_textNode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textNode;
}
constexpr void System::Xml::XsdValidatingReader::__cordl_internal_set_textNode(::System::Xml::ValidatingReaderNodeData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___textNode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::XsdValidatingReader::__cordl_internal_get_NsXmlNs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NsXmlNs;
}
constexpr ::StringW const& System::Xml::XsdValidatingReader::__cordl_internal_get_NsXmlNs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NsXmlNs;
}
constexpr void System::Xml::XsdValidatingReader::__cordl_internal_set_NsXmlNs(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___NsXmlNs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::XsdValidatingReader::__cordl_internal_get_NsXs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NsXs;
}
constexpr ::StringW const& System::Xml::XsdValidatingReader::__cordl_internal_get_NsXs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NsXs;
}
constexpr void System::Xml::XsdValidatingReader::__cordl_internal_set_NsXs(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___NsXs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::XsdValidatingReader::__cordl_internal_get_NsXsi() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NsXsi;
}
constexpr ::StringW const& System::Xml::XsdValidatingReader::__cordl_internal_get_NsXsi() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NsXsi;
}
constexpr void System::Xml::XsdValidatingReader::__cordl_internal_set_NsXsi(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___NsXsi)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::XsdValidatingReader::__cordl_internal_get_XsiType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___XsiType;
}
constexpr ::StringW const& System::Xml::XsdValidatingReader::__cordl_internal_get_XsiType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___XsiType;
}
constexpr void System::Xml::XsdValidatingReader::__cordl_internal_set_XsiType(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___XsiType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::XsdValidatingReader::__cordl_internal_get_XsiNil() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___XsiNil;
}
constexpr ::StringW const& System::Xml::XsdValidatingReader::__cordl_internal_get_XsiNil() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___XsiNil;
}
constexpr void System::Xml::XsdValidatingReader::__cordl_internal_set_XsiNil(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___XsiNil)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::XsdValidatingReader::__cordl_internal_get_XsdSchema() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___XsdSchema;
}
constexpr ::StringW const& System::Xml::XsdValidatingReader::__cordl_internal_get_XsdSchema() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___XsdSchema;
}
constexpr void System::Xml::XsdValidatingReader::__cordl_internal_set_XsdSchema(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___XsdSchema)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::XsdValidatingReader::__cordl_internal_get_XsiSchemaLocation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___XsiSchemaLocation;
}
constexpr ::StringW const& System::Xml::XsdValidatingReader::__cordl_internal_get_XsiSchemaLocation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___XsiSchemaLocation;
}
constexpr void System::Xml::XsdValidatingReader::__cordl_internal_set_XsiSchemaLocation(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___XsiSchemaLocation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::XsdValidatingReader::__cordl_internal_get_XsiNoNamespaceSchemaLocation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___XsiNoNamespaceSchemaLocation;
}
constexpr ::StringW const& System::Xml::XsdValidatingReader::__cordl_internal_get_XsiNoNamespaceSchemaLocation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___XsiNoNamespaceSchemaLocation;
}
constexpr void System::Xml::XsdValidatingReader::__cordl_internal_set_XsiNoNamespaceSchemaLocation(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___XsiNoNamespaceSchemaLocation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlCharType& System::Xml::XsdValidatingReader::__cordl_internal_get_xmlCharType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlCharType;
}
constexpr ::System::Xml::XmlCharType const& System::Xml::XsdValidatingReader::__cordl_internal_get_xmlCharType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlCharType;
}
constexpr void System::Xml::XsdValidatingReader::__cordl_internal_set_xmlCharType(::System::Xml::XmlCharType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___xmlCharType = value;
}
constexpr ::System::Xml::IXmlLineInfo*& System::Xml::XsdValidatingReader::__cordl_internal_get_lineInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lineInfo;
}
constexpr ::System::Xml::IXmlLineInfo* const& System::Xml::XsdValidatingReader::__cordl_internal_get_lineInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lineInfo;
}
constexpr void System::Xml::XsdValidatingReader::__cordl_internal_set_lineInfo(::System::Xml::IXmlLineInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lineInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::ReadContentAsBinaryHelper*& System::Xml::XsdValidatingReader::__cordl_internal_get_readBinaryHelper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readBinaryHelper;
}
constexpr ::System::Xml::ReadContentAsBinaryHelper* const& System::Xml::XsdValidatingReader::__cordl_internal_get_readBinaryHelper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readBinaryHelper;
}
constexpr void System::Xml::XsdValidatingReader::__cordl_internal_set_readBinaryHelper(::System::Xml::ReadContentAsBinaryHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___readBinaryHelper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XsdValidatingReader_ValidatingReaderState& System::Xml::XsdValidatingReader::__cordl_internal_get_savedState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___savedState;
}
constexpr ::System::Xml::XsdValidatingReader_ValidatingReaderState const& System::Xml::XsdValidatingReader::__cordl_internal_get_savedState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___savedState;
}
constexpr void System::Xml::XsdValidatingReader::__cordl_internal_set_savedState(::System::Xml::XsdValidatingReader_ValidatingReaderState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___savedState = value;
}
inline void System::Xml::XsdValidatingReader::setStaticF_TypeOfString(::System::Type* value) {
  ::cordl_internals::setStaticField<::System::Type*, "TypeOfString", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get>(
      std::forward<::System::Type*>(value));
}
inline ::System::Type* System::Xml::XsdValidatingReader::getStaticF_TypeOfString() {
  return ::cordl_internals::getStaticField<::System::Type*, "TypeOfString", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get>();
}
inline void System::Xml::XsdValidatingReader::_ctor(::System::Xml::XmlReader* reader, ::System::Xml::XmlResolver* xmlResolver, ::System::Xml::XmlReaderSettings* readerSettings,
                                                    ::System::Xml::Schema::XmlSchemaObject* partialValidationType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReader*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlResolver*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReaderSettings*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader, xmlResolver, readerSettings, partialValidationType);
}
inline void System::Xml::XsdValidatingReader::_ctor(::System::Xml::XmlReader* reader, ::System::Xml::XmlResolver* xmlResolver, ::System::Xml::XmlReaderSettings* readerSettings) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReader*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlResolver*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReaderSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader, xmlResolver, readerSettings);
}
inline void System::Xml::XsdValidatingReader::Init() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), "Init",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XsdValidatingReader::SetupValidator(::System::Xml::XmlReaderSettings* readerSettings, ::System::Xml::XmlReader* reader,
                                                             ::System::Xml::Schema::XmlSchemaObject* partialValidationType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), "SetupValidator", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReaderSettings*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReader*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, readerSettings, reader, partialValidationType);
}
inline ::System::Xml::XmlReaderSettings* System::Xml::XsdValidatingReader::get_Settings() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlReaderSettings*, false>(this, ___internal_method);
}
inline ::System::Xml::XmlNodeType System::Xml::XsdValidatingReader::get_NodeType() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNodeType, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XsdValidatingReader::get_Name() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XsdValidatingReader::get_LocalName() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XsdValidatingReader::get_NamespaceURI() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XsdValidatingReader::get_Prefix() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XsdValidatingReader::get_Value() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline int32_t System::Xml::XsdValidatingReader::get_Depth() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XsdValidatingReader::get_BaseURI() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool System::Xml::XsdValidatingReader::get_IsEmptyElement() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Xml::XsdValidatingReader::get_IsDefault() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline char16_t System::Xml::XsdValidatingReader::get_QuoteChar() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<char16_t, false>(this, ___internal_method);
}
inline ::System::Xml::XmlSpace System::Xml::XsdValidatingReader::get_XmlSpace() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlSpace, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XsdValidatingReader::get_XmlLang() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Xml::Schema::IXmlSchemaInfo* System::Xml::XsdValidatingReader::get_SchemaInfo() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::IXmlSchemaInfo*, false>(this, ___internal_method);
}
inline ::System::Type* System::Xml::XsdValidatingReader::get_ValueType() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline ::System::Object* System::Xml::XsdValidatingReader::ReadContentAsObject() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline bool System::Xml::XsdValidatingReader::ReadContentAsBoolean() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 22)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::DateTime System::Xml::XsdValidatingReader::ReadContentAsDateTime() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 23)));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(this, ___internal_method);
}
inline double_t System::Xml::XsdValidatingReader::ReadContentAsDouble() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 24)));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline float_t System::Xml::XsdValidatingReader::ReadContentAsFloat() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 25)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::System::Decimal System::Xml::XsdValidatingReader::ReadContentAsDecimal() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 26)));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal, false>(this, ___internal_method);
}
inline int32_t System::Xml::XsdValidatingReader::ReadContentAsInt() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 27)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int64_t System::Xml::XsdValidatingReader::ReadContentAsLong() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 28)));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XsdValidatingReader::ReadContentAsString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 29)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Object* System::Xml::XsdValidatingReader::ReadContentAs(::System::Type* returnType, ::System::Xml::IXmlNamespaceResolver* namespaceResolver) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 30)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, returnType, namespaceResolver);
}
inline bool System::Xml::XsdValidatingReader::ReadElementContentAsBoolean() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 31)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::DateTime System::Xml::XsdValidatingReader::ReadElementContentAsDateTime() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 32)));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(this, ___internal_method);
}
inline double_t System::Xml::XsdValidatingReader::ReadElementContentAsDouble() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 33)));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline float_t System::Xml::XsdValidatingReader::ReadElementContentAsFloat() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 34)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::System::Decimal System::Xml::XsdValidatingReader::ReadElementContentAsDecimal() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 35)));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal, false>(this, ___internal_method);
}
inline int32_t System::Xml::XsdValidatingReader::ReadElementContentAsInt() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 36)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int64_t System::Xml::XsdValidatingReader::ReadElementContentAsLong() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 37)));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XsdValidatingReader::ReadElementContentAsString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 38)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline int32_t System::Xml::XsdValidatingReader::get_AttributeCount() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 39)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XsdValidatingReader::GetAttribute(::StringW name) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 40)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, name);
}
inline ::StringW System::Xml::XsdValidatingReader::GetAttribute(::StringW name, ::StringW namespaceURI) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 41)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, name, namespaceURI);
}
inline ::StringW System::Xml::XsdValidatingReader::GetAttribute(int32_t i) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 42)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, i);
}
inline bool System::Xml::XsdValidatingReader::MoveToAttribute(::StringW name) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 43)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, name);
}
inline bool System::Xml::XsdValidatingReader::MoveToAttribute(::StringW name, ::StringW ns) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 44)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, name, ns);
}
inline void System::Xml::XsdValidatingReader::MoveToAttribute(int32_t i) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 45)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, i);
}
inline bool System::Xml::XsdValidatingReader::MoveToFirstAttribute() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 46)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Xml::XsdValidatingReader::MoveToNextAttribute() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 47)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Xml::XsdValidatingReader::MoveToElement() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 48)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Xml::XsdValidatingReader::Read() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 50)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Xml::XsdValidatingReader::get_EOF() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 51)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Xml::XsdValidatingReader::Close() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 52)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Xml::ReadState System::Xml::XsdValidatingReader::get_ReadState() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 53)));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::ReadState, false>(this, ___internal_method);
}
inline void System::Xml::XsdValidatingReader::Skip() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 54)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Xml::XmlNameTable* System::Xml::XsdValidatingReader::get_NameTable() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 55)));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNameTable*, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XsdValidatingReader::LookupNamespace(::StringW prefix) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 56)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, prefix);
}
inline void System::Xml::XsdValidatingReader::ResolveEntity() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 58)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Xml::XsdValidatingReader::ReadAttributeValue() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 49)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t System::Xml::XsdValidatingReader::ReadContentAsBase64(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 59)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, buffer, index, count);
}
inline int32_t System::Xml::XsdValidatingReader::ReadContentAsBinHex(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), 60)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, buffer, index, count);
}
inline bool System::Xml::XsdValidatingReader::System_Xml_Schema_IXmlSchemaInfo_get_IsDefault() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), "System.Xml.Schema.IXmlSchemaInfo.get_IsDefault",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Xml::XsdValidatingReader::System_Xml_Schema_IXmlSchemaInfo_get_IsNil() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), "System.Xml.Schema.IXmlSchemaInfo.get_IsNil",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaValidity System::Xml::XsdValidatingReader::System_Xml_Schema_IXmlSchemaInfo_get_Validity() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), "System.Xml.Schema.IXmlSchemaInfo.get_Validity",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaValidity, false>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaSimpleType* System::Xml::XsdValidatingReader::System_Xml_Schema_IXmlSchemaInfo_get_MemberType() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), "System.Xml.Schema.IXmlSchemaInfo.get_MemberType",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaSimpleType*, false>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaType* System::Xml::XsdValidatingReader::System_Xml_Schema_IXmlSchemaInfo_get_SchemaType() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), "System.Xml.Schema.IXmlSchemaInfo.get_SchemaType",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaType*, false>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaElement* System::Xml::XsdValidatingReader::System_Xml_Schema_IXmlSchemaInfo_get_SchemaElement() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), "System.Xml.Schema.IXmlSchemaInfo.get_SchemaElement",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaElement*, false>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaAttribute* System::Xml::XsdValidatingReader::System_Xml_Schema_IXmlSchemaInfo_get_SchemaAttribute() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(),
                                               "System.Xml.Schema.IXmlSchemaInfo.get_SchemaAttribute", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaAttribute*, false>(this, ___internal_method);
}
inline bool System::Xml::XsdValidatingReader::HasLineInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), "HasLineInfo",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t System::Xml::XsdValidatingReader::get_LineNumber() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), "get_LineNumber",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::Xml::XsdValidatingReader::get_LinePosition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), "get_LinePosition",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*
System::Xml::XsdValidatingReader::System_Xml_IXmlNamespaceResolver_GetNamespacesInScope(::System::Xml::XmlNamespaceScope scope) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), "System.Xml.IXmlNamespaceResolver.GetNamespacesInScope",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNamespaceScope>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*, false>(this, ___internal_method, scope);
}
inline ::StringW System::Xml::XsdValidatingReader::System_Xml_IXmlNamespaceResolver_LookupNamespace(::StringW prefix) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), "System.Xml.IXmlNamespaceResolver.LookupNamespace",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, prefix);
}
inline ::StringW System::Xml::XsdValidatingReader::System_Xml_IXmlNamespaceResolver_LookupPrefix(::StringW namespaceName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), "System.Xml.IXmlNamespaceResolver.LookupPrefix",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, namespaceName);
}
inline ::System::Object* System::Xml::XsdValidatingReader::GetStringValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), "GetStringValue",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaType* System::Xml::XsdValidatingReader::get_ElementXmlType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), "get_ElementXmlType",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaType*, false>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaType* System::Xml::XsdValidatingReader::get_AttributeXmlType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), "get_AttributeXmlType",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaType*, false>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaInfo* System::Xml::XsdValidatingReader::get_AttributeSchemaInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(),
                                                                             "get_AttributeSchemaInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaInfo*, false>(this, ___internal_method);
}
inline void System::Xml::XsdValidatingReader::ProcessReaderEvent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), "ProcessReaderEvent",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XsdValidatingReader::ProcessElementEvent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), "ProcessElementEvent",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XsdValidatingReader::ProcessEndElementEvent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(),
                                                                             "ProcessEndElementEvent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XsdValidatingReader::ValidateAttributes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), "ValidateAttributes",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XsdValidatingReader::ClearAttributesInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), "ClearAttributesInfo",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Xml::AttributePSVIInfo* System::Xml::XsdValidatingReader::GetAttributePSVI(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), "GetAttributePSVI", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::AttributePSVIInfo*, false>(this, ___internal_method, name);
}
inline ::System::Xml::AttributePSVIInfo* System::Xml::XsdValidatingReader::GetAttributePSVI(::StringW localName, ::StringW ns) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), "GetAttributePSVI", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::AttributePSVIInfo*, false>(this, ___internal_method, localName, ns);
}
inline ::System::Xml::ValidatingReaderNodeData* System::Xml::XsdValidatingReader::GetDefaultAttribute(::StringW name, bool updatePosition) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), "GetDefaultAttribute", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::ValidatingReaderNodeData*, false>(this, ___internal_method, name, updatePosition);
}
inline ::System::Xml::ValidatingReaderNodeData* System::Xml::XsdValidatingReader::GetDefaultAttribute(::StringW attrLocalName, ::StringW ns, bool updatePosition) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), "GetDefaultAttribute", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::ValidatingReaderNodeData*, false>(this, ___internal_method, attrLocalName, ns, updatePosition);
}
inline ::System::Xml::AttributePSVIInfo* System::Xml::XsdValidatingReader::AddAttributePSVI(int32_t attIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), "AddAttributePSVI",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::AttributePSVIInfo*, false>(this, ___internal_method, attIndex);
}
inline bool System::Xml::XsdValidatingReader::IsXSDRoot(::StringW localName, ::StringW ns) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), "IsXSDRoot", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, localName, ns);
}
inline void System::Xml::XsdValidatingReader::ProcessInlineSchema() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), "ProcessInlineSchema",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* System::Xml::XsdValidatingReader::InternalReadContentAsObject() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(),
                                                                             "InternalReadContentAsObject", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Object* System::Xml::XsdValidatingReader::InternalReadContentAsObject(bool unwrapTypedValue) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), "InternalReadContentAsObject",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, unwrapTypedValue);
}
inline ::System::Object* System::Xml::XsdValidatingReader::InternalReadContentAsObject(bool unwrapTypedValue, ::ByRef<::StringW> originalStringValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), "InternalReadContentAsObject", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, unwrapTypedValue, originalStringValue);
}
inline ::System::Object* System::Xml::XsdValidatingReader::InternalReadElementContentAsObject(::ByRef<::System::Xml::Schema::XmlSchemaType*> xmlType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), "InternalReadElementContentAsObject", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Xml::Schema::XmlSchemaType*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, xmlType);
}
inline ::System::Object* System::Xml::XsdValidatingReader::InternalReadElementContentAsObject(::ByRef<::System::Xml::Schema::XmlSchemaType*> xmlType, bool unwrapTypedValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), "InternalReadElementContentAsObject", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Xml::Schema::XmlSchemaType*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, xmlType, unwrapTypedValue);
}
inline ::System::Object* System::Xml::XsdValidatingReader::InternalReadElementContentAsObject(::ByRef<::System::Xml::Schema::XmlSchemaType*> xmlType, bool unwrapTypedValue,
                                                                                              ::ByRef<::StringW> originalString) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), "InternalReadElementContentAsObject", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Xml::Schema::XmlSchemaType*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, xmlType, unwrapTypedValue, originalString);
}
inline ::System::Object* System::Xml::XsdValidatingReader::ReadTillEndElement() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), "ReadTillEndElement",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void System::Xml::XsdValidatingReader::SwitchReader() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), "SwitchReader",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XsdValidatingReader::ReadAheadForMemberType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(),
                                                                             "ReadAheadForMemberType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XsdValidatingReader::GetIsDefault() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), "GetIsDefault",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XsdValidatingReader::GetMemberType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), "GetMemberType",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* System::Xml::XsdValidatingReader::ReturnBoxedValue(::System::Object* typedValue, ::System::Xml::Schema::XmlSchemaType* xmlType, bool unWrap) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), "ReturnBoxedValue", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaType*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, typedValue, xmlType, unWrap);
}
inline ::System::Xml::XsdCachingReader* System::Xml::XsdValidatingReader::GetCachingReader() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), "GetCachingReader",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XsdCachingReader*, false>(this, ___internal_method);
}
inline ::System::Xml::ValidatingReaderNodeData* System::Xml::XsdValidatingReader::CreateDummyTextNode(::StringW attributeValue, int32_t depth) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), "CreateDummyTextNode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::ValidatingReaderNodeData*, false>(this, ___internal_method, attributeValue, depth);
}
inline void System::Xml::XsdValidatingReader::CachingCallBack(::System::Xml::XsdCachingReader* cachingReader) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), "CachingCallBack", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XsdCachingReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cachingReader);
}
inline ::StringW System::Xml::XsdValidatingReader::GetOriginalAtomicValueStringOfElement() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdValidatingReader*>::get(), "GetOriginalAtomicValueStringOfElement",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Xml::XsdValidatingReader* System::Xml::XsdValidatingReader::New_ctor(::System::Xml::XmlReader* reader, ::System::Xml::XmlResolver* xmlResolver,
                                                                                      ::System::Xml::XmlReaderSettings* readerSettings, ::System::Xml::Schema::XmlSchemaObject* partialValidationType) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::XsdValidatingReader*>(reader, xmlResolver, readerSettings, partialValidationType));
}
inline ::System::Xml::XsdValidatingReader* System::Xml::XsdValidatingReader::New_ctor(::System::Xml::XmlReader* reader, ::System::Xml::XmlResolver* xmlResolver,
                                                                                      ::System::Xml::XmlReaderSettings* readerSettings) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::XsdValidatingReader*>(reader, xmlResolver, readerSettings));
}
/// @brief Convert operator to "::System::Xml::Schema::IXmlSchemaInfo"
constexpr System::Xml::XsdValidatingReader::operator ::System::Xml::Schema::IXmlSchemaInfo*() noexcept {
  return static_cast<::System::Xml::Schema::IXmlSchemaInfo*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Xml::Schema::IXmlSchemaInfo"
constexpr ::System::Xml::Schema::IXmlSchemaInfo* System::Xml::XsdValidatingReader::i___System__Xml__Schema__IXmlSchemaInfo() noexcept {
  return static_cast<::System::Xml::Schema::IXmlSchemaInfo*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Xml::IXmlLineInfo"
constexpr System::Xml::XsdValidatingReader::operator ::System::Xml::IXmlLineInfo*() noexcept {
  return static_cast<::System::Xml::IXmlLineInfo*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Xml::IXmlLineInfo"
constexpr ::System::Xml::IXmlLineInfo* System::Xml::XsdValidatingReader::i___System__Xml__IXmlLineInfo() noexcept {
  return static_cast<::System::Xml::IXmlLineInfo*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Xml::IXmlNamespaceResolver"
constexpr System::Xml::XsdValidatingReader::operator ::System::Xml::IXmlNamespaceResolver*() noexcept {
  return static_cast<::System::Xml::IXmlNamespaceResolver*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Xml::IXmlNamespaceResolver"
constexpr ::System::Xml::IXmlNamespaceResolver* System::Xml::XsdValidatingReader::i___System__Xml__IXmlNamespaceResolver() noexcept {
  return static_cast<::System::Xml::IXmlNamespaceResolver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Xml::XsdValidatingReader::XsdValidatingReader() {}
