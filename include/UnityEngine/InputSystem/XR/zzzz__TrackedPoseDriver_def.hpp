#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/XR/zzzz__TrackedPoseDriver_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionProperty_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TrackedPoseDriver)
namespace UnityEngine::InputSystem::XR {
struct __TrackedPoseDriver__TrackingType;
}
namespace UnityEngine::InputSystem::XR {
struct __TrackedPoseDriver__UpdateType;
}
namespace UnityEngine::InputSystem {
struct InputActionProperty;
}
namespace UnityEngine::InputSystem {
class InputAction;
}
namespace UnityEngine::InputSystem {
struct __InputAction__CallbackContext;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::InputSystem::XR {
struct __TrackedPoseDriver__TrackingType;
}
namespace UnityEngine::InputSystem::XR {
struct __TrackedPoseDriver__UpdateType;
}
namespace UnityEngine::InputSystem::XR {
class TrackedPoseDriver;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingType);
MARK_VAL_T(::UnityEngine::InputSystem::XR::__TrackedPoseDriver__UpdateType);
MARK_REF_PTR_T(::UnityEngine::InputSystem::XR::TrackedPoseDriver);
// Type: ::TrackingType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::XR {
// Is value type: true
// CS Name: ::TrackedPoseDriver::TrackingType
struct CORDL_TYPE __TrackedPoseDriver__TrackingType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____TrackedPoseDriver__TrackingType_Unwrapped
  enum struct ____TrackedPoseDriver__TrackingType_Unwrapped : int32_t {
    __E_RotationAndPosition = static_cast<int32_t>(0x0),
    __E_RotationOnly = static_cast<int32_t>(0x1),
    __E_PositionOnly = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____TrackedPoseDriver__TrackingType_Unwrapped() const noexcept {
    return static_cast<____TrackedPoseDriver__TrackingType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TrackedPoseDriver__TrackingType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __TrackedPoseDriver__TrackingType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field PositionOnly value: static_cast<int32_t>(0x2)
  static ::UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingType const PositionOnly;

  /// @brief Field RotationAndPosition value: static_cast<int32_t>(0x0)
  static ::UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingType const RotationAndPosition;

  /// @brief Field RotationOnly value: static_cast<int32_t>(0x1)
  static ::UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingType const RotationOnly;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingType, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingType, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::XR
// Type: ::UpdateType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::XR {
// Is value type: true
// CS Name: ::TrackedPoseDriver::UpdateType
struct CORDL_TYPE __TrackedPoseDriver__UpdateType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____TrackedPoseDriver__UpdateType_Unwrapped
  enum struct ____TrackedPoseDriver__UpdateType_Unwrapped : int32_t {
    __E_UpdateAndBeforeRender = static_cast<int32_t>(0x0),
    __E_Update = static_cast<int32_t>(0x1),
    __E_BeforeRender = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____TrackedPoseDriver__UpdateType_Unwrapped() const noexcept {
    return static_cast<____TrackedPoseDriver__UpdateType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TrackedPoseDriver__UpdateType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __TrackedPoseDriver__UpdateType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field BeforeRender value: static_cast<int32_t>(0x2)
  static ::UnityEngine::InputSystem::XR::__TrackedPoseDriver__UpdateType const BeforeRender;

  /// @brief Field Update value: static_cast<int32_t>(0x1)
  static ::UnityEngine::InputSystem::XR::__TrackedPoseDriver__UpdateType const Update;

  /// @brief Field UpdateAndBeforeRender value: static_cast<int32_t>(0x0)
  static ::UnityEngine::InputSystem::XR::__TrackedPoseDriver__UpdateType const UpdateAndBeforeRender;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::XR::__TrackedPoseDriver__UpdateType, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::__TrackedPoseDriver__UpdateType, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::XR
// Type: UnityEngine.InputSystem.XR::TrackedPoseDriver
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 129, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::XR {
// Is value type: false
// CS Name: ::UnityEngine.InputSystem.XR::TrackedPoseDriver*
class CORDL_TYPE TrackedPoseDriver : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using TrackingType = ::UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingType;

  using UpdateType = ::UnityEngine::InputSystem::XR::__TrackedPoseDriver__UpdateType;

  /// @brief Field m_CurrentPosition, offset 0x50, size 0xc
  __declspec(property(get = __cordl_internal_get_m_CurrentPosition, put = __cordl_internal_set_m_CurrentPosition))::UnityEngine::Vector3 m_CurrentPosition;

  /// @brief Field m_CurrentRotation, offset 0x5c, size 0x10
  __declspec(property(get = __cordl_internal_get_m_CurrentRotation, put = __cordl_internal_set_m_CurrentRotation))::UnityEngine::Quaternion m_CurrentRotation;

  /// @brief Field m_HasMigratedActions, offset 0x80, size 0x1
  __declspec(property(get = __cordl_internal_get_m_HasMigratedActions, put = __cordl_internal_set_m_HasMigratedActions)) bool m_HasMigratedActions;

  /// @brief Field m_PositionAction, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PositionAction, put = __cordl_internal_set_m_PositionAction))::UnityEngine::InputSystem::InputAction* m_PositionAction;

  /// @brief Field m_PositionBound, offset 0x6d, size 0x1
  __declspec(property(get = __cordl_internal_get_m_PositionBound, put = __cordl_internal_set_m_PositionBound)) bool m_PositionBound;

  /// @brief Field m_PositionInput, offset 0x20, size 0x18
  __declspec(property(get = __cordl_internal_get_m_PositionInput, put = __cordl_internal_set_m_PositionInput))::UnityEngine::InputSystem::InputActionProperty m_PositionInput;

  /// @brief Field m_RotationAction, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RotationAction, put = __cordl_internal_set_m_RotationAction))::UnityEngine::InputSystem::InputAction* m_RotationAction;

  /// @brief Field m_RotationBound, offset 0x6c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_RotationBound, put = __cordl_internal_set_m_RotationBound)) bool m_RotationBound;

  /// @brief Field m_RotationInput, offset 0x38, size 0x18
  __declspec(property(get = __cordl_internal_get_m_RotationInput, put = __cordl_internal_set_m_RotationInput))::UnityEngine::InputSystem::InputActionProperty m_RotationInput;

  /// @brief Field m_TrackingType, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_TrackingType, put = __cordl_internal_set_m_TrackingType))::UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingType m_TrackingType;

  /// @brief Field m_UpdateType, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_UpdateType, put = __cordl_internal_set_m_UpdateType))::UnityEngine::InputSystem::XR::__TrackedPoseDriver__UpdateType m_UpdateType;

  __declspec(property(get = get_positionAction, put = set_positionAction))::UnityEngine::InputSystem::InputAction* positionAction;

  __declspec(property(get = get_positionInput, put = set_positionInput))::UnityEngine::InputSystem::InputActionProperty positionInput;

  __declspec(property(get = get_rotationAction, put = set_rotationAction))::UnityEngine::InputSystem::InputAction* rotationAction;

  __declspec(property(get = get_rotationInput, put = set_rotationInput))::UnityEngine::InputSystem::InputActionProperty rotationInput;

  __declspec(property(get = get_trackingType, put = set_trackingType))::UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingType trackingType;

  __declspec(property(get = get_updateType, put = set_updateType))::UnityEngine::InputSystem::XR::__TrackedPoseDriver__UpdateType updateType;

  /// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

  /// @brief Method Awake, addr 0x2c0da88, size 0x6c, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method BindActions, addr 0x2c0d8f0, size 0x18, virtual false, abstract: false, final false
  inline void BindActions();

  /// @brief Method BindPosition, addr 0x2c0d3d0, size 0x1a8, virtual false, abstract: false, final false
  inline void BindPosition();

  /// @brief Method BindRotation, addr 0x2c0d748, size 0x1a8, virtual false, abstract: false, final false
  inline void BindRotation();

  /// @brief Method HasStereoCamera, addr 0x2c0daf4, size 0xb8, virtual false, abstract: false, final false
  inline bool HasStereoCamera();

  static inline ::UnityEngine::InputSystem::XR::TrackedPoseDriver* New_ctor();

  /// @brief Method OnBeforeRender, addr 0x2c0de04, size 0x20, virtual true, abstract: false, final false
  inline void OnBeforeRender();

  /// @brief Method OnDestroy, addr 0x2c0dd14, size 0x6c, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnDisable, addr 0x2c0dc60, size 0xb4, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x2c0dbac, size 0xb4, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnPositionCanceled, addr 0x2c0d980, size 0x58, virtual false, abstract: false, final false
  inline void OnPositionCanceled(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnPositionPerformed, addr 0x2c0d920, size 0x60, virtual false, abstract: false, final false
  inline void OnPositionPerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnRotationCanceled, addr 0x2c0da38, size 0x50, virtual false, abstract: false, final false
  inline void OnRotationCanceled(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnRotationPerformed, addr 0x2c0d9d8, size 0x60, virtual false, abstract: false, final false
  inline void OnRotationPerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnUpdate, addr 0x2c0dde8, size 0x1c, virtual true, abstract: false, final false
  inline void OnUpdate();

  /// @brief Method PerformUpdate, addr 0x2c0def0, size 0x1c, virtual true, abstract: false, final false
  inline void PerformUpdate();

  /// @brief Method Reset, addr 0x2c0dfb4, size 0xc, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method SetLocalTransform, addr 0x2c0de24, size 0xcc, virtual true, abstract: false, final false
  inline void SetLocalTransform(::UnityEngine::Vector3 newPosition, ::UnityEngine::Quaternion newRotation);

  /// @brief Method UnbindActions, addr 0x2c0d908, size 0x18, virtual false, abstract: false, final false
  inline void UnbindActions();

  /// @brief Method UnbindPosition, addr 0x2c0d280, size 0x150, virtual false, abstract: false, final false
  inline void UnbindPosition();

  /// @brief Method UnbindRotation, addr 0x2c0d5f8, size 0x150, virtual false, abstract: false, final false
  inline void UnbindRotation();

  /// @brief Method UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize, addr 0x2c0dfc4, size 0x78, virtual true, abstract: false, final true
  inline void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize();

  /// @brief Method UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize, addr 0x2c0dfc0, size 0x4, virtual true, abstract: false, final true
  inline void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize();

  /// @brief Method UpdateCallback, addr 0x2c0dd80, size 0x68, virtual false, abstract: false, final false
  inline void UpdateCallback();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_CurrentPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_CurrentPosition();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_m_CurrentRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_m_CurrentRotation();

  constexpr bool const& __cordl_internal_get_m_HasMigratedActions() const;

  constexpr bool& __cordl_internal_get_m_HasMigratedActions();

  constexpr ::UnityEngine::InputSystem::InputAction*& __cordl_internal_get_m_PositionAction();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputAction*> const& __cordl_internal_get_m_PositionAction() const;

  constexpr bool const& __cordl_internal_get_m_PositionBound() const;

  constexpr bool& __cordl_internal_get_m_PositionBound();

  constexpr ::UnityEngine::InputSystem::InputActionProperty const& __cordl_internal_get_m_PositionInput() const;

  constexpr ::UnityEngine::InputSystem::InputActionProperty& __cordl_internal_get_m_PositionInput();

  constexpr ::UnityEngine::InputSystem::InputAction*& __cordl_internal_get_m_RotationAction();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputAction*> const& __cordl_internal_get_m_RotationAction() const;

  constexpr bool const& __cordl_internal_get_m_RotationBound() const;

  constexpr bool& __cordl_internal_get_m_RotationBound();

  constexpr ::UnityEngine::InputSystem::InputActionProperty const& __cordl_internal_get_m_RotationInput() const;

  constexpr ::UnityEngine::InputSystem::InputActionProperty& __cordl_internal_get_m_RotationInput();

  constexpr ::UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingType const& __cordl_internal_get_m_TrackingType() const;

  constexpr ::UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingType& __cordl_internal_get_m_TrackingType();

  constexpr ::UnityEngine::InputSystem::XR::__TrackedPoseDriver__UpdateType const& __cordl_internal_get_m_UpdateType() const;

  constexpr ::UnityEngine::InputSystem::XR::__TrackedPoseDriver__UpdateType& __cordl_internal_get_m_UpdateType();

  constexpr void __cordl_internal_set_m_CurrentPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_CurrentRotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_m_HasMigratedActions(bool value);

  constexpr void __cordl_internal_set_m_PositionAction(::UnityEngine::InputSystem::InputAction* value);

  constexpr void __cordl_internal_set_m_PositionBound(bool value);

  constexpr void __cordl_internal_set_m_PositionInput(::UnityEngine::InputSystem::InputActionProperty value);

  constexpr void __cordl_internal_set_m_RotationAction(::UnityEngine::InputSystem::InputAction* value);

  constexpr void __cordl_internal_set_m_RotationBound(bool value);

  constexpr void __cordl_internal_set_m_RotationInput(::UnityEngine::InputSystem::InputActionProperty value);

  constexpr void __cordl_internal_set_m_TrackingType(::UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingType value);

  constexpr void __cordl_internal_set_m_UpdateType(::UnityEngine::InputSystem::XR::__TrackedPoseDriver__UpdateType value);

  /// @brief Method .ctor, addr 0x2c0e03c, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_positionAction, addr 0x2c0df0c, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputAction* get_positionAction();

  /// @brief Method get_positionInput, addr 0x2c0d200, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionProperty get_positionInput();

  /// @brief Method get_rotationAction, addr 0x2c0df60, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputAction* get_rotationAction();

  /// @brief Method get_rotationInput, addr 0x2c0d578, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionProperty get_rotationInput();

  /// @brief Method get_trackingType, addr 0x2c0d1e0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingType get_trackingType();

  /// @brief Method get_updateType, addr 0x2c0d1f0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::XR::__TrackedPoseDriver__UpdateType get_updateType();

  /// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

  /// @brief Method set_positionAction, addr 0x2c0df18, size 0x48, virtual false, abstract: false, final false
  inline void set_positionAction(::UnityEngine::InputSystem::InputAction* value);

  /// @brief Method set_positionInput, addr 0x2c0d214, size 0x6c, virtual false, abstract: false, final false
  inline void set_positionInput(::UnityEngine::InputSystem::InputActionProperty value);

  /// @brief Method set_rotationAction, addr 0x2c0df6c, size 0x48, virtual false, abstract: false, final false
  inline void set_rotationAction(::UnityEngine::InputSystem::InputAction* value);

  /// @brief Method set_rotationInput, addr 0x2c0d58c, size 0x6c, virtual false, abstract: false, final false
  inline void set_rotationInput(::UnityEngine::InputSystem::InputActionProperty value);

  /// @brief Method set_trackingType, addr 0x2c0d1e8, size 0x8, virtual false, abstract: false, final false
  inline void set_trackingType(::UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingType value);

  /// @brief Method set_updateType, addr 0x2c0d1f8, size 0x8, virtual false, abstract: false, final false
  inline void set_updateType(::UnityEngine::InputSystem::XR::__TrackedPoseDriver__UpdateType value);

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

  /// @brief Field m_TrackingType, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingType ___m_TrackingType;

  /// @brief Field m_UpdateType, offset: 0x1c, size: 0x4, def value: None
  ::UnityEngine::InputSystem::XR::__TrackedPoseDriver__UpdateType ___m_UpdateType;

  /// @brief Field m_PositionInput, offset: 0x20, size: 0x18, def value: None
  ::UnityEngine::InputSystem::InputActionProperty ___m_PositionInput;

  /// @brief Field m_RotationInput, offset: 0x38, size: 0x18, def value: None
  ::UnityEngine::InputSystem::InputActionProperty ___m_RotationInput;

  /// @brief Field m_CurrentPosition, offset: 0x50, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_CurrentPosition;

  /// @brief Field m_CurrentRotation, offset: 0x5c, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___m_CurrentRotation;

  /// @brief Field m_RotationBound, offset: 0x6c, size: 0x1, def value: None
  bool ___m_RotationBound;

  /// @brief Field m_PositionBound, offset: 0x6d, size: 0x1, def value: None
  bool ___m_PositionBound;

  /// @brief Field m_PositionAction, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputAction* ___m_PositionAction;

  /// @brief Field m_RotationAction, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputAction* ___m_RotationAction;

  /// @brief Field m_HasMigratedActions, offset: 0x80, size: 0x1, def value: None
  bool ___m_HasMigratedActions;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::XR::TrackedPoseDriver, 0x88>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::TrackedPoseDriver, ___m_TrackingType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::TrackedPoseDriver, ___m_UpdateType) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::TrackedPoseDriver, ___m_PositionInput) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::TrackedPoseDriver, ___m_RotationInput) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::TrackedPoseDriver, ___m_CurrentPosition) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::TrackedPoseDriver, ___m_CurrentRotation) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::TrackedPoseDriver, ___m_RotationBound) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::TrackedPoseDriver, ___m_PositionBound) == 0x6d, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::TrackedPoseDriver, ___m_PositionAction) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::TrackedPoseDriver, ___m_RotationAction) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::TrackedPoseDriver, ___m_HasMigratedActions) == 0x80, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::XR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingType, "UnityEngine.InputSystem.XR", "TrackedPoseDriver/TrackingType");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XR::__TrackedPoseDriver__UpdateType, "UnityEngine.InputSystem.XR", "TrackedPoseDriver/UpdateType");
NEED_NO_BOX(::UnityEngine::InputSystem::XR::TrackedPoseDriver);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XR::TrackedPoseDriver*, "UnityEngine.InputSystem.XR", "TrackedPoseDriver");
