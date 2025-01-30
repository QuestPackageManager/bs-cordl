#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaSubstitutionGroupV1Compat.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSubstitutionGroup_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSubstitutionGroupV1Compat_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaChoice_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSubstitutionGroupV1Compat.get_Choice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaChoice* (::System::Xml::Schema::XmlSchemaSubstitutionGroupV1Compat::*)()>(
    &::System::Xml::Schema::XmlSchemaSubstitutionGroupV1Compat::get_Choice)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x42cbae8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaSubstitutionGroupV1Compat*>::get(), "get_Choice",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSubstitutionGroupV1Compat._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlSchemaSubstitutionGroupV1Compat::*)()>(
    &::System::Xml::Schema::XmlSchemaSubstitutionGroupV1Compat::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x42cbaf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaSubstitutionGroupV1Compat*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Xml::Schema::XmlSchemaChoice*& System::Xml::Schema::XmlSchemaSubstitutionGroupV1Compat::__cordl_internal_get_choice() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___choice;
}
constexpr ::System::Xml::Schema::XmlSchemaChoice* const& System::Xml::Schema::XmlSchemaSubstitutionGroupV1Compat::__cordl_internal_get_choice() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___choice;
}
constexpr void System::Xml::Schema::XmlSchemaSubstitutionGroupV1Compat::__cordl_internal_set_choice(::System::Xml::Schema::XmlSchemaChoice* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___choice)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Xml::Schema::XmlSchemaChoice* System::Xml::Schema::XmlSchemaSubstitutionGroupV1Compat::get_Choice() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaSubstitutionGroupV1Compat*>::get(),
                                                                             "get_Choice", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaChoice*, false>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchemaSubstitutionGroupV1Compat::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaSubstitutionGroupV1Compat*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaSubstitutionGroupV1Compat* System::Xml::Schema::XmlSchemaSubstitutionGroupV1Compat::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::XmlSchemaSubstitutionGroupV1Compat*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XmlSchemaSubstitutionGroupV1Compat::XmlSchemaSubstitutionGroupV1Compat() {}
