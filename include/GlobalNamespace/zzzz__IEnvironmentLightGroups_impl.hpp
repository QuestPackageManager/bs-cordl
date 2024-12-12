#pragma once
// IWYU pragma private; include "GlobalNamespace/IEnvironmentLightGroups.hpp"
#include "GlobalNamespace/zzzz__IEnvironmentLightGroups_def.hpp"
#include "GlobalNamespace/zzzz__ILightGroup_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ILightGroup*>* GlobalNamespace::IEnvironmentLightGroups::get_lightGroups() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IEnvironmentLightGroups*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ILightGroup*>*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ILightGroup* GlobalNamespace::IEnvironmentLightGroups::GetDataForGroup(int32_t groupId) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IEnvironmentLightGroups*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ILightGroup*, false>(this, ___internal_method, groupId);
}
