#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/Init/zzzz__BSAppInit_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PS4AppInit)
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
class PS4ActivePublisherSKUSettingsSO;
}
namespace GlobalNamespace {
class SonyOnGoingToBackgroundSaveHandler;
}
namespace GlobalNamespace {
struct __PS4AppInit___PreloadAsync_d__6;
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
// Forward declare root types
namespace GlobalNamespace {
class PS4AppInit;
}
namespace GlobalNamespace {
struct __PS4AppInit___PreloadAsync_d__6;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PS4AppInit);
MARK_VAL_T(::GlobalNamespace::__PS4AppInit___PreloadAsync_d__6);
// Type: ::<PreloadAsync>d__6
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::PS4AppInit::<PreloadAsync>d__6
struct CORDL_TYPE __PS4AppInit___PreloadAsync_d__6 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x23e23cc, size 0x1b8, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x23e2584, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PS4AppInit___PreloadAsync_d__6();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::PS4AppInit>", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __PS4AppInit___PreloadAsync_d__6(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::PS4AppInit> __4__this,
                                             ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PS4AppInit> __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PS4AppInit___PreloadAsync_d__6, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PS4AppInit___PreloadAsync_d__6, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PS4AppInit___PreloadAsync_d__6, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PS4AppInit___PreloadAsync_d__6, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PS4AppInit___PreloadAsync_d__6, __u__1) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PS4AppInit
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 136, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PS4AppInit*
class CORDL_TYPE PS4AppInit : public ::BeatSaber::Init::BSAppInit {
public:
  // Declarations
  using _PreloadAsync_d__6 = ::GlobalNamespace::__PS4AppInit___PreloadAsync_d__6;

  /// @brief Field _activePublisherSKUSettingsSO, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__activePublisherSKUSettingsSO,
                      put = __cordl_internal_set__activePublisherSKUSettingsSO))::UnityW<::GlobalNamespace::PS4ActivePublisherSKUSettingsSO> _activePublisherSKUSettingsSO;

  /// @brief Field _appInitScenesTransitionSetupDataContainer, offset 0x70, size 0x8
  __declspec(property(
      get = __cordl_internal_get__appInitScenesTransitionSetupDataContainer,
      put = __cordl_internal_set__appInitScenesTransitionSetupDataContainer))::UnityW<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO> _appInitScenesTransitionSetupDataContainer;

  /// @brief Field _defaultScenesTransitionsFromInit, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__defaultScenesTransitionsFromInit,
                      put = __cordl_internal_set__defaultScenesTransitionsFromInit))::UnityW<::GlobalNamespace::DefaultScenesTransitionsFromInit> _defaultScenesTransitionsFromInit;

  /// @brief Field _mainSystemInit, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__mainSystemInit, put = __cordl_internal_set__mainSystemInit))::UnityW<::GlobalNamespace::MainSystemInit> _mainSystemInit;

  /// @brief Field _sonyOnGoingToBackgroundSaveHandler, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__sonyOnGoingToBackgroundSaveHandler,
                      put = __cordl_internal_set__sonyOnGoingToBackgroundSaveHandler))::UnityW<::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler> _sonyOnGoingToBackgroundSaveHandler;

  /// @brief Method AppStartAndMultiSceneEditorSetup, addr 0x23e2098, size 0x68, virtual true, abstract: false, final false
  inline void AppStartAndMultiSceneEditorSetup();

  /// @brief Method InitializeModules, addr 0x23e1f68, size 0x68, virtual false, abstract: false, final false
  static inline int32_t InitializeModules();

  /// @brief Method InstallBindings, addr 0x23e21d0, size 0x19c, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::PS4AppInit* New_ctor();

  /// @brief Method PreloadAsync, addr 0x23e1fd0, size 0xc8, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* PreloadAsync();

  /// @brief Method RepeatableSetupAsync, addr 0x23e2100, size 0x9c, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* RepeatableSetupAsync();

  /// @brief Method TransitionToNextScene, addr 0x23e219c, size 0x34, virtual true, abstract: false, final false
  inline void TransitionToNextScene();

  constexpr ::UnityW<::GlobalNamespace::PS4ActivePublisherSKUSettingsSO> const& __cordl_internal_get__activePublisherSKUSettingsSO() const;

  constexpr ::UnityW<::GlobalNamespace::PS4ActivePublisherSKUSettingsSO>& __cordl_internal_get__activePublisherSKUSettingsSO();

  constexpr ::UnityW<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO> const& __cordl_internal_get__appInitScenesTransitionSetupDataContainer() const;

  constexpr ::UnityW<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO>& __cordl_internal_get__appInitScenesTransitionSetupDataContainer();

  constexpr ::UnityW<::GlobalNamespace::DefaultScenesTransitionsFromInit> const& __cordl_internal_get__defaultScenesTransitionsFromInit() const;

  constexpr ::UnityW<::GlobalNamespace::DefaultScenesTransitionsFromInit>& __cordl_internal_get__defaultScenesTransitionsFromInit();

  constexpr ::UnityW<::GlobalNamespace::MainSystemInit> const& __cordl_internal_get__mainSystemInit() const;

  constexpr ::UnityW<::GlobalNamespace::MainSystemInit>& __cordl_internal_get__mainSystemInit();

  constexpr ::UnityW<::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler> const& __cordl_internal_get__sonyOnGoingToBackgroundSaveHandler() const;

  constexpr ::UnityW<::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler>& __cordl_internal_get__sonyOnGoingToBackgroundSaveHandler();

  constexpr void __cordl_internal_set__activePublisherSKUSettingsSO(::UnityW<::GlobalNamespace::PS4ActivePublisherSKUSettingsSO> value);

  constexpr void __cordl_internal_set__appInitScenesTransitionSetupDataContainer(::UnityW<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO> value);

  constexpr void __cordl_internal_set__defaultScenesTransitionsFromInit(::UnityW<::GlobalNamespace::DefaultScenesTransitionsFromInit> value);

  constexpr void __cordl_internal_set__mainSystemInit(::UnityW<::GlobalNamespace::MainSystemInit> value);

  constexpr void __cordl_internal_set__sonyOnGoingToBackgroundSaveHandler(::UnityW<::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler> value);

  /// @brief Method <>n__0, addr 0x23e23c4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* __n__0();

  /// @brief Method .ctor, addr 0x23e236c, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PS4AppInit();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PS4AppInit", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PS4AppInit(PS4AppInit&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PS4AppInit", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PS4AppInit(PS4AppInit const&) = delete;

  /// @brief Field _mainSystemInit, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MainSystemInit> ____mainSystemInit;

  /// @brief Field _defaultScenesTransitionsFromInit, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::DefaultScenesTransitionsFromInit> ____defaultScenesTransitionsFromInit;

  /// @brief Field _appInitScenesTransitionSetupDataContainer, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO> ____appInitScenesTransitionSetupDataContainer;

  /// @brief Field _activePublisherSKUSettingsSO, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PS4ActivePublisherSKUSettingsSO> ____activePublisherSKUSettingsSO;

  /// @brief Field _sonyOnGoingToBackgroundSaveHandler, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler> ____sonyOnGoingToBackgroundSaveHandler;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PS4AppInit, 0x88>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PS4AppInit, ____mainSystemInit) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PS4AppInit, ____defaultScenesTransitionsFromInit) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PS4AppInit, ____appInitScenesTransitionSetupDataContainer) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PS4AppInit, ____activePublisherSKUSettingsSO) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PS4AppInit, ____sonyOnGoingToBackgroundSaveHandler) == 0x80, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PS4AppInit);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PS4AppInit*, "", "PS4AppInit");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PS4AppInit___PreloadAsync_d__6, "", "PS4AppInit/<PreloadAsync>d__6");
