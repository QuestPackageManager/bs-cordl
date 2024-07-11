#pragma once
// IWYU pragma private; include "GlobalNamespace/PlaybackHelpers.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PlaybackHelpers)
namespace BeatSaber::GameSettings {
class MainSettingsHandler;
}
namespace BeatSaber::RecPlay {
struct PoseOffsets;
}
namespace GlobalNamespace {
class BeatmapObjectSpawnController;
}
namespace GlobalNamespace {
class GameplayCoreSceneSetupData;
}
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace GlobalNamespace {
class LevelRecording;
}
namespace UnityEngine {
class GameObject;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace GlobalNamespace {
class PlaybackHelpers;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlaybackHelpers);
// Type: ::PlaybackHelpers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlaybackHelpers*
class CORDL_TYPE PlaybackHelpers : public ::System::Object {
public:
  // Declarations
  /// @brief Method CreateAndBindAutoLevelRecording, addr 0x26be4cc, size 0xd4, virtual false, abstract: false, final false
  static inline void CreateAndBindAutoLevelRecording(::Zenject::DiContainer* container);

  /// @brief Method CreateAndBindAutoPlayback, addr 0x26bc214, size 0xcc, virtual false, abstract: false, final false
  static inline void CreateAndBindAutoPlayback(::Zenject::DiContainer* container, ::UnityEngine::GameObject* gameObject);

  /// @brief Method CreateAutoLevelRecording, addr 0x26be5a0, size 0x194, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::LevelRecording* CreateAutoLevelRecording(::GlobalNamespace::GameplayCoreSceneSetupData* sceneSetup,
                                                                            ::GlobalNamespace::BeatmapObjectSpawnController* beatmapSpawnerController);

  /// @brief Method CreatePoseOffsets, addr 0x26bda98, size 0x560, virtual false, abstract: false, final false
  static inline ::BeatSaber::RecPlay::PoseOffsets CreatePoseOffsets(::BeatSaber::GameSettings::MainSettingsHandler* mainSettingsHandler, ::GlobalNamespace::IVRPlatformHelper* vrPlatformHelper);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlaybackHelpers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlaybackHelpers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlaybackHelpers(PlaybackHelpers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlaybackHelpers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlaybackHelpers(PlaybackHelpers const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlaybackHelpers, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlaybackHelpers);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlaybackHelpers*, "", "PlaybackHelpers");
