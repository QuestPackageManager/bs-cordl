#pragma once
// IWYU pragma private; include "GlobalNamespace\RecPlayBehaviour.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/RecPlay/zzzz__PoseNoise_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(RecPlayBehaviour)
namespace BeatSaber::Automation {
class RecPlayBehaviourState;
}
namespace BeatSaber::RecPlay {
class PlayerPoseCapturer;
}
namespace BeatSaber::RecPlay {
struct PlayerPoseFrames;
}
namespace BeatSaber::RecPlay {
class PlayerPoseSampler;
}
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
struct BeatmapKey;
}
namespace GlobalNamespace {
class BeatmapObjectSpawnController;
}
namespace GlobalNamespace {
class GameplayCoreSceneSetupData;
}
namespace GlobalNamespace {
class PlayerTransforms;
}
namespace GlobalNamespace {
class PlayerVRControllersManager;
}
namespace GlobalNamespace {
class VRCenterAdjust;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class RecPlayBehaviour;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RecPlayBehaviour*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RecPlayBehaviour*, "", "RecPlayBehaviour");
// Dependencies BeatSaber.RecPlay.PoseNoise, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: RecPlayBehaviour
class CORDL_TYPE RecPlayBehaviour : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _beatmapCallbacksController, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCallbacksController,
                      put = __cordl_internal_set__beatmapCallbacksController)) ::GlobalNamespace::BeatmapCallbacksController* _beatmapCallbacksController;

  /// @brief Field _capturer, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__capturer, put = __cordl_internal_set__capturer)) ::BeatSaber::RecPlay::PlayerPoseCapturer* _capturer;

  /// @brief Field _headNoise, offset 0x60, size 0xc
  __declspec(property(get = __cordl_internal_get__headNoise, put = __cordl_internal_set__headNoise)) ::BeatSaber::RecPlay::PoseNoise _headNoise;

  /// @brief Field _hmdCamera, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__hmdCamera, put = __cordl_internal_set__hmdCamera)) ::UnityW<::UnityEngine::Camera> _hmdCamera;

  /// @brief Field _playback, offset 0x79, size 0x1
  __declspec(property(get = __cordl_internal_get__playback, put = __cordl_internal_set__playback)) bool _playback;

  /// @brief Field _playerControllers, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__playerControllers, put = __cordl_internal_set__playerControllers)) ::UnityW<::GlobalNamespace::PlayerVRControllersManager> _playerControllers;

  /// @brief Field _playerTransforms, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__playerTransforms, put = __cordl_internal_set__playerTransforms)) ::UnityW<::GlobalNamespace::PlayerTransforms> _playerTransforms;

  /// @brief Field _recodingFilePath, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__recodingFilePath, put = __cordl_internal_set__recodingFilePath)) ::StringW _recodingFilePath;

  /// @brief Field _recording, offset 0x78, size 0x1
  __declspec(property(get = __cordl_internal_get__recording, put = __cordl_internal_set__recording)) bool _recording;

  /// @brief Field _sampler, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__sampler, put = __cordl_internal_set__sampler)) ::BeatSaber::RecPlay::PlayerPoseSampler* _sampler;

  /// @brief Field _state, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__state, put = __cordl_internal_set__state)) ::BeatSaber::Automation::RecPlayBehaviourState* _state;

  /// @brief Field _vrCenterAdjust, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__vrCenterAdjust, put = __cordl_internal_set__vrCenterAdjust)) ::UnityW<::GlobalNamespace::VRCenterAdjust> _vrCenterAdjust;

  /// @brief Method CleanUp, addr 0x58fbc9c, size 0x10c, virtual false, abstract: false, final false
  inline void CleanUp();

  /// @brief Method Configure, addr 0x58fbb04, size 0x198, virtual false, abstract: false, final false
  inline void Configure();

  /// @brief Method CreateAutoLevelRecording, addr 0x58fb3b0, size 0x160, virtual false, abstract: false, final false
  static inline ::BeatSaber::RecPlay::PlayerPoseFrames CreateAutoLevelRecording(::GlobalNamespace::GameplayCoreSceneSetupData* sceneSetup,
                                                                                ::GlobalNamespace::BeatmapObjectSpawnController* beatmapSpawnerController);

  /// @brief Method CreateRecordingPath, addr 0x58fb090, size 0x1b4, virtual false, abstract: false, final false
  static inline ::StringW CreateRecordingPath(::GlobalNamespace::BeatmapKey key);

  /// @brief Method Init, addr 0x58faf78, size 0x118, virtual false, abstract: false, final false
  inline void Init(::GlobalNamespace::GameplayCoreSceneSetupData* sceneSetup, ::GlobalNamespace::BeatmapObjectSpawnController* beatmapSpawnerController);

  /// @brief Method LateUpdate, addr 0x58fbdd0, size 0x10, virtual false, abstract: false, final false
  inline void LateUpdate();

  /// @brief Method LoadLevelRecording, addr 0x58fb244, size 0x16c, virtual false, abstract: false, final false
  static inline ::BeatSaber::RecPlay::PlayerPoseFrames LoadLevelRecording(::StringW path);

  static inline ::GlobalNamespace::RecPlayBehaviour* New_ctor();

  /// @brief Method OnDestroy, addr 0x58fbde4, size 0x18, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnDisable, addr 0x58fbde0, size 0x4, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method Play, addr 0x58fb510, size 0x304, virtual false, abstract: false, final false
  inline void Play();

  /// @brief Method Record, addr 0x58fb878, size 0xcc, virtual false, abstract: false, final false
  inline void Record();

  /// @brief Method SavePlayerPoseFrames, addr 0x58fba34, size 0xd0, virtual false, abstract: false, final false
  static inline void SavePlayerPoseFrames(::StringW path, ::by_ref<::BeatSaber::RecPlay::PlayerPoseFrames> frames);

  /// @brief Method SaveRecording, addr 0x58fb9a8, size 0x8c, virtual false, abstract: false, final false
  inline void SaveRecording();

  /// @brief Method Update, addr 0x58fbda8, size 0x28, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method <Play>g__ExtractLocalPose|13_0, addr 0x58fb814, size 0x64, virtual false, abstract: false, final false
  static inline ::UnityEngine::Pose _Play_g__ExtractLocalPose_13_0(::UnityEngine::Transform* transform);

  /// @brief Method <Record>g__ExtractGlobalPose|14_0, addr 0x58fb944, size 0x64, virtual false, abstract: false, final false
  static inline ::UnityEngine::Pose _Record_g__ExtractGlobalPose_14_0(::UnityEngine::Transform* transform);

  constexpr ::GlobalNamespace::BeatmapCallbacksController* const& __cordl_internal_get__beatmapCallbacksController() const;

  constexpr ::GlobalNamespace::BeatmapCallbacksController*& __cordl_internal_get__beatmapCallbacksController();

  constexpr ::BeatSaber::RecPlay::PlayerPoseCapturer* const& __cordl_internal_get__capturer() const;

  constexpr ::BeatSaber::RecPlay::PlayerPoseCapturer*& __cordl_internal_get__capturer();

  constexpr ::BeatSaber::RecPlay::PoseNoise const& __cordl_internal_get__headNoise() const;

  constexpr ::BeatSaber::RecPlay::PoseNoise& __cordl_internal_get__headNoise();

  constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get__hmdCamera() const;

  constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get__hmdCamera();

  constexpr bool const& __cordl_internal_get__playback() const;

  constexpr bool& __cordl_internal_get__playback();

  constexpr ::UnityW<::GlobalNamespace::PlayerVRControllersManager> const& __cordl_internal_get__playerControllers() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerVRControllersManager>& __cordl_internal_get__playerControllers();

  constexpr ::UnityW<::GlobalNamespace::PlayerTransforms> const& __cordl_internal_get__playerTransforms() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerTransforms>& __cordl_internal_get__playerTransforms();

  constexpr ::StringW const& __cordl_internal_get__recodingFilePath() const;

  constexpr ::StringW& __cordl_internal_get__recodingFilePath();

  constexpr bool const& __cordl_internal_get__recording() const;

  constexpr bool& __cordl_internal_get__recording();

  constexpr ::BeatSaber::RecPlay::PlayerPoseSampler* const& __cordl_internal_get__sampler() const;

  constexpr ::BeatSaber::RecPlay::PlayerPoseSampler*& __cordl_internal_get__sampler();

  constexpr ::BeatSaber::Automation::RecPlayBehaviourState* const& __cordl_internal_get__state() const;

  constexpr ::BeatSaber::Automation::RecPlayBehaviourState*& __cordl_internal_get__state();

  constexpr ::UnityW<::GlobalNamespace::VRCenterAdjust> const& __cordl_internal_get__vrCenterAdjust() const;

  constexpr ::UnityW<::GlobalNamespace::VRCenterAdjust>& __cordl_internal_get__vrCenterAdjust();

  constexpr void __cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value);

  constexpr void __cordl_internal_set__capturer(::BeatSaber::RecPlay::PlayerPoseCapturer* value);

  constexpr void __cordl_internal_set__headNoise(::BeatSaber::RecPlay::PoseNoise value);

  constexpr void __cordl_internal_set__hmdCamera(::UnityW<::UnityEngine::Camera> value);

  constexpr void __cordl_internal_set__playback(bool value);

  constexpr void __cordl_internal_set__playerControllers(::UnityW<::GlobalNamespace::PlayerVRControllersManager> value);

  constexpr void __cordl_internal_set__playerTransforms(::UnityW<::GlobalNamespace::PlayerTransforms> value);

  constexpr void __cordl_internal_set__recodingFilePath(::StringW value);

  constexpr void __cordl_internal_set__recording(bool value);

  constexpr void __cordl_internal_set__sampler(::BeatSaber::RecPlay::PlayerPoseSampler* value);

  constexpr void __cordl_internal_set__state(::BeatSaber::Automation::RecPlayBehaviourState* value);

  constexpr void __cordl_internal_set__vrCenterAdjust(::UnityW<::GlobalNamespace::VRCenterAdjust> value);

  /// @brief Method .ctor, addr 0x58fbdfc, size 0xac, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RecPlayBehaviour();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RecPlayBehaviour", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RecPlayBehaviour(RecPlayBehaviour&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RecPlayBehaviour", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RecPlayBehaviour(RecPlayBehaviour const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6631 };

  /// @brief Field _beatmapCallbacksController, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCallbacksController* ____beatmapCallbacksController;

  /// @brief Field _playerTransforms, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerTransforms> ____playerTransforms;

  /// @brief Field _playerControllers, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerVRControllersManager> ____playerControllers;

  /// @brief Field _vrCenterAdjust, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::VRCenterAdjust> ____vrCenterAdjust;

  /// @brief Field _hmdCamera, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> ____hmdCamera;

  /// @brief Field _state, offset: 0x48, size: 0x8, def value: None
  ::BeatSaber::Automation::RecPlayBehaviourState* ____state;

  /// @brief Field _capturer, offset: 0x50, size: 0x8, def value: None
  ::BeatSaber::RecPlay::PlayerPoseCapturer* ____capturer;

  /// @brief Field _sampler, offset: 0x58, size: 0x8, def value: None
  ::BeatSaber::RecPlay::PlayerPoseSampler* ____sampler;

  /// @brief Field _headNoise, offset: 0x60, size: 0xc, def value: None
  ::BeatSaber::RecPlay::PoseNoise ____headNoise;

  /// @brief Field _recodingFilePath, offset: 0x70, size: 0x8, def value: None
  ::StringW ____recodingFilePath;

  /// @brief Field _recording, offset: 0x78, size: 0x1, def value: None
  bool ____recording;

  /// @brief Field _playback, offset: 0x79, size: 0x1, def value: None
  bool ____playback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RecPlayBehaviour, ____beatmapCallbacksController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecPlayBehaviour, ____playerTransforms) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecPlayBehaviour, ____playerControllers) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecPlayBehaviour, ____vrCenterAdjust) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecPlayBehaviour, ____hmdCamera) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecPlayBehaviour, ____state) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecPlayBehaviour, ____capturer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecPlayBehaviour, ____sampler) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecPlayBehaviour, ____headNoise) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecPlayBehaviour, ____recodingFilePath) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecPlayBehaviour, ____recording) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecPlayBehaviour, ____playback) == 0x79, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RecPlayBehaviour) == 0x80, "Size mismatch!");

} // namespace GlobalNamespace
