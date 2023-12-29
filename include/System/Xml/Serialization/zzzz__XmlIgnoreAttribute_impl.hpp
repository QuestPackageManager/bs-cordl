#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Xml/Serialization/zzzz__XmlIgnoreAttribute_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::XmlIgnoreAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlIgnoreAttribute::*)()>(
    &::System::Xml::Serialization::XmlIgnoreAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x272ef30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlIgnoreAttribute*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::System::Xml::Serialization::XmlIgnoreAttribute* System::Xml::Serialization::XmlIgnoreAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Xml::Serialization::XmlIgnoreAttribute*>());
}
inline void System::Xml::Serialization::XmlIgnoreAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlIgnoreAttribute*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::XmlIgnoreAttribute::XmlIgnoreAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
