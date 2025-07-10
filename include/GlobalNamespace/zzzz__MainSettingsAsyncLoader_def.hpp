#pragma once
// IWYU pragma private; include "GlobalNamespace/MainSettingsAsyncLoader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/AppFlow/Initialization/zzzz__AsyncInstaller_def.hpp"
#include "BGLib/DotnetExtension/CommandLine/zzzz__CommandLineParserResult_def.hpp"
#include "BeatSaber/Settings/zzzz__Settings_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MainSettingsAsyncLoader)
namespace BGLib::AppFlow::Initialization {
class AsyncInstaller_IInstallerRegistry;
}
namespace GlobalNamespace {
class AppInitSetupData;
}
namespace GlobalNamespace {
class AudioManagerSO;
}
namespace GlobalNamespace {
class HapticFeedbackManager;
}
namespace GlobalNamespace {
class ICoroutineStarter;
}
namespace GlobalNamespace {
struct MainSettingsAsyncLoader__LoadResourcesBeforeInstallAsync_d__10;
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
class Task;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace GlobalNamespace {
class MainSettingsAsyncLoader;
}
namespace GlobalNamespace {
struct MainSettingsAsyncLoader__LoadResourcesBeforeInstallAsync_d__10;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MainSettingsAsyncLoader);
MARK_VAL_T(::GlobalNamespace::MainSettingsAsyncLoader__LoadResourcesBeforeInstallAsync_d__10);
// Dependencies BeatSaber.Settings.Settings, System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine,
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: MainSettingsAsyncLoader/<LoadResourcesBeforeInstallAsync>d__10
struct CORDL_TYPE MainSettingsAsyncLoader__LoadResourcesBeforeInstallAsync_d__10 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2719528, size 0x2e0, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2719808, size 0x68, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr MainSettingsAsyncLoader__LoadResourcesBeforeInstallAsync_d__10();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "container", ty: "::Zenject::DiContainer*", modifiers: "", def_value: None },
  // CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::MainSettingsAsyncLoader>", modifiers: "", def_value: None }, CppParam { name: "__7__wrap1", ty:
  // "::GlobalNamespace::SettingsManager*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::Settings::Settings>",
  // modifiers: "", def_value: None }]
  constexpr MainSettingsAsyncLoader__LoadResourcesBeforeInstallAsync_d__10(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                           ::Zenject::DiContainer* container, ::UnityW<::GlobalNamespace::MainSettingsAsyncLoader> __4__this,
                                                                           ::GlobalNamespace::SettingsManager* __7__wrap1,
                                                                           ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::Settings::Settings> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17798 };

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

  /// @brief Field <>7__wrap1, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::SettingsManager* __7__wrap1;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::Settings::Settings> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MainSettingsAsyncLoader__LoadResourcesBeforeInstallAsync_d__10, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsAsyncLoader__LoadResourcesBeforeInstallAsync_d__10, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsAsyncLoader__LoadResourcesBeforeInstallAsync_d__10, container) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsAsyncLoader__LoadResourcesBeforeInstallAsync_d__10, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsAsyncLoader__LoadResourcesBeforeInstallAsync_d__10, __7__wrap1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsAsyncLoader__LoadResourcesBeforeInstallAsync_d__10, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MainSettingsAsyncLoader__LoadResourcesBeforeInstallAsync_d__10, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BGLib.AppFlow.Initialization.AsyncInstaller, BGLib.DotnetExtension.CommandLine.CommandLineParserResult
namespace GlobalNamespace {
// Is value type: false
// CS Name: MainSettingsAsyncLoader
class CORDL_TYPE MainSettingsAsyncLoader : public ::BGLib::AppFlow::Initialization::AsyncInstaller {
public:
  // Declarations
  using _LoadResourcesBeforeInstallAsync_d__10 = ::GlobalNamespace::MainSettingsAsyncLoader__LoadResourcesBeforeInstallAsync_d__10;

  /// @brief Field _audioManager, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__audioManager, put = __cordl_internal_set__audioManager)) ::UnityW<::GlobalNamespace::AudioManagerSO> _audioManager;

  /// @brief Field _commandLineParserResult, offset 0x48, size 0x18
  __declspec(property(get = __cordl_internal_get__commandLineParserResult,
                      put = __cordl_internal_set__commandLineParserResult)) ::BGLib::DotnetExtension::CommandLine::CommandLineParserResult _commandLineParserResult;

  /// @brief Field _coroutineStarter, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__coroutineStarter, put = __cordl_internal_set__coroutineStarter)) ::GlobalNamespace::ICoroutineStarter* _coroutineStarter;

  /// @brief Field _hapticFeedbackControllerPrefab, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__hapticFeedbackControllerPrefab, put = __cordl_internal_set__hapticFeedbackControllerPrefab)) ::UnityW<::GlobalNamespace::HapticFeedbackManager>
      _hapticFeedbackControllerPrefab;

  /// @brief Field _networkConfig, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__networkConfig, put = __cordl_internal_set__networkConfig)) ::UnityW<::GlobalNamespace::NetworkConfigSO> _networkConfig;

  /// @brief Field _settingManager, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__settingManager, put = __cordl_internal_set__settingManager)) ::GlobalNamespace::SettingsManager* _settingManager;

  /// @brief Field _setupData, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__setupData, put = __cordl_internal_set__setupData)) ::GlobalNamespace::AppInitSetupData* _setupData;

  __declspec(property(get = get_isRunningFromTests)) bool isRunningFromTests;

  /// @brief Method InstallBindings, addr 0x2718dec, size 0x108, virtual true, abstract: false, final false
  inline void InstallBindings();

  /// @brief Method InstallBindingsThatRelyOnSettings, addr 0x2718ef4, size 0x610, virtual false, abstract: false, final false
  inline void InstallBindingsThatRelyOnSettings();

  /// @brief Method LoadResourcesBeforeInstall, addr 0x2718c40, size 0xdc, virtual true, abstract: false, final false
  inline void LoadResourcesBeforeInstall(::BGLib::AppFlow::Initialization::AsyncInstaller_IInstallerRegistry* registry, ::Zenject::DiContainer* container);

  /// @brief Method LoadResourcesBeforeInstallAsync, addr 0x2718d1c, size 0xd0, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* LoadResourcesBeforeInstallAsync(::BGLib::AppFlow::Initialization::AsyncInstaller_IInstallerRegistry* registry, ::Zenject::DiContainer* container);

  static inline ::GlobalNamespace::MainSettingsAsyncLoader* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::AudioManagerSO> const& __cordl_internal_get__audioManager() const;

  constexpr ::UnityW<::GlobalNamespace::AudioManagerSO>& __cordl_internal_get__audioManager();

  constexpr ::BGLib::DotnetExtension::CommandLine::CommandLineParserResult const& __cordl_internal_get__commandLineParserResult() const;

  constexpr ::BGLib::DotnetExtension::CommandLine::CommandLineParserResult& __cordl_internal_get__commandLineParserResult();

  constexpr ::GlobalNamespace::ICoroutineStarter* const& __cordl_internal_get__coroutineStarter() const;

  constexpr ::GlobalNamespace::ICoroutineStarter*& __cordl_internal_get__coroutineStarter();

  constexpr ::UnityW<::GlobalNamespace::HapticFeedbackManager> const& __cordl_internal_get__hapticFeedbackControllerPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::HapticFeedbackManager>& __cordl_internal_get__hapticFeedbackControllerPrefab();

  constexpr ::UnityW<::GlobalNamespace::NetworkConfigSO> const& __cordl_internal_get__networkConfig() const;

  constexpr ::UnityW<::GlobalNamespace::NetworkConfigSO>& __cordl_internal_get__networkConfig();

  constexpr ::GlobalNamespace::SettingsManager* const& __cordl_internal_get__settingManager() const;

  constexpr ::GlobalNamespace::SettingsManager*& __cordl_internal_get__settingManager();

  constexpr ::GlobalNamespace::AppInitSetupData* const& __cordl_internal_get__setupData() const;

  constexpr ::GlobalNamespace::AppInitSetupData*& __cordl_internal_get__setupData();

  constexpr void __cordl_internal_set__audioManager(::UnityW<::GlobalNamespace::AudioManagerSO> value);

  constexpr void __cordl_internal_set__commandLineParserResult(::BGLib::DotnetExtension::CommandLine::CommandLineParserResult value);

  constexpr void __cordl_internal_set__coroutineStarter(::GlobalNamespace::ICoroutineStarter* value);

  constexpr void __cordl_internal_set__hapticFeedbackControllerPrefab(::UnityW<::GlobalNamespace::HapticFeedbackManager> value);

  constexpr void __cordl_internal_set__networkConfig(::UnityW<::GlobalNamespace::NetworkConfigSO> value);

  constexpr void __cordl_internal_set__settingManager(::GlobalNamespace::SettingsManager* value);

  constexpr void __cordl_internal_set__setupData(::GlobalNamespace::AppInitSetupData* value);

  /// @brief Method .ctor, addr 0x2719504, size 0x24, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_isRunningFromTests, addr 0x2718c20, size 0x20, virtual false, abstract: false, final false
  inline bool get_isRunningFromTests();

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17799 };

  /// @brief Field _networkConfig, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::NetworkConfigSO> ____networkConfig;

  /// @brief Field _hapticFeedbackControllerPrefab, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::HapticFeedbackManager> ____hapticFeedbackControllerPrefab;

  /// @brief Field _audioManager, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AudioManagerSO> ____audioManager;

  /// @brief Field _setupData, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::AppInitSetupData* ____setupData;

  /// @brief Field _commandLineParserResult, offset: 0x48, size: 0x18, def value: None
  ::BGLib::DotnetExtension::CommandLine::CommandLineParserResult ____commandLineParserResult;

  /// @brief Field _coroutineStarter, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::ICoroutineStarter* ____coroutineStarter;

  /// @brief Field _settingManager, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::SettingsManager* ____settingManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MainSettingsAsyncLoader, ____networkConfig) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsAsyncLoader, ____hapticFeedbackControllerPrefab) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsAsyncLoader, ____audioManager) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsAsyncLoader, ____setupData) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsAsyncLoader, ____commandLineParserResult) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsAsyncLoader, ____coroutineStarter) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsAsyncLoader, ____settingManager) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MainSettingsAsyncLoader, 0x70>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MainSettingsAsyncLoader);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MainSettingsAsyncLoader*, "", "MainSettingsAsyncLoader");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MainSettingsAsyncLoader__LoadResourcesBeforeInstallAsync_d__10, "", "MainSettingsAsyncLoader/<LoadResourcesBeforeInstallAsync>d__10");
