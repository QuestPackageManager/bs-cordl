#pragma once
// IWYU pragma private; include "Tayx/Graphy/UI/IModifiableState.hpp"
#include "Tayx/Graphy/UI/zzzz__IModifiableState_def.hpp"
#include "Tayx/Graphy/zzzz__GraphyManager_def.hpp"
inline void Tayx::Graphy::UI::IModifiableState::SetState(::Tayx::Graphy::GraphyManager_ModuleState newState, bool silentUpdate) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::UI::IModifiableState*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newState, silentUpdate);
}
