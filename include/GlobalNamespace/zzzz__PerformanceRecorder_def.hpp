#pragma once
// IWYU pragma private; include "GlobalNamespace/PerformanceRecorder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapDataItem_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PerformanceRecorder)
namespace BeatSaber::Automation {
class RecPlayBehaviourState;
}
namespace GlobalNamespace {
class AudioTimeSyncController;
}
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
class BeatmapEventRecorder;
}
namespace GlobalNamespace {
class BeatmapEventTweenRecorder;
}
namespace GlobalNamespace {
class BeatmapObjectManager;
}
namespace GlobalNamespace {
class BeatmapObjectRecorder;
}
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
MARK_REF_T(::GlobalNamespace::PerformanceRecorder*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PerformanceRecorder*, "", "PerformanceRecorder");
// Dependencies BeatmapDataItem, GameplayModifierMask, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PerformanceRecorder
class CORDL_TYPE PerformanceRecorder : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  __declspec(property(get = get_CallbackController, put = set_CallbackController)) ::GlobalNamespace::BeatmapCallbacksController* CallbackController;

  __declspec(property(get = get_GamePause, put = set_GamePause)) ::GlobalNamespace::IGamePause* GamePause;

  __declspec(property(get = get_GameplayModifiers, put = set_GameplayModifiers)) ::GlobalNamespace::GameplayModifierMask GameplayModifiers;

  __declspec(property(get = get_ObjectManager, put = set_ObjectManager)) ::GlobalNamespace::BeatmapObjectManager* ObjectManager;

  __declspec(property(get = get_PlayerSpecificSettings, put = set_PlayerSpecificSettings)) ::GlobalNamespace::PlayerSpecificSettings* PlayerSpecificSettings;

  __declspec(property(get = get_RecPlayState, put = set_RecPlayState)) ::BeatSaber::Automation::RecPlayBehaviourState* RecPlayState;

  __declspec(property(get = get_ReportDescriptor, put = set_ReportDescriptor)) ::StringW ReportDescriptor;

  __declspec(property(get = get_SceneSetupData, put = set_SceneSetupData)) ::GlobalNamespace::GameplayCoreSceneSetupData* SceneSetupData;

  __declspec(property(get = get_SettingsManager, put = set_SettingsManager)) ::GlobalNamespace::SettingsManager* SettingsManager;

  __declspec(property(get = get_StartEnabled, put = set_StartEnabled)) bool StartEnabled;

  __declspec(property(get = get_TimeSync, put = set_TimeSync)) ::UnityW<::GlobalNamespace::AudioTimeSyncController> TimeSync;

  /// @brief Field <CallbackController>k__BackingField, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__CallbackController_k__BackingField,
                      put = __cordl_internal_set__CallbackController_k__BackingField)) ::GlobalNamespace::BeatmapCallbacksController* _CallbackController_k__BackingField;

  /// @brief Field <GamePause>k__BackingField, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__GamePause_k__BackingField, put = __cordl_internal_set__GamePause_k__BackingField)) ::GlobalNamespace::IGamePause* _GamePause_k__BackingField;

  /// @brief Field <GameplayModifiers>k__BackingField, offset 0x40, size 0x2
  __declspec(property(get = __cordl_internal_get__GameplayModifiers_k__BackingField,
                      put = __cordl_internal_set__GameplayModifiers_k__BackingField)) ::GlobalNamespace::GameplayModifierMask _GameplayModifiers_k__BackingField;

  /// @brief Field <ObjectManager>k__BackingField, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__ObjectManager_k__BackingField,
                      put = __cordl_internal_set__ObjectManager_k__BackingField)) ::GlobalNamespace::BeatmapObjectManager* _ObjectManager_k__BackingField;

  /// @brief Field <PlayerSpecificSettings>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__PlayerSpecificSettings_k__BackingField,
                      put = __cordl_internal_set__PlayerSpecificSettings_k__BackingField)) ::GlobalNamespace::PlayerSpecificSettings* _PlayerSpecificSettings_k__BackingField;

  /// @brief Field <RecPlayState>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__RecPlayState_k__BackingField,
                      put = __cordl_internal_set__RecPlayState_k__BackingField)) ::BeatSaber::Automation::RecPlayBehaviourState* _RecPlayState_k__BackingField;

  /// @brief Field <ReportDescriptor>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__ReportDescriptor_k__BackingField, put = __cordl_internal_set__ReportDescriptor_k__BackingField)) ::StringW _ReportDescriptor_k__BackingField;

  /// @brief Field <SceneSetupData>k__BackingField, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__SceneSetupData_k__BackingField,
                      put = __cordl_internal_set__SceneSetupData_k__BackingField)) ::GlobalNamespace::GameplayCoreSceneSetupData* _SceneSetupData_k__BackingField;

  /// @brief Field <SettingsManager>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__SettingsManager_k__BackingField,
                      put = __cordl_internal_set__SettingsManager_k__BackingField)) ::GlobalNamespace::SettingsManager* _SettingsManager_k__BackingField;

  /// @brief Field <StartEnabled>k__BackingField, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__StartEnabled_k__BackingField, put = __cordl_internal_set__StartEnabled_k__BackingField)) bool _StartEnabled_k__BackingField;

  /// @brief Field <TimeSync>k__BackingField, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__TimeSync_k__BackingField, put = __cordl_internal_set__TimeSync_k__BackingField)) ::UnityW<::GlobalNamespace::AudioTimeSyncController>
      _TimeSync_k__BackingField;

  /// @brief Field _beatmapEventRecorder, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapEventRecorder, put = __cordl_internal_set__beatmapEventRecorder)) ::GlobalNamespace::BeatmapEventRecorder* _beatmapEventRecorder;

  /// @brief Field _beatmapEventTweenRecorder, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapEventTweenRecorder,
                      put = __cordl_internal_set__beatmapEventTweenRecorder)) ::GlobalNamespace::BeatmapEventTweenRecorder* _beatmapEventTweenRecorder;

  /// @brief Field _beatmapItems, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapItems, put = __cordl_internal_set__beatmapItems)) ::ArrayW<::GlobalNamespace::BeatmapDataItem*> _beatmapItems;

  /// @brief Field _beatmapObjectRecorder, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapObjectRecorder, put = __cordl_internal_set__beatmapObjectRecorder)) ::GlobalNamespace::BeatmapObjectRecorder* _beatmapObjectRecorder;

  /// @brief Field _configChecks, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__configChecks, put = __cordl_internal_set__configChecks)) ::GlobalNamespace::PerformanceConfigurationChecks* _configChecks;

  /// @brief Field _configStats, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__configStats, put = __cordl_internal_set__configStats)) ::GlobalNamespace::PerformanceConfigurationStats* _configStats;

  /// @brief Field _cpuTimes, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__cpuTimes, put = __cordl_internal_set__cpuTimes)) ::System::Collections::Generic::List_1<float_t>* _cpuTimes;

  /// @brief Field _gpuTimes, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__gpuTimes, put = __cordl_internal_set__gpuTimes)) ::System::Collections::Generic::List_1<float_t>* _gpuTimes;

  /// @brief Field _oculusMetrics, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__oculusMetrics, put = __cordl_internal_set__oculusMetrics)) ::GlobalNamespace::OculusMetrics* _oculusMetrics;

  /// @brief Field _ovrToolMetrics, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__ovrToolMetrics, put = __cordl_internal_set__ovrToolMetrics)) ::GlobalNamespace::OvrToolMetrics* _ovrToolMetrics;

  /// @brief Field _profilerMetrics, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__profilerMetrics, put = __cordl_internal_set__profilerMetrics)) ::GlobalNamespace::ProfilerMetrics* _profilerMetrics;

  /// @brief Field _songTimes, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__songTimes, put = __cordl_internal_set__songTimes)) ::System::Collections::Generic::List_1<float_t>* _songTimes;

  /// @brief Method Awake, addr 0x58f3eac, size 0xc, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method ClearRecordingData, addr 0x58f3ebc, size 0x130, virtual false, abstract: false, final false
  inline void ClearRecordingData();

  /// @brief Method CollectFrameData, addr 0x58f4800, size 0x2c4, virtual false, abstract: false, final false
  inline void CollectFrameData();

  /// @brief Method GenerateReports, addr 0x58f3ff0, size 0x80c, virtual false, abstract: false, final false
  inline void GenerateReports();

  static inline ::GlobalNamespace::PerformanceRecorder* New_ctor();

  /// @brief Method OnDisable, addr 0x58f3fec, size 0x4, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x58f3eb8, size 0x4, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method Update, addr 0x58f47fc, size 0x4, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method WriteFileReport, addr 0x58f51d0, size 0x34, virtual false, abstract: false, final false
  static inline void WriteFileReport(::StringW path, ::StringW contents);

  constexpr ::GlobalNamespace::BeatmapCallbacksController* const& __cordl_internal_get__CallbackController_k__BackingField() const;

  constexpr ::GlobalNamespace::BeatmapCallbacksController*& __cordl_internal_get__CallbackController_k__BackingField();

  constexpr ::GlobalNamespace::IGamePause* const& __cordl_internal_get__GamePause_k__BackingField() const;

  constexpr ::GlobalNamespace::IGamePause*& __cordl_internal_get__GamePause_k__BackingField();

  constexpr ::GlobalNamespace::GameplayModifierMask const& __cordl_internal_get__GameplayModifiers_k__BackingField() const;

  constexpr ::GlobalNamespace::GameplayModifierMask& __cordl_internal_get__GameplayModifiers_k__BackingField();

  constexpr ::GlobalNamespace::BeatmapObjectManager* const& __cordl_internal_get__ObjectManager_k__BackingField() const;

  constexpr ::GlobalNamespace::BeatmapObjectManager*& __cordl_internal_get__ObjectManager_k__BackingField();

  constexpr ::GlobalNamespace::PlayerSpecificSettings* const& __cordl_internal_get__PlayerSpecificSettings_k__BackingField() const;

  constexpr ::GlobalNamespace::PlayerSpecificSettings*& __cordl_internal_get__PlayerSpecificSettings_k__BackingField();

  constexpr ::BeatSaber::Automation::RecPlayBehaviourState* const& __cordl_internal_get__RecPlayState_k__BackingField() const;

  constexpr ::BeatSaber::Automation::RecPlayBehaviourState*& __cordl_internal_get__RecPlayState_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__ReportDescriptor_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__ReportDescriptor_k__BackingField();

  constexpr ::GlobalNamespace::GameplayCoreSceneSetupData* const& __cordl_internal_get__SceneSetupData_k__BackingField() const;

  constexpr ::GlobalNamespace::GameplayCoreSceneSetupData*& __cordl_internal_get__SceneSetupData_k__BackingField();

  constexpr ::GlobalNamespace::SettingsManager* const& __cordl_internal_get__SettingsManager_k__BackingField() const;

  constexpr ::GlobalNamespace::SettingsManager*& __cordl_internal_get__SettingsManager_k__BackingField();

  constexpr bool const& __cordl_internal_get__StartEnabled_k__BackingField() const;

  constexpr bool& __cordl_internal_get__StartEnabled_k__BackingField();

  constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController> const& __cordl_internal_get__TimeSync_k__BackingField() const;

  constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController>& __cordl_internal_get__TimeSync_k__BackingField();

  constexpr ::GlobalNamespace::BeatmapEventRecorder* const& __cordl_internal_get__beatmapEventRecorder() const;

  constexpr ::GlobalNamespace::BeatmapEventRecorder*& __cordl_internal_get__beatmapEventRecorder();

  constexpr ::GlobalNamespace::BeatmapEventTweenRecorder* const& __cordl_internal_get__beatmapEventTweenRecorder() const;

  constexpr ::GlobalNamespace::BeatmapEventTweenRecorder*& __cordl_internal_get__beatmapEventTweenRecorder();

  constexpr ::ArrayW<::GlobalNamespace::BeatmapDataItem*> const& __cordl_internal_get__beatmapItems() const;

  constexpr ::ArrayW<::GlobalNamespace::BeatmapDataItem*>& __cordl_internal_get__beatmapItems();

  constexpr ::GlobalNamespace::BeatmapObjectRecorder* const& __cordl_internal_get__beatmapObjectRecorder() const;

  constexpr ::GlobalNamespace::BeatmapObjectRecorder*& __cordl_internal_get__beatmapObjectRecorder();

  constexpr ::GlobalNamespace::PerformanceConfigurationChecks* const& __cordl_internal_get__configChecks() const;

  constexpr ::GlobalNamespace::PerformanceConfigurationChecks*& __cordl_internal_get__configChecks();

  constexpr ::GlobalNamespace::PerformanceConfigurationStats* const& __cordl_internal_get__configStats() const;

  constexpr ::GlobalNamespace::PerformanceConfigurationStats*& __cordl_internal_get__configStats();

  constexpr ::System::Collections::Generic::List_1<float_t>* const& __cordl_internal_get__cpuTimes() const;

  constexpr ::System::Collections::Generic::List_1<float_t>*& __cordl_internal_get__cpuTimes();

  constexpr ::System::Collections::Generic::List_1<float_t>* const& __cordl_internal_get__gpuTimes() const;

  constexpr ::System::Collections::Generic::List_1<float_t>*& __cordl_internal_get__gpuTimes();

  constexpr ::GlobalNamespace::OculusMetrics* const& __cordl_internal_get__oculusMetrics() const;

  constexpr ::GlobalNamespace::OculusMetrics*& __cordl_internal_get__oculusMetrics();

  constexpr ::GlobalNamespace::OvrToolMetrics* const& __cordl_internal_get__ovrToolMetrics() const;

  constexpr ::GlobalNamespace::OvrToolMetrics*& __cordl_internal_get__ovrToolMetrics();

  constexpr ::GlobalNamespace::ProfilerMetrics* const& __cordl_internal_get__profilerMetrics() const;

  constexpr ::GlobalNamespace::ProfilerMetrics*& __cordl_internal_get__profilerMetrics();

  constexpr ::System::Collections::Generic::List_1<float_t>* const& __cordl_internal_get__songTimes() const;

  constexpr ::System::Collections::Generic::List_1<float_t>*& __cordl_internal_get__songTimes();

  constexpr void __cordl_internal_set__CallbackController_k__BackingField(::GlobalNamespace::BeatmapCallbacksController* value);

  constexpr void __cordl_internal_set__GamePause_k__BackingField(::GlobalNamespace::IGamePause* value);

  constexpr void __cordl_internal_set__GameplayModifiers_k__BackingField(::GlobalNamespace::GameplayModifierMask value);

  constexpr void __cordl_internal_set__ObjectManager_k__BackingField(::GlobalNamespace::BeatmapObjectManager* value);

  constexpr void __cordl_internal_set__PlayerSpecificSettings_k__BackingField(::GlobalNamespace::PlayerSpecificSettings* value);

  constexpr void __cordl_internal_set__RecPlayState_k__BackingField(::BeatSaber::Automation::RecPlayBehaviourState* value);

  constexpr void __cordl_internal_set__ReportDescriptor_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__SceneSetupData_k__BackingField(::GlobalNamespace::GameplayCoreSceneSetupData* value);

  constexpr void __cordl_internal_set__SettingsManager_k__BackingField(::GlobalNamespace::SettingsManager* value);

  constexpr void __cordl_internal_set__StartEnabled_k__BackingField(bool value);

  constexpr void __cordl_internal_set__TimeSync_k__BackingField(::UnityW<::GlobalNamespace::AudioTimeSyncController> value);

  constexpr void __cordl_internal_set__beatmapEventRecorder(::GlobalNamespace::BeatmapEventRecorder* value);

  constexpr void __cordl_internal_set__beatmapEventTweenRecorder(::GlobalNamespace::BeatmapEventTweenRecorder* value);

  constexpr void __cordl_internal_set__beatmapItems(::ArrayW<::GlobalNamespace::BeatmapDataItem*> value);

  constexpr void __cordl_internal_set__beatmapObjectRecorder(::GlobalNamespace::BeatmapObjectRecorder* value);

  constexpr void __cordl_internal_set__configChecks(::GlobalNamespace::PerformanceConfigurationChecks* value);

  constexpr void __cordl_internal_set__configStats(::GlobalNamespace::PerformanceConfigurationStats* value);

  constexpr void __cordl_internal_set__cpuTimes(::System::Collections::Generic::List_1<float_t>* value);

  constexpr void __cordl_internal_set__gpuTimes(::System::Collections::Generic::List_1<float_t>* value);

  constexpr void __cordl_internal_set__oculusMetrics(::GlobalNamespace::OculusMetrics* value);

  constexpr void __cordl_internal_set__ovrToolMetrics(::GlobalNamespace::OvrToolMetrics* value);

  constexpr void __cordl_internal_set__profilerMetrics(::GlobalNamespace::ProfilerMetrics* value);

  constexpr void __cordl_internal_set__songTimes(::System::Collections::Generic::List_1<float_t>* value);

  /// @brief Method .ctor, addr 0x58f57e4, size 0x128, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_CallbackController, addr 0x58f3e8c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapCallbacksController* get_CallbackController();

  /// @brief Method get_GamePause, addr 0x58f3e5c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::IGamePause* get_GamePause();

  /// @brief Method get_GameplayModifiers, addr 0x58f3e3c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::GameplayModifierMask get_GameplayModifiers();

  /// @brief Method get_ObjectManager, addr 0x58f3e7c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapObjectManager* get_ObjectManager();

  /// @brief Method get_PlayerSpecificSettings, addr 0x58f3e2c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlayerSpecificSettings* get_PlayerSpecificSettings();

  /// @brief Method get_RecPlayState, addr 0x58f3e4c, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::Automation::RecPlayBehaviourState* get_RecPlayState();

  /// @brief Method get_ReportDescriptor, addr 0x58f3dfc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ReportDescriptor();

  /// @brief Method get_SceneSetupData, addr 0x58f3e6c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::GameplayCoreSceneSetupData* get_SceneSetupData();

  /// @brief Method get_SettingsManager, addr 0x58f3e1c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::SettingsManager* get_SettingsManager();

  /// @brief Method get_StartEnabled, addr 0x58f3e0c, size 0x8, virtual false, abstract: false, final false
  inline bool get_StartEnabled();

  /// @brief Method get_TimeSync, addr 0x58f3e9c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::AudioTimeSyncController> get_TimeSync();

  /// @brief Method set_CallbackController, addr 0x58f3e94, size 0x8, virtual false, abstract: false, final false
  inline void set_CallbackController(::GlobalNamespace::BeatmapCallbacksController* value);

  /// @brief Method set_GamePause, addr 0x58f3e64, size 0x8, virtual false, abstract: false, final false
  inline void set_GamePause(::GlobalNamespace::IGamePause* value);

  /// @brief Method set_GameplayModifiers, addr 0x58f3e44, size 0x8, virtual false, abstract: false, final false
  inline void set_GameplayModifiers(::GlobalNamespace::GameplayModifierMask value);

  /// @brief Method set_ObjectManager, addr 0x58f3e84, size 0x8, virtual false, abstract: false, final false
  inline void set_ObjectManager(::GlobalNamespace::BeatmapObjectManager* value);

  /// @brief Method set_PlayerSpecificSettings, addr 0x58f3e34, size 0x8, virtual false, abstract: false, final false
  inline void set_PlayerSpecificSettings(::GlobalNamespace::PlayerSpecificSettings* value);

  /// @brief Method set_RecPlayState, addr 0x58f3e54, size 0x8, virtual false, abstract: false, final false
  inline void set_RecPlayState(::BeatSaber::Automation::RecPlayBehaviourState* value);

  /// @brief Method set_ReportDescriptor, addr 0x58f3e04, size 0x8, virtual false, abstract: false, final false
  inline void set_ReportDescriptor(::StringW value);

  /// @brief Method set_SceneSetupData, addr 0x58f3e74, size 0x8, virtual false, abstract: false, final false
  inline void set_SceneSetupData(::GlobalNamespace::GameplayCoreSceneSetupData* value);

  /// @brief Method set_SettingsManager, addr 0x58f3e24, size 0x8, virtual false, abstract: false, final false
  inline void set_SettingsManager(::GlobalNamespace::SettingsManager* value);

  /// @brief Method set_StartEnabled, addr 0x58f3e14, size 0x8, virtual false, abstract: false, final false
  inline void set_StartEnabled(bool value);

  /// @brief Method set_TimeSync, addr 0x58f3ea4, size 0x8, virtual false, abstract: false, final false
  inline void set_TimeSync(::GlobalNamespace::AudioTimeSyncController* value);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6589 };

  /// @brief Field kFramesCapacity offset 0xffffffff size 0x4
  static constexpr int32_t kFramesCapacity{ static_cast<int32_t>(0x11940) };

  /// @brief Field <ReportDescriptor>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::StringW ____ReportDescriptor_k__BackingField;

  /// @brief Field <StartEnabled>k__BackingField, offset: 0x28, size: 0x1, def value: None
  bool ____StartEnabled_k__BackingField;

  /// @brief Field <SettingsManager>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::SettingsManager* ____SettingsManager_k__BackingField;

  /// @brief Field <PlayerSpecificSettings>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::PlayerSpecificSettings* ____PlayerSpecificSettings_k__BackingField;

  /// @brief Field <GameplayModifiers>k__BackingField, offset: 0x40, size: 0x2, def value: None
  ::GlobalNamespace::GameplayModifierMask ____GameplayModifiers_k__BackingField;

  /// @brief Field <RecPlayState>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::BeatSaber::Automation::RecPlayBehaviourState* ____RecPlayState_k__BackingField;

  /// @brief Field <GamePause>k__BackingField, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::IGamePause* ____GamePause_k__BackingField;

  /// @brief Field <SceneSetupData>k__BackingField, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::GameplayCoreSceneSetupData* ____SceneSetupData_k__BackingField;

  /// @brief Field <ObjectManager>k__BackingField, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapObjectManager* ____ObjectManager_k__BackingField;

  /// @brief Field <CallbackController>k__BackingField, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCallbacksController* ____CallbackController_k__BackingField;

  /// @brief Field <TimeSync>k__BackingField, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AudioTimeSyncController> ____TimeSync_k__BackingField;

  /// @brief Field _cpuTimes, offset: 0x78, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<float_t>* ____cpuTimes;

  /// @brief Field _gpuTimes, offset: 0x80, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<float_t>* ____gpuTimes;

  /// @brief Field _songTimes, offset: 0x88, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<float_t>* ____songTimes;

  /// @brief Field _configChecks, offset: 0x90, size: 0x8, def value: None
  ::GlobalNamespace::PerformanceConfigurationChecks* ____configChecks;

  /// @brief Field _configStats, offset: 0x98, size: 0x8, def value: None
  ::GlobalNamespace::PerformanceConfigurationStats* ____configStats;

  /// @brief Field _beatmapItems, offset: 0xa0, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::BeatmapDataItem*> ____beatmapItems;

  /// @brief Field _beatmapObjectRecorder, offset: 0xa8, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapObjectRecorder* ____beatmapObjectRecorder;

  /// @brief Field _beatmapEventRecorder, offset: 0xb0, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapEventRecorder* ____beatmapEventRecorder;

  /// @brief Field _beatmapEventTweenRecorder, offset: 0xb8, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapEventTweenRecorder* ____beatmapEventTweenRecorder;

  /// @brief Field _profilerMetrics, offset: 0xc0, size: 0x8, def value: None
  ::GlobalNamespace::ProfilerMetrics* ____profilerMetrics;

  /// @brief Field _oculusMetrics, offset: 0xc8, size: 0x8, def value: None
  ::GlobalNamespace::OculusMetrics* ____oculusMetrics;

  /// @brief Field _ovrToolMetrics, offset: 0xd0, size: 0x8, def value: None
  ::GlobalNamespace::OvrToolMetrics* ____ovrToolMetrics;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PerformanceRecorder, ____ReportDescriptor_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceRecorder, ____StartEnabled_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceRecorder, ____SettingsManager_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceRecorder, ____PlayerSpecificSettings_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceRecorder, ____GameplayModifiers_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceRecorder, ____RecPlayState_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceRecorder, ____GamePause_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceRecorder, ____SceneSetupData_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceRecorder, ____ObjectManager_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceRecorder, ____CallbackController_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceRecorder, ____TimeSync_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceRecorder, ____cpuTimes) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceRecorder, ____gpuTimes) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceRecorder, ____songTimes) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceRecorder, ____configChecks) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceRecorder, ____configStats) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceRecorder, ____beatmapItems) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceRecorder, ____beatmapObjectRecorder) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceRecorder, ____beatmapEventRecorder) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceRecorder, ____beatmapEventTweenRecorder) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceRecorder, ____profilerMetrics) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceRecorder, ____oculusMetrics) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceRecorder, ____ovrToolMetrics) == 0xd0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PerformanceRecorder) == 0xd8, "Size mismatch!");

} // namespace GlobalNamespace
