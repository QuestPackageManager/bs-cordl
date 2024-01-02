#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Schema/zzzz__XsdSimpleValue_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSimpleType_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::XsdSimpleValue.get_XmlType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaSimpleType* (::System::Xml::Schema::XsdSimpleValue::*)()>(
    &::System::Xml::Schema::XsdSimpleValue::get_XmlType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28b0d28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdSimpleValue*>::get(), "get_XmlType",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdSimpleValue.get_TypedValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Xml::Schema::XsdSimpleValue::*)()>(
    &::System::Xml::Schema::XsdSimpleValue::get_TypedValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28b0d30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdSimpleValue*>::get(), "get_TypedValue",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::System::Xml::Schema::XmlSchemaSimpleType*& System::Xml::Schema::XsdSimpleValue::__get_xmlType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlType;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaSimpleType*> const& System::Xml::Schema::XsdSimpleValue::__get_xmlType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlType;
}
constexpr void System::Xml::Schema::XsdSimpleValue::__set_xmlType(::System::Xml::Schema::XmlSchemaSimpleType* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___xmlType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::Xml::Schema::XsdSimpleValue::__get_typedValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___typedValue;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Xml::Schema::XsdSimpleValue::__get_typedValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___typedValue;
}
constexpr void System::Xml::Schema::XsdSimpleValue::__set_typedValue(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___typedValue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Xml::Schema::XmlSchemaSimpleType* System::Xml::Schema::XsdSimpleValue::get_XmlType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdSimpleValue*>::get(), "get_XmlType",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaSimpleType*, false>(this, ___internal_method);
}
inline ::System::Object* System::Xml::Schema::XsdSimpleValue::get_TypedValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdSimpleValue*>::get(), "get_TypedValue",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XsdSimpleValue::XsdSimpleValue() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
