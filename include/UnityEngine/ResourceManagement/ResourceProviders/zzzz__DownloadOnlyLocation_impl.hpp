#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/ResourceProviders/DownloadOnlyLocation.hpp"
#include "UnityEngine/ResourceManagement/ResourceLocations/zzzz__LocationWrapper_impl.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__DownloadOnlyLocation_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceLocations/zzzz__IResourceLocation_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::DownloadOnlyLocation._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::DownloadOnlyLocation::*)(
    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*)>(&::UnityEngine::ResourceManagement::ResourceProviders::DownloadOnlyLocation::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x691392c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::DownloadOnlyLocation*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::ResourceManagement::ResourceProviders::DownloadOnlyLocation::_ctor(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::DownloadOnlyLocation*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, location);
}
inline ::UnityEngine::ResourceManagement::ResourceProviders::DownloadOnlyLocation*
UnityEngine::ResourceManagement::ResourceProviders::DownloadOnlyLocation::New_ctor(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ResourceManagement::ResourceProviders::DownloadOnlyLocation*>(location));
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::DownloadOnlyLocation::DownloadOnlyLocation() {}
