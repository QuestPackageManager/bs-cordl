#pragma once
// IWYU pragma private; include "BeatSaber/GameSettings/MainSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/SaveDataCore/zzzz__VersionableSaveData_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MainSettings)
namespace BGLib::Polyglot {
struct Language;
}
namespace BeatSaber::GameSettings {
class Audio;
}
namespace BeatSaber::GameSettings {
class Controllers;
}
namespace BeatSaber::GameSettings {
class CustomServer;
}
namespace BeatSaber::GameSettings {
class DebugSettings;
}
namespace BeatSaber::GameSettings {
class SmoothCamera;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace BeatSaber::GameSettings {
class MainSettings;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::GameSettings::MainSettings);
// Type: BeatSaber.GameSettings::MainSettings
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 102, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::GameSettings {
// Is value type: false
// CS Name: ::BeatSaber.GameSettings::MainSettings*
class CORDL_TYPE MainSettings : public ::BGLib::SaveDataCore::VersionableSaveData {
public:
  // Declarations
  /// @brief Field <audioSettings>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__audioSettings_k__BackingField,
                      put = __cordl_internal_set__audioSettings_k__BackingField))::BeatSaber::GameSettings::Audio* _audioSettings_k__BackingField;

  /// @brief Field <controllerSettings>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__controllerSettings_k__BackingField,
                      put = __cordl_internal_set__controllerSettings_k__BackingField))::BeatSaber::GameSettings::Controllers* _controllerSettings_k__BackingField;

  /// @brief Field _createScreenshotDuringTheGame, offset 0x65, size 0x1
  __declspec(property(get = __cordl_internal_get__createScreenshotDuringTheGame, put = __cordl_internal_set__createScreenshotDuringTheGame)) bool _createScreenshotDuringTheGame;

  /// @brief Field <customServerSettings>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__customServerSettings_k__BackingField,
                      put = __cordl_internal_set__customServerSettings_k__BackingField))::BeatSaber::GameSettings::CustomServer* _customServerSettings_k__BackingField;

  /// @brief Field <debugSettings>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__debugSettings_k__BackingField,
                      put = __cordl_internal_set__debugSettings_k__BackingField))::BeatSaber::GameSettings::DebugSettings* _debugSettings_k__BackingField;

  /// @brief Field _hapticFeedback, offset 0x64, size 0x1
  __declspec(property(get = __cordl_internal_get__hapticFeedback, put = __cordl_internal_set__hapticFeedback)) bool _hapticFeedback;

  /// @brief Field _language, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__language, put = __cordl_internal_set__language))::StringW _language;

  /// @brief Field _pauseButtonPressDurationLevel, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__pauseButtonPressDurationLevel, put = __cordl_internal_set__pauseButtonPressDurationLevel)) int32_t _pauseButtonPressDurationLevel;

  /// @brief Field _roomCenter, offset 0x54, size 0xc
  __declspec(property(get = __cordl_internal_get__roomCenter, put = __cordl_internal_set__roomCenter))::UnityEngine::Vector3 _roomCenter;

  /// @brief Field _roomRotation, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get__roomRotation, put = __cordl_internal_set__roomRotation)) float_t _roomRotation;

  /// @brief Field <smoothCameraSettings>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__smoothCameraSettings_k__BackingField,
                      put = __cordl_internal_set__smoothCameraSettings_k__BackingField))::BeatSaber::GameSettings::SmoothCamera* _smoothCameraSettings_k__BackingField;

  __declspec(property(get = get_audioSettings, put = set_audioSettings))::BeatSaber::GameSettings::Audio* audioSettings;

  __declspec(property(get = get_controllerSettings, put = set_controllerSettings))::BeatSaber::GameSettings::Controllers* controllerSettings;

  __declspec(property(get = get_createScreenshotDuringTheGame, put = set_createScreenshotDuringTheGame)) bool createScreenshotDuringTheGame;

  __declspec(property(get = get_customServerSettings, put = set_customServerSettings))::BeatSaber::GameSettings::CustomServer* customServerSettings;

  __declspec(property(get = get_debugSettings, put = set_debugSettings))::BeatSaber::GameSettings::DebugSettings* debugSettings;

  __declspec(property(get = get_hapticFeedback, put = set_hapticFeedback)) bool hapticFeedback;

  __declspec(property(get = get_isDirty, put = set_isDirty)) bool isDirty;

  __declspec(property(get = get_language, put = set_language))::BGLib::Polyglot::Language language;

  __declspec(property(get = get_pauseButtonPressDurationLevel, put = set_pauseButtonPressDurationLevel)) int32_t pauseButtonPressDurationLevel;

  __declspec(property(get = get_roomCenter, put = set_roomCenter))::UnityEngine::Vector3 roomCenter;

  __declspec(property(get = get_roomRotation, put = set_roomRotation)) float_t roomRotation;

  __declspec(property(get = get_smoothCameraSettings, put = set_smoothCameraSettings))::BeatSaber::GameSettings::SmoothCamera* smoothCameraSettings;

  static inline ::BeatSaber::GameSettings::MainSettings* New_ctor();

  constexpr ::BeatSaber::GameSettings::Audio*& __cordl_internal_get__audioSettings_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::GameSettings::Audio*> const& __cordl_internal_get__audioSettings_k__BackingField() const;

  constexpr ::BeatSaber::GameSettings::Controllers*& __cordl_internal_get__controllerSettings_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::GameSettings::Controllers*> const& __cordl_internal_get__controllerSettings_k__BackingField() const;

  constexpr bool const& __cordl_internal_get__createScreenshotDuringTheGame() const;

  constexpr bool& __cordl_internal_get__createScreenshotDuringTheGame();

  constexpr ::BeatSaber::GameSettings::CustomServer*& __cordl_internal_get__customServerSettings_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::GameSettings::CustomServer*> const& __cordl_internal_get__customServerSettings_k__BackingField() const;

  constexpr ::BeatSaber::GameSettings::DebugSettings*& __cordl_internal_get__debugSettings_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::GameSettings::DebugSettings*> const& __cordl_internal_get__debugSettings_k__BackingField() const;

  constexpr bool const& __cordl_internal_get__hapticFeedback() const;

  constexpr bool& __cordl_internal_get__hapticFeedback();

  constexpr ::StringW const& __cordl_internal_get__language() const;

  constexpr ::StringW& __cordl_internal_get__language();

  constexpr int32_t const& __cordl_internal_get__pauseButtonPressDurationLevel() const;

  constexpr int32_t& __cordl_internal_get__pauseButtonPressDurationLevel();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__roomCenter() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__roomCenter();

  constexpr float_t const& __cordl_internal_get__roomRotation() const;

  constexpr float_t& __cordl_internal_get__roomRotation();

  constexpr ::BeatSaber::GameSettings::SmoothCamera*& __cordl_internal_get__smoothCameraSettings_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::GameSettings::SmoothCamera*> const& __cordl_internal_get__smoothCameraSettings_k__BackingField() const;

  constexpr void __cordl_internal_set__audioSettings_k__BackingField(::BeatSaber::GameSettings::Audio* value);

  constexpr void __cordl_internal_set__controllerSettings_k__BackingField(::BeatSaber::GameSettings::Controllers* value);

  constexpr void __cordl_internal_set__createScreenshotDuringTheGame(bool value);

  constexpr void __cordl_internal_set__customServerSettings_k__BackingField(::BeatSaber::GameSettings::CustomServer* value);

  constexpr void __cordl_internal_set__debugSettings_k__BackingField(::BeatSaber::GameSettings::DebugSettings* value);

  constexpr void __cordl_internal_set__hapticFeedback(bool value);

  constexpr void __cordl_internal_set__language(::StringW value);

  constexpr void __cordl_internal_set__pauseButtonPressDurationLevel(int32_t value);

  constexpr void __cordl_internal_set__roomCenter(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__roomRotation(float_t value);

  constexpr void __cordl_internal_set__smoothCameraSettings_k__BackingField(::BeatSaber::GameSettings::SmoothCamera* value);

  /// @brief Method .ctor, addr 0x1067850, size 0x180, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_audioSettings, addr 0x1067eec, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::GameSettings::Audio* get_audioSettings();

  /// @brief Method get_controllerSettings, addr 0x1067f0c, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::GameSettings::Controllers* get_controllerSettings();

  /// @brief Method get_createScreenshotDuringTheGame, addr 0x1067fe0, size 0x8, virtual false, abstract: false, final false
  inline bool get_createScreenshotDuringTheGame();

  /// @brief Method get_customServerSettings, addr 0x1067f1c, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::GameSettings::CustomServer* get_customServerSettings();

  /// @brief Method get_debugSettings, addr 0x1067f2c, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::GameSettings::DebugSettings* get_debugSettings();

  /// @brief Method get_hapticFeedback, addr 0x1067fd8, size 0x8, virtual false, abstract: false, final false
  inline bool get_hapticFeedback();

  /// @brief Method get_isDirty, addr 0x1067e24, size 0x74, virtual true, abstract: false, final false
  inline bool get_isDirty();

  /// @brief Method get_language, addr 0x1067f3c, size 0xc, virtual false, abstract: false, final false
  inline ::BGLib::Polyglot::Language get_language();

  /// @brief Method get_pauseButtonPressDurationLevel, addr 0x1067f48, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_pauseButtonPressDurationLevel();

  /// @brief Method get_roomCenter, addr 0x1067f50, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_roomCenter();

  /// @brief Method get_roomRotation, addr 0x1067fa0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_roomRotation();

  /// @brief Method get_smoothCameraSettings, addr 0x1067efc, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::GameSettings::SmoothCamera* get_smoothCameraSettings();

  /// @brief Method set_audioSettings, addr 0x1067ef4, size 0x8, virtual false, abstract: false, final false
  inline void set_audioSettings(::BeatSaber::GameSettings::Audio* value);

  /// @brief Method set_controllerSettings, addr 0x1067f14, size 0x8, virtual false, abstract: false, final false
  inline void set_controllerSettings(::BeatSaber::GameSettings::Controllers* value);

  /// @brief Method set_createScreenshotDuringTheGame, addr 0x1067fe8, size 0x30, virtual false, abstract: false, final false
  inline void set_createScreenshotDuringTheGame(bool value);

  /// @brief Method set_customServerSettings, addr 0x1067f24, size 0x8, virtual false, abstract: false, final false
  inline void set_customServerSettings(::BeatSaber::GameSettings::CustomServer* value);

  /// @brief Method set_debugSettings, addr 0x1067f34, size 0x8, virtual false, abstract: false, final false
  inline void set_debugSettings(::BeatSaber::GameSettings::DebugSettings* value);

  /// @brief Method set_hapticFeedback, addr 0x1067b00, size 0x30, virtual false, abstract: false, final false
  inline void set_hapticFeedback(bool value);

  /// @brief Method set_isDirty, addr 0x1067e98, size 0x54, virtual true, abstract: false, final false
  inline void set_isDirty(bool value);

  /// @brief Method set_language, addr 0x10679d0, size 0x3c, virtual false, abstract: false, final false
  inline void set_language(::BGLib::Polyglot::Language value);

  /// @brief Method set_pauseButtonPressDurationLevel, addr 0x1067a0c, size 0x30, virtual false, abstract: false, final false
  inline void set_pauseButtonPressDurationLevel(int32_t value);

  /// @brief Method set_roomCenter, addr 0x1067f5c, size 0x44, virtual false, abstract: false, final false
  inline void set_roomCenter(::UnityEngine::Vector3 value);

  /// @brief Method set_roomRotation, addr 0x1067fa8, size 0x30, virtual false, abstract: false, final false
  inline void set_roomRotation(float_t value);

  /// @brief Method set_smoothCameraSettings, addr 0x1067f04, size 0x8, virtual false, abstract: false, final false
  inline void set_smoothCameraSettings(::BeatSaber::GameSettings::SmoothCamera* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MainSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MainSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MainSettings(MainSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MainSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MainSettings(MainSettings const&) = delete;

  /// @brief Field <audioSettings>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::BeatSaber::GameSettings::Audio* ____audioSettings_k__BackingField;

  /// @brief Field <smoothCameraSettings>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::BeatSaber::GameSettings::SmoothCamera* ____smoothCameraSettings_k__BackingField;

  /// @brief Field <controllerSettings>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::BeatSaber::GameSettings::Controllers* ____controllerSettings_k__BackingField;

  /// @brief Field <customServerSettings>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::BeatSaber::GameSettings::CustomServer* ____customServerSettings_k__BackingField;

  /// @brief Field <debugSettings>k__BackingField, offset: 0x40, size: 0x8, def value: None
  ::BeatSaber::GameSettings::DebugSettings* ____debugSettings_k__BackingField;

  /// @brief Field _language, offset: 0x48, size: 0x8, def value: None
  ::StringW ____language;

  /// @brief Field _pauseButtonPressDurationLevel, offset: 0x50, size: 0x4, def value: None
  int32_t ____pauseButtonPressDurationLevel;

  /// @brief Field _roomCenter, offset: 0x54, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____roomCenter;

  /// @brief Field _roomRotation, offset: 0x60, size: 0x4, def value: None
  float_t ____roomRotation;

  /// @brief Field _hapticFeedback, offset: 0x64, size: 0x1, def value: None
  bool ____hapticFeedback;

  /// @brief Field _createScreenshotDuringTheGame, offset: 0x65, size: 0x1, def value: None
  bool ____createScreenshotDuringTheGame;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::GameSettings::MainSettings, 0x68>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::MainSettings, ____audioSettings_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::MainSettings, ____smoothCameraSettings_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::MainSettings, ____controllerSettings_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::MainSettings, ____customServerSettings_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::MainSettings, ____debugSettings_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::MainSettings, ____language) == 0x48, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::MainSettings, ____pauseButtonPressDurationLevel) == 0x50, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::MainSettings, ____roomCenter) == 0x54, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::MainSettings, ____roomRotation) == 0x60, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::MainSettings, ____hapticFeedback) == 0x64, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::MainSettings, ____createScreenshotDuringTheGame) == 0x65, "Offset mismatch!");

} // namespace BeatSaber::GameSettings
NEED_NO_BOX(::BeatSaber::GameSettings::MainSettings);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::GameSettings::MainSettings*, "BeatSaber.GameSettings", "MainSettings");
