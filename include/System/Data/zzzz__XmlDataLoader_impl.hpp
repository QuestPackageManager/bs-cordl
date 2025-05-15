#pragma once
// IWYU pragma private; include "System/Data/XmlDataLoader.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Data/zzzz__XmlDataLoader_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Collections/zzzz__Stack_def.hpp"
#include "System/Data/zzzz__DataColumn_def.hpp"
#include "System/Data/zzzz__DataRow_def.hpp"
#include "System/Data/zzzz__DataSet_def.hpp"
#include "System/Data/zzzz__DataTable_def.hpp"
#include "System/Data/zzzz__XmlToDatasetMap_def.hpp"
#include "System/Xml/zzzz__XmlDocument_def.hpp"
#include "System/Xml/zzzz__XmlElement_def.hpp"
#include "System/Xml/zzzz__XmlNodeType_def.hpp"
#include "System/Xml/zzzz__XmlNode_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Data::XmlDataLoader._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::XmlDataLoader::*)(::System::Data::DataSet*, bool, bool)>(
    &::System::Data::XmlDataLoader::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x41a293c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlDataLoader*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataSet*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlDataLoader._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::XmlDataLoader::*)(::System::Data::DataSet*, bool, ::System::Xml::XmlElement*, bool)>(
    &::System::Data::XmlDataLoader::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x41a29d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlDataLoader*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataSet*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlElement*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlDataLoader._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::XmlDataLoader::*)(::System::Data::DataTable*, bool, bool)>(
    &::System::Data::XmlDataLoader::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x41a2aa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlDataLoader*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlDataLoader._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::XmlDataLoader::*)(::System::Data::DataTable*, bool, ::System::Xml::XmlElement*, bool)>(
    &::System::Data::XmlDataLoader::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x41a2b44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlDataLoader*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlElement*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlDataLoader.get_FromInference
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::XmlDataLoader::*)()>(&::System::Data::XmlDataLoader::get_FromInference)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x41a2c24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlDataLoader*>::get(), "get_FromInference",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlDataLoader.set_FromInference
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::XmlDataLoader::*)(bool)>(&::System::Data::XmlDataLoader::set_FromInference)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x41a2c2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlDataLoader*>::get(), "set_FromInference",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlDataLoader.AttachRows
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::XmlDataLoader::*)(::System::Data::DataRow*, ::System::Xml::XmlNode*)>(
    &::System::Data::XmlDataLoader::AttachRows)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x41a2c38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlDataLoader*>::get(), "AttachRows", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlDataLoader.CountNonNSAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Data::XmlDataLoader::*)(::System::Xml::XmlNode*)>(
    &::System::Data::XmlDataLoader::CountNonNSAttributes)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x41a2e2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlDataLoader*>::get(), "CountNonNSAttributes", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlDataLoader.GetValueForTextOnlyColums
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Data::XmlDataLoader::*)(::System::Xml::XmlNode*)>(
    &::System::Data::XmlDataLoader::GetValueForTextOnlyColums)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x41a2fac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlDataLoader*>::get(), "GetValueForTextOnlyColums", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlDataLoader.GetInitialTextFromNodes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Data::XmlDataLoader::*)(::ByRef<::System::Xml::XmlNode*>)>(
    &::System::Data::XmlDataLoader::GetInitialTextFromNodes)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x41a31d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlDataLoader*>::get(), "GetInitialTextFromNodes", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Xml::XmlNode*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlDataLoader.GetTextOnlyColumn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataColumn* (::System::Data::XmlDataLoader::*)(::System::Data::DataRow*)>(
    &::System::Data::XmlDataLoader::GetTextOnlyColumn)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x41a33ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlDataLoader*>::get(), "GetTextOnlyColumn", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlDataLoader.GetRowFromElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataRow* (::System::Data::XmlDataLoader::*)(::System::Xml::XmlElement*)>(
    &::System::Data::XmlDataLoader::GetRowFromElement)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x41a2d94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlDataLoader*>::get(), "GetRowFromElement", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlDataLoader.FColumnElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::XmlDataLoader::*)(::System::Xml::XmlElement*)>(
    &::System::Data::XmlDataLoader::FColumnElement)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x41a3470;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlDataLoader*>::get(), "FColumnElement", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlDataLoader.FExcludedNamespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::XmlDataLoader::*)(::StringW)>(&::System::Data::XmlDataLoader::FExcludedNamespace)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x41a2f20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlDataLoader*>::get(), "FExcludedNamespace", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlDataLoader.FIgnoreNamespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::XmlDataLoader::*)(::System::Xml::XmlNode*)>(&::System::Data::XmlDataLoader::FIgnoreNamespace)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x41a3558;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlDataLoader*>::get(), "FIgnoreNamespace", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlDataLoader.FIgnoreNamespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::XmlDataLoader::*)(::System::Xml::XmlReader*)>(
    &::System::Data::XmlDataLoader::FIgnoreNamespace)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x41a381c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlDataLoader*>::get(), "FIgnoreNamespace", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlDataLoader.IsTextLikeNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::XmlDataLoader::*)(::System::Xml::XmlNodeType)>(
    &::System::Data::XmlDataLoader::IsTextLikeNode)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x41a317c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlDataLoader*>::get(), "IsTextLikeNode", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNodeType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlDataLoader.IsTextOnly
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::XmlDataLoader::*)(::System::Data::DataColumn*)>(&::System::Data::XmlDataLoader::IsTextOnly)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x41a3440;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlDataLoader*>::get(), "IsTextOnly", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlDataLoader.LoadData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::XmlDataLoader::*)(::System::Xml::XmlDocument*)>(&::System::Data::XmlDataLoader::LoadData)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x41a38a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlDataLoader*>::get(), "LoadData", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDocument*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlDataLoader.LoadRowData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::XmlDataLoader::*)(::System::Data::DataRow*, ::System::Xml::XmlElement*)>(
    &::System::Data::XmlDataLoader::LoadRowData)> {
  constexpr static std::size_t size = 0xc88;
  constexpr static std::size_t addrs = 0x41a3ce8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlDataLoader*>::get(), "LoadRowData", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlDataLoader.LoadRows
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::XmlDataLoader::*)(::System::Data::DataRow*, ::System::Xml::XmlNode*)>(
    &::System::Data::XmlDataLoader::LoadRows)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x41a4970;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlDataLoader*>::get(), "LoadRows", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlDataLoader.SetRowValueFromXmlText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::XmlDataLoader::*)(::System::Data::DataRow*, ::System::Data::DataColumn*, ::StringW)>(
    &::System::Data::XmlDataLoader::SetRowValueFromXmlText)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x41a4cb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlDataLoader*>::get(), "SetRowValueFromXmlText", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlDataLoader.InitNameTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::XmlDataLoader::*)()>(&::System::Data::XmlDataLoader::InitNameTable)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x41a4d20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlDataLoader*>::get(), "InitNameTable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlDataLoader.LoadData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::XmlDataLoader::*)(::System::Xml::XmlReader*)>(&::System::Data::XmlDataLoader::LoadData)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x41a4f9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlDataLoader*>::get(), "LoadData", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlDataLoader.LoadTopMostTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::XmlDataLoader::*)(::System::Data::DataTable*)>(
    &::System::Data::XmlDataLoader::LoadTopMostTable)> {
  constexpr static std::size_t size = 0x940;
  constexpr static std::size_t addrs = 0x41a531c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlDataLoader*>::get(), "LoadTopMostTable", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlDataLoader.LoadTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::XmlDataLoader::*)(::System::Data::DataTable*, bool)>(
    &::System::Data::XmlDataLoader::LoadTable)> {
  constexpr static std::size_t size = 0xce8;
  constexpr static std::size_t addrs = 0x41a5f30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlDataLoader*>::get(), "LoadTable", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlDataLoader.LoadColumn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Data::XmlDataLoader::*)(::System::Data::DataColumn*, ::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(&::System::Data::XmlDataLoader::LoadColumn)> {
  constexpr static std::size_t size = 0x924;
  constexpr static std::size_t addrs = 0x41a6d44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlDataLoader*>::get(), "LoadColumn", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlDataLoader.ProcessXsdSchema
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::XmlDataLoader::*)()>(&::System::Data::XmlDataLoader::ProcessXsdSchema)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x41a5d1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlDataLoader*>::get(), "ProcessXsdSchema",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Data::DataSet*& System::Data::XmlDataLoader::__cordl_internal_get__dataSet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataSet;
}
constexpr ::System::Data::DataSet* const& System::Data::XmlDataLoader::__cordl_internal_get__dataSet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataSet;
}
constexpr void System::Data::XmlDataLoader::__cordl_internal_set__dataSet(::System::Data::DataSet* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____dataSet)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Data::XmlToDatasetMap*& System::Data::XmlDataLoader::__cordl_internal_get__nodeToSchemaMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodeToSchemaMap;
}
constexpr ::System::Data::XmlToDatasetMap* const& System::Data::XmlDataLoader::__cordl_internal_get__nodeToSchemaMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodeToSchemaMap;
}
constexpr void System::Data::XmlDataLoader::__cordl_internal_set__nodeToSchemaMap(::System::Data::XmlToDatasetMap* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____nodeToSchemaMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Hashtable*& System::Data::XmlDataLoader::__cordl_internal_get__nodeToRowMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodeToRowMap;
}
constexpr ::System::Collections::Hashtable* const& System::Data::XmlDataLoader::__cordl_internal_get__nodeToRowMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodeToRowMap;
}
constexpr void System::Data::XmlDataLoader::__cordl_internal_set__nodeToRowMap(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____nodeToRowMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Stack*& System::Data::XmlDataLoader::__cordl_internal_get__childRowsStack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____childRowsStack;
}
constexpr ::System::Collections::Stack* const& System::Data::XmlDataLoader::__cordl_internal_get__childRowsStack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____childRowsStack;
}
constexpr void System::Data::XmlDataLoader::__cordl_internal_set__childRowsStack(::System::Collections::Stack* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____childRowsStack)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Hashtable*& System::Data::XmlDataLoader::__cordl_internal_get__htableExcludedNS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____htableExcludedNS;
}
constexpr ::System::Collections::Hashtable* const& System::Data::XmlDataLoader::__cordl_internal_get__htableExcludedNS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____htableExcludedNS;
}
constexpr void System::Data::XmlDataLoader::__cordl_internal_set__htableExcludedNS(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____htableExcludedNS)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Data::XmlDataLoader::__cordl_internal_get__fIsXdr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fIsXdr;
}
constexpr bool const& System::Data::XmlDataLoader::__cordl_internal_get__fIsXdr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fIsXdr;
}
constexpr void System::Data::XmlDataLoader::__cordl_internal_set__fIsXdr(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fIsXdr = value;
}
constexpr bool& System::Data::XmlDataLoader::__cordl_internal_get__isDiffgram() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isDiffgram;
}
constexpr bool const& System::Data::XmlDataLoader::__cordl_internal_get__isDiffgram() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isDiffgram;
}
constexpr void System::Data::XmlDataLoader::__cordl_internal_set__isDiffgram(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isDiffgram = value;
}
constexpr ::System::Xml::XmlElement*& System::Data::XmlDataLoader::__cordl_internal_get__topMostNode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____topMostNode;
}
constexpr ::System::Xml::XmlElement* const& System::Data::XmlDataLoader::__cordl_internal_get__topMostNode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____topMostNode;
}
constexpr void System::Data::XmlDataLoader::__cordl_internal_set__topMostNode(::System::Xml::XmlElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____topMostNode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Data::XmlDataLoader::__cordl_internal_get__ignoreSchema() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ignoreSchema;
}
constexpr bool const& System::Data::XmlDataLoader::__cordl_internal_get__ignoreSchema() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ignoreSchema;
}
constexpr void System::Data::XmlDataLoader::__cordl_internal_set__ignoreSchema(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ignoreSchema = value;
}
constexpr ::System::Data::DataTable*& System::Data::XmlDataLoader::__cordl_internal_get__dataTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataTable;
}
constexpr ::System::Data::DataTable* const& System::Data::XmlDataLoader::__cordl_internal_get__dataTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataTable;
}
constexpr void System::Data::XmlDataLoader::__cordl_internal_set__dataTable(::System::Data::DataTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____dataTable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Data::XmlDataLoader::__cordl_internal_get__isTableLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isTableLevel;
}
constexpr bool const& System::Data::XmlDataLoader::__cordl_internal_get__isTableLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isTableLevel;
}
constexpr void System::Data::XmlDataLoader::__cordl_internal_set__isTableLevel(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isTableLevel = value;
}
constexpr bool& System::Data::XmlDataLoader::__cordl_internal_get__fromInference() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fromInference;
}
constexpr bool const& System::Data::XmlDataLoader::__cordl_internal_get__fromInference() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fromInference;
}
constexpr void System::Data::XmlDataLoader::__cordl_internal_set__fromInference(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fromInference = value;
}
constexpr ::System::Xml::XmlReader*& System::Data::XmlDataLoader::__cordl_internal_get__dataReader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataReader;
}
constexpr ::System::Xml::XmlReader* const& System::Data::XmlDataLoader::__cordl_internal_get__dataReader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataReader;
}
constexpr void System::Data::XmlDataLoader::__cordl_internal_set__dataReader(::System::Xml::XmlReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____dataReader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::Data::XmlDataLoader::__cordl_internal_get__XSD_XMLNS_NS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____XSD_XMLNS_NS;
}
constexpr ::System::Object* const& System::Data::XmlDataLoader::__cordl_internal_get__XSD_XMLNS_NS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____XSD_XMLNS_NS;
}
constexpr void System::Data::XmlDataLoader::__cordl_internal_set__XSD_XMLNS_NS(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____XSD_XMLNS_NS)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::Data::XmlDataLoader::__cordl_internal_get__XDR_SCHEMA() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____XDR_SCHEMA;
}
constexpr ::System::Object* const& System::Data::XmlDataLoader::__cordl_internal_get__XDR_SCHEMA() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____XDR_SCHEMA;
}
constexpr void System::Data::XmlDataLoader::__cordl_internal_set__XDR_SCHEMA(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____XDR_SCHEMA)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::Data::XmlDataLoader::__cordl_internal_get__XDRNS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____XDRNS;
}
constexpr ::System::Object* const& System::Data::XmlDataLoader::__cordl_internal_get__XDRNS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____XDRNS;
}
constexpr void System::Data::XmlDataLoader::__cordl_internal_set__XDRNS(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____XDRNS)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::Data::XmlDataLoader::__cordl_internal_get__SQL_SYNC() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SQL_SYNC;
}
constexpr ::System::Object* const& System::Data::XmlDataLoader::__cordl_internal_get__SQL_SYNC() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SQL_SYNC;
}
constexpr void System::Data::XmlDataLoader::__cordl_internal_set__SQL_SYNC(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____SQL_SYNC)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::Data::XmlDataLoader::__cordl_internal_get__UPDGNS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____UPDGNS;
}
constexpr ::System::Object* const& System::Data::XmlDataLoader::__cordl_internal_get__UPDGNS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____UPDGNS;
}
constexpr void System::Data::XmlDataLoader::__cordl_internal_set__UPDGNS(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____UPDGNS)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::Data::XmlDataLoader::__cordl_internal_get__XSD_SCHEMA() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____XSD_SCHEMA;
}
constexpr ::System::Object* const& System::Data::XmlDataLoader::__cordl_internal_get__XSD_SCHEMA() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____XSD_SCHEMA;
}
constexpr void System::Data::XmlDataLoader::__cordl_internal_set__XSD_SCHEMA(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____XSD_SCHEMA)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::Data::XmlDataLoader::__cordl_internal_get__XSDNS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____XSDNS;
}
constexpr ::System::Object* const& System::Data::XmlDataLoader::__cordl_internal_get__XSDNS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____XSDNS;
}
constexpr void System::Data::XmlDataLoader::__cordl_internal_set__XSDNS(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____XSDNS)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::Data::XmlDataLoader::__cordl_internal_get__DFFNS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DFFNS;
}
constexpr ::System::Object* const& System::Data::XmlDataLoader::__cordl_internal_get__DFFNS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DFFNS;
}
constexpr void System::Data::XmlDataLoader::__cordl_internal_set__DFFNS(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____DFFNS)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::Data::XmlDataLoader::__cordl_internal_get__MSDNS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MSDNS;
}
constexpr ::System::Object* const& System::Data::XmlDataLoader::__cordl_internal_get__MSDNS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MSDNS;
}
constexpr void System::Data::XmlDataLoader::__cordl_internal_set__MSDNS(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____MSDNS)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::Data::XmlDataLoader::__cordl_internal_get__DIFFID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DIFFID;
}
constexpr ::System::Object* const& System::Data::XmlDataLoader::__cordl_internal_get__DIFFID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DIFFID;
}
constexpr void System::Data::XmlDataLoader::__cordl_internal_set__DIFFID(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____DIFFID)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::Data::XmlDataLoader::__cordl_internal_get__HASCHANGES() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____HASCHANGES;
}
constexpr ::System::Object* const& System::Data::XmlDataLoader::__cordl_internal_get__HASCHANGES() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____HASCHANGES;
}
constexpr void System::Data::XmlDataLoader::__cordl_internal_set__HASCHANGES(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____HASCHANGES)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::Data::XmlDataLoader::__cordl_internal_get__ROWORDER() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ROWORDER;
}
constexpr ::System::Object* const& System::Data::XmlDataLoader::__cordl_internal_get__ROWORDER() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ROWORDER;
}
constexpr void System::Data::XmlDataLoader::__cordl_internal_set__ROWORDER(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ROWORDER)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Data::XmlDataLoader::_ctor(::System::Data::DataSet* dataset, bool IsXdr, bool ignoreSchema) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlDataLoader*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataSet*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dataset, IsXdr, ignoreSchema);
}
inline void System::Data::XmlDataLoader::_ctor(::System::Data::DataSet* dataset, bool IsXdr, ::System::Xml::XmlElement* topNode, bool ignoreSchema) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlDataLoader*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataSet*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlElement*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dataset, IsXdr, topNode, ignoreSchema);
}
inline void System::Data::XmlDataLoader::_ctor(::System::Data::DataTable* datatable, bool IsXdr, bool ignoreSchema) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlDataLoader*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, datatable, IsXdr, ignoreSchema);
}
inline void System::Data::XmlDataLoader::_ctor(::System::Data::DataTable* datatable, bool IsXdr, ::System::Xml::XmlElement* topNode, bool ignoreSchema) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlDataLoader*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlElement*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, datatable, IsXdr, topNode, ignoreSchema);
}
inline bool System::Data::XmlDataLoader::get_FromInference() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlDataLoader*>::get(), "get_FromInference",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Data::XmlDataLoader::set_FromInference(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlDataLoader*>::get(), "set_FromInference",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Data::XmlDataLoader::AttachRows(::System::Data::DataRow* parentRow, ::System::Xml::XmlNode* parentElement) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlDataLoader*>::get(), "AttachRows", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parentRow, parentElement);
}
inline int32_t System::Data::XmlDataLoader::CountNonNSAttributes(::System::Xml::XmlNode* node) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlDataLoader*>::get(), "CountNonNSAttributes", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, node);
}
inline ::StringW System::Data::XmlDataLoader::GetValueForTextOnlyColums(::System::Xml::XmlNode* n) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlDataLoader*>::get(), "GetValueForTextOnlyColums", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, n);
}
inline ::StringW System::Data::XmlDataLoader::GetInitialTextFromNodes(::ByRef<::System::Xml::XmlNode*> n) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlDataLoader*>::get(), "GetInitialTextFromNodes", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Xml::XmlNode*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, n);
}
inline ::System::Data::DataColumn* System::Data::XmlDataLoader::GetTextOnlyColumn(::System::Data::DataRow* row) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlDataLoader*>::get(), "GetTextOnlyColumn", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataColumn*, false>(this, ___internal_method, row);
}
inline ::System::Data::DataRow* System::Data::XmlDataLoader::GetRowFromElement(::System::Xml::XmlElement* e) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlDataLoader*>::get(), "GetRowFromElement", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataRow*, false>(this, ___internal_method, e);
}
inline bool System::Data::XmlDataLoader::FColumnElement(::System::Xml::XmlElement* e) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlDataLoader*>::get(), "FColumnElement", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, e);
}
inline bool System::Data::XmlDataLoader::FExcludedNamespace(::StringW ns) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlDataLoader*>::get(), "FExcludedNamespace", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, ns);
}
inline bool System::Data::XmlDataLoader::FIgnoreNamespace(::System::Xml::XmlNode* node) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlDataLoader*>::get(), "FIgnoreNamespace", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, node);
}
inline bool System::Data::XmlDataLoader::FIgnoreNamespace(::System::Xml::XmlReader* node) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlDataLoader*>::get(), "FIgnoreNamespace", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, node);
}
inline bool System::Data::XmlDataLoader::IsTextLikeNode(::System::Xml::XmlNodeType n) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlDataLoader*>::get(), "IsTextLikeNode", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNodeType>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, n);
}
inline bool System::Data::XmlDataLoader::IsTextOnly(::System::Data::DataColumn* c) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlDataLoader*>::get(), "IsTextOnly", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, c);
}
inline void System::Data::XmlDataLoader::LoadData(::System::Xml::XmlDocument* xdoc) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlDataLoader*>::get(), "LoadData", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDocument*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xdoc);
}
inline void System::Data::XmlDataLoader::LoadRowData(::System::Data::DataRow* row, ::System::Xml::XmlElement* rowElement) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlDataLoader*>::get(), "LoadRowData", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, row, rowElement);
}
inline void System::Data::XmlDataLoader::LoadRows(::System::Data::DataRow* parentRow, ::System::Xml::XmlNode* parentElement) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlDataLoader*>::get(), "LoadRows", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parentRow, parentElement);
}
inline void System::Data::XmlDataLoader::SetRowValueFromXmlText(::System::Data::DataRow* row, ::System::Data::DataColumn* col, ::StringW xmlText) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlDataLoader*>::get(), "SetRowValueFromXmlText", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, row, col, xmlText);
}
inline void System::Data::XmlDataLoader::InitNameTable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlDataLoader*>::get(), "InitNameTable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Data::XmlDataLoader::LoadData(::System::Xml::XmlReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlDataLoader*>::get(), "LoadData", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader);
}
inline void System::Data::XmlDataLoader::LoadTopMostTable(::System::Data::DataTable* table) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlDataLoader*>::get(), "LoadTopMostTable", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, table);
}
inline void System::Data::XmlDataLoader::LoadTable(::System::Data::DataTable* table, bool isNested) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlDataLoader*>::get(), "LoadTable", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, table, isNested);
}
inline void System::Data::XmlDataLoader::LoadColumn(::System::Data::DataColumn* column, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> foundColumns) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlDataLoader*>::get(), "LoadColumn", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, column, foundColumns);
}
inline bool System::Data::XmlDataLoader::ProcessXsdSchema() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlDataLoader*>::get(), "ProcessXsdSchema",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Data::XmlDataLoader* System::Data::XmlDataLoader::New_ctor(::System::Data::DataSet* dataset, bool IsXdr, bool ignoreSchema) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Data::XmlDataLoader*>(dataset, IsXdr, ignoreSchema));
}
inline ::System::Data::XmlDataLoader* System::Data::XmlDataLoader::New_ctor(::System::Data::DataSet* dataset, bool IsXdr, ::System::Xml::XmlElement* topNode, bool ignoreSchema) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Data::XmlDataLoader*>(dataset, IsXdr, topNode, ignoreSchema));
}
inline ::System::Data::XmlDataLoader* System::Data::XmlDataLoader::New_ctor(::System::Data::DataTable* datatable, bool IsXdr, bool ignoreSchema) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Data::XmlDataLoader*>(datatable, IsXdr, ignoreSchema));
}
inline ::System::Data::XmlDataLoader* System::Data::XmlDataLoader::New_ctor(::System::Data::DataTable* datatable, bool IsXdr, ::System::Xml::XmlElement* topNode, bool ignoreSchema) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Data::XmlDataLoader*>(datatable, IsXdr, topNode, ignoreSchema));
}
// Ctor Parameters []
constexpr ::System::Data::XmlDataLoader::XmlDataLoader() {}
