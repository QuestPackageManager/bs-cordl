#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Haptics/DualMotorRumble.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(DualMotorRumble)
namespace UnityEngine::InputSystem {
class InputDevice;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Haptics {
struct DualMotorRumble;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::Haptics::DualMotorRumble);
// Dependencies
namespace UnityEngine::InputSystem::Haptics {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Haptics.DualMotorRumble
struct CORDL_TYPE DualMotorRumble {
public:
  // Declarations
  __declspec(property(get = get_highFrequencyMotorSpeed, put = set_highFrequencyMotorSpeed)) float_t highFrequencyMotorSpeed;

  __declspec(property(get = get_isRumbling)) bool isRumbling;

  __declspec(property(get = get_lowFrequencyMotorSpeed, put = set_lowFrequencyMotorSpeed)) float_t lowFrequencyMotorSpeed;

  /// @brief Method PauseHaptics, addr 0x63f6b74, size 0xfc, virtual false, abstract: false, final false
  inline void PauseHaptics(::UnityEngine::InputSystem::InputDevice* device);

  /// @brief Method ResetHaptics, addr 0x63f6e38, size 0x8c, virtual false, abstract: false, final false
  inline void ResetHaptics(::UnityEngine::InputSystem::InputDevice* device);

  /// @brief Method ResumeHaptics, addr 0x63f6c8c, size 0x88, virtual false, abstract: false, final false
  inline void ResumeHaptics(::UnityEngine::InputSystem::InputDevice* device);

  /// @brief Method SetMotorSpeeds, addr 0x63f6d14, size 0x124, virtual false, abstract: false, final false
  inline void SetMotorSpeeds(::UnityEngine::InputSystem::InputDevice* device, float_t lowFrequency, float_t highFrequency);

  /// @brief Method get_highFrequencyMotorSpeed, addr 0x63f6aa8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_highFrequencyMotorSpeed();

  /// @brief Method get_isRumbling, addr 0x63f6ab8, size 0xbc, virtual false, abstract: false, final false
  inline bool get_isRumbling();

  /// @brief Method get_lowFrequencyMotorSpeed, addr 0x63f6a98, size 0x8, virtual false, abstract: false, final false
  inline float_t get_lowFrequencyMotorSpeed();

  /// @brief Method set_highFrequencyMotorSpeed, addr 0x63f6ab0, size 0x8, virtual false, abstract: false, final false
  inline void set_highFrequencyMotorSpeed(float_t value);

  /// @brief Method set_lowFrequencyMotorSpeed, addr 0x63f6aa0, size 0x8, virtual false, abstract: false, final false
  inline void set_lowFrequencyMotorSpeed(float_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr DualMotorRumble();

  // Ctor Parameters [CppParam { name: "_lowFrequencyMotorSpeed_k__BackingField", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_highFrequencyMotorSpeed_k__BackingField", ty:
  // "float_t", modifiers: "", def_value: None }]
  constexpr DualMotorRumble(float_t _lowFrequencyMotorSpeed_k__BackingField, float_t _highFrequencyMotorSpeed_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8933 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field <lowFrequencyMotorSpeed>k__BackingField, offset: 0x0, size: 0x4, def value: None
  float_t _lowFrequencyMotorSpeed_k__BackingField;

  /// @brief Field <highFrequencyMotorSpeed>k__BackingField, offset: 0x4, size: 0x4, def value: None
  float_t _highFrequencyMotorSpeed_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Haptics::DualMotorRumble, _lowFrequencyMotorSpeed_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Haptics::DualMotorRumble, _highFrequencyMotorSpeed_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Haptics::DualMotorRumble, 0x8>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Haptics
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Haptics::DualMotorRumble, "UnityEngine.InputSystem.Haptics", "DualMotorRumble");
