#pragma once
// IWYU pragma private; include "GlobalNamespace/MainSettingsAsyncLoader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/AppFlow/Initialization/zzzz__AsyncInstaller_def.hpp"
#include "BGLib/DotnetExtension/CommandLine/zzzz__CommandLineParserResult_def.hpp"
#include "BeatSaber/Settings/zzzz__Settings_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MainSettingsAsyncLoader)
namespace BGLib::AppFlow::Initialization {
class __AsyncInstaller__IInstallerRegistry;
}
namespace BeatSaber::Settings {
struct Settings;
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
class NetworkConfigSO;
}
namespace GlobalNamespace {
class SettingsManager;
}
namespace GlobalNamespace {
struct __MainSettingsAsyncLoader___LoadResourcesBeforeInstallAsync_d__9;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
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
struct __MainSettingsAsyncLoader___LoadResourcesBeforeInstallAsync_d__9;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MainSettingsAsyncLoader);
MARK_VAL_T(::GlobalNamespace::__MainSettingsAsyncLoader___LoadResourcesBeforeInstallAsync_d__9);
// Type: ::<LoadResourcesBeforeInstallAsync>d__9
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::MainSettingsAsyncLoader::<LoadResourcesBeforeInstallAsync>d__9
struct CORDL_TYPE __MainSettingsAsyncLoader___LoadResourcesBeforeInstallAsync_d__9 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x26d7684, size 0x2e0, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x26d7964, size 0x68, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MainSettingsAsyncLoader___LoadResourcesBeforeInstallAsync_d__9();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "container", ty: "::Zenject::DiContainer*", modifiers: "", def_value: None },
  // CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::MainSettingsAsyncLoader>", modifiers: "", def_value: None }, CppParam { name: "__7__wrap1", ty:
  // "::GlobalNamespace::SettingsManager*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::Settings::Settings>",
  // modifiers: "", def_value: None }]
  constexpr __MainSettingsAsyncLoader___LoadResourcesBeforeInstallAsync_d__9(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                             ::Zenject::DiContainer* container, ::UnityW<::GlobalNamespace::MainSettingsAsyncLoader> __4__this,
                                                                             ::GlobalNamespace::SettingsManager* __7__wrap1,
                                                                             ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::Settings::Settings> __u__1) noexcept;

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17864 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MainSettingsAsyncLoader___LoadResourcesBeforeInstallAsync_d__9, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsAsyncLoader___LoadResourcesBeforeInstallAsync_d__9, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsAsyncLoader___LoadResourcesBeforeInstallAsync_d__9, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsAsyncLoader___LoadResourcesBeforeInstallAsync_d__9, container) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsAsyncLoader___LoadResourcesBeforeInstallAsync_d__9, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsAsyncLoader___LoadResourcesBeforeInstallAsync_d__9, __7__wrap1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsAsyncLoader___LoadResourcesBeforeInstallAsync_d__9, __u__1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MainSettingsAsyncLoader
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MainSettingsAsyncLoader*
class CORDL_TYPE MainSettingsAsyncLoader : public ::BGLib::AppFlow::Initialization::AsyncInstaller {
public:
  // Declarations
  using _LoadResourcesBeforeInstallAsync_d__9 = ::GlobalNamespace::__MainSettingsAsyncLoader___LoadResourcesBeforeInstallAsync_d__9;

  /// @brief Field _audioManager, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__audioManager, put = __cordl_internal_set__audioManager)) ::UnityW<::GlobalNamespace::AudioManagerSO> _audioManager;

  /// @brief Field _commandLineParserResult, offset 0x48, size 0x18
  __declspec(property(get = __cordl_internal_get__commandLineParserResult,
                      put = __cordl_internal_set__commandLineParserResult)) ::BGLib::DotnetExtension::CommandLine::CommandLineParserResult _commandLineParserResult;

  /// @brief Field _hapticFeedbackControllerPrefab, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__hapticFeedbackControllerPrefab, put = __cordl_internal_set__hapticFeedbackControllerPrefab)) ::UnityW<::GlobalNamespace::HapticFeedbackManager>
      _hapticFeedbackControllerPrefab;

  /// @brief Field _networkConfig, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__networkConfig, put = __cordl_internal_set__networkConfig)) ::UnityW<::GlobalNamespace::NetworkConfigSO> _networkConfig;

  /// @brief Field _settingManager, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__settingManager, put = __cordl_internal_set__settingManager)) ::GlobalNamespace::SettingsManager* _settingManager;

  /// @brief Field _setupData, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__setupData, put = __cordl_internal_set__setupData)) ::GlobalNamespace::AppInitSetupData* _setupData;

  __declspec(property(get = get_isRunningFromTests)) bool isRunningFromTests;

  /// @brief Method InstallBindings, addr 0x26d6edc, size 0x108, virtual true, abstract: false, final false
  inline void InstallBindings();

  /// @brief Method InstallBindingsThatRelyOnSettings, addr 0x26d6fe4, size 0x67c, virtual false, abstract: false, final false
  inline void InstallBindingsThatRelyOnSettings();

  /// @brief Method LoadResourcesBeforeInstall, addr 0x26d6d30, size 0xdc, virtual true, abstract: false, final false
  inline void LoadResourcesBeforeInstall(::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry* registry, ::Zenject::DiContainer* container);

  /// @brief Method LoadResourcesBeforeInstallAsync, addr 0x26d6e0c, size 0xd0, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* LoadResourcesBeforeInstallAsync(::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry* registry, ::Zenject::DiContainer* container);

  static inline ::GlobalNamespace::MainSettingsAsyncLoader* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::AudioManagerSO> const& __cordl_internal_get__audioManager() const;

  constexpr ::UnityW<::GlobalNamespace::AudioManagerSO>& __cordl_internal_get__audioManager();

  constexpr ::BGLib::DotnetExtension::CommandLine::CommandLineParserResult const& __cordl_internal_get__commandLineParserResult() const;

  constexpr ::BGLib::DotnetExtension::CommandLine::CommandLineParserResult& __cordl_internal_get__commandLineParserResult();

  constexpr ::UnityW<::GlobalNamespace::HapticFeedbackManager> const& __cordl_internal_get__hapticFeedbackControllerPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::HapticFeedbackManager>& __cordl_internal_get__hapticFeedbackControllerPrefab();

  constexpr ::UnityW<::GlobalNamespace::NetworkConfigSO> const& __cordl_internal_get__networkConfig() const;

  constexpr ::UnityW<::GlobalNamespace::NetworkConfigSO>& __cordl_internal_get__networkConfig();

  constexpr ::GlobalNamespace::SettingsManager*& __cordl_internal_get__settingManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SettingsManager*> const& __cordl_internal_get__settingManager() const;

  constexpr ::GlobalNamespace::AppInitSetupData*& __cordl_internal_get__setupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AppInitSetupData*> const& __cordl_internal_get__setupData() const;

  constexpr void __cordl_internal_set__audioManager(::UnityW<::GlobalNamespace::AudioManagerSO> value);

  constexpr void __cordl_internal_set__commandLineParserResult(::BGLib::DotnetExtension::CommandLine::CommandLineParserResult value);

  constexpr void __cordl_internal_set__hapticFeedbackControllerPrefab(::UnityW<::GlobalNamespace::HapticFeedbackManager> value);

  constexpr void __cordl_internal_set__networkConfig(::UnityW<::GlobalNamespace::NetworkConfigSO> value);

  constexpr void __cordl_internal_set__settingManager(::GlobalNamespace::SettingsManager* value);

  constexpr void __cordl_internal_set__setupData(::GlobalNamespace::AppInitSetupData* value);

  /// @brief Method .ctor, addr 0x26d7660, size 0x24, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_isRunningFromTests, addr 0x26d6d10, size 0x20, virtual false, abstract: false, final false
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

  /// @brief Field _settingManager, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::SettingsManager* ____settingManager;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17865 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MainSettingsAsyncLoader, 0x68>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsAsyncLoader, ____networkConfig) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsAsyncLoader, ____hapticFeedbackControllerPrefab) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsAsyncLoader, ____audioManager) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsAsyncLoader, ____setupData) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsAsyncLoader, ____commandLineParserResult) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsAsyncLoader, ____settingManager) == 0x60, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MainSettingsAsyncLoader);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MainSettingsAsyncLoader*, "", "MainSettingsAsyncLoader");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MainSettingsAsyncLoader___LoadResourcesBeforeInstallAsync_d__9, "", "MainSettingsAsyncLoader/<LoadResourcesBeforeInstallAsync>d__9");
