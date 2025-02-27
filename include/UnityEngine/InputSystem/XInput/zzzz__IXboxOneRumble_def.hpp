#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/XInput/IXboxOneRumble.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/Haptics/zzzz__IDualMotorRumble_def.hpp"
#include "UnityEngine/InputSystem/Haptics/zzzz__IHaptics_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(IXboxOneRumble)
// Forward declare root types
namespace UnityEngine::InputSystem::XInput {
class IXboxOneRumble;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::XInput::IXboxOneRumble);
// Dependencies UnityEngine.InputSystem.Haptics.IDualMotorRumble, UnityEngine.InputSystem.Haptics.IHaptics
namespace UnityEngine::InputSystem::XInput {
// Is value type: false
// CS Name: UnityEngine.InputSystem.XInput.IXboxOneRumble
class CORDL_TYPE IXboxOneRumble {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::InputSystem::Haptics::IDualMotorRumble"
  constexpr operator ::UnityEngine::InputSystem::Haptics::IDualMotorRumble*() noexcept;

  /// @brief Convert operator to "::UnityEngine::InputSystem::Haptics::IHaptics"
  constexpr operator ::UnityEngine::InputSystem::Haptics::IHaptics*() noexcept;

  /// @brief Method SetMotorSpeeds, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SetMotorSpeeds(float_t lowFrequency, float_t highFrequency, float_t leftTrigger, float_t rightTrigger);

  /// @brief Convert to "::UnityEngine::InputSystem::Haptics::IDualMotorRumble"
  constexpr ::UnityEngine::InputSystem::Haptics::IDualMotorRumble* i___UnityEngine__InputSystem__Haptics__IDualMotorRumble() noexcept;

  /// @brief Convert to "::UnityEngine::InputSystem::Haptics::IHaptics"
  constexpr ::UnityEngine::InputSystem::Haptics::IHaptics* i___UnityEngine__InputSystem__Haptics__IHaptics() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IXboxOneRumble", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IXboxOneRumble(IXboxOneRumble const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6759 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::InputSystem::XInput
NEED_NO_BOX(::UnityEngine::InputSystem::XInput::IXboxOneRumble);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XInput::IXboxOneRumble*, "UnityEngine.InputSystem.XInput", "IXboxOneRumble");
