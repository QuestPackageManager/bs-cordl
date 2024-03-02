#pragma once
#include "UnityEngine/ResourceManagement/ResourceLocations/zzzz__LocationWrapper_impl.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__DownloadOnlyLocation_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceLocations/zzzz__IResourceLocation_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::DownloadOnlyLocation._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::DownloadOnlyLocation::*)(
    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*)>(&::UnityEngine::ResourceManagement::ResourceProviders::DownloadOnlyLocation::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2cba478;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::DownloadOnlyLocation*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get() })));
    return ___internal_method;
  }
};
inline ::UnityEngine::ResourceManagement::ResourceProviders::DownloadOnlyLocation*
UnityEngine::ResourceManagement::ResourceProviders::DownloadOnlyLocation::New_ctor(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ResourceManagement::ResourceProviders::DownloadOnlyLocation*>(location));
}
inline void UnityEngine::ResourceManagement::ResourceProviders::DownloadOnlyLocation::_ctor(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::DownloadOnlyLocation*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, location);
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::DownloadOnlyLocation::DownloadOnlyLocation() {}
