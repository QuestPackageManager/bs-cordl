#pragma once
// IWYU pragma private; include "GlobalNamespace\MainSettingsAsyncLoader.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__AsyncLoader_impl.hpp"
#include "BeatSaber/Settings/zzzz__Settings_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "Zenject/zzzz__Installer_1_impl.hpp"
#include "GlobalNamespace/zzzz__MainSettingsAsyncLoader_def.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__AsyncLoader_def.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__IInstallerRegistry_def.hpp"
#include "GlobalNamespace/zzzz__INetworkConfig_def.hpp"
#include "GlobalNamespace/zzzz__MainSettingsAsyncLoader_def.hpp"
#include "GlobalNamespace/zzzz__NetworkConfigSO_def.hpp"
#include "GlobalNamespace/zzzz__SettingsManager_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MainSettingsAsyncLoader_MainSettingsInstaller._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainSettingsAsyncLoader_MainSettingsInstaller::*)(
    ::GlobalNamespace::SettingsManager*, ::GlobalNamespace::INetworkConfig*)>(&::GlobalNamespace::MainSettingsAsyncLoader_MainSettingsInstaller::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x3776460;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainSettingsAsyncLoader_MainSettingsInstaller*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::SettingsManager*>(), ::i2c::type_of<::GlobalNamespace::INetworkConfig*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSettingsAsyncLoader_MainSettingsInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainSettingsAsyncLoader_MainSettingsInstaller::*)()>(
    &::GlobalNamespace::MainSettingsAsyncLoader_MainSettingsInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x3776594;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainSettingsAsyncLoader_MainSettingsInstaller*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::MainSettingsAsyncLoader_MainSettingsInstaller*>(), 7 }));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::SettingsManager*& GlobalNamespace::MainSettingsAsyncLoader_MainSettingsInstaller::__cordl_internal_get__settingsManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr ::GlobalNamespace::SettingsManager* const& GlobalNamespace::MainSettingsAsyncLoader_MainSettingsInstaller::__cordl_internal_get__settingsManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr void GlobalNamespace::MainSettingsAsyncLoader_MainSettingsInstaller::__cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____settingsManager = value;
}
constexpr ::GlobalNamespace::INetworkConfig*& GlobalNamespace::MainSettingsAsyncLoader_MainSettingsInstaller::__cordl_internal_get__networkConfig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____networkConfig;
}
constexpr ::GlobalNamespace::INetworkConfig* const& GlobalNamespace::MainSettingsAsyncLoader_MainSettingsInstaller::__cordl_internal_get__networkConfig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____networkConfig;
}
constexpr void GlobalNamespace::MainSettingsAsyncLoader_MainSettingsInstaller::__cordl_internal_set__networkConfig(::GlobalNamespace::INetworkConfig* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____networkConfig = value;
}
inline void GlobalNamespace::MainSettingsAsyncLoader_MainSettingsInstaller::_ctor(::GlobalNamespace::SettingsManager* settingsManager, ::GlobalNamespace::INetworkConfig* networkConfig) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainSettingsAsyncLoader_MainSettingsInstaller*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::SettingsManager*>(), ::i2c::type_of<::GlobalNamespace::INetworkConfig*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, settingsManager, networkConfig);
}
inline void GlobalNamespace::MainSettingsAsyncLoader_MainSettingsInstaller::InstallBindings() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MainSettingsAsyncLoader_MainSettingsInstaller*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MainSettingsAsyncLoader_MainSettingsInstaller* GlobalNamespace::MainSettingsAsyncLoader_MainSettingsInstaller::New_ctor(::GlobalNamespace::SettingsManager* settingsManager,
                                                                                                                                                  ::GlobalNamespace::INetworkConfig* networkConfig) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MainSettingsAsyncLoader_MainSettingsInstaller*>(settingsManager, networkConfig));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MainSettingsAsyncLoader_MainSettingsInstaller::MainSettingsAsyncLoader_MainSettingsInstaller() {}
//  Writing Method size for method: ::GlobalNamespace::MainSettingsAsyncLoader___LoadInternalAsync_g__CreateSettingsManagerAsync_8_0_d.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainSettingsAsyncLoader___LoadInternalAsync_g__CreateSettingsManagerAsync_8_0_d::*)()>(
    &::GlobalNamespace::MainSettingsAsyncLoader___LoadInternalAsync_g__CreateSettingsManagerAsync_8_0_d::MoveNext)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x37766d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainSettingsAsyncLoader___LoadInternalAsync_g__CreateSettingsManagerAsync_8_0_d>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSettingsAsyncLoader___LoadInternalAsync_g__CreateSettingsManagerAsync_8_0_d.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainSettingsAsyncLoader___LoadInternalAsync_g__CreateSettingsManagerAsync_8_0_d::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::MainSettingsAsyncLoader___LoadInternalAsync_g__CreateSettingsManagerAsync_8_0_d::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x37769fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainSettingsAsyncLoader___LoadInternalAsync_g__CreateSettingsManagerAsync_8_0_d>(),
                                                             { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MainSettingsAsyncLoader___LoadInternalAsync_g__CreateSettingsManagerAsync_8_0_d::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainSettingsAsyncLoader___LoadInternalAsync_g__CreateSettingsManagerAsync_8_0_d>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::MainSettingsAsyncLoader___LoadInternalAsync_g__CreateSettingsManagerAsync_8_0_d::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainSettingsAsyncLoader___LoadInternalAsync_g__CreateSettingsManagerAsync_8_0_d>(),
                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::MainSettingsAsyncLoader___LoadInternalAsync_g__CreateSettingsManagerAsync_8_0_d::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::MainSettingsAsyncLoader___LoadInternalAsync_g__CreateSettingsManagerAsync_8_0_d::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::SettingsManager*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "container", ty:
// "::Zenject::DiContainer*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_result_5__2", ty: "::GlobalNamespace::SettingsManager*", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "__7__wrap2", ty: "::GlobalNamespace::SettingsManager*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::Settings::Settings>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::MainSettingsAsyncLoader___LoadInternalAsync_g__CreateSettingsManagerAsync_8_0_d::MainSettingsAsyncLoader___LoadInternalAsync_g__CreateSettingsManagerAsync_8_0_d(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::SettingsManager*> __t__builder, ::Zenject::DiContainer* container,
    ::GlobalNamespace::SettingsManager* _result_5__2, ::GlobalNamespace::SettingsManager* __7__wrap2,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::Settings::Settings> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->container = container;
  this->_result_5__2 = _result_5__2;
  this->__7__wrap2 = __7__wrap2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MainSettingsAsyncLoader___LoadInternalAsync_g__CreateSettingsManagerAsync_8_0_d::MainSettingsAsyncLoader___LoadInternalAsync_g__CreateSettingsManagerAsync_8_0_d() {}
//  Writing Method size for method: ::GlobalNamespace::MainSettingsAsyncLoader__LoadInternalAsync_d__8.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainSettingsAsyncLoader__LoadInternalAsync_d__8::*)()>(
    &::GlobalNamespace::MainSettingsAsyncLoader__LoadInternalAsync_d__8::MoveNext)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x3776a7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainSettingsAsyncLoader__LoadInternalAsync_d__8>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSettingsAsyncLoader__LoadInternalAsync_d__8.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainSettingsAsyncLoader__LoadInternalAsync_d__8::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::MainSettingsAsyncLoader__LoadInternalAsync_d__8::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3776cb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainSettingsAsyncLoader__LoadInternalAsync_d__8>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MainSettingsAsyncLoader__LoadInternalAsync_d__8::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainSettingsAsyncLoader__LoadInternalAsync_d__8>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::MainSettingsAsyncLoader__LoadInternalAsync_d__8::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainSettingsAsyncLoader__LoadInternalAsync_d__8>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::MainSettingsAsyncLoader__LoadInternalAsync_d__8::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::MainSettingsAsyncLoader__LoadInternalAsync_d__8::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "container", ty: "::Zenject::DiContainer*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::MainSettingsAsyncLoader>", modifiers: "", def_value: Some("{}") }, CppParam { name: "registry", ty:
// "::BGLib::AppFlow::Initialization::IInstallerRegistry*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::SettingsManager*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::MainSettingsAsyncLoader__LoadInternalAsync_d__8::MainSettingsAsyncLoader__LoadInternalAsync_d__8(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Zenject::DiContainer* container, ::UnityW<::GlobalNamespace::MainSettingsAsyncLoader> __4__this,
    ::BGLib::AppFlow::Initialization::IInstallerRegistry* registry, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::SettingsManager*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->container = container;
  this->__4__this = __4__this;
  this->registry = registry;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MainSettingsAsyncLoader__LoadInternalAsync_d__8::MainSettingsAsyncLoader__LoadInternalAsync_d__8() {}
//  Writing Method size for method: ::GlobalNamespace::MainSettingsAsyncLoader.get_networkConfig
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::INetworkConfig* (::GlobalNamespace::MainSettingsAsyncLoader::*)()>(
    &::GlobalNamespace::MainSettingsAsyncLoader::get_networkConfig)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3775ffc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainSettingsAsyncLoader*>(), { "get_networkConfig", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSettingsAsyncLoader.set_networkConfig
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainSettingsAsyncLoader::*)(::GlobalNamespace::INetworkConfig*)>(
    &::GlobalNamespace::MainSettingsAsyncLoader::set_networkConfig)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3776004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainSettingsAsyncLoader*>(), { "set_networkConfig", {}, { ::i2c::type_of<::GlobalNamespace::INetworkConfig*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSettingsAsyncLoader.get_synchronizationStep
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BGLib::AppFlow::Initialization::AsyncLoader_SynchronizationStep (::GlobalNamespace::MainSettingsAsyncLoader::*)()>(
    &::GlobalNamespace::MainSettingsAsyncLoader::get_synchronizationStep)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x377600c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainSettingsAsyncLoader*>(), { ::i2c::class_of<::GlobalNamespace::MainSettingsAsyncLoader*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSettingsAsyncLoader.LoadInternalAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (
    ::GlobalNamespace::MainSettingsAsyncLoader::*)(::BGLib::AppFlow::Initialization::IInstallerRegistry*, ::Zenject::DiContainer*, ::System::Threading::CancellationToken)>(
    &::GlobalNamespace::MainSettingsAsyncLoader::LoadInternalAsync)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x3776014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainSettingsAsyncLoader*>(), { ::i2c::class_of<::GlobalNamespace::MainSettingsAsyncLoader*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSettingsAsyncLoader.RegisterInstallers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainSettingsAsyncLoader::*)(::BGLib::AppFlow::Initialization::IInstallerRegistry*)>(
    &::GlobalNamespace::MainSettingsAsyncLoader::RegisterInstallers)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x37760d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainSettingsAsyncLoader*>(),
                                                                                           { "RegisterInstallers", {}, { ::i2c::type_of<::BGLib::AppFlow::Initialization::IInstallerRegistry*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSettingsAsyncLoader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainSettingsAsyncLoader::*)()>(&::GlobalNamespace::MainSettingsAsyncLoader::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x37764b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainSettingsAsyncLoader*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSettingsAsyncLoader._LoadInternalAsync_g__CreateSettingsManagerAsync_8_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::SettingsManager*>* (*)(::Zenject::DiContainer*)>(
    &::GlobalNamespace::MainSettingsAsyncLoader::_LoadInternalAsync_g__CreateSettingsManagerAsync_8_0)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x37764b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainSettingsAsyncLoader*>(),
                                                             { "<LoadInternalAsync>g__CreateSettingsManagerAsync|8_0", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::NetworkConfigSO>& GlobalNamespace::MainSettingsAsyncLoader::__cordl_internal_get__networkConfig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____networkConfig;
}
constexpr ::UnityW<::GlobalNamespace::NetworkConfigSO> const& GlobalNamespace::MainSettingsAsyncLoader::__cordl_internal_get__networkConfig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____networkConfig;
}
constexpr void GlobalNamespace::MainSettingsAsyncLoader::__cordl_internal_set__networkConfig(::UnityW<::GlobalNamespace::NetworkConfigSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____networkConfig = value;
}
constexpr ::GlobalNamespace::SettingsManager*& GlobalNamespace::MainSettingsAsyncLoader::__cordl_internal_get__settingsManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr ::GlobalNamespace::SettingsManager* const& GlobalNamespace::MainSettingsAsyncLoader::__cordl_internal_get__settingsManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr void GlobalNamespace::MainSettingsAsyncLoader::__cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____settingsManager = value;
}
constexpr ::GlobalNamespace::INetworkConfig*& GlobalNamespace::MainSettingsAsyncLoader::__cordl_internal_get__networkConfig_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____networkConfig_k__BackingField;
}
constexpr ::GlobalNamespace::INetworkConfig* const& GlobalNamespace::MainSettingsAsyncLoader::__cordl_internal_get__networkConfig_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____networkConfig_k__BackingField;
}
constexpr void GlobalNamespace::MainSettingsAsyncLoader::__cordl_internal_set__networkConfig_k__BackingField(::GlobalNamespace::INetworkConfig* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____networkConfig_k__BackingField = value;
}
inline ::GlobalNamespace::INetworkConfig* GlobalNamespace::MainSettingsAsyncLoader::get_networkConfig() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainSettingsAsyncLoader*>(), { "get_networkConfig", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::INetworkConfig*>(this, ___internal_method);
}
inline void GlobalNamespace::MainSettingsAsyncLoader::set_networkConfig(::GlobalNamespace::INetworkConfig* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainSettingsAsyncLoader*>(), { "set_networkConfig", {}, { ::i2c::type_of<::GlobalNamespace::INetworkConfig*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::BGLib::AppFlow::Initialization::AsyncLoader_SynchronizationStep GlobalNamespace::MainSettingsAsyncLoader::get_synchronizationStep() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MainSettingsAsyncLoader*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::BGLib::AppFlow::Initialization::AsyncLoader_SynchronizationStep>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::MainSettingsAsyncLoader::LoadInternalAsync(::BGLib::AppFlow::Initialization::IInstallerRegistry* registry, ::Zenject::DiContainer* container,
                                                                                                     ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MainSettingsAsyncLoader*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, registry, container, cancellationToken);
}
inline void GlobalNamespace::MainSettingsAsyncLoader::RegisterInstallers(::BGLib::AppFlow::Initialization::IInstallerRegistry* registry) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainSettingsAsyncLoader*>(),
                                                                                         { "RegisterInstallers", {}, { ::i2c::type_of<::BGLib::AppFlow::Initialization::IInstallerRegistry*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, registry);
}
inline void GlobalNamespace::MainSettingsAsyncLoader::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainSettingsAsyncLoader*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::SettingsManager*>*
GlobalNamespace::MainSettingsAsyncLoader::_LoadInternalAsync_g__CreateSettingsManagerAsync_8_0(::Zenject::DiContainer* container) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainSettingsAsyncLoader*>(),
                                                           { "<LoadInternalAsync>g__CreateSettingsManagerAsync|8_0", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::SettingsManager*>*>(nullptr, ___internal_method, container);
}
inline ::GlobalNamespace::MainSettingsAsyncLoader* GlobalNamespace::MainSettingsAsyncLoader::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MainSettingsAsyncLoader*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MainSettingsAsyncLoader::MainSettingsAsyncLoader() {}
