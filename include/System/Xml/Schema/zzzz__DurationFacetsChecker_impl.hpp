#pragma once
// IWYU pragma private; include "System/Xml/Schema/DurationFacetsChecker.hpp"
#include "System/Xml/Schema/zzzz__FacetsChecker_impl.hpp"
#include "System/Xml/Schema/zzzz__DurationFacetsChecker_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaDatatype_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::DurationFacetsChecker.CheckValueFacets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (
    ::System::Xml::Schema::DurationFacetsChecker::*)(::System::Object*, ::System::Xml::Schema::XmlSchemaDatatype*)>(&::System::Xml::Schema::DurationFacetsChecker::CheckValueFacets)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x43b4278;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::DurationFacetsChecker*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::DurationFacetsChecker*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::DurationFacetsChecker.CheckValueFacets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (
    ::System::Xml::Schema::DurationFacetsChecker::*)(::System::TimeSpan, ::System::Xml::Schema::XmlSchemaDatatype*)>(&::System::Xml::Schema::DurationFacetsChecker::CheckValueFacets)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x43b438c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::DurationFacetsChecker*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::DurationFacetsChecker*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::DurationFacetsChecker.MatchEnumeration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::DurationFacetsChecker::*)(
    ::System::Object*, ::System::Collections::ArrayList*, ::System::Xml::Schema::XmlSchemaDatatype*)>(&::System::Xml::Schema::DurationFacetsChecker::MatchEnumeration)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x43b4804;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::DurationFacetsChecker*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::DurationFacetsChecker*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::DurationFacetsChecker.MatchEnumeration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::DurationFacetsChecker::*)(::System::TimeSpan, ::System::Collections::ArrayList*)>(
    &::System::Xml::Schema::DurationFacetsChecker::MatchEnumeration)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x43b46ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::DurationFacetsChecker*>::get(), "MatchEnumeration", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ArrayList*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::DurationFacetsChecker._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::DurationFacetsChecker::*)()>(&::System::Xml::Schema::DurationFacetsChecker::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x43a02f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::DurationFacetsChecker*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::System::Exception* System::Xml::Schema::DurationFacetsChecker::CheckValueFacets(::System::Object* value, ::System::Xml::Schema::XmlSchemaDatatype* datatype) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::DurationFacetsChecker*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(this, ___internal_method, value, datatype);
}
inline ::System::Exception* System::Xml::Schema::DurationFacetsChecker::CheckValueFacets(::System::TimeSpan value, ::System::Xml::Schema::XmlSchemaDatatype* datatype) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::DurationFacetsChecker*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(this, ___internal_method, value, datatype);
}
inline bool System::Xml::Schema::DurationFacetsChecker::MatchEnumeration(::System::Object* value, ::System::Collections::ArrayList* enumeration, ::System::Xml::Schema::XmlSchemaDatatype* datatype) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::DurationFacetsChecker*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value, enumeration, datatype);
}
inline bool System::Xml::Schema::DurationFacetsChecker::MatchEnumeration(::System::TimeSpan value, ::System::Collections::ArrayList* enumeration) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::DurationFacetsChecker*>::get(), "MatchEnumeration", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ArrayList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value, enumeration);
}
inline void System::Xml::Schema::DurationFacetsChecker::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::DurationFacetsChecker*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Xml::Schema::DurationFacetsChecker* System::Xml::Schema::DurationFacetsChecker::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::DurationFacetsChecker*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::DurationFacetsChecker::DurationFacetsChecker() {}
