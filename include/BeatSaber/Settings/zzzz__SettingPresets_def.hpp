#pragma once
// IWYU pragma private; include "BeatSaber/Settings/SettingPresets.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/Settings/zzzz__Settings_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SettingPresets)
namespace BeatSaber::Settings {
struct AudioSettings;
}
namespace BeatSaber::Settings {
struct ControllerSettings;
}
namespace BeatSaber::Settings {
struct MiscSettings;
}
namespace BeatSaber::Settings {
struct QuestSettings;
}
namespace BeatSaber::Settings {
struct SmoothCameraSettings;
}
namespace BeatSaber::Settings {
struct WindowSettings;
}
// Forward declare root types
namespace BeatSaber::Settings {
class SettingPresets;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::Settings::SettingPresets);
// Dependencies BeatSaber.Settings.Settings, System.Object
namespace BeatSaber::Settings {
// Is value type: false
// CS Name: BeatSaber.Settings.SettingPresets
class CORDL_TYPE SettingPresets : public ::System::Object {
public:
  // Declarations
  /// @brief Field kLightBaking, offset 0xffffffff, size 0xf0
  __declspec(property(get = getStaticF_kLightBaking, put = setStaticF_kLightBaking)) ::BeatSaber::Settings::Settings kLightBaking;

  /// @brief Field kPlayStation4, offset 0xffffffff, size 0xf0
  __declspec(property(get = getStaticF_kPlayStation4, put = setStaticF_kPlayStation4)) ::BeatSaber::Settings::Settings kPlayStation4;

  /// @brief Field kPlayStation4Pro, offset 0xffffffff, size 0xf0
  __declspec(property(get = getStaticF_kPlayStation4Pro, put = setStaticF_kPlayStation4Pro)) ::BeatSaber::Settings::Settings kPlayStation4Pro;

  /// @brief Field kPlayStation5, offset 0xffffffff, size 0xf0
  __declspec(property(get = getStaticF_kPlayStation5, put = setStaticF_kPlayStation5)) ::BeatSaber::Settings::Settings kPlayStation5;

  /// @brief Field kQuest1, offset 0xffffffff, size 0xf0
  __declspec(property(get = getStaticF_kQuest1, put = setStaticF_kQuest1)) ::BeatSaber::Settings::Settings kQuest1;

  /// @brief Field kQuest2, offset 0xffffffff, size 0xf0
  __declspec(property(get = getStaticF_kQuest2, put = setStaticF_kQuest2)) ::BeatSaber::Settings::Settings kQuest2;

  /// @brief Field kQuest3, offset 0xffffffff, size 0xf0
  __declspec(property(get = getStaticF_kQuest3, put = setStaticF_kQuest3)) ::BeatSaber::Settings::Settings kQuest3;

  /// @brief Field kQuestPro, offset 0xffffffff, size 0xf0
  __declspec(property(get = getStaticF_kQuestPro, put = setStaticF_kQuestPro)) ::BeatSaber::Settings::Settings kQuestPro;

  /// @brief Field kStandalone, offset 0xffffffff, size 0xf0
  __declspec(property(get = getStaticF_kStandalone, put = setStaticF_kStandalone)) ::BeatSaber::Settings::Settings kStandalone;

  /// @brief Method DefaultAudioSettingsWithLatency, addr 0x227c5d0, size 0x14, virtual false, abstract: false, final false
  static inline ::BeatSaber::Settings::AudioSettings DefaultAudioSettingsWithLatency(float_t latency);

  /// @brief Method DefaultControllerSettings, addr 0x227c648, size 0x94, virtual false, abstract: false, final false
  static inline ::BeatSaber::Settings::ControllerSettings DefaultControllerSettings();

  /// @brief Method DefaultMiscSettings, addr 0x227c5e4, size 0x44, virtual false, abstract: false, final false
  static inline ::BeatSaber::Settings::MiscSettings DefaultMiscSettings();

  /// @brief Method DefaultQuestSettings, addr 0x227c628, size 0x14, virtual false, abstract: false, final false
  static inline ::BeatSaber::Settings::QuestSettings DefaultQuestSettings();

  /// @brief Method DefaultSmoothCameraSettings, addr 0x227c540, size 0x90, virtual false, abstract: false, final false
  static inline ::BeatSaber::Settings::SmoothCameraSettings DefaultSmoothCameraSettings();

  /// @brief Method DefaultWindowSettings, addr 0x227c63c, size 0xc, virtual false, abstract: false, final false
  static inline ::BeatSaber::Settings::WindowSettings DefaultWindowSettings();

  static inline ::BeatSaber::Settings::Settings getStaticF_kLightBaking();

  static inline ::BeatSaber::Settings::Settings getStaticF_kPlayStation4();

  static inline ::BeatSaber::Settings::Settings getStaticF_kPlayStation4Pro();

  static inline ::BeatSaber::Settings::Settings getStaticF_kPlayStation5();

  static inline ::BeatSaber::Settings::Settings getStaticF_kQuest1();

  static inline ::BeatSaber::Settings::Settings getStaticF_kQuest2();

  static inline ::BeatSaber::Settings::Settings getStaticF_kQuest3();

  static inline ::BeatSaber::Settings::Settings getStaticF_kQuestPro();

  static inline ::BeatSaber::Settings::Settings getStaticF_kStandalone();

  static inline void setStaticF_kLightBaking(::BeatSaber::Settings::Settings value);

  static inline void setStaticF_kPlayStation4(::BeatSaber::Settings::Settings value);

  static inline void setStaticF_kPlayStation4Pro(::BeatSaber::Settings::Settings value);

  static inline void setStaticF_kPlayStation5(::BeatSaber::Settings::Settings value);

  static inline void setStaticF_kQuest1(::BeatSaber::Settings::Settings value);

  static inline void setStaticF_kQuest2(::BeatSaber::Settings::Settings value);

  static inline void setStaticF_kQuest3(::BeatSaber::Settings::Settings value);

  static inline void setStaticF_kQuestPro(::BeatSaber::Settings::Settings value);

  static inline void setStaticF_kStandalone(::BeatSaber::Settings::Settings value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SettingPresets();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SettingPresets", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SettingPresets(SettingPresets&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SettingPresets", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SettingPresets(SettingPresets const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18006 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::Settings::SettingPresets, 0x10>, "Size mismatch!");

} // namespace BeatSaber::Settings
NEED_NO_BOX(::BeatSaber::Settings::SettingPresets);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Settings::SettingPresets*, "BeatSaber.Settings", "SettingPresets");
