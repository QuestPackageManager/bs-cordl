#pragma once
// IWYU pragma private; include "System/Xml/Schema/UnionFacetsChecker.hpp"
#include "System/Xml/Schema/zzzz__FacetsChecker_impl.hpp"
#include "System/Xml/Schema/zzzz__UnionFacetsChecker_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaDatatype_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::UnionFacetsChecker.CheckValueFacets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (
    ::System::Xml::Schema::UnionFacetsChecker::*)(::System::Object*, ::System::Xml::Schema::XmlSchemaDatatype*)>(&::System::Xml::Schema::UnionFacetsChecker::CheckValueFacets)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x425d454;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::UnionFacetsChecker*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::UnionFacetsChecker*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::UnionFacetsChecker.MatchEnumeration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::UnionFacetsChecker::*)(
    ::System::Object*, ::System::Collections::ArrayList*, ::System::Xml::Schema::XmlSchemaDatatype*)>(&::System::Xml::Schema::UnionFacetsChecker::MatchEnumeration)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x425d54c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::UnionFacetsChecker*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::UnionFacetsChecker*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::UnionFacetsChecker._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::UnionFacetsChecker::*)()>(&::System::Xml::Schema::UnionFacetsChecker::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x425d608;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::UnionFacetsChecker*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::System::Exception* System::Xml::Schema::UnionFacetsChecker::CheckValueFacets(::System::Object* value, ::System::Xml::Schema::XmlSchemaDatatype* datatype) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::UnionFacetsChecker*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(this, ___internal_method, value, datatype);
}
inline bool System::Xml::Schema::UnionFacetsChecker::MatchEnumeration(::System::Object* value, ::System::Collections::ArrayList* enumeration, ::System::Xml::Schema::XmlSchemaDatatype* datatype) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::UnionFacetsChecker*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value, enumeration, datatype);
}
inline void System::Xml::Schema::UnionFacetsChecker::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::UnionFacetsChecker*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Xml::Schema::UnionFacetsChecker* System::Xml::Schema::UnionFacetsChecker::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::UnionFacetsChecker*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::UnionFacetsChecker::UnionFacetsChecker() {}
