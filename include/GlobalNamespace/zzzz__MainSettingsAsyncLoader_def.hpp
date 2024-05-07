#pragma once
// IWYU pragma private; include "GlobalNamespace/MainSettingsAsyncLoader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/AppFlow/Initialization/zzzz__AsyncInstaller_def.hpp"
#include "BGLib/SaveDataCore/zzzz__SaveDataResult_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MainSettingsAsyncLoader)
namespace BGLib::AppFlow::Initialization {
class __AsyncInstaller__IInstallerRegistry;
}
namespace BGLib::SaveDataCore {
class SaveDataFlushingService;
}
namespace BGLib::SaveDataCore {
struct SaveDataResult;
}
namespace BeatSaber::GameSettings {
class GraphicSettingsHandler;
}
namespace BeatSaber::GameSettings {
class GraphicSettings;
}
namespace BeatSaber::GameSettings {
class LegacyModelConverter;
}
namespace BeatSaber::GameSettings {
class MainSettingsHandler;
}
namespace BeatSaber::GameSettings {
class MainSettings;
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
class IFileStorage;
}
namespace GlobalNamespace {
class NetworkConfigSO;
}
namespace GlobalNamespace {
struct __MainSettingsAsyncLoader___LoadResourcesBeforeInstallAsync_d__10;
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
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace GlobalNamespace {
class MainSettingsAsyncLoader;
}
namespace GlobalNamespace {
struct __MainSettingsAsyncLoader___LoadResourcesBeforeInstallAsync_d__10;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MainSettingsAsyncLoader);
MARK_VAL_T(::GlobalNamespace::__MainSettingsAsyncLoader___LoadResourcesBeforeInstallAsync_d__10);
// Type: ::<LoadResourcesBeforeInstallAsync>d__10
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::MainSettingsAsyncLoader::<LoadResourcesBeforeInstallAsync>d__10
struct CORDL_TYPE __MainSettingsAsyncLoader___LoadResourcesBeforeInstallAsync_d__10 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x260049c, size 0x7fc, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2600c98, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MainSettingsAsyncLoader___LoadResourcesBeforeInstallAsync_d__10();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "container", ty: "::Zenject::DiContainer*", modifiers: "", def_value: None },
  // CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::MainSettingsAsyncLoader>", modifiers: "", def_value: None }, CppParam { name: "_fileStorage_5__2", ty:
  // "::GlobalNamespace::IFileStorage*", modifiers: "", def_value: None }, CppParam { name: "_modelConverter_5__3", ty: "::BeatSaber::GameSettings::LegacyModelConverter*", modifiers: "", def_value:
  // None }, CppParam { name: "_requiresUpdate_5__4", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>",
  // modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::BeatSaber::GameSettings::MainSettings*,::BeatSaber::GameSettings::GraphicSettings*>>", modifiers: "", def_value: None
  // }, CppParam { name: "__u__3", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::BGLib::SaveDataCore::SaveDataResult>", modifiers: "", def_value: None }]
  constexpr __MainSettingsAsyncLoader___LoadResourcesBeforeInstallAsync_d__10(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Zenject::DiContainer* container, ::UnityW<::GlobalNamespace::MainSettingsAsyncLoader> __4__this,
      ::GlobalNamespace::IFileStorage* _fileStorage_5__2, ::BeatSaber::GameSettings::LegacyModelConverter* _modelConverter_5__3, bool _requiresUpdate_5__4,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::BeatSaber::GameSettings::MainSettings*, ::BeatSaber::GameSettings::GraphicSettings*>> __u__2,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGLib::SaveDataCore::SaveDataResult> __u__3) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field container, offset: 0x20, size: 0x8, def value: None
  ::Zenject::DiContainer* container;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MainSettingsAsyncLoader> __4__this;

  /// @brief Field <fileStorage>5__2, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::IFileStorage* _fileStorage_5__2;

  /// @brief Field <modelConverter>5__3, offset: 0x38, size: 0x8, def value: None
  ::BeatSaber::GameSettings::LegacyModelConverter* _modelConverter_5__3;

  /// @brief Field <requiresUpdate>5__4, offset: 0x40, size: 0x1, def value: None
  bool _requiresUpdate_5__4;

  /// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1;

  /// @brief Field <>u__2, offset: 0x50, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::BeatSaber::GameSettings::MainSettings*, ::BeatSaber::GameSettings::GraphicSettings*>> __u__2;

  /// @brief Field <>u__3, offset: 0x58, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGLib::SaveDataCore::SaveDataResult> __u__3;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MainSettingsAsyncLoader___LoadResourcesBeforeInstallAsync_d__10, 0x60>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsAsyncLoader___LoadResourcesBeforeInstallAsync_d__10, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsAsyncLoader___LoadResourcesBeforeInstallAsync_d__10, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsAsyncLoader___LoadResourcesBeforeInstallAsync_d__10, container) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsAsyncLoader___LoadResourcesBeforeInstallAsync_d__10, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsAsyncLoader___LoadResourcesBeforeInstallAsync_d__10, _fileStorage_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsAsyncLoader___LoadResourcesBeforeInstallAsync_d__10, _modelConverter_5__3) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsAsyncLoader___LoadResourcesBeforeInstallAsync_d__10, _requiresUpdate_5__4) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsAsyncLoader___LoadResourcesBeforeInstallAsync_d__10, __u__1) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsAsyncLoader___LoadResourcesBeforeInstallAsync_d__10, __u__2) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsAsyncLoader___LoadResourcesBeforeInstallAsync_d__10, __u__3) == 0x58, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MainSettingsAsyncLoader
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MainSettingsAsyncLoader*
class CORDL_TYPE MainSettingsAsyncLoader : public ::BGLib::AppFlow::Initialization::AsyncInstaller {
public:
  // Declarations
  using _LoadResourcesBeforeInstallAsync_d__10 = ::GlobalNamespace::__MainSettingsAsyncLoader___LoadResourcesBeforeInstallAsync_d__10;

  /// @brief Field _audioManager, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__audioManager, put = __cordl_internal_set__audioManager))::UnityW<::GlobalNamespace::AudioManagerSO> _audioManager;

  /// @brief Field _flushingService, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__flushingService, put = __cordl_internal_set__flushingService))::BGLib::SaveDataCore::SaveDataFlushingService* _flushingService;

  /// @brief Field _graphicSettingsHandler, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__graphicSettingsHandler,
                      put = __cordl_internal_set__graphicSettingsHandler))::BeatSaber::GameSettings::GraphicSettingsHandler* _graphicSettingsHandler;

  /// @brief Field _hapticFeedbackControllerPrefab, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__hapticFeedbackControllerPrefab,
                      put = __cordl_internal_set__hapticFeedbackControllerPrefab))::UnityW<::GlobalNamespace::HapticFeedbackManager> _hapticFeedbackControllerPrefab;

  /// @brief Field _mainSettingsHandler, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__mainSettingsHandler, put = __cordl_internal_set__mainSettingsHandler))::BeatSaber::GameSettings::MainSettingsHandler* _mainSettingsHandler;

  /// @brief Field _networkConfig, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__networkConfig, put = __cordl_internal_set__networkConfig))::UnityW<::GlobalNamespace::NetworkConfigSO> _networkConfig;

  /// @brief Field _setupData, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__setupData, put = __cordl_internal_set__setupData))::GlobalNamespace::AppInitSetupData* _setupData;

  __declspec(property(get = get_isRunningFromTests)) bool isRunningFromTests;

  /// @brief Method InstallBindings, addr 0x25ffb14, size 0x160, virtual true, abstract: false, final false
  inline void InstallBindings();

  /// @brief Method InstallBindingsThatRelyOnSettings, addr 0x25ffc74, size 0x6f0, virtual false, abstract: false, final false
  inline void InstallBindingsThatRelyOnSettings();

  /// @brief Method LoadResourcesBeforeInstall, addr 0x25ff91c, size 0x11c, virtual true, abstract: false, final false
  inline void LoadResourcesBeforeInstall(::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry* registry, ::Zenject::DiContainer* container);

  /// @brief Method LoadResourcesBeforeInstallAsync, addr 0x25ffa38, size 0xdc, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* LoadResourcesBeforeInstallAsync(::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry* registry, ::Zenject::DiContainer* container);

  static inline ::GlobalNamespace::MainSettingsAsyncLoader* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::AudioManagerSO> const& __cordl_internal_get__audioManager() const;

  constexpr ::UnityW<::GlobalNamespace::AudioManagerSO>& __cordl_internal_get__audioManager();

  constexpr ::BGLib::SaveDataCore::SaveDataFlushingService*& __cordl_internal_get__flushingService();

  constexpr ::cordl_internals::to_const_pointer<::BGLib::SaveDataCore::SaveDataFlushingService*> const& __cordl_internal_get__flushingService() const;

  constexpr ::BeatSaber::GameSettings::GraphicSettingsHandler*& __cordl_internal_get__graphicSettingsHandler();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::GameSettings::GraphicSettingsHandler*> const& __cordl_internal_get__graphicSettingsHandler() const;

  constexpr ::UnityW<::GlobalNamespace::HapticFeedbackManager> const& __cordl_internal_get__hapticFeedbackControllerPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::HapticFeedbackManager>& __cordl_internal_get__hapticFeedbackControllerPrefab();

  constexpr ::BeatSaber::GameSettings::MainSettingsHandler*& __cordl_internal_get__mainSettingsHandler();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::GameSettings::MainSettingsHandler*> const& __cordl_internal_get__mainSettingsHandler() const;

  constexpr ::UnityW<::GlobalNamespace::NetworkConfigSO> const& __cordl_internal_get__networkConfig() const;

  constexpr ::UnityW<::GlobalNamespace::NetworkConfigSO>& __cordl_internal_get__networkConfig();

  constexpr ::GlobalNamespace::AppInitSetupData*& __cordl_internal_get__setupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AppInitSetupData*> const& __cordl_internal_get__setupData() const;

  constexpr void __cordl_internal_set__audioManager(::UnityW<::GlobalNamespace::AudioManagerSO> value);

  constexpr void __cordl_internal_set__flushingService(::BGLib::SaveDataCore::SaveDataFlushingService* value);

  constexpr void __cordl_internal_set__graphicSettingsHandler(::BeatSaber::GameSettings::GraphicSettingsHandler* value);

  constexpr void __cordl_internal_set__hapticFeedbackControllerPrefab(::UnityW<::GlobalNamespace::HapticFeedbackManager> value);

  constexpr void __cordl_internal_set__mainSettingsHandler(::BeatSaber::GameSettings::MainSettingsHandler* value);

  constexpr void __cordl_internal_set__networkConfig(::UnityW<::GlobalNamespace::NetworkConfigSO> value);

  constexpr void __cordl_internal_set__setupData(::GlobalNamespace::AppInitSetupData* value);

  /// @brief Method .ctor, addr 0x2600434, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_isRunningFromTests, addr 0x25ff8fc, size 0x20, virtual false, abstract: false, final false
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

  /// @brief Field _networkConfig, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::NetworkConfigSO> ____networkConfig;

  /// @brief Field _hapticFeedbackControllerPrefab, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::HapticFeedbackManager> ____hapticFeedbackControllerPrefab;

  /// @brief Field _audioManager, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AudioManagerSO> ____audioManager;

  /// @brief Field _setupData, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::AppInitSetupData* ____setupData;

  /// @brief Field _mainSettingsHandler, offset: 0x40, size: 0x8, def value: None
  ::BeatSaber::GameSettings::MainSettingsHandler* ____mainSettingsHandler;

  /// @brief Field _graphicSettingsHandler, offset: 0x48, size: 0x8, def value: None
  ::BeatSaber::GameSettings::GraphicSettingsHandler* ____graphicSettingsHandler;

  /// @brief Field _flushingService, offset: 0x50, size: 0x8, def value: None
  ::BGLib::SaveDataCore::SaveDataFlushingService* ____flushingService;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MainSettingsAsyncLoader, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsAsyncLoader, ____networkConfig) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsAsyncLoader, ____hapticFeedbackControllerPrefab) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsAsyncLoader, ____audioManager) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsAsyncLoader, ____setupData) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsAsyncLoader, ____mainSettingsHandler) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsAsyncLoader, ____graphicSettingsHandler) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsAsyncLoader, ____flushingService) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MainSettingsAsyncLoader);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MainSettingsAsyncLoader*, "", "MainSettingsAsyncLoader");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MainSettingsAsyncLoader___LoadResourcesBeforeInstallAsync_d__10, "", "MainSettingsAsyncLoader/<LoadResourcesBeforeInstallAsync>d__10");
