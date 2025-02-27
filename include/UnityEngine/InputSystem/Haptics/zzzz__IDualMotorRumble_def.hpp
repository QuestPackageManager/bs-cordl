#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Haptics/IDualMotorRumble.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/Haptics/zzzz__IHaptics_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(IDualMotorRumble)
// Forward declare root types
namespace UnityEngine::InputSystem::Haptics {
class IDualMotorRumble;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Haptics::IDualMotorRumble);
// Dependencies UnityEngine.InputSystem.Haptics.IHaptics
namespace UnityEngine::InputSystem::Haptics {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Haptics.IDualMotorRumble
class CORDL_TYPE IDualMotorRumble {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::InputSystem::Haptics::IHaptics"
  constexpr operator ::UnityEngine::InputSystem::Haptics::IHaptics*() noexcept;

  /// @brief Method SetMotorSpeeds, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SetMotorSpeeds(float_t lowFrequency, float_t highFrequency);

  /// @brief Convert to "::UnityEngine::InputSystem::Haptics::IHaptics"
  constexpr ::UnityEngine::InputSystem::Haptics::IHaptics* i___UnityEngine__InputSystem__Haptics__IHaptics() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IDualMotorRumble", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDualMotorRumble(IDualMotorRumble const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6871 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::InputSystem::Haptics
NEED_NO_BOX(::UnityEngine::InputSystem::Haptics::IDualMotorRumble);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Haptics::IDualMotorRumble*, "UnityEngine.InputSystem.Haptics", "IDualMotorRumble");
