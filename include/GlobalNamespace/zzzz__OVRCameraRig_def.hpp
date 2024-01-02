#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(OVRCameraRig)
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Transform;
}
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRCameraRig;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRCameraRig);
// Type: ::OVRCameraRig
// SizeInfo { instance_size: 376, native_size: -1, calculated_instance_size: 376, calculated_native_size: 376, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(10245))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7531))
// CS Name: ::OVRCameraRig*
class CORDL_TYPE OVRCameraRig : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field <trackingSpace>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __get__trackingSpace_k__BackingField, put = __set__trackingSpace_k__BackingField))::UnityEngine::Transform* _trackingSpace_k__BackingField;

  /// @brief Field <leftEyeAnchor>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __get__leftEyeAnchor_k__BackingField, put = __set__leftEyeAnchor_k__BackingField))::UnityEngine::Transform* _leftEyeAnchor_k__BackingField;

  /// @brief Field <centerEyeAnchor>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __get__centerEyeAnchor_k__BackingField, put = __set__centerEyeAnchor_k__BackingField))::UnityEngine::Transform* _centerEyeAnchor_k__BackingField;

  /// @brief Field <rightEyeAnchor>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __get__rightEyeAnchor_k__BackingField, put = __set__rightEyeAnchor_k__BackingField))::UnityEngine::Transform* _rightEyeAnchor_k__BackingField;

  /// @brief Field <leftHandAnchor>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __get__leftHandAnchor_k__BackingField, put = __set__leftHandAnchor_k__BackingField))::UnityEngine::Transform* _leftHandAnchor_k__BackingField;

  /// @brief Field <rightHandAnchor>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __get__rightHandAnchor_k__BackingField, put = __set__rightHandAnchor_k__BackingField))::UnityEngine::Transform* _rightHandAnchor_k__BackingField;

  /// @brief Field <leftHandAnchorDetached>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __get__leftHandAnchorDetached_k__BackingField, put = __set__leftHandAnchorDetached_k__BackingField))::UnityEngine::Transform* _leftHandAnchorDetached_k__BackingField;

  /// @brief Field <rightHandAnchorDetached>k__BackingField, offset 0x50, size 0x8
  __declspec(property(get = __get__rightHandAnchorDetached_k__BackingField, put = __set__rightHandAnchorDetached_k__BackingField))::UnityEngine::Transform* _rightHandAnchorDetached_k__BackingField;

  /// @brief Field <leftControllerInHandAnchor>k__BackingField, offset 0x58, size 0x8
  __declspec(property(get = __get__leftControllerInHandAnchor_k__BackingField,
                      put = __set__leftControllerInHandAnchor_k__BackingField))::UnityEngine::Transform* _leftControllerInHandAnchor_k__BackingField;

  /// @brief Field <leftHandOnControllerAnchor>k__BackingField, offset 0x60, size 0x8
  __declspec(property(get = __get__leftHandOnControllerAnchor_k__BackingField,
                      put = __set__leftHandOnControllerAnchor_k__BackingField))::UnityEngine::Transform* _leftHandOnControllerAnchor_k__BackingField;

  /// @brief Field <rightControllerInHandAnchor>k__BackingField, offset 0x68, size 0x8
  __declspec(property(get = __get__rightControllerInHandAnchor_k__BackingField,
                      put = __set__rightControllerInHandAnchor_k__BackingField))::UnityEngine::Transform* _rightControllerInHandAnchor_k__BackingField;

  /// @brief Field <rightHandOnControllerAnchor>k__BackingField, offset 0x70, size 0x8
  __declspec(property(get = __get__rightHandOnControllerAnchor_k__BackingField,
                      put = __set__rightHandOnControllerAnchor_k__BackingField))::UnityEngine::Transform* _rightHandOnControllerAnchor_k__BackingField;

  /// @brief Field <leftControllerAnchor>k__BackingField, offset 0x78, size 0x8
  __declspec(property(get = __get__leftControllerAnchor_k__BackingField, put = __set__leftControllerAnchor_k__BackingField))::UnityEngine::Transform* _leftControllerAnchor_k__BackingField;

  /// @brief Field <rightControllerAnchor>k__BackingField, offset 0x80, size 0x8
  __declspec(property(get = __get__rightControllerAnchor_k__BackingField, put = __set__rightControllerAnchor_k__BackingField))::UnityEngine::Transform* _rightControllerAnchor_k__BackingField;

  /// @brief Field <trackerAnchor>k__BackingField, offset 0x88, size 0x8
  __declspec(property(get = __get__trackerAnchor_k__BackingField, put = __set__trackerAnchor_k__BackingField))::UnityEngine::Transform* _trackerAnchor_k__BackingField;

  /// @brief Field UpdatedAnchors, offset 0x90, size 0x8
  __declspec(property(get = __get_UpdatedAnchors, put = __set_UpdatedAnchors))::System::Action_1<::GlobalNamespace::OVRCameraRig*>* UpdatedAnchors;

  /// @brief Field TrackingSpaceChanged, offset 0x98, size 0x8
  __declspec(property(get = __get_TrackingSpaceChanged, put = __set_TrackingSpaceChanged))::System::Action_1<::UnityEngine::Transform*>* TrackingSpaceChanged;

  /// @brief Field usePerEyeCameras, offset 0xa0, size 0x1
  __declspec(property(get = __get_usePerEyeCameras, put = __set_usePerEyeCameras)) bool usePerEyeCameras;

  /// @brief Field useFixedUpdateForTracking, offset 0xa1, size 0x1
  __declspec(property(get = __get_useFixedUpdateForTracking, put = __set_useFixedUpdateForTracking)) bool useFixedUpdateForTracking;

  /// @brief Field disableEyeAnchorCameras, offset 0xa2, size 0x1
  __declspec(property(get = __get_disableEyeAnchorCameras, put = __set_disableEyeAnchorCameras)) bool disableEyeAnchorCameras;

  /// @brief Field _skipUpdate, offset 0xa3, size 0x1
  __declspec(property(get = __get__skipUpdate, put = __set__skipUpdate)) bool _skipUpdate;

  /// @brief Field trackingSpaceName, offset 0xa8, size 0x8
  __declspec(property(get = __get_trackingSpaceName, put = __set_trackingSpaceName))::StringW trackingSpaceName;

  /// @brief Field trackerAnchorName, offset 0xb0, size 0x8
  __declspec(property(get = __get_trackerAnchorName, put = __set_trackerAnchorName))::StringW trackerAnchorName;

  /// @brief Field leftEyeAnchorName, offset 0xb8, size 0x8
  __declspec(property(get = __get_leftEyeAnchorName, put = __set_leftEyeAnchorName))::StringW leftEyeAnchorName;

  /// @brief Field centerEyeAnchorName, offset 0xc0, size 0x8
  __declspec(property(get = __get_centerEyeAnchorName, put = __set_centerEyeAnchorName))::StringW centerEyeAnchorName;

  /// @brief Field rightEyeAnchorName, offset 0xc8, size 0x8
  __declspec(property(get = __get_rightEyeAnchorName, put = __set_rightEyeAnchorName))::StringW rightEyeAnchorName;

  /// @brief Field leftHandAnchorName, offset 0xd0, size 0x8
  __declspec(property(get = __get_leftHandAnchorName, put = __set_leftHandAnchorName))::StringW leftHandAnchorName;

  /// @brief Field rightHandAnchorName, offset 0xd8, size 0x8
  __declspec(property(get = __get_rightHandAnchorName, put = __set_rightHandAnchorName))::StringW rightHandAnchorName;

  /// @brief Field leftControllerAnchorName, offset 0xe0, size 0x8
  __declspec(property(get = __get_leftControllerAnchorName, put = __set_leftControllerAnchorName))::StringW leftControllerAnchorName;

  /// @brief Field rightControllerAnchorName, offset 0xe8, size 0x8
  __declspec(property(get = __get_rightControllerAnchorName, put = __set_rightControllerAnchorName))::StringW rightControllerAnchorName;

  /// @brief Field leftHandAnchorDetachedName, offset 0xf0, size 0x8
  __declspec(property(get = __get_leftHandAnchorDetachedName, put = __set_leftHandAnchorDetachedName))::StringW leftHandAnchorDetachedName;

  /// @brief Field rightHandAnchorDetachedName, offset 0xf8, size 0x8
  __declspec(property(get = __get_rightHandAnchorDetachedName, put = __set_rightHandAnchorDetachedName))::StringW rightHandAnchorDetachedName;

  /// @brief Field leftControllerInHandAnchorName, offset 0x100, size 0x8
  __declspec(property(get = __get_leftControllerInHandAnchorName, put = __set_leftControllerInHandAnchorName))::StringW leftControllerInHandAnchorName;

  /// @brief Field leftHandOnControllerAnchorName, offset 0x108, size 0x8
  __declspec(property(get = __get_leftHandOnControllerAnchorName, put = __set_leftHandOnControllerAnchorName))::StringW leftHandOnControllerAnchorName;

  /// @brief Field rightControllerInHandAnchorName, offset 0x110, size 0x8
  __declspec(property(get = __get_rightControllerInHandAnchorName, put = __set_rightControllerInHandAnchorName))::StringW rightControllerInHandAnchorName;

  /// @brief Field rightHandOnControllerAnchorName, offset 0x118, size 0x8
  __declspec(property(get = __get_rightHandOnControllerAnchorName, put = __set_rightHandOnControllerAnchorName))::StringW rightHandOnControllerAnchorName;

  /// @brief Field _centerEyeCamera, offset 0x120, size 0x8
  __declspec(property(get = __get__centerEyeCamera, put = __set__centerEyeCamera))::UnityEngine::Camera* _centerEyeCamera;

  /// @brief Field _leftEyeCamera, offset 0x128, size 0x8
  __declspec(property(get = __get__leftEyeCamera, put = __set__leftEyeCamera))::UnityEngine::Camera* _leftEyeCamera;

  /// @brief Field _rightEyeCamera, offset 0x130, size 0x8
  __declspec(property(get = __get__rightEyeCamera, put = __set__rightEyeCamera))::UnityEngine::Camera* _rightEyeCamera;

  /// @brief Field _previousTrackingSpaceTransform, offset 0x138, size 0x40
  __declspec(property(get = __get__previousTrackingSpaceTransform, put = __set__previousTrackingSpaceTransform))::UnityEngine::Matrix4x4 _previousTrackingSpaceTransform;

  __declspec(property(get = get_leftEyeCamera))::UnityEngine::Camera* leftEyeCamera;

  __declspec(property(get = get_rightEyeCamera))::UnityEngine::Camera* rightEyeCamera;

  __declspec(property(get = get_trackingSpace, put = set_trackingSpace))::UnityEngine::Transform* trackingSpace;

  __declspec(property(get = get_leftEyeAnchor, put = set_leftEyeAnchor))::UnityEngine::Transform* leftEyeAnchor;

  __declspec(property(get = get_centerEyeAnchor, put = set_centerEyeAnchor))::UnityEngine::Transform* centerEyeAnchor;

  __declspec(property(get = get_rightEyeAnchor, put = set_rightEyeAnchor))::UnityEngine::Transform* rightEyeAnchor;

  __declspec(property(get = get_leftHandAnchor, put = set_leftHandAnchor))::UnityEngine::Transform* leftHandAnchor;

  __declspec(property(get = get_rightHandAnchor, put = set_rightHandAnchor))::UnityEngine::Transform* rightHandAnchor;

  __declspec(property(get = get_leftHandAnchorDetached, put = set_leftHandAnchorDetached))::UnityEngine::Transform* leftHandAnchorDetached;

  __declspec(property(get = get_rightHandAnchorDetached, put = set_rightHandAnchorDetached))::UnityEngine::Transform* rightHandAnchorDetached;

  __declspec(property(get = get_leftControllerInHandAnchor, put = set_leftControllerInHandAnchor))::UnityEngine::Transform* leftControllerInHandAnchor;

  __declspec(property(get = get_leftHandOnControllerAnchor, put = set_leftHandOnControllerAnchor))::UnityEngine::Transform* leftHandOnControllerAnchor;

  __declspec(property(get = get_rightControllerInHandAnchor, put = set_rightControllerInHandAnchor))::UnityEngine::Transform* rightControllerInHandAnchor;

  __declspec(property(get = get_rightHandOnControllerAnchor, put = set_rightHandOnControllerAnchor))::UnityEngine::Transform* rightHandOnControllerAnchor;

  __declspec(property(get = get_leftControllerAnchor, put = set_leftControllerAnchor))::UnityEngine::Transform* leftControllerAnchor;

  __declspec(property(get = get_rightControllerAnchor, put = set_rightControllerAnchor))::UnityEngine::Transform* rightControllerAnchor;

  __declspec(property(get = get_trackerAnchor, put = set_trackerAnchor))::UnityEngine::Transform* trackerAnchor;

  constexpr ::UnityEngine::Transform*& __get__trackingSpace_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__trackingSpace_k__BackingField() const;

  constexpr void __set__trackingSpace_k__BackingField(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get__leftEyeAnchor_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__leftEyeAnchor_k__BackingField() const;

  constexpr void __set__leftEyeAnchor_k__BackingField(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get__centerEyeAnchor_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__centerEyeAnchor_k__BackingField() const;

  constexpr void __set__centerEyeAnchor_k__BackingField(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get__rightEyeAnchor_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__rightEyeAnchor_k__BackingField() const;

  constexpr void __set__rightEyeAnchor_k__BackingField(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get__leftHandAnchor_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__leftHandAnchor_k__BackingField() const;

  constexpr void __set__leftHandAnchor_k__BackingField(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get__rightHandAnchor_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__rightHandAnchor_k__BackingField() const;

  constexpr void __set__rightHandAnchor_k__BackingField(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get__leftHandAnchorDetached_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__leftHandAnchorDetached_k__BackingField() const;

  constexpr void __set__leftHandAnchorDetached_k__BackingField(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get__rightHandAnchorDetached_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__rightHandAnchorDetached_k__BackingField() const;

  constexpr void __set__rightHandAnchorDetached_k__BackingField(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get__leftControllerInHandAnchor_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__leftControllerInHandAnchor_k__BackingField() const;

  constexpr void __set__leftControllerInHandAnchor_k__BackingField(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get__leftHandOnControllerAnchor_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__leftHandOnControllerAnchor_k__BackingField() const;

  constexpr void __set__leftHandOnControllerAnchor_k__BackingField(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get__rightControllerInHandAnchor_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__rightControllerInHandAnchor_k__BackingField() const;

  constexpr void __set__rightControllerInHandAnchor_k__BackingField(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get__rightHandOnControllerAnchor_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__rightHandOnControllerAnchor_k__BackingField() const;

  constexpr void __set__rightHandOnControllerAnchor_k__BackingField(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get__leftControllerAnchor_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__leftControllerAnchor_k__BackingField() const;

  constexpr void __set__leftControllerAnchor_k__BackingField(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get__rightControllerAnchor_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__rightControllerAnchor_k__BackingField() const;

  constexpr void __set__rightControllerAnchor_k__BackingField(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get__trackerAnchor_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__trackerAnchor_k__BackingField() const;

  constexpr void __set__trackerAnchor_k__BackingField(::UnityEngine::Transform* value);

  constexpr ::System::Action_1<::GlobalNamespace::OVRCameraRig*>*& __get_UpdatedAnchors();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::OVRCameraRig*>*> const& __get_UpdatedAnchors() const;

  constexpr void __set_UpdatedAnchors(::System::Action_1<::GlobalNamespace::OVRCameraRig*>* value);

  constexpr ::System::Action_1<::UnityEngine::Transform*>*& __get_TrackingSpaceChanged();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::Transform*>*> const& __get_TrackingSpaceChanged() const;

  constexpr void __set_TrackingSpaceChanged(::System::Action_1<::UnityEngine::Transform*>* value);

  constexpr bool& __get_usePerEyeCameras();

  constexpr bool const& __get_usePerEyeCameras() const;

  constexpr void __set_usePerEyeCameras(bool value);

  constexpr bool& __get_useFixedUpdateForTracking();

  constexpr bool const& __get_useFixedUpdateForTracking() const;

  constexpr void __set_useFixedUpdateForTracking(bool value);

  constexpr bool& __get_disableEyeAnchorCameras();

  constexpr bool const& __get_disableEyeAnchorCameras() const;

  constexpr void __set_disableEyeAnchorCameras(bool value);

  constexpr bool& __get__skipUpdate();

  constexpr bool const& __get__skipUpdate() const;

  constexpr void __set__skipUpdate(bool value);

  constexpr ::StringW& __get_trackingSpaceName();

  constexpr ::StringW const& __get_trackingSpaceName() const;

  constexpr void __set_trackingSpaceName(::StringW value);

  constexpr ::StringW& __get_trackerAnchorName();

  constexpr ::StringW const& __get_trackerAnchorName() const;

  constexpr void __set_trackerAnchorName(::StringW value);

  constexpr ::StringW& __get_leftEyeAnchorName();

  constexpr ::StringW const& __get_leftEyeAnchorName() const;

  constexpr void __set_leftEyeAnchorName(::StringW value);

  constexpr ::StringW& __get_centerEyeAnchorName();

  constexpr ::StringW const& __get_centerEyeAnchorName() const;

  constexpr void __set_centerEyeAnchorName(::StringW value);

  constexpr ::StringW& __get_rightEyeAnchorName();

  constexpr ::StringW const& __get_rightEyeAnchorName() const;

  constexpr void __set_rightEyeAnchorName(::StringW value);

  constexpr ::StringW& __get_leftHandAnchorName();

  constexpr ::StringW const& __get_leftHandAnchorName() const;

  constexpr void __set_leftHandAnchorName(::StringW value);

  constexpr ::StringW& __get_rightHandAnchorName();

  constexpr ::StringW const& __get_rightHandAnchorName() const;

  constexpr void __set_rightHandAnchorName(::StringW value);

  constexpr ::StringW& __get_leftControllerAnchorName();

  constexpr ::StringW const& __get_leftControllerAnchorName() const;

  constexpr void __set_leftControllerAnchorName(::StringW value);

  constexpr ::StringW& __get_rightControllerAnchorName();

  constexpr ::StringW const& __get_rightControllerAnchorName() const;

  constexpr void __set_rightControllerAnchorName(::StringW value);

  constexpr ::StringW& __get_leftHandAnchorDetachedName();

  constexpr ::StringW const& __get_leftHandAnchorDetachedName() const;

  constexpr void __set_leftHandAnchorDetachedName(::StringW value);

  constexpr ::StringW& __get_rightHandAnchorDetachedName();

  constexpr ::StringW const& __get_rightHandAnchorDetachedName() const;

  constexpr void __set_rightHandAnchorDetachedName(::StringW value);

  constexpr ::StringW& __get_leftControllerInHandAnchorName();

  constexpr ::StringW const& __get_leftControllerInHandAnchorName() const;

  constexpr void __set_leftControllerInHandAnchorName(::StringW value);

  constexpr ::StringW& __get_leftHandOnControllerAnchorName();

  constexpr ::StringW const& __get_leftHandOnControllerAnchorName() const;

  constexpr void __set_leftHandOnControllerAnchorName(::StringW value);

  constexpr ::StringW& __get_rightControllerInHandAnchorName();

  constexpr ::StringW const& __get_rightControllerInHandAnchorName() const;

  constexpr void __set_rightControllerInHandAnchorName(::StringW value);

  constexpr ::StringW& __get_rightHandOnControllerAnchorName();

  constexpr ::StringW const& __get_rightHandOnControllerAnchorName() const;

  constexpr void __set_rightHandOnControllerAnchorName(::StringW value);

  constexpr ::UnityEngine::Camera*& __get__centerEyeCamera();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Camera*> const& __get__centerEyeCamera() const;

  constexpr void __set__centerEyeCamera(::UnityEngine::Camera* value);

  constexpr ::UnityEngine::Camera*& __get__leftEyeCamera();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Camera*> const& __get__leftEyeCamera() const;

  constexpr void __set__leftEyeCamera(::UnityEngine::Camera* value);

  constexpr ::UnityEngine::Camera*& __get__rightEyeCamera();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Camera*> const& __get__rightEyeCamera() const;

  constexpr void __set__rightEyeCamera(::UnityEngine::Camera* value);

  constexpr ::UnityEngine::Matrix4x4& __get__previousTrackingSpaceTransform();

  constexpr ::UnityEngine::Matrix4x4 const& __get__previousTrackingSpaceTransform() const;

  constexpr void __set__previousTrackingSpaceTransform(::UnityEngine::Matrix4x4 value);

  /// @brief Method get_leftEyeCamera, addr 0x27162b4, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::Camera* get_leftEyeCamera();

  /// @brief Method get_rightEyeCamera, addr 0x27162d0, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::Camera* get_rightEyeCamera();

  /// @brief Method get_trackingSpace, addr 0x27162ec, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Transform* get_trackingSpace();

  /// @brief Method set_trackingSpace, addr 0x27162f4, size 0x8, virtual false, abstract: false, final false
  inline void set_trackingSpace(::UnityEngine::Transform* value);

  /// @brief Method get_leftEyeAnchor, addr 0x27162fc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Transform* get_leftEyeAnchor();

  /// @brief Method set_leftEyeAnchor, addr 0x2716304, size 0x8, virtual false, abstract: false, final false
  inline void set_leftEyeAnchor(::UnityEngine::Transform* value);

  /// @brief Method get_centerEyeAnchor, addr 0x271630c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Transform* get_centerEyeAnchor();

  /// @brief Method set_centerEyeAnchor, addr 0x2716314, size 0x8, virtual false, abstract: false, final false
  inline void set_centerEyeAnchor(::UnityEngine::Transform* value);

  /// @brief Method get_rightEyeAnchor, addr 0x271631c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Transform* get_rightEyeAnchor();

  /// @brief Method set_rightEyeAnchor, addr 0x2716324, size 0x8, virtual false, abstract: false, final false
  inline void set_rightEyeAnchor(::UnityEngine::Transform* value);

  /// @brief Method get_leftHandAnchor, addr 0x271632c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Transform* get_leftHandAnchor();

  /// @brief Method set_leftHandAnchor, addr 0x2716334, size 0x8, virtual false, abstract: false, final false
  inline void set_leftHandAnchor(::UnityEngine::Transform* value);

  /// @brief Method get_rightHandAnchor, addr 0x271633c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Transform* get_rightHandAnchor();

  /// @brief Method set_rightHandAnchor, addr 0x2716344, size 0x8, virtual false, abstract: false, final false
  inline void set_rightHandAnchor(::UnityEngine::Transform* value);

  /// @brief Method get_leftHandAnchorDetached, addr 0x271634c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Transform* get_leftHandAnchorDetached();

  /// @brief Method set_leftHandAnchorDetached, addr 0x2716354, size 0x8, virtual false, abstract: false, final false
  inline void set_leftHandAnchorDetached(::UnityEngine::Transform* value);

  /// @brief Method get_rightHandAnchorDetached, addr 0x271635c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Transform* get_rightHandAnchorDetached();

  /// @brief Method set_rightHandAnchorDetached, addr 0x2716364, size 0x8, virtual false, abstract: false, final false
  inline void set_rightHandAnchorDetached(::UnityEngine::Transform* value);

  /// @brief Method get_leftControllerInHandAnchor, addr 0x271636c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Transform* get_leftControllerInHandAnchor();

  /// @brief Method set_leftControllerInHandAnchor, addr 0x2716374, size 0x8, virtual false, abstract: false, final false
  inline void set_leftControllerInHandAnchor(::UnityEngine::Transform* value);

  /// @brief Method get_leftHandOnControllerAnchor, addr 0x271637c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Transform* get_leftHandOnControllerAnchor();

  /// @brief Method set_leftHandOnControllerAnchor, addr 0x2716384, size 0x8, virtual false, abstract: false, final false
  inline void set_leftHandOnControllerAnchor(::UnityEngine::Transform* value);

  /// @brief Method get_rightControllerInHandAnchor, addr 0x271638c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Transform* get_rightControllerInHandAnchor();

  /// @brief Method set_rightControllerInHandAnchor, addr 0x2716394, size 0x8, virtual false, abstract: false, final false
  inline void set_rightControllerInHandAnchor(::UnityEngine::Transform* value);

  /// @brief Method get_rightHandOnControllerAnchor, addr 0x271639c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Transform* get_rightHandOnControllerAnchor();

  /// @brief Method set_rightHandOnControllerAnchor, addr 0x27163a4, size 0x8, virtual false, abstract: false, final false
  inline void set_rightHandOnControllerAnchor(::UnityEngine::Transform* value);

  /// @brief Method get_leftControllerAnchor, addr 0x27163ac, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Transform* get_leftControllerAnchor();

  /// @brief Method set_leftControllerAnchor, addr 0x27163b4, size 0x8, virtual false, abstract: false, final false
  inline void set_leftControllerAnchor(::UnityEngine::Transform* value);

  /// @brief Method get_rightControllerAnchor, addr 0x27163bc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Transform* get_rightControllerAnchor();

  /// @brief Method set_rightControllerAnchor, addr 0x27163c4, size 0x8, virtual false, abstract: false, final false
  inline void set_rightControllerAnchor(::UnityEngine::Transform* value);

  /// @brief Method get_trackerAnchor, addr 0x27163cc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Transform* get_trackerAnchor();

  /// @brief Method set_trackerAnchor, addr 0x27163d4, size 0x8, virtual false, abstract: false, final false
  inline void set_trackerAnchor(::UnityEngine::Transform* value);

  /// @brief Method add_UpdatedAnchors, addr 0x27163dc, size 0xb0, virtual false, abstract: false, final false
  inline void add_UpdatedAnchors(::System::Action_1<::GlobalNamespace::OVRCameraRig*>* value);

  /// @brief Method remove_UpdatedAnchors, addr 0x271648c, size 0xb0, virtual false, abstract: false, final false
  inline void remove_UpdatedAnchors(::System::Action_1<::GlobalNamespace::OVRCameraRig*>* value);

  /// @brief Method add_TrackingSpaceChanged, addr 0x271653c, size 0xb0, virtual false, abstract: false, final false
  inline void add_TrackingSpaceChanged(::System::Action_1<::UnityEngine::Transform*>* value);

  /// @brief Method remove_TrackingSpaceChanged, addr 0x27165ec, size 0xb0, virtual false, abstract: false, final false
  inline void remove_TrackingSpaceChanged(::System::Action_1<::UnityEngine::Transform*>* value);

  /// @brief Method Awake, addr 0x271669c, size 0x18, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method Start, addr 0x27166b4, size 0x88, virtual true, abstract: false, final false
  inline void Start();

  /// @brief Method FixedUpdate, addr 0x271673c, size 0x20, virtual true, abstract: false, final false
  inline void FixedUpdate();

  /// @brief Method Update, addr 0x271675c, size 0x24, virtual true, abstract: false, final false
  inline void Update();

  /// @brief Method OnDestroy, addr 0x2716780, size 0x74, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method UpdateAnchors, addr 0x27167f4, size 0x147c, virtual true, abstract: false, final false
  inline void UpdateAnchors(bool updateEyeAnchors, bool updateHandAnchors);

  /// @brief Method OnBeforeRenderCallback, addr 0x2717d48, size 0xd4, virtual true, abstract: false, final false
  inline void OnBeforeRenderCallback();

  /// @brief Method CheckForTrackingSpaceChangesAndRaiseEvent, addr 0x2717e1c, size 0x27c, virtual true, abstract: false, final false
  inline void CheckForTrackingSpaceChangesAndRaiseEvent();

  /// @brief Method RaiseUpdatedAnchorsEvent, addr 0x2718098, size 0x20, virtual true, abstract: false, final false
  inline void RaiseUpdatedAnchorsEvent();

  /// @brief Method EnsureGameObjectIntegrity, addr 0x27180b8, size 0x9b4, virtual true, abstract: false, final false
  inline void EnsureGameObjectIntegrity();

  /// @brief Method ConfigureAnchor, addr 0x2718a6c, size 0x25c, virtual true, abstract: false, final false
  inline ::UnityEngine::Transform* ConfigureAnchor(::UnityEngine::Transform* root, ::StringW name);

  /// @brief Method ComputeTrackReferenceMatrix, addr 0x2718cc8, size 0x2d4, virtual true, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 ComputeTrackReferenceMatrix();

  /// @brief Method CheckForAnchorsInParent, addr 0x2718f9c, size 0xe0, virtual false, abstract: false, final false
  inline void CheckForAnchorsInParent();

  static inline ::GlobalNamespace::OVRCameraRig* New_ctor();

  /// @brief Method .ctor, addr 0x271907c, size 0x228, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <CheckForAnchorsInParent>g__Check|105_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void _CheckForAnchorsInParent_g__Check_105_0(::UnityEngine::Transform* node);

  // Ctor Parameters [CppParam { name: "", ty: "OVRCameraRig", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRCameraRig(OVRCameraRig&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRCameraRig", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRCameraRig(OVRCameraRig const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRCameraRig();

public:
  /// @brief Field <trackingSpace>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Transform* ____trackingSpace_k__BackingField;

  /// @brief Field <leftEyeAnchor>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Transform* ____leftEyeAnchor_k__BackingField;

  /// @brief Field <centerEyeAnchor>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Transform* ____centerEyeAnchor_k__BackingField;

  /// @brief Field <rightEyeAnchor>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Transform* ____rightEyeAnchor_k__BackingField;

  /// @brief Field <leftHandAnchor>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Transform* ____leftHandAnchor_k__BackingField;

  /// @brief Field <rightHandAnchor>k__BackingField, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Transform* ____rightHandAnchor_k__BackingField;

  /// @brief Field <leftHandAnchorDetached>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::Transform* ____leftHandAnchorDetached_k__BackingField;

  /// @brief Field <rightHandAnchorDetached>k__BackingField, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::Transform* ____rightHandAnchorDetached_k__BackingField;

  /// @brief Field <leftControllerInHandAnchor>k__BackingField, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::Transform* ____leftControllerInHandAnchor_k__BackingField;

  /// @brief Field <leftHandOnControllerAnchor>k__BackingField, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::Transform* ____leftHandOnControllerAnchor_k__BackingField;

  /// @brief Field <rightControllerInHandAnchor>k__BackingField, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::Transform* ____rightControllerInHandAnchor_k__BackingField;

  /// @brief Field <rightHandOnControllerAnchor>k__BackingField, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::Transform* ____rightHandOnControllerAnchor_k__BackingField;

  /// @brief Field <leftControllerAnchor>k__BackingField, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::Transform* ____leftControllerAnchor_k__BackingField;

  /// @brief Field <rightControllerAnchor>k__BackingField, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::Transform* ____rightControllerAnchor_k__BackingField;

  /// @brief Field <trackerAnchor>k__BackingField, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::Transform* ____trackerAnchor_k__BackingField;

  /// @brief Field UpdatedAnchors, offset: 0x90, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::OVRCameraRig*>* ___UpdatedAnchors;

  /// @brief Field TrackingSpaceChanged, offset: 0x98, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::Transform*>* ___TrackingSpaceChanged;

  /// @brief Field usePerEyeCameras, offset: 0xa0, size: 0x1, def value: None
  bool ___usePerEyeCameras;

  /// @brief Field useFixedUpdateForTracking, offset: 0xa1, size: 0x1, def value: None
  bool ___useFixedUpdateForTracking;

  /// @brief Field disableEyeAnchorCameras, offset: 0xa2, size: 0x1, def value: None
  bool ___disableEyeAnchorCameras;

  /// @brief Field _skipUpdate, offset: 0xa3, size: 0x1, def value: None
  bool ____skipUpdate;

  /// @brief Field trackingSpaceName, offset: 0xa8, size: 0x8, def value: None
  ::StringW ___trackingSpaceName;

  /// @brief Field trackerAnchorName, offset: 0xb0, size: 0x8, def value: None
  ::StringW ___trackerAnchorName;

  /// @brief Field leftEyeAnchorName, offset: 0xb8, size: 0x8, def value: None
  ::StringW ___leftEyeAnchorName;

  /// @brief Field centerEyeAnchorName, offset: 0xc0, size: 0x8, def value: None
  ::StringW ___centerEyeAnchorName;

  /// @brief Field rightEyeAnchorName, offset: 0xc8, size: 0x8, def value: None
  ::StringW ___rightEyeAnchorName;

  /// @brief Field leftHandAnchorName, offset: 0xd0, size: 0x8, def value: None
  ::StringW ___leftHandAnchorName;

  /// @brief Field rightHandAnchorName, offset: 0xd8, size: 0x8, def value: None
  ::StringW ___rightHandAnchorName;

  /// @brief Field leftControllerAnchorName, offset: 0xe0, size: 0x8, def value: None
  ::StringW ___leftControllerAnchorName;

  /// @brief Field rightControllerAnchorName, offset: 0xe8, size: 0x8, def value: None
  ::StringW ___rightControllerAnchorName;

  /// @brief Field leftHandAnchorDetachedName, offset: 0xf0, size: 0x8, def value: None
  ::StringW ___leftHandAnchorDetachedName;

  /// @brief Field rightHandAnchorDetachedName, offset: 0xf8, size: 0x8, def value: None
  ::StringW ___rightHandAnchorDetachedName;

  /// @brief Field leftControllerInHandAnchorName, offset: 0x100, size: 0x8, def value: None
  ::StringW ___leftControllerInHandAnchorName;

  /// @brief Field leftHandOnControllerAnchorName, offset: 0x108, size: 0x8, def value: None
  ::StringW ___leftHandOnControllerAnchorName;

  /// @brief Field rightControllerInHandAnchorName, offset: 0x110, size: 0x8, def value: None
  ::StringW ___rightControllerInHandAnchorName;

  /// @brief Field rightHandOnControllerAnchorName, offset: 0x118, size: 0x8, def value: None
  ::StringW ___rightHandOnControllerAnchorName;

  /// @brief Field _centerEyeCamera, offset: 0x120, size: 0x8, def value: None
  ::UnityEngine::Camera* ____centerEyeCamera;

  /// @brief Field _leftEyeCamera, offset: 0x128, size: 0x8, def value: None
  ::UnityEngine::Camera* ____leftEyeCamera;

  /// @brief Field _rightEyeCamera, offset: 0x130, size: 0x8, def value: None
  ::UnityEngine::Camera* ____rightEyeCamera;

  /// @brief Field _previousTrackingSpaceTransform, offset: 0x138, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 ____previousTrackingSpaceTransform;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRCameraRig, 0x178>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCameraRig, ____trackingSpace_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCameraRig, ____leftEyeAnchor_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCameraRig, ____centerEyeAnchor_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCameraRig, ____rightEyeAnchor_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCameraRig, ____leftHandAnchor_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCameraRig, ____rightHandAnchor_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCameraRig, ____leftHandAnchorDetached_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCameraRig, ____rightHandAnchorDetached_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCameraRig, ____leftControllerInHandAnchor_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCameraRig, ____leftHandOnControllerAnchor_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCameraRig, ____rightControllerInHandAnchor_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCameraRig, ____rightHandOnControllerAnchor_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCameraRig, ____leftControllerAnchor_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCameraRig, ____rightControllerAnchor_k__BackingField) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCameraRig, ____trackerAnchor_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCameraRig, ___UpdatedAnchors) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCameraRig, ___TrackingSpaceChanged) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCameraRig, ___usePerEyeCameras) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCameraRig, ___useFixedUpdateForTracking) == 0xa1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCameraRig, ___disableEyeAnchorCameras) == 0xa2, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCameraRig, ____skipUpdate) == 0xa3, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCameraRig, ___trackingSpaceName) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCameraRig, ___trackerAnchorName) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCameraRig, ___leftEyeAnchorName) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCameraRig, ___centerEyeAnchorName) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCameraRig, ___rightEyeAnchorName) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCameraRig, ___leftHandAnchorName) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCameraRig, ___rightHandAnchorName) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCameraRig, ___leftControllerAnchorName) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCameraRig, ___rightControllerAnchorName) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCameraRig, ___leftHandAnchorDetachedName) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCameraRig, ___rightHandAnchorDetachedName) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCameraRig, ___leftControllerInHandAnchorName) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCameraRig, ___leftHandOnControllerAnchorName) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCameraRig, ___rightControllerInHandAnchorName) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCameraRig, ___rightHandOnControllerAnchorName) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCameraRig, ____centerEyeCamera) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCameraRig, ____leftEyeCamera) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCameraRig, ____rightEyeCamera) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCameraRig, ____previousTrackingSpaceTransform) == 0x138, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRCameraRig);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRCameraRig*, "", "OVRCameraRig");
