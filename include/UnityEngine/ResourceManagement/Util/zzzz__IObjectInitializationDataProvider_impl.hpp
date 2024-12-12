#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/Util/IObjectInitializationDataProvider.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__IObjectInitializationDataProvider_def.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__ObjectInitializationData_def.hpp"
inline ::StringW UnityEngine::ResourceManagement::Util::IObjectInitializationDataProvider::get_Name() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::IObjectInitializationDataProvider*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::Util::ObjectInitializationData UnityEngine::ResourceManagement::Util::IObjectInitializationDataProvider::CreateObjectInitializationData() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::IObjectInitializationDataProvider*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::Util::ObjectInitializationData, false>(this, ___internal_method);
}
