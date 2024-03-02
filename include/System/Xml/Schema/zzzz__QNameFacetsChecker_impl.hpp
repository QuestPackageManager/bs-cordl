#pragma once
#include "System/Xml/Schema/zzzz__FacetsChecker_impl.hpp"
#include "System/Xml/Schema/zzzz__QNameFacetsChecker_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaDatatype_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::QNameFacetsChecker.CheckValueFacets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (
    ::System::Xml::Schema::QNameFacetsChecker::*)(::System::Object*, ::System::Xml::Schema::XmlSchemaDatatype*)>(&::System::Xml::Schema::QNameFacetsChecker::CheckValueFacets)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x29ac808;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::QNameFacetsChecker*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::QNameFacetsChecker*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::QNameFacetsChecker.CheckValueFacets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (
    ::System::Xml::Schema::QNameFacetsChecker::*)(::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::XmlSchemaDatatype*)>(&::System::Xml::Schema::QNameFacetsChecker::CheckValueFacets)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x29ac934;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::QNameFacetsChecker*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::QNameFacetsChecker*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::QNameFacetsChecker.MatchEnumeration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::QNameFacetsChecker::*)(
    ::System::Object*, ::System::Collections::ArrayList*, ::System::Xml::Schema::XmlSchemaDatatype*)>(&::System::Xml::Schema::QNameFacetsChecker::MatchEnumeration)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x29acc08;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::QNameFacetsChecker*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::QNameFacetsChecker*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::QNameFacetsChecker.MatchEnumeration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::QNameFacetsChecker::*)(
    ::System::Xml::XmlQualifiedName*, ::System::Collections::ArrayList*)>(&::System::Xml::Schema::QNameFacetsChecker::MatchEnumeration)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x29acaf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::QNameFacetsChecker*>::get(), "MatchEnumeration", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ArrayList*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::QNameFacetsChecker._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::QNameFacetsChecker::*)()>(&::System::Xml::Schema::QNameFacetsChecker::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29acd1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::QNameFacetsChecker*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::System::Exception* System::Xml::Schema::QNameFacetsChecker::CheckValueFacets(::System::Object* value, ::System::Xml::Schema::XmlSchemaDatatype* datatype) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::QNameFacetsChecker*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(this, ___internal_method, value, datatype);
}
inline ::System::Exception* System::Xml::Schema::QNameFacetsChecker::CheckValueFacets(::System::Xml::XmlQualifiedName* value, ::System::Xml::Schema::XmlSchemaDatatype* datatype) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::QNameFacetsChecker*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(this, ___internal_method, value, datatype);
}
inline bool System::Xml::Schema::QNameFacetsChecker::MatchEnumeration(::System::Object* value, ::System::Collections::ArrayList* enumeration, ::System::Xml::Schema::XmlSchemaDatatype* datatype) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::QNameFacetsChecker*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value, enumeration, datatype);
}
inline bool System::Xml::Schema::QNameFacetsChecker::MatchEnumeration(::System::Xml::XmlQualifiedName* value, ::System::Collections::ArrayList* enumeration) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::QNameFacetsChecker*>::get(), "MatchEnumeration", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ArrayList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value, enumeration);
}
inline ::System::Xml::Schema::QNameFacetsChecker* System::Xml::Schema::QNameFacetsChecker::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::QNameFacetsChecker*>());
}
inline void System::Xml::Schema::QNameFacetsChecker::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::QNameFacetsChecker*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::QNameFacetsChecker::QNameFacetsChecker() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
