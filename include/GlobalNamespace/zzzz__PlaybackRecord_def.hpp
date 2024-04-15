#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/RecPlay/zzzz__PoseNoise_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(PlaybackRecord)
namespace BeatSaber::RecPlay {
class PlayerPoseSampler;
}
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace GlobalNamespace {
class LevelRecording;
}
namespace GlobalNamespace {
class MainSettingsModelSO;
}
namespace GlobalNamespace {
class PlayerTransforms;
}
namespace GlobalNamespace {
class PlayerVRControllersManager;
}
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace GlobalNamespace {
class PlaybackRecord;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlaybackRecord);
// Type: ::PlaybackRecord
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlaybackRecord*
class CORDL_TYPE PlaybackRecord : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _beatmapCallbacksController, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCallbacksController,
                      put = __cordl_internal_set__beatmapCallbacksController))::GlobalNamespace::BeatmapCallbacksController* _beatmapCallbacksController;

  /// @brief Field _hmdCamera, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__hmdCamera, put = __cordl_internal_set__hmdCamera))::UnityW<::UnityEngine::Camera> _hmdCamera;

  /// @brief Field _playback, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__playback, put = __cordl_internal_set__playback))::BeatSaber::RecPlay::PlayerPoseSampler* _playback;

  /// @brief Field _playerControllers, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__playerControllers, put = __cordl_internal_set__playerControllers))::UnityW<::GlobalNamespace::PlayerVRControllersManager> _playerControllers;

  /// @brief Field _playerTransforms, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__playerTransforms, put = __cordl_internal_set__playerTransforms))::UnityW<::GlobalNamespace::PlayerTransforms> _playerTransforms;

  /// @brief Field headNoise, offset 0x18, size 0xc
  __declspec(property(get = __cordl_internal_get_headNoise, put = __cordl_internal_set_headNoise))::BeatSaber::RecPlay::PoseNoise headNoise;

  /// @brief Method Disable, addr 0x2597910, size 0x138, virtual false, abstract: false, final false
  inline void Disable();

  /// @brief Method Enable, addr 0x2597790, size 0x180, virtual false, abstract: false, final false
  inline void Enable();

  /// @brief Method Initialize, addr 0x25971a4, size 0x80, virtual false, abstract: false, final false
  inline void Initialize(::GlobalNamespace::MainSettingsModelSO* settings, ::GlobalNamespace::IVRPlatformHelper* vrPlatformHelper, ::GlobalNamespace::LevelRecording* recording);

  static inline ::GlobalNamespace::PlaybackRecord* New_ctor();

  /// @brief Method OnDisable, addr 0x2597ba0, size 0x4, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x2597b9c, size 0x4, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method Refresh, addr 0x2597a48, size 0x150, virtual false, abstract: false, final false
  inline void Refresh();

  /// @brief Method Update, addr 0x2597b98, size 0x4, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::GlobalNamespace::BeatmapCallbacksController*& __cordl_internal_get__beatmapCallbacksController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> const& __cordl_internal_get__beatmapCallbacksController() const;

  constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get__hmdCamera() const;

  constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get__hmdCamera();

  constexpr ::BeatSaber::RecPlay::PlayerPoseSampler*& __cordl_internal_get__playback();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::RecPlay::PlayerPoseSampler*> const& __cordl_internal_get__playback() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerVRControllersManager> const& __cordl_internal_get__playerControllers() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerVRControllersManager>& __cordl_internal_get__playerControllers();

  constexpr ::UnityW<::GlobalNamespace::PlayerTransforms> const& __cordl_internal_get__playerTransforms() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerTransforms>& __cordl_internal_get__playerTransforms();

  constexpr ::BeatSaber::RecPlay::PoseNoise const& __cordl_internal_get_headNoise() const;

  constexpr ::BeatSaber::RecPlay::PoseNoise& __cordl_internal_get_headNoise();

  constexpr void __cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value);

  constexpr void __cordl_internal_set__hmdCamera(::UnityW<::UnityEngine::Camera> value);

  constexpr void __cordl_internal_set__playback(::BeatSaber::RecPlay::PlayerPoseSampler* value);

  constexpr void __cordl_internal_set__playerControllers(::UnityW<::GlobalNamespace::PlayerVRControllersManager> value);

  constexpr void __cordl_internal_set__playerTransforms(::UnityW<::GlobalNamespace::PlayerTransforms> value);

  constexpr void __cordl_internal_set_headNoise(::BeatSaber::RecPlay::PoseNoise value);

  /// @brief Method .ctor, addr 0x2597ba4, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlaybackRecord();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlaybackRecord", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlaybackRecord(PlaybackRecord&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlaybackRecord", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlaybackRecord(PlaybackRecord const&) = delete;

  /// @brief Field headNoise, offset: 0x18, size: 0xc, def value: None
  ::BeatSaber::RecPlay::PoseNoise ___headNoise;

  /// @brief Field _playback, offset: 0x28, size: 0x8, def value: None
  ::BeatSaber::RecPlay::PlayerPoseSampler* ____playback;

  /// @brief Field _beatmapCallbacksController, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCallbacksController* ____beatmapCallbacksController;

  /// @brief Field _playerTransforms, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerTransforms> ____playerTransforms;

  /// @brief Field _playerControllers, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerVRControllersManager> ____playerControllers;

  /// @brief Field _hmdCamera, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> ____hmdCamera;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlaybackRecord, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PlaybackRecord, ___headNoise) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlaybackRecord, ____playback) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlaybackRecord, ____beatmapCallbacksController) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlaybackRecord, ____playerTransforms) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlaybackRecord, ____playerControllers) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlaybackRecord, ____hmdCamera) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlaybackRecord);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlaybackRecord*, "", "PlaybackRecord");
