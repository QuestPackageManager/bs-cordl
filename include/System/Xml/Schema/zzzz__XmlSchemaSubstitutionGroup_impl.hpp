#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaSubstitutionGroup.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaObject_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSubstitutionGroup_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSubstitutionGroup.get_Members
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ArrayList* (::System::Xml::Schema::XmlSchemaSubstitutionGroup::*)()>(
    &::System::Xml::Schema::XmlSchemaSubstitutionGroup::get_Members)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x608772c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaSubstitutionGroup*>::get(),
                                                                               "get_Members", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSubstitutionGroup.get_Examplar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlQualifiedName* (::System::Xml::Schema::XmlSchemaSubstitutionGroup::*)()>(
    &::System::Xml::Schema::XmlSchemaSubstitutionGroup::get_Examplar)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6087734;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaSubstitutionGroup*>::get(),
                                                                               "get_Examplar", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSubstitutionGroup.set_Examplar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlSchemaSubstitutionGroup::*)(::System::Xml::XmlQualifiedName*)>(
    &::System::Xml::Schema::XmlSchemaSubstitutionGroup::set_Examplar)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x608773c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaSubstitutionGroup*>::get(), "set_Examplar", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSubstitutionGroup._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlSchemaSubstitutionGroup::*)()>(
    &::System::Xml::Schema::XmlSchemaSubstitutionGroup::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6087744;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaSubstitutionGroup*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::ArrayList*& System::Xml::Schema::XmlSchemaSubstitutionGroup::__cordl_internal_get_membersList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___membersList;
}
constexpr ::System::Collections::ArrayList* const& System::Xml::Schema::XmlSchemaSubstitutionGroup::__cordl_internal_get_membersList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___membersList;
}
constexpr void System::Xml::Schema::XmlSchemaSubstitutionGroup::__cordl_internal_set_membersList(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___membersList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::XmlSchemaSubstitutionGroup::__cordl_internal_get_examplar() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___examplar;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::XmlSchemaSubstitutionGroup::__cordl_internal_get_examplar() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___examplar;
}
constexpr void System::Xml::Schema::XmlSchemaSubstitutionGroup::__cordl_internal_set_examplar(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___examplar)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::ArrayList* System::Xml::Schema::XmlSchemaSubstitutionGroup::get_Members() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaSubstitutionGroup*>::get(),
                                                                             "get_Members", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ArrayList*, false>(this, ___internal_method);
}
inline ::System::Xml::XmlQualifiedName* System::Xml::Schema::XmlSchemaSubstitutionGroup::get_Examplar() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaSubstitutionGroup*>::get(),
                                                                             "get_Examplar", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlQualifiedName*, false>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchemaSubstitutionGroup::set_Examplar(::System::Xml::XmlQualifiedName* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaSubstitutionGroup*>::get(), "set_Examplar", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Xml::Schema::XmlSchemaSubstitutionGroup::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaSubstitutionGroup*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaSubstitutionGroup* System::Xml::Schema::XmlSchemaSubstitutionGroup::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::XmlSchemaSubstitutionGroup*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XmlSchemaSubstitutionGroup::XmlSchemaSubstitutionGroup() {}
