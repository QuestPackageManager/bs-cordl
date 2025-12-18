#pragma once
// IWYU pragma private; include "System/Xml/XmlDictionaryReader.hpp"
#include "System/Xml/zzzz__XmlReader_impl.hpp"
#include "System/Xml/zzzz__XmlDictionaryReader_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/Xml/zzzz__IXmlNamespaceResolver_def.hpp"
#include "System/Xml/zzzz__OnXmlDictionaryReaderClose_def.hpp"
#include "System/Xml/zzzz__UniqueId_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryReaderQuotas_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryReader_XmlWrappedReader_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryString_def.hpp"
#include "System/Xml/zzzz__XmlNodeType_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.CreateDictionaryReader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlDictionaryReader* (*)(::System::Xml::XmlReader*)>(
    &::System::Xml::XmlDictionaryReader::CreateDictionaryReader)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5f6b970;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), "CreateDictionaryReader", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.CreateTextReader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlDictionaryReader* (*)(::System::IO::Stream*, ::System::Xml::XmlDictionaryReaderQuotas*)>(
    &::System::Xml::XmlDictionaryReader::CreateTextReader)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f6ba70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), "CreateTextReader", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryReaderQuotas*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.CreateTextReader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Xml::XmlDictionaryReader* (*)(::System::IO::Stream*, ::System::Text::Encoding*, ::System::Xml::XmlDictionaryReaderQuotas*, ::System::Xml::OnXmlDictionaryReaderClose*)>(
        &::System::Xml::XmlDictionaryReader::CreateTextReader)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5f6ba80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), "CreateTextReader", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryReaderQuotas*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::OnXmlDictionaryReaderClose*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.get_Quotas
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlDictionaryReaderQuotas* (::System::Xml::XmlDictionaryReader::*)()>(
    &::System::Xml::XmlDictionaryReader::get_Quotas)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5f6bb1c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 75));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.MoveToStartElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlDictionaryReader::*)()>(&::System::Xml::XmlDictionaryReader::MoveToStartElement)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5f6bbb0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 76));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.IsLocalName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlDictionaryReader::*)(::StringW)>(&::System::Xml::XmlDictionaryReader::IsLocalName)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5f6bbe0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 77));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.IsLocalName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlDictionaryReader::*)(::System::Xml::XmlDictionaryString*)>(
    &::System::Xml::XmlDictionaryReader::IsLocalName)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5f6bc04;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 78));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.IsNamespaceUri
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlDictionaryReader::*)(::StringW)>(&::System::Xml::XmlDictionaryReader::IsNamespaceUri)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5f6bc50;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 79));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.IsNamespaceUri
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlDictionaryReader::*)(::System::Xml::XmlDictionaryString*)>(
    &::System::Xml::XmlDictionaryReader::IsNamespaceUri)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5f6bca4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 80));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.IsStartElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::System::Xml::XmlDictionaryReader::*)(::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*)>(&::System::Xml::XmlDictionaryReader::IsStartElement)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5f6bcf0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 81));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.IndexOfLocalName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlDictionaryReader::*)(
    ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*>, ::System::Xml::XmlDictionaryString*)>(&::System::Xml::XmlDictionaryReader::IndexOfLocalName)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5f6bd94;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 82));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.TryGetBase64ContentLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlDictionaryReader::*)(::ByRef<int32_t>)>(
    &::System::Xml::XmlDictionaryReader::TryGetBase64ContentLength)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f6bed8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 83));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadContentAsBase64
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::System::Xml::XmlDictionaryReader::*)()>(
    &::System::Xml::XmlDictionaryReader::ReadContentAsBase64)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5f6bee4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 84));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadContentAsBase64
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::System::Xml::XmlDictionaryReader::*)(int32_t, int32_t)>(
    &::System::Xml::XmlDictionaryReader::ReadContentAsBase64)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5f6bf18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), "ReadContentAsBase64", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadContentAsString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlDictionaryReader::*)()>(&::System::Xml::XmlDictionaryReader::ReadContentAsString)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5f6c270;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 29));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadContentAsString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlDictionaryReader::*)(int32_t)>(
    &::System::Xml::XmlDictionaryReader::ReadContentAsString)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x5f6c2a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), "ReadContentAsString", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlDictionaryReader::*)()>(&::System::Xml::XmlDictionaryReader::ReadString)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5f6c4c4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 63));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlDictionaryReader::*)(int32_t)>(&::System::Xml::XmlDictionaryReader::ReadString)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x5f6c4f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), "ReadString", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadContentAsBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::System::Xml::XmlDictionaryReader::*)(bool, int32_t)>(
    &::System::Xml::XmlDictionaryReader::ReadContentAsBytes)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x5f6c030;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), "ReadContentAsBytes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.IsTextNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlDictionaryReader::*)(::System::Xml::XmlNodeType)>(
    &::System::Xml::XmlDictionaryReader::IsTextNode)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f6c76c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), "IsTextNode", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNodeType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadContentAsChars
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlDictionaryReader::*)(::ArrayW<char16_t, ::Array<char16_t>*>, int32_t, int32_t)>(
    &::System::Xml::XmlDictionaryReader::ReadContentAsChars)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5f6c784;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 85));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadContentAs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Xml::XmlDictionaryReader::*)(::System::Type*, ::System::Xml::IXmlNamespaceResolver*)>(
    &::System::Xml::XmlDictionaryReader::ReadContentAs)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x5f6c854;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 30));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadContentAsDecimal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (::System::Xml::XmlDictionaryReader::*)()>(
    &::System::Xml::XmlDictionaryReader::ReadContentAsDecimal)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5f6cba4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 26));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadContentAsFloat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::System::Xml::XmlDictionaryReader::*)()>(&::System::Xml::XmlDictionaryReader::ReadContentAsFloat)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5f6cc18;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 25));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadContentAsUniqueId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::UniqueId* (::System::Xml::XmlDictionaryReader::*)()>(
    &::System::Xml::XmlDictionaryReader::ReadContentAsUniqueId)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5f6cc8c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 86));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadContentAsGuid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Guid (::System::Xml::XmlDictionaryReader::*)()>(&::System::Xml::XmlDictionaryReader::ReadContentAsGuid)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5f6cd00;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 87));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadContentAsTimeSpan
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (::System::Xml::XmlDictionaryReader::*)()>(
    &::System::Xml::XmlDictionaryReader::ReadContentAsTimeSpan)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5f6cd74;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 88));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadElementContentAsString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlDictionaryReader::*)()>(
    &::System::Xml::XmlDictionaryReader::ReadElementContentAsString)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5f6cde8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 38));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadElementContentAsBoolean
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlDictionaryReader::*)()>(&::System::Xml::XmlDictionaryReader::ReadElementContentAsBoolean)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5f6ce98;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 31));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadElementContentAsInt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlDictionaryReader::*)()>(&::System::Xml::XmlDictionaryReader::ReadElementContentAsInt)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5f6cf94;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 36));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadElementContentAsLong
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::System::Xml::XmlDictionaryReader::*)()>(&::System::Xml::XmlDictionaryReader::ReadElementContentAsLong)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5f6d090;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 37));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadElementContentAsFloat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::System::Xml::XmlDictionaryReader::*)()>(&::System::Xml::XmlDictionaryReader::ReadElementContentAsFloat)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5f6d18c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 34));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadElementContentAsDouble
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::System::Xml::XmlDictionaryReader::*)()>(
    &::System::Xml::XmlDictionaryReader::ReadElementContentAsDouble)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5f6d294;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 33));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadElementContentAsDecimal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (::System::Xml::XmlDictionaryReader::*)()>(
    &::System::Xml::XmlDictionaryReader::ReadElementContentAsDecimal)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5f6d39c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 35));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadElementContentAsDateTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::System::Xml::XmlDictionaryReader::*)()>(
    &::System::Xml::XmlDictionaryReader::ReadElementContentAsDateTime)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x5f6d4a4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 32));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadElementContentAsGuid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Guid (::System::Xml::XmlDictionaryReader::*)()>(
    &::System::Xml::XmlDictionaryReader::ReadElementContentAsGuid)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5f6d690;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 89));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadElementContentAsTimeSpan
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (::System::Xml::XmlDictionaryReader::*)()>(
    &::System::Xml::XmlDictionaryReader::ReadElementContentAsTimeSpan)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5f6d778;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 90));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadElementContentAsBase64
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::System::Xml::XmlDictionaryReader::*)()>(
    &::System::Xml::XmlDictionaryReader::ReadElementContentAsBase64)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5f6d874;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 91));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.TryGetLocalNameAsDictionaryString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlDictionaryReader::*)(::ByRef<::System::Xml::XmlDictionaryString*>)>(
    &::System::Xml::XmlDictionaryReader::TryGetLocalNameAsDictionaryString)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f6d954;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 92));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.TryGetNamespaceUriAsDictionaryString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlDictionaryReader::*)(::ByRef<::System::Xml::XmlDictionaryString*>)>(
    &::System::Xml::XmlDictionaryReader::TryGetNamespaceUriAsDictionaryString)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f6d960;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 93));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.TryGetValueAsDictionaryString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlDictionaryReader::*)(::ByRef<::System::Xml::XmlDictionaryString*>)>(
    &::System::Xml::XmlDictionaryReader::TryGetValueAsDictionaryString)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f6d96c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 94));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.CheckArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlDictionaryReader::*)(::System::Array*, int32_t, int32_t)>(
    &::System::Xml::XmlDictionaryReader::CheckArray)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x5f6d978;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), "CheckArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.IsStartArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlDictionaryReader::*)(::ByRef<::System::Type*>)>(
    &::System::Xml::XmlDictionaryReader::IsStartArray)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f6dbac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 95));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.TryGetArrayLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlDictionaryReader::*)(::ByRef<int32_t>)>(
    &::System::Xml::XmlDictionaryReader::TryGetArrayLength)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f6dbb8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 96));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::System::Xml::XmlDictionaryReader::*)(::StringW, ::StringW, ::ArrayW<bool, ::Array<bool>*>, int32_t, int32_t)>(&::System::Xml::XmlDictionaryReader::ReadArray)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5f6dbc4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 97));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlDictionaryReader::*)(
    ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*, ::ArrayW<bool, ::Array<bool>*>, int32_t, int32_t)>(&::System::Xml::XmlDictionaryReader::ReadArray)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5f6dcb0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 98));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::System::Xml::XmlDictionaryReader::*)(::StringW, ::StringW, ::ArrayW<int16_t, ::Array<int16_t>*>, int32_t, int32_t)>(&::System::Xml::XmlDictionaryReader::ReadArray)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5f6dd70;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 99));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlDictionaryReader::*)(
    ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*, ::ArrayW<int16_t, ::Array<int16_t>*>, int32_t, int32_t)>(&::System::Xml::XmlDictionaryReader::ReadArray)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5f6deec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 100));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::System::Xml::XmlDictionaryReader::*)(::StringW, ::StringW, ::ArrayW<int32_t, ::Array<int32_t>*>, int32_t, int32_t)>(&::System::Xml::XmlDictionaryReader::ReadArray)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5f6dfac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 101));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlDictionaryReader::*)(
    ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*, ::ArrayW<int32_t, ::Array<int32_t>*>, int32_t, int32_t)>(&::System::Xml::XmlDictionaryReader::ReadArray)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5f6e094;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 102));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::System::Xml::XmlDictionaryReader::*)(::StringW, ::StringW, ::ArrayW<int64_t, ::Array<int64_t>*>, int32_t, int32_t)>(&::System::Xml::XmlDictionaryReader::ReadArray)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5f6e154;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 103));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlDictionaryReader::*)(
    ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*, ::ArrayW<int64_t, ::Array<int64_t>*>, int32_t, int32_t)>(&::System::Xml::XmlDictionaryReader::ReadArray)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5f6e23c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 104));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::System::Xml::XmlDictionaryReader::*)(::StringW, ::StringW, ::ArrayW<float_t, ::Array<float_t>*>, int32_t, int32_t)>(&::System::Xml::XmlDictionaryReader::ReadArray)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5f6e2fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 105));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlDictionaryReader::*)(
    ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*, ::ArrayW<float_t, ::Array<float_t>*>, int32_t, int32_t)>(&::System::Xml::XmlDictionaryReader::ReadArray)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5f6e3e4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 106));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::System::Xml::XmlDictionaryReader::*)(::StringW, ::StringW, ::ArrayW<double_t, ::Array<double_t>*>, int32_t, int32_t)>(&::System::Xml::XmlDictionaryReader::ReadArray)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5f6e4a4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 107));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlDictionaryReader::*)(
    ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*, ::ArrayW<double_t, ::Array<double_t>*>, int32_t, int32_t)>(&::System::Xml::XmlDictionaryReader::ReadArray)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5f6e58c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 108));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlDictionaryReader::*)(
    ::StringW, ::StringW, ::ArrayW<::System::Decimal, ::Array<::System::Decimal>*>, int32_t, int32_t)>(&::System::Xml::XmlDictionaryReader::ReadArray)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5f6e64c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 109));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlDictionaryReader::*)(
    ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*, ::ArrayW<::System::Decimal, ::Array<::System::Decimal>*>, int32_t, int32_t)>(
    &::System::Xml::XmlDictionaryReader::ReadArray)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5f6e734;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 110));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlDictionaryReader::*)(
    ::StringW, ::StringW, ::ArrayW<::System::DateTime, ::Array<::System::DateTime>*>, int32_t, int32_t)>(&::System::Xml::XmlDictionaryReader::ReadArray)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5f6e7f4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 111));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlDictionaryReader::*)(
    ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*, ::ArrayW<::System::DateTime, ::Array<::System::DateTime>*>, int32_t, int32_t)>(
    &::System::Xml::XmlDictionaryReader::ReadArray)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5f6e8dc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 112));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlDictionaryReader::*)(
    ::StringW, ::StringW, ::ArrayW<::System::Guid, ::Array<::System::Guid>*>, int32_t, int32_t)>(&::System::Xml::XmlDictionaryReader::ReadArray)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5f6e99c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 113));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlDictionaryReader::*)(
    ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*, ::ArrayW<::System::Guid, ::Array<::System::Guid>*>, int32_t, int32_t)>(&::System::Xml::XmlDictionaryReader::ReadArray)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5f6ea84;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 114));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlDictionaryReader::*)(
    ::StringW, ::StringW, ::ArrayW<::System::TimeSpan, ::Array<::System::TimeSpan>*>, int32_t, int32_t)>(&::System::Xml::XmlDictionaryReader::ReadArray)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5f6eb44;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 115));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader.ReadArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlDictionaryReader::*)(
    ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*, ::ArrayW<::System::TimeSpan, ::Array<::System::TimeSpan>*>, int32_t, int32_t)>(
    &::System::Xml::XmlDictionaryReader::ReadArray)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5f6ec2c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 116));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryReader._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlDictionaryReader::*)()>(&::System::Xml::XmlDictionaryReader::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5f6ecec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::System::Xml::XmlDictionaryReader* System::Xml::XmlDictionaryReader::CreateDictionaryReader(::System::Xml::XmlReader* reader) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), "CreateDictionaryReader", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlDictionaryReader*, false>(nullptr, ___internal_method, reader);
}
inline ::System::Xml::XmlDictionaryReader* System::Xml::XmlDictionaryReader::CreateTextReader(::System::IO::Stream* stream, ::System::Xml::XmlDictionaryReaderQuotas* quotas) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), "CreateTextReader", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryReaderQuotas*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlDictionaryReader*, false>(nullptr, ___internal_method, stream, quotas);
}
inline ::System::Xml::XmlDictionaryReader* System::Xml::XmlDictionaryReader::CreateTextReader(::System::IO::Stream* stream, ::System::Text::Encoding* encoding,
                                                                                              ::System::Xml::XmlDictionaryReaderQuotas* quotas, ::System::Xml::OnXmlDictionaryReaderClose* onClose) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), "CreateTextReader", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryReaderQuotas*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::OnXmlDictionaryReaderClose*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlDictionaryReader*, false>(nullptr, ___internal_method, stream, encoding, quotas, onClose);
}
inline ::System::Xml::XmlDictionaryReaderQuotas* System::Xml::XmlDictionaryReader::get_Quotas() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 75)));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlDictionaryReaderQuotas*, false>(this, ___internal_method);
}
inline void System::Xml::XmlDictionaryReader::MoveToStartElement() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 76)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Xml::XmlDictionaryReader::IsLocalName(::StringW localName) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 77)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, localName);
}
inline bool System::Xml::XmlDictionaryReader::IsLocalName(::System::Xml::XmlDictionaryString* localName) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 78)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, localName);
}
inline bool System::Xml::XmlDictionaryReader::IsNamespaceUri(::StringW namespaceUri) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 79)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, namespaceUri);
}
inline bool System::Xml::XmlDictionaryReader::IsNamespaceUri(::System::Xml::XmlDictionaryString* namespaceUri) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 80)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, namespaceUri);
}
inline bool System::Xml::XmlDictionaryReader::IsStartElement(::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 81)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, localName, namespaceUri);
}
inline int32_t System::Xml::XmlDictionaryReader::IndexOfLocalName(::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*> localNames,
                                                                  ::System::Xml::XmlDictionaryString* namespaceUri) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 82)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, localNames, namespaceUri);
}
inline bool System::Xml::XmlDictionaryReader::TryGetBase64ContentLength(::ByRef<int32_t> length) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 83)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, length);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> System::Xml::XmlDictionaryReader::ReadContentAsBase64() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 84)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> System::Xml::XmlDictionaryReader::ReadContentAsBase64(int32_t maxByteArrayContentLength, int32_t maxInitialCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), "ReadContentAsBase64", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, maxByteArrayContentLength, maxInitialCount);
}
inline ::StringW System::Xml::XmlDictionaryReader::ReadContentAsString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 29)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlDictionaryReader::ReadContentAsString(int32_t maxStringContentLength) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), "ReadContentAsString",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, maxStringContentLength);
}
inline ::StringW System::Xml::XmlDictionaryReader::ReadString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 63)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlDictionaryReader::ReadString(int32_t maxStringContentLength) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), "ReadString",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, maxStringContentLength);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> System::Xml::XmlDictionaryReader::ReadContentAsBytes(bool base64, int32_t maxByteArrayContentLength) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), "ReadContentAsBytes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, base64, maxByteArrayContentLength);
}
inline bool System::Xml::XmlDictionaryReader::IsTextNode(::System::Xml::XmlNodeType nodeType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), "IsTextNode", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNodeType>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeType);
}
inline int32_t System::Xml::XmlDictionaryReader::ReadContentAsChars(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 85)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, chars, offset, count);
}
inline ::System::Object* System::Xml::XmlDictionaryReader::ReadContentAs(::System::Type* type, ::System::Xml::IXmlNamespaceResolver* namespaceResolver) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 30)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, type, namespaceResolver);
}
inline ::System::Decimal System::Xml::XmlDictionaryReader::ReadContentAsDecimal() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 26)));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal, false>(this, ___internal_method);
}
inline float_t System::Xml::XmlDictionaryReader::ReadContentAsFloat() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 25)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::System::Xml::UniqueId* System::Xml::XmlDictionaryReader::ReadContentAsUniqueId() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 86)));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::UniqueId*, false>(this, ___internal_method);
}
inline ::System::Guid System::Xml::XmlDictionaryReader::ReadContentAsGuid() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 87)));
  return ::cordl_internals::RunMethodRethrow<::System::Guid, false>(this, ___internal_method);
}
inline ::System::TimeSpan System::Xml::XmlDictionaryReader::ReadContentAsTimeSpan() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 88)));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlDictionaryReader::ReadElementContentAsString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 38)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool System::Xml::XmlDictionaryReader::ReadElementContentAsBoolean() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 31)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t System::Xml::XmlDictionaryReader::ReadElementContentAsInt() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 36)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int64_t System::Xml::XmlDictionaryReader::ReadElementContentAsLong() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 37)));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline float_t System::Xml::XmlDictionaryReader::ReadElementContentAsFloat() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 34)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline double_t System::Xml::XmlDictionaryReader::ReadElementContentAsDouble() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 33)));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline ::System::Decimal System::Xml::XmlDictionaryReader::ReadElementContentAsDecimal() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 35)));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal, false>(this, ___internal_method);
}
inline ::System::DateTime System::Xml::XmlDictionaryReader::ReadElementContentAsDateTime() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 32)));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(this, ___internal_method);
}
inline ::System::Guid System::Xml::XmlDictionaryReader::ReadElementContentAsGuid() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 89)));
  return ::cordl_internals::RunMethodRethrow<::System::Guid, false>(this, ___internal_method);
}
inline ::System::TimeSpan System::Xml::XmlDictionaryReader::ReadElementContentAsTimeSpan() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 90)));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> System::Xml::XmlDictionaryReader::ReadElementContentAsBase64() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 91)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline bool System::Xml::XmlDictionaryReader::TryGetLocalNameAsDictionaryString(::ByRef<::System::Xml::XmlDictionaryString*> localName) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 92)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, localName);
}
inline bool System::Xml::XmlDictionaryReader::TryGetNamespaceUriAsDictionaryString(::ByRef<::System::Xml::XmlDictionaryString*> namespaceUri) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 93)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, namespaceUri);
}
inline bool System::Xml::XmlDictionaryReader::TryGetValueAsDictionaryString(::ByRef<::System::Xml::XmlDictionaryString*> value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 94)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value);
}
inline void System::Xml::XmlDictionaryReader::CheckArray(::System::Array* array, int32_t offset, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), "CheckArray", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, array, offset, count);
}
inline bool System::Xml::XmlDictionaryReader::IsStartArray(::ByRef<::System::Type*> type) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 95)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, type);
}
inline bool System::Xml::XmlDictionaryReader::TryGetArrayLength(::ByRef<int32_t> count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 96)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, count);
}
inline int32_t System::Xml::XmlDictionaryReader::ReadArray(::StringW localName, ::StringW namespaceUri, ::ArrayW<bool, ::Array<bool>*> array, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 97)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, localName, namespaceUri, array, offset, count);
}
inline int32_t System::Xml::XmlDictionaryReader::ReadArray(::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri, ::ArrayW<bool, ::Array<bool>*> array,
                                                           int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 98)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, localName, namespaceUri, array, offset, count);
}
inline int32_t System::Xml::XmlDictionaryReader::ReadArray(::StringW localName, ::StringW namespaceUri, ::ArrayW<int16_t, ::Array<int16_t>*> array, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 99)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, localName, namespaceUri, array, offset, count);
}
inline int32_t System::Xml::XmlDictionaryReader::ReadArray(::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri, ::ArrayW<int16_t, ::Array<int16_t>*> array,
                                                           int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 100)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, localName, namespaceUri, array, offset, count);
}
inline int32_t System::Xml::XmlDictionaryReader::ReadArray(::StringW localName, ::StringW namespaceUri, ::ArrayW<int32_t, ::Array<int32_t>*> array, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 101)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, localName, namespaceUri, array, offset, count);
}
inline int32_t System::Xml::XmlDictionaryReader::ReadArray(::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri, ::ArrayW<int32_t, ::Array<int32_t>*> array,
                                                           int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 102)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, localName, namespaceUri, array, offset, count);
}
inline int32_t System::Xml::XmlDictionaryReader::ReadArray(::StringW localName, ::StringW namespaceUri, ::ArrayW<int64_t, ::Array<int64_t>*> array, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 103)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, localName, namespaceUri, array, offset, count);
}
inline int32_t System::Xml::XmlDictionaryReader::ReadArray(::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri, ::ArrayW<int64_t, ::Array<int64_t>*> array,
                                                           int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 104)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, localName, namespaceUri, array, offset, count);
}
inline int32_t System::Xml::XmlDictionaryReader::ReadArray(::StringW localName, ::StringW namespaceUri, ::ArrayW<float_t, ::Array<float_t>*> array, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 105)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, localName, namespaceUri, array, offset, count);
}
inline int32_t System::Xml::XmlDictionaryReader::ReadArray(::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri, ::ArrayW<float_t, ::Array<float_t>*> array,
                                                           int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 106)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, localName, namespaceUri, array, offset, count);
}
inline int32_t System::Xml::XmlDictionaryReader::ReadArray(::StringW localName, ::StringW namespaceUri, ::ArrayW<double_t, ::Array<double_t>*> array, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 107)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, localName, namespaceUri, array, offset, count);
}
inline int32_t System::Xml::XmlDictionaryReader::ReadArray(::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri,
                                                           ::ArrayW<double_t, ::Array<double_t>*> array, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 108)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, localName, namespaceUri, array, offset, count);
}
inline int32_t System::Xml::XmlDictionaryReader::ReadArray(::StringW localName, ::StringW namespaceUri, ::ArrayW<::System::Decimal, ::Array<::System::Decimal>*> array, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 109)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, localName, namespaceUri, array, offset, count);
}
inline int32_t System::Xml::XmlDictionaryReader::ReadArray(::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri,
                                                           ::ArrayW<::System::Decimal, ::Array<::System::Decimal>*> array, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 110)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, localName, namespaceUri, array, offset, count);
}
inline int32_t System::Xml::XmlDictionaryReader::ReadArray(::StringW localName, ::StringW namespaceUri, ::ArrayW<::System::DateTime, ::Array<::System::DateTime>*> array, int32_t offset,
                                                           int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 111)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, localName, namespaceUri, array, offset, count);
}
inline int32_t System::Xml::XmlDictionaryReader::ReadArray(::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri,
                                                           ::ArrayW<::System::DateTime, ::Array<::System::DateTime>*> array, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 112)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, localName, namespaceUri, array, offset, count);
}
inline int32_t System::Xml::XmlDictionaryReader::ReadArray(::StringW localName, ::StringW namespaceUri, ::ArrayW<::System::Guid, ::Array<::System::Guid>*> array, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 113)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, localName, namespaceUri, array, offset, count);
}
inline int32_t System::Xml::XmlDictionaryReader::ReadArray(::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri,
                                                           ::ArrayW<::System::Guid, ::Array<::System::Guid>*> array, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 114)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, localName, namespaceUri, array, offset, count);
}
inline int32_t System::Xml::XmlDictionaryReader::ReadArray(::StringW localName, ::StringW namespaceUri, ::ArrayW<::System::TimeSpan, ::Array<::System::TimeSpan>*> array, int32_t offset,
                                                           int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 115)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, localName, namespaceUri, array, offset, count);
}
inline int32_t System::Xml::XmlDictionaryReader::ReadArray(::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri,
                                                           ::ArrayW<::System::TimeSpan, ::Array<::System::TimeSpan>*> array, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), 116)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, localName, namespaceUri, array, offset, count);
}
inline void System::Xml::XmlDictionaryReader::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryReader*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Xml::XmlDictionaryReader* System::Xml::XmlDictionaryReader::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::XmlDictionaryReader*>());
}
// Ctor Parameters []
constexpr ::System::Xml::XmlDictionaryReader::XmlDictionaryReader() {}
