#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaCompilationSettings_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaCompilationSettings._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlSchemaCompilationSettings::*)()>(
    &::System::Xml::Schema::XmlSchemaCompilationSettings::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x28c72e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaCompilationSettings*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr bool& System::Xml::Schema::XmlSchemaCompilationSettings::__get_enableUpaCheck() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___enableUpaCheck;
}
constexpr bool const& System::Xml::Schema::XmlSchemaCompilationSettings::__get_enableUpaCheck() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___enableUpaCheck;
}
constexpr void System::Xml::Schema::XmlSchemaCompilationSettings::__set_enableUpaCheck(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___enableUpaCheck = value;
}
inline ::System::Xml::Schema::XmlSchemaCompilationSettings* System::Xml::Schema::XmlSchemaCompilationSettings::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Xml::Schema::XmlSchemaCompilationSettings*>());
}
inline void System::Xml::Schema::XmlSchemaCompilationSettings::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaCompilationSettings*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XmlSchemaCompilationSettings::XmlSchemaCompilationSettings() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
