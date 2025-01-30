#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/DualShock/IDualShockHaptics.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/Haptics/zzzz__IDualMotorRumble_def.hpp"
#include "UnityEngine/InputSystem/Haptics/zzzz__IHaptics_def.hpp"
CORDL_MODULE_EXPORT(IDualShockHaptics)
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine::InputSystem::DualShock {
class IDualShockHaptics;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::DualShock::IDualShockHaptics);
// Dependencies UnityEngine.InputSystem.Haptics.IDualMotorRumble, UnityEngine.InputSystem.Haptics.IHaptics
namespace UnityEngine::InputSystem::DualShock {
// Is value type: false
// CS Name: UnityEngine.InputSystem.DualShock.IDualShockHaptics
class CORDL_TYPE IDualShockHaptics {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::InputSystem::Haptics::IDualMotorRumble"
  constexpr operator ::UnityEngine::InputSystem::Haptics::IDualMotorRumble*() noexcept;

  /// @brief Convert operator to "::UnityEngine::InputSystem::Haptics::IHaptics"
  constexpr operator ::UnityEngine::InputSystem::Haptics::IHaptics*() noexcept;

  /// @brief Method SetLightBarColor, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SetLightBarColor(::UnityEngine::Color color);

  /// @brief Convert to "::UnityEngine::InputSystem::Haptics::IDualMotorRumble"
  constexpr ::UnityEngine::InputSystem::Haptics::IDualMotorRumble* i___UnityEngine__InputSystem__Haptics__IDualMotorRumble() noexcept;

  /// @brief Convert to "::UnityEngine::InputSystem::Haptics::IHaptics"
  constexpr ::UnityEngine::InputSystem::Haptics::IHaptics* i___UnityEngine__InputSystem__Haptics__IHaptics() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IDualShockHaptics", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDualShockHaptics(IDualShockHaptics const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6833 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::InputSystem::DualShock
NEED_NO_BOX(::UnityEngine::InputSystem::DualShock::IDualShockHaptics);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::DualShock::IDualShockHaptics*, "UnityEngine.InputSystem.DualShock", "IDualShockHaptics");
