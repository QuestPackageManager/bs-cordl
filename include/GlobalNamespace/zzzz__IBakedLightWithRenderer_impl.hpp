#pragma once
// IWYU pragma private; include "GlobalNamespace/IBakedLightWithRenderer.hpp"
#include "GlobalNamespace/zzzz__IBakedLightWithRenderer_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
inline ::UnityW<::UnityEngine::Material> GlobalNamespace::IBakedLightWithRenderer::get_bakingMaterial() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IBakedLightWithRenderer*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>, false>(this, ___internal_method);
}
