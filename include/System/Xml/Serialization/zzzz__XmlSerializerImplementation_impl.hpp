#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Serialization/zzzz__XmlSerializerImplementation_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlSerializationWriter_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializerImplementation.get_Writer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Serialization::XmlSerializationWriter* (
    ::System::Xml::Serialization::XmlSerializerImplementation::*)()>(&::System::Xml::Serialization::XmlSerializerImplementation::get_Writer)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2debc18;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializerImplementation*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializerImplementation*>::get(), 4));
    return ___internal_method;
  }
};
inline ::System::Xml::Serialization::XmlSerializationWriter* System::Xml::Serialization::XmlSerializerImplementation::get_Writer() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializerImplementation*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::XmlSerializationWriter*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::XmlSerializerImplementation::XmlSerializerImplementation() {}
