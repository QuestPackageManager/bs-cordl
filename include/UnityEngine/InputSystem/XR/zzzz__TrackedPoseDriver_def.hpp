#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/XR/TrackedPoseDriver.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputActionProperty_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TrackedPoseDriver)
namespace UnityEngine::InputSystem::XR {
struct TrackedPoseDriver_TrackingStates;
}
namespace UnityEngine::InputSystem::XR {
struct TrackedPoseDriver_TrackingType;
}
namespace UnityEngine::InputSystem::XR {
struct TrackedPoseDriver_UpdateType;
}
namespace UnityEngine::InputSystem {
struct InputActionProperty;
}
namespace UnityEngine::InputSystem {
struct InputAction_CallbackContext;
}
namespace UnityEngine::InputSystem {
class InputAction;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::InputSystem::XR {
struct TrackedPoseDriver_TrackingStates;
}
namespace UnityEngine::InputSystem::XR {
struct TrackedPoseDriver_TrackingType;
}
namespace UnityEngine::InputSystem::XR {
struct TrackedPoseDriver_UpdateType;
}
namespace UnityEngine::InputSystem::XR {
class TrackedPoseDriver;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::XR::TrackedPoseDriver_TrackingStates);
MARK_VAL_T(::UnityEngine::InputSystem::XR::TrackedPoseDriver_TrackingType);
MARK_VAL_T(::UnityEngine::InputSystem::XR::TrackedPoseDriver_UpdateType);
MARK_REF_PTR_T(::UnityEngine::InputSystem::XR::TrackedPoseDriver);
// Dependencies
namespace UnityEngine::InputSystem::XR {
// Is value type: true
// CS Name: UnityEngine.InputSystem.XR.TrackedPoseDriver/TrackingType
struct CORDL_TYPE TrackedPoseDriver_TrackingType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TrackedPoseDriver_TrackingType_Unwrapped
  enum struct __TrackedPoseDriver_TrackingType_Unwrapped : int32_t {
    __E_RotationAndPosition = static_cast<int32_t>(0x0),
    __E_RotationOnly = static_cast<int32_t>(0x1),
    __E_PositionOnly = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TrackedPoseDriver_TrackingType_Unwrapped() const noexcept {
    return static_cast<__TrackedPoseDriver_TrackingType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TrackedPoseDriver_TrackingType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TrackedPoseDriver_TrackingType(int32_t value__) noexcept;

  /// @brief Field PositionOnly value: I32(2)
  static ::UnityEngine::InputSystem::XR::TrackedPoseDriver_TrackingType const PositionOnly;

  /// @brief Field RotationAndPosition value: I32(0)
  static ::UnityEngine::InputSystem::XR::TrackedPoseDriver_TrackingType const RotationAndPosition;

  /// @brief Field RotationOnly value: I32(1)
  static ::UnityEngine::InputSystem::XR::TrackedPoseDriver_TrackingType const RotationOnly;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6730 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::XR::TrackedPoseDriver_TrackingType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::XR::TrackedPoseDriver_TrackingType, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::XR
// Dependencies
namespace UnityEngine::InputSystem::XR {
// Is value type: true
// CS Name: UnityEngine.InputSystem.XR.TrackedPoseDriver/TrackingStates
struct CORDL_TYPE TrackedPoseDriver_TrackingStates {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TrackedPoseDriver_TrackingStates_Unwrapped
  enum struct __TrackedPoseDriver_TrackingStates_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Position = static_cast<int32_t>(0x1),
    __E_Rotation = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TrackedPoseDriver_TrackingStates_Unwrapped() const noexcept {
    return static_cast<__TrackedPoseDriver_TrackingStates_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TrackedPoseDriver_TrackingStates();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TrackedPoseDriver_TrackingStates(int32_t value__) noexcept;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::InputSystem::XR::TrackedPoseDriver_TrackingStates const None;

  /// @brief Field Position value: I32(1)
  static ::UnityEngine::InputSystem::XR::TrackedPoseDriver_TrackingStates const Position;

  /// @brief Field Rotation value: I32(2)
  static ::UnityEngine::InputSystem::XR::TrackedPoseDriver_TrackingStates const Rotation;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6731 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::XR::TrackedPoseDriver_TrackingStates, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::XR::TrackedPoseDriver_TrackingStates, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::XR
// Dependencies
namespace UnityEngine::InputSystem::XR {
// Is value type: true
// CS Name: UnityEngine.InputSystem.XR.TrackedPoseDriver/UpdateType
struct CORDL_TYPE TrackedPoseDriver_UpdateType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TrackedPoseDriver_UpdateType_Unwrapped
  enum struct __TrackedPoseDriver_UpdateType_Unwrapped : int32_t {
    __E_UpdateAndBeforeRender = static_cast<int32_t>(0x0),
    __E_Update = static_cast<int32_t>(0x1),
    __E_BeforeRender = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TrackedPoseDriver_UpdateType_Unwrapped() const noexcept {
    return static_cast<__TrackedPoseDriver_UpdateType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TrackedPoseDriver_UpdateType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TrackedPoseDriver_UpdateType(int32_t value__) noexcept;

  /// @brief Field BeforeRender value: I32(2)
  static ::UnityEngine::InputSystem::XR::TrackedPoseDriver_UpdateType const BeforeRender;

  /// @brief Field Update value: I32(1)
  static ::UnityEngine::InputSystem::XR::TrackedPoseDriver_UpdateType const Update;

  /// @brief Field UpdateAndBeforeRender value: I32(0)
  static ::UnityEngine::InputSystem::XR::TrackedPoseDriver_UpdateType const UpdateAndBeforeRender;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6732 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::XR::TrackedPoseDriver_UpdateType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::XR::TrackedPoseDriver_UpdateType, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::XR
// Dependencies UnityEngine.ISerializationCallbackReceiver, UnityEngine.InputSystem.InputActionProperty, UnityEngine.InputSystem.XR.TrackedPoseDriver::TrackingStates,
// UnityEngine.InputSystem.XR.TrackedPoseDriver::TrackingType, UnityEngine.InputSystem.XR.TrackedPoseDriver::UpdateType, UnityEngine.MonoBehaviour, UnityEngine.Quaternion, UnityEngine.Vector3
namespace UnityEngine::InputSystem::XR {
// Is value type: false
// CS Name: UnityEngine.InputSystem.XR.TrackedPoseDriver
class CORDL_TYPE TrackedPoseDriver : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using TrackingStates = ::UnityEngine::InputSystem::XR::TrackedPoseDriver_TrackingStates;

  using TrackingType = ::UnityEngine::InputSystem::XR::TrackedPoseDriver_TrackingType;

  using UpdateType = ::UnityEngine::InputSystem::XR::TrackedPoseDriver_UpdateType;

  __declspec(property(get = get_ignoreTrackingState, put = set_ignoreTrackingState)) bool ignoreTrackingState;

  /// @brief Field m_CurrentPosition, offset 0x78, size 0xc
  __declspec(property(get = __cordl_internal_get_m_CurrentPosition, put = __cordl_internal_set_m_CurrentPosition)) ::UnityEngine::Vector3 m_CurrentPosition;

  /// @brief Field m_CurrentRotation, offset 0x84, size 0x10
  __declspec(property(get = __cordl_internal_get_m_CurrentRotation, put = __cordl_internal_set_m_CurrentRotation)) ::UnityEngine::Quaternion m_CurrentRotation;

  /// @brief Field m_CurrentTrackingState, offset 0x94, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CurrentTrackingState,
                      put = __cordl_internal_set_m_CurrentTrackingState)) ::UnityEngine::InputSystem::XR::TrackedPoseDriver_TrackingStates m_CurrentTrackingState;

  /// @brief Field m_IgnoreTrackingState, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IgnoreTrackingState, put = __cordl_internal_set_m_IgnoreTrackingState)) bool m_IgnoreTrackingState;

  /// @brief Field m_IsFirstUpdate, offset 0x9b, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsFirstUpdate, put = __cordl_internal_set_m_IsFirstUpdate)) bool m_IsFirstUpdate;

  /// @brief Field m_PositionAction, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PositionAction, put = __cordl_internal_set_m_PositionAction)) ::UnityEngine::InputSystem::InputAction* m_PositionAction;

  /// @brief Field m_PositionBound, offset 0x99, size 0x1
  __declspec(property(get = __cordl_internal_get_m_PositionBound, put = __cordl_internal_set_m_PositionBound)) bool m_PositionBound;

  /// @brief Field m_PositionInput, offset 0x30, size 0x18
  __declspec(property(get = __cordl_internal_get_m_PositionInput, put = __cordl_internal_set_m_PositionInput)) ::UnityEngine::InputSystem::InputActionProperty m_PositionInput;

  /// @brief Field m_RotationAction, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RotationAction, put = __cordl_internal_set_m_RotationAction)) ::UnityEngine::InputSystem::InputAction* m_RotationAction;

  /// @brief Field m_RotationBound, offset 0x98, size 0x1
  __declspec(property(get = __cordl_internal_get_m_RotationBound, put = __cordl_internal_set_m_RotationBound)) bool m_RotationBound;

  /// @brief Field m_RotationInput, offset 0x48, size 0x18
  __declspec(property(get = __cordl_internal_get_m_RotationInput, put = __cordl_internal_set_m_RotationInput)) ::UnityEngine::InputSystem::InputActionProperty m_RotationInput;

  /// @brief Field m_TrackingStateBound, offset 0x9a, size 0x1
  __declspec(property(get = __cordl_internal_get_m_TrackingStateBound, put = __cordl_internal_set_m_TrackingStateBound)) bool m_TrackingStateBound;

  /// @brief Field m_TrackingStateInput, offset 0x60, size 0x18
  __declspec(property(get = __cordl_internal_get_m_TrackingStateInput, put = __cordl_internal_set_m_TrackingStateInput)) ::UnityEngine::InputSystem::InputActionProperty m_TrackingStateInput;

  /// @brief Field m_TrackingType, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_TrackingType, put = __cordl_internal_set_m_TrackingType)) ::UnityEngine::InputSystem::XR::TrackedPoseDriver_TrackingType m_TrackingType;

  /// @brief Field m_UpdateType, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_m_UpdateType, put = __cordl_internal_set_m_UpdateType)) ::UnityEngine::InputSystem::XR::TrackedPoseDriver_UpdateType m_UpdateType;

  __declspec(property(get = get_positionAction, put = set_positionAction)) ::UnityEngine::InputSystem::InputAction* positionAction;

  __declspec(property(get = get_positionInput, put = set_positionInput)) ::UnityEngine::InputSystem::InputActionProperty positionInput;

  __declspec(property(get = get_rotationAction, put = set_rotationAction)) ::UnityEngine::InputSystem::InputAction* rotationAction;

  __declspec(property(get = get_rotationInput, put = set_rotationInput)) ::UnityEngine::InputSystem::InputActionProperty rotationInput;

  __declspec(property(get = get_trackingStateInput, put = set_trackingStateInput)) ::UnityEngine::InputSystem::InputActionProperty trackingStateInput;

  __declspec(property(get = get_trackingType, put = set_trackingType)) ::UnityEngine::InputSystem::XR::TrackedPoseDriver_TrackingType trackingType;

  __declspec(property(get = get_updateType, put = set_updateType)) ::UnityEngine::InputSystem::XR::TrackedPoseDriver_UpdateType updateType;

  /// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

  /// @brief Method Awake, addr 0x45e429c, size 0x2c, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method BindActions, addr 0x45e3ebc, size 0x20, virtual false, abstract: false, final false
  inline void BindActions();

  /// @brief Method BindPosition, addr 0x45e35ac, size 0x1a0, virtual false, abstract: false, final false
  inline void BindPosition();

  /// @brief Method BindRotation, addr 0x45e3964, size 0x1a0, virtual false, abstract: false, final false
  inline void BindRotation();

  /// @brief Method BindTrackingState, addr 0x45e3d1c, size 0x1a0, virtual false, abstract: false, final false
  inline void BindTrackingState();

  /// @brief Method HasStereoCamera, addr 0x45e42c8, size 0x84, virtual false, abstract: false, final false
  inline bool HasStereoCamera(::ByRef<::UnityEngine::Camera*> cameraComponent);

  static inline ::UnityEngine::InputSystem::XR::TrackedPoseDriver* New_ctor();

  /// @brief Method OnBeforeRender, addr 0x45e4750, size 0x20, virtual true, abstract: false, final false
  inline void OnBeforeRender();

  /// @brief Method OnDestroy, addr 0x45e44b0, size 0x2c, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnDisable, addr 0x45e4404, size 0xac, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x45e434c, size 0xb8, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnPositionCanceled, addr 0x45e3f5c, size 0x58, virtual false, abstract: false, final false
  inline void OnPositionCanceled(::UnityEngine::InputSystem::InputAction_CallbackContext context);

  /// @brief Method OnPositionPerformed, addr 0x45e3efc, size 0x60, virtual false, abstract: false, final false
  inline void OnPositionPerformed(::UnityEngine::InputSystem::InputAction_CallbackContext context);

  /// @brief Method OnRotationCanceled, addr 0x45e4014, size 0x50, virtual false, abstract: false, final false
  inline void OnRotationCanceled(::UnityEngine::InputSystem::InputAction_CallbackContext context);

  /// @brief Method OnRotationPerformed, addr 0x45e3fb4, size 0x60, virtual false, abstract: false, final false
  inline void OnRotationPerformed(::UnityEngine::InputSystem::InputAction_CallbackContext context);

  /// @brief Method OnTrackingStateCanceled, addr 0x45e40c0, size 0x8, virtual false, abstract: false, final false
  inline void OnTrackingStateCanceled(::UnityEngine::InputSystem::InputAction_CallbackContext context);

  /// @brief Method OnTrackingStatePerformed, addr 0x45e4064, size 0x5c, virtual false, abstract: false, final false
  inline void OnTrackingStatePerformed(::UnityEngine::InputSystem::InputAction_CallbackContext context);

  /// @brief Method OnUpdate, addr 0x45e4734, size 0x1c, virtual true, abstract: false, final false
  inline void OnUpdate();

  /// @brief Method PerformUpdate, addr 0x45e4770, size 0x1c, virtual true, abstract: false, final false
  inline void PerformUpdate();

  /// @brief Method ReadTrackingState, addr 0x45e4600, size 0x134, virtual false, abstract: false, final false
  inline void ReadTrackingState();

  /// @brief Method Reset, addr 0x45e40c8, size 0x1d4, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method SetLocalTransform, addr 0x45e478c, size 0x16c, virtual true, abstract: false, final false
  inline void SetLocalTransform(::UnityEngine::Vector3 newPosition, ::UnityEngine::Quaternion newRotation);

  /// @brief Method UnbindActions, addr 0x45e3edc, size 0x20, virtual false, abstract: false, final false
  inline void UnbindActions();

  /// @brief Method UnbindPosition, addr 0x45e3468, size 0x144, virtual false, abstract: false, final false
  inline void UnbindPosition();

  /// @brief Method UnbindRotation, addr 0x45e3820, size 0x144, virtual false, abstract: false, final false
  inline void UnbindRotation();

  /// @brief Method UnbindTrackingState, addr 0x45e3bd8, size 0x144, virtual false, abstract: false, final false
  inline void UnbindTrackingState();

  /// @brief Method UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize, addr 0x45e49a4, size 0x90, virtual true, abstract: false, final true
  inline void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize();

  /// @brief Method UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize, addr 0x45e49a0, size 0x4, virtual true, abstract: false, final true
  inline void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize();

  /// @brief Method UpdateCallback, addr 0x45e44dc, size 0x124, virtual false, abstract: false, final false
  inline void UpdateCallback();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_CurrentPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_CurrentPosition();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_m_CurrentRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_m_CurrentRotation();

  constexpr ::UnityEngine::InputSystem::XR::TrackedPoseDriver_TrackingStates const& __cordl_internal_get_m_CurrentTrackingState() const;

  constexpr ::UnityEngine::InputSystem::XR::TrackedPoseDriver_TrackingStates& __cordl_internal_get_m_CurrentTrackingState();

  constexpr bool const& __cordl_internal_get_m_IgnoreTrackingState() const;

  constexpr bool& __cordl_internal_get_m_IgnoreTrackingState();

  constexpr bool const& __cordl_internal_get_m_IsFirstUpdate() const;

  constexpr bool& __cordl_internal_get_m_IsFirstUpdate();

  constexpr ::UnityEngine::InputSystem::InputAction* const& __cordl_internal_get_m_PositionAction() const;

  constexpr ::UnityEngine::InputSystem::InputAction*& __cordl_internal_get_m_PositionAction();

  constexpr bool const& __cordl_internal_get_m_PositionBound() const;

  constexpr bool& __cordl_internal_get_m_PositionBound();

  constexpr ::UnityEngine::InputSystem::InputActionProperty const& __cordl_internal_get_m_PositionInput() const;

  constexpr ::UnityEngine::InputSystem::InputActionProperty& __cordl_internal_get_m_PositionInput();

  constexpr ::UnityEngine::InputSystem::InputAction* const& __cordl_internal_get_m_RotationAction() const;

  constexpr ::UnityEngine::InputSystem::InputAction*& __cordl_internal_get_m_RotationAction();

  constexpr bool const& __cordl_internal_get_m_RotationBound() const;

  constexpr bool& __cordl_internal_get_m_RotationBound();

  constexpr ::UnityEngine::InputSystem::InputActionProperty const& __cordl_internal_get_m_RotationInput() const;

  constexpr ::UnityEngine::InputSystem::InputActionProperty& __cordl_internal_get_m_RotationInput();

  constexpr bool const& __cordl_internal_get_m_TrackingStateBound() const;

  constexpr bool& __cordl_internal_get_m_TrackingStateBound();

  constexpr ::UnityEngine::InputSystem::InputActionProperty const& __cordl_internal_get_m_TrackingStateInput() const;

  constexpr ::UnityEngine::InputSystem::InputActionProperty& __cordl_internal_get_m_TrackingStateInput();

  constexpr ::UnityEngine::InputSystem::XR::TrackedPoseDriver_TrackingType const& __cordl_internal_get_m_TrackingType() const;

  constexpr ::UnityEngine::InputSystem::XR::TrackedPoseDriver_TrackingType& __cordl_internal_get_m_TrackingType();

  constexpr ::UnityEngine::InputSystem::XR::TrackedPoseDriver_UpdateType const& __cordl_internal_get_m_UpdateType() const;

  constexpr ::UnityEngine::InputSystem::XR::TrackedPoseDriver_UpdateType& __cordl_internal_get_m_UpdateType();

  constexpr void __cordl_internal_set_m_CurrentPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_CurrentRotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_m_CurrentTrackingState(::UnityEngine::InputSystem::XR::TrackedPoseDriver_TrackingStates value);

  constexpr void __cordl_internal_set_m_IgnoreTrackingState(bool value);

  constexpr void __cordl_internal_set_m_IsFirstUpdate(bool value);

  constexpr void __cordl_internal_set_m_PositionAction(::UnityEngine::InputSystem::InputAction* value);

  constexpr void __cordl_internal_set_m_PositionBound(bool value);

  constexpr void __cordl_internal_set_m_PositionInput(::UnityEngine::InputSystem::InputActionProperty value);

  constexpr void __cordl_internal_set_m_RotationAction(::UnityEngine::InputSystem::InputAction* value);

  constexpr void __cordl_internal_set_m_RotationBound(bool value);

  constexpr void __cordl_internal_set_m_RotationInput(::UnityEngine::InputSystem::InputActionProperty value);

  constexpr void __cordl_internal_set_m_TrackingStateBound(bool value);

  constexpr void __cordl_internal_set_m_TrackingStateInput(::UnityEngine::InputSystem::InputActionProperty value);

  constexpr void __cordl_internal_set_m_TrackingType(::UnityEngine::InputSystem::XR::TrackedPoseDriver_TrackingType value);

  constexpr void __cordl_internal_set_m_UpdateType(::UnityEngine::InputSystem::XR::TrackedPoseDriver_UpdateType value);

  /// @brief Method .ctor, addr 0x45e4a34, size 0xa8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ignoreTrackingState, addr 0x45e3380, size 0x8, virtual false, abstract: false, final false
  inline bool get_ignoreTrackingState();

  /// @brief Method get_positionAction, addr 0x45e48f8, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputAction* get_positionAction();

  /// @brief Method get_positionInput, addr 0x45e3394, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionProperty get_positionInput();

  /// @brief Method get_rotationAction, addr 0x45e494c, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputAction* get_rotationAction();

  /// @brief Method get_rotationInput, addr 0x45e374c, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionProperty get_rotationInput();

  /// @brief Method get_trackingStateInput, addr 0x45e3b04, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionProperty get_trackingStateInput();

  /// @brief Method get_trackingType, addr 0x45e3360, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::XR::TrackedPoseDriver_TrackingType get_trackingType();

  /// @brief Method get_updateType, addr 0x45e3370, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::XR::TrackedPoseDriver_UpdateType get_updateType();

  /// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

  /// @brief Method set_ignoreTrackingState, addr 0x45e3388, size 0xc, virtual false, abstract: false, final false
  inline void set_ignoreTrackingState(bool value);

  /// @brief Method set_positionAction, addr 0x45e4904, size 0x48, virtual false, abstract: false, final false
  inline void set_positionAction(::UnityEngine::InputSystem::InputAction* value);

  /// @brief Method set_positionInput, addr 0x45e33a8, size 0xc0, virtual false, abstract: false, final false
  inline void set_positionInput(::UnityEngine::InputSystem::InputActionProperty value);

  /// @brief Method set_rotationAction, addr 0x45e4958, size 0x48, virtual false, abstract: false, final false
  inline void set_rotationAction(::UnityEngine::InputSystem::InputAction* value);

  /// @brief Method set_rotationInput, addr 0x45e3760, size 0xc0, virtual false, abstract: false, final false
  inline void set_rotationInput(::UnityEngine::InputSystem::InputActionProperty value);

  /// @brief Method set_trackingStateInput, addr 0x45e3b18, size 0xc0, virtual false, abstract: false, final false
  inline void set_trackingStateInput(::UnityEngine::InputSystem::InputActionProperty value);

  /// @brief Method set_trackingType, addr 0x45e3368, size 0x8, virtual false, abstract: false, final false
  inline void set_trackingType(::UnityEngine::InputSystem::XR::TrackedPoseDriver_TrackingType value);

  /// @brief Method set_updateType, addr 0x45e3378, size 0x8, virtual false, abstract: false, final false
  inline void set_updateType(::UnityEngine::InputSystem::XR::TrackedPoseDriver_UpdateType value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TrackedPoseDriver();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TrackedPoseDriver", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TrackedPoseDriver(TrackedPoseDriver&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TrackedPoseDriver", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TrackedPoseDriver(TrackedPoseDriver const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6733 };

  /// @brief Field m_TrackingType, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::InputSystem::XR::TrackedPoseDriver_TrackingType ___m_TrackingType;

  /// @brief Field m_UpdateType, offset: 0x24, size: 0x4, def value: None
  ::UnityEngine::InputSystem::XR::TrackedPoseDriver_UpdateType ___m_UpdateType;

  /// @brief Field m_IgnoreTrackingState, offset: 0x28, size: 0x1, def value: None
  bool ___m_IgnoreTrackingState;

  /// @brief Field m_PositionInput, offset: 0x30, size: 0x18, def value: None
  ::UnityEngine::InputSystem::InputActionProperty ___m_PositionInput;

  /// @brief Field m_RotationInput, offset: 0x48, size: 0x18, def value: None
  ::UnityEngine::InputSystem::InputActionProperty ___m_RotationInput;

  /// @brief Field m_TrackingStateInput, offset: 0x60, size: 0x18, def value: None
  ::UnityEngine::InputSystem::InputActionProperty ___m_TrackingStateInput;

  /// @brief Field m_CurrentPosition, offset: 0x78, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_CurrentPosition;

  /// @brief Field m_CurrentRotation, offset: 0x84, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___m_CurrentRotation;

  /// @brief Field m_CurrentTrackingState, offset: 0x94, size: 0x4, def value: None
  ::UnityEngine::InputSystem::XR::TrackedPoseDriver_TrackingStates ___m_CurrentTrackingState;

  /// @brief Field m_RotationBound, offset: 0x98, size: 0x1, def value: None
  bool ___m_RotationBound;

  /// @brief Field m_PositionBound, offset: 0x99, size: 0x1, def value: None
  bool ___m_PositionBound;

  /// @brief Field m_TrackingStateBound, offset: 0x9a, size: 0x1, def value: None
  bool ___m_TrackingStateBound;

  /// @brief Field m_IsFirstUpdate, offset: 0x9b, size: 0x1, def value: None
  bool ___m_IsFirstUpdate;

  /// @brief Field m_PositionAction, offset: 0xa0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputAction* ___m_PositionAction;

  /// @brief Field m_RotationAction, offset: 0xa8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputAction* ___m_RotationAction;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::XR::TrackedPoseDriver, ___m_TrackingType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::TrackedPoseDriver, ___m_UpdateType) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::TrackedPoseDriver, ___m_IgnoreTrackingState) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::TrackedPoseDriver, ___m_PositionInput) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::TrackedPoseDriver, ___m_RotationInput) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::TrackedPoseDriver, ___m_TrackingStateInput) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::TrackedPoseDriver, ___m_CurrentPosition) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::TrackedPoseDriver, ___m_CurrentRotation) == 0x84, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::TrackedPoseDriver, ___m_CurrentTrackingState) == 0x94, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::TrackedPoseDriver, ___m_RotationBound) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::TrackedPoseDriver, ___m_PositionBound) == 0x99, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::TrackedPoseDriver, ___m_TrackingStateBound) == 0x9a, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::TrackedPoseDriver, ___m_IsFirstUpdate) == 0x9b, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::TrackedPoseDriver, ___m_PositionAction) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::TrackedPoseDriver, ___m_RotationAction) == 0xa8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::XR::TrackedPoseDriver, 0xb0>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::XR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XR::TrackedPoseDriver_TrackingStates, "UnityEngine.InputSystem.XR", "TrackedPoseDriver/TrackingStates");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XR::TrackedPoseDriver_TrackingType, "UnityEngine.InputSystem.XR", "TrackedPoseDriver/TrackingType");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XR::TrackedPoseDriver_UpdateType, "UnityEngine.InputSystem.XR", "TrackedPoseDriver/UpdateType");
NEED_NO_BOX(::UnityEngine::InputSystem::XR::TrackedPoseDriver);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XR::TrackedPoseDriver*, "UnityEngine.InputSystem.XR", "TrackedPoseDriver");
