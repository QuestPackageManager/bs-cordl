#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRComposition.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPose_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OVRComposition)
namespace GlobalNamespace {
class OVRCameraRig;
}
namespace GlobalNamespace {
struct OVRManager_CompositionMethod;
}
namespace GlobalNamespace {
struct OVRManager_TrackingOrigin;
}
namespace GlobalNamespace {
class OVRMixedRealityCaptureConfiguration;
}
namespace GlobalNamespace {
struct OVRPlugin_CameraExtrinsics;
}
namespace GlobalNamespace {
struct OVRPose;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRComposition;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRComposition);
// Dependencies OVRPose, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRComposition
class CORDL_TYPE OVRComposition : public ::System::Object {
public:
  // Declarations
  /// @brief Field cameraInTrackingSpace, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_cameraInTrackingSpace, put = __cordl_internal_set_cameraInTrackingSpace)) bool cameraInTrackingSpace;

  /// @brief Field cameraRig, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_cameraRig, put = __cordl_internal_set_cameraRig)) ::UnityW<::GlobalNamespace::OVRCameraRig> cameraRig;

  /// @brief Field lastAttachedNodePose, offset 0x24, size 0x1c
  __declspec(property(get = __cordl_internal_get_lastAttachedNodePose, put = __cordl_internal_set_lastAttachedNodePose)) ::GlobalNamespace::OVRPose lastAttachedNodePose;

  /// @brief Field usingLastAttachedNodePose, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_usingLastAttachedNodePose, put = __cordl_internal_set_usingLastAttachedNodePose)) bool usingLastAttachedNodePose;

  /// @brief Method Cleanup, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Cleanup();

  /// @brief Method CompositionMethod, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::GlobalNamespace::OVRManager_CompositionMethod CompositionMethod();

  /// @brief Method ComputeCameraTrackingSpacePose, addr 0x5c454c8, size 0x2ac, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRPose ComputeCameraTrackingSpacePose(::GlobalNamespace::OVRPlugin_CameraExtrinsics extrinsics);

  /// @brief Method ComputeCameraWorldSpacePose, addr 0x5c4545c, size 0x6c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRPose ComputeCameraWorldSpacePose(::GlobalNamespace::OVRPlugin_CameraExtrinsics extrinsics, ::UnityEngine::Camera* mainCamera);

  static inline ::GlobalNamespace::OVRComposition* New_ctor(::UnityEngine::GameObject* parentObject, ::UnityEngine::Camera* mainCamera,
                                                            ::GlobalNamespace::OVRMixedRealityCaptureConfiguration* configuration);

  /// @brief Method RecenterPose, addr 0x5c45458, size 0x4, virtual true, abstract: false, final false
  inline void RecenterPose();

  /// @brief Method RefreshCameraRig, addr 0x5c45284, size 0x1d4, virtual false, abstract: false, final false
  inline void RefreshCameraRig(::UnityEngine::GameObject* parentObject, ::UnityEngine::Camera* mainCamera);

  /// @brief Method Update, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Update(::UnityEngine::GameObject* gameObject, ::UnityEngine::Camera* mainCamera, ::GlobalNamespace::OVRMixedRealityCaptureConfiguration* configuration,
                     ::GlobalNamespace::OVRManager_TrackingOrigin trackingOrigin);

  constexpr bool const& __cordl_internal_get_cameraInTrackingSpace() const;

  constexpr bool& __cordl_internal_get_cameraInTrackingSpace();

  constexpr ::UnityW<::GlobalNamespace::OVRCameraRig> const& __cordl_internal_get_cameraRig() const;

  constexpr ::UnityW<::GlobalNamespace::OVRCameraRig>& __cordl_internal_get_cameraRig();

  constexpr ::GlobalNamespace::OVRPose const& __cordl_internal_get_lastAttachedNodePose() const;

  constexpr ::GlobalNamespace::OVRPose& __cordl_internal_get_lastAttachedNodePose();

  constexpr bool const& __cordl_internal_get_usingLastAttachedNodePose() const;

  constexpr bool& __cordl_internal_get_usingLastAttachedNodePose();

  constexpr void __cordl_internal_set_cameraInTrackingSpace(bool value);

  constexpr void __cordl_internal_set_cameraRig(::UnityW<::GlobalNamespace::OVRCameraRig> value);

  constexpr void __cordl_internal_set_lastAttachedNodePose(::GlobalNamespace::OVRPose value);

  constexpr void __cordl_internal_set_usingLastAttachedNodePose(bool value);

  /// @brief Method .ctor, addr 0x5c45280, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::GameObject* parentObject, ::UnityEngine::Camera* mainCamera, ::GlobalNamespace::OVRMixedRealityCaptureConfiguration* configuration);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRComposition();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRComposition", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRComposition(OVRComposition&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRComposition", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRComposition(OVRComposition const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7025 };

  /// @brief Field cameraInTrackingSpace, offset: 0x10, size: 0x1, def value: None
  bool ___cameraInTrackingSpace;

  /// @brief Field cameraRig, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRCameraRig> ___cameraRig;

  /// @brief Field usingLastAttachedNodePose, offset: 0x20, size: 0x1, def value: None
  bool ___usingLastAttachedNodePose;

  /// @brief Field lastAttachedNodePose, offset: 0x24, size: 0x1c, def value: None
  ::GlobalNamespace::OVRPose ___lastAttachedNodePose;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRComposition, ___cameraInTrackingSpace) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRComposition, ___cameraRig) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRComposition, ___usingLastAttachedNodePose) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRComposition, ___lastAttachedNodePose) == 0x24, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRComposition, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRComposition);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRComposition*, "", "OVRComposition");
