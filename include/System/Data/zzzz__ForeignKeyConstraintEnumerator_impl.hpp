#pragma once
#include "System/Data/zzzz__ConstraintEnumerator_impl.hpp"
#include "System/Data/zzzz__ForeignKeyConstraintEnumerator_def.hpp"
#include "System/Data/zzzz__Constraint_def.hpp"
#include "System/Data/zzzz__DataSet_def.hpp"
#include "System/Data/zzzz__ForeignKeyConstraint_def.hpp"
//  Writing Method size for method: ::System::Data::ForeignKeyConstraintEnumerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::ForeignKeyConstraintEnumerator::*)(::System::Data::DataSet*)>(
    &::System::Data::ForeignKeyConstraintEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2b77340;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ForeignKeyConstraintEnumerator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataSet*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ForeignKeyConstraintEnumerator.IsValidCandidate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::ForeignKeyConstraintEnumerator::*)(::System::Data::Constraint*)>(
    &::System::Data::ForeignKeyConstraintEnumerator::IsValidCandidate)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2b77344;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ForeignKeyConstraintEnumerator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ForeignKeyConstraintEnumerator*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ForeignKeyConstraintEnumerator.GetForeignKeyConstraint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::ForeignKeyConstraint* (::System::Data::ForeignKeyConstraintEnumerator::*)()>(
    &::System::Data::ForeignKeyConstraintEnumerator::GetForeignKeyConstraint)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2b773bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ForeignKeyConstraintEnumerator*>::get(),
                                                                               "GetForeignKeyConstraint", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::System::Data::ForeignKeyConstraintEnumerator* System::Data::ForeignKeyConstraintEnumerator::New_ctor(::System::Data::DataSet* dataSet) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Data::ForeignKeyConstraintEnumerator*>(dataSet));
}
inline void System::Data::ForeignKeyConstraintEnumerator::_ctor(::System::Data::DataSet* dataSet) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ForeignKeyConstraintEnumerator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataSet*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dataSet);
}
inline bool System::Data::ForeignKeyConstraintEnumerator::IsValidCandidate(::System::Data::Constraint* constraint) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ForeignKeyConstraintEnumerator*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, constraint);
}
inline ::System::Data::ForeignKeyConstraint* System::Data::ForeignKeyConstraintEnumerator::GetForeignKeyConstraint() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ForeignKeyConstraintEnumerator*>::get(),
                                                                             "GetForeignKeyConstraint", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Data::ForeignKeyConstraint*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Data::ForeignKeyConstraintEnumerator::ForeignKeyConstraintEnumerator() {}
