#pragma once
// IWYU pragma private; include "GlobalNamespace\LocalLeaderboardsAsyncLoader.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__AsyncInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__LocalLeaderboardsAsyncLoader_def.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__IInstallerRegistry_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsAsyncLoader.LoadResourcesBeforeInstallAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::LocalLeaderboardsAsyncLoader::*)(::BGLib::AppFlow::Initialization::IInstallerRegistry*, ::Zenject::DiContainer*)>(
        &::GlobalNamespace::LocalLeaderboardsAsyncLoader::LoadResourcesBeforeInstallAsync)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3775eb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsAsyncLoader*>(), { ::i2c::class_of<::GlobalNamespace::LocalLeaderboardsAsyncLoader*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsAsyncLoader.InstallBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalLeaderboardsAsyncLoader::*)()>(&::GlobalNamespace::LocalLeaderboardsAsyncLoader::InstallBindings)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3775f14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsAsyncLoader*>(), { ::i2c::class_of<::GlobalNamespace::LocalLeaderboardsAsyncLoader*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsAsyncLoader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalLeaderboardsAsyncLoader::*)()>(&::GlobalNamespace::LocalLeaderboardsAsyncLoader::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3775f18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsAsyncLoader*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::Threading::Tasks::Task* GlobalNamespace::LocalLeaderboardsAsyncLoader::LoadResourcesBeforeInstallAsync(::BGLib::AppFlow::Initialization::IInstallerRegistry* registry,
                                                                                                                        ::Zenject::DiContainer* container) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LocalLeaderboardsAsyncLoader*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, registry, container);
}
inline void GlobalNamespace::LocalLeaderboardsAsyncLoader::InstallBindings() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LocalLeaderboardsAsyncLoader*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LocalLeaderboardsAsyncLoader::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsAsyncLoader*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LocalLeaderboardsAsyncLoader* GlobalNamespace::LocalLeaderboardsAsyncLoader::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LocalLeaderboardsAsyncLoader*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LocalLeaderboardsAsyncLoader::LocalLeaderboardsAsyncLoader() {}
