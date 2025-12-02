#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRHeadsetEmulator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__CursorLockMode_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRHeadsetEmulator)
namespace GlobalNamespace {
struct OVRHeadsetEmulator_OpMode;
}
namespace GlobalNamespace {
class OVRManager;
}
namespace UnityEngine::InputSystem {
class InputAction;
}
namespace UnityEngine {
struct KeyCode;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRHeadsetEmulator_OpMode;
}
namespace GlobalNamespace {
class OVRHeadsetEmulator;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRHeadsetEmulator_OpMode);
MARK_REF_PTR_T(::GlobalNamespace::OVRHeadsetEmulator);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRHeadsetEmulator/OpMode
struct CORDL_TYPE OVRHeadsetEmulator_OpMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRHeadsetEmulator_OpMode_Unwrapped
  enum struct __OVRHeadsetEmulator_OpMode_Unwrapped : int32_t {
    __E_Off = static_cast<int32_t>(0x0),
    __E_EditorOnly = static_cast<int32_t>(0x1),
    __E_AlwaysOn = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRHeadsetEmulator_OpMode_Unwrapped() const noexcept {
    return static_cast<__OVRHeadsetEmulator_OpMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRHeadsetEmulator_OpMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRHeadsetEmulator_OpMode(int32_t value__) noexcept;

  /// @brief Field AlwaysOn value: I32(2)
  static ::GlobalNamespace::OVRHeadsetEmulator_OpMode const AlwaysOn;

  /// @brief Field EditorOnly value: I32(1)
  static ::GlobalNamespace::OVRHeadsetEmulator_OpMode const EditorOnly;

  /// @brief Field Off value: I32(0)
  static ::GlobalNamespace::OVRHeadsetEmulator_OpMode const Off;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7161 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRHeadsetEmulator_OpMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRHeadsetEmulator_OpMode, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRHeadsetEmulator::OpMode, UnityEngine.CursorLockMode, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRHeadsetEmulator
class CORDL_TYPE OVRHeadsetEmulator : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using OpMode = ::GlobalNamespace::OVRHeadsetEmulator_OpMode;

  /// @brief Field activateKeyActions, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_activateKeyActions,
                      put = __cordl_internal_set_activateKeyActions)) ::ArrayW<::UnityEngine::InputSystem::InputAction*, ::Array<::UnityEngine::InputSystem::InputAction*>*>
      activateKeyActions;

  /// @brief Field activateKeyBindings, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_activateKeyBindings, put = __cordl_internal_set_activateKeyBindings)) ::ArrayW<::StringW, ::Array<::StringW>*> activateKeyBindings;

  /// @brief Field activateKeys, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_activateKeys, put = __cordl_internal_set_activateKeys)) ::ArrayW<::UnityEngine::KeyCode, ::Array<::UnityEngine::KeyCode>*> activateKeys;

  /// @brief Field emulatorHasInitialized, offset 0x95, size 0x1
  __declspec(property(get = __cordl_internal_get_emulatorHasInitialized, put = __cordl_internal_set_emulatorHasInitialized)) bool emulatorHasInitialized;

  /// @brief Field hasSentEvent, offset 0x94, size 0x1
  __declspec(property(get = __cordl_internal_get_hasSentEvent, put = __cordl_internal_set_hasSentEvent)) bool hasSentEvent;

  /// @brief Field lastFrameEmulationActivated, offset 0x78, size 0x1
  __declspec(property(get = __cordl_internal_get_lastFrameEmulationActivated, put = __cordl_internal_set_lastFrameEmulationActivated)) bool lastFrameEmulationActivated;

  /// @brief Field manager, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_manager, put = __cordl_internal_set_manager)) ::UnityW<::GlobalNamespace::OVRManager> manager;

  /// @brief Field middleMouseButtonAction, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_middleMouseButtonAction, put = __cordl_internal_set_middleMouseButtonAction)) ::UnityEngine::InputSystem::InputAction* middleMouseButtonAction;

  /// @brief Field mouseMoveAction, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_mouseMoveAction, put = __cordl_internal_set_mouseMoveAction)) ::UnityEngine::InputSystem::InputAction* mouseMoveAction;

  /// @brief Field mouseScrollAction, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_mouseScrollAction, put = __cordl_internal_set_mouseScrollAction)) ::UnityEngine::InputSystem::InputAction* mouseScrollAction;

  /// @brief Field opMode, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_opMode, put = __cordl_internal_set_opMode)) ::GlobalNamespace::OVRHeadsetEmulator_OpMode opMode;

  /// @brief Field pitchKeyActions, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_pitchKeyActions,
                      put = __cordl_internal_set_pitchKeyActions)) ::ArrayW<::UnityEngine::InputSystem::InputAction*, ::Array<::UnityEngine::InputSystem::InputAction*>*>
      pitchKeyActions;

  /// @brief Field pitchKeyBindings, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_pitchKeyBindings, put = __cordl_internal_set_pitchKeyBindings)) ::ArrayW<::StringW, ::Array<::StringW>*> pitchKeyBindings;

  /// @brief Field pitchKeys, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_pitchKeys, put = __cordl_internal_set_pitchKeys)) ::ArrayW<::UnityEngine::KeyCode, ::Array<::UnityEngine::KeyCode>*> pitchKeys;

  /// @brief Field previousCursorLockMode, offset 0x98, size 0x4
  __declspec(property(get = __cordl_internal_get_previousCursorLockMode, put = __cordl_internal_set_previousCursorLockMode)) ::UnityEngine::CursorLockMode previousCursorLockMode;

  /// @brief Field recordedHeadPoseRelativeOffsetRotation, offset 0x88, size 0xc
  __declspec(property(get = __cordl_internal_get_recordedHeadPoseRelativeOffsetRotation,
                      put = __cordl_internal_set_recordedHeadPoseRelativeOffsetRotation)) ::UnityEngine::Vector3 recordedHeadPoseRelativeOffsetRotation;

  /// @brief Field recordedHeadPoseRelativeOffsetTranslation, offset 0x7c, size 0xc
  __declspec(property(get = __cordl_internal_get_recordedHeadPoseRelativeOffsetTranslation,
                      put = __cordl_internal_set_recordedHeadPoseRelativeOffsetTranslation)) ::UnityEngine::Vector3 recordedHeadPoseRelativeOffsetTranslation;

  /// @brief Field resetHmdPoseByMiddleMouseButton, offset 0x25, size 0x1
  __declspec(property(get = __cordl_internal_get_resetHmdPoseByMiddleMouseButton, put = __cordl_internal_set_resetHmdPoseByMiddleMouseButton)) bool resetHmdPoseByMiddleMouseButton;

  /// @brief Field resetHmdPoseOnRelease, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get_resetHmdPoseOnRelease, put = __cordl_internal_set_resetHmdPoseOnRelease)) bool resetHmdPoseOnRelease;

  /// @brief Method IsEmulationActivated, addr 0x5c450c4, size 0xf8, virtual false, abstract: false, final false
  inline bool IsEmulationActivated();

  /// @brief Method IsTweakingPitch, addr 0x5c451bc, size 0xb0, virtual false, abstract: false, final false
  inline bool IsTweakingPitch();

  static inline ::GlobalNamespace::OVRHeadsetEmulator* New_ctor();

  /// @brief Method OnDestroy, addr 0x5c4526c, size 0xf4, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x5c448c0, size 0x2dc, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x5c44b9c, size 0x528, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::ArrayW<::UnityEngine::InputSystem::InputAction*, ::Array<::UnityEngine::InputSystem::InputAction*>*> const& __cordl_internal_get_activateKeyActions() const;

  constexpr ::ArrayW<::UnityEngine::InputSystem::InputAction*, ::Array<::UnityEngine::InputSystem::InputAction*>*>& __cordl_internal_get_activateKeyActions();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_activateKeyBindings() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_activateKeyBindings();

  constexpr ::ArrayW<::UnityEngine::KeyCode, ::Array<::UnityEngine::KeyCode>*> const& __cordl_internal_get_activateKeys() const;

  constexpr ::ArrayW<::UnityEngine::KeyCode, ::Array<::UnityEngine::KeyCode>*>& __cordl_internal_get_activateKeys();

  constexpr bool const& __cordl_internal_get_emulatorHasInitialized() const;

  constexpr bool& __cordl_internal_get_emulatorHasInitialized();

  constexpr bool const& __cordl_internal_get_hasSentEvent() const;

  constexpr bool& __cordl_internal_get_hasSentEvent();

  constexpr bool const& __cordl_internal_get_lastFrameEmulationActivated() const;

  constexpr bool& __cordl_internal_get_lastFrameEmulationActivated();

  constexpr ::UnityW<::GlobalNamespace::OVRManager> const& __cordl_internal_get_manager() const;

  constexpr ::UnityW<::GlobalNamespace::OVRManager>& __cordl_internal_get_manager();

  constexpr ::UnityEngine::InputSystem::InputAction* const& __cordl_internal_get_middleMouseButtonAction() const;

  constexpr ::UnityEngine::InputSystem::InputAction*& __cordl_internal_get_middleMouseButtonAction();

  constexpr ::UnityEngine::InputSystem::InputAction* const& __cordl_internal_get_mouseMoveAction() const;

  constexpr ::UnityEngine::InputSystem::InputAction*& __cordl_internal_get_mouseMoveAction();

  constexpr ::UnityEngine::InputSystem::InputAction* const& __cordl_internal_get_mouseScrollAction() const;

  constexpr ::UnityEngine::InputSystem::InputAction*& __cordl_internal_get_mouseScrollAction();

  constexpr ::GlobalNamespace::OVRHeadsetEmulator_OpMode const& __cordl_internal_get_opMode() const;

  constexpr ::GlobalNamespace::OVRHeadsetEmulator_OpMode& __cordl_internal_get_opMode();

  constexpr ::ArrayW<::UnityEngine::InputSystem::InputAction*, ::Array<::UnityEngine::InputSystem::InputAction*>*> const& __cordl_internal_get_pitchKeyActions() const;

  constexpr ::ArrayW<::UnityEngine::InputSystem::InputAction*, ::Array<::UnityEngine::InputSystem::InputAction*>*>& __cordl_internal_get_pitchKeyActions();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_pitchKeyBindings() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_pitchKeyBindings();

  constexpr ::ArrayW<::UnityEngine::KeyCode, ::Array<::UnityEngine::KeyCode>*> const& __cordl_internal_get_pitchKeys() const;

  constexpr ::ArrayW<::UnityEngine::KeyCode, ::Array<::UnityEngine::KeyCode>*>& __cordl_internal_get_pitchKeys();

  constexpr ::UnityEngine::CursorLockMode const& __cordl_internal_get_previousCursorLockMode() const;

  constexpr ::UnityEngine::CursorLockMode& __cordl_internal_get_previousCursorLockMode();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_recordedHeadPoseRelativeOffsetRotation() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_recordedHeadPoseRelativeOffsetRotation();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_recordedHeadPoseRelativeOffsetTranslation() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_recordedHeadPoseRelativeOffsetTranslation();

  constexpr bool const& __cordl_internal_get_resetHmdPoseByMiddleMouseButton() const;

  constexpr bool& __cordl_internal_get_resetHmdPoseByMiddleMouseButton();

  constexpr bool const& __cordl_internal_get_resetHmdPoseOnRelease() const;

  constexpr bool& __cordl_internal_get_resetHmdPoseOnRelease();

  constexpr void __cordl_internal_set_activateKeyActions(::ArrayW<::UnityEngine::InputSystem::InputAction*, ::Array<::UnityEngine::InputSystem::InputAction*>*> value);

  constexpr void __cordl_internal_set_activateKeyBindings(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_activateKeys(::ArrayW<::UnityEngine::KeyCode, ::Array<::UnityEngine::KeyCode>*> value);

  constexpr void __cordl_internal_set_emulatorHasInitialized(bool value);

  constexpr void __cordl_internal_set_hasSentEvent(bool value);

  constexpr void __cordl_internal_set_lastFrameEmulationActivated(bool value);

  constexpr void __cordl_internal_set_manager(::UnityW<::GlobalNamespace::OVRManager> value);

  constexpr void __cordl_internal_set_middleMouseButtonAction(::UnityEngine::InputSystem::InputAction* value);

  constexpr void __cordl_internal_set_mouseMoveAction(::UnityEngine::InputSystem::InputAction* value);

  constexpr void __cordl_internal_set_mouseScrollAction(::UnityEngine::InputSystem::InputAction* value);

  constexpr void __cordl_internal_set_opMode(::GlobalNamespace::OVRHeadsetEmulator_OpMode value);

  constexpr void __cordl_internal_set_pitchKeyActions(::ArrayW<::UnityEngine::InputSystem::InputAction*, ::Array<::UnityEngine::InputSystem::InputAction*>*> value);

  constexpr void __cordl_internal_set_pitchKeyBindings(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_pitchKeys(::ArrayW<::UnityEngine::KeyCode, ::Array<::UnityEngine::KeyCode>*> value);

  constexpr void __cordl_internal_set_previousCursorLockMode(::UnityEngine::CursorLockMode value);

  constexpr void __cordl_internal_set_recordedHeadPoseRelativeOffsetRotation(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_recordedHeadPoseRelativeOffsetTranslation(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_resetHmdPoseByMiddleMouseButton(bool value);

  constexpr void __cordl_internal_set_resetHmdPoseOnRelease(bool value);

  /// @brief Method .ctor, addr 0x5c45360, size 0x210, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRHeadsetEmulator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRHeadsetEmulator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRHeadsetEmulator(OVRHeadsetEmulator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRHeadsetEmulator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRHeadsetEmulator(OVRHeadsetEmulator const&) = delete;

  /// @brief Field MAX_ROLL offset 0xffffffff size 0x4
  static constexpr float_t MAX_ROLL{ static_cast<float_t>(85.0f) };

  /// @brief Field MOUSE_SCALE_HEIGHT offset 0xffffffff size 0x4
  static constexpr float_t MOUSE_SCALE_HEIGHT{ static_cast<float_t>(1.0f) };

  /// @brief Field MOUSE_SCALE_X offset 0xffffffff size 0x4
  static constexpr float_t MOUSE_SCALE_X{ static_cast<float_t>(-2.0f) };

  /// @brief Field MOUSE_SCALE_X_PITCH offset 0xffffffff size 0x4
  static constexpr float_t MOUSE_SCALE_X_PITCH{ static_cast<float_t>(-2.0f) };

  /// @brief Field MOUSE_SCALE_Y offset 0xffffffff size 0x4
  static constexpr float_t MOUSE_SCALE_Y{ static_cast<float_t>(2.0f) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7162 };

  /// @brief Field opMode, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::OVRHeadsetEmulator_OpMode ___opMode;

  /// @brief Field resetHmdPoseOnRelease, offset: 0x24, size: 0x1, def value: None
  bool ___resetHmdPoseOnRelease;

  /// @brief Field resetHmdPoseByMiddleMouseButton, offset: 0x25, size: 0x1, def value: None
  bool ___resetHmdPoseByMiddleMouseButton;

  /// @brief Field activateKeys, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::KeyCode, ::Array<::UnityEngine::KeyCode>*> ___activateKeys;

  /// @brief Field activateKeyBindings, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___activateKeyBindings;

  /// @brief Field pitchKeys, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::KeyCode, ::Array<::UnityEngine::KeyCode>*> ___pitchKeys;

  /// @brief Field pitchKeyBindings, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___pitchKeyBindings;

  /// @brief Field activateKeyActions, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::InputAction*, ::Array<::UnityEngine::InputSystem::InputAction*>*> ___activateKeyActions;

  /// @brief Field pitchKeyActions, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::InputAction*, ::Array<::UnityEngine::InputSystem::InputAction*>*> ___pitchKeyActions;

  /// @brief Field middleMouseButtonAction, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputAction* ___middleMouseButtonAction;

  /// @brief Field mouseScrollAction, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputAction* ___mouseScrollAction;

  /// @brief Field mouseMoveAction, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputAction* ___mouseMoveAction;

  /// @brief Field manager, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRManager> ___manager;

  /// @brief Field lastFrameEmulationActivated, offset: 0x78, size: 0x1, def value: None
  bool ___lastFrameEmulationActivated;

  /// @brief Field recordedHeadPoseRelativeOffsetTranslation, offset: 0x7c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___recordedHeadPoseRelativeOffsetTranslation;

  /// @brief Field recordedHeadPoseRelativeOffsetRotation, offset: 0x88, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___recordedHeadPoseRelativeOffsetRotation;

  /// @brief Field hasSentEvent, offset: 0x94, size: 0x1, def value: None
  bool ___hasSentEvent;

  /// @brief Field emulatorHasInitialized, offset: 0x95, size: 0x1, def value: None
  bool ___emulatorHasInitialized;

  /// @brief Field previousCursorLockMode, offset: 0x98, size: 0x4, def value: None
  ::UnityEngine::CursorLockMode ___previousCursorLockMode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRHeadsetEmulator, ___opMode) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHeadsetEmulator, ___resetHmdPoseOnRelease) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHeadsetEmulator, ___resetHmdPoseByMiddleMouseButton) == 0x25, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHeadsetEmulator, ___activateKeys) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHeadsetEmulator, ___activateKeyBindings) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHeadsetEmulator, ___pitchKeys) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHeadsetEmulator, ___pitchKeyBindings) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHeadsetEmulator, ___activateKeyActions) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHeadsetEmulator, ___pitchKeyActions) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHeadsetEmulator, ___middleMouseButtonAction) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHeadsetEmulator, ___mouseScrollAction) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHeadsetEmulator, ___mouseMoveAction) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHeadsetEmulator, ___manager) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHeadsetEmulator, ___lastFrameEmulationActivated) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHeadsetEmulator, ___recordedHeadPoseRelativeOffsetTranslation) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHeadsetEmulator, ___recordedHeadPoseRelativeOffsetRotation) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHeadsetEmulator, ___hasSentEvent) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHeadsetEmulator, ___emulatorHasInitialized) == 0x95, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHeadsetEmulator, ___previousCursorLockMode) == 0x98, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRHeadsetEmulator, 0xa0>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRHeadsetEmulator_OpMode, "", "OVRHeadsetEmulator/OpMode");
NEED_NO_BOX(::GlobalNamespace::OVRHeadsetEmulator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRHeadsetEmulator*, "", "OVRHeadsetEmulator");
