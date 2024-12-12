#pragma once
// IWYU pragma private; include "GlobalNamespace/INoteMovementProvider.hpp"
#include "GlobalNamespace/zzzz__INoteMovementProvider_def.hpp"
#include "GlobalNamespace/zzzz__NoteMovement_def.hpp"
inline ::UnityW<::GlobalNamespace::NoteMovement> GlobalNamespace::INoteMovementProvider::get_noteMovement() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::INoteMovementProvider*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::NoteMovement>, false>(this, ___internal_method);
}
