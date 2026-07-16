#pragma once
// IWYU pragma private; include "BGLib/AppFlow/Initialization/FeatureAsyncInstaller.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__AddressablesAsyncInstaller_1_impl.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__FeatureAsyncInstaller_def.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__IInstallerRegistry_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "Zenject/zzzz__ScriptableObjectInstaller_def.hpp"
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::FeatureAsyncInstaller.get_assetLabelRuntimeKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::BGLib::AppFlow::Initialization::FeatureAsyncInstaller::*)()>(
    &::BGLib::AppFlow::Initialization::FeatureAsyncInstaller::get_assetLabelRuntimeKey)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x33083b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::FeatureAsyncInstaller*>(),
                                                                                          { ::i2c::class_of<::BGLib::AppFlow::Initialization::FeatureAsyncInstaller*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::FeatureAsyncInstaller.LoadResourcesBeforeInstall
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::AppFlow::Initialization::FeatureAsyncInstaller::*)(
    ::System::Collections::Generic::IList_1<::UnityW<::Zenject::ScriptableObjectInstaller>>*, ::BGLib::AppFlow::Initialization::IInstallerRegistry*)>(
    &::BGLib::AppFlow::Initialization::FeatureAsyncInstaller::LoadResourcesBeforeInstall)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x33083f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::FeatureAsyncInstaller*>(),
                                                                                          { ::i2c::class_of<::BGLib::AppFlow::Initialization::FeatureAsyncInstaller*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::FeatureAsyncInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::AppFlow::Initialization::FeatureAsyncInstaller::*)()>(
    &::BGLib::AppFlow::Initialization::FeatureAsyncInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x330871c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::FeatureAsyncInstaller*>(),
                                                                                          { ::i2c::class_of<::BGLib::AppFlow::Initialization::FeatureAsyncInstaller*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::FeatureAsyncInstaller._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::AppFlow::Initialization::FeatureAsyncInstaller::*)()>(&::BGLib::AppFlow::Initialization::FeatureAsyncInstaller::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3308720;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::FeatureAsyncInstaller*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::StringW BGLib::AppFlow::Initialization::FeatureAsyncInstaller::get_assetLabelRuntimeKey() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BGLib::AppFlow::Initialization::FeatureAsyncInstaller*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void
BGLib::AppFlow::Initialization::FeatureAsyncInstaller::LoadResourcesBeforeInstall(::System::Collections::Generic::IList_1<::UnityW<::Zenject::ScriptableObjectInstaller>>* scriptableObjectInstallers,
                                                                                  ::BGLib::AppFlow::Initialization::IInstallerRegistry* registry) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BGLib::AppFlow::Initialization::FeatureAsyncInstaller*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scriptableObjectInstallers, registry);
}
inline void BGLib::AppFlow::Initialization::FeatureAsyncInstaller::InstallBindings() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BGLib::AppFlow::Initialization::FeatureAsyncInstaller*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BGLib::AppFlow::Initialization::FeatureAsyncInstaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::FeatureAsyncInstaller*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BGLib::AppFlow::Initialization::FeatureAsyncInstaller* BGLib::AppFlow::Initialization::FeatureAsyncInstaller::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::AppFlow::Initialization::FeatureAsyncInstaller*>());
}
// Ctor Parameters []
constexpr ::BGLib::AppFlow::Initialization::FeatureAsyncInstaller::FeatureAsyncInstaller() {}
