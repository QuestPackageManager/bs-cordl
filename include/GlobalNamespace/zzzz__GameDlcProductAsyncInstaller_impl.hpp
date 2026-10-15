#pragma once
// IWYU pragma private; include "GlobalNamespace/GameDlcProductAsyncInstaller.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__AddressablesAsyncInstaller_1_impl.hpp"
#include "GlobalNamespace/zzzz__GameDlcProductAsyncInstaller_def.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__IInstallerRegistry_def.hpp"
#include "GlobalNamespace/zzzz__GameDlcProductSO_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameDlcProductAsyncInstaller.get_assetLabelRuntimeKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameDlcProductAsyncInstaller::*)()>(&::GlobalNamespace::GameDlcProductAsyncInstaller::get_assetLabelRuntimeKey)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x39ef324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameDlcProductAsyncInstaller*>(), { ::i2c::class_of<::GlobalNamespace::GameDlcProductAsyncInstaller*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameDlcProductAsyncInstaller.LoadResourcesBeforeInstall
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameDlcProductAsyncInstaller::*)(
    ::System::Collections::Generic::IList_1<::UnityW<::GlobalNamespace::GameDlcProductSO>>*, ::BGLib::AppFlow::Initialization::IInstallerRegistry*)>(
    &::GlobalNamespace::GameDlcProductAsyncInstaller::LoadResourcesBeforeInstall)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x39ef368;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameDlcProductAsyncInstaller*>(), { ::i2c::class_of<::GlobalNamespace::GameDlcProductAsyncInstaller*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameDlcProductAsyncInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameDlcProductAsyncInstaller::*)()>(&::GlobalNamespace::GameDlcProductAsyncInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x39ef424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameDlcProductAsyncInstaller*>(), { ::i2c::class_of<::GlobalNamespace::GameDlcProductAsyncInstaller*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameDlcProductAsyncInstaller._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameDlcProductAsyncInstaller::*)()>(&::GlobalNamespace::GameDlcProductAsyncInstaller::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x39ef5a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameDlcProductAsyncInstaller*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameDlcProductSO>>*& GlobalNamespace::GameDlcProductAsyncInstaller::__cordl_internal_get__gameDlcProducts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameDlcProducts;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameDlcProductSO>>* const& GlobalNamespace::GameDlcProductAsyncInstaller::__cordl_internal_get__gameDlcProducts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameDlcProducts;
}
constexpr void GlobalNamespace::GameDlcProductAsyncInstaller::__cordl_internal_set__gameDlcProducts(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameDlcProductSO>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameDlcProducts = value;
}
inline ::StringW GlobalNamespace::GameDlcProductAsyncInstaller::get_assetLabelRuntimeKey() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GameDlcProductAsyncInstaller*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::GameDlcProductAsyncInstaller::LoadResourcesBeforeInstall(::System::Collections::Generic::IList_1<::UnityW<::GlobalNamespace::GameDlcProductSO>>* assets,
                                                                                      ::BGLib::AppFlow::Initialization::IInstallerRegistry* registry) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GameDlcProductAsyncInstaller*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, assets, registry);
}
inline void GlobalNamespace::GameDlcProductAsyncInstaller::InstallBindings() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GameDlcProductAsyncInstaller*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameDlcProductAsyncInstaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameDlcProductAsyncInstaller*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameDlcProductAsyncInstaller* GlobalNamespace::GameDlcProductAsyncInstaller::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameDlcProductAsyncInstaller*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameDlcProductAsyncInstaller::GameDlcProductAsyncInstaller() {}
