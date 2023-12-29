#pragma once
#include "System/Xml/Schema/zzzz__XmlSeverityType_impl.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "System/Xml/Schema/zzzz__ValidationEventArgs_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSeverityType_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaException_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::ValidationEventArgs.get_Severity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSeverityType (::System::Xml::Schema::ValidationEventArgs::*)()>(
    &::System::Xml::Schema::ValidationEventArgs::get_Severity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2747bcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ValidationEventArgs*>::get(),
                                                                               "get_Severity", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::ValidationEventArgs.get_Exception
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaException* (::System::Xml::Schema::ValidationEventArgs::*)()>(
    &::System::Xml::Schema::ValidationEventArgs::get_Exception)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2747bd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ValidationEventArgs*>::get(),
                                                                               "get_Exception", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::System::Xml::Schema::XmlSchemaException*& System::Xml::Schema::ValidationEventArgs::__get_ex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ex;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaException*> const& System::Xml::Schema::ValidationEventArgs::__get_ex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ex;
}
constexpr void System::Xml::Schema::ValidationEventArgs::__set_ex(::System::Xml::Schema::XmlSchemaException* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ex)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::XmlSeverityType& System::Xml::Schema::ValidationEventArgs::__get_severity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___severity;
}
constexpr ::System::Xml::Schema::XmlSeverityType const& System::Xml::Schema::ValidationEventArgs::__get_severity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___severity;
}
constexpr void System::Xml::Schema::ValidationEventArgs::__set_severity(::System::Xml::Schema::XmlSeverityType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___severity = value;
}
inline ::System::Xml::Schema::XmlSeverityType System::Xml::Schema::ValidationEventArgs::get_Severity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ValidationEventArgs*>::get(), "get_Severity",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSeverityType, false>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaException* System::Xml::Schema::ValidationEventArgs::get_Exception() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ValidationEventArgs*>::get(),
                                                                             "get_Exception", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaException*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::ValidationEventArgs::ValidationEventArgs() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
