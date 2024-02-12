#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AppInit_def.hpp"
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
class SonyBackgroundExecutionHelper;
}
namespace GlobalNamespace {
class SonyOnGoingToBackgroundSaveHandler;
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
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PS5AppInit);
// Type: ::PS5AppInit
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(15439))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3986))
// CS Name: ::PS5AppInit*
class CORDL_TYPE PS5AppInit : public ::GlobalNamespace::AppInit {
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

  /// @brief Field _ps5SharedPackageSKUs, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__ps5SharedPackageSKUs, put = __cordl_internal_set__ps5SharedPackageSKUs))::UnityW<::GlobalNamespace::PS5SharedPackageSKUsSO> _ps5SharedPackageSKUs;

  /// @brief Field _sonyOnGoingToBackgroundSaveHandler, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__sonyOnGoingToBackgroundSaveHandler,
                      put = __cordl_internal_set__sonyOnGoingToBackgroundSaveHandler))::UnityW<::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler> _sonyOnGoingToBackgroundSaveHandler;

  /// @brief Field _ps5AdvancedHapticPlayerPrefab, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__ps5AdvancedHapticPlayerPrefab,
                      put = __cordl_internal_set__ps5AdvancedHapticPlayerPrefab))::UnityW<::UnityEngine::GameObject> _ps5AdvancedHapticPlayerPrefab;

  /// @brief Field _backgroundExecutionHelper, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__backgroundExecutionHelper,
                      put = __cordl_internal_set__backgroundExecutionHelper))::GlobalNamespace::SonyBackgroundExecutionHelper* _backgroundExecutionHelper;

  constexpr ::UnityW<::GlobalNamespace::MainSystemInit>& __cordl_internal_get__mainSystemInit();

  constexpr ::UnityW<::GlobalNamespace::MainSystemInit> const& __cordl_internal_get__mainSystemInit() const;

  constexpr void __cordl_internal_set__mainSystemInit(::UnityW<::GlobalNamespace::MainSystemInit> value);

  constexpr ::UnityW<::GlobalNamespace::DefaultScenesTransitionsFromInit>& __cordl_internal_get__defaultScenesTransitionsFromInit();

  constexpr ::UnityW<::GlobalNamespace::DefaultScenesTransitionsFromInit> const& __cordl_internal_get__defaultScenesTransitionsFromInit() const;

  constexpr void __cordl_internal_set__defaultScenesTransitionsFromInit(::UnityW<::GlobalNamespace::DefaultScenesTransitionsFromInit> value);

  constexpr ::UnityW<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO>& __cordl_internal_get__appInitScenesTransitionSetupDataContainer();

  constexpr ::UnityW<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO> const& __cordl_internal_get__appInitScenesTransitionSetupDataContainer() const;

  constexpr void __cordl_internal_set__appInitScenesTransitionSetupDataContainer(::UnityW<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO> value);

  constexpr ::UnityW<::GlobalNamespace::PS5SharedPackageSKUsSO>& __cordl_internal_get__ps5SharedPackageSKUs();

  constexpr ::UnityW<::GlobalNamespace::PS5SharedPackageSKUsSO> const& __cordl_internal_get__ps5SharedPackageSKUs() const;

  constexpr void __cordl_internal_set__ps5SharedPackageSKUs(::UnityW<::GlobalNamespace::PS5SharedPackageSKUsSO> value);

  constexpr ::UnityW<::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler>& __cordl_internal_get__sonyOnGoingToBackgroundSaveHandler();

  constexpr ::UnityW<::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler> const& __cordl_internal_get__sonyOnGoingToBackgroundSaveHandler() const;

  constexpr void __cordl_internal_set__sonyOnGoingToBackgroundSaveHandler(::UnityW<::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler> value);

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__ps5AdvancedHapticPlayerPrefab();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__ps5AdvancedHapticPlayerPrefab() const;

  constexpr void __cordl_internal_set__ps5AdvancedHapticPlayerPrefab(::UnityW<::UnityEngine::GameObject> value);

  constexpr ::GlobalNamespace::SonyBackgroundExecutionHelper*& __cordl_internal_get__backgroundExecutionHelper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SonyBackgroundExecutionHelper*> const& __cordl_internal_get__backgroundExecutionHelper() const;

  constexpr void __cordl_internal_set__backgroundExecutionHelper(::GlobalNamespace::SonyBackgroundExecutionHelper* value);

  /// @brief Method PreloadAsync, addr 0x22b3cd4, size 0x50, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* PreloadAsync();

  /// @brief Method AppStartAndMultiSceneEditorSetup, addr 0x22b3d24, size 0x68, virtual true, abstract: false, final false
  inline void AppStartAndMultiSceneEditorSetup();

  /// @brief Method RepeatableSetupAsync, addr 0x22b3d8c, size 0x9c, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* RepeatableSetupAsync();

  /// @brief Method TransitionToNextScene, addr 0x22b3e28, size 0x4, virtual true, abstract: false, final false
  inline void TransitionToNextScene();

  /// @brief Method TransitionToNextSceneInternal, addr 0x22b3e2c, size 0x54, virtual false, abstract: false, final false
  inline void TransitionToNextSceneInternal();

  /// @brief Method InstallBindings, addr 0x22b3e80, size 0x19c, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::PS5AppInit* New_ctor();

  /// @brief Method .ctor, addr 0x22b401c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PS5AppInit", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PS5AppInit(PS5AppInit&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PS5AppInit", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PS5AppInit(PS5AppInit const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PS5AppInit();

public:
  /// @brief Field _mainSystemInit, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MainSystemInit> ____mainSystemInit;

  /// @brief Field _defaultScenesTransitionsFromInit, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::DefaultScenesTransitionsFromInit> ____defaultScenesTransitionsFromInit;

  /// @brief Field _appInitScenesTransitionSetupDataContainer, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO> ____appInitScenesTransitionSetupDataContainer;

  /// @brief Field _ps5SharedPackageSKUs, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PS5SharedPackageSKUsSO> ____ps5SharedPackageSKUs;

  /// @brief Field _sonyOnGoingToBackgroundSaveHandler, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler> ____sonyOnGoingToBackgroundSaveHandler;

  /// @brief Field _ps5AdvancedHapticPlayerPrefab, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____ps5AdvancedHapticPlayerPrefab;

  /// @brief Field _backgroundExecutionHelper, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::SonyBackgroundExecutionHelper* ____backgroundExecutionHelper;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PS5AppInit, 0x80>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PS5AppInit, ____mainSystemInit) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PS5AppInit, ____defaultScenesTransitionsFromInit) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PS5AppInit, ____appInitScenesTransitionSetupDataContainer) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PS5AppInit, ____ps5SharedPackageSKUs) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PS5AppInit, ____sonyOnGoingToBackgroundSaveHandler) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PS5AppInit, ____ps5AdvancedHapticPlayerPrefab) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PS5AppInit, ____backgroundExecutionHelper) == 0x78, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PS5AppInit);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PS5AppInit*, "", "PS5AppInit");
