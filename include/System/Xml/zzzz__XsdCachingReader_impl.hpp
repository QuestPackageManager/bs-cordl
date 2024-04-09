#pragma once
#include "System/Xml/zzzz__XmlReader_impl.hpp"
#include "System/Xml/zzzz__XsdCachingReader_impl.hpp"
#include "System/Xml/zzzz__XsdCachingReader_def.hpp"
#include "System/Xml/zzzz__CachingEventHandler_def.hpp"
#include "System/Xml/zzzz__IXmlLineInfo_def.hpp"
#include "System/Xml/zzzz__ReadState_def.hpp"
#include "System/Xml/zzzz__ValidatingReaderNodeData_def.hpp"
#include "System/Xml/zzzz__XmlNameTable_def.hpp"
#include "System/Xml/zzzz__XmlNodeType_def.hpp"
#include "System/Xml/zzzz__XmlReaderSettings_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
#include "System/Xml/zzzz__XmlSpace_def.hpp"
#include "System/Xml/zzzz__XsdCachingReader_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::__XsdCachingReader__CachingReaderState::__XsdCachingReader__CachingReaderState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::__XsdCachingReader__CachingReaderState::__XsdCachingReader__CachingReaderState() {}
constexpr ::System::Xml::__XsdCachingReader__CachingReaderState System::Xml::__XsdCachingReader__CachingReaderState::None{ static_cast<int32_t>(0x0) };
constexpr ::System::Xml::__XsdCachingReader__CachingReaderState System::Xml::__XsdCachingReader__CachingReaderState::Init{ static_cast<int32_t>(0x1) };
constexpr ::System::Xml::__XsdCachingReader__CachingReaderState System::Xml::__XsdCachingReader__CachingReaderState::Record{ static_cast<int32_t>(0x2) };
constexpr ::System::Xml::__XsdCachingReader__CachingReaderState System::Xml::__XsdCachingReader__CachingReaderState::Replay{ static_cast<int32_t>(0x3) };
constexpr ::System::Xml::__XsdCachingReader__CachingReaderState System::Xml::__XsdCachingReader__CachingReaderState::ReaderClosed{ static_cast<int32_t>(0x4) };
constexpr ::System::Xml::__XsdCachingReader__CachingReaderState System::Xml::__XsdCachingReader__CachingReaderState::Error{ static_cast<int32_t>(0x5) };
//  Writing Method size for method: ::System::Xml::XsdCachingReader._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Xml::XsdCachingReader::*)(::System::Xml::XmlReader*, ::System::Xml::IXmlLineInfo*, ::System::Xml::CachingEventHandler*)>(&::System::Xml::XsdCachingReader::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2d8753c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::IXmlLineInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::CachingEventHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdCachingReader.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XsdCachingReader::*)()>(&::System::Xml::XsdCachingReader::Init)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x2d875f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), "Init",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdCachingReader.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XsdCachingReader::*)(::System::Xml::XmlReader*)>(&::System::Xml::XsdCachingReader::Reset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d87a34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), "Reset", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdCachingReader.get_Settings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlReaderSettings* (::System::Xml::XsdCachingReader::*)()>(
    &::System::Xml::XsdCachingReader::get_Settings)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2d87a3c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdCachingReader.get_NodeType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNodeType (::System::Xml::XsdCachingReader::*)()>(&::System::Xml::XsdCachingReader::get_NodeType)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2d87a5c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdCachingReader.get_Name
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XsdCachingReader::*)()>(&::System::Xml::XsdCachingReader::get_Name)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2d87a78;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdCachingReader.get_LocalName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XsdCachingReader::*)()>(&::System::Xml::XsdCachingReader::get_LocalName)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2d87a9c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdCachingReader.get_NamespaceURI
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XsdCachingReader::*)()>(&::System::Xml::XsdCachingReader::get_NamespaceURI)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2d87ab8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdCachingReader.get_Prefix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XsdCachingReader::*)()>(&::System::Xml::XsdCachingReader::get_Prefix)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2d87ad4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdCachingReader.get_Value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XsdCachingReader::*)()>(&::System::Xml::XsdCachingReader::get_Value)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2d87af0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdCachingReader.get_Depth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XsdCachingReader::*)()>(&::System::Xml::XsdCachingReader::get_Depth)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2d87b20;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdCachingReader.get_BaseURI
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XsdCachingReader::*)()>(&::System::Xml::XsdCachingReader::get_BaseURI)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2d87b3c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdCachingReader.get_IsEmptyElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XsdCachingReader::*)()>(&::System::Xml::XsdCachingReader::get_IsEmptyElement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d87b60;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdCachingReader.get_IsDefault
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XsdCachingReader::*)()>(&::System::Xml::XsdCachingReader::get_IsDefault)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d87b68;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdCachingReader.get_QuoteChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (::System::Xml::XsdCachingReader::*)()>(&::System::Xml::XsdCachingReader::get_QuoteChar)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2d87b70;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdCachingReader.get_XmlSpace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlSpace (::System::Xml::XsdCachingReader::*)()>(&::System::Xml::XsdCachingReader::get_XmlSpace)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2d87b94;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdCachingReader.get_XmlLang
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XsdCachingReader::*)()>(&::System::Xml::XsdCachingReader::get_XmlLang)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2d87bb8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdCachingReader.get_AttributeCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XsdCachingReader::*)()>(&::System::Xml::XsdCachingReader::get_AttributeCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d87bdc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdCachingReader.GetAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XsdCachingReader::*)(::StringW)>(&::System::Xml::XsdCachingReader::GetAttribute)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2d87be4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdCachingReader.GetAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XsdCachingReader::*)(::StringW, ::StringW)>(
    &::System::Xml::XsdCachingReader::GetAttribute)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x2d87dc0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), 23));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdCachingReader.GetAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XsdCachingReader::*)(int32_t)>(&::System::Xml::XsdCachingReader::GetAttribute)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2d87ed8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdCachingReader.MoveToAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XsdCachingReader::*)(::StringW)>(&::System::Xml::XsdCachingReader::MoveToAttribute)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2d87f6c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), 25));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdCachingReader.MoveToAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XsdCachingReader::*)(int32_t)>(&::System::Xml::XsdCachingReader::MoveToAttribute)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2d87ffc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), 26));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdCachingReader.MoveToFirstAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XsdCachingReader::*)()>(&::System::Xml::XsdCachingReader::MoveToFirstAttribute)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2d88090;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), 27));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdCachingReader.MoveToNextAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XsdCachingReader::*)()>(&::System::Xml::XsdCachingReader::MoveToNextAttribute)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2d880d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), 28));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdCachingReader.MoveToElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XsdCachingReader::*)()>(&::System::Xml::XsdCachingReader::MoveToElement)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2d8812c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), 29));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdCachingReader.Read
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XsdCachingReader::*)()>(&::System::Xml::XsdCachingReader::Read)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x2d88180;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), 31));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdCachingReader.RecordTextNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Xml::ValidatingReaderNodeData* (::System::Xml::XsdCachingReader::*)(::StringW, ::StringW, int32_t, int32_t, int32_t)>(&::System::Xml::XsdCachingReader::RecordTextNode)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2d88454;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), "RecordTextNode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdCachingReader.SwitchTextNodeAndEndElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XsdCachingReader::*)(::StringW, ::StringW)>(
    &::System::Xml::XsdCachingReader::SwitchTextNodeAndEndElement)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x2d884cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), "SwitchTextNodeAndEndElement", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdCachingReader.RecordEndElementNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XsdCachingReader::*)()>(&::System::Xml::XsdCachingReader::RecordEndElementNode)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x2d885cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), "RecordEndElementNode",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdCachingReader.get_EOF
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XsdCachingReader::*)()>(&::System::Xml::XsdCachingReader::get_EOF)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2d886fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), 32));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdCachingReader.Close
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XsdCachingReader::*)()>(&::System::Xml::XsdCachingReader::Close)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2d88738;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), 33));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdCachingReader.get_ReadState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::ReadState (::System::Xml::XsdCachingReader::*)()>(&::System::Xml::XsdCachingReader::get_ReadState)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2d8876c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), 34));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdCachingReader.Skip
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XsdCachingReader::*)()>(&::System::Xml::XsdCachingReader::Skip)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2d88790;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), 35));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdCachingReader.get_NameTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNameTable* (::System::Xml::XsdCachingReader::*)()>(
    &::System::Xml::XsdCachingReader::get_NameTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d888a4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), 36));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdCachingReader.LookupNamespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XsdCachingReader::*)(::StringW)>(&::System::Xml::XsdCachingReader::LookupNamespace)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2d888ac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), 37));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdCachingReader.ResolveEntity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XsdCachingReader::*)()>(&::System::Xml::XsdCachingReader::ResolveEntity)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2d888d0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), 39));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdCachingReader.ReadAttributeValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XsdCachingReader::*)()>(&::System::Xml::XsdCachingReader::ReadAttributeValue)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2d88910;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), 30));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdCachingReader.System_Xml_IXmlLineInfo_HasLineInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XsdCachingReader::*)()>(&::System::Xml::XsdCachingReader::System_Xml_IXmlLineInfo_HasLineInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d889e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), "System.Xml.IXmlLineInfo.HasLineInfo",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdCachingReader.System_Xml_IXmlLineInfo_get_LineNumber
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XsdCachingReader::*)()>(
    &::System::Xml::XsdCachingReader::System_Xml_IXmlLineInfo_get_LineNumber)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2d889e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), "System.Xml.IXmlLineInfo.get_LineNumber",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdCachingReader.System_Xml_IXmlLineInfo_get_LinePosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XsdCachingReader::*)()>(
    &::System::Xml::XsdCachingReader::System_Xml_IXmlLineInfo_get_LinePosition)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2d88a04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), "System.Xml.IXmlLineInfo.get_LinePosition",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdCachingReader.SetToReplayMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XsdCachingReader::*)()>(&::System::Xml::XsdCachingReader::SetToReplayMode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2d88a20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), "SetToReplayMode",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdCachingReader.GetCoreReader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlReader* (::System::Xml::XsdCachingReader::*)()>(&::System::Xml::XsdCachingReader::GetCoreReader)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d88a40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), "GetCoreReader",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdCachingReader.GetLineInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::IXmlLineInfo* (::System::Xml::XsdCachingReader::*)()>(&::System::Xml::XsdCachingReader::GetLineInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d88a48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), "GetLineInfo",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdCachingReader.ClearAttributesInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XsdCachingReader::*)()>(&::System::Xml::XsdCachingReader::ClearAttributesInfo)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2d88444;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), "ClearAttributesInfo",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdCachingReader.AddAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::ValidatingReaderNodeData* (::System::Xml::XsdCachingReader::*)(int32_t)>(
    &::System::Xml::XsdCachingReader::AddAttribute)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x2d88a50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), "AddAttribute", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdCachingReader.AddContent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::ValidatingReaderNodeData* (::System::Xml::XsdCachingReader::*)(::System::Xml::XmlNodeType)>(
    &::System::Xml::XsdCachingReader::AddContent)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x2d87748;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), "AddContent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNodeType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdCachingReader.RecordAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XsdCachingReader::*)()>(&::System::Xml::XsdCachingReader::RecordAttributes)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x2d878bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), "RecordAttributes",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdCachingReader.GetAttributeIndexWithoutPrefix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XsdCachingReader::*)(::StringW)>(
    &::System::Xml::XsdCachingReader::GetAttributeIndexWithoutPrefix)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2d87c70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), "GetAttributeIndexWithoutPrefix",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdCachingReader.GetAttributeIndexWithPrefix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XsdCachingReader::*)(::StringW)>(
    &::System::Xml::XsdCachingReader::GetAttributeIndexWithPrefix)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2d87d20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), "GetAttributeIndexWithPrefix",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XsdCachingReader.CreateDummyTextNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::ValidatingReaderNodeData* (::System::Xml::XsdCachingReader::*)(::StringW, int32_t)>(
    &::System::Xml::XsdCachingReader::CreateDummyTextNode)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2d88958;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), "CreateDummyTextNode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Xml::IXmlLineInfo"
constexpr System::Xml::XsdCachingReader::operator ::System::Xml::IXmlLineInfo*() noexcept {
  return static_cast<::System::Xml::IXmlLineInfo*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Xml::IXmlLineInfo"
constexpr ::System::Xml::IXmlLineInfo* System::Xml::XsdCachingReader::i___System__Xml__IXmlLineInfo() noexcept {
  return static_cast<::System::Xml::IXmlLineInfo*>(static_cast<void*>(this));
}
constexpr ::System::Xml::XmlReader*& System::Xml::XsdCachingReader::__cordl_internal_get_coreReader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___coreReader;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlReader*> const& System::Xml::XsdCachingReader::__cordl_internal_get_coreReader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___coreReader;
}
constexpr void System::Xml::XsdCachingReader::__cordl_internal_set_coreReader(::System::Xml::XmlReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___coreReader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlNameTable*& System::Xml::XsdCachingReader::__cordl_internal_get_coreReaderNameTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___coreReaderNameTable;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlNameTable*> const& System::Xml::XsdCachingReader::__cordl_internal_get_coreReaderNameTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___coreReaderNameTable;
}
constexpr void System::Xml::XsdCachingReader::__cordl_internal_set_coreReaderNameTable(::System::Xml::XmlNameTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___coreReaderNameTable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Xml::ValidatingReaderNodeData*, ::Array<::System::Xml::ValidatingReaderNodeData*>*>& System::Xml::XsdCachingReader::__cordl_internal_get_contentEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contentEvents;
}
constexpr ::ArrayW<::System::Xml::ValidatingReaderNodeData*, ::Array<::System::Xml::ValidatingReaderNodeData*>*> const& System::Xml::XsdCachingReader::__cordl_internal_get_contentEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contentEvents;
}
constexpr void System::Xml::XsdCachingReader::__cordl_internal_set_contentEvents(::ArrayW<::System::Xml::ValidatingReaderNodeData*, ::Array<::System::Xml::ValidatingReaderNodeData*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___contentEvents)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Xml::ValidatingReaderNodeData*, ::Array<::System::Xml::ValidatingReaderNodeData*>*>& System::Xml::XsdCachingReader::__cordl_internal_get_attributeEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeEvents;
}
constexpr ::ArrayW<::System::Xml::ValidatingReaderNodeData*, ::Array<::System::Xml::ValidatingReaderNodeData*>*> const& System::Xml::XsdCachingReader::__cordl_internal_get_attributeEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeEvents;
}
constexpr void System::Xml::XsdCachingReader::__cordl_internal_set_attributeEvents(::ArrayW<::System::Xml::ValidatingReaderNodeData*, ::Array<::System::Xml::ValidatingReaderNodeData*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___attributeEvents)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::ValidatingReaderNodeData*& System::Xml::XsdCachingReader::__cordl_internal_get_cachedNode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cachedNode;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::ValidatingReaderNodeData*> const& System::Xml::XsdCachingReader::__cordl_internal_get_cachedNode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cachedNode;
}
constexpr void System::Xml::XsdCachingReader::__cordl_internal_set_cachedNode(::System::Xml::ValidatingReaderNodeData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cachedNode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::__XsdCachingReader__CachingReaderState& System::Xml::XsdCachingReader::__cordl_internal_get_cacheState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cacheState;
}
constexpr ::System::Xml::__XsdCachingReader__CachingReaderState const& System::Xml::XsdCachingReader::__cordl_internal_get_cacheState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cacheState;
}
constexpr void System::Xml::XsdCachingReader::__cordl_internal_set_cacheState(::System::Xml::__XsdCachingReader__CachingReaderState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cacheState = value;
}
constexpr int32_t& System::Xml::XsdCachingReader::__cordl_internal_get_contentIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contentIndex;
}
constexpr int32_t const& System::Xml::XsdCachingReader::__cordl_internal_get_contentIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contentIndex;
}
constexpr void System::Xml::XsdCachingReader::__cordl_internal_set_contentIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___contentIndex = value;
}
constexpr int32_t& System::Xml::XsdCachingReader::__cordl_internal_get_attributeCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeCount;
}
constexpr int32_t const& System::Xml::XsdCachingReader::__cordl_internal_get_attributeCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeCount;
}
constexpr void System::Xml::XsdCachingReader::__cordl_internal_set_attributeCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___attributeCount = value;
}
constexpr bool& System::Xml::XsdCachingReader::__cordl_internal_get_returnOriginalStringValues() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___returnOriginalStringValues;
}
constexpr bool const& System::Xml::XsdCachingReader::__cordl_internal_get_returnOriginalStringValues() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___returnOriginalStringValues;
}
constexpr void System::Xml::XsdCachingReader::__cordl_internal_set_returnOriginalStringValues(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___returnOriginalStringValues = value;
}
constexpr ::System::Xml::CachingEventHandler*& System::Xml::XsdCachingReader::__cordl_internal_get_cacheHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cacheHandler;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::CachingEventHandler*> const& System::Xml::XsdCachingReader::__cordl_internal_get_cacheHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cacheHandler;
}
constexpr void System::Xml::XsdCachingReader::__cordl_internal_set_cacheHandler(::System::Xml::CachingEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cacheHandler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Xml::XsdCachingReader::__cordl_internal_get_currentAttrIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentAttrIndex;
}
constexpr int32_t const& System::Xml::XsdCachingReader::__cordl_internal_get_currentAttrIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentAttrIndex;
}
constexpr void System::Xml::XsdCachingReader::__cordl_internal_set_currentAttrIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currentAttrIndex = value;
}
constexpr int32_t& System::Xml::XsdCachingReader::__cordl_internal_get_currentContentIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentContentIndex;
}
constexpr int32_t const& System::Xml::XsdCachingReader::__cordl_internal_get_currentContentIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentContentIndex;
}
constexpr void System::Xml::XsdCachingReader::__cordl_internal_set_currentContentIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currentContentIndex = value;
}
constexpr bool& System::Xml::XsdCachingReader::__cordl_internal_get_readAhead() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readAhead;
}
constexpr bool const& System::Xml::XsdCachingReader::__cordl_internal_get_readAhead() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readAhead;
}
constexpr void System::Xml::XsdCachingReader::__cordl_internal_set_readAhead(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___readAhead = value;
}
constexpr ::System::Xml::IXmlLineInfo*& System::Xml::XsdCachingReader::__cordl_internal_get_lineInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lineInfo;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::IXmlLineInfo*> const& System::Xml::XsdCachingReader::__cordl_internal_get_lineInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lineInfo;
}
constexpr void System::Xml::XsdCachingReader::__cordl_internal_set_lineInfo(::System::Xml::IXmlLineInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lineInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::ValidatingReaderNodeData*& System::Xml::XsdCachingReader::__cordl_internal_get_textNode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textNode;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::ValidatingReaderNodeData*> const& System::Xml::XsdCachingReader::__cordl_internal_get_textNode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textNode;
}
constexpr void System::Xml::XsdCachingReader::__cordl_internal_set_textNode(::System::Xml::ValidatingReaderNodeData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___textNode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Xml::XsdCachingReader* System::Xml::XsdCachingReader::New_ctor(::System::Xml::XmlReader* reader, ::System::Xml::IXmlLineInfo* lineInfo,
                                                                                ::System::Xml::CachingEventHandler* handlerMethod) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::XsdCachingReader*>(reader, lineInfo, handlerMethod));
}
inline void System::Xml::XsdCachingReader::_ctor(::System::Xml::XmlReader* reader, ::System::Xml::IXmlLineInfo* lineInfo, ::System::Xml::CachingEventHandler* handlerMethod) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReader*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::IXmlLineInfo*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::CachingEventHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader, lineInfo, handlerMethod);
}
inline void System::Xml::XsdCachingReader::Init() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), "Init",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XsdCachingReader::Reset(::System::Xml::XmlReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), "Reset", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader);
}
inline ::System::Xml::XmlReaderSettings* System::Xml::XsdCachingReader::get_Settings() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlReaderSettings*, false>(this, ___internal_method);
}
inline ::System::Xml::XmlNodeType System::Xml::XsdCachingReader::get_NodeType() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNodeType, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XsdCachingReader::get_Name() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XsdCachingReader::get_LocalName() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XsdCachingReader::get_NamespaceURI() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XsdCachingReader::get_Prefix() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XsdCachingReader::get_Value() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline int32_t System::Xml::XsdCachingReader::get_Depth() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XsdCachingReader::get_BaseURI() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool System::Xml::XsdCachingReader::get_IsEmptyElement() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Xml::XsdCachingReader::get_IsDefault() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline char16_t System::Xml::XsdCachingReader::get_QuoteChar() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<char16_t, false>(this, ___internal_method);
}
inline ::System::Xml::XmlSpace System::Xml::XsdCachingReader::get_XmlSpace() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlSpace, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XsdCachingReader::get_XmlLang() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline int32_t System::Xml::XsdCachingReader::get_AttributeCount() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XsdCachingReader::GetAttribute(::StringW name) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), 22)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, name);
}
inline ::StringW System::Xml::XsdCachingReader::GetAttribute(::StringW name, ::StringW namespaceURI) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), 23)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, name, namespaceURI);
}
inline ::StringW System::Xml::XsdCachingReader::GetAttribute(int32_t i) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), 24)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, i);
}
inline bool System::Xml::XsdCachingReader::MoveToAttribute(::StringW name) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), 25)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, name);
}
inline void System::Xml::XsdCachingReader::MoveToAttribute(int32_t i) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), 26)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, i);
}
inline bool System::Xml::XsdCachingReader::MoveToFirstAttribute() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), 27)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Xml::XsdCachingReader::MoveToNextAttribute() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), 28)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Xml::XsdCachingReader::MoveToElement() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), 29)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Xml::XsdCachingReader::Read() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), 31)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Xml::ValidatingReaderNodeData* System::Xml::XsdCachingReader::RecordTextNode(::StringW textValue, ::StringW originalStringValue, int32_t depth, int32_t lineNo, int32_t linePos) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), "RecordTextNode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::ValidatingReaderNodeData*, false>(this, ___internal_method, textValue, originalStringValue, depth, lineNo, linePos);
}
inline void System::Xml::XsdCachingReader::SwitchTextNodeAndEndElement(::StringW textValue, ::StringW originalStringValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), "SwitchTextNodeAndEndElement", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, textValue, originalStringValue);
}
inline void System::Xml::XsdCachingReader::RecordEndElementNode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), "RecordEndElementNode",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Xml::XsdCachingReader::get_EOF() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), 32)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Xml::XsdCachingReader::Close() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), 33)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Xml::ReadState System::Xml::XsdCachingReader::get_ReadState() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), 34)));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::ReadState, false>(this, ___internal_method);
}
inline void System::Xml::XsdCachingReader::Skip() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), 35)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Xml::XmlNameTable* System::Xml::XsdCachingReader::get_NameTable() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), 36)));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNameTable*, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XsdCachingReader::LookupNamespace(::StringW prefix) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), 37)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, prefix);
}
inline void System::Xml::XsdCachingReader::ResolveEntity() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), 39)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Xml::XsdCachingReader::ReadAttributeValue() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), 30)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Xml::XsdCachingReader::System_Xml_IXmlLineInfo_HasLineInfo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), "System.Xml.IXmlLineInfo.HasLineInfo",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t System::Xml::XsdCachingReader::System_Xml_IXmlLineInfo_get_LineNumber() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), "System.Xml.IXmlLineInfo.get_LineNumber",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::Xml::XsdCachingReader::System_Xml_IXmlLineInfo_get_LinePosition() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), "System.Xml.IXmlLineInfo.get_LinePosition",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void System::Xml::XsdCachingReader::SetToReplayMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), "SetToReplayMode",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Xml::XmlReader* System::Xml::XsdCachingReader::GetCoreReader() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), "GetCoreReader",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlReader*, false>(this, ___internal_method);
}
inline ::System::Xml::IXmlLineInfo* System::Xml::XsdCachingReader::GetLineInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), "GetLineInfo",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::IXmlLineInfo*, false>(this, ___internal_method);
}
inline void System::Xml::XsdCachingReader::ClearAttributesInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), "ClearAttributesInfo",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Xml::ValidatingReaderNodeData* System::Xml::XsdCachingReader::AddAttribute(int32_t attIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), "AddAttribute",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::ValidatingReaderNodeData*, false>(this, ___internal_method, attIndex);
}
inline ::System::Xml::ValidatingReaderNodeData* System::Xml::XsdCachingReader::AddContent(::System::Xml::XmlNodeType nodeType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), "AddContent", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNodeType>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::ValidatingReaderNodeData*, false>(this, ___internal_method, nodeType);
}
inline void System::Xml::XsdCachingReader::RecordAttributes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), "RecordAttributes",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t System::Xml::XsdCachingReader::GetAttributeIndexWithoutPrefix(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), "GetAttributeIndexWithoutPrefix",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, name);
}
inline int32_t System::Xml::XsdCachingReader::GetAttributeIndexWithPrefix(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), "GetAttributeIndexWithPrefix",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, name);
}
inline ::System::Xml::ValidatingReaderNodeData* System::Xml::XsdCachingReader::CreateDummyTextNode(::StringW attributeValue, int32_t depth) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XsdCachingReader*>::get(), "CreateDummyTextNode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::ValidatingReaderNodeData*, false>(this, ___internal_method, attributeValue, depth);
}
// Ctor Parameters []
constexpr ::System::Xml::XsdCachingReader::XsdCachingReader() {}
