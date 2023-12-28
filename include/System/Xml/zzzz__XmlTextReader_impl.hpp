#pragma once
#include "System/Xml/zzzz__XmlReader_impl.hpp"
#include "System/Xml/zzzz__XmlTextReader_def.hpp"
#include "System/Xml/zzzz__ReadState_def.hpp"
#include "System/Xml/zzzz__XmlNameTable_def.hpp"
#include "System/Xml/zzzz__IDtdInfo_def.hpp"
#include "System/Xml/zzzz__XmlNodeType_def.hpp"
#include "System/Xml/zzzz__XmlResolver_def.hpp"
#include "System/Xml/zzzz__XmlTextReaderImpl_def.hpp"
#include "System/IO/zzzz__TextReader_def.hpp"
#include "System/Xml/zzzz__IXmlNamespaceResolver_def.hpp"
#include "System/Xml/zzzz__EntityHandling_def.hpp"
//  Writing Method size for method: ::System::Xml::XmlTextReader._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReader::*)(::System::IO::TextReader*, ::System::Xml::XmlNameTable*)>(
    &::System::Xml::XmlTextReader::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2873da8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::TextReader*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNameTable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReader.get_NodeType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNodeType (::System::Xml::XmlTextReader::*)()>(&::System::Xml::XmlTextReader::get_NodeType)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2873e54;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReader.get_Name
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlTextReader::*)()>(&::System::Xml::XmlTextReader::get_Name)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2873e74;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReader.get_LocalName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlTextReader::*)()>(&::System::Xml::XmlTextReader::get_LocalName)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2873e94;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReader.get_NamespaceURI
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlTextReader::*)()>(&::System::Xml::XmlTextReader::get_NamespaceURI)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2873eb4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReader.get_Prefix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlTextReader::*)()>(&::System::Xml::XmlTextReader::get_Prefix)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2873ed4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReader.get_Value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlTextReader::*)()>(&::System::Xml::XmlTextReader::get_Value)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2873ef4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReader.get_BaseURI
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlTextReader::*)()>(&::System::Xml::XmlTextReader::get_BaseURI)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2873f14;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReader.get_IsEmptyElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlTextReader::*)()>(&::System::Xml::XmlTextReader::get_IsEmptyElement)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2873f34;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReader.get_IsDefault
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlTextReader::*)()>(&::System::Xml::XmlTextReader::get_IsDefault)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2873f58;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReader.MoveToAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlTextReader::*)(::StringW)>(&::System::Xml::XmlTextReader::MoveToAttribute)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2873f7c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReader.MoveToFirstAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlTextReader::*)()>(&::System::Xml::XmlTextReader::MoveToFirstAttribute)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2873fa0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReader.MoveToNextAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlTextReader::*)()>(&::System::Xml::XmlTextReader::MoveToNextAttribute)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2873fc4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReader.MoveToElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlTextReader::*)()>(&::System::Xml::XmlTextReader::MoveToElement)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2873fe8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReader.ReadAttributeValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlTextReader::*)()>(&::System::Xml::XmlTextReader::ReadAttributeValue)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x287400c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReader.Read
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlTextReader::*)()>(&::System::Xml::XmlTextReader::Read)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2874030;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReader.Close
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReader::*)()>(&::System::Xml::XmlTextReader::Close)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2874054;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReader.get_ReadState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::ReadState (::System::Xml::XmlTextReader::*)()>(&::System::Xml::XmlTextReader::get_ReadState)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2874078;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 23));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReader.get_NameTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNameTable* (::System::Xml::XmlTextReader::*)()>(&::System::Xml::XmlTextReader::get_NameTable)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x287409c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReader.LookupNamespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlTextReader::*)(::StringW)>(&::System::Xml::XmlTextReader::LookupNamespace)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x28740c0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 25));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReader.get_CanResolveEntity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlTextReader::*)()>(&::System::Xml::XmlTextReader::get_CanResolveEntity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28740f8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 26));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReader.ResolveEntity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReader::*)()>(&::System::Xml::XmlTextReader::ResolveEntity)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2874100;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 27));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReader.System_Xml_IXmlNamespaceResolver_LookupNamespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlTextReader::*)(::StringW)>(
    &::System::Xml::XmlTextReader::System_Xml_IXmlNamespaceResolver_LookupNamespace)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2874124;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), "System.Xml.IXmlNamespaceResolver.LookupNamespace",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReader.System_Xml_IXmlNamespaceResolver_LookupPrefix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlTextReader::*)(::StringW)>(
    &::System::Xml::XmlTextReader::System_Xml_IXmlNamespaceResolver_LookupPrefix)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2874148;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), "System.Xml.IXmlNamespaceResolver.LookupPrefix",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReader.set_EntityHandling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReader::*)(::System::Xml::EntityHandling)>(
    &::System::Xml::XmlTextReader::set_EntityHandling)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2874164;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), "set_EntityHandling", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::EntityHandling>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReader.set_XmlResolver
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReader::*)(::System::Xml::XmlResolver*)>(
    &::System::Xml::XmlTextReader::set_XmlResolver)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2874180;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), "set_XmlResolver", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlResolver*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReader.get_Impl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlTextReaderImpl* (::System::Xml::XmlTextReader::*)()>(&::System::Xml::XmlTextReader::get_Impl)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x287419c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), "get_Impl",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReader.set_XmlValidatingReaderCompatibilityMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReader::*)(bool)>(
    &::System::Xml::XmlTextReader::set_XmlValidatingReaderCompatibilityMode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x28741a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), "set_XmlValidatingReaderCompatibilityMode",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReader.get_DtdInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::IDtdInfo* (::System::Xml::XmlTextReader::*)()>(&::System::Xml::XmlTextReader::get_DtdInfo)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x28741c4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 29));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Xml::IXmlNamespaceResolver"
constexpr System::Xml::XmlTextReader::operator ::System::Xml::IXmlNamespaceResolver*() noexcept {
  return static_cast<::System::Xml::IXmlNamespaceResolver*>(static_cast<void*>(this));
}
constexpr ::System::Xml::XmlTextReaderImpl*& System::Xml::XmlTextReader::__get_impl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___impl;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlTextReaderImpl*> const& System::Xml::XmlTextReader::__get_impl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___impl;
}
constexpr void System::Xml::XmlTextReader::__set_impl(::System::Xml::XmlTextReaderImpl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___impl)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Xml::XmlTextReader* System::Xml::XmlTextReader::New_ctor(::System::IO::TextReader* input, ::System::Xml::XmlNameTable* nt) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Xml::XmlTextReader*>(input, nt));
}
inline void System::Xml::XmlTextReader::_ctor(::System::IO::TextReader* input, ::System::Xml::XmlNameTable* nt) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::TextReader*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNameTable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, input, nt);
}
inline ::System::Xml::XmlNodeType System::Xml::XmlTextReader::get_NodeType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), "get_NodeType",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNodeType, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlTextReader::get_Name() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), "get_Name",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlTextReader::get_LocalName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), "get_LocalName",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlTextReader::get_NamespaceURI() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), "get_NamespaceURI",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlTextReader::get_Prefix() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), "get_Prefix",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlTextReader::get_Value() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), "get_Value",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlTextReader::get_BaseURI() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), "get_BaseURI",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool System::Xml::XmlTextReader::get_IsEmptyElement() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), "get_IsEmptyElement",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Xml::XmlTextReader::get_IsDefault() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), "get_IsDefault",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Xml::XmlTextReader::MoveToAttribute(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), "MoveToAttribute", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, name);
}
inline bool System::Xml::XmlTextReader::MoveToFirstAttribute() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), "MoveToFirstAttribute",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Xml::XmlTextReader::MoveToNextAttribute() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), "MoveToNextAttribute",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Xml::XmlTextReader::MoveToElement() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), "MoveToElement",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Xml::XmlTextReader::ReadAttributeValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), "ReadAttributeValue",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Xml::XmlTextReader::Read() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), "Read",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Xml::XmlTextReader::Close() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), "Close",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Xml::ReadState System::Xml::XmlTextReader::get_ReadState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), "get_ReadState",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::ReadState, false>(this, ___internal_method);
}
inline ::System::Xml::XmlNameTable* System::Xml::XmlTextReader::get_NameTable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), "get_NameTable",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNameTable*, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlTextReader::LookupNamespace(::StringW prefix) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), "LookupNamespace", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, prefix);
}
inline bool System::Xml::XmlTextReader::get_CanResolveEntity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), "get_CanResolveEntity",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Xml::XmlTextReader::ResolveEntity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), "ResolveEntity",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlTextReader::System_Xml_IXmlNamespaceResolver_LookupNamespace(::StringW prefix) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), "System.Xml.IXmlNamespaceResolver.LookupNamespace",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, prefix);
}
inline ::StringW System::Xml::XmlTextReader::System_Xml_IXmlNamespaceResolver_LookupPrefix(::StringW namespaceName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), "System.Xml.IXmlNamespaceResolver.LookupPrefix",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, namespaceName);
}
inline void System::Xml::XmlTextReader::set_EntityHandling(::System::Xml::EntityHandling value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), "set_EntityHandling", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::EntityHandling>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Xml::XmlTextReader::set_XmlResolver(::System::Xml::XmlResolver* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), "set_XmlResolver", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlResolver*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Xml::XmlTextReaderImpl* System::Xml::XmlTextReader::get_Impl() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), "get_Impl",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlTextReaderImpl*, false>(this, ___internal_method);
}
inline void System::Xml::XmlTextReader::set_XmlValidatingReaderCompatibilityMode(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), "set_XmlValidatingReaderCompatibilityMode",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Xml::IDtdInfo* System::Xml::XmlTextReader::get_DtdInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), "get_DtdInfo",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::IDtdInfo*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Xml::XmlTextReader::XmlTextReader() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
