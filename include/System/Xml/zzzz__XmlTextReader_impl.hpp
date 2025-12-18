#pragma once
// IWYU pragma private; include "System/Xml/XmlTextReader.hpp"
#include "System/Xml/zzzz__XmlReader_impl.hpp"
#include "System/Xml/zzzz__XmlTextReader_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/IO/zzzz__TextReader_def.hpp"
#include "System/Xml/zzzz__EntityHandling_def.hpp"
#include "System/Xml/zzzz__IDtdInfo_def.hpp"
#include "System/Xml/zzzz__IXmlLineInfo_def.hpp"
#include "System/Xml/zzzz__IXmlNamespaceResolver_def.hpp"
#include "System/Xml/zzzz__ReadState_def.hpp"
#include "System/Xml/zzzz__WhitespaceHandling_def.hpp"
#include "System/Xml/zzzz__XmlNameTable_def.hpp"
#include "System/Xml/zzzz__XmlNamespaceManager_def.hpp"
#include "System/Xml/zzzz__XmlNamespaceScope_def.hpp"
#include "System/Xml/zzzz__XmlNodeType_def.hpp"
#include "System/Xml/zzzz__XmlResolver_def.hpp"
#include "System/Xml/zzzz__XmlSpace_def.hpp"
#include "System/Xml/zzzz__XmlTextReaderImpl_def.hpp"
//  Writing Method size for method: ::System::Xml::XmlTextReader._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReader::*)(::System::IO::Stream*)>(&::System::Xml::XmlTextReader::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x60e1030;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReader._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReader::*)(::StringW, ::System::IO::Stream*, ::System::Xml::XmlNameTable*)>(
    &::System::Xml::XmlTextReader::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x60e10d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNameTable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReader._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReader::*)(::System::IO::TextReader*)>(&::System::Xml::XmlTextReader::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x60e1188;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::TextReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReader._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReader::*)(::System::IO::TextReader*, ::System::Xml::XmlNameTable*)>(
    &::System::Xml::XmlTextReader::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x60e1228;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::TextReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNameTable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReader.get_NodeType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNodeType (::System::Xml::XmlTextReader::*)()>(&::System::Xml::XmlTextReader::get_NodeType)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x60e12dc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReader.get_Name
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlTextReader::*)()>(&::System::Xml::XmlTextReader::get_Name)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x60e12f8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReader.get_LocalName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlTextReader::*)()>(&::System::Xml::XmlTextReader::get_LocalName)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x60e1314;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReader.get_NamespaceURI
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlTextReader::*)()>(&::System::Xml::XmlTextReader::get_NamespaceURI)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x60e1330;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReader.get_Prefix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlTextReader::*)()>(&::System::Xml::XmlTextReader::get_Prefix)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x60e134c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReader.get_Value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlTextReader::*)()>(&::System::Xml::XmlTextReader::get_Value)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x60e1368;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReader.get_Depth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlTextReader::*)()>(&::System::Xml::XmlTextReader::get_Depth)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x60e1384;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReader.get_BaseURI
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlTextReader::*)()>(&::System::Xml::XmlTextReader::get_BaseURI)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x60e13a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReader.get_IsEmptyElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlTextReader::*)()>(&::System::Xml::XmlTextReader::get_IsEmptyElement)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x60e13c0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReader.get_IsDefault
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlTextReader::*)()>(&::System::Xml::XmlTextReader::get_IsDefault)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x60e13e0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReader.get_QuoteChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (::System::Xml::XmlTextReader::*)()>(&::System::Xml::XmlTextReader::get_QuoteChar)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x60e1400;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReader.get_XmlSpace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlSpace (::System::Xml::XmlTextReader::*)()>(&::System::Xml::XmlTextReader::get_XmlSpace)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x60e1420;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReader.get_XmlLang
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlTextReader::*)()>(&::System::Xml::XmlTextReader::get_XmlLang)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x60e1440;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReader.get_AttributeCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlTextReader::*)()>(&::System::Xml::XmlTextReader::get_AttributeCount)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x60e1460;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 39));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReader.GetAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlTextReader::*)(::StringW)>(&::System::Xml::XmlTextReader::GetAttribute)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x60e1480;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 40));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReader.GetAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlTextReader::*)(::StringW, ::StringW)>(&::System::Xml::XmlTextReader::GetAttribute)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x60e14a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 41));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReader.GetAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlTextReader::*)(int32_t)>(&::System::Xml::XmlTextReader::GetAttribute)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x60e14c0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 42));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReader.MoveToAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlTextReader::*)(::StringW)>(&::System::Xml::XmlTextReader::MoveToAttribute)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x60e14e0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 43));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReader.MoveToAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlTextReader::*)(::StringW, ::StringW)>(&::System::Xml::XmlTextReader::MoveToAttribute)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x60e1500;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 44));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReader.MoveToAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReader::*)(int32_t)>(&::System::Xml::XmlTextReader::MoveToAttribute)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x60e1520;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 45));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReader.MoveToFirstAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlTextReader::*)()>(&::System::Xml::XmlTextReader::MoveToFirstAttribute)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x60e1540;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 46));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReader.MoveToNextAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlTextReader::*)()>(&::System::Xml::XmlTextReader::MoveToNextAttribute)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x60e1560;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 47));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReader.MoveToElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlTextReader::*)()>(&::System::Xml::XmlTextReader::MoveToElement)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x60e1580;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 48));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReader.ReadAttributeValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlTextReader::*)()>(&::System::Xml::XmlTextReader::ReadAttributeValue)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x60e15a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 49));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReader.Read
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlTextReader::*)()>(&::System::Xml::XmlTextReader::Read)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x60e15c0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 50));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReader.get_EOF
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlTextReader::*)()>(&::System::Xml::XmlTextReader::get_EOF)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x60e15e0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 51));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReader.Close
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReader::*)()>(&::System::Xml::XmlTextReader::Close)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x60e1600;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 52));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReader.get_ReadState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::ReadState (::System::Xml::XmlTextReader::*)()>(&::System::Xml::XmlTextReader::get_ReadState)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x60e1620;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 53));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReader.Skip
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReader::*)()>(&::System::Xml::XmlTextReader::Skip)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x60e1640;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 54));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReader.get_NameTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNameTable* (::System::Xml::XmlTextReader::*)()>(&::System::Xml::XmlTextReader::get_NameTable)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x60e1660;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 55));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReader.LookupNamespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlTextReader::*)(::StringW)>(&::System::Xml::XmlTextReader::LookupNamespace)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x60e1680;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 56));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReader.get_CanResolveEntity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlTextReader::*)()>(&::System::Xml::XmlTextReader::get_CanResolveEntity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60e16b8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 57));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReader.ResolveEntity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReader::*)()>(&::System::Xml::XmlTextReader::ResolveEntity)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x60e16c0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 58));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReader.ReadContentAsBase64
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlTextReader::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::System::Xml::XmlTextReader::ReadContentAsBase64)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x60e16e0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 59));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReader.ReadContentAsBinHex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlTextReader::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::System::Xml::XmlTextReader::ReadContentAsBinHex)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x60e1700;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 60));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReader.get_CanReadValueChunk
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlTextReader::*)()>(&::System::Xml::XmlTextReader::get_CanReadValueChunk)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60e1720;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 61));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReader.ReadString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlTextReader::*)()>(&::System::Xml::XmlTextReader::ReadString)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x60e1728;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 63));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReader.HasLineInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlTextReader::*)()>(&::System::Xml::XmlTextReader::HasLineInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60e1750;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), "HasLineInfo",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReader.get_LineNumber
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlTextReader::*)()>(&::System::Xml::XmlTextReader::get_LineNumber)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x60e1758;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), "get_LineNumber",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReader.get_LinePosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlTextReader::*)()>(&::System::Xml::XmlTextReader::get_LinePosition)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x60e177c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), "get_LinePosition",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReader.System_Xml_IXmlNamespaceResolver_GetNamespacesInScope
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* (
    ::System::Xml::XmlTextReader::*)(::System::Xml::XmlNamespaceScope)>(&::System::Xml::XmlTextReader::System_Xml_IXmlNamespaceResolver_GetNamespacesInScope)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x60e17a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), "System.Xml.IXmlNamespaceResolver.GetNamespacesInScope", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNamespaceScope>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReader.System_Xml_IXmlNamespaceResolver_LookupNamespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlTextReader::*)(::StringW)>(
    &::System::Xml::XmlTextReader::System_Xml_IXmlNamespaceResolver_LookupNamespace)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x60e17cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), "System.Xml.IXmlNamespaceResolver.LookupNamespace",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReader.System_Xml_IXmlNamespaceResolver_LookupPrefix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlTextReader::*)(::StringW)>(
    &::System::Xml::XmlTextReader::System_Xml_IXmlNamespaceResolver_LookupPrefix)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x60e17ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), "System.Xml.IXmlNamespaceResolver.LookupPrefix",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReader.get_Namespaces
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlTextReader::*)()>(&::System::Xml::XmlTextReader::get_Namespaces)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x60ddf98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), "get_Namespaces",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReader.get_Normalization
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlTextReader::*)()>(&::System::Xml::XmlTextReader::get_Normalization)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x60e1818;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), "get_Normalization",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReader.set_Normalization
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReader::*)(bool)>(&::System::Xml::XmlTextReader::set_Normalization)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x60e1830;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), "set_Normalization",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReader.get_WhitespaceHandling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::WhitespaceHandling (::System::Xml::XmlTextReader::*)()>(
    &::System::Xml::XmlTextReader::get_WhitespaceHandling)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x60e184c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), "get_WhitespaceHandling",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReader.set_WhitespaceHandling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReader::*)(::System::Xml::WhitespaceHandling)>(
    &::System::Xml::XmlTextReader::set_WhitespaceHandling)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x60e1864;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), "set_WhitespaceHandling", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::WhitespaceHandling>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReader.set_EntityHandling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReader::*)(::System::Xml::EntityHandling)>(
    &::System::Xml::XmlTextReader::set_EntityHandling)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x60e187c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), "set_EntityHandling", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::EntityHandling>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReader.set_XmlResolver
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReader::*)(::System::Xml::XmlResolver*)>(
    &::System::Xml::XmlTextReader::set_XmlResolver)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x60e1894;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), "set_XmlResolver", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlResolver*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReader.get_Impl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlTextReaderImpl* (::System::Xml::XmlTextReader::*)()>(&::System::Xml::XmlTextReader::get_Impl)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60e18ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), "get_Impl",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReader.get_NamespaceManager
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNamespaceManager* (::System::Xml::XmlTextReader::*)()>(
    &::System::Xml::XmlTextReader::get_NamespaceManager)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x60e18b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 73));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReader.set_XmlValidatingReaderCompatibilityMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlTextReader::*)(bool)>(
    &::System::Xml::XmlTextReader::set_XmlValidatingReaderCompatibilityMode)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x60e18d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), "set_XmlValidatingReaderCompatibilityMode",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextReader.get_DtdInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::IDtdInfo* (::System::Xml::XmlTextReader::*)()>(&::System::Xml::XmlTextReader::get_DtdInfo)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x60e18f0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 74));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlTextReaderImpl*& System::Xml::XmlTextReader::__cordl_internal_get_impl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___impl;
}
constexpr ::System::Xml::XmlTextReaderImpl* const& System::Xml::XmlTextReader::__cordl_internal_get_impl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___impl;
}
constexpr void System::Xml::XmlTextReader::__cordl_internal_set_impl(::System::Xml::XmlTextReaderImpl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___impl)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Xml::XmlTextReader::_ctor(::System::IO::Stream* input) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, input);
}
inline void System::Xml::XmlTextReader::_ctor(::StringW url, ::System::IO::Stream* input, ::System::Xml::XmlNameTable* nt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNameTable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, url, input, nt);
}
inline void System::Xml::XmlTextReader::_ctor(::System::IO::TextReader* input) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::TextReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, input);
}
inline void System::Xml::XmlTextReader::_ctor(::System::IO::TextReader* input, ::System::Xml::XmlNameTable* nt) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::TextReader*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNameTable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, input, nt);
}
inline ::System::Xml::XmlNodeType System::Xml::XmlTextReader::get_NodeType() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNodeType, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlTextReader::get_Name() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlTextReader::get_LocalName() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlTextReader::get_NamespaceURI() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlTextReader::get_Prefix() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlTextReader::get_Value() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline int32_t System::Xml::XmlTextReader::get_Depth() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlTextReader::get_BaseURI() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool System::Xml::XmlTextReader::get_IsEmptyElement() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Xml::XmlTextReader::get_IsDefault() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline char16_t System::Xml::XmlTextReader::get_QuoteChar() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<char16_t, false>(this, ___internal_method);
}
inline ::System::Xml::XmlSpace System::Xml::XmlTextReader::get_XmlSpace() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlSpace, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlTextReader::get_XmlLang() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline int32_t System::Xml::XmlTextReader::get_AttributeCount() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 39)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlTextReader::GetAttribute(::StringW name) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 40)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, name);
}
inline ::StringW System::Xml::XmlTextReader::GetAttribute(::StringW localName, ::StringW namespaceURI) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 41)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, localName, namespaceURI);
}
inline ::StringW System::Xml::XmlTextReader::GetAttribute(int32_t i) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 42)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, i);
}
inline bool System::Xml::XmlTextReader::MoveToAttribute(::StringW name) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 43)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, name);
}
inline bool System::Xml::XmlTextReader::MoveToAttribute(::StringW localName, ::StringW namespaceURI) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 44)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, localName, namespaceURI);
}
inline void System::Xml::XmlTextReader::MoveToAttribute(int32_t i) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 45)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, i);
}
inline bool System::Xml::XmlTextReader::MoveToFirstAttribute() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 46)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Xml::XmlTextReader::MoveToNextAttribute() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 47)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Xml::XmlTextReader::MoveToElement() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 48)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Xml::XmlTextReader::ReadAttributeValue() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 49)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Xml::XmlTextReader::Read() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 50)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Xml::XmlTextReader::get_EOF() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 51)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Xml::XmlTextReader::Close() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 52)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Xml::ReadState System::Xml::XmlTextReader::get_ReadState() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 53)));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::ReadState, false>(this, ___internal_method);
}
inline void System::Xml::XmlTextReader::Skip() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 54)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Xml::XmlNameTable* System::Xml::XmlTextReader::get_NameTable() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 55)));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNameTable*, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlTextReader::LookupNamespace(::StringW prefix) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 56)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, prefix);
}
inline bool System::Xml::XmlTextReader::get_CanResolveEntity() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 57)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Xml::XmlTextReader::ResolveEntity() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 58)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t System::Xml::XmlTextReader::ReadContentAsBase64(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 59)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, buffer, index, count);
}
inline int32_t System::Xml::XmlTextReader::ReadContentAsBinHex(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 60)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, buffer, index, count);
}
inline bool System::Xml::XmlTextReader::get_CanReadValueChunk() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 61)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlTextReader::ReadString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 63)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool System::Xml::XmlTextReader::HasLineInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), "HasLineInfo",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t System::Xml::XmlTextReader::get_LineNumber() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), "get_LineNumber",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::Xml::XmlTextReader::get_LinePosition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), "get_LinePosition",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* System::Xml::XmlTextReader::System_Xml_IXmlNamespaceResolver_GetNamespacesInScope(::System::Xml::XmlNamespaceScope scope) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), "System.Xml.IXmlNamespaceResolver.GetNamespacesInScope", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNamespaceScope>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*, false>(this, ___internal_method, scope);
}
inline ::StringW System::Xml::XmlTextReader::System_Xml_IXmlNamespaceResolver_LookupNamespace(::StringW prefix) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), "System.Xml.IXmlNamespaceResolver.LookupNamespace",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, prefix);
}
inline ::StringW System::Xml::XmlTextReader::System_Xml_IXmlNamespaceResolver_LookupPrefix(::StringW namespaceName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), "System.Xml.IXmlNamespaceResolver.LookupPrefix",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, namespaceName);
}
inline bool System::Xml::XmlTextReader::get_Namespaces() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), "get_Namespaces",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Xml::XmlTextReader::get_Normalization() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), "get_Normalization",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Xml::XmlTextReader::set_Normalization(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), "set_Normalization",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Xml::WhitespaceHandling System::Xml::XmlTextReader::get_WhitespaceHandling() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), "get_WhitespaceHandling",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::WhitespaceHandling, false>(this, ___internal_method);
}
inline void System::Xml::XmlTextReader::set_WhitespaceHandling(::System::Xml::WhitespaceHandling value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), "set_WhitespaceHandling", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::WhitespaceHandling>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Xml::XmlTextReader::set_EntityHandling(::System::Xml::EntityHandling value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), "set_EntityHandling", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::EntityHandling>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Xml::XmlTextReader::set_XmlResolver(::System::Xml::XmlResolver* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), "set_XmlResolver", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlResolver*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Xml::XmlTextReaderImpl* System::Xml::XmlTextReader::get_Impl() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), "get_Impl",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlTextReaderImpl*, false>(this, ___internal_method);
}
inline ::System::Xml::XmlNamespaceManager* System::Xml::XmlTextReader::get_NamespaceManager() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 73)));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNamespaceManager*, false>(this, ___internal_method);
}
inline void System::Xml::XmlTextReader::set_XmlValidatingReaderCompatibilityMode(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), "set_XmlValidatingReaderCompatibilityMode",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Xml::IDtdInfo* System::Xml::XmlTextReader::get_DtdInfo() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlTextReader*>::get(), 74)));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::IDtdInfo*, false>(this, ___internal_method);
}
inline ::System::Xml::XmlTextReader* System::Xml::XmlTextReader::New_ctor(::System::IO::Stream* input) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::XmlTextReader*>(input));
}
inline ::System::Xml::XmlTextReader* System::Xml::XmlTextReader::New_ctor(::StringW url, ::System::IO::Stream* input, ::System::Xml::XmlNameTable* nt) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::XmlTextReader*>(url, input, nt));
}
inline ::System::Xml::XmlTextReader* System::Xml::XmlTextReader::New_ctor(::System::IO::TextReader* input) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::XmlTextReader*>(input));
}
inline ::System::Xml::XmlTextReader* System::Xml::XmlTextReader::New_ctor(::System::IO::TextReader* input, ::System::Xml::XmlNameTable* nt) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::XmlTextReader*>(input, nt));
}
/// @brief Convert operator to "::System::Xml::IXmlLineInfo"
constexpr System::Xml::XmlTextReader::operator ::System::Xml::IXmlLineInfo*() noexcept {
  return static_cast<::System::Xml::IXmlLineInfo*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Xml::IXmlLineInfo"
constexpr ::System::Xml::IXmlLineInfo* System::Xml::XmlTextReader::i___System__Xml__IXmlLineInfo() noexcept {
  return static_cast<::System::Xml::IXmlLineInfo*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Xml::IXmlNamespaceResolver"
constexpr System::Xml::XmlTextReader::operator ::System::Xml::IXmlNamespaceResolver*() noexcept {
  return static_cast<::System::Xml::IXmlNamespaceResolver*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Xml::IXmlNamespaceResolver"
constexpr ::System::Xml::IXmlNamespaceResolver* System::Xml::XmlTextReader::i___System__Xml__IXmlNamespaceResolver() noexcept {
  return static_cast<::System::Xml::IXmlNamespaceResolver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlTextReader::XmlTextReader() {}
