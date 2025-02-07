#pragma once
// IWYU pragma private; include "GlobalNamespace/RecPlayBehaviour.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/RecPlay/zzzz__PoseNoise_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(RecPlayBehaviour)
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
class RecPlayBehaviour_State;
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
namespace GlobalNamespace {
class RecPlayBehaviour_State;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RecPlayBehaviour);
MARK_REF_PTR_T(::GlobalNamespace::RecPlayBehaviour_State);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: RecPlayBehaviour/State
class CORDL_TYPE RecPlayBehaviour_State : public ::System::Object {
public:
  // Declarations
  /// @brief Field playback, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get_playback, put = __cordl_internal_set_playback)) bool playback;

  /// @brief Field recording, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_recording, put = __cordl_internal_set_recording)) bool recording;

  static inline ::GlobalNamespace::RecPlayBehaviour_State* New_ctor();

  constexpr bool const& __cordl_internal_get_playback() const;

  constexpr bool& __cordl_internal_get_playback();

  constexpr bool const& __cordl_internal_get_recording() const;

  constexpr bool& __cordl_internal_get_recording();

  constexpr void __cordl_internal_set_playback(bool value);

  constexpr void __cordl_internal_set_recording(bool value);

  /// @brief Method .ctor, addr 0x3b2e768, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RecPlayBehaviour_State();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RecPlayBehaviour_State", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RecPlayBehaviour_State(RecPlayBehaviour_State&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RecPlayBehaviour_State", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RecPlayBehaviour_State(RecPlayBehaviour_State const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5138 };

  /// @brief Field recording, offset: 0x10, size: 0x1, def value: None
  bool ___recording;

  /// @brief Field playback, offset: 0x11, size: 0x1, def value: None
  bool ___playback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RecPlayBehaviour_State, ___recording) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecPlayBehaviour_State, ___playback) == 0x11, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RecPlayBehaviour_State, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BeatSaber.RecPlay.PoseNoise, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: RecPlayBehaviour
class CORDL_TYPE RecPlayBehaviour : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using State = ::GlobalNamespace::RecPlayBehaviour_State;

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
  __declspec(property(get = __cordl_internal_get__state, put = __cordl_internal_set__state)) ::GlobalNamespace::RecPlayBehaviour_State* _state;

  /// @brief Field _vrCenterAdjust, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__vrCenterAdjust, put = __cordl_internal_set__vrCenterAdjust)) ::UnityW<::GlobalNamespace::VRCenterAdjust> _vrCenterAdjust;

  /// @brief Method CleanUp, addr 0x3b2e518, size 0x108, virtual false, abstract: false, final false
  inline void CleanUp();

  /// @brief Method Configure, addr 0x3b2e370, size 0x1a8, virtual false, abstract: false, final false
  inline void Configure();

  /// @brief Method CreateAutoLevelRecording, addr 0x3b2db18, size 0x158, virtual false, abstract: false, final false
  static inline ::BeatSaber::RecPlay::PlayerPoseFrames CreateAutoLevelRecording(::GlobalNamespace::GameplayCoreSceneSetupData* sceneSetup,
                                                                                ::GlobalNamespace::BeatmapObjectSpawnController* beatmapSpawnerController);

  /// @brief Method CreateRecordingPath, addr 0x3b2d848, size 0x174, virtual false, abstract: false, final false
  static inline ::StringW CreateRecordingPath(::GlobalNamespace::BeatmapKey key);

  /// @brief Method Init, addr 0x3b2d718, size 0x130, virtual false, abstract: false, final false
  inline void Init(::GlobalNamespace::GameplayCoreSceneSetupData* sceneSetup, ::GlobalNamespace::BeatmapObjectSpawnController* beatmapSpawnerController);

  /// @brief Method LateUpdate, addr 0x3b2e648, size 0x10, virtual false, abstract: false, final false
  inline void LateUpdate();

  /// @brief Method LoadLevelRecording, addr 0x3b2d9bc, size 0x15c, virtual false, abstract: false, final false
  static inline ::BeatSaber::RecPlay::PlayerPoseFrames LoadLevelRecording(::StringW path);

  static inline ::GlobalNamespace::RecPlayBehaviour* New_ctor();

  /// @brief Method OnDestroy, addr 0x3b2e65c, size 0x18, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnDisable, addr 0x3b2e658, size 0x4, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method Play, addr 0x3b2dc70, size 0x390, virtual false, abstract: false, final false
  inline void Play();

  /// @brief Method Record, addr 0x3b2e094, size 0xf8, virtual false, abstract: false, final false
  inline void Record();

  /// @brief Method SavePlayerPoseFrames, addr 0x3b2e2a4, size 0xcc, virtual false, abstract: false, final false
  static inline void SavePlayerPoseFrames(::StringW path, ::ByRef<::BeatSaber::RecPlay::PlayerPoseFrames> frames);

  /// @brief Method SaveRecording, addr 0x3b2e220, size 0x84, virtual false, abstract: false, final false
  inline void SaveRecording();

  /// @brief Method Update, addr 0x3b2e620, size 0x28, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method <Play>g__ExtractLocalPose|14_0, addr 0x3b2e000, size 0x94, virtual false, abstract: false, final false
  static inline ::UnityEngine::Pose _Play_g__ExtractLocalPose_14_0(::UnityEngine::Transform* transform);

  /// @brief Method <Record>g__ExtractGlobalPose|15_0, addr 0x3b2e18c, size 0x94, virtual false, abstract: false, final false
  static inline ::UnityEngine::Pose _Record_g__ExtractGlobalPose_15_0(::UnityEngine::Transform* transform);

  /// @brief Method <SavePlayerPoseFrames>g__FileWriteAllText|26_0, addr 0x3b2e674, size 0x34, virtual false, abstract: false, final false
  static inline void _SavePlayerPoseFrames_g__FileWriteAllText_26_0(::StringW path, ::StringW contents);

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

  constexpr ::GlobalNamespace::RecPlayBehaviour_State* const& __cordl_internal_get__state() const;

  constexpr ::GlobalNamespace::RecPlayBehaviour_State*& __cordl_internal_get__state();

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

  constexpr void __cordl_internal_set__state(::GlobalNamespace::RecPlayBehaviour_State* value);

  constexpr void __cordl_internal_set__vrCenterAdjust(::UnityW<::GlobalNamespace::VRCenterAdjust> value);

  /// @brief Method .ctor, addr 0x3b2e6a8, size 0xc0, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5139 };

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
  ::GlobalNamespace::RecPlayBehaviour_State* ____state;

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

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RecPlayBehaviour, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RecPlayBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RecPlayBehaviour*, "", "RecPlayBehaviour");
NEED_NO_BOX(::GlobalNamespace::RecPlayBehaviour_State);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RecPlayBehaviour_State*, "", "RecPlayBehaviour/State");
