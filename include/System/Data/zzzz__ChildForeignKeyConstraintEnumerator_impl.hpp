#pragma once
// IWYU pragma private; include "System/Data/ChildForeignKeyConstraintEnumerator.hpp"
#include "System/Data/zzzz__ForeignKeyConstraintEnumerator_impl.hpp"
#include "System/Data/zzzz__ChildForeignKeyConstraintEnumerator_def.hpp"
#include "System/Data/zzzz__Constraint_def.hpp"
#include "System/Data/zzzz__DataSet_def.hpp"
#include "System/Data/zzzz__DataTable_def.hpp"
//  Writing Method size for method: ::System::Data::ChildForeignKeyConstraintEnumerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::ChildForeignKeyConstraintEnumerator::*)(::System::Data::DataSet*, ::System::Data::DataTable*)>(
    &::System::Data::ChildForeignKeyConstraintEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x4157b40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ChildForeignKeyConstraintEnumerator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataSet*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ChildForeignKeyConstraintEnumerator.IsValidCandidate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::ChildForeignKeyConstraintEnumerator::*)(::System::Data::Constraint*)>(
    &::System::Data::ChildForeignKeyConstraintEnumerator::IsValidCandidate)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x4157b64;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ChildForeignKeyConstraintEnumerator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ChildForeignKeyConstraintEnumerator*>::get(), 4));
    return ___internal_method;
  }
};
constexpr ::System::Data::DataTable*& System::Data::ChildForeignKeyConstraintEnumerator::__cordl_internal_get__table() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____table;
}
constexpr ::System::Data::DataTable* const& System::Data::ChildForeignKeyConstraintEnumerator::__cordl_internal_get__table() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____table;
}
constexpr void System::Data::ChildForeignKeyConstraintEnumerator::__cordl_internal_set__table(::System::Data::DataTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____table)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Data::ChildForeignKeyConstraintEnumerator::_ctor(::System::Data::DataSet* dataSet, ::System::Data::DataTable* inTable) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ChildForeignKeyConstraintEnumerator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataSet*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dataSet, inTable);
}
inline bool System::Data::ChildForeignKeyConstraintEnumerator::IsValidCandidate(::System::Data::Constraint* constraint) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ChildForeignKeyConstraintEnumerator*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, constraint);
}
inline ::System::Data::ChildForeignKeyConstraintEnumerator* System::Data::ChildForeignKeyConstraintEnumerator::New_ctor(::System::Data::DataSet* dataSet, ::System::Data::DataTable* inTable) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Data::ChildForeignKeyConstraintEnumerator*>(dataSet, inTable));
}
// Ctor Parameters []
constexpr ::System::Data::ChildForeignKeyConstraintEnumerator::ChildForeignKeyConstraintEnumerator() {}
