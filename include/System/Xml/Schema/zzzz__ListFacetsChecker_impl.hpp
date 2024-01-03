#pragma once
#include "System/Xml/Schema/zzzz__FacetsChecker_impl.hpp"
#include "System/Xml/Schema/zzzz__ListFacetsChecker_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaDatatype_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::ListFacetsChecker.CheckValueFacets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (
    ::System::Xml::Schema::ListFacetsChecker::*)(::System::Object*, ::System::Xml::Schema::XmlSchemaDatatype*)>(&::System::Xml::Schema::ListFacetsChecker::CheckValueFacets)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x28c3628;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ListFacetsChecker*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ListFacetsChecker*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::ListFacetsChecker.MatchEnumeration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::ListFacetsChecker::*)(
    ::System::Object*, ::System::Collections::ArrayList*, ::System::Xml::Schema::XmlSchemaDatatype*)>(&::System::Xml::Schema::ListFacetsChecker::MatchEnumeration)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x28c385c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ListFacetsChecker*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ListFacetsChecker*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::ListFacetsChecker._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::ListFacetsChecker::*)()>(&::System::Xml::Schema::ListFacetsChecker::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c3910;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ListFacetsChecker*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::System::Exception* System::Xml::Schema::ListFacetsChecker::CheckValueFacets(::System::Object* value, ::System::Xml::Schema::XmlSchemaDatatype* datatype) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ListFacetsChecker*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(this, ___internal_method, value, datatype);
}
inline bool System::Xml::Schema::ListFacetsChecker::MatchEnumeration(::System::Object* value, ::System::Collections::ArrayList* enumeration, ::System::Xml::Schema::XmlSchemaDatatype* datatype) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ListFacetsChecker*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value, enumeration, datatype);
}
inline ::System::Xml::Schema::ListFacetsChecker* System::Xml::Schema::ListFacetsChecker::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Xml::Schema::ListFacetsChecker*>());
}
inline void System::Xml::Schema::ListFacetsChecker::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ListFacetsChecker*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::ListFacetsChecker::ListFacetsChecker() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
