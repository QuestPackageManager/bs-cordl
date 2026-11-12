#pragma once
// IWYU pragma private; include "UnityEngine/XR/CommonUsages.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/zzzz__Eyes_def.hpp"
#include "UnityEngine/XR/zzzz__Hand_def.hpp"
#include "UnityEngine/XR/zzzz__InputFeatureUsage_1_def.hpp"
#include "UnityEngine/XR/zzzz__InputTrackingState_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CommonUsages)
// Forward declare root types
namespace UnityEngine::XR {
class CommonUsages;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::CommonUsages*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::CommonUsages*, "UnityEngine.XR", "CommonUsages");
// Dependencies System.Object, UnityEngine.Quaternion, UnityEngine.Vector2, UnityEngine.Vector3, UnityEngine.XR.Eyes, UnityEngine.XR.Hand, UnityEngine.XR.InputFeatureUsage`1<T>,
// UnityEngine.XR.InputTrackingState
namespace UnityEngine::XR {
// Is value type: false
// CS Name: UnityEngine.XR.CommonUsages
class CORDL_TYPE CommonUsages : public ::System::Object {
public:
  // Declarations
  /// @brief Field batteryLevel, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_batteryLevel, put = setStaticF_batteryLevel)) ::UnityEngine::XR::InputFeatureUsage_1<float_t> batteryLevel;

  /// @brief Field centerEyeAcceleration, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_centerEyeAcceleration, put = setStaticF_centerEyeAcceleration)) ::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3> centerEyeAcceleration;

  /// @brief Field centerEyeAngularAcceleration, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_centerEyeAngularAcceleration, put = setStaticF_centerEyeAngularAcceleration)) ::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3>
      centerEyeAngularAcceleration;

  /// @brief Field centerEyeAngularVelocity, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_centerEyeAngularVelocity, put = setStaticF_centerEyeAngularVelocity)) ::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3> centerEyeAngularVelocity;

  /// @brief Field centerEyePosition, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_centerEyePosition, put = setStaticF_centerEyePosition)) ::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3> centerEyePosition;

  /// @brief Field centerEyeRotation, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_centerEyeRotation, put = setStaticF_centerEyeRotation)) ::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Quaternion> centerEyeRotation;

  /// @brief Field centerEyeVelocity, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_centerEyeVelocity, put = setStaticF_centerEyeVelocity)) ::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3> centerEyeVelocity;

  /// @brief Field colorCameraAcceleration, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_colorCameraAcceleration, put = setStaticF_colorCameraAcceleration)) ::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3> colorCameraAcceleration;

  /// @brief Field colorCameraAngularAcceleration, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_colorCameraAngularAcceleration, put = setStaticF_colorCameraAngularAcceleration)) ::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3>
      colorCameraAngularAcceleration;

  /// @brief Field colorCameraAngularVelocity, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_colorCameraAngularVelocity, put = setStaticF_colorCameraAngularVelocity)) ::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3>
      colorCameraAngularVelocity;

  /// @brief Field colorCameraPosition, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_colorCameraPosition, put = setStaticF_colorCameraPosition)) ::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3> colorCameraPosition;

  /// @brief Field colorCameraRotation, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_colorCameraRotation, put = setStaticF_colorCameraRotation)) ::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Quaternion> colorCameraRotation;

  /// @brief Field colorCameraVelocity, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_colorCameraVelocity, put = setStaticF_colorCameraVelocity)) ::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3> colorCameraVelocity;

  /// @brief Field dPad, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_dPad, put = setStaticF_dPad)) ::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector2> dPad;

  /// @brief Field deviceAcceleration, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_deviceAcceleration, put = setStaticF_deviceAcceleration)) ::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3> deviceAcceleration;

  /// @brief Field deviceAngularAcceleration, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_deviceAngularAcceleration, put = setStaticF_deviceAngularAcceleration)) ::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3> deviceAngularAcceleration;

  /// @brief Field deviceAngularVelocity, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_deviceAngularVelocity, put = setStaticF_deviceAngularVelocity)) ::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3> deviceAngularVelocity;

  /// @brief Field devicePosition, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_devicePosition, put = setStaticF_devicePosition)) ::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3> devicePosition;

  /// @brief Field deviceRotation, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_deviceRotation, put = setStaticF_deviceRotation)) ::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Quaternion> deviceRotation;

  /// @brief Field deviceVelocity, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_deviceVelocity, put = setStaticF_deviceVelocity)) ::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3> deviceVelocity;

  /// @brief Field eyesData, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_eyesData, put = setStaticF_eyesData)) ::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::XR::Eyes> eyesData;

  /// @brief Field grip, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_grip, put = setStaticF_grip)) ::UnityEngine::XR::InputFeatureUsage_1<float_t> grip;

  /// @brief Field gripButton, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_gripButton, put = setStaticF_gripButton)) ::UnityEngine::XR::InputFeatureUsage_1<bool> gripButton;

  /// @brief Field handData, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_handData, put = setStaticF_handData)) ::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::XR::Hand> handData;

  /// @brief Field indexFinger, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_indexFinger, put = setStaticF_indexFinger)) ::UnityEngine::XR::InputFeatureUsage_1<float_t> indexFinger;

  /// @brief Field indexTouch, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_indexTouch, put = setStaticF_indexTouch)) ::UnityEngine::XR::InputFeatureUsage_1<float_t> indexTouch;

  /// @brief Field isTracked, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_isTracked, put = setStaticF_isTracked)) ::UnityEngine::XR::InputFeatureUsage_1<bool> isTracked;

  /// @brief Field leftEyeAcceleration, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_leftEyeAcceleration, put = setStaticF_leftEyeAcceleration)) ::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3> leftEyeAcceleration;

  /// @brief Field leftEyeAngularAcceleration, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_leftEyeAngularAcceleration, put = setStaticF_leftEyeAngularAcceleration)) ::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3>
      leftEyeAngularAcceleration;

  /// @brief Field leftEyeAngularVelocity, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_leftEyeAngularVelocity, put = setStaticF_leftEyeAngularVelocity)) ::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3> leftEyeAngularVelocity;

  /// @brief Field leftEyePosition, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_leftEyePosition, put = setStaticF_leftEyePosition)) ::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3> leftEyePosition;

  /// @brief Field leftEyeRotation, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_leftEyeRotation, put = setStaticF_leftEyeRotation)) ::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Quaternion> leftEyeRotation;

  /// @brief Field leftEyeVelocity, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_leftEyeVelocity, put = setStaticF_leftEyeVelocity)) ::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3> leftEyeVelocity;

  /// @brief Field menuButton, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_menuButton, put = setStaticF_menuButton)) ::UnityEngine::XR::InputFeatureUsage_1<bool> menuButton;

  /// @brief Field middleFinger, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_middleFinger, put = setStaticF_middleFinger)) ::UnityEngine::XR::InputFeatureUsage_1<float_t> middleFinger;

  /// @brief Field pinkyFinger, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_pinkyFinger, put = setStaticF_pinkyFinger)) ::UnityEngine::XR::InputFeatureUsage_1<float_t> pinkyFinger;

  /// @brief Field primary2DAxis, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_primary2DAxis, put = setStaticF_primary2DAxis)) ::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector2> primary2DAxis;

  /// @brief Field primary2DAxisClick, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_primary2DAxisClick, put = setStaticF_primary2DAxisClick)) ::UnityEngine::XR::InputFeatureUsage_1<bool> primary2DAxisClick;

  /// @brief Field primary2DAxisTouch, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_primary2DAxisTouch, put = setStaticF_primary2DAxisTouch)) ::UnityEngine::XR::InputFeatureUsage_1<bool> primary2DAxisTouch;

  /// @brief Field primaryButton, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_primaryButton, put = setStaticF_primaryButton)) ::UnityEngine::XR::InputFeatureUsage_1<bool> primaryButton;

  /// @brief Field primaryTouch, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_primaryTouch, put = setStaticF_primaryTouch)) ::UnityEngine::XR::InputFeatureUsage_1<bool> primaryTouch;

  /// @brief Field rightEyeAcceleration, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_rightEyeAcceleration, put = setStaticF_rightEyeAcceleration)) ::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3> rightEyeAcceleration;

  /// @brief Field rightEyeAngularAcceleration, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_rightEyeAngularAcceleration, put = setStaticF_rightEyeAngularAcceleration)) ::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3>
      rightEyeAngularAcceleration;

  /// @brief Field rightEyeAngularVelocity, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_rightEyeAngularVelocity, put = setStaticF_rightEyeAngularVelocity)) ::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3> rightEyeAngularVelocity;

  /// @brief Field rightEyePosition, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_rightEyePosition, put = setStaticF_rightEyePosition)) ::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3> rightEyePosition;

  /// @brief Field rightEyeRotation, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_rightEyeRotation, put = setStaticF_rightEyeRotation)) ::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Quaternion> rightEyeRotation;

  /// @brief Field rightEyeVelocity, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_rightEyeVelocity, put = setStaticF_rightEyeVelocity)) ::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3> rightEyeVelocity;

  /// @brief Field ringFinger, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ringFinger, put = setStaticF_ringFinger)) ::UnityEngine::XR::InputFeatureUsage_1<float_t> ringFinger;

  /// @brief Field secondary2DAxis, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_secondary2DAxis, put = setStaticF_secondary2DAxis)) ::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector2> secondary2DAxis;

  /// @brief Field secondary2DAxisClick, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_secondary2DAxisClick, put = setStaticF_secondary2DAxisClick)) ::UnityEngine::XR::InputFeatureUsage_1<bool> secondary2DAxisClick;

  /// @brief Field secondary2DAxisTouch, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_secondary2DAxisTouch, put = setStaticF_secondary2DAxisTouch)) ::UnityEngine::XR::InputFeatureUsage_1<bool> secondary2DAxisTouch;

  /// @brief Field secondaryButton, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_secondaryButton, put = setStaticF_secondaryButton)) ::UnityEngine::XR::InputFeatureUsage_1<bool> secondaryButton;

  /// @brief Field secondaryTouch, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_secondaryTouch, put = setStaticF_secondaryTouch)) ::UnityEngine::XR::InputFeatureUsage_1<bool> secondaryTouch;

  /// @brief Field thumbTouch, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_thumbTouch, put = setStaticF_thumbTouch)) ::UnityEngine::XR::InputFeatureUsage_1<float_t> thumbTouch;

  /// @brief Field thumbrest, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_thumbrest, put = setStaticF_thumbrest)) ::UnityEngine::XR::InputFeatureUsage_1<bool> thumbrest;

  /// @brief Field trackingState, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_trackingState, put = setStaticF_trackingState)) ::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::XR::InputTrackingState> trackingState;

  /// @brief Field trigger, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_trigger, put = setStaticF_trigger)) ::UnityEngine::XR::InputFeatureUsage_1<float_t> trigger;

  /// @brief Field triggerButton, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_triggerButton, put = setStaticF_triggerButton)) ::UnityEngine::XR::InputFeatureUsage_1<bool> triggerButton;

  /// @brief Field userPresence, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_userPresence, put = setStaticF_userPresence)) ::UnityEngine::XR::InputFeatureUsage_1<bool> userPresence;

  static inline ::UnityEngine::XR::InputFeatureUsage_1<float_t> getStaticF_batteryLevel();

  static inline ::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3> getStaticF_centerEyeAcceleration();

  static inline ::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3> getStaticF_centerEyeAngularAcceleration();

  static inline ::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3> getStaticF_centerEyeAngularVelocity();

  static inline ::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3> getStaticF_centerEyePosition();

  static inline ::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Quaternion> getStaticF_centerEyeRotation();

  static inline ::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3> getStaticF_centerEyeVelocity();

  static inline ::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3> getStaticF_colorCameraAcceleration();

  static inline ::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3> getStaticF_colorCameraAngularAcceleration();

  static inline ::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3> getStaticF_colorCameraAngularVelocity();

  static inline ::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3> getStaticF_colorCameraPosition();

  static inline ::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Quaternion> getStaticF_colorCameraRotation();

  static inline ::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3> getStaticF_colorCameraVelocity();

  static inline ::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector2> getStaticF_dPad();

  static inline ::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3> getStaticF_deviceAcceleration();

  static inline ::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3> getStaticF_deviceAngularAcceleration();

  static inline ::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3> getStaticF_deviceAngularVelocity();

  static inline ::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3> getStaticF_devicePosition();

  static inline ::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Quaternion> getStaticF_deviceRotation();

  static inline ::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3> getStaticF_deviceVelocity();

  static inline ::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::XR::Eyes> getStaticF_eyesData();

  static inline ::UnityEngine::XR::InputFeatureUsage_1<float_t> getStaticF_grip();

  static inline ::UnityEngine::XR::InputFeatureUsage_1<bool> getStaticF_gripButton();

  static inline ::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::XR::Hand> getStaticF_handData();

  static inline ::UnityEngine::XR::InputFeatureUsage_1<float_t> getStaticF_indexFinger();

  static inline ::UnityEngine::XR::InputFeatureUsage_1<float_t> getStaticF_indexTouch();

  static inline ::UnityEngine::XR::InputFeatureUsage_1<bool> getStaticF_isTracked();

  static inline ::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3> getStaticF_leftEyeAcceleration();

  static inline ::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3> getStaticF_leftEyeAngularAcceleration();

  static inline ::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3> getStaticF_leftEyeAngularVelocity();

  static inline ::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3> getStaticF_leftEyePosition();

  static inline ::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Quaternion> getStaticF_leftEyeRotation();

  static inline ::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3> getStaticF_leftEyeVelocity();

  static inline ::UnityEngine::XR::InputFeatureUsage_1<bool> getStaticF_menuButton();

  static inline ::UnityEngine::XR::InputFeatureUsage_1<float_t> getStaticF_middleFinger();

  static inline ::UnityEngine::XR::InputFeatureUsage_1<float_t> getStaticF_pinkyFinger();

  static inline ::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector2> getStaticF_primary2DAxis();

  static inline ::UnityEngine::XR::InputFeatureUsage_1<bool> getStaticF_primary2DAxisClick();

  static inline ::UnityEngine::XR::InputFeatureUsage_1<bool> getStaticF_primary2DAxisTouch();

  static inline ::UnityEngine::XR::InputFeatureUsage_1<bool> getStaticF_primaryButton();

  static inline ::UnityEngine::XR::InputFeatureUsage_1<bool> getStaticF_primaryTouch();

  static inline ::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3> getStaticF_rightEyeAcceleration();

  static inline ::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3> getStaticF_rightEyeAngularAcceleration();

  static inline ::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3> getStaticF_rightEyeAngularVelocity();

  static inline ::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3> getStaticF_rightEyePosition();

  static inline ::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Quaternion> getStaticF_rightEyeRotation();

  static inline ::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3> getStaticF_rightEyeVelocity();

  static inline ::UnityEngine::XR::InputFeatureUsage_1<float_t> getStaticF_ringFinger();

  static inline ::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector2> getStaticF_secondary2DAxis();

  static inline ::UnityEngine::XR::InputFeatureUsage_1<bool> getStaticF_secondary2DAxisClick();

  static inline ::UnityEngine::XR::InputFeatureUsage_1<bool> getStaticF_secondary2DAxisTouch();

  static inline ::UnityEngine::XR::InputFeatureUsage_1<bool> getStaticF_secondaryButton();

  static inline ::UnityEngine::XR::InputFeatureUsage_1<bool> getStaticF_secondaryTouch();

  static inline ::UnityEngine::XR::InputFeatureUsage_1<float_t> getStaticF_thumbTouch();

  static inline ::UnityEngine::XR::InputFeatureUsage_1<bool> getStaticF_thumbrest();

  static inline ::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::XR::InputTrackingState> getStaticF_trackingState();

  static inline ::UnityEngine::XR::InputFeatureUsage_1<float_t> getStaticF_trigger();

  static inline ::UnityEngine::XR::InputFeatureUsage_1<bool> getStaticF_triggerButton();

  static inline ::UnityEngine::XR::InputFeatureUsage_1<bool> getStaticF_userPresence();

  static inline void setStaticF_batteryLevel(::UnityEngine::XR::InputFeatureUsage_1<float_t> value);

  static inline void setStaticF_centerEyeAcceleration(::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3> value);

  static inline void setStaticF_centerEyeAngularAcceleration(::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3> value);

  static inline void setStaticF_centerEyeAngularVelocity(::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3> value);

  static inline void setStaticF_centerEyePosition(::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3> value);

  static inline void setStaticF_centerEyeRotation(::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Quaternion> value);

  static inline void setStaticF_centerEyeVelocity(::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3> value);

  static inline void setStaticF_colorCameraAcceleration(::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3> value);

  static inline void setStaticF_colorCameraAngularAcceleration(::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3> value);

  static inline void setStaticF_colorCameraAngularVelocity(::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3> value);

  static inline void setStaticF_colorCameraPosition(::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3> value);

  static inline void setStaticF_colorCameraRotation(::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Quaternion> value);

  static inline void setStaticF_colorCameraVelocity(::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3> value);

  static inline void setStaticF_dPad(::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector2> value);

  static inline void setStaticF_deviceAcceleration(::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3> value);

  static inline void setStaticF_deviceAngularAcceleration(::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3> value);

  static inline void setStaticF_deviceAngularVelocity(::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3> value);

  static inline void setStaticF_devicePosition(::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3> value);

  static inline void setStaticF_deviceRotation(::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Quaternion> value);

  static inline void setStaticF_deviceVelocity(::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3> value);

  static inline void setStaticF_eyesData(::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::XR::Eyes> value);

  static inline void setStaticF_grip(::UnityEngine::XR::InputFeatureUsage_1<float_t> value);

  static inline void setStaticF_gripButton(::UnityEngine::XR::InputFeatureUsage_1<bool> value);

  static inline void setStaticF_handData(::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::XR::Hand> value);

  static inline void setStaticF_indexFinger(::UnityEngine::XR::InputFeatureUsage_1<float_t> value);

  static inline void setStaticF_indexTouch(::UnityEngine::XR::InputFeatureUsage_1<float_t> value);

  static inline void setStaticF_isTracked(::UnityEngine::XR::InputFeatureUsage_1<bool> value);

  static inline void setStaticF_leftEyeAcceleration(::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3> value);

  static inline void setStaticF_leftEyeAngularAcceleration(::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3> value);

  static inline void setStaticF_leftEyeAngularVelocity(::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3> value);

  static inline void setStaticF_leftEyePosition(::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3> value);

  static inline void setStaticF_leftEyeRotation(::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Quaternion> value);

  static inline void setStaticF_leftEyeVelocity(::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3> value);

  static inline void setStaticF_menuButton(::UnityEngine::XR::InputFeatureUsage_1<bool> value);

  static inline void setStaticF_middleFinger(::UnityEngine::XR::InputFeatureUsage_1<float_t> value);

  static inline void setStaticF_pinkyFinger(::UnityEngine::XR::InputFeatureUsage_1<float_t> value);

  static inline void setStaticF_primary2DAxis(::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector2> value);

  static inline void setStaticF_primary2DAxisClick(::UnityEngine::XR::InputFeatureUsage_1<bool> value);

  static inline void setStaticF_primary2DAxisTouch(::UnityEngine::XR::InputFeatureUsage_1<bool> value);

  static inline void setStaticF_primaryButton(::UnityEngine::XR::InputFeatureUsage_1<bool> value);

  static inline void setStaticF_primaryTouch(::UnityEngine::XR::InputFeatureUsage_1<bool> value);

  static inline void setStaticF_rightEyeAcceleration(::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3> value);

  static inline void setStaticF_rightEyeAngularAcceleration(::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3> value);

  static inline void setStaticF_rightEyeAngularVelocity(::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3> value);

  static inline void setStaticF_rightEyePosition(::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3> value);

  static inline void setStaticF_rightEyeRotation(::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Quaternion> value);

  static inline void setStaticF_rightEyeVelocity(::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3> value);

  static inline void setStaticF_ringFinger(::UnityEngine::XR::InputFeatureUsage_1<float_t> value);

  static inline void setStaticF_secondary2DAxis(::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector2> value);

  static inline void setStaticF_secondary2DAxisClick(::UnityEngine::XR::InputFeatureUsage_1<bool> value);

  static inline void setStaticF_secondary2DAxisTouch(::UnityEngine::XR::InputFeatureUsage_1<bool> value);

  static inline void setStaticF_secondaryButton(::UnityEngine::XR::InputFeatureUsage_1<bool> value);

  static inline void setStaticF_secondaryTouch(::UnityEngine::XR::InputFeatureUsage_1<bool> value);

  static inline void setStaticF_thumbTouch(::UnityEngine::XR::InputFeatureUsage_1<float_t> value);

  static inline void setStaticF_thumbrest(::UnityEngine::XR::InputFeatureUsage_1<bool> value);

  static inline void setStaticF_trackingState(::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::XR::InputTrackingState> value);

  static inline void setStaticF_trigger(::UnityEngine::XR::InputFeatureUsage_1<float_t> value);

  static inline void setStaticF_triggerButton(::UnityEngine::XR::InputFeatureUsage_1<bool> value);

  static inline void setStaticF_userPresence(::UnityEngine::XR::InputFeatureUsage_1<bool> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CommonUsages();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CommonUsages", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CommonUsages(CommonUsages&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CommonUsages", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CommonUsages(CommonUsages const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22472 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::CommonUsages) == 0x10, "Size mismatch!");

} // namespace UnityEngine::XR
