#pragma once
// IWYU pragma private; include "System/Xml/Schema/ConstraintStruct.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Schema/zzzz__ConstraintStruct_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Xml/Schema/zzzz__CompiledIdentityConstraint_def.hpp"
#include "System/Xml/Schema/zzzz__SelectorActiveAxis_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::ConstraintStruct.get_TableDim
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::Schema::ConstraintStruct::*)()>(&::System::Xml::Schema::ConstraintStruct::get_TableDim)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4398f9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ConstraintStruct*>::get(), "get_TableDim",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::ConstraintStruct._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::ConstraintStruct::*)(::System::Xml::Schema::CompiledIdentityConstraint*)>(
    &::System::Xml::Schema::ConstraintStruct::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x4398fa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ConstraintStruct*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::CompiledIdentityConstraint*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::Schema::CompiledIdentityConstraint*& System::Xml::Schema::ConstraintStruct::__cordl_internal_get_constraint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___constraint;
}
constexpr ::System::Xml::Schema::CompiledIdentityConstraint* const& System::Xml::Schema::ConstraintStruct::__cordl_internal_get_constraint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___constraint;
}
constexpr void System::Xml::Schema::ConstraintStruct::__cordl_internal_set_constraint(::System::Xml::Schema::CompiledIdentityConstraint* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___constraint)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::SelectorActiveAxis*& System::Xml::Schema::ConstraintStruct::__cordl_internal_get_axisSelector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___axisSelector;
}
constexpr ::System::Xml::Schema::SelectorActiveAxis* const& System::Xml::Schema::ConstraintStruct::__cordl_internal_get_axisSelector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___axisSelector;
}
constexpr void System::Xml::Schema::ConstraintStruct::__cordl_internal_set_axisSelector(::System::Xml::Schema::SelectorActiveAxis* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___axisSelector)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::ArrayList*& System::Xml::Schema::ConstraintStruct::__cordl_internal_get_axisFields() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___axisFields;
}
constexpr ::System::Collections::ArrayList* const& System::Xml::Schema::ConstraintStruct::__cordl_internal_get_axisFields() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___axisFields;
}
constexpr void System::Xml::Schema::ConstraintStruct::__cordl_internal_set_axisFields(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___axisFields)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Hashtable*& System::Xml::Schema::ConstraintStruct::__cordl_internal_get_qualifiedTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___qualifiedTable;
}
constexpr ::System::Collections::Hashtable* const& System::Xml::Schema::ConstraintStruct::__cordl_internal_get_qualifiedTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___qualifiedTable;
}
constexpr void System::Xml::Schema::ConstraintStruct::__cordl_internal_set_qualifiedTable(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___qualifiedTable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Hashtable*& System::Xml::Schema::ConstraintStruct::__cordl_internal_get_keyrefTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyrefTable;
}
constexpr ::System::Collections::Hashtable* const& System::Xml::Schema::ConstraintStruct::__cordl_internal_get_keyrefTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyrefTable;
}
constexpr void System::Xml::Schema::ConstraintStruct::__cordl_internal_set_keyrefTable(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___keyrefTable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Xml::Schema::ConstraintStruct::__cordl_internal_get_tableDim() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tableDim;
}
constexpr int32_t const& System::Xml::Schema::ConstraintStruct::__cordl_internal_get_tableDim() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tableDim;
}
constexpr void System::Xml::Schema::ConstraintStruct::__cordl_internal_set_tableDim(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tableDim = value;
}
inline int32_t System::Xml::Schema::ConstraintStruct::get_TableDim() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ConstraintStruct*>::get(), "get_TableDim",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void System::Xml::Schema::ConstraintStruct::_ctor(::System::Xml::Schema::CompiledIdentityConstraint* constraint) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ConstraintStruct*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::CompiledIdentityConstraint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, constraint);
}
inline ::System::Xml::Schema::ConstraintStruct* System::Xml::Schema::ConstraintStruct::New_ctor(::System::Xml::Schema::CompiledIdentityConstraint* constraint) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::ConstraintStruct*>(constraint));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::ConstraintStruct::ConstraintStruct() {}
