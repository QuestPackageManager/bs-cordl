#pragma once
#include "UnityEngine/ResourceManagement/ResourceLocations/zzzz__ILocationSizeData_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceLocations/zzzz__IResourceLocation_def.hpp"
#include "UnityEngine/ResourceManagement/zzzz__ResourceManager_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceLocations::ILocationSizeData.ComputeSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::UnityEngine::ResourceManagement::ResourceLocations::ILocationSizeData::*)(
    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::UnityEngine::ResourceManagement::ResourceManager*)>(
    &::UnityEngine::ResourceManagement::ResourceLocations::ILocationSizeData::ComputeSize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceLocations::ILocationSizeData*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceLocations::ILocationSizeData*>::get(), 0));
    return ___internal_method;
  }
};
inline int64_t UnityEngine::ResourceManagement::ResourceLocations::ILocationSizeData::ComputeSize(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location,
                                                                                                  ::UnityEngine::ResourceManagement::ResourceManager* resourceManager) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceLocations::ILocationSizeData*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method, location, resourceManager);
}
