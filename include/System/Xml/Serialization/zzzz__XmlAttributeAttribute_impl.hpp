#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Xml/Serialization/zzzz__XmlAttributeAttribute_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::XmlAttributeAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlAttributeAttribute::*)(::StringW)>(
    &::System::Xml::Serialization::XmlAttributeAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x28abed0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlAttributeAttribute*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Xml::Serialization::XmlAttributeAttribute::__get_attributeName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeName;
}
constexpr ::StringW const& System::Xml::Serialization::XmlAttributeAttribute::__get_attributeName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeName;
}
constexpr void System::Xml::Serialization::XmlAttributeAttribute::__set_attributeName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___attributeName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Xml::Serialization::XmlAttributeAttribute* System::Xml::Serialization::XmlAttributeAttribute::New_ctor(::StringW attributeName) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Xml::Serialization::XmlAttributeAttribute*>(attributeName));
}
inline void System::Xml::Serialization::XmlAttributeAttribute::_ctor(::StringW attributeName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlAttributeAttribute*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, attributeName);
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::XmlAttributeAttribute::XmlAttributeAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
