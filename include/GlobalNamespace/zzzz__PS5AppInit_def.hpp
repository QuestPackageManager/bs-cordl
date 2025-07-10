#pragma once
// IWYU pragma private; include "GlobalNamespace/PS5AppInit.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/Init/zzzz__BSAppInit_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PS5AppInit)
namespace GlobalNamespace {
class AppInitScenesTransitionSetupDataContainerSO;
}
namespace GlobalNamespace {
class DefaultScenesTransitionsFromInit;
}
namespace GlobalNamespace {
class MainSystemInit;
}
namespace GlobalNamespace {
struct PS5AppInit__PreloadAsync_d__10;
}
namespace GlobalNamespace {
class PS5SharedPackageSKUsSO;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
class SettingsApplicatorSO;
}
namespace GlobalNamespace {
class SonyBackgroundExecutionHelper;
}
namespace GlobalNamespace {
class SonyOnGoingToBackgroundSaveHandler;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
class Task;
}
namespace UnityEngine {
class GameObject;
}
namespace Zenject {
template <typename T> class LazyInject_1;
}
// Forward declare root types
namespace GlobalNamespace {
class PS5AppInit;
}
namespace GlobalNamespace {
struct PS5AppInit__PreloadAsync_d__10;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PS5AppInit);
MARK_VAL_T(::GlobalNamespace::PS5AppInit__PreloadAsync_d__10);
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: PS5AppInit/<PreloadAsync>d__10
struct CORDL_TYPE PS5AppInit__PreloadAsync_d__10 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x271d360, size 0x1ec, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x271d54c, size 0x68, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr PS5AppInit__PreloadAsync_d__10();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::PS5AppInit>", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr PS5AppInit__PreloadAsync_d__10(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::PS5AppInit> __4__this,
                                           ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17809 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PS5AppInit> __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PS5AppInit__PreloadAsync_d__10, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PS5AppInit__PreloadAsync_d__10, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PS5AppInit__PreloadAsync_d__10, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PS5AppInit__PreloadAsync_d__10, __u__1) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PS5AppInit__PreloadAsync_d__10, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BeatSaber.Init.BSAppInit
namespace GlobalNamespace {
// Is value type: false
// CS Name: PS5AppInit
class CORDL_TYPE PS5AppInit : public ::BeatSaber::Init::BSAppInit {
public:
  // Declarations
  using _PreloadAsync_d__10 = ::GlobalNamespace::PS5AppInit__PreloadAsync_d__10;

  /// @brief Field _appInitScenesTransitionSetupDataContainer, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__appInitScenesTransitionSetupDataContainer,
                      put = __cordl_internal_set__appInitScenesTransitionSetupDataContainer)) ::UnityW<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO>
      _appInitScenesTransitionSetupDataContainer;

  /// @brief Field _backgroundExecutionHelper, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__backgroundExecutionHelper,
                      put = __cordl_internal_set__backgroundExecutionHelper)) ::GlobalNamespace::SonyBackgroundExecutionHelper* _backgroundExecutionHelper;

  /// @brief Field _defaultScenesTransitionsFromInit, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__defaultScenesTransitionsFromInit,
                      put = __cordl_internal_set__defaultScenesTransitionsFromInit)) ::UnityW<::GlobalNamespace::DefaultScenesTransitionsFromInit>
      _defaultScenesTransitionsFromInit;

  /// @brief Field _launchingWithFPFCEnabled, offset 0xb0, size 0x1
  __declspec(property(get = __cordl_internal_get__launchingWithFPFCEnabled, put = __cordl_internal_set__launchingWithFPFCEnabled)) bool _launchingWithFPFCEnabled;

  /// @brief Field _mainSystemInit, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__mainSystemInit, put = __cordl_internal_set__mainSystemInit)) ::UnityW<::GlobalNamespace::MainSystemInit> _mainSystemInit;

  /// @brief Field _playerDataModel, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__playerDataModel,
                      put = __cordl_internal_set__playerDataModel)) ::Zenject::LazyInject_1<::UnityW<::GlobalNamespace::PlayerDataModel>>* _playerDataModel;

  /// @brief Field _ps5AdvancedHapticPlayerPrefab, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__ps5AdvancedHapticPlayerPrefab, put = __cordl_internal_set__ps5AdvancedHapticPlayerPrefab)) ::UnityW<::UnityEngine::GameObject>
      _ps5AdvancedHapticPlayerPrefab;

  /// @brief Field _ps5SharedPackageSKUs, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__ps5SharedPackageSKUs, put = __cordl_internal_set__ps5SharedPackageSKUs)) ::UnityW<::GlobalNamespace::PS5SharedPackageSKUsSO> _ps5SharedPackageSKUs;

  /// @brief Field _settingsApplicator, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__settingsApplicator, put = __cordl_internal_set__settingsApplicator)) ::UnityW<::GlobalNamespace::SettingsApplicatorSO> _settingsApplicator;

  /// @brief Field _sonyOnGoingToBackgroundSaveHandler, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__sonyOnGoingToBackgroundSaveHandler,
                      put = __cordl_internal_set__sonyOnGoingToBackgroundSaveHandler)) ::UnityW<::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler>
      _sonyOnGoingToBackgroundSaveHandler;

  /// @brief Method AppStartAndMultiSceneEditorSetup, addr 0x271ce7c, size 0x68, virtual true, abstract: false, final false
  inline void AppStartAndMultiSceneEditorSetup();

  /// @brief Method InstallBindings, addr 0x271d0ec, size 0x214, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::PS5AppInit* New_ctor();

  /// @brief Method PreloadAsync, addr 0x271cdbc, size 0xc0, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* PreloadAsync();

  /// @brief Method RepeatableSetupAsync, addr 0x271cee4, size 0xa0, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* RepeatableSetupAsync();

  /// @brief Method TransitionToNextScene, addr 0x271cf84, size 0xfc, virtual true, abstract: false, final false
  inline void TransitionToNextScene();

  /// @brief Method TransitionToNextSceneInternal, addr 0x271d080, size 0x6c, virtual false, abstract: false, final false
  inline void TransitionToNextSceneInternal();

  constexpr ::UnityW<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO> const& __cordl_internal_get__appInitScenesTransitionSetupDataContainer() const;

  constexpr ::UnityW<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO>& __cordl_internal_get__appInitScenesTransitionSetupDataContainer();

  constexpr ::GlobalNamespace::SonyBackgroundExecutionHelper* const& __cordl_internal_get__backgroundExecutionHelper() const;

  constexpr ::GlobalNamespace::SonyBackgroundExecutionHelper*& __cordl_internal_get__backgroundExecutionHelper();

  constexpr ::UnityW<::GlobalNamespace::DefaultScenesTransitionsFromInit> const& __cordl_internal_get__defaultScenesTransitionsFromInit() const;

  constexpr ::UnityW<::GlobalNamespace::DefaultScenesTransitionsFromInit>& __cordl_internal_get__defaultScenesTransitionsFromInit();

  constexpr bool const& __cordl_internal_get__launchingWithFPFCEnabled() const;

  constexpr bool& __cordl_internal_get__launchingWithFPFCEnabled();

  constexpr ::UnityW<::GlobalNamespace::MainSystemInit> const& __cordl_internal_get__mainSystemInit() const;

  constexpr ::UnityW<::GlobalNamespace::MainSystemInit>& __cordl_internal_get__mainSystemInit();

  constexpr ::Zenject::LazyInject_1<::UnityW<::GlobalNamespace::PlayerDataModel>>* const& __cordl_internal_get__playerDataModel() const;

  constexpr ::Zenject::LazyInject_1<::UnityW<::GlobalNamespace::PlayerDataModel>>*& __cordl_internal_get__playerDataModel();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__ps5AdvancedHapticPlayerPrefab() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__ps5AdvancedHapticPlayerPrefab();

  constexpr ::UnityW<::GlobalNamespace::PS5SharedPackageSKUsSO> const& __cordl_internal_get__ps5SharedPackageSKUs() const;

  constexpr ::UnityW<::GlobalNamespace::PS5SharedPackageSKUsSO>& __cordl_internal_get__ps5SharedPackageSKUs();

  constexpr ::UnityW<::GlobalNamespace::SettingsApplicatorSO> const& __cordl_internal_get__settingsApplicator() const;

  constexpr ::UnityW<::GlobalNamespace::SettingsApplicatorSO>& __cordl_internal_get__settingsApplicator();

  constexpr ::UnityW<::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler> const& __cordl_internal_get__sonyOnGoingToBackgroundSaveHandler() const;

  constexpr ::UnityW<::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler>& __cordl_internal_get__sonyOnGoingToBackgroundSaveHandler();

  constexpr void __cordl_internal_set__appInitScenesTransitionSetupDataContainer(::UnityW<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO> value);

  constexpr void __cordl_internal_set__backgroundExecutionHelper(::GlobalNamespace::SonyBackgroundExecutionHelper* value);

  constexpr void __cordl_internal_set__defaultScenesTransitionsFromInit(::UnityW<::GlobalNamespace::DefaultScenesTransitionsFromInit> value);

  constexpr void __cordl_internal_set__launchingWithFPFCEnabled(bool value);

  constexpr void __cordl_internal_set__mainSystemInit(::UnityW<::GlobalNamespace::MainSystemInit> value);

  constexpr void __cordl_internal_set__playerDataModel(::Zenject::LazyInject_1<::UnityW<::GlobalNamespace::PlayerDataModel>>* value);

  constexpr void __cordl_internal_set__ps5AdvancedHapticPlayerPrefab(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__ps5SharedPackageSKUs(::UnityW<::GlobalNamespace::PS5SharedPackageSKUsSO> value);

  constexpr void __cordl_internal_set__settingsApplicator(::UnityW<::GlobalNamespace::SettingsApplicatorSO> value);

  constexpr void __cordl_internal_set__sonyOnGoingToBackgroundSaveHandler(::UnityW<::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler> value);

  /// @brief Method <>n__0, addr 0x271d358, size 0x8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* __n__0();

  /// @brief Method .ctor, addr 0x271d300, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PS5AppInit();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PS5AppInit", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PS5AppInit(PS5AppInit&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PS5AppInit", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PS5AppInit(PS5AppInit const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17810 };

  /// @brief Field _mainSystemInit, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MainSystemInit> ____mainSystemInit;

  /// @brief Field _settingsApplicator, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SettingsApplicatorSO> ____settingsApplicator;

  /// @brief Field _defaultScenesTransitionsFromInit, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::DefaultScenesTransitionsFromInit> ____defaultScenesTransitionsFromInit;

  /// @brief Field _appInitScenesTransitionSetupDataContainer, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO> ____appInitScenesTransitionSetupDataContainer;

  /// @brief Field _ps5SharedPackageSKUs, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PS5SharedPackageSKUsSO> ____ps5SharedPackageSKUs;

  /// @brief Field _sonyOnGoingToBackgroundSaveHandler, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler> ____sonyOnGoingToBackgroundSaveHandler;

  /// @brief Field _ps5AdvancedHapticPlayerPrefab, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____ps5AdvancedHapticPlayerPrefab;

  /// @brief Field _playerDataModel, offset: 0xa0, size: 0x8, def value: None
  ::Zenject::LazyInject_1<::UnityW<::GlobalNamespace::PlayerDataModel>>* ____playerDataModel;

  /// @brief Field _backgroundExecutionHelper, offset: 0xa8, size: 0x8, def value: None
  ::GlobalNamespace::SonyBackgroundExecutionHelper* ____backgroundExecutionHelper;

  /// @brief Field _launchingWithFPFCEnabled, offset: 0xb0, size: 0x1, def value: None
  bool ____launchingWithFPFCEnabled;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PS5AppInit, ____mainSystemInit) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PS5AppInit, ____settingsApplicator) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PS5AppInit, ____defaultScenesTransitionsFromInit) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PS5AppInit, ____appInitScenesTransitionSetupDataContainer) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PS5AppInit, ____ps5SharedPackageSKUs) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PS5AppInit, ____sonyOnGoingToBackgroundSaveHandler) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PS5AppInit, ____ps5AdvancedHapticPlayerPrefab) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PS5AppInit, ____playerDataModel) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PS5AppInit, ____backgroundExecutionHelper) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PS5AppInit, ____launchingWithFPFCEnabled) == 0xb0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PS5AppInit, 0xb8>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PS5AppInit);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PS5AppInit*, "", "PS5AppInit");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PS5AppInit__PreloadAsync_d__10, "", "PS5AppInit/<PreloadAsync>d__10");
