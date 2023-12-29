#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AppInit_def.hpp"
CORDL_MODULE_EXPORT(PS5AppInit)
namespace GlobalNamespace {
class MainSystemInit;
}
namespace GlobalNamespace {
class AppInitScenesTransitionSetupDataContainerSO;
}
namespace GlobalNamespace {
class MainSettingsModelSO;
}
namespace GlobalNamespace {
class PS5SharedPackageSKUsSO;
}
namespace GlobalNamespace {
class DefaultScenesTransitionsFromInit;
}
namespace GlobalNamespace {
class ISaveData;
}
namespace GlobalNamespace {
class SonyOnGoingToBackgroundSaveHandler;
}
// Forward declare root types
namespace GlobalNamespace {
class PS5AppInit;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PS5AppInit);
// Type: ::PS5AppInit
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4014))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4027))
// CS Name: ::PS5AppInit*
class CORDL_TYPE PS5AppInit : public ::GlobalNamespace::AppInit {
public:
  // Declarations
  /// @brief Field _mainSystemInit, offset 0x48, size 0x8
  __declspec(property(get = __get__mainSystemInit, put = __set__mainSystemInit))::GlobalNamespace::MainSystemInit* _mainSystemInit;

  /// @brief Field _defaultScenesTransitionsFromInit, offset 0x50, size 0x8
  __declspec(property(get = __get__defaultScenesTransitionsFromInit,
                      put = __set__defaultScenesTransitionsFromInit))::GlobalNamespace::DefaultScenesTransitionsFromInit* _defaultScenesTransitionsFromInit;

  /// @brief Field _appInitScenesTransitionSetupDataContainer, offset 0x58, size 0x8
  __declspec(property(get = __get__appInitScenesTransitionSetupDataContainer,
                      put = __set__appInitScenesTransitionSetupDataContainer))::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO* _appInitScenesTransitionSetupDataContainer;

  /// @brief Field _mainSettingsModel, offset 0x60, size 0x8
  __declspec(property(get = __get__mainSettingsModel, put = __set__mainSettingsModel))::GlobalNamespace::MainSettingsModelSO* _mainSettingsModel;

  /// @brief Field _ps5SharedPackageSKUs, offset 0x68, size 0x8
  __declspec(property(get = __get__ps5SharedPackageSKUs, put = __set__ps5SharedPackageSKUs))::GlobalNamespace::PS5SharedPackageSKUsSO* _ps5SharedPackageSKUs;

  /// @brief Field _sonyOnGoingToBackgroundSaveHandler, offset 0x70, size 0x8
  __declspec(property(get = __get__sonyOnGoingToBackgroundSaveHandler,
                      put = __set__sonyOnGoingToBackgroundSaveHandler))::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler* _sonyOnGoingToBackgroundSaveHandler;

  /// @brief Field _saveData, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__saveData, put = setStaticF__saveData))::GlobalNamespace::ISaveData* _saveData;

  constexpr ::GlobalNamespace::MainSystemInit*& __get__mainSystemInit();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainSystemInit*> const& __get__mainSystemInit() const;

  constexpr void __set__mainSystemInit(::GlobalNamespace::MainSystemInit* value);

  constexpr ::GlobalNamespace::DefaultScenesTransitionsFromInit*& __get__defaultScenesTransitionsFromInit();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DefaultScenesTransitionsFromInit*> const& __get__defaultScenesTransitionsFromInit() const;

  constexpr void __set__defaultScenesTransitionsFromInit(::GlobalNamespace::DefaultScenesTransitionsFromInit* value);

  constexpr ::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO*& __get__appInitScenesTransitionSetupDataContainer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO*> const& __get__appInitScenesTransitionSetupDataContainer() const;

  constexpr void __set__appInitScenesTransitionSetupDataContainer(::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO* value);

  constexpr ::GlobalNamespace::MainSettingsModelSO*& __get__mainSettingsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainSettingsModelSO*> const& __get__mainSettingsModel() const;

  constexpr void __set__mainSettingsModel(::GlobalNamespace::MainSettingsModelSO* value);

  constexpr ::GlobalNamespace::PS5SharedPackageSKUsSO*& __get__ps5SharedPackageSKUs();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PS5SharedPackageSKUsSO*> const& __get__ps5SharedPackageSKUs() const;

  constexpr void __set__ps5SharedPackageSKUs(::GlobalNamespace::PS5SharedPackageSKUsSO* value);

  constexpr ::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler*& __get__sonyOnGoingToBackgroundSaveHandler();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler*> const& __get__sonyOnGoingToBackgroundSaveHandler() const;

  constexpr void __set__sonyOnGoingToBackgroundSaveHandler(::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler* value);

  static inline void setStaticF__saveData(::GlobalNamespace::ISaveData* value);

  static inline ::GlobalNamespace::ISaveData* getStaticF__saveData();

  /// @brief Method AppStartAndMultiSceneEditorSetup addr 0x20c9394 size 0x68 virtual true final false
  inline void AppStartAndMultiSceneEditorSetup();

  /// @brief Method RepeatableSetup addr 0x20c93fc size 0xa0 virtual true final false
  inline void RepeatableSetup();

  /// @brief Method TransitionToNextScene addr 0x20c949c size 0x4 virtual true final false
  inline void TransitionToNextScene();

  /// @brief Method TransitionToNextSceneInternal addr 0x20c94a0 size 0x50 virtual false final false
  inline void TransitionToNextSceneInternal();

  /// @brief Method InstallBindings addr 0x20c94f0 size 0x2c0 virtual true final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::PS5AppInit* New_ctor();

  /// @brief Method .ctor addr 0x20c97b0 size 0x4 virtual false final false
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
  ::GlobalNamespace::MainSystemInit* ____mainSystemInit;

  /// @brief Field _defaultScenesTransitionsFromInit, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::DefaultScenesTransitionsFromInit* ____defaultScenesTransitionsFromInit;

  /// @brief Field _appInitScenesTransitionSetupDataContainer, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO* ____appInitScenesTransitionSetupDataContainer;

  /// @brief Field _mainSettingsModel, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::MainSettingsModelSO* ____mainSettingsModel;

  /// @brief Field _ps5SharedPackageSKUs, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::PS5SharedPackageSKUsSO* ____ps5SharedPackageSKUs;

  /// @brief Field _sonyOnGoingToBackgroundSaveHandler, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler* ____sonyOnGoingToBackgroundSaveHandler;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PS5AppInit, 0x78>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PS5AppInit, ____mainSystemInit) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PS5AppInit, ____defaultScenesTransitionsFromInit) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PS5AppInit, ____appInitScenesTransitionSetupDataContainer) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PS5AppInit, ____mainSettingsModel) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PS5AppInit, ____ps5SharedPackageSKUs) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PS5AppInit, ____sonyOnGoingToBackgroundSaveHandler) == 0x70, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PS5AppInit);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PS5AppInit*, "", "PS5AppInit");
