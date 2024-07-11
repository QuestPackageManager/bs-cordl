#pragma once
// IWYU pragma private; include "GlobalNamespace/PS5AppInit.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/Init/zzzz__BSAppInit_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
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
class PS5SharedPackageSKUsSO;
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
namespace GlobalNamespace {
struct __PS5AppInit___PreloadAsync_d__8;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
namespace System::Threading::Tasks {
class Task;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class PS5AppInit;
}
namespace GlobalNamespace {
struct __PS5AppInit___PreloadAsync_d__8;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PS5AppInit);
MARK_VAL_T(::GlobalNamespace::__PS5AppInit___PreloadAsync_d__8);
// Type: ::<PreloadAsync>d__8
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::PS5AppInit::<PreloadAsync>d__8
struct CORDL_TYPE __PS5AppInit___PreloadAsync_d__8 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x26303a8, size 0x1b8, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2630560, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PS5AppInit___PreloadAsync_d__8();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::PS5AppInit>", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __PS5AppInit___PreloadAsync_d__8(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::PS5AppInit> __4__this,
                                             ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PS5AppInit> __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PS5AppInit___PreloadAsync_d__8, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PS5AppInit___PreloadAsync_d__8, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PS5AppInit___PreloadAsync_d__8, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PS5AppInit___PreloadAsync_d__8, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PS5AppInit___PreloadAsync_d__8, __u__1) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PS5AppInit
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 160, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PS5AppInit*
class CORDL_TYPE PS5AppInit : public ::BeatSaber::Init::BSAppInit {
public:
  // Declarations
  using _PreloadAsync_d__8 = ::GlobalNamespace::__PS5AppInit___PreloadAsync_d__8;

  /// @brief Field _appInitScenesTransitionSetupDataContainer, offset 0x78, size 0x8
  __declspec(property(
      get = __cordl_internal_get__appInitScenesTransitionSetupDataContainer,
      put = __cordl_internal_set__appInitScenesTransitionSetupDataContainer))::UnityW<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO> _appInitScenesTransitionSetupDataContainer;

  /// @brief Field _backgroundExecutionHelper, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__backgroundExecutionHelper,
                      put = __cordl_internal_set__backgroundExecutionHelper))::GlobalNamespace::SonyBackgroundExecutionHelper* _backgroundExecutionHelper;

  /// @brief Field _defaultScenesTransitionsFromInit, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__defaultScenesTransitionsFromInit,
                      put = __cordl_internal_set__defaultScenesTransitionsFromInit))::UnityW<::GlobalNamespace::DefaultScenesTransitionsFromInit> _defaultScenesTransitionsFromInit;

  /// @brief Field _mainSystemInit, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__mainSystemInit, put = __cordl_internal_set__mainSystemInit))::UnityW<::GlobalNamespace::MainSystemInit> _mainSystemInit;

  /// @brief Field _ps5AdvancedHapticPlayerPrefab, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__ps5AdvancedHapticPlayerPrefab,
                      put = __cordl_internal_set__ps5AdvancedHapticPlayerPrefab))::UnityW<::UnityEngine::GameObject> _ps5AdvancedHapticPlayerPrefab;

  /// @brief Field _ps5SharedPackageSKUs, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__ps5SharedPackageSKUs, put = __cordl_internal_set__ps5SharedPackageSKUs))::UnityW<::GlobalNamespace::PS5SharedPackageSKUsSO> _ps5SharedPackageSKUs;

  /// @brief Field _settingsApplicator, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__settingsApplicator, put = __cordl_internal_set__settingsApplicator))::UnityW<::GlobalNamespace::SettingsApplicatorSO> _settingsApplicator;

  /// @brief Field _sonyOnGoingToBackgroundSaveHandler, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__sonyOnGoingToBackgroundSaveHandler,
                      put = __cordl_internal_set__sonyOnGoingToBackgroundSaveHandler))::UnityW<::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler> _sonyOnGoingToBackgroundSaveHandler;

  /// @brief Method AppStartAndMultiSceneEditorSetup, addr 0x262ffd0, size 0x68, virtual true, abstract: false, final false
  inline void AppStartAndMultiSceneEditorSetup();

  /// @brief Method InstallBindings, addr 0x2630130, size 0x218, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::PS5AppInit* New_ctor();

  /// @brief Method PreloadAsync, addr 0x262ff08, size 0xc8, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* PreloadAsync();

  /// @brief Method RepeatableSetupAsync, addr 0x2630038, size 0xa0, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* RepeatableSetupAsync();

  /// @brief Method TransitionToNextScene, addr 0x26300d8, size 0x4, virtual true, abstract: false, final false
  inline void TransitionToNextScene();

  /// @brief Method TransitionToNextSceneInternal, addr 0x26300dc, size 0x54, virtual false, abstract: false, final false
  inline void TransitionToNextSceneInternal();

  constexpr ::UnityW<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO> const& __cordl_internal_get__appInitScenesTransitionSetupDataContainer() const;

  constexpr ::UnityW<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO>& __cordl_internal_get__appInitScenesTransitionSetupDataContainer();

  constexpr ::GlobalNamespace::SonyBackgroundExecutionHelper*& __cordl_internal_get__backgroundExecutionHelper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SonyBackgroundExecutionHelper*> const& __cordl_internal_get__backgroundExecutionHelper() const;

  constexpr ::UnityW<::GlobalNamespace::DefaultScenesTransitionsFromInit> const& __cordl_internal_get__defaultScenesTransitionsFromInit() const;

  constexpr ::UnityW<::GlobalNamespace::DefaultScenesTransitionsFromInit>& __cordl_internal_get__defaultScenesTransitionsFromInit();

  constexpr ::UnityW<::GlobalNamespace::MainSystemInit> const& __cordl_internal_get__mainSystemInit() const;

  constexpr ::UnityW<::GlobalNamespace::MainSystemInit>& __cordl_internal_get__mainSystemInit();

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

  constexpr void __cordl_internal_set__mainSystemInit(::UnityW<::GlobalNamespace::MainSystemInit> value);

  constexpr void __cordl_internal_set__ps5AdvancedHapticPlayerPrefab(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__ps5SharedPackageSKUs(::UnityW<::GlobalNamespace::PS5SharedPackageSKUsSO> value);

  constexpr void __cordl_internal_set__settingsApplicator(::UnityW<::GlobalNamespace::SettingsApplicatorSO> value);

  constexpr void __cordl_internal_set__sonyOnGoingToBackgroundSaveHandler(::UnityW<::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler> value);

  /// @brief Method <>n__0, addr 0x26303a0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* __n__0();

  /// @brief Method .ctor, addr 0x2630348, size 0x58, virtual false, abstract: false, final false
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

  /// @brief Field _mainSystemInit, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MainSystemInit> ____mainSystemInit;

  /// @brief Field _settingsApplicator, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SettingsApplicatorSO> ____settingsApplicator;

  /// @brief Field _defaultScenesTransitionsFromInit, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::DefaultScenesTransitionsFromInit> ____defaultScenesTransitionsFromInit;

  /// @brief Field _appInitScenesTransitionSetupDataContainer, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO> ____appInitScenesTransitionSetupDataContainer;

  /// @brief Field _ps5SharedPackageSKUs, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PS5SharedPackageSKUsSO> ____ps5SharedPackageSKUs;

  /// @brief Field _sonyOnGoingToBackgroundSaveHandler, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler> ____sonyOnGoingToBackgroundSaveHandler;

  /// @brief Field _ps5AdvancedHapticPlayerPrefab, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____ps5AdvancedHapticPlayerPrefab;

  /// @brief Field _backgroundExecutionHelper, offset: 0x98, size: 0x8, def value: None
  ::GlobalNamespace::SonyBackgroundExecutionHelper* ____backgroundExecutionHelper;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PS5AppInit, 0xa0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PS5AppInit, ____mainSystemInit) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PS5AppInit, ____settingsApplicator) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PS5AppInit, ____defaultScenesTransitionsFromInit) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PS5AppInit, ____appInitScenesTransitionSetupDataContainer) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PS5AppInit, ____ps5SharedPackageSKUs) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PS5AppInit, ____sonyOnGoingToBackgroundSaveHandler) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PS5AppInit, ____ps5AdvancedHapticPlayerPrefab) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PS5AppInit, ____backgroundExecutionHelper) == 0x98, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PS5AppInit);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PS5AppInit*, "", "PS5AppInit");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PS5AppInit___PreloadAsync_d__8, "", "PS5AppInit/<PreloadAsync>d__8");
