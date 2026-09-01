#pragma once
// IWYU pragma private; include "UnityEngine\ResourceManagement\ResourceLocations\ILocationSizeData.hpp"
#include "UnityEngine/ResourceManagement/ResourceLocations/zzzz__ILocationSizeData_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceLocations/zzzz__IResourceLocation_def.hpp"
#include "UnityEngine/ResourceManagement/zzzz__ResourceManager_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceLocations::ILocationSizeData.ComputeSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::UnityEngine::ResourceManagement::ResourceLocations::ILocationSizeData::*)(
    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::UnityEngine::ResourceManagement::ResourceManager*)>(
    &::UnityEngine::ResourceManagement::ResourceLocations::ILocationSizeData::ComputeSize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceLocations::ILocationSizeData*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceLocations::ILocationSizeData*>(), 0 }));
    return ___internal_method;
  }
};
inline int64_t UnityEngine::ResourceManagement::ResourceLocations::ILocationSizeData::ComputeSize(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location,
                                                                                                  ::UnityEngine::ResourceManagement::ResourceManager* resourceManager) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceLocations::ILocationSizeData*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, location, resourceManager);
}
