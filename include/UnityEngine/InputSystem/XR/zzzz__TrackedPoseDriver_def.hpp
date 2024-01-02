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
namespace UnityEngine::InputSystem {
struct InputActionProperty;
}
namespace UnityEngine::InputSystem {
struct __InputAction__CallbackContext;
}
namespace UnityEngine::InputSystem::XR {
struct __TrackedPoseDriver__UpdateType;
}
namespace UnityEngine::InputSystem::XR {
struct __TrackedPoseDriver__TrackingType;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
namespace UnityEngine::InputSystem {
class InputAction;
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
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6327))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __TrackedPoseDriver__TrackingType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TrackedPoseDriver__TrackingType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field RotationAndPosition value: static_cast<int32_t>(0x0)
  static ::UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingType const RotationAndPosition;

  /// @brief Field RotationOnly value: static_cast<int32_t>(0x1)
  static ::UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingType const RotationOnly;

  /// @brief Field PositionOnly value: static_cast<int32_t>(0x2)
  static ::UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingType const PositionOnly;

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
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6328))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __TrackedPoseDriver__UpdateType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TrackedPoseDriver__UpdateType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field UpdateAndBeforeRender value: static_cast<int32_t>(0x0)
  static ::UnityEngine::InputSystem::XR::__TrackedPoseDriver__UpdateType const UpdateAndBeforeRender;

  /// @brief Field Update value: static_cast<int32_t>(0x1)
  static ::UnityEngine::InputSystem::XR::__TrackedPoseDriver__UpdateType const Update;

  /// @brief Field BeforeRender value: static_cast<int32_t>(0x2)
  static ::UnityEngine::InputSystem::XR::__TrackedPoseDriver__UpdateType const BeforeRender;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(6328)), TypeDefinitionIndex(TypeDefinitionIndex(6327)),
// TypeDefinitionIndex(TypeDefinitionIndex(6164)), TypeDefinitionIndex(TypeDefinitionIndex(10249)), TypeDefinitionIndex(TypeDefinitionIndex(10252))} Self:
// TypeDefinitionIndex(TypeDefinitionIndex(6329)) CS Name: ::UnityEngine.InputSystem.XR::TrackedPoseDriver*
class CORDL_TYPE TrackedPoseDriver : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using UpdateType = ::UnityEngine::InputSystem::XR::__TrackedPoseDriver__UpdateType;

  using TrackingType = ::UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingType;

  /// @brief Field m_TrackingType, offset 0x18, size 0x4
  __declspec(property(get = __get_m_TrackingType, put = __set_m_TrackingType))::UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingType m_TrackingType;

  /// @brief Field m_UpdateType, offset 0x1c, size 0x4
  __declspec(property(get = __get_m_UpdateType, put = __set_m_UpdateType))::UnityEngine::InputSystem::XR::__TrackedPoseDriver__UpdateType m_UpdateType;

  /// @brief Field m_PositionInput, offset 0x20, size 0x18
  __declspec(property(get = __get_m_PositionInput, put = __set_m_PositionInput))::UnityEngine::InputSystem::InputActionProperty m_PositionInput;

  /// @brief Field m_RotationInput, offset 0x38, size 0x18
  __declspec(property(get = __get_m_RotationInput, put = __set_m_RotationInput))::UnityEngine::InputSystem::InputActionProperty m_RotationInput;

  /// @brief Field m_CurrentPosition, offset 0x50, size 0xc
  __declspec(property(get = __get_m_CurrentPosition, put = __set_m_CurrentPosition))::UnityEngine::Vector3 m_CurrentPosition;

  /// @brief Field m_CurrentRotation, offset 0x5c, size 0x10
  __declspec(property(get = __get_m_CurrentRotation, put = __set_m_CurrentRotation))::UnityEngine::Quaternion m_CurrentRotation;

  /// @brief Field m_RotationBound, offset 0x6c, size 0x1
  __declspec(property(get = __get_m_RotationBound, put = __set_m_RotationBound)) bool m_RotationBound;

  /// @brief Field m_PositionBound, offset 0x6d, size 0x1
  __declspec(property(get = __get_m_PositionBound, put = __set_m_PositionBound)) bool m_PositionBound;

  /// @brief Field m_PositionAction, offset 0x70, size 0x8
  __declspec(property(get = __get_m_PositionAction, put = __set_m_PositionAction))::UnityEngine::InputSystem::InputAction* m_PositionAction;

  /// @brief Field m_RotationAction, offset 0x78, size 0x8
  __declspec(property(get = __get_m_RotationAction, put = __set_m_RotationAction))::UnityEngine::InputSystem::InputAction* m_RotationAction;

  /// @brief Field m_HasMigratedActions, offset 0x80, size 0x1
  __declspec(property(get = __get_m_HasMigratedActions, put = __set_m_HasMigratedActions)) bool m_HasMigratedActions;

  __declspec(property(get = get_trackingType, put = set_trackingType))::UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingType trackingType;

  __declspec(property(get = get_updateType, put = set_updateType))::UnityEngine::InputSystem::XR::__TrackedPoseDriver__UpdateType updateType;

  __declspec(property(get = get_positionInput, put = set_positionInput))::UnityEngine::InputSystem::InputActionProperty positionInput;

  __declspec(property(get = get_rotationInput, put = set_rotationInput))::UnityEngine::InputSystem::InputActionProperty rotationInput;

  __declspec(property(get = get_positionAction, put = set_positionAction))::UnityEngine::InputSystem::InputAction* positionAction;

  __declspec(property(get = get_rotationAction, put = set_rotationAction))::UnityEngine::InputSystem::InputAction* rotationAction;

  /// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

  constexpr ::UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingType& __get_m_TrackingType();

  constexpr ::UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingType const& __get_m_TrackingType() const;

  constexpr void __set_m_TrackingType(::UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingType value);

  constexpr ::UnityEngine::InputSystem::XR::__TrackedPoseDriver__UpdateType& __get_m_UpdateType();

  constexpr ::UnityEngine::InputSystem::XR::__TrackedPoseDriver__UpdateType const& __get_m_UpdateType() const;

  constexpr void __set_m_UpdateType(::UnityEngine::InputSystem::XR::__TrackedPoseDriver__UpdateType value);

  constexpr ::UnityEngine::InputSystem::InputActionProperty& __get_m_PositionInput();

  constexpr ::UnityEngine::InputSystem::InputActionProperty const& __get_m_PositionInput() const;

  constexpr void __set_m_PositionInput(::UnityEngine::InputSystem::InputActionProperty value);

  constexpr ::UnityEngine::InputSystem::InputActionProperty& __get_m_RotationInput();

  constexpr ::UnityEngine::InputSystem::InputActionProperty const& __get_m_RotationInput() const;

  constexpr void __set_m_RotationInput(::UnityEngine::InputSystem::InputActionProperty value);

  constexpr ::UnityEngine::Vector3& __get_m_CurrentPosition();

  constexpr ::UnityEngine::Vector3 const& __get_m_CurrentPosition() const;

  constexpr void __set_m_CurrentPosition(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Quaternion& __get_m_CurrentRotation();

  constexpr ::UnityEngine::Quaternion const& __get_m_CurrentRotation() const;

  constexpr void __set_m_CurrentRotation(::UnityEngine::Quaternion value);

  constexpr bool& __get_m_RotationBound();

  constexpr bool const& __get_m_RotationBound() const;

  constexpr void __set_m_RotationBound(bool value);

  constexpr bool& __get_m_PositionBound();

  constexpr bool const& __get_m_PositionBound() const;

  constexpr void __set_m_PositionBound(bool value);

  constexpr ::UnityEngine::InputSystem::InputAction*& __get_m_PositionAction();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputAction*> const& __get_m_PositionAction() const;

  constexpr void __set_m_PositionAction(::UnityEngine::InputSystem::InputAction* value);

  constexpr ::UnityEngine::InputSystem::InputAction*& __get_m_RotationAction();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputAction*> const& __get_m_RotationAction() const;

  constexpr void __set_m_RotationAction(::UnityEngine::InputSystem::InputAction* value);

  constexpr bool& __get_m_HasMigratedActions();

  constexpr bool const& __get_m_HasMigratedActions() const;

  constexpr void __set_m_HasMigratedActions(bool value);

  /// @brief Method get_trackingType, addr 0x2ac5d68, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingType get_trackingType();

  /// @brief Method set_trackingType, addr 0x2ac5d70, size 0x8, virtual false, abstract: false, final false
  inline void set_trackingType(::UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingType value);

  /// @brief Method get_updateType, addr 0x2ac5d78, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::XR::__TrackedPoseDriver__UpdateType get_updateType();

  /// @brief Method set_updateType, addr 0x2ac5d80, size 0x8, virtual false, abstract: false, final false
  inline void set_updateType(::UnityEngine::InputSystem::XR::__TrackedPoseDriver__UpdateType value);

  /// @brief Method get_positionInput, addr 0x2ac5d88, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionProperty get_positionInput();

  /// @brief Method set_positionInput, addr 0x2ac5d9c, size 0x6c, virtual false, abstract: false, final false
  inline void set_positionInput(::UnityEngine::InputSystem::InputActionProperty value);

  /// @brief Method get_rotationInput, addr 0x2ac6100, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionProperty get_rotationInput();

  /// @brief Method set_rotationInput, addr 0x2ac6114, size 0x6c, virtual false, abstract: false, final false
  inline void set_rotationInput(::UnityEngine::InputSystem::InputActionProperty value);

  /// @brief Method BindActions, addr 0x2ac6478, size 0x18, virtual false, abstract: false, final false
  inline void BindActions();

  /// @brief Method BindPosition, addr 0x2ac5f58, size 0x1a8, virtual false, abstract: false, final false
  inline void BindPosition();

  /// @brief Method BindRotation, addr 0x2ac62d0, size 0x1a8, virtual false, abstract: false, final false
  inline void BindRotation();

  /// @brief Method UnbindActions, addr 0x2ac6490, size 0x18, virtual false, abstract: false, final false
  inline void UnbindActions();

  /// @brief Method UnbindPosition, addr 0x2ac5e08, size 0x150, virtual false, abstract: false, final false
  inline void UnbindPosition();

  /// @brief Method UnbindRotation, addr 0x2ac6180, size 0x150, virtual false, abstract: false, final false
  inline void UnbindRotation();

  /// @brief Method OnPositionPerformed, addr 0x2ac64a8, size 0x60, virtual false, abstract: false, final false
  inline void OnPositionPerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnPositionCanceled, addr 0x2ac6508, size 0x58, virtual false, abstract: false, final false
  inline void OnPositionCanceled(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnRotationPerformed, addr 0x2ac6560, size 0x60, virtual false, abstract: false, final false
  inline void OnRotationPerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnRotationCanceled, addr 0x2ac65c0, size 0x50, virtual false, abstract: false, final false
  inline void OnRotationCanceled(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method Awake, addr 0x2ac6610, size 0x6c, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method OnEnable, addr 0x2ac6734, size 0xb4, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnDisable, addr 0x2ac67e8, size 0xb4, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnDestroy, addr 0x2ac689c, size 0x6c, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method UpdateCallback, addr 0x2ac6908, size 0x68, virtual false, abstract: false, final false
  inline void UpdateCallback();

  /// @brief Method OnUpdate, addr 0x2ac6970, size 0x1c, virtual true, abstract: false, final false
  inline void OnUpdate();

  /// @brief Method OnBeforeRender, addr 0x2ac698c, size 0x20, virtual true, abstract: false, final false
  inline void OnBeforeRender();

  /// @brief Method SetLocalTransform, addr 0x2ac69ac, size 0xcc, virtual true, abstract: false, final false
  inline void SetLocalTransform(::UnityEngine::Vector3 newPosition, ::UnityEngine::Quaternion newRotation);

  /// @brief Method HasStereoCamera, addr 0x2ac667c, size 0xb8, virtual false, abstract: false, final false
  inline bool HasStereoCamera();

  /// @brief Method PerformUpdate, addr 0x2ac6a78, size 0x1c, virtual true, abstract: false, final false
  inline void PerformUpdate();

  /// @brief Method get_positionAction, addr 0x2ac6a94, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputAction* get_positionAction();

  /// @brief Method set_positionAction, addr 0x2ac6aa0, size 0x48, virtual false, abstract: false, final false
  inline void set_positionAction(::UnityEngine::InputSystem::InputAction* value);

  /// @brief Method get_rotationAction, addr 0x2ac6ae8, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputAction* get_rotationAction();

  /// @brief Method set_rotationAction, addr 0x2ac6af4, size 0x48, virtual false, abstract: false, final false
  inline void set_rotationAction(::UnityEngine::InputSystem::InputAction* value);

  /// @brief Method Reset, addr 0x2ac6b3c, size 0xc, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize, addr 0x2ac6b48, size 0x4, virtual true, abstract: false, final true
  inline void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize();

  /// @brief Method UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize, addr 0x2ac6b4c, size 0x78, virtual true, abstract: false, final true
  inline void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize();

  static inline ::UnityEngine::InputSystem::XR::TrackedPoseDriver* New_ctor();

  /// @brief Method .ctor, addr 0x2ac6bc4, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TrackedPoseDriver", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TrackedPoseDriver(TrackedPoseDriver&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TrackedPoseDriver", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TrackedPoseDriver(TrackedPoseDriver const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TrackedPoseDriver();

public:
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
