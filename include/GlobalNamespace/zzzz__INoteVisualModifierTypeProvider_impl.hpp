#pragma once
// IWYU pragma private; include "GlobalNamespace/INoteVisualModifierTypeProvider.hpp"
#include "GlobalNamespace/zzzz__INoteVisualModifierTypeProvider_def.hpp"
#include "GlobalNamespace/zzzz__NoteVisualModifierType_def.hpp"
inline ::GlobalNamespace::NoteVisualModifierType GlobalNamespace::INoteVisualModifierTypeProvider::get_noteVisualModifierType() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::INoteVisualModifierTypeProvider*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteVisualModifierType, false>(this, ___internal_method);
}
