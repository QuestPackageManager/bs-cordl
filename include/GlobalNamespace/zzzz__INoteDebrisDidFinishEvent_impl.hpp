#pragma once
// IWYU pragma private; include "GlobalNamespace/INoteDebrisDidFinishEvent.hpp"
#include "GlobalNamespace/zzzz__INoteDebrisDidFinishEvent_def.hpp"
#include "GlobalNamespace/zzzz__NoteDebris_def.hpp"
inline void GlobalNamespace::INoteDebrisDidFinishEvent::HandleNoteDebrisDidFinish(::GlobalNamespace::NoteDebris* noteDebris) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::INoteDebrisDidFinishEvent*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, noteDebris);
}
