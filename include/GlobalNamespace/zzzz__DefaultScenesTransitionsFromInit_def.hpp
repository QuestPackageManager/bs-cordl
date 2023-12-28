#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(DefaultScenesTransitionsFromInit)
namespace GlobalNamespace {
class HealthWarningScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class GameScenesManager;
}
namespace GlobalNamespace {
class MenuScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class RecordingToolScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class BeatmapEditorScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class ShaderWarmupScenesTransitionSetupDataSO;
}
// Forward declare root types
namespace GlobalNamespace {
class DefaultScenesTransitionsFromInit;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DefaultScenesTransitionsFromInit);
// Type: ::DefaultScenesTransitionsFromInit
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4023))
// CS Name: ::DefaultScenesTransitionsFromInit*
class CORDL_TYPE DefaultScenesTransitionsFromInit : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _healthWarningScenesTransitionSetupData, offset 0x18, size 0x8
  __declspec(property(get = __get__healthWarningScenesTransitionSetupData,
                      put = __set__healthWarningScenesTransitionSetupData))::GlobalNamespace::HealthWarningScenesTransitionSetupDataSO* _healthWarningScenesTransitionSetupData;

  /// @brief Field _recordingToolScenesTransitionSetupData, offset 0x20, size 0x8
  __declspec(property(get = __get__recordingToolScenesTransitionSetupData,
                      put = __set__recordingToolScenesTransitionSetupData))::GlobalNamespace::RecordingToolScenesTransitionSetupDataSO* _recordingToolScenesTransitionSetupData;

  /// @brief Field _mainMenuScenesTransitionSetupData, offset 0x28, size 0x8
  __declspec(property(get = __get__mainMenuScenesTransitionSetupData,
                      put = __set__mainMenuScenesTransitionSetupData))::GlobalNamespace::MenuScenesTransitionSetupDataSO* _mainMenuScenesTransitionSetupData;

  /// @brief Field _beatmapEditorScenesTransitionSetupData, offset 0x30, size 0x8
  __declspec(property(get = __get__beatmapEditorScenesTransitionSetupData,
                      put = __set__beatmapEditorScenesTransitionSetupData))::GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO* _beatmapEditorScenesTransitionSetupData;

  /// @brief Field _shaderWarmupScenesTransitionSetupData, offset 0x38, size 0x8
  __declspec(property(get = __get__shaderWarmupScenesTransitionSetupData,
                      put = __set__shaderWarmupScenesTransitionSetupData))::GlobalNamespace::ShaderWarmupScenesTransitionSetupDataSO* _shaderWarmupScenesTransitionSetupData;

  /// @brief Field _gameScenesManager, offset 0x40, size 0x8
  __declspec(property(get = __get__gameScenesManager, put = __set__gameScenesManager))::GlobalNamespace::GameScenesManager* _gameScenesManager;

  __declspec(property(get = get_mainMenuScenesTransitionSetupData))::GlobalNamespace::MenuScenesTransitionSetupDataSO* mainMenuScenesTransitionSetupData;

  constexpr ::GlobalNamespace::HealthWarningScenesTransitionSetupDataSO*& __get__healthWarningScenesTransitionSetupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::HealthWarningScenesTransitionSetupDataSO*> const& __get__healthWarningScenesTransitionSetupData() const;

  constexpr void __set__healthWarningScenesTransitionSetupData(::GlobalNamespace::HealthWarningScenesTransitionSetupDataSO* value);

  constexpr ::GlobalNamespace::RecordingToolScenesTransitionSetupDataSO*& __get__recordingToolScenesTransitionSetupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RecordingToolScenesTransitionSetupDataSO*> const& __get__recordingToolScenesTransitionSetupData() const;

  constexpr void __set__recordingToolScenesTransitionSetupData(::GlobalNamespace::RecordingToolScenesTransitionSetupDataSO* value);

  constexpr ::GlobalNamespace::MenuScenesTransitionSetupDataSO*& __get__mainMenuScenesTransitionSetupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuScenesTransitionSetupDataSO*> const& __get__mainMenuScenesTransitionSetupData() const;

  constexpr void __set__mainMenuScenesTransitionSetupData(::GlobalNamespace::MenuScenesTransitionSetupDataSO* value);

  constexpr ::GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO*& __get__beatmapEditorScenesTransitionSetupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO*> const& __get__beatmapEditorScenesTransitionSetupData() const;

  constexpr void __set__beatmapEditorScenesTransitionSetupData(::GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO* value);

  constexpr ::GlobalNamespace::ShaderWarmupScenesTransitionSetupDataSO*& __get__shaderWarmupScenesTransitionSetupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ShaderWarmupScenesTransitionSetupDataSO*> const& __get__shaderWarmupScenesTransitionSetupData() const;

  constexpr void __set__shaderWarmupScenesTransitionSetupData(::GlobalNamespace::ShaderWarmupScenesTransitionSetupDataSO* value);

  constexpr ::GlobalNamespace::GameScenesManager*& __get__gameScenesManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameScenesManager*> const& __get__gameScenesManager() const;

  constexpr void __set__gameScenesManager(::GlobalNamespace::GameScenesManager* value);

  /// @brief Method get_mainMenuScenesTransitionSetupData addr 0x2225d5c size 0x8 virtual false final false
  inline ::GlobalNamespace::MenuScenesTransitionSetupDataSO* get_mainMenuScenesTransitionSetupData();

  /// @brief Method TransitionToNextScene addr 0x2225d64 size 0x1d0 virtual false final false
  inline void TransitionToNextScene(bool goStraightToMenu, bool goStraightToEditor, bool goToRecordingToolScene);

  static inline ::GlobalNamespace::DefaultScenesTransitionsFromInit* New_ctor();

  /// @brief Method .ctor addr 0x2225f34 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "DefaultScenesTransitionsFromInit", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultScenesTransitionsFromInit(DefaultScenesTransitionsFromInit&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultScenesTransitionsFromInit", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultScenesTransitionsFromInit(DefaultScenesTransitionsFromInit const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultScenesTransitionsFromInit();

public:
  /// @brief Field _healthWarningScenesTransitionSetupData, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::HealthWarningScenesTransitionSetupDataSO* ____healthWarningScenesTransitionSetupData;

  /// @brief Field _recordingToolScenesTransitionSetupData, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::RecordingToolScenesTransitionSetupDataSO* ____recordingToolScenesTransitionSetupData;

  /// @brief Field _mainMenuScenesTransitionSetupData, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::MenuScenesTransitionSetupDataSO* ____mainMenuScenesTransitionSetupData;

  /// @brief Field _beatmapEditorScenesTransitionSetupData, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO* ____beatmapEditorScenesTransitionSetupData;

  /// @brief Field _shaderWarmupScenesTransitionSetupData, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::ShaderWarmupScenesTransitionSetupDataSO* ____shaderWarmupScenesTransitionSetupData;

  /// @brief Field _gameScenesManager, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::GameScenesManager* ____gameScenesManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DefaultScenesTransitionsFromInit, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DefaultScenesTransitionsFromInit);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DefaultScenesTransitionsFromInit*, "", "DefaultScenesTransitionsFromInit");
