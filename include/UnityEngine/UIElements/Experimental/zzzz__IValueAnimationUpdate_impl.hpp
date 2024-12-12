#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Experimental/IValueAnimationUpdate.hpp"
#include "UnityEngine/UIElements/Experimental/zzzz__IValueAnimationUpdate_def.hpp"
inline void UnityEngine::UIElements::Experimental::IValueAnimationUpdate::Tick(int64_t currentTimeMs) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Experimental::IValueAnimationUpdate*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, currentTimeMs);
}
