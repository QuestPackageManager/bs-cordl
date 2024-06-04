#pragma once
// IWYU pragma private; include "GlobalNamespace/DefaultScenesTransitionsFromInit.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DefaultScenesTransitionsFromInit)
namespace GlobalNamespace {
class BeatmapEditorScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class GameScenesManager;
}
namespace GlobalNamespace {
class HealthWarningScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class MenuScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class RecordingToolScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class ShaderWarmupScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class StartupErrorScenesTransitionSetupDataSO;
}
// Forward declare root types
namespace GlobalNamespace {
class DefaultScenesTransitionsFromInit;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DefaultScenesTransitionsFromInit);
// Type: ::DefaultScenesTransitionsFromInit
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DefaultScenesTransitionsFromInit*
class CORDL_TYPE DefaultScenesTransitionsFromInit : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _beatmapEditorScenesTransitionSetupData, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapEditorScenesTransitionSetupData,
                      put = __cordl_internal_set__beatmapEditorScenesTransitionSetupData))::UnityW<::GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO> _beatmapEditorScenesTransitionSetupData;

  /// @brief Field _gameScenesManager, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__gameScenesManager, put = __cordl_internal_set__gameScenesManager))::UnityW<::GlobalNamespace::GameScenesManager> _gameScenesManager;

  /// @brief Field _healthWarningScenesTransitionSetupData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__healthWarningScenesTransitionSetupData,
                      put = __cordl_internal_set__healthWarningScenesTransitionSetupData))::UnityW<::GlobalNamespace::HealthWarningScenesTransitionSetupDataSO> _healthWarningScenesTransitionSetupData;

  /// @brief Field _mainMenuScenesTransitionSetupData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__mainMenuScenesTransitionSetupData,
                      put = __cordl_internal_set__mainMenuScenesTransitionSetupData))::UnityW<::GlobalNamespace::MenuScenesTransitionSetupDataSO> _mainMenuScenesTransitionSetupData;

  /// @brief Field _recordingToolScenesTransitionSetupData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__recordingToolScenesTransitionSetupData,
                      put = __cordl_internal_set__recordingToolScenesTransitionSetupData))::UnityW<::GlobalNamespace::RecordingToolScenesTransitionSetupDataSO> _recordingToolScenesTransitionSetupData;

  /// @brief Field _shaderWarmupScenesTransitionSetupData, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__shaderWarmupScenesTransitionSetupData,
                      put = __cordl_internal_set__shaderWarmupScenesTransitionSetupData))::UnityW<::GlobalNamespace::ShaderWarmupScenesTransitionSetupDataSO> _shaderWarmupScenesTransitionSetupData;

  /// @brief Field _startupErrorScenesTransitionSetupData, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__startupErrorScenesTransitionSetupData,
                      put = __cordl_internal_set__startupErrorScenesTransitionSetupData))::UnityW<::GlobalNamespace::StartupErrorScenesTransitionSetupDataSO> _startupErrorScenesTransitionSetupData;

  __declspec(property(get = get_mainMenuScenesTransitionSetupData))::UnityW<::GlobalNamespace::MenuScenesTransitionSetupDataSO> mainMenuScenesTransitionSetupData;

  static inline ::GlobalNamespace::DefaultScenesTransitionsFromInit* New_ctor();

  /// @brief Method TransitionToNextScene, addr 0x2616b7c, size 0x1d0, virtual false, abstract: false, final false
  inline void TransitionToNextScene(bool goStraightToMenu, bool goStraightToEditor, bool goToRecordingToolScene);

  /// @brief Method TransitionToStartupErrorScene, addr 0x2616d4c, size 0xac, virtual false, abstract: false, final false
  inline void TransitionToStartupErrorScene(::StringW title, ::StringW subtitle);

  constexpr ::UnityW<::GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO> const& __cordl_internal_get__beatmapEditorScenesTransitionSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO>& __cordl_internal_get__beatmapEditorScenesTransitionSetupData();

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& __cordl_internal_get__gameScenesManager() const;

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& __cordl_internal_get__gameScenesManager();

  constexpr ::UnityW<::GlobalNamespace::HealthWarningScenesTransitionSetupDataSO> const& __cordl_internal_get__healthWarningScenesTransitionSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::HealthWarningScenesTransitionSetupDataSO>& __cordl_internal_get__healthWarningScenesTransitionSetupData();

  constexpr ::UnityW<::GlobalNamespace::MenuScenesTransitionSetupDataSO> const& __cordl_internal_get__mainMenuScenesTransitionSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::MenuScenesTransitionSetupDataSO>& __cordl_internal_get__mainMenuScenesTransitionSetupData();

  constexpr ::UnityW<::GlobalNamespace::RecordingToolScenesTransitionSetupDataSO> const& __cordl_internal_get__recordingToolScenesTransitionSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::RecordingToolScenesTransitionSetupDataSO>& __cordl_internal_get__recordingToolScenesTransitionSetupData();

  constexpr ::UnityW<::GlobalNamespace::ShaderWarmupScenesTransitionSetupDataSO> const& __cordl_internal_get__shaderWarmupScenesTransitionSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::ShaderWarmupScenesTransitionSetupDataSO>& __cordl_internal_get__shaderWarmupScenesTransitionSetupData();

  constexpr ::UnityW<::GlobalNamespace::StartupErrorScenesTransitionSetupDataSO> const& __cordl_internal_get__startupErrorScenesTransitionSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::StartupErrorScenesTransitionSetupDataSO>& __cordl_internal_get__startupErrorScenesTransitionSetupData();

  constexpr void __cordl_internal_set__beatmapEditorScenesTransitionSetupData(::UnityW<::GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO> value);

  constexpr void __cordl_internal_set__gameScenesManager(::UnityW<::GlobalNamespace::GameScenesManager> value);

  constexpr void __cordl_internal_set__healthWarningScenesTransitionSetupData(::UnityW<::GlobalNamespace::HealthWarningScenesTransitionSetupDataSO> value);

  constexpr void __cordl_internal_set__mainMenuScenesTransitionSetupData(::UnityW<::GlobalNamespace::MenuScenesTransitionSetupDataSO> value);

  constexpr void __cordl_internal_set__recordingToolScenesTransitionSetupData(::UnityW<::GlobalNamespace::RecordingToolScenesTransitionSetupDataSO> value);

  constexpr void __cordl_internal_set__shaderWarmupScenesTransitionSetupData(::UnityW<::GlobalNamespace::ShaderWarmupScenesTransitionSetupDataSO> value);

  constexpr void __cordl_internal_set__startupErrorScenesTransitionSetupData(::UnityW<::GlobalNamespace::StartupErrorScenesTransitionSetupDataSO> value);

  /// @brief Method .ctor, addr 0x2616df8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_mainMenuScenesTransitionSetupData, addr 0x2616b74, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::MenuScenesTransitionSetupDataSO> get_mainMenuScenesTransitionSetupData();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultScenesTransitionsFromInit();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DefaultScenesTransitionsFromInit", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultScenesTransitionsFromInit(DefaultScenesTransitionsFromInit&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultScenesTransitionsFromInit", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultScenesTransitionsFromInit(DefaultScenesTransitionsFromInit const&) = delete;

  /// @brief Field _healthWarningScenesTransitionSetupData, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::HealthWarningScenesTransitionSetupDataSO> ____healthWarningScenesTransitionSetupData;

  /// @brief Field _recordingToolScenesTransitionSetupData, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::RecordingToolScenesTransitionSetupDataSO> ____recordingToolScenesTransitionSetupData;

  /// @brief Field _mainMenuScenesTransitionSetupData, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MenuScenesTransitionSetupDataSO> ____mainMenuScenesTransitionSetupData;

  /// @brief Field _beatmapEditorScenesTransitionSetupData, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO> ____beatmapEditorScenesTransitionSetupData;

  /// @brief Field _shaderWarmupScenesTransitionSetupData, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ShaderWarmupScenesTransitionSetupDataSO> ____shaderWarmupScenesTransitionSetupData;

  /// @brief Field _startupErrorScenesTransitionSetupData, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::StartupErrorScenesTransitionSetupDataSO> ____startupErrorScenesTransitionSetupData;

  /// @brief Field _gameScenesManager, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameScenesManager> ____gameScenesManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DefaultScenesTransitionsFromInit, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::DefaultScenesTransitionsFromInit, ____healthWarningScenesTransitionSetupData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DefaultScenesTransitionsFromInit, ____recordingToolScenesTransitionSetupData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DefaultScenesTransitionsFromInit, ____mainMenuScenesTransitionSetupData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DefaultScenesTransitionsFromInit, ____beatmapEditorScenesTransitionSetupData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DefaultScenesTransitionsFromInit, ____shaderWarmupScenesTransitionSetupData) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DefaultScenesTransitionsFromInit, ____startupErrorScenesTransitionSetupData) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DefaultScenesTransitionsFromInit, ____gameScenesManager) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DefaultScenesTransitionsFromInit);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DefaultScenesTransitionsFromInit*, "", "DefaultScenesTransitionsFromInit");
