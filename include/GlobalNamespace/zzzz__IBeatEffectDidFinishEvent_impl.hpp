#pragma once
// IWYU pragma private; include "GlobalNamespace/IBeatEffectDidFinishEvent.hpp"
#include "GlobalNamespace/zzzz__IBeatEffectDidFinishEvent_def.hpp"
#include "GlobalNamespace/zzzz__BeatEffect_def.hpp"
inline void GlobalNamespace::IBeatEffectDidFinishEvent::HandleBeatEffectDidFinish(::GlobalNamespace::BeatEffect* beatEffect) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IBeatEffectDidFinishEvent*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatEffect);
}
