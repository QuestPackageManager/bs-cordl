#pragma once
// IWYU pragma private; include "System/Xml/Serialization/XmlSerializer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Serialization/zzzz__XmlSerializer_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/IO/zzzz__TextReader_def.hpp"
#include "System/IO/zzzz__TextWriter_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/Xml/Serialization/zzzz__UnreferencedObjectEventArgs_def.hpp"
#include "System/Xml/Serialization/zzzz__UnreferencedObjectEventHandler_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlAttributeEventArgs_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlAttributeEventHandler_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlAttributeOverrides_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlElementEventArgs_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlElementEventHandler_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlMapping_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlNodeEventArgs_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlNodeEventHandler_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlRootAttribute_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlSerializationReader_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlSerializationWriter_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlSerializerImplementation_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlSerializerNamespaces_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlSerializer_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
#include "System/Xml/zzzz__XmlWriter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializer_SerializerData.CreateWriter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Serialization::XmlSerializationWriter* (
    ::System::Xml::Serialization::XmlSerializer_SerializerData::*)()>(&::System::Xml::Serialization::XmlSerializer_SerializerData::CreateWriter)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x60f551c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializer_SerializerData*>::get(), "CreateWriter",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Reflection::MethodInfo*& System::Xml::Serialization::XmlSerializer_SerializerData::__cordl_internal_get_ReaderMethod() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ReaderMethod;
}
constexpr ::System::Reflection::MethodInfo* const& System::Xml::Serialization::XmlSerializer_SerializerData::__cordl_internal_get_ReaderMethod() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ReaderMethod;
}
constexpr void System::Xml::Serialization::XmlSerializer_SerializerData::__cordl_internal_set_ReaderMethod(::System::Reflection::MethodInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ReaderMethod)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Type*& System::Xml::Serialization::XmlSerializer_SerializerData::__cordl_internal_get_WriterType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___WriterType;
}
constexpr ::System::Type* const& System::Xml::Serialization::XmlSerializer_SerializerData::__cordl_internal_get_WriterType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___WriterType;
}
constexpr void System::Xml::Serialization::XmlSerializer_SerializerData::__cordl_internal_set_WriterType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___WriterType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Reflection::MethodInfo*& System::Xml::Serialization::XmlSerializer_SerializerData::__cordl_internal_get_WriterMethod() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___WriterMethod;
}
constexpr ::System::Reflection::MethodInfo* const& System::Xml::Serialization::XmlSerializer_SerializerData::__cordl_internal_get_WriterMethod() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___WriterMethod;
}
constexpr void System::Xml::Serialization::XmlSerializer_SerializerData::__cordl_internal_set_WriterMethod(::System::Reflection::MethodInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___WriterMethod)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Serialization::XmlSerializerImplementation*& System::Xml::Serialization::XmlSerializer_SerializerData::__cordl_internal_get_Implementation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Implementation;
}
constexpr ::System::Xml::Serialization::XmlSerializerImplementation* const& System::Xml::Serialization::XmlSerializer_SerializerData::__cordl_internal_get_Implementation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Implementation;
}
constexpr void System::Xml::Serialization::XmlSerializer_SerializerData::__cordl_internal_set_Implementation(::System::Xml::Serialization::XmlSerializerImplementation* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Implementation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Xml::Serialization::XmlSerializationWriter* System::Xml::Serialization::XmlSerializer_SerializerData::CreateWriter() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializer_SerializerData*>::get(),
                                                                             "CreateWriter", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::XmlSerializationWriter*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::XmlSerializer_SerializerData::XmlSerializer_SerializerData() {}
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlSerializer::*)(
    ::System::Type*, ::System::Xml::Serialization::XmlAttributeOverrides*, ::ArrayW<::System::Type*, ::Array<::System::Type*>*>, ::System::Xml::Serialization::XmlRootAttribute*, ::StringW)>(
    &::System::Xml::Serialization::XmlSerializer::_ctor)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x60f462c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlAttributeOverrides*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlRootAttribute*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializer.get_Mapping
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Serialization::XmlMapping* (::System::Xml::Serialization::XmlSerializer::*)()>(
    &::System::Xml::Serialization::XmlSerializer::get_Mapping)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60f478c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializer*>::get(),
                                                                               "get_Mapping", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializer.OnUnknownAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlSerializer::*)(::System::Xml::Serialization::XmlAttributeEventArgs*)>(
    &::System::Xml::Serialization::XmlSerializer::OnUnknownAttribute)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x60f4794;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializer*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializer.OnUnknownElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlSerializer::*)(::System::Xml::Serialization::XmlElementEventArgs*)>(
    &::System::Xml::Serialization::XmlSerializer::OnUnknownElement)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x60f47bc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializer*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializer.OnUnknownNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlSerializer::*)(::System::Xml::Serialization::XmlNodeEventArgs*)>(
    &::System::Xml::Serialization::XmlSerializer::OnUnknownNode)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x60f47e4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializer*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializer.OnUnreferencedObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlSerializer::*)(::System::Xml::Serialization::UnreferencedObjectEventArgs*)>(
    &::System::Xml::Serialization::XmlSerializer::OnUnreferencedObject)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x60f480c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializer*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializer.CreateReader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Serialization::XmlSerializationReader* (::System::Xml::Serialization::XmlSerializer::*)()>(
    &::System::Xml::Serialization::XmlSerializer::CreateReader)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x60f4834;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializer*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializer.CreateWriter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Serialization::XmlSerializationWriter* (::System::Xml::Serialization::XmlSerializer::*)()>(
    &::System::Xml::Serialization::XmlSerializer::CreateWriter)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x60f486c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializer*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializer.Deserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Xml::Serialization::XmlSerializer::*)(::System::IO::TextReader*)>(
    &::System::Xml::Serialization::XmlSerializer::Deserialize)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x60f48a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializer*>::get(), "Deserialize", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::TextReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializer.Deserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Xml::Serialization::XmlSerializer::*)(::System::Xml::XmlReader*)>(
    &::System::Xml::Serialization::XmlSerializer::Deserialize)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x60f4944;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializer*>::get(), "Deserialize", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializer.Deserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::System::Xml::Serialization::XmlSerializer::*)(::System::Xml::Serialization::XmlSerializationReader*)>(&::System::Xml::Serialization::XmlSerializer::Deserialize)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x60f4a14;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializer*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializer.Serialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlSerializer::*)(
    ::System::Object*, ::System::Xml::Serialization::XmlSerializationWriter*)>(&::System::Xml::Serialization::XmlSerializer::Serialize)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x60f4d24;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializer*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializer.Serialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlSerializer::*)(::System::IO::TextWriter*, ::System::Object*)>(
    &::System::Xml::Serialization::XmlSerializer::Serialize)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x60f4f48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializer*>::get(), "Serialize", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::TextWriter*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializer.Serialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlSerializer::*)(::System::Xml::XmlWriter*, ::System::Object*)>(
    &::System::Xml::Serialization::XmlSerializer::Serialize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60f531c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializer*>::get(), "Serialize", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlWriter*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializer.Serialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlSerializer::*)(
    ::System::Xml::XmlWriter*, ::System::Object*, ::System::Xml::Serialization::XmlSerializerNamespaces*)>(&::System::Xml::Serialization::XmlSerializer::Serialize)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x60f4fd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializer*>::get(), "Serialize", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlWriter*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlSerializerNamespaces*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializer.CreateWriter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Serialization::XmlSerializationWriter* (
    ::System::Xml::Serialization::XmlSerializer::*)(::System::Xml::Serialization::XmlMapping*)>(&::System::Xml::Serialization::XmlSerializer::CreateWriter)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x60f5324;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializer*>::get(), "CreateWriter", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlMapping*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializer.CreateReader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Serialization::XmlSerializationReader* (
    ::System::Xml::Serialization::XmlSerializer::*)(::System::Xml::Serialization::XmlMapping*)>(&::System::Xml::Serialization::XmlSerializer::CreateReader)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x60f49b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializer*>::get(), "CreateReader", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlMapping*>::get() })));
    return ___internal_method;
  }
};
constexpr bool& System::Xml::Serialization::XmlSerializer::__cordl_internal_get_customSerializer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___customSerializer;
}
constexpr bool const& System::Xml::Serialization::XmlSerializer::__cordl_internal_get_customSerializer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___customSerializer;
}
constexpr void System::Xml::Serialization::XmlSerializer::__cordl_internal_set_customSerializer(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___customSerializer = value;
}
constexpr ::System::Xml::Serialization::XmlMapping*& System::Xml::Serialization::XmlSerializer::__cordl_internal_get_typeMapping() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___typeMapping;
}
constexpr ::System::Xml::Serialization::XmlMapping* const& System::Xml::Serialization::XmlSerializer::__cordl_internal_get_typeMapping() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___typeMapping;
}
constexpr void System::Xml::Serialization::XmlSerializer::__cordl_internal_set_typeMapping(::System::Xml::Serialization::XmlMapping* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___typeMapping)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Serialization::XmlSerializer_SerializerData*& System::Xml::Serialization::XmlSerializer::__cordl_internal_get_serializerData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serializerData;
}
constexpr ::System::Xml::Serialization::XmlSerializer_SerializerData* const& System::Xml::Serialization::XmlSerializer::__cordl_internal_get_serializerData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serializerData;
}
constexpr void System::Xml::Serialization::XmlSerializer::__cordl_internal_set_serializerData(::System::Xml::Serialization::XmlSerializer_SerializerData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___serializerData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Serialization::UnreferencedObjectEventHandler*& System::Xml::Serialization::XmlSerializer::__cordl_internal_get_onUnreferencedObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onUnreferencedObject;
}
constexpr ::System::Xml::Serialization::UnreferencedObjectEventHandler* const& System::Xml::Serialization::XmlSerializer::__cordl_internal_get_onUnreferencedObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onUnreferencedObject;
}
constexpr void System::Xml::Serialization::XmlSerializer::__cordl_internal_set_onUnreferencedObject(::System::Xml::Serialization::UnreferencedObjectEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onUnreferencedObject)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Serialization::XmlAttributeEventHandler*& System::Xml::Serialization::XmlSerializer::__cordl_internal_get_onUnknownAttribute() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onUnknownAttribute;
}
constexpr ::System::Xml::Serialization::XmlAttributeEventHandler* const& System::Xml::Serialization::XmlSerializer::__cordl_internal_get_onUnknownAttribute() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onUnknownAttribute;
}
constexpr void System::Xml::Serialization::XmlSerializer::__cordl_internal_set_onUnknownAttribute(::System::Xml::Serialization::XmlAttributeEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onUnknownAttribute)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Serialization::XmlElementEventHandler*& System::Xml::Serialization::XmlSerializer::__cordl_internal_get_onUnknownElement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onUnknownElement;
}
constexpr ::System::Xml::Serialization::XmlElementEventHandler* const& System::Xml::Serialization::XmlSerializer::__cordl_internal_get_onUnknownElement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onUnknownElement;
}
constexpr void System::Xml::Serialization::XmlSerializer::__cordl_internal_set_onUnknownElement(::System::Xml::Serialization::XmlElementEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onUnknownElement)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Serialization::XmlNodeEventHandler*& System::Xml::Serialization::XmlSerializer::__cordl_internal_get_onUnknownNode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onUnknownNode;
}
constexpr ::System::Xml::Serialization::XmlNodeEventHandler* const& System::Xml::Serialization::XmlSerializer::__cordl_internal_get_onUnknownNode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onUnknownNode;
}
constexpr void System::Xml::Serialization::XmlSerializer::__cordl_internal_set_onUnknownNode(::System::Xml::Serialization::XmlNodeEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onUnknownNode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Xml::Serialization::XmlSerializer::setStaticF_generationThreshold(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "generationThreshold", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializer*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t System::Xml::Serialization::XmlSerializer::getStaticF_generationThreshold() {
  return ::cordl_internals::getStaticField<int32_t, "generationThreshold", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializer*>::get>();
}
inline void System::Xml::Serialization::XmlSerializer::setStaticF_backgroundGeneration(bool value) {
  ::cordl_internals::setStaticField<bool, "backgroundGeneration", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializer*>::get>(std::forward<bool>(value));
}
inline bool System::Xml::Serialization::XmlSerializer::getStaticF_backgroundGeneration() {
  return ::cordl_internals::getStaticField<bool, "backgroundGeneration", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializer*>::get>();
}
inline void System::Xml::Serialization::XmlSerializer::setStaticF_deleteTempFiles(bool value) {
  ::cordl_internals::setStaticField<bool, "deleteTempFiles", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializer*>::get>(std::forward<bool>(value));
}
inline bool System::Xml::Serialization::XmlSerializer::getStaticF_deleteTempFiles() {
  return ::cordl_internals::getStaticField<bool, "deleteTempFiles", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializer*>::get>();
}
inline void System::Xml::Serialization::XmlSerializer::setStaticF_generatorFallback(bool value) {
  ::cordl_internals::setStaticField<bool, "generatorFallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializer*>::get>(std::forward<bool>(value));
}
inline bool System::Xml::Serialization::XmlSerializer::getStaticF_generatorFallback() {
  return ::cordl_internals::getStaticField<bool, "generatorFallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializer*>::get>();
}
inline void System::Xml::Serialization::XmlSerializer::setStaticF_serializerTypes(::System::Collections::Hashtable* value) {
  ::cordl_internals::setStaticField<::System::Collections::Hashtable*, "serializerTypes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializer*>::get>(
      std::forward<::System::Collections::Hashtable*>(value));
}
inline ::System::Collections::Hashtable* System::Xml::Serialization::XmlSerializer::getStaticF_serializerTypes() {
  return ::cordl_internals::getStaticField<::System::Collections::Hashtable*, "serializerTypes",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializer*>::get>();
}
inline void System::Xml::Serialization::XmlSerializer::_ctor(::System::Type* type, ::System::Xml::Serialization::XmlAttributeOverrides* overrides,
                                                             ::ArrayW<::System::Type*, ::Array<::System::Type*>*> extraTypes, ::System::Xml::Serialization::XmlRootAttribute* root,
                                                             ::StringW defaultNamespace) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlAttributeOverrides*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlRootAttribute*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, overrides, extraTypes, root, defaultNamespace);
}
inline ::System::Xml::Serialization::XmlMapping* System::Xml::Serialization::XmlSerializer::get_Mapping() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializer*>::get(), "get_Mapping",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::XmlMapping*, false>(this, ___internal_method);
}
inline void System::Xml::Serialization::XmlSerializer::OnUnknownAttribute(::System::Xml::Serialization::XmlAttributeEventArgs* e) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializer*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e);
}
inline void System::Xml::Serialization::XmlSerializer::OnUnknownElement(::System::Xml::Serialization::XmlElementEventArgs* e) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializer*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e);
}
inline void System::Xml::Serialization::XmlSerializer::OnUnknownNode(::System::Xml::Serialization::XmlNodeEventArgs* e) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializer*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e);
}
inline void System::Xml::Serialization::XmlSerializer::OnUnreferencedObject(::System::Xml::Serialization::UnreferencedObjectEventArgs* e) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializer*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e);
}
inline ::System::Xml::Serialization::XmlSerializationReader* System::Xml::Serialization::XmlSerializer::CreateReader() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializer*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::XmlSerializationReader*, false>(this, ___internal_method);
}
inline ::System::Xml::Serialization::XmlSerializationWriter* System::Xml::Serialization::XmlSerializer::CreateWriter() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializer*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::XmlSerializationWriter*, false>(this, ___internal_method);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializer::Deserialize(::System::IO::TextReader* textReader) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializer*>::get(), "Deserialize", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::TextReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, textReader);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializer::Deserialize(::System::Xml::XmlReader* xmlReader) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializer*>::get(), "Deserialize", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, xmlReader);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializer::Deserialize(::System::Xml::Serialization::XmlSerializationReader* reader) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializer*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, reader);
}
inline void System::Xml::Serialization::XmlSerializer::Serialize(::System::Object* o, ::System::Xml::Serialization::XmlSerializationWriter* writer) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializer*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o, writer);
}
inline void System::Xml::Serialization::XmlSerializer::Serialize(::System::IO::TextWriter* textWriter, ::System::Object* o) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializer*>::get(), "Serialize", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::TextWriter*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, textWriter, o);
}
inline void System::Xml::Serialization::XmlSerializer::Serialize(::System::Xml::XmlWriter* xmlWriter, ::System::Object* o) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializer*>::get(), "Serialize", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlWriter*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xmlWriter, o);
}
inline void System::Xml::Serialization::XmlSerializer::Serialize(::System::Xml::XmlWriter* xmlWriter, ::System::Object* o, ::System::Xml::Serialization::XmlSerializerNamespaces* namespaces) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializer*>::get(), "Serialize", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlWriter*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlSerializerNamespaces*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xmlWriter, o, namespaces);
}
inline ::System::Xml::Serialization::XmlSerializationWriter* System::Xml::Serialization::XmlSerializer::CreateWriter(::System::Xml::Serialization::XmlMapping* typeMapping) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializer*>::get(), "CreateWriter", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlMapping*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::XmlSerializationWriter*, false>(this, ___internal_method, typeMapping);
}
inline ::System::Xml::Serialization::XmlSerializationReader* System::Xml::Serialization::XmlSerializer::CreateReader(::System::Xml::Serialization::XmlMapping* typeMapping) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializer*>::get(), "CreateReader", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlMapping*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::XmlSerializationReader*, false>(this, ___internal_method, typeMapping);
}
inline ::System::Xml::Serialization::XmlSerializer* System::Xml::Serialization::XmlSerializer::New_ctor(::System::Type* type, ::System::Xml::Serialization::XmlAttributeOverrides* overrides,
                                                                                                        ::ArrayW<::System::Type*, ::Array<::System::Type*>*> extraTypes,
                                                                                                        ::System::Xml::Serialization::XmlRootAttribute* root, ::StringW defaultNamespace) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Serialization::XmlSerializer*>(type, overrides, extraTypes, root, defaultNamespace));
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::XmlSerializer::XmlSerializer() {}
