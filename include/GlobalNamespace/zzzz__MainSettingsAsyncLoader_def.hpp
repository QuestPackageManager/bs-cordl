#pragma once
// IWYU pragma private; include "GlobalNamespace\MainSettingsAsyncLoader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/AppFlow/Initialization/zzzz__AsyncLoader_def.hpp"
#include "BeatSaber/Settings/zzzz__Settings_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "Zenject/zzzz__Installer_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MainSettingsAsyncLoader)
namespace BGLib::AppFlow::Initialization {
struct AsyncLoader_SynchronizationStep;
}
namespace BGLib::AppFlow::Initialization {
class IInstallerRegistry;
}
namespace GlobalNamespace {
class INetworkConfig;
}
namespace GlobalNamespace {
class MainSettingsAsyncLoader_MainSettingsInstaller;
}
namespace GlobalNamespace {
struct MainSettingsAsyncLoader__LoadInternalAsync_d__8;
}
namespace GlobalNamespace {
struct MainSettingsAsyncLoader___LoadInternalAsync_g__CreateSettingsManagerAsync_8_0_d;
}
namespace GlobalNamespace {
class NetworkConfigSO;
}
namespace GlobalNamespace {
class SettingsManager;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
struct CancellationToken;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace GlobalNamespace {
class MainSettingsAsyncLoader;
}
namespace GlobalNamespace {
class MainSettingsAsyncLoader_MainSettingsInstaller;
}
namespace GlobalNamespace {
struct MainSettingsAsyncLoader__LoadInternalAsync_d__8;
}
namespace GlobalNamespace {
struct MainSettingsAsyncLoader___LoadInternalAsync_g__CreateSettingsManagerAsync_8_0_d;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MainSettingsAsyncLoader*);
MARK_REF_T(::GlobalNamespace::MainSettingsAsyncLoader_MainSettingsInstaller*);
MARK_VAL_T(::GlobalNamespace::MainSettingsAsyncLoader__LoadInternalAsync_d__8);
MARK_VAL_T(::GlobalNamespace::MainSettingsAsyncLoader___LoadInternalAsync_g__CreateSettingsManagerAsync_8_0_d);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MainSettingsAsyncLoader*, "", "MainSettingsAsyncLoader");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MainSettingsAsyncLoader_MainSettingsInstaller*, "", "MainSettingsAsyncLoader/MainSettingsInstaller");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MainSettingsAsyncLoader__LoadInternalAsync_d__8, "", "MainSettingsAsyncLoader/<LoadInternalAsync>d__8");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MainSettingsAsyncLoader___LoadInternalAsync_g__CreateSettingsManagerAsync_8_0_d, "",
                    "MainSettingsAsyncLoader/<<LoadInternalAsync>g__CreateSettingsManagerAsync|8_0>d");
// Dependencies Zenject.Installer`1<TDerived>
namespace GlobalNamespace {
// Is value type: false
// CS Name: MainSettingsAsyncLoader/MainSettingsInstaller
class CORDL_TYPE MainSettingsAsyncLoader_MainSettingsInstaller : public ::Zenject::Installer_1<::GlobalNamespace::MainSettingsAsyncLoader_MainSettingsInstaller*> {
public:
  // Declarations
  /// @brief Field _networkConfig, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__networkConfig, put = __cordl_internal_set__networkConfig)) ::GlobalNamespace::INetworkConfig* _networkConfig;

  /// @brief Field _settingsManager, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__settingsManager, put = __cordl_internal_set__settingsManager)) ::GlobalNamespace::SettingsManager* _settingsManager;

  /// @brief Method InstallBindings, addr 0x3776594, size 0x144, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::MainSettingsAsyncLoader_MainSettingsInstaller* New_ctor(::GlobalNamespace::SettingsManager* settingsManager, ::GlobalNamespace::INetworkConfig* networkConfig);

  constexpr ::GlobalNamespace::INetworkConfig* const& __cordl_internal_get__networkConfig() const;

  constexpr ::GlobalNamespace::INetworkConfig*& __cordl_internal_get__networkConfig();

  constexpr ::GlobalNamespace::SettingsManager* const& __cordl_internal_get__settingsManager() const;

  constexpr ::GlobalNamespace::SettingsManager*& __cordl_internal_get__settingsManager();

  constexpr void __cordl_internal_set__networkConfig(::GlobalNamespace::INetworkConfig* value);

  constexpr void __cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value);

  /// @brief Method .ctor, addr 0x3776460, size 0x54, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::SettingsManager* settingsManager, ::GlobalNamespace::INetworkConfig* networkConfig);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MainSettingsAsyncLoader_MainSettingsInstaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MainSettingsAsyncLoader_MainSettingsInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MainSettingsAsyncLoader_MainSettingsInstaller(MainSettingsAsyncLoader_MainSettingsInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MainSettingsAsyncLoader_MainSettingsInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MainSettingsAsyncLoader_MainSettingsInstaller(MainSettingsAsyncLoader_MainSettingsInstaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21025 };

  /// @brief Field _settingsManager, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::SettingsManager* ____settingsManager;

  /// @brief Field _networkConfig, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::INetworkConfig* ____networkConfig;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MainSettingsAsyncLoader_MainSettingsInstaller, ____settingsManager) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsAsyncLoader_MainSettingsInstaller, ____networkConfig) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MainSettingsAsyncLoader_MainSettingsInstaller) == 0x28, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BeatSaber.Settings.Settings, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: MainSettingsAsyncLoader/<<LoadInternalAsync>g__CreateSettingsManagerAsync|8_0>d
struct CORDL_TYPE MainSettingsAsyncLoader___LoadInternalAsync_g__CreateSettingsManagerAsync_8_0_d {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x37766d8, size 0x324, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x37769fc, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr MainSettingsAsyncLoader___LoadInternalAsync_g__CreateSettingsManagerAsync_8_0_d();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::SettingsManager*>", modifiers: "", def_value: None }, CppParam { name: "container", ty:
  // "::Zenject::DiContainer*", modifiers: "", def_value: None }, CppParam { name: "_result_5__2", ty: "::GlobalNamespace::SettingsManager*", modifiers: "", def_value: None }, CppParam { name:
  // "__7__wrap2", ty: "::GlobalNamespace::SettingsManager*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::Settings::Settings>", modifiers: "", def_value: None }]
  constexpr MainSettingsAsyncLoader___LoadInternalAsync_g__CreateSettingsManagerAsync_8_0_d(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::SettingsManager*> __t__builder, ::Zenject::DiContainer* container,
      ::GlobalNamespace::SettingsManager* _result_5__2, ::GlobalNamespace::SettingsManager* __7__wrap2,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::Settings::Settings> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21026 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::SettingsManager*> __t__builder;

  /// @brief Field container, offset: 0x20, size: 0x8, def value: None
  ::Zenject::DiContainer* container;

  /// @brief Field <result>5__2, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::SettingsManager* _result_5__2;

  /// @brief Field <>7__wrap2, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::SettingsManager* __7__wrap2;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::Settings::Settings> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MainSettingsAsyncLoader___LoadInternalAsync_g__CreateSettingsManagerAsync_8_0_d, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsAsyncLoader___LoadInternalAsync_g__CreateSettingsManagerAsync_8_0_d, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsAsyncLoader___LoadInternalAsync_g__CreateSettingsManagerAsync_8_0_d, container) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsAsyncLoader___LoadInternalAsync_g__CreateSettingsManagerAsync_8_0_d, _result_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsAsyncLoader___LoadInternalAsync_g__CreateSettingsManagerAsync_8_0_d, __7__wrap2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsAsyncLoader___LoadInternalAsync_g__CreateSettingsManagerAsync_8_0_d, __u__1) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MainSettingsAsyncLoader___LoadInternalAsync_g__CreateSettingsManagerAsync_8_0_d) == 0x40, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: MainSettingsAsyncLoader/<LoadInternalAsync>d__8
struct CORDL_TYPE MainSettingsAsyncLoader__LoadInternalAsync_d__8 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3776a7c, size 0x234, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3776cb0, size 0x6c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr MainSettingsAsyncLoader__LoadInternalAsync_d__8();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "container", ty: "::Zenject::DiContainer*", modifiers: "", def_value: None },
  // CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::MainSettingsAsyncLoader>", modifiers: "", def_value: None }, CppParam { name: "registry", ty:
  // "::BGLib::AppFlow::Initialization::IInstallerRegistry*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::SettingsManager*>", modifiers: "", def_value: None }]
  constexpr MainSettingsAsyncLoader__LoadInternalAsync_d__8(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Zenject::DiContainer* container,
                                                            ::UnityW<::GlobalNamespace::MainSettingsAsyncLoader> __4__this, ::BGLib::AppFlow::Initialization::IInstallerRegistry* registry,
                                                            ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::SettingsManager*> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21027 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field container, offset: 0x20, size: 0x8, def value: None
  ::Zenject::DiContainer* container;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MainSettingsAsyncLoader> __4__this;

  /// @brief Field registry, offset: 0x30, size: 0x8, def value: None
  ::BGLib::AppFlow::Initialization::IInstallerRegistry* registry;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::SettingsManager*> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MainSettingsAsyncLoader__LoadInternalAsync_d__8, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsAsyncLoader__LoadInternalAsync_d__8, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsAsyncLoader__LoadInternalAsync_d__8, container) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsAsyncLoader__LoadInternalAsync_d__8, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsAsyncLoader__LoadInternalAsync_d__8, registry) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsAsyncLoader__LoadInternalAsync_d__8, __u__1) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MainSettingsAsyncLoader__LoadInternalAsync_d__8) == 0x40, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BGLib.AppFlow.Initialization.AsyncLoader
namespace GlobalNamespace {
// Is value type: false
// CS Name: MainSettingsAsyncLoader
class CORDL_TYPE MainSettingsAsyncLoader : public ::BGLib::AppFlow::Initialization::AsyncLoader {
public:
  // Declarations
  using MainSettingsInstaller = ::GlobalNamespace::MainSettingsAsyncLoader_MainSettingsInstaller;

  using _LoadInternalAsync_d__8 = ::GlobalNamespace::MainSettingsAsyncLoader__LoadInternalAsync_d__8;

  using __LoadInternalAsync_g__CreateSettingsManagerAsync_8_0_d = ::GlobalNamespace::MainSettingsAsyncLoader___LoadInternalAsync_g__CreateSettingsManagerAsync_8_0_d;

  /// @brief Field _networkConfig, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__networkConfig, put = __cordl_internal_set__networkConfig)) ::UnityW<::GlobalNamespace::NetworkConfigSO> _networkConfig;

  /// @brief Field <networkConfig>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__networkConfig_k__BackingField,
                      put = __cordl_internal_set__networkConfig_k__BackingField)) ::GlobalNamespace::INetworkConfig* _networkConfig_k__BackingField;

  /// @brief Field _settingsManager, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__settingsManager, put = __cordl_internal_set__settingsManager)) ::GlobalNamespace::SettingsManager* _settingsManager;

  __declspec(property(get = get_networkConfig, put = set_networkConfig)) ::GlobalNamespace::INetworkConfig* networkConfig;

  __declspec(property(get = get_synchronizationStep)) ::BGLib::AppFlow::Initialization::AsyncLoader_SynchronizationStep synchronizationStep;

  /// @brief Method LoadInternalAsync, addr 0x3776014, size 0xc4, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* LoadInternalAsync(::BGLib::AppFlow::Initialization::IInstallerRegistry* registry, ::Zenject::DiContainer* container,
                                                             ::System::Threading::CancellationToken cancellationToken);

  static inline ::GlobalNamespace::MainSettingsAsyncLoader* New_ctor();

  /// @brief Method RegisterInstallers, addr 0x37760d8, size 0x388, virtual false, abstract: false, final false
  inline void RegisterInstallers(::BGLib::AppFlow::Initialization::IInstallerRegistry* registry);

  /// @brief Method <LoadInternalAsync>g__CreateSettingsManagerAsync|8_0, addr 0x37764b8, size 0xdc, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::SettingsManager*>* _LoadInternalAsync_g__CreateSettingsManagerAsync_8_0(::Zenject::DiContainer* container);

  constexpr ::UnityW<::GlobalNamespace::NetworkConfigSO> const& __cordl_internal_get__networkConfig() const;

  constexpr ::UnityW<::GlobalNamespace::NetworkConfigSO>& __cordl_internal_get__networkConfig();

  constexpr ::GlobalNamespace::INetworkConfig* const& __cordl_internal_get__networkConfig_k__BackingField() const;

  constexpr ::GlobalNamespace::INetworkConfig*& __cordl_internal_get__networkConfig_k__BackingField();

  constexpr ::GlobalNamespace::SettingsManager* const& __cordl_internal_get__settingsManager() const;

  constexpr ::GlobalNamespace::SettingsManager*& __cordl_internal_get__settingsManager();

  constexpr void __cordl_internal_set__networkConfig(::UnityW<::GlobalNamespace::NetworkConfigSO> value);

  constexpr void __cordl_internal_set__networkConfig_k__BackingField(::GlobalNamespace::INetworkConfig* value);

  constexpr void __cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value);

  /// @brief Method .ctor, addr 0x37764b4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_networkConfig, addr 0x3775ffc, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::INetworkConfig* get_networkConfig();

  /// @brief Method get_synchronizationStep, addr 0x377600c, size 0x8, virtual true, abstract: false, final false
  inline ::BGLib::AppFlow::Initialization::AsyncLoader_SynchronizationStep get_synchronizationStep();

  /// @brief Method set_networkConfig, addr 0x3776004, size 0x8, virtual false, abstract: false, final false
  inline void set_networkConfig(::GlobalNamespace::INetworkConfig* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MainSettingsAsyncLoader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MainSettingsAsyncLoader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MainSettingsAsyncLoader(MainSettingsAsyncLoader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MainSettingsAsyncLoader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MainSettingsAsyncLoader(MainSettingsAsyncLoader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21028 };

  /// @brief Field _networkConfig, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::NetworkConfigSO> ____networkConfig;

  /// @brief Field _settingsManager, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::SettingsManager* ____settingsManager;

  /// @brief Field <networkConfig>k__BackingField, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::INetworkConfig* ____networkConfig_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MainSettingsAsyncLoader, ____networkConfig) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsAsyncLoader, ____settingsManager) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsAsyncLoader, ____networkConfig_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MainSettingsAsyncLoader) == 0x48, "Size mismatch!");

} // namespace GlobalNamespace
