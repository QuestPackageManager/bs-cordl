#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/ResourceLocations/ILocationSizeData.hpp"
#include "UnityEngine/ResourceManagement/ResourceLocations/zzzz__ILocationSizeData_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceLocations/zzzz__IResourceLocation_def.hpp"
#include "UnityEngine/ResourceManagement/zzzz__ResourceManager_def.hpp"
inline int64_t UnityEngine::ResourceManagement::ResourceLocations::ILocationSizeData::ComputeSize(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location,
                                                                                                  ::UnityEngine::ResourceManagement::ResourceManager* resourceManager) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceLocations::ILocationSizeData*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method, location, resourceManager);
}
