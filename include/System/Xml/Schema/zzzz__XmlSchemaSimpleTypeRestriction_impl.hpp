#pragma once
#include "System/Xml/Schema/zzzz__XmlSchemaSimpleTypeContent_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSimpleTypeRestriction_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaObjectCollection_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSimpleTypeRestriction.set_BaseTypeName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlSchemaSimpleTypeRestriction::*)(::System::Xml::XmlQualifiedName*)>(
    &::System::Xml::Schema::XmlSchemaSimpleTypeRestriction::set_BaseTypeName)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x28c917c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaSimpleTypeRestriction*>::get(), "set_BaseTypeName", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSimpleTypeRestriction._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlSchemaSimpleTypeRestriction::*)()>(
    &::System::Xml::Schema::XmlSchemaSimpleTypeRestriction::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x28c9214;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaSimpleTypeRestriction*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::XmlSchemaSimpleTypeRestriction::__cordl_internal_get_baseTypeName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___baseTypeName;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& System::Xml::Schema::XmlSchemaSimpleTypeRestriction::__cordl_internal_get_baseTypeName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___baseTypeName;
}
constexpr void System::Xml::Schema::XmlSchemaSimpleTypeRestriction::__cordl_internal_set_baseTypeName(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___baseTypeName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::XmlSchemaObjectCollection*& System::Xml::Schema::XmlSchemaSimpleTypeRestriction::__cordl_internal_get_facets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___facets;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaObjectCollection*> const& System::Xml::Schema::XmlSchemaSimpleTypeRestriction::__cordl_internal_get_facets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___facets;
}
constexpr void System::Xml::Schema::XmlSchemaSimpleTypeRestriction::__cordl_internal_set_facets(::System::Xml::Schema::XmlSchemaObjectCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___facets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Xml::Schema::XmlSchemaSimpleTypeRestriction::set_BaseTypeName(::System::Xml::XmlQualifiedName* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaSimpleTypeRestriction*>::get(), "set_BaseTypeName", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Xml::Schema::XmlSchemaSimpleTypeRestriction* System::Xml::Schema::XmlSchemaSimpleTypeRestriction::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::XmlSchemaSimpleTypeRestriction*>());
}
inline void System::Xml::Schema::XmlSchemaSimpleTypeRestriction::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaSimpleTypeRestriction*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XmlSchemaSimpleTypeRestriction::XmlSchemaSimpleTypeRestriction() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
