#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRHeadsetEmulator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__CursorLockMode_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7892 };

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

  /// @brief Field activateKeys, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_activateKeys, put = __cordl_internal_set_activateKeys)) ::ArrayW<::UnityEngine::KeyCode, ::Array<::UnityEngine::KeyCode>*> activateKeys;

  /// @brief Field emulatorHasInitialized, offset 0x5d, size 0x1
  __declspec(property(get = __cordl_internal_get_emulatorHasInitialized, put = __cordl_internal_set_emulatorHasInitialized)) bool emulatorHasInitialized;

  /// @brief Field hasSentEvent, offset 0x5c, size 0x1
  __declspec(property(get = __cordl_internal_get_hasSentEvent, put = __cordl_internal_set_hasSentEvent)) bool hasSentEvent;

  /// @brief Field lastFrameEmulationActivated, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_lastFrameEmulationActivated, put = __cordl_internal_set_lastFrameEmulationActivated)) bool lastFrameEmulationActivated;

  /// @brief Field manager, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_manager, put = __cordl_internal_set_manager)) ::UnityW<::GlobalNamespace::OVRManager> manager;

  /// @brief Field opMode, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_opMode, put = __cordl_internal_set_opMode)) ::GlobalNamespace::OVRHeadsetEmulator_OpMode opMode;

  /// @brief Field pitchKeys, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_pitchKeys, put = __cordl_internal_set_pitchKeys)) ::ArrayW<::UnityEngine::KeyCode, ::Array<::UnityEngine::KeyCode>*> pitchKeys;

  /// @brief Field previousCursorLockMode, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_previousCursorLockMode, put = __cordl_internal_set_previousCursorLockMode)) ::UnityEngine::CursorLockMode previousCursorLockMode;

  /// @brief Field recordedHeadPoseRelativeOffsetRotation, offset 0x50, size 0xc
  __declspec(property(get = __cordl_internal_get_recordedHeadPoseRelativeOffsetRotation,
                      put = __cordl_internal_set_recordedHeadPoseRelativeOffsetRotation)) ::UnityEngine::Vector3 recordedHeadPoseRelativeOffsetRotation;

  /// @brief Field recordedHeadPoseRelativeOffsetTranslation, offset 0x44, size 0xc
  __declspec(property(get = __cordl_internal_get_recordedHeadPoseRelativeOffsetTranslation,
                      put = __cordl_internal_set_recordedHeadPoseRelativeOffsetTranslation)) ::UnityEngine::Vector3 recordedHeadPoseRelativeOffsetTranslation;

  /// @brief Field resetHmdPoseByMiddleMouseButton, offset 0x25, size 0x1
  __declspec(property(get = __cordl_internal_get_resetHmdPoseByMiddleMouseButton, put = __cordl_internal_set_resetHmdPoseByMiddleMouseButton)) bool resetHmdPoseByMiddleMouseButton;

  /// @brief Field resetHmdPoseOnRelease, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get_resetHmdPoseOnRelease, put = __cordl_internal_set_resetHmdPoseOnRelease)) bool resetHmdPoseOnRelease;

  /// @brief Method IsEmulationActivated, addr 0x3fb7910, size 0xc8, virtual false, abstract: false, final false
  inline bool IsEmulationActivated();

  /// @brief Method IsTweakingPitch, addr 0x3fb79d8, size 0x7c, virtual false, abstract: false, final false
  inline bool IsTweakingPitch();

  static inline ::GlobalNamespace::OVRHeadsetEmulator* New_ctor();

  /// @brief Method Start, addr 0x3fb74a8, size 0x4, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x3fb74ac, size 0x464, virtual false, abstract: false, final false
  inline void Update();

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

  constexpr ::GlobalNamespace::OVRHeadsetEmulator_OpMode const& __cordl_internal_get_opMode() const;

  constexpr ::GlobalNamespace::OVRHeadsetEmulator_OpMode& __cordl_internal_get_opMode();

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

  constexpr void __cordl_internal_set_activateKeys(::ArrayW<::UnityEngine::KeyCode, ::Array<::UnityEngine::KeyCode>*> value);

  constexpr void __cordl_internal_set_emulatorHasInitialized(bool value);

  constexpr void __cordl_internal_set_hasSentEvent(bool value);

  constexpr void __cordl_internal_set_lastFrameEmulationActivated(bool value);

  constexpr void __cordl_internal_set_manager(::UnityW<::GlobalNamespace::OVRManager> value);

  constexpr void __cordl_internal_set_opMode(::GlobalNamespace::OVRHeadsetEmulator_OpMode value);

  constexpr void __cordl_internal_set_pitchKeys(::ArrayW<::UnityEngine::KeyCode, ::Array<::UnityEngine::KeyCode>*> value);

  constexpr void __cordl_internal_set_previousCursorLockMode(::UnityEngine::CursorLockMode value);

  constexpr void __cordl_internal_set_recordedHeadPoseRelativeOffsetRotation(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_recordedHeadPoseRelativeOffsetTranslation(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_resetHmdPoseByMiddleMouseButton(bool value);

  constexpr void __cordl_internal_set_resetHmdPoseOnRelease(bool value);

  /// @brief Method .ctor, addr 0x3fb7a54, size 0xc8, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7893 };

  /// @brief Field opMode, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::OVRHeadsetEmulator_OpMode ___opMode;

  /// @brief Field resetHmdPoseOnRelease, offset: 0x24, size: 0x1, def value: None
  bool ___resetHmdPoseOnRelease;

  /// @brief Field resetHmdPoseByMiddleMouseButton, offset: 0x25, size: 0x1, def value: None
  bool ___resetHmdPoseByMiddleMouseButton;

  /// @brief Field activateKeys, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::KeyCode, ::Array<::UnityEngine::KeyCode>*> ___activateKeys;

  /// @brief Field pitchKeys, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::KeyCode, ::Array<::UnityEngine::KeyCode>*> ___pitchKeys;

  /// @brief Field manager, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRManager> ___manager;

  /// @brief Field lastFrameEmulationActivated, offset: 0x40, size: 0x1, def value: None
  bool ___lastFrameEmulationActivated;

  /// @brief Field recordedHeadPoseRelativeOffsetTranslation, offset: 0x44, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___recordedHeadPoseRelativeOffsetTranslation;

  /// @brief Field recordedHeadPoseRelativeOffsetRotation, offset: 0x50, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___recordedHeadPoseRelativeOffsetRotation;

  /// @brief Field hasSentEvent, offset: 0x5c, size: 0x1, def value: None
  bool ___hasSentEvent;

  /// @brief Field emulatorHasInitialized, offset: 0x5d, size: 0x1, def value: None
  bool ___emulatorHasInitialized;

  /// @brief Field previousCursorLockMode, offset: 0x60, size: 0x4, def value: None
  ::UnityEngine::CursorLockMode ___previousCursorLockMode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRHeadsetEmulator, ___opMode) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHeadsetEmulator, ___resetHmdPoseOnRelease) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHeadsetEmulator, ___resetHmdPoseByMiddleMouseButton) == 0x25, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHeadsetEmulator, ___activateKeys) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHeadsetEmulator, ___pitchKeys) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHeadsetEmulator, ___manager) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHeadsetEmulator, ___lastFrameEmulationActivated) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHeadsetEmulator, ___recordedHeadPoseRelativeOffsetTranslation) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHeadsetEmulator, ___recordedHeadPoseRelativeOffsetRotation) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHeadsetEmulator, ___hasSentEvent) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHeadsetEmulator, ___emulatorHasInitialized) == 0x5d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHeadsetEmulator, ___previousCursorLockMode) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRHeadsetEmulator, 0x68>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRHeadsetEmulator_OpMode, "", "OVRHeadsetEmulator/OpMode");
NEED_NO_BOX(::GlobalNamespace::OVRHeadsetEmulator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRHeadsetEmulator*, "", "OVRHeadsetEmulator");
