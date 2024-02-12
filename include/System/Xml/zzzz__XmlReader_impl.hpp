#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Xml/Schema/zzzz__IXmlSchemaInfo_def.hpp"
#include "System/Xml/zzzz__IDtdInfo_def.hpp"
#include "System/Xml/zzzz__ReadState_def.hpp"
#include "System/Xml/zzzz__XmlNameTable_def.hpp"
#include "System/Xml/zzzz__XmlNodeType_def.hpp"
#include "System/Xml/zzzz__XmlReaderSettings_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::System::Xml::XmlReader.get_Settings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlReaderSettings* (::System::Xml::XmlReader::*)()>(&::System::Xml::XmlReader::get_Settings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x285d47c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlReader*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.get_NodeType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNodeType (::System::Xml::XmlReader::*)()>(&::System::Xml::XmlReader::get_NodeType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlReader*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.get_Name
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlReader::*)()>(&::System::Xml::XmlReader::get_Name)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x285d484;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlReader*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.get_LocalName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlReader::*)()>(&::System::Xml::XmlReader::get_LocalName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlReader*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.get_NamespaceURI
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlReader::*)()>(&::System::Xml::XmlReader::get_NamespaceURI)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlReader*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.get_Prefix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlReader::*)()>(&::System::Xml::XmlReader::get_Prefix)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlReader*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.get_Value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlReader::*)()>(&::System::Xml::XmlReader::get_Value)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlReader*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.get_BaseURI
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlReader::*)()>(&::System::Xml::XmlReader::get_BaseURI)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlReader*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.get_IsEmptyElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlReader::*)()>(&::System::Xml::XmlReader::get_IsEmptyElement)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlReader*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.get_IsDefault
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlReader::*)()>(&::System::Xml::XmlReader::get_IsDefault)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x285d568;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlReader*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.get_SchemaInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::IXmlSchemaInfo* (::System::Xml::XmlReader::*)()>(&::System::Xml::XmlReader::get_SchemaInfo)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x285d570;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlReader*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.MoveToAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlReader::*)(::StringW)>(&::System::Xml::XmlReader::MoveToAttribute)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlReader*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.MoveToFirstAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlReader::*)()>(&::System::Xml::XmlReader::MoveToFirstAttribute)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlReader*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.MoveToNextAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlReader::*)()>(&::System::Xml::XmlReader::MoveToNextAttribute)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlReader*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.MoveToElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlReader::*)()>(&::System::Xml::XmlReader::MoveToElement)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlReader*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.ReadAttributeValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlReader::*)()>(&::System::Xml::XmlReader::ReadAttributeValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlReader*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.Read
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlReader::*)()>(&::System::Xml::XmlReader::Read)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlReader*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.Close
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlReader::*)()>(&::System::Xml::XmlReader::Close)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x285d5b8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlReader*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.get_ReadState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::ReadState (::System::Xml::XmlReader::*)()>(&::System::Xml::XmlReader::get_ReadState)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlReader*>::get(), 23));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.get_NameTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNameTable* (::System::Xml::XmlReader::*)()>(&::System::Xml::XmlReader::get_NameTable)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlReader*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.LookupNamespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlReader::*)(::StringW)>(&::System::Xml::XmlReader::LookupNamespace)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlReader*>::get(), 25));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.get_CanResolveEntity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlReader::*)()>(&::System::Xml::XmlReader::get_CanResolveEntity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x285d5bc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlReader*>::get(), 26));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.ResolveEntity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlReader::*)()>(&::System::Xml::XmlReader::ResolveEntity)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlReader*>::get(), 27));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlReader::*)()>(&::System::Xml::XmlReader::Dispose)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x285d5c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlReader*>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlReader::*)(bool)>(&::System::Xml::XmlReader::Dispose)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x285d5d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlReader*>::get(), 28));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.get_DtdInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::IDtdInfo* (::System::Xml::XmlReader::*)()>(&::System::Xml::XmlReader::get_DtdInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x285d61c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlReader*>::get(), 29));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader.CalcBufferSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::IO::Stream*)>(&::System::Xml::XmlReader::CalcBufferSize)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x285d624;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlReader*>::get(), "CalcBufferSize", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlReader._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlReader::*)()>(&::System::Xml::XmlReader::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x285d6a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlReader*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr System::Xml::XmlReader::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* System::Xml::XmlReader::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
inline void System::Xml::XmlReader::setStaticF_IsTextualNodeBitmap(uint32_t value) {
  ::cordl_internals::setStaticField<uint32_t, "IsTextualNodeBitmap", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlReader*>::get>(std::forward<uint32_t>(value));
}
inline uint32_t System::Xml::XmlReader::getStaticF_IsTextualNodeBitmap() {
  return ::cordl_internals::getStaticField<uint32_t, "IsTextualNodeBitmap", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlReader*>::get>();
}
inline void System::Xml::XmlReader::setStaticF_CanReadContentAsBitmap(uint32_t value) {
  ::cordl_internals::setStaticField<uint32_t, "CanReadContentAsBitmap", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlReader*>::get>(std::forward<uint32_t>(value));
}
inline uint32_t System::Xml::XmlReader::getStaticF_CanReadContentAsBitmap() {
  return ::cordl_internals::getStaticField<uint32_t, "CanReadContentAsBitmap", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlReader*>::get>();
}
inline void System::Xml::XmlReader::setStaticF_HasValueBitmap(uint32_t value) {
  ::cordl_internals::setStaticField<uint32_t, "HasValueBitmap", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlReader*>::get>(std::forward<uint32_t>(value));
}
inline uint32_t System::Xml::XmlReader::getStaticF_HasValueBitmap() {
  return ::cordl_internals::getStaticField<uint32_t, "HasValueBitmap", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlReader*>::get>();
}
inline ::System::Xml::XmlReaderSettings* System::Xml::XmlReader::get_Settings() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlReader*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlReaderSettings*, false>(this, ___internal_method);
}
inline ::System::Xml::XmlNodeType System::Xml::XmlReader::get_NodeType() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlReader*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNodeType, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlReader::get_Name() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlReader*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlReader::get_LocalName() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlReader*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlReader::get_NamespaceURI() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlReader*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlReader::get_Prefix() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlReader*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlReader::get_Value() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlReader*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlReader::get_BaseURI() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlReader*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool System::Xml::XmlReader::get_IsEmptyElement() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlReader*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Xml::XmlReader::get_IsDefault() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlReader*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Xml::Schema::IXmlSchemaInfo* System::Xml::XmlReader::get_SchemaInfo() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlReader*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::IXmlSchemaInfo*, false>(this, ___internal_method);
}
inline bool System::Xml::XmlReader::MoveToAttribute(::StringW name) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlReader*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, name);
}
inline bool System::Xml::XmlReader::MoveToFirstAttribute() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlReader*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Xml::XmlReader::MoveToNextAttribute() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlReader*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Xml::XmlReader::MoveToElement() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlReader*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Xml::XmlReader::ReadAttributeValue() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlReader*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Xml::XmlReader::Read() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlReader*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Xml::XmlReader::Close() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlReader*>::get(), 22)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Xml::ReadState System::Xml::XmlReader::get_ReadState() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlReader*>::get(), 23)));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::ReadState, false>(this, ___internal_method);
}
inline ::System::Xml::XmlNameTable* System::Xml::XmlReader::get_NameTable() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlReader*>::get(), 24)));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNameTable*, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlReader::LookupNamespace(::StringW prefix) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlReader*>::get(), 25)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, prefix);
}
inline bool System::Xml::XmlReader::get_CanResolveEntity() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlReader*>::get(), 26)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Xml::XmlReader::ResolveEntity() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlReader*>::get(), 27)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlReader::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlReader*>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlReader::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlReader*>::get(), 28)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline ::System::Xml::IDtdInfo* System::Xml::XmlReader::get_DtdInfo() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlReader*>::get(), 29)));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::IDtdInfo*, false>(this, ___internal_method);
}
inline int32_t System::Xml::XmlReader::CalcBufferSize(::System::IO::Stream* input) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlReader*>::get(), "CalcBufferSize", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, input);
}
inline ::System::Xml::XmlReader* System::Xml::XmlReader::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::XmlReader*>());
}
inline void System::Xml::XmlReader::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlReader*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Xml::XmlReader::XmlReader() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
