#pragma once
// IWYU pragma private; include "GlobalNamespace/IRenderingParamsApplicator.hpp"
#include "GlobalNamespace/zzzz__IRenderingParamsApplicator_def.hpp"
#include "GlobalNamespace/zzzz__SceneType_def.hpp"
inline void GlobalNamespace::IRenderingParamsApplicator::Apply(::GlobalNamespace::SceneType sceneType, ::StringW optionalEnvironmentSerializedName) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IRenderingParamsApplicator*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sceneType, optionalEnvironmentSerializedName);
}
