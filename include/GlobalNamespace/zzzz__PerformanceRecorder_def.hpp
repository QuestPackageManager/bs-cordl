#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GameplayModifierMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PerformanceRecorder)
namespace BeatSaber::GameSettings {
class GraphicSettingsHandler;
}
namespace BeatSaber::GameSettings {
class MainSettingsHandler;
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
class PerformanceConfigurationChecks;
}
namespace GlobalNamespace {
class PerformanceConfigurationStats;
}
namespace GlobalNamespace {
class PlayerSpecificSettings;
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
// Type: ::PerformanceRecorder
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PerformanceRecorder*
class CORDL_TYPE PerformanceRecorder : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _configChecks, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__configChecks, put = __cordl_internal_set__configChecks))::GlobalNamespace::PerformanceConfigurationChecks* _configChecks;

  /// @brief Field _configStats, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__configStats, put = __cordl_internal_set__configStats))::GlobalNamespace::PerformanceConfigurationStats* _configStats;

  /// @brief Field _frameTimes, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__frameTimes, put = __cordl_internal_set__frameTimes))::System::Collections::Generic::List_1<float_t>* _frameTimes;

  /// @brief Field <gamePause>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__gamePause_k__BackingField, put = __cordl_internal_set__gamePause_k__BackingField))::GlobalNamespace::IGamePause* _gamePause_k__BackingField;

  /// @brief Field <gameplayModifiers>k__BackingField, offset 0x48, size 0x2
  __declspec(property(get = __cordl_internal_get__gameplayModifiers_k__BackingField,
                      put = __cordl_internal_set__gameplayModifiers_k__BackingField))::GlobalNamespace::GameplayModifierMask _gameplayModifiers_k__BackingField;

  /// @brief Field <graphicSettingsHandler>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__graphicSettingsHandler_k__BackingField,
                      put = __cordl_internal_set__graphicSettingsHandler_k__BackingField))::BeatSaber::GameSettings::GraphicSettingsHandler* _graphicSettingsHandler_k__BackingField;

  /// @brief Field <mainSettingsHandler>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__mainSettingsHandler_k__BackingField,
                      put = __cordl_internal_set__mainSettingsHandler_k__BackingField))::BeatSaber::GameSettings::MainSettingsHandler* _mainSettingsHandler_k__BackingField;

  /// @brief Field <playerSpecificSettings>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__playerSpecificSettings_k__BackingField,
                      put = __cordl_internal_set__playerSpecificSettings_k__BackingField))::GlobalNamespace::PlayerSpecificSettings* _playerSpecificSettings_k__BackingField;

  /// @brief Field <sceneSetupData>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__sceneSetupData_k__BackingField,
                      put = __cordl_internal_set__sceneSetupData_k__BackingField))::GlobalNamespace::GameplayCoreSceneSetupData* _sceneSetupData_k__BackingField;

  __declspec(property(get = get_gamePause, put = set_gamePause))::GlobalNamespace::IGamePause* gamePause;

  __declspec(property(get = get_gameplayModifiers, put = set_gameplayModifiers))::GlobalNamespace::GameplayModifierMask gameplayModifiers;

  __declspec(property(get = get_graphicSettingsHandler, put = set_graphicSettingsHandler))::BeatSaber::GameSettings::GraphicSettingsHandler* graphicSettingsHandler;

  __declspec(property(get = get_mainSettingsHandler, put = set_mainSettingsHandler))::BeatSaber::GameSettings::MainSettingsHandler* mainSettingsHandler;

  /// @brief Field minFpsWindow, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_minFpsWindow, put = __cordl_internal_set_minFpsWindow)) float_t minFpsWindow;

  __declspec(property(get = get_playerSpecificSettings, put = set_playerSpecificSettings))::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings;

  __declspec(property(get = get_sceneSetupData, put = set_sceneSetupData))::GlobalNamespace::GameplayCoreSceneSetupData* sceneSetupData;

  /// @brief Method Awake, addr 0x268f204, size 0xc, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method GenerateReports, addr 0x268f278, size 0x2cc, virtual false, abstract: false, final false
  inline void GenerateReports();

  static inline ::GlobalNamespace::PerformanceRecorder* New_ctor();

  /// @brief Method OnDisable, addr 0x268f274, size 0x4, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x268f210, size 0x64, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method Update, addr 0x268f544, size 0x14c, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::GlobalNamespace::PerformanceConfigurationChecks*& __cordl_internal_get__configChecks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PerformanceConfigurationChecks*> const& __cordl_internal_get__configChecks() const;

  constexpr ::GlobalNamespace::PerformanceConfigurationStats*& __cordl_internal_get__configStats();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PerformanceConfigurationStats*> const& __cordl_internal_get__configStats() const;

  constexpr ::System::Collections::Generic::List_1<float_t>*& __cordl_internal_get__frameTimes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<float_t>*> const& __cordl_internal_get__frameTimes() const;

  constexpr ::GlobalNamespace::IGamePause*& __cordl_internal_get__gamePause_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IGamePause*> const& __cordl_internal_get__gamePause_k__BackingField() const;

  constexpr ::GlobalNamespace::GameplayModifierMask const& __cordl_internal_get__gameplayModifiers_k__BackingField() const;

  constexpr ::GlobalNamespace::GameplayModifierMask& __cordl_internal_get__gameplayModifiers_k__BackingField();

  constexpr ::BeatSaber::GameSettings::GraphicSettingsHandler*& __cordl_internal_get__graphicSettingsHandler_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::GameSettings::GraphicSettingsHandler*> const& __cordl_internal_get__graphicSettingsHandler_k__BackingField() const;

  constexpr ::BeatSaber::GameSettings::MainSettingsHandler*& __cordl_internal_get__mainSettingsHandler_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::GameSettings::MainSettingsHandler*> const& __cordl_internal_get__mainSettingsHandler_k__BackingField() const;

  constexpr ::GlobalNamespace::PlayerSpecificSettings*& __cordl_internal_get__playerSpecificSettings_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerSpecificSettings*> const& __cordl_internal_get__playerSpecificSettings_k__BackingField() const;

  constexpr ::GlobalNamespace::GameplayCoreSceneSetupData*& __cordl_internal_get__sceneSetupData_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayCoreSceneSetupData*> const& __cordl_internal_get__sceneSetupData_k__BackingField() const;

  constexpr float_t const& __cordl_internal_get_minFpsWindow() const;

  constexpr float_t& __cordl_internal_get_minFpsWindow();

  constexpr void __cordl_internal_set__configChecks(::GlobalNamespace::PerformanceConfigurationChecks* value);

  constexpr void __cordl_internal_set__configStats(::GlobalNamespace::PerformanceConfigurationStats* value);

  constexpr void __cordl_internal_set__frameTimes(::System::Collections::Generic::List_1<float_t>* value);

  constexpr void __cordl_internal_set__gamePause_k__BackingField(::GlobalNamespace::IGamePause* value);

  constexpr void __cordl_internal_set__gameplayModifiers_k__BackingField(::GlobalNamespace::GameplayModifierMask value);

  constexpr void __cordl_internal_set__graphicSettingsHandler_k__BackingField(::BeatSaber::GameSettings::GraphicSettingsHandler* value);

  constexpr void __cordl_internal_set__mainSettingsHandler_k__BackingField(::BeatSaber::GameSettings::MainSettingsHandler* value);

  constexpr void __cordl_internal_set__playerSpecificSettings_k__BackingField(::GlobalNamespace::PlayerSpecificSettings* value);

  constexpr void __cordl_internal_set__sceneSetupData_k__BackingField(::GlobalNamespace::GameplayCoreSceneSetupData* value);

  constexpr void __cordl_internal_set_minFpsWindow(float_t value);

  /// @brief Method .ctor, addr 0x268fca0, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_gamePause, addr 0x268f1a4, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::IGamePause* get_gamePause();

  /// @brief Method get_gameplayModifiers, addr 0x268f1f4, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::GameplayModifierMask get_gameplayModifiers();

  /// @brief Method get_graphicSettingsHandler, addr 0x268f1d4, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::GameSettings::GraphicSettingsHandler* get_graphicSettingsHandler();

  /// @brief Method get_mainSettingsHandler, addr 0x268f1c4, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::GameSettings::MainSettingsHandler* get_mainSettingsHandler();

  /// @brief Method get_playerSpecificSettings, addr 0x268f1e4, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlayerSpecificSettings* get_playerSpecificSettings();

  /// @brief Method get_sceneSetupData, addr 0x268f1b4, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::GameplayCoreSceneSetupData* get_sceneSetupData();

  /// @brief Method set_gamePause, addr 0x268f1ac, size 0x8, virtual false, abstract: false, final false
  inline void set_gamePause(::GlobalNamespace::IGamePause* value);

  /// @brief Method set_gameplayModifiers, addr 0x268f1fc, size 0x8, virtual false, abstract: false, final false
  inline void set_gameplayModifiers(::GlobalNamespace::GameplayModifierMask value);

  /// @brief Method set_graphicSettingsHandler, addr 0x268f1dc, size 0x8, virtual false, abstract: false, final false
  inline void set_graphicSettingsHandler(::BeatSaber::GameSettings::GraphicSettingsHandler* value);

  /// @brief Method set_mainSettingsHandler, addr 0x268f1cc, size 0x8, virtual false, abstract: false, final false
  inline void set_mainSettingsHandler(::BeatSaber::GameSettings::MainSettingsHandler* value);

  /// @brief Method set_playerSpecificSettings, addr 0x268f1ec, size 0x8, virtual false, abstract: false, final false
  inline void set_playerSpecificSettings(::GlobalNamespace::PlayerSpecificSettings* value);

  /// @brief Method set_sceneSetupData, addr 0x268f1bc, size 0x8, virtual false, abstract: false, final false
  inline void set_sceneSetupData(::GlobalNamespace::GameplayCoreSceneSetupData* value);

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

  /// @brief Field minFpsWindow, offset: 0x18, size: 0x4, def value: None
  float_t ___minFpsWindow;

  /// @brief Field <gamePause>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IGamePause* ____gamePause_k__BackingField;

  /// @brief Field <sceneSetupData>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::GameplayCoreSceneSetupData* ____sceneSetupData_k__BackingField;

  /// @brief Field <mainSettingsHandler>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::BeatSaber::GameSettings::MainSettingsHandler* ____mainSettingsHandler_k__BackingField;

  /// @brief Field <graphicSettingsHandler>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::BeatSaber::GameSettings::GraphicSettingsHandler* ____graphicSettingsHandler_k__BackingField;

  /// @brief Field <playerSpecificSettings>k__BackingField, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::PlayerSpecificSettings* ____playerSpecificSettings_k__BackingField;

  /// @brief Field <gameplayModifiers>k__BackingField, offset: 0x48, size: 0x2, def value: None
  ::GlobalNamespace::GameplayModifierMask ____gameplayModifiers_k__BackingField;

  /// @brief Field _frameTimes, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<float_t>* ____frameTimes;

  /// @brief Field _configChecks, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::PerformanceConfigurationChecks* ____configChecks;

  /// @brief Field _configStats, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::PerformanceConfigurationStats* ____configStats;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PerformanceRecorder, 0x68>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceRecorder, ___minFpsWindow) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceRecorder, ____gamePause_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceRecorder, ____sceneSetupData_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceRecorder, ____mainSettingsHandler_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceRecorder, ____graphicSettingsHandler_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceRecorder, ____playerSpecificSettings_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceRecorder, ____gameplayModifiers_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceRecorder, ____frameTimes) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceRecorder, ____configChecks) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceRecorder, ____configStats) == 0x60, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PerformanceRecorder);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PerformanceRecorder*, "", "PerformanceRecorder");
