#pragma once
// IWYU pragma private; include "System/Xml/Serialization/IXmlSerializable.hpp"
#include "System/Xml/Serialization/zzzz__IXmlSerializable_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchema_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
#include "System/Xml/zzzz__XmlWriter_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::IXmlSerializable.GetSchema
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchema* (::System::Xml::Serialization::IXmlSerializable::*)()>(
    &::System::Xml::Serialization::IXmlSerializable::GetSchema)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::IXmlSerializable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::IXmlSerializable*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::IXmlSerializable.ReadXml
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::IXmlSerializable::*)(::System::Xml::XmlReader*)>(
    &::System::Xml::Serialization::IXmlSerializable::ReadXml)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::IXmlSerializable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::IXmlSerializable*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::IXmlSerializable.WriteXml
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::IXmlSerializable::*)(::System::Xml::XmlWriter*)>(
    &::System::Xml::Serialization::IXmlSerializable::WriteXml)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::IXmlSerializable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::IXmlSerializable*>::get(), 2));
    return ___internal_method;
  }
};
inline ::System::Xml::Schema::XmlSchema* System::Xml::Serialization::IXmlSerializable::GetSchema() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::IXmlSerializable*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchema*, false>(this, ___internal_method);
}
inline void System::Xml::Serialization::IXmlSerializable::ReadXml(::System::Xml::XmlReader* reader) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::IXmlSerializable*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader);
}
inline void System::Xml::Serialization::IXmlSerializable::WriteXml(::System::Xml::XmlWriter* writer) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::IXmlSerializable*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer);
}
