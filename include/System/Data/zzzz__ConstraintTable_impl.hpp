#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Data/zzzz__ConstraintTable_def.hpp"
#include "System/Data/zzzz__DataTable_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaIdentityConstraint_def.hpp"
//  Writing Method size for method: ::System::Data::ConstraintTable._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Data::ConstraintTable::*)(::System::Data::DataTable*, ::System::Xml::Schema::XmlSchemaIdentityConstraint*)>(&::System::Data::ConstraintTable::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2be8e34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ConstraintTable*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaIdentityConstraint*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Data::DataTable*& System::Data::ConstraintTable::__cordl_internal_get_table() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___table;
}
constexpr ::cordl_internals::to_const_pointer<::System::Data::DataTable*> const& System::Data::ConstraintTable::__cordl_internal_get_table() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___table;
}
constexpr void System::Data::ConstraintTable::__cordl_internal_set_table(::System::Data::DataTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___table)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::XmlSchemaIdentityConstraint*& System::Data::ConstraintTable::__cordl_internal_get_constraint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___constraint;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaIdentityConstraint*> const& System::Data::ConstraintTable::__cordl_internal_get_constraint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___constraint;
}
constexpr void System::Data::ConstraintTable::__cordl_internal_set_constraint(::System::Xml::Schema::XmlSchemaIdentityConstraint* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___constraint)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Data::ConstraintTable* System::Data::ConstraintTable::New_ctor(::System::Data::DataTable* t, ::System::Xml::Schema::XmlSchemaIdentityConstraint* c) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Data::ConstraintTable*>(t, c));
}
inline void System::Data::ConstraintTable::_ctor(::System::Data::DataTable* t, ::System::Xml::Schema::XmlSchemaIdentityConstraint* c) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ConstraintTable*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaIdentityConstraint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, t, c);
}
// Ctor Parameters []
constexpr ::System::Data::ConstraintTable::ConstraintTable() {}
