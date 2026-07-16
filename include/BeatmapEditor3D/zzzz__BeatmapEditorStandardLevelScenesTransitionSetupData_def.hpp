#pragma once
// IWYU pragma private; include "BeatmapEditor3D/BeatmapEditorStandardLevelScenesTransitionSetupData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LevelScenesTransitionSetupData_def.hpp"
CORDL_MODULE_EXPORT(BeatmapEditorStandardLevelScenesTransitionSetupData)
namespace GlobalNamespace {
class AudioClipAsyncLoader;
}
namespace GlobalNamespace {
struct BeatmapEditorStartTestLevelData;
}
namespace GlobalNamespace {
struct BeatmapKey;
}
namespace GlobalNamespace {
class BeatmapLevel;
}
namespace GlobalNamespace {
class ColorScheme;
}
namespace GlobalNamespace {
class EnvironmentsListModel;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class IBeatmapLevelData;
}
namespace GlobalNamespace {
class LevelCompletionResults;
}
namespace GlobalNamespace {
class PlayerSpecificSettings;
}
namespace GlobalNamespace {
class PracticeSettings;
}
namespace GlobalNamespace {
class SettingsManager;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
// Forward declare root types
namespace BeatmapEditor3D {
class BeatmapEditorStandardLevelScenesTransitionSetupData;
}
// Write type traits
MARK_REF_T(::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupData*);
DEFINE_IL2CPP_CLASS(::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupData*, "BeatmapEditor3D", "BeatmapEditorStandardLevelScenesTransitionSetupData");
// Dependencies LevelScenesTransitionSetupData
namespace BeatmapEditor3D {
// Is value type: false
// CS Name: BeatmapEditor3D.BeatmapEditorStandardLevelScenesTransitionSetupData
class CORDL_TYPE BeatmapEditorStandardLevelScenesTransitionSetupData : public ::GlobalNamespace::LevelScenesTransitionSetupData {
public:
  // Declarations
  /// @brief Field didFinishEvent, offset 0x38, size 0x8
  __declspec(property(
      get = __cordl_internal_get_didFinishEvent,
      put =
          __cordl_internal_set_didFinishEvent)) ::System::Action_2<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupData*, ::GlobalNamespace::LevelCompletionResults*>* didFinishEvent;

  /// @brief Method Finish, addr 0x5973588, size 0x28, virtual false, abstract: false, final false
  inline void Finish(::GlobalNamespace::LevelCompletionResults* levelCompletionResults);

  /// @brief Method Init, addr 0x59735b0, size 0x4c, virtual false, abstract: false, final false
  inline void Init(::GlobalNamespace::IBeatmapLevelData* beatmapLevelData, ::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
                   ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::GlobalNamespace::PracticeSettings* practiceSettings,
                   ::GlobalNamespace::ColorScheme* colorScheme, ::GlobalNamespace::EnvironmentsListModel* environmentsListModel, ::GlobalNamespace::AudioClipAsyncLoader* audioClipAsyncLoader,
                   ::GlobalNamespace::SettingsManager* settingsManager, ::by_ref<::GlobalNamespace::BeatmapEditorStartTestLevelData> data);

  static inline ::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupData* New_ctor();

  constexpr ::System::Action_2<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupData*, ::GlobalNamespace::LevelCompletionResults*>* const& __cordl_internal_get_didFinishEvent() const;

  constexpr ::System::Action_2<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupData*, ::GlobalNamespace::LevelCompletionResults*>*& __cordl_internal_get_didFinishEvent();

  constexpr void __cordl_internal_set_didFinishEvent(::System::Action_2<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupData*, ::GlobalNamespace::LevelCompletionResults*>* value);

  /// @brief Method .ctor, addr 0x59735fc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didFinishEvent, addr 0x5973408, size 0xc0, virtual false, abstract: false, final false
  inline void add_didFinishEvent(::System::Action_2<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupData*, ::GlobalNamespace::LevelCompletionResults*>* value);

  /// @brief Method remove_didFinishEvent, addr 0x59734c8, size 0xc0, virtual false, abstract: false, final false
  inline void remove_didFinishEvent(::System::Action_2<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupData*, ::GlobalNamespace::LevelCompletionResults*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapEditorStandardLevelScenesTransitionSetupData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapEditorStandardLevelScenesTransitionSetupData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapEditorStandardLevelScenesTransitionSetupData(BeatmapEditorStandardLevelScenesTransitionSetupData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapEditorStandardLevelScenesTransitionSetupData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapEditorStandardLevelScenesTransitionSetupData(BeatmapEditorStandardLevelScenesTransitionSetupData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7003 };

  /// @brief Field didFinishEvent, offset: 0x38, size: 0x8, def value: None
  ::System::Action_2<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupData*, ::GlobalNamespace::LevelCompletionResults*>* ___didFinishEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupData, ___didFinishEvent) == 0x38, "Offset mismatch!");

static_assert(sizeof(::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupData) == 0x40, "Size mismatch!");

} // namespace BeatmapEditor3D
