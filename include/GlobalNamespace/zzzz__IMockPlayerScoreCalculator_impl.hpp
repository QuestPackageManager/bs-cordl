#pragma once
#include "GlobalNamespace/zzzz__IMockPlayerScoreCalculator_def.hpp"
#include "GlobalNamespace/zzzz__MockNoteData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IMockPlayerScoreCalculator.GetScoreForNote
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::IMockPlayerScoreCalculator::*)(::GlobalNamespace::MockNoteData*)>(
    &::GlobalNamespace::IMockPlayerScoreCalculator::GetScoreForNote)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IMockPlayerScoreCalculator*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IMockPlayerScoreCalculator*>::get(), 0));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::IMockPlayerScoreCalculator::GetScoreForNote(::GlobalNamespace::MockNoteData* noteData) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IMockPlayerScoreCalculator*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, noteData);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
