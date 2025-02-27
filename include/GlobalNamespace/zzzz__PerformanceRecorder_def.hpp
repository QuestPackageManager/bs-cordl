#pragma once
// IWYU pragma private; include "GlobalNamespace/PerformanceRecorder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GameplayModifierMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PerformanceRecorder)
namespace GlobalNamespace {
class GameplayCoreSceneSetupData;
}
namespace GlobalNamespace {
struct GameplayModifierMask;
}
namespace GlobalNamespace {
class IGamePause;
}
namespace GlobalNamespace {
class OculusMetrics;
}
namespace GlobalNamespace {
class OvrToolMetrics;
}
namespace GlobalNamespace {
class PerformanceConfigurationChecks;
}
namespace GlobalNamespace {
class PerformanceConfigurationStats;
}
namespace GlobalNamespace {
class PlayerSpecificSettings;
}
namespace GlobalNamespace {
class ProfilerMetrics;
}
namespace GlobalNamespace {
class RecPlayBehaviour_State;
}
namespace GlobalNamespace {
class SettingsManager;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class PerformanceRecorder;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PerformanceRecorder);
// Dependencies GameplayModifierMask, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PerformanceRecorder
class CORDL_TYPE PerformanceRecorder : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  __declspec(property(get = get_GamePause, put = set_GamePause)) ::GlobalNamespace::IGamePause* GamePause;

  __declspec(property(get = get_GameplayModifiers, put = set_GameplayModifiers)) ::GlobalNamespace::GameplayModifierMask GameplayModifiers;

  __declspec(property(get = get_PlayerSpecificSettings, put = set_PlayerSpecificSettings)) ::GlobalNamespace::PlayerSpecificSettings* PlayerSpecificSettings;

  __declspec(property(get = get_RrecPlayState, put = set_RrecPlayState)) ::GlobalNamespace::RecPlayBehaviour_State* RrecPlayState;

  __declspec(property(get = get_SceneSetupData, put = set_SceneSetupData)) ::GlobalNamespace::GameplayCoreSceneSetupData* SceneSetupData;

  __declspec(property(get = get_SettingsManager, put = set_SettingsManager)) ::GlobalNamespace::SettingsManager* SettingsManager;

  __declspec(property(get = get_StartEnabled, put = set_StartEnabled)) bool StartEnabled;

  /// @brief Field <GamePause>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__GamePause_k__BackingField, put = __cordl_internal_set__GamePause_k__BackingField)) ::GlobalNamespace::IGamePause* _GamePause_k__BackingField;

  /// @brief Field <GameplayModifiers>k__BackingField, offset 0x48, size 0x2
  __declspec(property(get = __cordl_internal_get__GameplayModifiers_k__BackingField,
                      put = __cordl_internal_set__GameplayModifiers_k__BackingField)) ::GlobalNamespace::GameplayModifierMask _GameplayModifiers_k__BackingField;

  /// @brief Field <PlayerSpecificSettings>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__PlayerSpecificSettings_k__BackingField,
                      put = __cordl_internal_set__PlayerSpecificSettings_k__BackingField)) ::GlobalNamespace::PlayerSpecificSettings* _PlayerSpecificSettings_k__BackingField;

  /// @brief Field <RrecPlayState>k__BackingField, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__RrecPlayState_k__BackingField,
                      put = __cordl_internal_set__RrecPlayState_k__BackingField)) ::GlobalNamespace::RecPlayBehaviour_State* _RrecPlayState_k__BackingField;

  /// @brief Field <SceneSetupData>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__SceneSetupData_k__BackingField,
                      put = __cordl_internal_set__SceneSetupData_k__BackingField)) ::GlobalNamespace::GameplayCoreSceneSetupData* _SceneSetupData_k__BackingField;

  /// @brief Field <SettingsManager>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__SettingsManager_k__BackingField,
                      put = __cordl_internal_set__SettingsManager_k__BackingField)) ::GlobalNamespace::SettingsManager* _SettingsManager_k__BackingField;

  /// @brief Field <StartEnabled>k__BackingField, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get__StartEnabled_k__BackingField, put = __cordl_internal_set__StartEnabled_k__BackingField)) bool _StartEnabled_k__BackingField;

  /// @brief Field _configChecks, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__configChecks, put = __cordl_internal_set__configChecks)) ::GlobalNamespace::PerformanceConfigurationChecks* _configChecks;

  /// @brief Field _configStats, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__configStats, put = __cordl_internal_set__configStats)) ::GlobalNamespace::PerformanceConfigurationStats* _configStats;

  /// @brief Field _frameTimes, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__frameTimes, put = __cordl_internal_set__frameTimes)) ::System::Collections::Generic::List_1<float_t>* _frameTimes;

  /// @brief Field _oculusMetrics, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__oculusMetrics, put = __cordl_internal_set__oculusMetrics)) ::GlobalNamespace::OculusMetrics* _oculusMetrics;

  /// @brief Field _ovrToolMetrics, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__ovrToolMetrics, put = __cordl_internal_set__ovrToolMetrics)) ::GlobalNamespace::OvrToolMetrics* _ovrToolMetrics;

  /// @brief Field _profilerMetrics, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__profilerMetrics, put = __cordl_internal_set__profilerMetrics)) ::GlobalNamespace::ProfilerMetrics* _profilerMetrics;

  /// @brief Field minFpsWindow, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_minFpsWindow, put = __cordl_internal_set_minFpsWindow)) float_t minFpsWindow;

  /// @brief Method Awake, addr 0x3b31e28, size 0xc, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method GenerateReports, addr 0x3b31fd4, size 0x438, virtual false, abstract: false, final false
  inline void GenerateReports();

  static inline ::GlobalNamespace::PerformanceRecorder* New_ctor();

  /// @brief Method OnDisable, addr 0x3b31fd0, size 0x4, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x3b31e34, size 0xc8, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method Update, addr 0x3b3240c, size 0x184, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method WriteFileReport, addr 0x3b32c30, size 0x34, virtual false, abstract: false, final false
  static inline void WriteFileReport(::StringW path, ::StringW contents);

  constexpr ::GlobalNamespace::IGamePause* const& __cordl_internal_get__GamePause_k__BackingField() const;

  constexpr ::GlobalNamespace::IGamePause*& __cordl_internal_get__GamePause_k__BackingField();

  constexpr ::GlobalNamespace::GameplayModifierMask const& __cordl_internal_get__GameplayModifiers_k__BackingField() const;

  constexpr ::GlobalNamespace::GameplayModifierMask& __cordl_internal_get__GameplayModifiers_k__BackingField();

  constexpr ::GlobalNamespace::PlayerSpecificSettings* const& __cordl_internal_get__PlayerSpecificSettings_k__BackingField() const;

  constexpr ::GlobalNamespace::PlayerSpecificSettings*& __cordl_internal_get__PlayerSpecificSettings_k__BackingField();

  constexpr ::GlobalNamespace::RecPlayBehaviour_State* const& __cordl_internal_get__RrecPlayState_k__BackingField() const;

  constexpr ::GlobalNamespace::RecPlayBehaviour_State*& __cordl_internal_get__RrecPlayState_k__BackingField();

  constexpr ::GlobalNamespace::GameplayCoreSceneSetupData* const& __cordl_internal_get__SceneSetupData_k__BackingField() const;

  constexpr ::GlobalNamespace::GameplayCoreSceneSetupData*& __cordl_internal_get__SceneSetupData_k__BackingField();

  constexpr ::GlobalNamespace::SettingsManager* const& __cordl_internal_get__SettingsManager_k__BackingField() const;

  constexpr ::GlobalNamespace::SettingsManager*& __cordl_internal_get__SettingsManager_k__BackingField();

  constexpr bool const& __cordl_internal_get__StartEnabled_k__BackingField() const;

  constexpr bool& __cordl_internal_get__StartEnabled_k__BackingField();

  constexpr ::GlobalNamespace::PerformanceConfigurationChecks* const& __cordl_internal_get__configChecks() const;

  constexpr ::GlobalNamespace::PerformanceConfigurationChecks*& __cordl_internal_get__configChecks();

  constexpr ::GlobalNamespace::PerformanceConfigurationStats* const& __cordl_internal_get__configStats() const;

  constexpr ::GlobalNamespace::PerformanceConfigurationStats*& __cordl_internal_get__configStats();

  constexpr ::System::Collections::Generic::List_1<float_t>* const& __cordl_internal_get__frameTimes() const;

  constexpr ::System::Collections::Generic::List_1<float_t>*& __cordl_internal_get__frameTimes();

  constexpr ::GlobalNamespace::OculusMetrics* const& __cordl_internal_get__oculusMetrics() const;

  constexpr ::GlobalNamespace::OculusMetrics*& __cordl_internal_get__oculusMetrics();

  constexpr ::GlobalNamespace::OvrToolMetrics* const& __cordl_internal_get__ovrToolMetrics() const;

  constexpr ::GlobalNamespace::OvrToolMetrics*& __cordl_internal_get__ovrToolMetrics();

  constexpr ::GlobalNamespace::ProfilerMetrics* const& __cordl_internal_get__profilerMetrics() const;

  constexpr ::GlobalNamespace::ProfilerMetrics*& __cordl_internal_get__profilerMetrics();

  constexpr float_t const& __cordl_internal_get_minFpsWindow() const;

  constexpr float_t& __cordl_internal_get_minFpsWindow();

  constexpr void __cordl_internal_set__GamePause_k__BackingField(::GlobalNamespace::IGamePause* value);

  constexpr void __cordl_internal_set__GameplayModifiers_k__BackingField(::GlobalNamespace::GameplayModifierMask value);

  constexpr void __cordl_internal_set__PlayerSpecificSettings_k__BackingField(::GlobalNamespace::PlayerSpecificSettings* value);

  constexpr void __cordl_internal_set__RrecPlayState_k__BackingField(::GlobalNamespace::RecPlayBehaviour_State* value);

  constexpr void __cordl_internal_set__SceneSetupData_k__BackingField(::GlobalNamespace::GameplayCoreSceneSetupData* value);

  constexpr void __cordl_internal_set__SettingsManager_k__BackingField(::GlobalNamespace::SettingsManager* value);

  constexpr void __cordl_internal_set__StartEnabled_k__BackingField(bool value);

  constexpr void __cordl_internal_set__configChecks(::GlobalNamespace::PerformanceConfigurationChecks* value);

  constexpr void __cordl_internal_set__configStats(::GlobalNamespace::PerformanceConfigurationStats* value);

  constexpr void __cordl_internal_set__frameTimes(::System::Collections::Generic::List_1<float_t>* value);

  constexpr void __cordl_internal_set__oculusMetrics(::GlobalNamespace::OculusMetrics* value);

  constexpr void __cordl_internal_set__ovrToolMetrics(::GlobalNamespace::OvrToolMetrics* value);

  constexpr void __cordl_internal_set__profilerMetrics(::GlobalNamespace::ProfilerMetrics* value);

  constexpr void __cordl_internal_set_minFpsWindow(float_t value);

  /// @brief Method .ctor, addr 0x3b3311c, size 0xe0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_GamePause, addr 0x3b31dc8, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::IGamePause* get_GamePause();

  /// @brief Method get_GameplayModifiers, addr 0x3b31e08, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::GameplayModifierMask get_GameplayModifiers();

  /// @brief Method get_PlayerSpecificSettings, addr 0x3b31df8, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlayerSpecificSettings* get_PlayerSpecificSettings();

  /// @brief Method get_RrecPlayState, addr 0x3b31e18, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::RecPlayBehaviour_State* get_RrecPlayState();

  /// @brief Method get_SceneSetupData, addr 0x3b31dd8, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::GameplayCoreSceneSetupData* get_SceneSetupData();

  /// @brief Method get_SettingsManager, addr 0x3b31de8, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::SettingsManager* get_SettingsManager();

  /// @brief Method get_StartEnabled, addr 0x3b31db4, size 0x8, virtual false, abstract: false, final false
  inline bool get_StartEnabled();

  /// @brief Method set_GamePause, addr 0x3b31dd0, size 0x8, virtual false, abstract: false, final false
  inline void set_GamePause(::GlobalNamespace::IGamePause* value);

  /// @brief Method set_GameplayModifiers, addr 0x3b31e10, size 0x8, virtual false, abstract: false, final false
  inline void set_GameplayModifiers(::GlobalNamespace::GameplayModifierMask value);

  /// @brief Method set_PlayerSpecificSettings, addr 0x3b31e00, size 0x8, virtual false, abstract: false, final false
  inline void set_PlayerSpecificSettings(::GlobalNamespace::PlayerSpecificSettings* value);

  /// @brief Method set_RrecPlayState, addr 0x3b31e20, size 0x8, virtual false, abstract: false, final false
  inline void set_RrecPlayState(::GlobalNamespace::RecPlayBehaviour_State* value);

  /// @brief Method set_SceneSetupData, addr 0x3b31de0, size 0x8, virtual false, abstract: false, final false
  inline void set_SceneSetupData(::GlobalNamespace::GameplayCoreSceneSetupData* value);

  /// @brief Method set_SettingsManager, addr 0x3b31df0, size 0x8, virtual false, abstract: false, final false
  inline void set_SettingsManager(::GlobalNamespace::SettingsManager* value);

  /// @brief Method set_StartEnabled, addr 0x3b31dbc, size 0xc, virtual false, abstract: false, final false
  inline void set_StartEnabled(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PerformanceRecorder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PerformanceRecorder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PerformanceRecorder(PerformanceRecorder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PerformanceRecorder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PerformanceRecorder(PerformanceRecorder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5127 };

  /// @brief Field kFrameCap offset 0xffffffff size 0x4
  static constexpr int32_t kFrameCap{ static_cast<int32_t>(0x11940) };

  /// @brief Field minFpsWindow, offset: 0x20, size: 0x4, def value: None
  float_t ___minFpsWindow;

  /// @brief Field <StartEnabled>k__BackingField, offset: 0x24, size: 0x1, def value: None
  bool ____StartEnabled_k__BackingField;

  /// @brief Field <GamePause>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::IGamePause* ____GamePause_k__BackingField;

  /// @brief Field <SceneSetupData>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::GameplayCoreSceneSetupData* ____SceneSetupData_k__BackingField;

  /// @brief Field <SettingsManager>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::SettingsManager* ____SettingsManager_k__BackingField;

  /// @brief Field <PlayerSpecificSettings>k__BackingField, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::PlayerSpecificSettings* ____PlayerSpecificSettings_k__BackingField;

  /// @brief Field <GameplayModifiers>k__BackingField, offset: 0x48, size: 0x2, def value: None
  ::GlobalNamespace::GameplayModifierMask ____GameplayModifiers_k__BackingField;

  /// @brief Field <RrecPlayState>k__BackingField, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::RecPlayBehaviour_State* ____RrecPlayState_k__BackingField;

  /// @brief Field _frameTimes, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<float_t>* ____frameTimes;

  /// @brief Field _configChecks, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::PerformanceConfigurationChecks* ____configChecks;

  /// @brief Field _configStats, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::PerformanceConfigurationStats* ____configStats;

  /// @brief Field _profilerMetrics, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::ProfilerMetrics* ____profilerMetrics;

  /// @brief Field _oculusMetrics, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::OculusMetrics* ____oculusMetrics;

  /// @brief Field _ovrToolMetrics, offset: 0x80, size: 0x8, def value: None
  ::GlobalNamespace::OvrToolMetrics* ____ovrToolMetrics;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PerformanceRecorder, ___minFpsWindow) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceRecorder, ____StartEnabled_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceRecorder, ____GamePause_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceRecorder, ____SceneSetupData_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceRecorder, ____SettingsManager_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceRecorder, ____PlayerSpecificSettings_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceRecorder, ____GameplayModifiers_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceRecorder, ____RrecPlayState_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceRecorder, ____frameTimes) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceRecorder, ____configChecks) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceRecorder, ____configStats) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceRecorder, ____profilerMetrics) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceRecorder, ____oculusMetrics) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceRecorder, ____ovrToolMetrics) == 0x80, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PerformanceRecorder, 0x88>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PerformanceRecorder);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PerformanceRecorder*, "", "PerformanceRecorder");
