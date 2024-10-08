#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/DualShock/IDualShockHaptics.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IDualShockHaptics)
namespace UnityEngine::InputSystem::Haptics {
class IDualMotorRumble;
}
namespace UnityEngine::InputSystem::Haptics {
class IHaptics;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine::InputSystem::DualShock {
class IDualShockHaptics;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::DualShock::IDualShockHaptics);
// Type: UnityEngine.InputSystem.DualShock::IDualShockHaptics
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::DualShock {
// Is value type: false
// CS Name: ::UnityEngine.InputSystem.DualShock::IDualShockHaptics*
class CORDL_TYPE IDualShockHaptics {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::InputSystem::Haptics::IDualMotorRumble"
  constexpr operator ::UnityEngine::InputSystem::Haptics::IDualMotorRumble*() noexcept;

  /// @brief Convert operator to "::UnityEngine::InputSystem::Haptics::IHaptics"
  constexpr operator ::UnityEngine::InputSystem::Haptics::IHaptics*() noexcept;

  /// @brief Method SetLightBarColor, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetLightBarColor(::UnityEngine::Color color);

  /// @brief Convert to "::UnityEngine::InputSystem::Haptics::IDualMotorRumble"
  constexpr ::UnityEngine::InputSystem::Haptics::IDualMotorRumble* i___UnityEngine__InputSystem__Haptics__IDualMotorRumble() noexcept;

  /// @brief Convert to "::UnityEngine::InputSystem::Haptics::IHaptics"
  constexpr ::UnityEngine::InputSystem::Haptics::IHaptics* i___UnityEngine__InputSystem__Haptics__IHaptics() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IDualShockHaptics", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IDualShockHaptics(IDualShockHaptics&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IDualShockHaptics", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDualShockHaptics(IDualShockHaptics const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6800 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::InputSystem::DualShock
NEED_NO_BOX(::UnityEngine::InputSystem::DualShock::IDualShockHaptics);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::DualShock::IDualShockHaptics*, "UnityEngine.InputSystem.DualShock", "IDualShockHaptics");
