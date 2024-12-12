#pragma once
// IWYU pragma private; include "GlobalNamespace/IMockPlayerScoreCalculator.hpp"
#include "GlobalNamespace/zzzz__IMockPlayerScoreCalculator_def.hpp"
#include "GlobalNamespace/zzzz__MockNoteData_def.hpp"
inline int32_t GlobalNamespace::IMockPlayerScoreCalculator::GetScoreForNote(::GlobalNamespace::MockNoteData* noteData) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IMockPlayerScoreCalculator*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, noteData);
}
