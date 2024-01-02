#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AppInit_def.hpp"
CORDL_MODULE_EXPORT(QuestAppInit)
namespace GlobalNamespace {
class MainSettingsModelSO;
}
namespace GlobalNamespace {
class DefaultScenesTransitionsFromInit;
}
namespace GlobalNamespace {
class MainSystemInit;
}
namespace System::Threading::Tasks {
class Task;
}
// Forward declare root types
namespace GlobalNamespace {
class QuestAppInit;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::QuestAppInit);
// Type: ::QuestAppInit
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15392))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4042))
// CS Name: ::QuestAppInit*
class CORDL_TYPE QuestAppInit : public ::GlobalNamespace::AppInit {
public:
  // Declarations
  /// @brief Field _mainSystemInit, offset 0x48, size 0x8
  __declspec(property(get = __get__mainSystemInit, put = __set__mainSystemInit))::GlobalNamespace::MainSystemInit* _mainSystemInit;

  /// @brief Field _defaultScenesTransitionsFromInit, offset 0x50, size 0x8
  __declspec(property(get = __get__defaultScenesTransitionsFromInit,
                      put = __set__defaultScenesTransitionsFromInit))::GlobalNamespace::DefaultScenesTransitionsFromInit* _defaultScenesTransitionsFromInit;

  /// @brief Field _mainSettingsModel, offset 0x58, size 0x8
  __declspec(property(get = __get__mainSettingsModel, put = __set__mainSettingsModel))::GlobalNamespace::MainSettingsModelSO* _mainSettingsModel;

  constexpr ::GlobalNamespace::MainSystemInit*& __get__mainSystemInit();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainSystemInit*> const& __get__mainSystemInit() const;

  constexpr void __set__mainSystemInit(::GlobalNamespace::MainSystemInit* value);

  constexpr ::GlobalNamespace::DefaultScenesTransitionsFromInit*& __get__defaultScenesTransitionsFromInit();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DefaultScenesTransitionsFromInit*> const& __get__defaultScenesTransitionsFromInit() const;

  constexpr void __set__defaultScenesTransitionsFromInit(::GlobalNamespace::DefaultScenesTransitionsFromInit* value);

  constexpr ::GlobalNamespace::MainSettingsModelSO*& __get__mainSettingsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainSettingsModelSO*> const& __get__mainSettingsModel() const;

  constexpr void __set__mainSettingsModel(::GlobalNamespace::MainSettingsModelSO* value);

  /// @brief Method AppStartAndMultiSceneEditorSetup, addr 0x222a534, size 0x4, virtual true, abstract: false, final false
  inline void AppStartAndMultiSceneEditorSetup();

  /// @brief Method RepeatableSetupAsync, addr 0x222a538, size 0x9c, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* RepeatableSetupAsync();

  /// @brief Method TransitionToNextScene, addr 0x222a5d4, size 0x98, virtual true, abstract: false, final false
  inline void TransitionToNextScene();

  /// @brief Method InstallBindings, addr 0x222a66c, size 0x280, virtual true, abstract: false, final false
  inline void InstallBindings();

  /// @brief Method ApplyDeviceSettings, addr 0x222a8ec, size 0x254, virtual false, abstract: false, final false
  inline void ApplyDeviceSettings();

  static inline ::GlobalNamespace::QuestAppInit* New_ctor();

  /// @brief Method .ctor, addr 0x222ab40, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "QuestAppInit", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  QuestAppInit(QuestAppInit&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "QuestAppInit", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  QuestAppInit(QuestAppInit const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr QuestAppInit();

public:
  /// @brief Field _mainSystemInit, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::MainSystemInit* ____mainSystemInit;

  /// @brief Field _defaultScenesTransitionsFromInit, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::DefaultScenesTransitionsFromInit* ____defaultScenesTransitionsFromInit;

  /// @brief Field _mainSettingsModel, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::MainSettingsModelSO* ____mainSettingsModel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::QuestAppInit, 0x60>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::QuestAppInit, ____mainSystemInit) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::QuestAppInit, ____defaultScenesTransitionsFromInit) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::QuestAppInit, ____mainSettingsModel) == 0x58, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::QuestAppInit);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::QuestAppInit*, "", "QuestAppInit");
