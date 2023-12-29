#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRHeadsetEmulator_def.hpp"
#include "UnityEngine/zzzz__CursorLockMode_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRHeadsetEmulator)
namespace UnityEngine {
struct KeyCode;
}
namespace GlobalNamespace {
class OVRManager;
}
namespace GlobalNamespace {
struct __OVRHeadsetEmulator__OpMode;
}
// Forward declare root types
namespace GlobalNamespace {
struct __OVRHeadsetEmulator__OpMode;
}
namespace GlobalNamespace {
class OVRHeadsetEmulator;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__OVRHeadsetEmulator__OpMode);
MARK_REF_PTR_T(::GlobalNamespace::OVRHeadsetEmulator);
// Type: ::OpMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8479))
// CS Name: ::OVRHeadsetEmulator::OpMode
struct CORDL_TYPE __OVRHeadsetEmulator__OpMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRHeadsetEmulator__OpMode_Unwrapped
  enum struct ____OVRHeadsetEmulator__OpMode_Unwrapped : int32_t {
    __E_Off = static_cast<int32_t>(0x0),
    __E_EditorOnly = static_cast<int32_t>(0x1),
    __E_AlwaysOn = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRHeadsetEmulator__OpMode_Unwrapped() const noexcept {
    return static_cast<____OVRHeadsetEmulator__OpMode_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRHeadsetEmulator__OpMode(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRHeadsetEmulator__OpMode();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Off value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRHeadsetEmulator__OpMode const Off;

  /// @brief Field EditorOnly value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRHeadsetEmulator__OpMode const EditorOnly;

  /// @brief Field AlwaysOn value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRHeadsetEmulator__OpMode const AlwaysOn;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRHeadsetEmulator__OpMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRHeadsetEmulator__OpMode, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRHeadsetEmulator
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 92, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152)), TypeDefinitionIndex(TypeDefinitionIndex(10176)), TypeDefinitionIndex(TypeDefinitionIndex(9988)),
// TypeDefinitionIndex(TypeDefinitionIndex(8479))} Self: TypeDefinitionIndex(TypeDefinitionIndex(8480)) CS Name: ::OVRHeadsetEmulator*
class CORDL_TYPE OVRHeadsetEmulator : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using OpMode = ::GlobalNamespace::__OVRHeadsetEmulator__OpMode;

  /// @brief Field opMode, offset 0x18, size 0x4
  __declspec(property(get = __get_opMode, put = __set_opMode))::GlobalNamespace::__OVRHeadsetEmulator__OpMode opMode;

  /// @brief Field resetHmdPoseOnRelease, offset 0x1c, size 0x1
  __declspec(property(get = __get_resetHmdPoseOnRelease, put = __set_resetHmdPoseOnRelease)) bool resetHmdPoseOnRelease;

  /// @brief Field resetHmdPoseByMiddleMouseButton, offset 0x1d, size 0x1
  __declspec(property(get = __get_resetHmdPoseByMiddleMouseButton, put = __set_resetHmdPoseByMiddleMouseButton)) bool resetHmdPoseByMiddleMouseButton;

  /// @brief Field activateKeys, offset 0x20, size 0x8
  __declspec(property(get = __get_activateKeys, put = __set_activateKeys))::ArrayW<::UnityEngine::KeyCode, ::Array<::UnityEngine::KeyCode>*> activateKeys;

  /// @brief Field pitchKeys, offset 0x28, size 0x8
  __declspec(property(get = __get_pitchKeys, put = __set_pitchKeys))::ArrayW<::UnityEngine::KeyCode, ::Array<::UnityEngine::KeyCode>*> pitchKeys;

  /// @brief Field manager, offset 0x30, size 0x8
  __declspec(property(get = __get_manager, put = __set_manager))::GlobalNamespace::OVRManager* manager;

  /// @brief Field lastFrameEmulationActivated, offset 0x38, size 0x1
  __declspec(property(get = __get_lastFrameEmulationActivated, put = __set_lastFrameEmulationActivated)) bool lastFrameEmulationActivated;

  /// @brief Field recordedHeadPoseRelativeOffsetTranslation, offset 0x3c, size 0xc
  __declspec(property(get = __get_recordedHeadPoseRelativeOffsetTranslation, put = __set_recordedHeadPoseRelativeOffsetTranslation))::UnityEngine::Vector3 recordedHeadPoseRelativeOffsetTranslation;

  /// @brief Field recordedHeadPoseRelativeOffsetRotation, offset 0x48, size 0xc
  __declspec(property(get = __get_recordedHeadPoseRelativeOffsetRotation, put = __set_recordedHeadPoseRelativeOffsetRotation))::UnityEngine::Vector3 recordedHeadPoseRelativeOffsetRotation;

  /// @brief Field hasSentEvent, offset 0x54, size 0x1
  __declspec(property(get = __get_hasSentEvent, put = __set_hasSentEvent)) bool hasSentEvent;

  /// @brief Field emulatorHasInitialized, offset 0x55, size 0x1
  __declspec(property(get = __get_emulatorHasInitialized, put = __set_emulatorHasInitialized)) bool emulatorHasInitialized;

  /// @brief Field previousCursorLockMode, offset 0x58, size 0x4
  __declspec(property(get = __get_previousCursorLockMode, put = __set_previousCursorLockMode))::UnityEngine::CursorLockMode previousCursorLockMode;

  constexpr ::GlobalNamespace::__OVRHeadsetEmulator__OpMode& __get_opMode();

  constexpr ::GlobalNamespace::__OVRHeadsetEmulator__OpMode const& __get_opMode() const;

  constexpr void __set_opMode(::GlobalNamespace::__OVRHeadsetEmulator__OpMode value);

  constexpr bool& __get_resetHmdPoseOnRelease();

  constexpr bool const& __get_resetHmdPoseOnRelease() const;

  constexpr void __set_resetHmdPoseOnRelease(bool value);

  constexpr bool& __get_resetHmdPoseByMiddleMouseButton();

  constexpr bool const& __get_resetHmdPoseByMiddleMouseButton() const;

  constexpr void __set_resetHmdPoseByMiddleMouseButton(bool value);

  constexpr ::ArrayW<::UnityEngine::KeyCode, ::Array<::UnityEngine::KeyCode>*>& __get_activateKeys();

  constexpr ::ArrayW<::UnityEngine::KeyCode, ::Array<::UnityEngine::KeyCode>*> const& __get_activateKeys() const;

  constexpr void __set_activateKeys(::ArrayW<::UnityEngine::KeyCode, ::Array<::UnityEngine::KeyCode>*> value);

  constexpr ::ArrayW<::UnityEngine::KeyCode, ::Array<::UnityEngine::KeyCode>*>& __get_pitchKeys();

  constexpr ::ArrayW<::UnityEngine::KeyCode, ::Array<::UnityEngine::KeyCode>*> const& __get_pitchKeys() const;

  constexpr void __set_pitchKeys(::ArrayW<::UnityEngine::KeyCode, ::Array<::UnityEngine::KeyCode>*> value);

  constexpr ::GlobalNamespace::OVRManager*& __get_manager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRManager*> const& __get_manager() const;

  constexpr void __set_manager(::GlobalNamespace::OVRManager* value);

  constexpr bool& __get_lastFrameEmulationActivated();

  constexpr bool const& __get_lastFrameEmulationActivated() const;

  constexpr void __set_lastFrameEmulationActivated(bool value);

  constexpr ::UnityEngine::Vector3& __get_recordedHeadPoseRelativeOffsetTranslation();

  constexpr ::UnityEngine::Vector3 const& __get_recordedHeadPoseRelativeOffsetTranslation() const;

  constexpr void __set_recordedHeadPoseRelativeOffsetTranslation(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get_recordedHeadPoseRelativeOffsetRotation();

  constexpr ::UnityEngine::Vector3 const& __get_recordedHeadPoseRelativeOffsetRotation() const;

  constexpr void __set_recordedHeadPoseRelativeOffsetRotation(::UnityEngine::Vector3 value);

  constexpr bool& __get_hasSentEvent();

  constexpr bool const& __get_hasSentEvent() const;

  constexpr void __set_hasSentEvent(bool value);

  constexpr bool& __get_emulatorHasInitialized();

  constexpr bool const& __get_emulatorHasInitialized() const;

  constexpr void __set_emulatorHasInitialized(bool value);

  constexpr ::UnityEngine::CursorLockMode& __get_previousCursorLockMode();

  constexpr ::UnityEngine::CursorLockMode const& __get_previousCursorLockMode() const;

  constexpr void __set_previousCursorLockMode(::UnityEngine::CursorLockMode value);

  /// @brief Method Start addr 0x25d0ab0 size 0x4 virtual false final false
  inline void Start();

  /// @brief Method Update addr 0x25d0ab4 size 0x448 virtual false final false
  inline void Update();

  /// @brief Method IsEmulationActivated addr 0x25d0efc size 0x90 virtual false final false
  inline bool IsEmulationActivated();

  /// @brief Method IsTweakingPitch addr 0x25d118c size 0x7c virtual false final false
  inline bool IsTweakingPitch();

  static inline ::GlobalNamespace::OVRHeadsetEmulator* New_ctor();

  /// @brief Method .ctor addr 0x25d1208 size 0xc8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "OVRHeadsetEmulator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRHeadsetEmulator(OVRHeadsetEmulator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRHeadsetEmulator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRHeadsetEmulator(OVRHeadsetEmulator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRHeadsetEmulator();

public:
  /// @brief Field opMode, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::__OVRHeadsetEmulator__OpMode ___opMode;

  /// @brief Field resetHmdPoseOnRelease, offset: 0x1c, size: 0x1, def value: None
  bool ___resetHmdPoseOnRelease;

  /// @brief Field resetHmdPoseByMiddleMouseButton, offset: 0x1d, size: 0x1, def value: None
  bool ___resetHmdPoseByMiddleMouseButton;

  /// @brief Field activateKeys, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::KeyCode, ::Array<::UnityEngine::KeyCode>*> ___activateKeys;

  /// @brief Field pitchKeys, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::KeyCode, ::Array<::UnityEngine::KeyCode>*> ___pitchKeys;

  /// @brief Field manager, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::OVRManager* ___manager;

  /// @brief Field lastFrameEmulationActivated, offset: 0x38, size: 0x1, def value: None
  bool ___lastFrameEmulationActivated;

  /// @brief Field recordedHeadPoseRelativeOffsetTranslation, offset: 0x3c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___recordedHeadPoseRelativeOffsetTranslation;

  /// @brief Field recordedHeadPoseRelativeOffsetRotation, offset: 0x48, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___recordedHeadPoseRelativeOffsetRotation;

  /// @brief Field hasSentEvent, offset: 0x54, size: 0x1, def value: None
  bool ___hasSentEvent;

  /// @brief Field emulatorHasInitialized, offset: 0x55, size: 0x1, def value: None
  bool ___emulatorHasInitialized;

  /// @brief Field previousCursorLockMode, offset: 0x58, size: 0x4, def value: None
  ::UnityEngine::CursorLockMode ___previousCursorLockMode;

  /// @brief Field MOUSE_SCALE_X offset 0xffffffff size 0x4
  static constexpr float_t MOUSE_SCALE_X{ -2.0 };

  /// @brief Field MOUSE_SCALE_X_PITCH offset 0xffffffff size 0x4
  static constexpr float_t MOUSE_SCALE_X_PITCH{ -2.0 };

  /// @brief Field MOUSE_SCALE_Y offset 0xffffffff size 0x4
  static constexpr float_t MOUSE_SCALE_Y{ 2.0 };

  /// @brief Field MOUSE_SCALE_HEIGHT offset 0xffffffff size 0x4
  static constexpr float_t MOUSE_SCALE_HEIGHT{ 1.0 };

  /// @brief Field MAX_ROLL offset 0xffffffff size 0x4
  static constexpr float_t MAX_ROLL{ 85.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRHeadsetEmulator, 0x60>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHeadsetEmulator, ___opMode) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHeadsetEmulator, ___resetHmdPoseOnRelease) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHeadsetEmulator, ___resetHmdPoseByMiddleMouseButton) == 0x1d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHeadsetEmulator, ___activateKeys) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHeadsetEmulator, ___pitchKeys) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHeadsetEmulator, ___manager) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHeadsetEmulator, ___lastFrameEmulationActivated) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHeadsetEmulator, ___recordedHeadPoseRelativeOffsetTranslation) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHeadsetEmulator, ___recordedHeadPoseRelativeOffsetRotation) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHeadsetEmulator, ___hasSentEvent) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHeadsetEmulator, ___emulatorHasInitialized) == 0x55, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHeadsetEmulator, ___previousCursorLockMode) == 0x58, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRHeadsetEmulator__OpMode, "", "OVRHeadsetEmulator/OpMode");
NEED_NO_BOX(::GlobalNamespace::OVRHeadsetEmulator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRHeadsetEmulator*, "", "OVRHeadsetEmulator");
