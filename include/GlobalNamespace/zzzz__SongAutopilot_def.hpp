#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ZenjectSafeBehaviour_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(SongAutopilot)
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
class FloatSO;
}
namespace GlobalNamespace {
class GameplayCoreSceneSetupData;
}
namespace GlobalNamespace {
class IBeatmapObjectSpawnController;
}
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace GlobalNamespace {
class PlayerTransforms;
}
namespace GlobalNamespace {
class PlayerVRControllersManager;
}
namespace GlobalNamespace {
class Vector3SO;
}
namespace GlobalNamespace {
struct __SongAutopilot__Frame;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Pose;
}
// Forward declare root types
namespace GlobalNamespace {
class SongAutopilot;
}
namespace GlobalNamespace {
struct __SongAutopilot__Frame;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SongAutopilot);
MARK_VAL_T(::GlobalNamespace::__SongAutopilot__Frame);
// Type: ::Frame
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8789))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4032))
// CS Name: ::SongAutopilot::Frame
struct CORDL_TYPE __SongAutopilot__Frame {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x22bb7b0, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(float_t time, ::UnityEngine::Pose pose);

  // Ctor Parameters [CppParam { name: "time", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "pose", ty: "::UnityEngine::Pose", modifiers: "", def_value: None }]
  constexpr __SongAutopilot__Frame(float_t time, ::UnityEngine::Pose pose) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SongAutopilot__Frame();

  /// @brief Field time, offset: 0x0, size: 0x4, def value: None
  float_t time;

  /// @brief Field pose, offset: 0x4, size: 0x1c, def value: None
  ::UnityEngine::Pose pose;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SongAutopilot__Frame, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SongAutopilot__Frame, time) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SongAutopilot__Frame, pose) == 0x4, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::SongAutopilot
// SizeInfo { instance_size: 200, native_size: -1, calculated_instance_size: 200, calculated_native_size: 200, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8987)), TypeDefinitionIndex(TypeDefinitionIndex(8993)), TypeDefinitionIndex(TypeDefinitionIndex(15429))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4033))
// CS Name: ::SongAutopilot*
class CORDL_TYPE SongAutopilot : public ::GlobalNamespace::ZenjectSafeBehaviour {
public:
  // Declarations
  using Frame = ::GlobalNamespace::__SongAutopilot__Frame;

  /// @brief Field _cutAngle, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__cutAngle, put = __cordl_internal_set__cutAngle)) float_t _cutAngle;

  /// @brief Field _cutStartOffset, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__cutStartOffset, put = __cordl_internal_set__cutStartOffset)) float_t _cutStartOffset;

  /// @brief Field _cutEndOffset, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__cutEndOffset, put = __cordl_internal_set__cutEndOffset)) float_t _cutEndOffset;

  /// @brief Field saberYOffset, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_saberYOffset, put = __cordl_internal_set_saberYOffset)) float_t saberYOffset;

  /// @brief Field _controllerPosition, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__controllerPosition, put = __cordl_internal_set__controllerPosition))::UnityW<::GlobalNamespace::Vector3SO> _controllerPosition;

  /// @brief Field _controllerRotation, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__controllerRotation, put = __cordl_internal_set__controllerRotation))::UnityW<::GlobalNamespace::Vector3SO> _controllerRotation;

  /// @brief Field _roomCenter, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__roomCenter, put = __cordl_internal_set__roomCenter))::UnityW<::GlobalNamespace::Vector3SO> _roomCenter;

  /// @brief Field _roomRotation, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__roomRotation, put = __cordl_internal_set__roomRotation))::UnityW<::GlobalNamespace::FloatSO> _roomRotation;

  /// @brief Field _drawHitTimeline, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get__drawHitTimeline, put = __cordl_internal_set__drawHitTimeline)) bool _drawHitTimeline;

  /// @brief Field _drawAheadTime, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get__drawAheadTime, put = __cordl_internal_set__drawAheadTime)) float_t _drawAheadTime;

  /// @brief Field _drawAfterTime, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get__drawAfterTime, put = __cordl_internal_set__drawAfterTime)) float_t _drawAfterTime;

  /// @brief Field _bobFrequency, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get__bobFrequency, put = __cordl_internal_set__bobFrequency)) float_t _bobFrequency;

  /// @brief Field _bobAmplitude, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get__bobAmplitude, put = __cordl_internal_set__bobAmplitude)) float_t _bobAmplitude;

  /// @brief Field _cameraLocation, offset 0x64, size 0xc
  __declspec(property(get = __cordl_internal_get__cameraLocation, put = __cordl_internal_set__cameraLocation))::UnityEngine::Vector3 _cameraLocation;

  /// @brief Field _cameraRotation, offset 0x70, size 0xc
  __declspec(property(get = __cordl_internal_get__cameraRotation, put = __cordl_internal_set__cameraRotation))::UnityEngine::Vector3 _cameraRotation;

  /// @brief Field _cameraMovementRange, offset 0x7c, size 0x8
  __declspec(property(get = __cordl_internal_get__cameraMovementRange, put = __cordl_internal_set__cameraMovementRange))::UnityEngine::Vector2 _cameraMovementRange;

  /// @brief Field _cameraRotationRange, offset 0x84, size 0x8
  __declspec(property(get = __cordl_internal_get__cameraRotationRange, put = __cordl_internal_set__cameraRotationRange))::UnityEngine::Vector2 _cameraRotationRange;

  /// @brief Field _sceneSetupData, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__sceneSetupData, put = __cordl_internal_set__sceneSetupData))::GlobalNamespace::GameplayCoreSceneSetupData* _sceneSetupData;

  /// @brief Field _playerVRControllersManager, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__playerVRControllersManager,
                      put = __cordl_internal_set__playerVRControllersManager))::UnityW<::GlobalNamespace::PlayerVRControllersManager> _playerVRControllersManager;

  /// @brief Field _beatmapObjectSpawnController, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapObjectSpawnController,
                      put = __cordl_internal_set__beatmapObjectSpawnController))::GlobalNamespace::IBeatmapObjectSpawnController* _beatmapObjectSpawnController;

  /// @brief Field _beatmapCallbacksController, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCallbacksController,
                      put = __cordl_internal_set__beatmapCallbacksController))::GlobalNamespace::BeatmapCallbacksController* _beatmapCallbacksController;

  /// @brief Field _vrPlatformHelper, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__vrPlatformHelper, put = __cordl_internal_set__vrPlatformHelper))::GlobalNamespace::IVRPlatformHelper* _vrPlatformHelper;

  /// @brief Field _hmdCamera, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__hmdCamera, put = __cordl_internal_set__hmdCamera))::UnityW<::UnityEngine::Camera> _hmdCamera;

  /// @brief Field _playerTransforms, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__playerTransforms, put = __cordl_internal_set__playerTransforms))::UnityW<::GlobalNamespace::PlayerTransforms> _playerTransforms;

  constexpr float_t& __cordl_internal_get__cutAngle();

  constexpr float_t const& __cordl_internal_get__cutAngle() const;

  constexpr void __cordl_internal_set__cutAngle(float_t value);

  constexpr float_t& __cordl_internal_get__cutStartOffset();

  constexpr float_t const& __cordl_internal_get__cutStartOffset() const;

  constexpr void __cordl_internal_set__cutStartOffset(float_t value);

  constexpr float_t& __cordl_internal_get__cutEndOffset();

  constexpr float_t const& __cordl_internal_get__cutEndOffset() const;

  constexpr void __cordl_internal_set__cutEndOffset(float_t value);

  constexpr float_t& __cordl_internal_get_saberYOffset();

  constexpr float_t const& __cordl_internal_get_saberYOffset() const;

  constexpr void __cordl_internal_set_saberYOffset(float_t value);

  constexpr ::UnityW<::GlobalNamespace::Vector3SO>& __cordl_internal_get__controllerPosition();

  constexpr ::UnityW<::GlobalNamespace::Vector3SO> const& __cordl_internal_get__controllerPosition() const;

  constexpr void __cordl_internal_set__controllerPosition(::UnityW<::GlobalNamespace::Vector3SO> value);

  constexpr ::UnityW<::GlobalNamespace::Vector3SO>& __cordl_internal_get__controllerRotation();

  constexpr ::UnityW<::GlobalNamespace::Vector3SO> const& __cordl_internal_get__controllerRotation() const;

  constexpr void __cordl_internal_set__controllerRotation(::UnityW<::GlobalNamespace::Vector3SO> value);

  constexpr ::UnityW<::GlobalNamespace::Vector3SO>& __cordl_internal_get__roomCenter();

  constexpr ::UnityW<::GlobalNamespace::Vector3SO> const& __cordl_internal_get__roomCenter() const;

  constexpr void __cordl_internal_set__roomCenter(::UnityW<::GlobalNamespace::Vector3SO> value);

  constexpr ::UnityW<::GlobalNamespace::FloatSO>& __cordl_internal_get__roomRotation();

  constexpr ::UnityW<::GlobalNamespace::FloatSO> const& __cordl_internal_get__roomRotation() const;

  constexpr void __cordl_internal_set__roomRotation(::UnityW<::GlobalNamespace::FloatSO> value);

  constexpr bool& __cordl_internal_get__drawHitTimeline();

  constexpr bool const& __cordl_internal_get__drawHitTimeline() const;

  constexpr void __cordl_internal_set__drawHitTimeline(bool value);

  constexpr float_t& __cordl_internal_get__drawAheadTime();

  constexpr float_t const& __cordl_internal_get__drawAheadTime() const;

  constexpr void __cordl_internal_set__drawAheadTime(float_t value);

  constexpr float_t& __cordl_internal_get__drawAfterTime();

  constexpr float_t const& __cordl_internal_get__drawAfterTime() const;

  constexpr void __cordl_internal_set__drawAfterTime(float_t value);

  constexpr float_t& __cordl_internal_get__bobFrequency();

  constexpr float_t const& __cordl_internal_get__bobFrequency() const;

  constexpr void __cordl_internal_set__bobFrequency(float_t value);

  constexpr float_t& __cordl_internal_get__bobAmplitude();

  constexpr float_t const& __cordl_internal_get__bobAmplitude() const;

  constexpr void __cordl_internal_set__bobAmplitude(float_t value);

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__cameraLocation();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__cameraLocation() const;

  constexpr void __cordl_internal_set__cameraLocation(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__cameraRotation();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__cameraRotation() const;

  constexpr void __cordl_internal_set__cameraRotation(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector2& __cordl_internal_get__cameraMovementRange();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__cameraMovementRange() const;

  constexpr void __cordl_internal_set__cameraMovementRange(::UnityEngine::Vector2 value);

  constexpr ::UnityEngine::Vector2& __cordl_internal_get__cameraRotationRange();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__cameraRotationRange() const;

  constexpr void __cordl_internal_set__cameraRotationRange(::UnityEngine::Vector2 value);

  constexpr ::GlobalNamespace::GameplayCoreSceneSetupData*& __cordl_internal_get__sceneSetupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayCoreSceneSetupData*> const& __cordl_internal_get__sceneSetupData() const;

  constexpr void __cordl_internal_set__sceneSetupData(::GlobalNamespace::GameplayCoreSceneSetupData* value);

  constexpr ::UnityW<::GlobalNamespace::PlayerVRControllersManager>& __cordl_internal_get__playerVRControllersManager();

  constexpr ::UnityW<::GlobalNamespace::PlayerVRControllersManager> const& __cordl_internal_get__playerVRControllersManager() const;

  constexpr void __cordl_internal_set__playerVRControllersManager(::UnityW<::GlobalNamespace::PlayerVRControllersManager> value);

  constexpr ::GlobalNamespace::IBeatmapObjectSpawnController*& __cordl_internal_get__beatmapObjectSpawnController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapObjectSpawnController*> const& __cordl_internal_get__beatmapObjectSpawnController() const;

  constexpr void __cordl_internal_set__beatmapObjectSpawnController(::GlobalNamespace::IBeatmapObjectSpawnController* value);

  constexpr ::GlobalNamespace::BeatmapCallbacksController*& __cordl_internal_get__beatmapCallbacksController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> const& __cordl_internal_get__beatmapCallbacksController() const;

  constexpr void __cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value);

  constexpr ::GlobalNamespace::IVRPlatformHelper*& __cordl_internal_get__vrPlatformHelper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IVRPlatformHelper*> const& __cordl_internal_get__vrPlatformHelper() const;

  constexpr void __cordl_internal_set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper* value);

  constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get__hmdCamera();

  constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get__hmdCamera() const;

  constexpr void __cordl_internal_set__hmdCamera(::UnityW<::UnityEngine::Camera> value);

  constexpr ::UnityW<::GlobalNamespace::PlayerTransforms>& __cordl_internal_get__playerTransforms();

  constexpr ::UnityW<::GlobalNamespace::PlayerTransforms> const& __cordl_internal_get__playerTransforms() const;

  constexpr void __cordl_internal_set__playerTransforms(::UnityW<::GlobalNamespace::PlayerTransforms> value);

  static inline ::GlobalNamespace::SongAutopilot* New_ctor();

  /// @brief Method .ctor, addr 0x22bb770, size 0x40, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SongAutopilot", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SongAutopilot(SongAutopilot&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SongAutopilot", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SongAutopilot(SongAutopilot const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SongAutopilot();

public:
  /// @brief Field _cutAngle, offset: 0x1c, size: 0x4, def value: None
  float_t ____cutAngle;

  /// @brief Field _cutStartOffset, offset: 0x20, size: 0x4, def value: None
  float_t ____cutStartOffset;

  /// @brief Field _cutEndOffset, offset: 0x24, size: 0x4, def value: None
  float_t ____cutEndOffset;

  /// @brief Field saberYOffset, offset: 0x28, size: 0x4, def value: None
  float_t ___saberYOffset;

  /// @brief Field _controllerPosition, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Vector3SO> ____controllerPosition;

  /// @brief Field _controllerRotation, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Vector3SO> ____controllerRotation;

  /// @brief Field _roomCenter, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Vector3SO> ____roomCenter;

  /// @brief Field _roomRotation, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::FloatSO> ____roomRotation;

  /// @brief Field _drawHitTimeline, offset: 0x50, size: 0x1, def value: None
  bool ____drawHitTimeline;

  /// @brief Field _drawAheadTime, offset: 0x54, size: 0x4, def value: None
  float_t ____drawAheadTime;

  /// @brief Field _drawAfterTime, offset: 0x58, size: 0x4, def value: None
  float_t ____drawAfterTime;

  /// @brief Field _bobFrequency, offset: 0x5c, size: 0x4, def value: None
  float_t ____bobFrequency;

  /// @brief Field _bobAmplitude, offset: 0x60, size: 0x4, def value: None
  float_t ____bobAmplitude;

  /// @brief Field _cameraLocation, offset: 0x64, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____cameraLocation;

  /// @brief Field _cameraRotation, offset: 0x70, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____cameraRotation;

  /// @brief Field _cameraMovementRange, offset: 0x7c, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____cameraMovementRange;

  /// @brief Field _cameraRotationRange, offset: 0x84, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____cameraRotationRange;

  /// @brief Field _sceneSetupData, offset: 0x90, size: 0x8, def value: None
  ::GlobalNamespace::GameplayCoreSceneSetupData* ____sceneSetupData;

  /// @brief Field _playerVRControllersManager, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerVRControllersManager> ____playerVRControllersManager;

  /// @brief Field _beatmapObjectSpawnController, offset: 0xa0, size: 0x8, def value: None
  ::GlobalNamespace::IBeatmapObjectSpawnController* ____beatmapObjectSpawnController;

  /// @brief Field _beatmapCallbacksController, offset: 0xa8, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCallbacksController* ____beatmapCallbacksController;

  /// @brief Field _vrPlatformHelper, offset: 0xb0, size: 0x8, def value: None
  ::GlobalNamespace::IVRPlatformHelper* ____vrPlatformHelper;

  /// @brief Field _hmdCamera, offset: 0xb8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> ____hmdCamera;

  /// @brief Field _playerTransforms, offset: 0xc0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerTransforms> ____playerTransforms;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SongAutopilot, 0xc8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SongAutopilot, ____cutAngle) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongAutopilot, ____cutStartOffset) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongAutopilot, ____cutEndOffset) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongAutopilot, ___saberYOffset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongAutopilot, ____controllerPosition) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongAutopilot, ____controllerRotation) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongAutopilot, ____roomCenter) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongAutopilot, ____roomRotation) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongAutopilot, ____drawHitTimeline) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongAutopilot, ____drawAheadTime) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongAutopilot, ____drawAfterTime) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongAutopilot, ____bobFrequency) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongAutopilot, ____bobAmplitude) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongAutopilot, ____cameraLocation) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongAutopilot, ____cameraRotation) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongAutopilot, ____cameraMovementRange) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongAutopilot, ____cameraRotationRange) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongAutopilot, ____sceneSetupData) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongAutopilot, ____playerVRControllersManager) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongAutopilot, ____beatmapObjectSpawnController) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongAutopilot, ____beatmapCallbacksController) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongAutopilot, ____vrPlatformHelper) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongAutopilot, ____hmdCamera) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongAutopilot, ____playerTransforms) == 0xc0, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SongAutopilot);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SongAutopilot*, "", "SongAutopilot");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SongAutopilot__Frame, "", "SongAutopilot/Frame");
