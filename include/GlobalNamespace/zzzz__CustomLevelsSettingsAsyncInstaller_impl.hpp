#pragma once
// IWYU pragma private; include "GlobalNamespace\CustomLevelsSettingsAsyncInstaller.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__AsyncInstaller_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "GlobalNamespace/zzzz__CustomLevelsSettingsAsyncInstaller_def.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__IInstallerRegistry_def.hpp"
#include "GlobalNamespace/zzzz__CustomLevelsSettingsAsyncInstaller_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CustomLevelsSettingsAsyncInstaller__LoadResourcesBeforeInstallAsync_d__1.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomLevelsSettingsAsyncInstaller__LoadResourcesBeforeInstallAsync_d__1::*)()>(
    &::GlobalNamespace::CustomLevelsSettingsAsyncInstaller__LoadResourcesBeforeInstallAsync_d__1::MoveNext)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x3770068;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CustomLevelsSettingsAsyncInstaller__LoadResourcesBeforeInstallAsync_d__1>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomLevelsSettingsAsyncInstaller__LoadResourcesBeforeInstallAsync_d__1.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomLevelsSettingsAsyncInstaller__LoadResourcesBeforeInstallAsync_d__1::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::CustomLevelsSettingsAsyncInstaller__LoadResourcesBeforeInstallAsync_d__1::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x37701d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CustomLevelsSettingsAsyncInstaller__LoadResourcesBeforeInstallAsync_d__1>(),
                                                             { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::CustomLevelsSettingsAsyncInstaller__LoadResourcesBeforeInstallAsync_d__1::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CustomLevelsSettingsAsyncInstaller__LoadResourcesBeforeInstallAsync_d__1>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::CustomLevelsSettingsAsyncInstaller__LoadResourcesBeforeInstallAsync_d__1::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CustomLevelsSettingsAsyncInstaller__LoadResourcesBeforeInstallAsync_d__1>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::CustomLevelsSettingsAsyncInstaller__LoadResourcesBeforeInstallAsync_d__1::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::CustomLevelsSettingsAsyncInstaller__LoadResourcesBeforeInstallAsync_d__1::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "container", ty: "::Zenject::DiContainer*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::CustomLevelsSettingsAsyncInstaller>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::CustomLevelsSettingsAsyncInstaller__LoadResourcesBeforeInstallAsync_d__1::CustomLevelsSettingsAsyncInstaller__LoadResourcesBeforeInstallAsync_d__1(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Zenject::DiContainer* container,
    ::UnityW<::GlobalNamespace::CustomLevelsSettingsAsyncInstaller> __4__this) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->container = container;
  this->__4__this = __4__this;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomLevelsSettingsAsyncInstaller__LoadResourcesBeforeInstallAsync_d__1::CustomLevelsSettingsAsyncInstaller__LoadResourcesBeforeInstallAsync_d__1() {}
//  Writing Method size for method: ::GlobalNamespace::CustomLevelsSettingsAsyncInstaller.LoadResourcesBeforeInstallAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::CustomLevelsSettingsAsyncInstaller::*)(::BGLib::AppFlow::Initialization::IInstallerRegistry*, ::Zenject::DiContainer*)>(
        &::GlobalNamespace::CustomLevelsSettingsAsyncInstaller::LoadResourcesBeforeInstallAsync)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x376fee0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::CustomLevelsSettingsAsyncInstaller*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::CustomLevelsSettingsAsyncInstaller*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomLevelsSettingsAsyncInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomLevelsSettingsAsyncInstaller::*)()>(&::GlobalNamespace::CustomLevelsSettingsAsyncInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x376ff98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::CustomLevelsSettingsAsyncInstaller*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::CustomLevelsSettingsAsyncInstaller*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomLevelsSettingsAsyncInstaller._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomLevelsSettingsAsyncInstaller::*)()>(&::GlobalNamespace::CustomLevelsSettingsAsyncInstaller::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3770064;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CustomLevelsSettingsAsyncInstaller*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::CustomLevelsSettingsAsyncInstaller::__cordl_internal_get__customLevelsEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____customLevelsEnabled;
}
constexpr bool const& GlobalNamespace::CustomLevelsSettingsAsyncInstaller::__cordl_internal_get__customLevelsEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____customLevelsEnabled;
}
constexpr void GlobalNamespace::CustomLevelsSettingsAsyncInstaller::__cordl_internal_set__customLevelsEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____customLevelsEnabled = value;
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::CustomLevelsSettingsAsyncInstaller::LoadResourcesBeforeInstallAsync(::BGLib::AppFlow::Initialization::IInstallerRegistry* registry,
                                                                                                                              ::Zenject::DiContainer* container) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::CustomLevelsSettingsAsyncInstaller*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, registry, container);
}
inline void GlobalNamespace::CustomLevelsSettingsAsyncInstaller::InstallBindings() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::CustomLevelsSettingsAsyncInstaller*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomLevelsSettingsAsyncInstaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CustomLevelsSettingsAsyncInstaller*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CustomLevelsSettingsAsyncInstaller* GlobalNamespace::CustomLevelsSettingsAsyncInstaller::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CustomLevelsSettingsAsyncInstaller*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomLevelsSettingsAsyncInstaller::CustomLevelsSettingsAsyncInstaller() {}
