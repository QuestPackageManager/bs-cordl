#pragma once
// IWYU pragma private; include "UnityEngine/Playables/INotification.hpp"
#include "UnityEngine/Playables/zzzz__INotification_def.hpp"
#include "UnityEngine/zzzz__PropertyName_def.hpp"
inline ::UnityEngine::PropertyName UnityEngine::Playables::INotification::get_id() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::INotification*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::PropertyName, false>(this, ___internal_method);
}
