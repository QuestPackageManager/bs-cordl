#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__StereoTargetEyeMask_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FirstPersonFlyingController)
namespace GlobalNamespace {
class MouseLook;
}
namespace GlobalNamespace {
class VRCenterAdjust;
}
namespace GlobalNamespace {
class VRController;
}
namespace UnityEngine::SpatialTracking {
class TrackedPoseDriver;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class FirstPersonFlyingController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FirstPersonFlyingController);
// Type: ::FirstPersonFlyingController
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::FirstPersonFlyingController*
class CORDL_TYPE FirstPersonFlyingController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _camera, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__camera, put = __cordl_internal_set__camera))::UnityW<::UnityEngine::Camera> _camera;

  /// @brief Field _cameraFov, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__cameraFov, put = __cordl_internal_set__cameraFov)) float_t _cameraFov;

  /// @brief Field _cameraTransform, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__cameraTransform, put = __cordl_internal_set__cameraTransform))::UnityW<::UnityEngine::Transform> _cameraTransform;

  /// @brief Field _centerAdjust, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__centerAdjust, put = __cordl_internal_set__centerAdjust))::UnityW<::GlobalNamespace::VRCenterAdjust> _centerAdjust;

  /// @brief Field _controller0, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__controller0, put = __cordl_internal_set__controller0))::UnityW<::GlobalNamespace::VRController> _controller0;

  /// @brief Field _controller1, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__controller1, put = __cordl_internal_set__controller1))::UnityW<::GlobalNamespace::VRController> _controller1;

  /// @brief Field _controllerModels, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__controllerModels,
                      put = __cordl_internal_set__controllerModels))::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> _controllerModels;

  /// @brief Field _mouseLook, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__mouseLook, put = __cordl_internal_set__mouseLook))::GlobalNamespace::MouseLook* _mouseLook;

  /// @brief Field _moveSensitivity, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__moveSensitivity, put = __cordl_internal_set__moveSensitivity)) float_t _moveSensitivity;

  /// @brief Field _originalCameraFov, offset 0x74, size 0x4
  __declspec(property(get = __cordl_internal_get__originalCameraFov, put = __cordl_internal_set__originalCameraFov)) float_t _originalCameraFov;

  /// @brief Field _originalStereoTargetEyeMask, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get__originalStereoTargetEyeMask, put = __cordl_internal_set__originalStereoTargetEyeMask))::UnityEngine::StereoTargetEyeMask _originalStereoTargetEyeMask;

  /// @brief Field _trackedPoseDriver, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__trackedPoseDriver, put = __cordl_internal_set__trackedPoseDriver))::UnityW<::UnityEngine::SpatialTracking::TrackedPoseDriver> _trackedPoseDriver;

  /// @brief Field _transform, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__transform, put = __cordl_internal_set__transform))::UnityW<::UnityEngine::Transform> _transform;

  /// @brief Method Inject, addr 0x245025c, size 0x128, virtual false, abstract: false, final false
  inline void Inject(::UnityEngine::Camera* camera, ::GlobalNamespace::VRCenterAdjust* centerAdjust, ::GlobalNamespace::VRController* controller0, ::GlobalNamespace::VRController* controller1,
                     ::UnityEngine::SpatialTracking::TrackedPoseDriver* trackedPoseDriver);

  static inline ::GlobalNamespace::FirstPersonFlyingController* New_ctor();

  /// @brief Method OnDisable, addr 0x244f8fc, size 0x25c, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x244f5ec, size 0x270, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method Update, addr 0x244fb58, size 0x3a8, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get__camera() const;

  constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get__camera();

  constexpr float_t const& __cordl_internal_get__cameraFov() const;

  constexpr float_t& __cordl_internal_get__cameraFov();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__cameraTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__cameraTransform();

  constexpr ::UnityW<::GlobalNamespace::VRCenterAdjust> const& __cordl_internal_get__centerAdjust() const;

  constexpr ::UnityW<::GlobalNamespace::VRCenterAdjust>& __cordl_internal_get__centerAdjust();

  constexpr ::UnityW<::GlobalNamespace::VRController> const& __cordl_internal_get__controller0() const;

  constexpr ::UnityW<::GlobalNamespace::VRController>& __cordl_internal_get__controller0();

  constexpr ::UnityW<::GlobalNamespace::VRController> const& __cordl_internal_get__controller1() const;

  constexpr ::UnityW<::GlobalNamespace::VRController>& __cordl_internal_get__controller1();

  constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> const& __cordl_internal_get__controllerModels() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*>& __cordl_internal_get__controllerModels();

  constexpr ::GlobalNamespace::MouseLook*& __cordl_internal_get__mouseLook();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MouseLook*> const& __cordl_internal_get__mouseLook() const;

  constexpr float_t const& __cordl_internal_get__moveSensitivity() const;

  constexpr float_t& __cordl_internal_get__moveSensitivity();

  constexpr float_t const& __cordl_internal_get__originalCameraFov() const;

  constexpr float_t& __cordl_internal_get__originalCameraFov();

  constexpr ::UnityEngine::StereoTargetEyeMask const& __cordl_internal_get__originalStereoTargetEyeMask() const;

  constexpr ::UnityEngine::StereoTargetEyeMask& __cordl_internal_get__originalStereoTargetEyeMask();

  constexpr ::UnityW<::UnityEngine::SpatialTracking::TrackedPoseDriver> const& __cordl_internal_get__trackedPoseDriver() const;

  constexpr ::UnityW<::UnityEngine::SpatialTracking::TrackedPoseDriver>& __cordl_internal_get__trackedPoseDriver();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__transform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__transform();

  constexpr void __cordl_internal_set__camera(::UnityW<::UnityEngine::Camera> value);

  constexpr void __cordl_internal_set__cameraFov(float_t value);

  constexpr void __cordl_internal_set__cameraTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__centerAdjust(::UnityW<::GlobalNamespace::VRCenterAdjust> value);

  constexpr void __cordl_internal_set__controller0(::UnityW<::GlobalNamespace::VRController> value);

  constexpr void __cordl_internal_set__controller1(::UnityW<::GlobalNamespace::VRController> value);

  constexpr void __cordl_internal_set__controllerModels(::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> value);

  constexpr void __cordl_internal_set__mouseLook(::GlobalNamespace::MouseLook* value);

  constexpr void __cordl_internal_set__moveSensitivity(float_t value);

  constexpr void __cordl_internal_set__originalCameraFov(float_t value);

  constexpr void __cordl_internal_set__originalStereoTargetEyeMask(::UnityEngine::StereoTargetEyeMask value);

  constexpr void __cordl_internal_set__trackedPoseDriver(::UnityW<::UnityEngine::SpatialTracking::TrackedPoseDriver> value);

  constexpr void __cordl_internal_set__transform(::UnityW<::UnityEngine::Transform> value);

  /// @brief Method .ctor, addr 0x2450384, size 0xa8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FirstPersonFlyingController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FirstPersonFlyingController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FirstPersonFlyingController(FirstPersonFlyingController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FirstPersonFlyingController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FirstPersonFlyingController(FirstPersonFlyingController const&) = delete;

  /// @brief Field _moveSensitivity, offset: 0x18, size: 0x4, def value: None
  float_t ____moveSensitivity;

  /// @brief Field _transform, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____transform;

  /// @brief Field _camera, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> ____camera;

  /// @brief Field _cameraFov, offset: 0x30, size: 0x4, def value: None
  float_t ____cameraFov;

  /// @brief Field _centerAdjust, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::VRCenterAdjust> ____centerAdjust;

  /// @brief Field _controller0, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::VRController> ____controller0;

  /// @brief Field _controller1, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::VRController> ____controller1;

  /// @brief Field _controllerModels, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> ____controllerModels;

  /// @brief Field _mouseLook, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::MouseLook* ____mouseLook;

  /// @brief Field _trackedPoseDriver, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::SpatialTracking::TrackedPoseDriver> ____trackedPoseDriver;

  /// @brief Field _cameraTransform, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____cameraTransform;

  /// @brief Field _originalStereoTargetEyeMask, offset: 0x70, size: 0x4, def value: None
  ::UnityEngine::StereoTargetEyeMask ____originalStereoTargetEyeMask;

  /// @brief Field _originalCameraFov, offset: 0x74, size: 0x4, def value: None
  float_t ____originalCameraFov;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FirstPersonFlyingController, 0x78>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::FirstPersonFlyingController, ____moveSensitivity) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FirstPersonFlyingController, ____transform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FirstPersonFlyingController, ____camera) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FirstPersonFlyingController, ____cameraFov) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FirstPersonFlyingController, ____centerAdjust) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FirstPersonFlyingController, ____controller0) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FirstPersonFlyingController, ____controller1) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FirstPersonFlyingController, ____controllerModels) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FirstPersonFlyingController, ____mouseLook) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FirstPersonFlyingController, ____trackedPoseDriver) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FirstPersonFlyingController, ____cameraTransform) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FirstPersonFlyingController, ____originalStereoTargetEyeMask) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FirstPersonFlyingController, ____originalCameraFov) == 0x74, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FirstPersonFlyingController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FirstPersonFlyingController*, "", "FirstPersonFlyingController");
