#pragma once
// IWYU pragma private; include "GlobalNamespace\PerformanceToolLauncher.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(PerformanceToolLauncher)
namespace BeatSaber::Automation {
struct PerformanceToolLauncherOverrideConfig;
}
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
class BeatmapObjectManager;
}
namespace GlobalNamespace {
class GameplayAdditionalInformationSetupData;
}
namespace GlobalNamespace {
class GameplayCoreSceneSetupData;
}
namespace GlobalNamespace {
class IGamePause;
}
namespace GlobalNamespace {
class PerformanceRecorder;
}
namespace GlobalNamespace {
struct PerformanceToolLauncher_Assets;
}
namespace GlobalNamespace {
class PerformanceToolLauncher___c__DisplayClass3_0;
}
namespace GlobalNamespace {
class PerformanceVisualizer;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
class SettingsManager;
}
namespace GlobalNamespace {
class SongController;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace GlobalNamespace {
class PerformanceToolLauncher;
}
namespace GlobalNamespace {
class PerformanceToolLauncher___c__DisplayClass3_0;
}
namespace GlobalNamespace {
struct PerformanceToolLauncher_Assets;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PerformanceToolLauncher*);
MARK_REF_T(::GlobalNamespace::PerformanceToolLauncher___c__DisplayClass3_0*);
MARK_VAL_T(::GlobalNamespace::PerformanceToolLauncher_Assets);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PerformanceToolLauncher*, "", "PerformanceToolLauncher");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PerformanceToolLauncher___c__DisplayClass3_0*, "", "PerformanceToolLauncher/<>c__DisplayClass3_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PerformanceToolLauncher_Assets, "", "PerformanceToolLauncher/Assets");
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: PerformanceToolLauncher/Assets
struct CORDL_TYPE PerformanceToolLauncher_Assets {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr PerformanceToolLauncher_Assets();

  // Ctor Parameters [CppParam { name: "visualizer", ty: "::UnityW<::GlobalNamespace::PerformanceVisualizer>", modifiers: "", def_value: None }, CppParam { name: "recorder", ty:
  // "::UnityW<::GlobalNamespace::PerformanceRecorder>", modifiers: "", def_value: None }]
  constexpr PerformanceToolLauncher_Assets(::UnityW<::GlobalNamespace::PerformanceVisualizer> visualizer, ::UnityW<::GlobalNamespace::PerformanceRecorder> recorder) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6623 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field visualizer, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PerformanceVisualizer> visualizer;

  /// @brief Field recorder, offset: 0x8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PerformanceRecorder> recorder;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PerformanceToolLauncher_Assets, visualizer) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceToolLauncher_Assets, recorder) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PerformanceToolLauncher_Assets) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PerformanceToolLauncher/<>c__DisplayClass3_0
class CORDL_TYPE PerformanceToolLauncher___c__DisplayClass3_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field recorder, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_recorder, put = __cordl_internal_set_recorder)) ::UnityW<::GlobalNamespace::PerformanceRecorder> recorder;

  /// @brief Field songController, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_songController, put = __cordl_internal_set_songController)) ::UnityW<::GlobalNamespace::SongController> songController;

  static inline ::GlobalNamespace::PerformanceToolLauncher___c__DisplayClass3_0* New_ctor();

  /// @brief Method <Run>g__HandleSongControllerSongDidFinish|1, addr 0x58f8d4c, size 0xec, virtual false, abstract: false, final false
  inline void _Run_g__HandleSongControllerSongDidFinish_1();

  /// @brief Method <Run>g__HandleSongControllerSongDidStart|0, addr 0x58f8ca8, size 0xa4, virtual false, abstract: false, final false
  inline void _Run_g__HandleSongControllerSongDidStart_0();

  constexpr ::UnityW<::GlobalNamespace::PerformanceRecorder> const& __cordl_internal_get_recorder() const;

  constexpr ::UnityW<::GlobalNamespace::PerformanceRecorder>& __cordl_internal_get_recorder();

  constexpr ::UnityW<::GlobalNamespace::SongController> const& __cordl_internal_get_songController() const;

  constexpr ::UnityW<::GlobalNamespace::SongController>& __cordl_internal_get_songController();

  constexpr void __cordl_internal_set_recorder(::UnityW<::GlobalNamespace::PerformanceRecorder> value);

  constexpr void __cordl_internal_set_songController(::UnityW<::GlobalNamespace::SongController> value);

  /// @brief Method .ctor, addr 0x58f8ca0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PerformanceToolLauncher___c__DisplayClass3_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PerformanceToolLauncher___c__DisplayClass3_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PerformanceToolLauncher___c__DisplayClass3_0(PerformanceToolLauncher___c__DisplayClass3_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PerformanceToolLauncher___c__DisplayClass3_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PerformanceToolLauncher___c__DisplayClass3_0(PerformanceToolLauncher___c__DisplayClass3_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6624 };

  /// @brief Field songController, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SongController> ___songController;

  /// @brief Field recorder, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PerformanceRecorder> ___recorder;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PerformanceToolLauncher___c__DisplayClass3_0, ___songController) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceToolLauncher___c__DisplayClass3_0, ___recorder) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PerformanceToolLauncher___c__DisplayClass3_0) == 0x20, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies PerformanceToolLauncher::Assets, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PerformanceToolLauncher
class CORDL_TYPE PerformanceToolLauncher : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using Assets = ::GlobalNamespace::PerformanceToolLauncher_Assets;

  using __c__DisplayClass3_0 = ::GlobalNamespace::PerformanceToolLauncher___c__DisplayClass3_0;

  /// @brief Field _assets, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get__assets, put = __cordl_internal_set__assets)) ::GlobalNamespace::PerformanceToolLauncher_Assets _assets;

  /// @brief Method Initialize, addr 0x58f888c, size 0x2a4, virtual false, abstract: false, final false
  inline void Initialize(::GlobalNamespace::SettingsManager* settingsManager, ::GlobalNamespace::PlayerDataModel* playerDataModel, ::UnityEngine::Camera* mainCamera,
                         ::BeatSaber::Automation::RecPlayBehaviourState* recPlayState, ::GlobalNamespace::SongController* songController, ::GlobalNamespace::AudioTimeSyncController* timeSync,
                         ::GlobalNamespace::IGamePause* gamePause, ::GlobalNamespace::GameplayCoreSceneSetupData* sceneSetupData,
                         ::GlobalNamespace::GameplayAdditionalInformationSetupData* additionalInformationSetupData, ::GlobalNamespace::BeatmapObjectManager* objectManager,
                         ::GlobalNamespace::BeatmapCallbacksController* callbackController, ::System::Nullable_1<::BeatSaber::Automation::PerformanceToolLauncherOverrideConfig> overrideConfig);

  static inline ::GlobalNamespace::PerformanceToolLauncher* New_ctor();

  /// @brief Method Run, addr 0x58f8b30, size 0x170, virtual false, abstract: false, final false
  static inline void Run(::GlobalNamespace::PerformanceRecorder* recorder, ::GlobalNamespace::SongController* songController);

  constexpr ::GlobalNamespace::PerformanceToolLauncher_Assets const& __cordl_internal_get__assets() const;

  constexpr ::GlobalNamespace::PerformanceToolLauncher_Assets& __cordl_internal_get__assets();

  constexpr void __cordl_internal_set__assets(::GlobalNamespace::PerformanceToolLauncher_Assets value);

  /// @brief Method .ctor, addr 0x58f8ca4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PerformanceToolLauncher();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PerformanceToolLauncher", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PerformanceToolLauncher(PerformanceToolLauncher&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PerformanceToolLauncher", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PerformanceToolLauncher(PerformanceToolLauncher const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6625 };

  /// @brief Field _assets, offset: 0x20, size: 0x10, def value: None
  ::GlobalNamespace::PerformanceToolLauncher_Assets ____assets;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PerformanceToolLauncher, ____assets) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PerformanceToolLauncher) == 0x30, "Size mismatch!");

} // namespace GlobalNamespace
