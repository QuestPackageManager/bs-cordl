#pragma once
// IWYU pragma private; include "BGLib/MetaRemoteAssets/Installers/MetaRemoteAssetsInstaller.hpp"
#include "Zenject/zzzz__ScriptableObjectInstaller_impl.hpp"
#include "BGLib/MetaRemoteAssets/Installers/zzzz__MetaRemoteAssetsInstaller_def.hpp"
#include "GlobalNamespace/zzzz__AppInitSetupData_def.hpp"
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::Installers::MetaRemoteAssetsInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::MetaRemoteAssets::Installers::MetaRemoteAssetsInstaller::*)()>(
    &::BGLib::MetaRemoteAssets::Installers::MetaRemoteAssetsInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x32233e4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::Installers::MetaRemoteAssetsInstaller*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::Installers::MetaRemoteAssetsInstaller*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::Installers::MetaRemoteAssetsInstaller.GetPlatform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::BGLib::MetaRemoteAssets::Installers::MetaRemoteAssetsInstaller::GetPlatform)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x32235a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::Installers::MetaRemoteAssetsInstaller*>::get(), "GetPlatform",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::Installers::MetaRemoteAssetsInstaller.InstallRemoteCatalogLoader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::MetaRemoteAssets::Installers::MetaRemoteAssetsInstaller::*)()>(
    &::BGLib::MetaRemoteAssets::Installers::MetaRemoteAssetsInstaller::InstallRemoteCatalogLoader)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x32235e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::Installers::MetaRemoteAssetsInstaller*>::get(),
                                                 "InstallRemoteCatalogLoader", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::Installers::MetaRemoteAssetsInstaller._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::MetaRemoteAssets::Installers::MetaRemoteAssetsInstaller::*)()>(
    &::BGLib::MetaRemoteAssets::Installers::MetaRemoteAssetsInstaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3223690;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::Installers::MetaRemoteAssetsInstaller*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::AppInitSetupData*& BGLib::MetaRemoteAssets::Installers::MetaRemoteAssetsInstaller::__cordl_internal_get__appInitSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appInitSetupData;
}
constexpr ::GlobalNamespace::AppInitSetupData* const& BGLib::MetaRemoteAssets::Installers::MetaRemoteAssetsInstaller::__cordl_internal_get__appInitSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appInitSetupData;
}
constexpr void BGLib::MetaRemoteAssets::Installers::MetaRemoteAssetsInstaller::__cordl_internal_set__appInitSetupData(::GlobalNamespace::AppInitSetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____appInitSetupData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void BGLib::MetaRemoteAssets::Installers::MetaRemoteAssetsInstaller::InstallBindings() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::Installers::MetaRemoteAssetsInstaller*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW BGLib::MetaRemoteAssets::Installers::MetaRemoteAssetsInstaller::GetPlatform() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::Installers::MetaRemoteAssetsInstaller*>::get(), "GetPlatform",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline void BGLib::MetaRemoteAssets::Installers::MetaRemoteAssetsInstaller::InstallRemoteCatalogLoader() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::Installers::MetaRemoteAssetsInstaller*>::get(),
                                               "InstallRemoteCatalogLoader", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BGLib::MetaRemoteAssets::Installers::MetaRemoteAssetsInstaller::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::Installers::MetaRemoteAssetsInstaller*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::BGLib::MetaRemoteAssets::Installers::MetaRemoteAssetsInstaller* BGLib::MetaRemoteAssets::Installers::MetaRemoteAssetsInstaller::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BGLib::MetaRemoteAssets::Installers::MetaRemoteAssetsInstaller*>());
}
// Ctor Parameters []
constexpr ::BGLib::MetaRemoteAssets::Installers::MetaRemoteAssetsInstaller::MetaRemoteAssetsInstaller() {}
