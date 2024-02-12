#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AppInit_def.hpp"
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
namespace System::Threading::Tasks {
class Task;
}
// Forward declare root types
namespace GlobalNamespace {
class PS4AppInit;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PS4AppInit);
// Type: ::PS4AppInit
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(15439))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3985))
// CS Name: ::PS4AppInit*
class CORDL_TYPE PS4AppInit : public ::GlobalNamespace::AppInit {
public:
  // Declarations
  /// @brief Field _mainSystemInit, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__mainSystemInit, put = __cordl_internal_set__mainSystemInit))::UnityW<::GlobalNamespace::MainSystemInit> _mainSystemInit;

  /// @brief Field _defaultScenesTransitionsFromInit, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__defaultScenesTransitionsFromInit,
                      put = __cordl_internal_set__defaultScenesTransitionsFromInit))::UnityW<::GlobalNamespace::DefaultScenesTransitionsFromInit> _defaultScenesTransitionsFromInit;

  /// @brief Field _appInitScenesTransitionSetupDataContainer, offset 0x58, size 0x8
  __declspec(property(
      get = __cordl_internal_get__appInitScenesTransitionSetupDataContainer,
      put = __cordl_internal_set__appInitScenesTransitionSetupDataContainer))::UnityW<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO> _appInitScenesTransitionSetupDataContainer;

  /// @brief Field _activePublisherSKUSettingsSO, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__activePublisherSKUSettingsSO,
                      put = __cordl_internal_set__activePublisherSKUSettingsSO))::UnityW<::GlobalNamespace::PS4ActivePublisherSKUSettingsSO> _activePublisherSKUSettingsSO;

  /// @brief Field _sonyOnGoingToBackgroundSaveHandler, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__sonyOnGoingToBackgroundSaveHandler,
                      put = __cordl_internal_set__sonyOnGoingToBackgroundSaveHandler))::UnityW<::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler> _sonyOnGoingToBackgroundSaveHandler;

  constexpr ::UnityW<::GlobalNamespace::MainSystemInit>& __cordl_internal_get__mainSystemInit();

  constexpr ::UnityW<::GlobalNamespace::MainSystemInit> const& __cordl_internal_get__mainSystemInit() const;

  constexpr void __cordl_internal_set__mainSystemInit(::UnityW<::GlobalNamespace::MainSystemInit> value);

  constexpr ::UnityW<::GlobalNamespace::DefaultScenesTransitionsFromInit>& __cordl_internal_get__defaultScenesTransitionsFromInit();

  constexpr ::UnityW<::GlobalNamespace::DefaultScenesTransitionsFromInit> const& __cordl_internal_get__defaultScenesTransitionsFromInit() const;

  constexpr void __cordl_internal_set__defaultScenesTransitionsFromInit(::UnityW<::GlobalNamespace::DefaultScenesTransitionsFromInit> value);

  constexpr ::UnityW<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO>& __cordl_internal_get__appInitScenesTransitionSetupDataContainer();

  constexpr ::UnityW<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO> const& __cordl_internal_get__appInitScenesTransitionSetupDataContainer() const;

  constexpr void __cordl_internal_set__appInitScenesTransitionSetupDataContainer(::UnityW<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO> value);

  constexpr ::UnityW<::GlobalNamespace::PS4ActivePublisherSKUSettingsSO>& __cordl_internal_get__activePublisherSKUSettingsSO();

  constexpr ::UnityW<::GlobalNamespace::PS4ActivePublisherSKUSettingsSO> const& __cordl_internal_get__activePublisherSKUSettingsSO() const;

  constexpr void __cordl_internal_set__activePublisherSKUSettingsSO(::UnityW<::GlobalNamespace::PS4ActivePublisherSKUSettingsSO> value);

  constexpr ::UnityW<::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler>& __cordl_internal_get__sonyOnGoingToBackgroundSaveHandler();

  constexpr ::UnityW<::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler> const& __cordl_internal_get__sonyOnGoingToBackgroundSaveHandler() const;

  constexpr void __cordl_internal_set__sonyOnGoingToBackgroundSaveHandler(::UnityW<::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler> value);

  /// @brief Method InitializeModules, addr 0x22b3940, size 0x68, virtual false, abstract: false, final false
  static inline int32_t InitializeModules();

  /// @brief Method PreloadAsync, addr 0x22b39a8, size 0x50, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* PreloadAsync();

  /// @brief Method AppStartAndMultiSceneEditorSetup, addr 0x22b39f8, size 0x68, virtual true, abstract: false, final false
  inline void AppStartAndMultiSceneEditorSetup();

  /// @brief Method RepeatableSetupAsync, addr 0x22b3a60, size 0x9c, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* RepeatableSetupAsync();

  /// @brief Method TransitionToNextScene, addr 0x22b3afc, size 0x34, virtual true, abstract: false, final false
  inline void TransitionToNextScene();

  /// @brief Method InstallBindings, addr 0x22b3b30, size 0x19c, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::PS4AppInit* New_ctor();

  /// @brief Method .ctor, addr 0x22b3ccc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PS4AppInit", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PS4AppInit(PS4AppInit&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PS4AppInit", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PS4AppInit(PS4AppInit const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PS4AppInit();

public:
  /// @brief Field _mainSystemInit, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MainSystemInit> ____mainSystemInit;

  /// @brief Field _defaultScenesTransitionsFromInit, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::DefaultScenesTransitionsFromInit> ____defaultScenesTransitionsFromInit;

  /// @brief Field _appInitScenesTransitionSetupDataContainer, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO> ____appInitScenesTransitionSetupDataContainer;

  /// @brief Field _activePublisherSKUSettingsSO, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PS4ActivePublisherSKUSettingsSO> ____activePublisherSKUSettingsSO;

  /// @brief Field _sonyOnGoingToBackgroundSaveHandler, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler> ____sonyOnGoingToBackgroundSaveHandler;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PS4AppInit, 0x70>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PS4AppInit, ____mainSystemInit) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PS4AppInit, ____defaultScenesTransitionsFromInit) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PS4AppInit, ____appInitScenesTransitionSetupDataContainer) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PS4AppInit, ____activePublisherSKUSettingsSO) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PS4AppInit, ____sonyOnGoingToBackgroundSaveHandler) == 0x68, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PS4AppInit);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PS4AppInit*, "", "PS4AppInit");
