#pragma once
// IWYU pragma private; include "GlobalNamespace/IMissionNode.hpp"
#include "GlobalNamespace/zzzz__IMissionNode_def.hpp"
#include "GlobalNamespace/zzzz__MissionDataSO_def.hpp"
inline ::StringW GlobalNamespace::IMissionNode::get_missionId() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IMissionNode*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::MissionDataSO> GlobalNamespace::IMissionNode::get_missionData() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IMissionNode*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::MissionDataSO>, false>(this, ___internal_method);
}
