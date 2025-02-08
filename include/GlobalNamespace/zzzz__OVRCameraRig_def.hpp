#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRCameraRig.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(OVRCameraRig)
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRCameraRig;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRCameraRig);
// Dependencies UnityEngine.Matrix4x4, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRCameraRig
class CORDL_TYPE OVRCameraRig : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field TrackingSpaceChanged, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_TrackingSpaceChanged, put = __cordl_internal_set_TrackingSpaceChanged)) ::System::Action_1<::UnityW<::UnityEngine::Transform>>* TrackingSpaceChanged;

  /// @brief Field UpdatedAnchors, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_UpdatedAnchors, put = __cordl_internal_set_UpdatedAnchors)) ::System::Action_1<::UnityW<::GlobalNamespace::OVRCameraRig>>* UpdatedAnchors;

  /// @brief Field <centerEyeAnchor>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__centerEyeAnchor_k__BackingField, put = __cordl_internal_set__centerEyeAnchor_k__BackingField)) ::UnityW<::UnityEngine::Transform>
      _centerEyeAnchor_k__BackingField;

  /// @brief Field _centerEyeCamera, offset 0x128, size 0x8
  __declspec(property(get = __cordl_internal_get__centerEyeCamera, put = __cordl_internal_set__centerEyeCamera)) ::UnityW<::UnityEngine::Camera> _centerEyeCamera;

  /// @brief Field <leftControllerAnchor>k__BackingField, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__leftControllerAnchor_k__BackingField, put = __cordl_internal_set__leftControllerAnchor_k__BackingField)) ::UnityW<::UnityEngine::Transform>
      _leftControllerAnchor_k__BackingField;

  /// @brief Field <leftControllerInHandAnchor>k__BackingField, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__leftControllerInHandAnchor_k__BackingField,
                      put = __cordl_internal_set__leftControllerInHandAnchor_k__BackingField)) ::UnityW<::UnityEngine::Transform>
      _leftControllerInHandAnchor_k__BackingField;

  /// @brief Field <leftEyeAnchor>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__leftEyeAnchor_k__BackingField, put = __cordl_internal_set__leftEyeAnchor_k__BackingField)) ::UnityW<::UnityEngine::Transform>
      _leftEyeAnchor_k__BackingField;

  /// @brief Field _leftEyeCamera, offset 0x130, size 0x8
  __declspec(property(get = __cordl_internal_get__leftEyeCamera, put = __cordl_internal_set__leftEyeCamera)) ::UnityW<::UnityEngine::Camera> _leftEyeCamera;

  /// @brief Field <leftHandAnchorDetached>k__BackingField, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__leftHandAnchorDetached_k__BackingField, put = __cordl_internal_set__leftHandAnchorDetached_k__BackingField)) ::UnityW<::UnityEngine::Transform>
      _leftHandAnchorDetached_k__BackingField;

  /// @brief Field <leftHandAnchor>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__leftHandAnchor_k__BackingField, put = __cordl_internal_set__leftHandAnchor_k__BackingField)) ::UnityW<::UnityEngine::Transform>
      _leftHandAnchor_k__BackingField;

  /// @brief Field <leftHandOnControllerAnchor>k__BackingField, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__leftHandOnControllerAnchor_k__BackingField,
                      put = __cordl_internal_set__leftHandOnControllerAnchor_k__BackingField)) ::UnityW<::UnityEngine::Transform>
      _leftHandOnControllerAnchor_k__BackingField;

  /// @brief Field _previousTrackingSpaceTransform, offset 0x140, size 0x40
  __declspec(property(get = __cordl_internal_get__previousTrackingSpaceTransform, put = __cordl_internal_set__previousTrackingSpaceTransform)) ::UnityEngine::Matrix4x4 _previousTrackingSpaceTransform;

  /// @brief Field <rightControllerAnchor>k__BackingField, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__rightControllerAnchor_k__BackingField, put = __cordl_internal_set__rightControllerAnchor_k__BackingField)) ::UnityW<::UnityEngine::Transform>
      _rightControllerAnchor_k__BackingField;

  /// @brief Field <rightControllerInHandAnchor>k__BackingField, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__rightControllerInHandAnchor_k__BackingField,
                      put = __cordl_internal_set__rightControllerInHandAnchor_k__BackingField)) ::UnityW<::UnityEngine::Transform>
      _rightControllerInHandAnchor_k__BackingField;

  /// @brief Field <rightEyeAnchor>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__rightEyeAnchor_k__BackingField, put = __cordl_internal_set__rightEyeAnchor_k__BackingField)) ::UnityW<::UnityEngine::Transform>
      _rightEyeAnchor_k__BackingField;

  /// @brief Field _rightEyeCamera, offset 0x138, size 0x8
  __declspec(property(get = __cordl_internal_get__rightEyeCamera, put = __cordl_internal_set__rightEyeCamera)) ::UnityW<::UnityEngine::Camera> _rightEyeCamera;

  /// @brief Field <rightHandAnchorDetached>k__BackingField, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__rightHandAnchorDetached_k__BackingField, put = __cordl_internal_set__rightHandAnchorDetached_k__BackingField)) ::UnityW<::UnityEngine::Transform>
      _rightHandAnchorDetached_k__BackingField;

  /// @brief Field <rightHandAnchor>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__rightHandAnchor_k__BackingField, put = __cordl_internal_set__rightHandAnchor_k__BackingField)) ::UnityW<::UnityEngine::Transform>
      _rightHandAnchor_k__BackingField;

  /// @brief Field <rightHandOnControllerAnchor>k__BackingField, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__rightHandOnControllerAnchor_k__BackingField,
                      put = __cordl_internal_set__rightHandOnControllerAnchor_k__BackingField)) ::UnityW<::UnityEngine::Transform>
      _rightHandOnControllerAnchor_k__BackingField;

  /// @brief Field _skipUpdate, offset 0xab, size 0x1
  __declspec(property(get = __cordl_internal_get__skipUpdate, put = __cordl_internal_set__skipUpdate)) bool _skipUpdate;

  /// @brief Field <trackerAnchor>k__BackingField, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__trackerAnchor_k__BackingField, put = __cordl_internal_set__trackerAnchor_k__BackingField)) ::UnityW<::UnityEngine::Transform>
      _trackerAnchor_k__BackingField;

  /// @brief Field <trackingSpace>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__trackingSpace_k__BackingField, put = __cordl_internal_set__trackingSpace_k__BackingField)) ::UnityW<::UnityEngine::Transform>
      _trackingSpace_k__BackingField;

  __declspec(property(get = get_centerEyeAnchor, put = set_centerEyeAnchor)) ::UnityW<::UnityEngine::Transform> centerEyeAnchor;

  /// @brief Field centerEyeAnchorName, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_centerEyeAnchorName, put = __cordl_internal_set_centerEyeAnchorName)) ::StringW centerEyeAnchorName;

  /// @brief Field disableEyeAnchorCameras, offset 0xaa, size 0x1
  __declspec(property(get = __cordl_internal_get_disableEyeAnchorCameras, put = __cordl_internal_set_disableEyeAnchorCameras)) bool disableEyeAnchorCameras;

  __declspec(property(get = get_leftControllerAnchor, put = set_leftControllerAnchor)) ::UnityW<::UnityEngine::Transform> leftControllerAnchor;

  /// @brief Field leftControllerAnchorName, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_leftControllerAnchorName, put = __cordl_internal_set_leftControllerAnchorName)) ::StringW leftControllerAnchorName;

  __declspec(property(get = get_leftControllerInHandAnchor, put = set_leftControllerInHandAnchor)) ::UnityW<::UnityEngine::Transform> leftControllerInHandAnchor;

  /// @brief Field leftControllerInHandAnchorName, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get_leftControllerInHandAnchorName, put = __cordl_internal_set_leftControllerInHandAnchorName)) ::StringW leftControllerInHandAnchorName;

  __declspec(property(get = get_leftEyeAnchor, put = set_leftEyeAnchor)) ::UnityW<::UnityEngine::Transform> leftEyeAnchor;

  /// @brief Field leftEyeAnchorName, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_leftEyeAnchorName, put = __cordl_internal_set_leftEyeAnchorName)) ::StringW leftEyeAnchorName;

  __declspec(property(get = get_leftEyeCamera)) ::UnityW<::UnityEngine::Camera> leftEyeCamera;

  __declspec(property(get = get_leftHandAnchor, put = set_leftHandAnchor)) ::UnityW<::UnityEngine::Transform> leftHandAnchor;

  __declspec(property(get = get_leftHandAnchorDetached, put = set_leftHandAnchorDetached)) ::UnityW<::UnityEngine::Transform> leftHandAnchorDetached;

  /// @brief Field leftHandAnchorDetachedName, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_leftHandAnchorDetachedName, put = __cordl_internal_set_leftHandAnchorDetachedName)) ::StringW leftHandAnchorDetachedName;

  /// @brief Field leftHandAnchorName, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_leftHandAnchorName, put = __cordl_internal_set_leftHandAnchorName)) ::StringW leftHandAnchorName;

  __declspec(property(get = get_leftHandOnControllerAnchor, put = set_leftHandOnControllerAnchor)) ::UnityW<::UnityEngine::Transform> leftHandOnControllerAnchor;

  /// @brief Field leftHandOnControllerAnchorName, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get_leftHandOnControllerAnchorName, put = __cordl_internal_set_leftHandOnControllerAnchorName)) ::StringW leftHandOnControllerAnchorName;

  __declspec(property(get = get_rightControllerAnchor, put = set_rightControllerAnchor)) ::UnityW<::UnityEngine::Transform> rightControllerAnchor;

  /// @brief Field rightControllerAnchorName, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_rightControllerAnchorName, put = __cordl_internal_set_rightControllerAnchorName)) ::StringW rightControllerAnchorName;

  __declspec(property(get = get_rightControllerInHandAnchor, put = set_rightControllerInHandAnchor)) ::UnityW<::UnityEngine::Transform> rightControllerInHandAnchor;

  /// @brief Field rightControllerInHandAnchorName, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get_rightControllerInHandAnchorName, put = __cordl_internal_set_rightControllerInHandAnchorName)) ::StringW rightControllerInHandAnchorName;

  __declspec(property(get = get_rightEyeAnchor, put = set_rightEyeAnchor)) ::UnityW<::UnityEngine::Transform> rightEyeAnchor;

  /// @brief Field rightEyeAnchorName, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_rightEyeAnchorName, put = __cordl_internal_set_rightEyeAnchorName)) ::StringW rightEyeAnchorName;

  __declspec(property(get = get_rightEyeCamera)) ::UnityW<::UnityEngine::Camera> rightEyeCamera;

  __declspec(property(get = get_rightHandAnchor, put = set_rightHandAnchor)) ::UnityW<::UnityEngine::Transform> rightHandAnchor;

  __declspec(property(get = get_rightHandAnchorDetached, put = set_rightHandAnchorDetached)) ::UnityW<::UnityEngine::Transform> rightHandAnchorDetached;

  /// @brief Field rightHandAnchorDetachedName, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get_rightHandAnchorDetachedName, put = __cordl_internal_set_rightHandAnchorDetachedName)) ::StringW rightHandAnchorDetachedName;

  /// @brief Field rightHandAnchorName, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_rightHandAnchorName, put = __cordl_internal_set_rightHandAnchorName)) ::StringW rightHandAnchorName;

  __declspec(property(get = get_rightHandOnControllerAnchor, put = set_rightHandOnControllerAnchor)) ::UnityW<::UnityEngine::Transform> rightHandOnControllerAnchor;

  /// @brief Field rightHandOnControllerAnchorName, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get_rightHandOnControllerAnchorName, put = __cordl_internal_set_rightHandOnControllerAnchorName)) ::StringW rightHandOnControllerAnchorName;

  __declspec(property(get = get_trackerAnchor, put = set_trackerAnchor)) ::UnityW<::UnityEngine::Transform> trackerAnchor;

  /// @brief Field trackerAnchorName, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_trackerAnchorName, put = __cordl_internal_set_trackerAnchorName)) ::StringW trackerAnchorName;

  __declspec(property(get = get_trackingSpace, put = set_trackingSpace)) ::UnityW<::UnityEngine::Transform> trackingSpace;

  /// @brief Field trackingSpaceName, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_trackingSpaceName, put = __cordl_internal_set_trackingSpaceName)) ::StringW trackingSpaceName;

  /// @brief Field useFixedUpdateForTracking, offset 0xa9, size 0x1
  __declspec(property(get = __cordl_internal_get_useFixedUpdateForTracking, put = __cordl_internal_set_useFixedUpdateForTracking)) bool useFixedUpdateForTracking;

  /// @brief Field usePerEyeCameras, offset 0xa8, size 0x1
  __declspec(property(get = __cordl_internal_get_usePerEyeCameras, put = __cordl_internal_set_usePerEyeCameras)) bool usePerEyeCameras;

  /// @brief Method Awake, addr 0x3fa7a58, size 0x18, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method CheckForAnchorsInParent, addr 0x3faa378, size 0xe0, virtual false, abstract: false, final false
  inline void CheckForAnchorsInParent();

  /// @brief Method CheckForTrackingSpaceChangesAndRaiseEvent, addr 0x3fa9354, size 0x108, virtual true, abstract: false, final false
  inline void CheckForTrackingSpaceChangesAndRaiseEvent();

  /// @brief Method ComputeTrackReferenceMatrix, addr 0x3faa0b8, size 0x2c0, virtual true, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 ComputeTrackReferenceMatrix();

  /// @brief Method ConfigureAnchor, addr 0x3fa9e5c, size 0x25c, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> ConfigureAnchor(::UnityEngine::Transform* root, ::StringW name);

  /// @brief Method EnsureGameObjectIntegrity, addr 0x3fa947c, size 0x9e0, virtual true, abstract: false, final false
  inline void EnsureGameObjectIntegrity();

  /// @brief Method FixedUpdate, addr 0x3fa7b1c, size 0x20, virtual true, abstract: false, final false
  inline void FixedUpdate();

  static inline ::GlobalNamespace::OVRCameraRig* New_ctor();

  /// @brief Method OnBeforeRenderCallback, addr 0x3fa9280, size 0xd4, virtual true, abstract: false, final false
  inline void OnBeforeRenderCallback();

  /// @brief Method OnDestroy, addr 0x3fa7b60, size 0x94, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method RaiseUpdatedAnchorsEvent, addr 0x3fa945c, size 0x20, virtual true, abstract: false, final false
  inline void RaiseUpdatedAnchorsEvent();

  /// @brief Method Start, addr 0x3fa7a70, size 0xac, virtual true, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x3fa7b3c, size 0x24, virtual true, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateAnchors, addr 0x3fa7bf4, size 0x15b4, virtual true, abstract: false, final false
  inline void UpdateAnchors(bool updateEyeAnchors, bool updateHandAnchors);

  /// @brief Method <CheckForAnchorsInParent>g__Check|105_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void _CheckForAnchorsInParent_g__Check_105_0(::UnityEngine::Transform* node);

  constexpr ::System::Action_1<::UnityW<::UnityEngine::Transform>>* const& __cordl_internal_get_TrackingSpaceChanged() const;

  constexpr ::System::Action_1<::UnityW<::UnityEngine::Transform>>*& __cordl_internal_get_TrackingSpaceChanged();

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::OVRCameraRig>>* const& __cordl_internal_get_UpdatedAnchors() const;

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::OVRCameraRig>>*& __cordl_internal_get_UpdatedAnchors();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__centerEyeAnchor_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__centerEyeAnchor_k__BackingField();

  constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get__centerEyeCamera() const;

  constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get__centerEyeCamera();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__leftControllerAnchor_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__leftControllerAnchor_k__BackingField();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__leftControllerInHandAnchor_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__leftControllerInHandAnchor_k__BackingField();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__leftEyeAnchor_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__leftEyeAnchor_k__BackingField();

  constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get__leftEyeCamera() const;

  constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get__leftEyeCamera();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__leftHandAnchorDetached_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__leftHandAnchorDetached_k__BackingField();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__leftHandAnchor_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__leftHandAnchor_k__BackingField();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__leftHandOnControllerAnchor_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__leftHandOnControllerAnchor_k__BackingField();

  constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get__previousTrackingSpaceTransform() const;

  constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get__previousTrackingSpaceTransform();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__rightControllerAnchor_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__rightControllerAnchor_k__BackingField();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__rightControllerInHandAnchor_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__rightControllerInHandAnchor_k__BackingField();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__rightEyeAnchor_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__rightEyeAnchor_k__BackingField();

  constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get__rightEyeCamera() const;

  constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get__rightEyeCamera();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__rightHandAnchorDetached_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__rightHandAnchorDetached_k__BackingField();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__rightHandAnchor_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__rightHandAnchor_k__BackingField();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__rightHandOnControllerAnchor_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__rightHandOnControllerAnchor_k__BackingField();

  constexpr bool const& __cordl_internal_get__skipUpdate() const;

  constexpr bool& __cordl_internal_get__skipUpdate();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__trackerAnchor_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__trackerAnchor_k__BackingField();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__trackingSpace_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__trackingSpace_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get_centerEyeAnchorName() const;

  constexpr ::StringW& __cordl_internal_get_centerEyeAnchorName();

  constexpr bool const& __cordl_internal_get_disableEyeAnchorCameras() const;

  constexpr bool& __cordl_internal_get_disableEyeAnchorCameras();

  constexpr ::StringW const& __cordl_internal_get_leftControllerAnchorName() const;

  constexpr ::StringW& __cordl_internal_get_leftControllerAnchorName();

  constexpr ::StringW const& __cordl_internal_get_leftControllerInHandAnchorName() const;

  constexpr ::StringW& __cordl_internal_get_leftControllerInHandAnchorName();

  constexpr ::StringW const& __cordl_internal_get_leftEyeAnchorName() const;

  constexpr ::StringW& __cordl_internal_get_leftEyeAnchorName();

  constexpr ::StringW const& __cordl_internal_get_leftHandAnchorDetachedName() const;

  constexpr ::StringW& __cordl_internal_get_leftHandAnchorDetachedName();

  constexpr ::StringW const& __cordl_internal_get_leftHandAnchorName() const;

  constexpr ::StringW& __cordl_internal_get_leftHandAnchorName();

  constexpr ::StringW const& __cordl_internal_get_leftHandOnControllerAnchorName() const;

  constexpr ::StringW& __cordl_internal_get_leftHandOnControllerAnchorName();

  constexpr ::StringW const& __cordl_internal_get_rightControllerAnchorName() const;

  constexpr ::StringW& __cordl_internal_get_rightControllerAnchorName();

  constexpr ::StringW const& __cordl_internal_get_rightControllerInHandAnchorName() const;

  constexpr ::StringW& __cordl_internal_get_rightControllerInHandAnchorName();

  constexpr ::StringW const& __cordl_internal_get_rightEyeAnchorName() const;

  constexpr ::StringW& __cordl_internal_get_rightEyeAnchorName();

  constexpr ::StringW const& __cordl_internal_get_rightHandAnchorDetachedName() const;

  constexpr ::StringW& __cordl_internal_get_rightHandAnchorDetachedName();

  constexpr ::StringW const& __cordl_internal_get_rightHandAnchorName() const;

  constexpr ::StringW& __cordl_internal_get_rightHandAnchorName();

  constexpr ::StringW const& __cordl_internal_get_rightHandOnControllerAnchorName() const;

  constexpr ::StringW& __cordl_internal_get_rightHandOnControllerAnchorName();

  constexpr ::StringW const& __cordl_internal_get_trackerAnchorName() const;

  constexpr ::StringW& __cordl_internal_get_trackerAnchorName();

  constexpr ::StringW const& __cordl_internal_get_trackingSpaceName() const;

  constexpr ::StringW& __cordl_internal_get_trackingSpaceName();

  constexpr bool const& __cordl_internal_get_useFixedUpdateForTracking() const;

  constexpr bool& __cordl_internal_get_useFixedUpdateForTracking();

  constexpr bool const& __cordl_internal_get_usePerEyeCameras() const;

  constexpr bool& __cordl_internal_get_usePerEyeCameras();

  constexpr void __cordl_internal_set_TrackingSpaceChanged(::System::Action_1<::UnityW<::UnityEngine::Transform>>* value);

  constexpr void __cordl_internal_set_UpdatedAnchors(::System::Action_1<::UnityW<::GlobalNamespace::OVRCameraRig>>* value);

  constexpr void __cordl_internal_set__centerEyeAnchor_k__BackingField(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__centerEyeCamera(::UnityW<::UnityEngine::Camera> value);

  constexpr void __cordl_internal_set__leftControllerAnchor_k__BackingField(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__leftControllerInHandAnchor_k__BackingField(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__leftEyeAnchor_k__BackingField(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__leftEyeCamera(::UnityW<::UnityEngine::Camera> value);

  constexpr void __cordl_internal_set__leftHandAnchorDetached_k__BackingField(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__leftHandAnchor_k__BackingField(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__leftHandOnControllerAnchor_k__BackingField(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__previousTrackingSpaceTransform(::UnityEngine::Matrix4x4 value);

  constexpr void __cordl_internal_set__rightControllerAnchor_k__BackingField(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__rightControllerInHandAnchor_k__BackingField(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__rightEyeAnchor_k__BackingField(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__rightEyeCamera(::UnityW<::UnityEngine::Camera> value);

  constexpr void __cordl_internal_set__rightHandAnchorDetached_k__BackingField(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__rightHandAnchor_k__BackingField(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__rightHandOnControllerAnchor_k__BackingField(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__skipUpdate(bool value);

  constexpr void __cordl_internal_set__trackerAnchor_k__BackingField(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__trackingSpace_k__BackingField(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_centerEyeAnchorName(::StringW value);

  constexpr void __cordl_internal_set_disableEyeAnchorCameras(bool value);

  constexpr void __cordl_internal_set_leftControllerAnchorName(::StringW value);

  constexpr void __cordl_internal_set_leftControllerInHandAnchorName(::StringW value);

  constexpr void __cordl_internal_set_leftEyeAnchorName(::StringW value);

  constexpr void __cordl_internal_set_leftHandAnchorDetachedName(::StringW value);

  constexpr void __cordl_internal_set_leftHandAnchorName(::StringW value);

  constexpr void __cordl_internal_set_leftHandOnControllerAnchorName(::StringW value);

  constexpr void __cordl_internal_set_rightControllerAnchorName(::StringW value);

  constexpr void __cordl_internal_set_rightControllerInHandAnchorName(::StringW value);

  constexpr void __cordl_internal_set_rightEyeAnchorName(::StringW value);

  constexpr void __cordl_internal_set_rightHandAnchorDetachedName(::StringW value);

  constexpr void __cordl_internal_set_rightHandAnchorName(::StringW value);

  constexpr void __cordl_internal_set_rightHandOnControllerAnchorName(::StringW value);

  constexpr void __cordl_internal_set_trackerAnchorName(::StringW value);

  constexpr void __cordl_internal_set_trackingSpaceName(::StringW value);

  constexpr void __cordl_internal_set_useFixedUpdateForTracking(bool value);

  constexpr void __cordl_internal_set_usePerEyeCameras(bool value);

  /// @brief Method .ctor, addr 0x3faa458, size 0x20c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_TrackingSpaceChanged, addr 0x3fa78f8, size 0xb0, virtual false, abstract: false, final false
  inline void add_TrackingSpaceChanged(::System::Action_1<::UnityW<::UnityEngine::Transform>>* value);

  /// @brief Method add_UpdatedAnchors, addr 0x3fa7798, size 0xb0, virtual false, abstract: false, final false
  inline void add_UpdatedAnchors(::System::Action_1<::UnityW<::GlobalNamespace::OVRCameraRig>>* value);

  /// @brief Method get_centerEyeAnchor, addr 0x3fa76c8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_centerEyeAnchor();

  /// @brief Method get_leftControllerAnchor, addr 0x3fa7768, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_leftControllerAnchor();

  /// @brief Method get_leftControllerInHandAnchor, addr 0x3fa7728, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_leftControllerInHandAnchor();

  /// @brief Method get_leftEyeAnchor, addr 0x3fa76b8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_leftEyeAnchor();

  /// @brief Method get_leftEyeCamera, addr 0x3fa7670, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Camera> get_leftEyeCamera();

  /// @brief Method get_leftHandAnchor, addr 0x3fa76e8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_leftHandAnchor();

  /// @brief Method get_leftHandAnchorDetached, addr 0x3fa7708, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_leftHandAnchorDetached();

  /// @brief Method get_leftHandOnControllerAnchor, addr 0x3fa7738, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_leftHandOnControllerAnchor();

  /// @brief Method get_rightControllerAnchor, addr 0x3fa7778, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_rightControllerAnchor();

  /// @brief Method get_rightControllerInHandAnchor, addr 0x3fa7748, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_rightControllerInHandAnchor();

  /// @brief Method get_rightEyeAnchor, addr 0x3fa76d8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_rightEyeAnchor();

  /// @brief Method get_rightEyeCamera, addr 0x3fa768c, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Camera> get_rightEyeCamera();

  /// @brief Method get_rightHandAnchor, addr 0x3fa76f8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_rightHandAnchor();

  /// @brief Method get_rightHandAnchorDetached, addr 0x3fa7718, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_rightHandAnchorDetached();

  /// @brief Method get_rightHandOnControllerAnchor, addr 0x3fa7758, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_rightHandOnControllerAnchor();

  /// @brief Method get_trackerAnchor, addr 0x3fa7788, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_trackerAnchor();

  /// @brief Method get_trackingSpace, addr 0x3fa76a8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_trackingSpace();

  /// @brief Method remove_TrackingSpaceChanged, addr 0x3fa79a8, size 0xb0, virtual false, abstract: false, final false
  inline void remove_TrackingSpaceChanged(::System::Action_1<::UnityW<::UnityEngine::Transform>>* value);

  /// @brief Method remove_UpdatedAnchors, addr 0x3fa7848, size 0xb0, virtual false, abstract: false, final false
  inline void remove_UpdatedAnchors(::System::Action_1<::UnityW<::GlobalNamespace::OVRCameraRig>>* value);

  /// @brief Method set_centerEyeAnchor, addr 0x3fa76d0, size 0x8, virtual false, abstract: false, final false
  inline void set_centerEyeAnchor(::UnityEngine::Transform* value);

  /// @brief Method set_leftControllerAnchor, addr 0x3fa7770, size 0x8, virtual false, abstract: false, final false
  inline void set_leftControllerAnchor(::UnityEngine::Transform* value);

  /// @brief Method set_leftControllerInHandAnchor, addr 0x3fa7730, size 0x8, virtual false, abstract: false, final false
  inline void set_leftControllerInHandAnchor(::UnityEngine::Transform* value);

  /// @brief Method set_leftEyeAnchor, addr 0x3fa76c0, size 0x8, virtual false, abstract: false, final false
  inline void set_leftEyeAnchor(::UnityEngine::Transform* value);

  /// @brief Method set_leftHandAnchor, addr 0x3fa76f0, size 0x8, virtual false, abstract: false, final false
  inline void set_leftHandAnchor(::UnityEngine::Transform* value);

  /// @brief Method set_leftHandAnchorDetached, addr 0x3fa7710, size 0x8, virtual false, abstract: false, final false
  inline void set_leftHandAnchorDetached(::UnityEngine::Transform* value);

  /// @brief Method set_leftHandOnControllerAnchor, addr 0x3fa7740, size 0x8, virtual false, abstract: false, final false
  inline void set_leftHandOnControllerAnchor(::UnityEngine::Transform* value);

  /// @brief Method set_rightControllerAnchor, addr 0x3fa7780, size 0x8, virtual false, abstract: false, final false
  inline void set_rightControllerAnchor(::UnityEngine::Transform* value);

  /// @brief Method set_rightControllerInHandAnchor, addr 0x3fa7750, size 0x8, virtual false, abstract: false, final false
  inline void set_rightControllerInHandAnchor(::UnityEngine::Transform* value);

  /// @brief Method set_rightEyeAnchor, addr 0x3fa76e0, size 0x8, virtual false, abstract: false, final false
  inline void set_rightEyeAnchor(::UnityEngine::Transform* value);

  /// @brief Method set_rightHandAnchor, addr 0x3fa7700, size 0x8, virtual false, abstract: false, final false
  inline void set_rightHandAnchor(::UnityEngine::Transform* value);

  /// @brief Method set_rightHandAnchorDetached, addr 0x3fa7720, size 0x8, virtual false, abstract: false, final false
  inline void set_rightHandAnchorDetached(::UnityEngine::Transform* value);

  /// @brief Method set_rightHandOnControllerAnchor, addr 0x3fa7760, size 0x8, virtual false, abstract: false, final false
  inline void set_rightHandOnControllerAnchor(::UnityEngine::Transform* value);

  /// @brief Method set_trackerAnchor, addr 0x3fa7790, size 0x8, virtual false, abstract: false, final false
  inline void set_trackerAnchor(::UnityEngine::Transform* value);

  /// @brief Method set_trackingSpace, addr 0x3fa76b0, size 0x8, virtual false, abstract: false, final false
  inline void set_trackingSpace(::UnityEngine::Transform* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRCameraRig();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRCameraRig", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRCameraRig(OVRCameraRig&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRCameraRig", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRCameraRig(OVRCameraRig const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7846 };

  /// @brief Field <trackingSpace>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____trackingSpace_k__BackingField;

  /// @brief Field <leftEyeAnchor>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____leftEyeAnchor_k__BackingField;

  /// @brief Field <centerEyeAnchor>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____centerEyeAnchor_k__BackingField;

  /// @brief Field <rightEyeAnchor>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____rightEyeAnchor_k__BackingField;

  /// @brief Field <leftHandAnchor>k__BackingField, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____leftHandAnchor_k__BackingField;

  /// @brief Field <rightHandAnchor>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____rightHandAnchor_k__BackingField;

  /// @brief Field <leftHandAnchorDetached>k__BackingField, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____leftHandAnchorDetached_k__BackingField;

  /// @brief Field <rightHandAnchorDetached>k__BackingField, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____rightHandAnchorDetached_k__BackingField;

  /// @brief Field <leftControllerInHandAnchor>k__BackingField, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____leftControllerInHandAnchor_k__BackingField;

  /// @brief Field <leftHandOnControllerAnchor>k__BackingField, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____leftHandOnControllerAnchor_k__BackingField;

  /// @brief Field <rightControllerInHandAnchor>k__BackingField, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____rightControllerInHandAnchor_k__BackingField;

  /// @brief Field <rightHandOnControllerAnchor>k__BackingField, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____rightHandOnControllerAnchor_k__BackingField;

  /// @brief Field <leftControllerAnchor>k__BackingField, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____leftControllerAnchor_k__BackingField;

  /// @brief Field <rightControllerAnchor>k__BackingField, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____rightControllerAnchor_k__BackingField;

  /// @brief Field <trackerAnchor>k__BackingField, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____trackerAnchor_k__BackingField;

  /// @brief Field UpdatedAnchors, offset: 0x98, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::GlobalNamespace::OVRCameraRig>>* ___UpdatedAnchors;

  /// @brief Field TrackingSpaceChanged, offset: 0xa0, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::UnityEngine::Transform>>* ___TrackingSpaceChanged;

  /// @brief Field usePerEyeCameras, offset: 0xa8, size: 0x1, def value: None
  bool ___usePerEyeCameras;

  /// @brief Field useFixedUpdateForTracking, offset: 0xa9, size: 0x1, def value: None
  bool ___useFixedUpdateForTracking;

  /// @brief Field disableEyeAnchorCameras, offset: 0xaa, size: 0x1, def value: None
  bool ___disableEyeAnchorCameras;

  /// @brief Field _skipUpdate, offset: 0xab, size: 0x1, def value: None
  bool ____skipUpdate;

  /// @brief Field trackingSpaceName, offset: 0xb0, size: 0x8, def value: None
  ::StringW ___trackingSpaceName;

  /// @brief Field trackerAnchorName, offset: 0xb8, size: 0x8, def value: None
  ::StringW ___trackerAnchorName;

  /// @brief Field leftEyeAnchorName, offset: 0xc0, size: 0x8, def value: None
  ::StringW ___leftEyeAnchorName;

  /// @brief Field centerEyeAnchorName, offset: 0xc8, size: 0x8, def value: None
  ::StringW ___centerEyeAnchorName;

  /// @brief Field rightEyeAnchorName, offset: 0xd0, size: 0x8, def value: None
  ::StringW ___rightEyeAnchorName;

  /// @brief Field leftHandAnchorName, offset: 0xd8, size: 0x8, def value: None
  ::StringW ___leftHandAnchorName;

  /// @brief Field rightHandAnchorName, offset: 0xe0, size: 0x8, def value: None
  ::StringW ___rightHandAnchorName;

  /// @brief Field leftControllerAnchorName, offset: 0xe8, size: 0x8, def value: None
  ::StringW ___leftControllerAnchorName;

  /// @brief Field rightControllerAnchorName, offset: 0xf0, size: 0x8, def value: None
  ::StringW ___rightControllerAnchorName;

  /// @brief Field leftHandAnchorDetachedName, offset: 0xf8, size: 0x8, def value: None
  ::StringW ___leftHandAnchorDetachedName;

  /// @brief Field rightHandAnchorDetachedName, offset: 0x100, size: 0x8, def value: None
  ::StringW ___rightHandAnchorDetachedName;

  /// @brief Field leftControllerInHandAnchorName, offset: 0x108, size: 0x8, def value: None
  ::StringW ___leftControllerInHandAnchorName;

  /// @brief Field leftHandOnControllerAnchorName, offset: 0x110, size: 0x8, def value: None
  ::StringW ___leftHandOnControllerAnchorName;

  /// @brief Field rightControllerInHandAnchorName, offset: 0x118, size: 0x8, def value: None
  ::StringW ___rightControllerInHandAnchorName;

  /// @brief Field rightHandOnControllerAnchorName, offset: 0x120, size: 0x8, def value: None
  ::StringW ___rightHandOnControllerAnchorName;

  /// @brief Field _centerEyeCamera, offset: 0x128, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> ____centerEyeCamera;

  /// @brief Field _leftEyeCamera, offset: 0x130, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> ____leftEyeCamera;

  /// @brief Field _rightEyeCamera, offset: 0x138, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> ____rightEyeCamera;

  /// @brief Field _previousTrackingSpaceTransform, offset: 0x140, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 ____previousTrackingSpaceTransform;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRCameraRig, ____trackingSpace_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCameraRig, ____leftEyeAnchor_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCameraRig, ____centerEyeAnchor_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCameraRig, ____rightEyeAnchor_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCameraRig, ____leftHandAnchor_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCameraRig, ____rightHandAnchor_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCameraRig, ____leftHandAnchorDetached_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCameraRig, ____rightHandAnchorDetached_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCameraRig, ____leftControllerInHandAnchor_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCameraRig, ____leftHandOnControllerAnchor_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCameraRig, ____rightControllerInHandAnchor_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCameraRig, ____rightHandOnControllerAnchor_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCameraRig, ____leftControllerAnchor_k__BackingField) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCameraRig, ____rightControllerAnchor_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCameraRig, ____trackerAnchor_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCameraRig, ___UpdatedAnchors) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCameraRig, ___TrackingSpaceChanged) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCameraRig, ___usePerEyeCameras) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCameraRig, ___useFixedUpdateForTracking) == 0xa9, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCameraRig, ___disableEyeAnchorCameras) == 0xaa, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCameraRig, ____skipUpdate) == 0xab, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCameraRig, ___trackingSpaceName) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCameraRig, ___trackerAnchorName) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCameraRig, ___leftEyeAnchorName) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCameraRig, ___centerEyeAnchorName) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCameraRig, ___rightEyeAnchorName) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCameraRig, ___leftHandAnchorName) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCameraRig, ___rightHandAnchorName) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCameraRig, ___leftControllerAnchorName) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCameraRig, ___rightControllerAnchorName) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCameraRig, ___leftHandAnchorDetachedName) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCameraRig, ___rightHandAnchorDetachedName) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCameraRig, ___leftControllerInHandAnchorName) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCameraRig, ___leftHandOnControllerAnchorName) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCameraRig, ___rightControllerInHandAnchorName) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCameraRig, ___rightHandOnControllerAnchorName) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCameraRig, ____centerEyeCamera) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCameraRig, ____leftEyeCamera) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCameraRig, ____rightEyeCamera) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCameraRig, ____previousTrackingSpaceTransform) == 0x140, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRCameraRig, 0x180>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRCameraRig);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRCameraRig*, "", "OVRCameraRig");
