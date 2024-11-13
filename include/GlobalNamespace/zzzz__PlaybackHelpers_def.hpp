#pragma once
// IWYU pragma private; include "GlobalNamespace/PlaybackHelpers.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(PlaybackHelpers)
namespace BeatSaber::RecPlay {
struct PoseOffsets;
}
namespace BeatSaber::Settings {
struct ControllerSettings;
}
namespace BeatSaber::Settings {
struct RoomSettings;
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
namespace GlobalNamespace {
class PlaybackRecord;
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
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlaybackHelpers*
class CORDL_TYPE PlaybackHelpers : public ::System::Object {
public:
  // Declarations
  /// @brief Method CreateAndBindAutoPlayback, addr 0x3ac7690, size 0x190, virtual false, abstract: false, final false
  static inline void CreateAndBindAutoPlayback(::Zenject::DiContainer* container, ::UnityEngine::GameObject* gameObject);

  /// @brief Method CreateAutoLevelRecording, addr 0x3ac7820, size 0x1b4, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::LevelRecording* CreateAutoLevelRecording(::GlobalNamespace::GameplayCoreSceneSetupData* sceneSetup,
                                                                            ::GlobalNamespace::BeatmapObjectSpawnController* beatmapSpawnerController);

  /// @brief Method CreatePlaybackRecord, addr 0x3ac79d4, size 0x74, virtual false, abstract: false, final false
  static inline ::UnityW<::GlobalNamespace::PlaybackRecord> CreatePlaybackRecord(::Zenject::DiContainer* container, ::UnityEngine::GameObject* gameObject);

  /// @brief Method CreatePoseOffsets, addr 0x3ac7a48, size 0x4ec, virtual false, abstract: false, final false
  static inline ::BeatSaber::RecPlay::PoseOffsets CreatePoseOffsets(ByRef<::BeatSaber::Settings::ControllerSettings> controller, ByRef<::BeatSaber::Settings::RoomSettings> room,
                                                                    ::GlobalNamespace::IVRPlatformHelper* vrPlatformHelper);

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5113 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlaybackHelpers, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlaybackHelpers);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlaybackHelpers*, "", "PlaybackHelpers");
