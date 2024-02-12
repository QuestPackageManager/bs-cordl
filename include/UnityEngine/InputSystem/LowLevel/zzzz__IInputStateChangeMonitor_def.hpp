#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IInputStateChangeMonitor)
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
class IInputStateChangeMonitor;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor);
// Type: UnityEngine.InputSystem.LowLevel::IInputStateChangeMonitor
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: false
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5821))
// CS Name: ::UnityEngine.InputSystem.LowLevel::IInputStateChangeMonitor*
class CORDL_TYPE IInputStateChangeMonitor {
public:
  // Declarations
  /// @brief Method NotifyControlStateChanged, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void NotifyControlStateChanged(::UnityEngine::InputSystem::InputControl* control, double_t time, ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, int64_t monitorIndex);

  /// @brief Method NotifyTimerExpired, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void NotifyTimerExpired(::UnityEngine::InputSystem::InputControl* control, double_t time, int64_t monitorIndex, int32_t timerIndex);

  // Ctor Parameters [CppParam { name: "", ty: "IInputStateChangeMonitor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IInputStateChangeMonitor(IInputStateChangeMonitor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IInputStateChangeMonitor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IInputStateChangeMonitor(IInputStateChangeMonitor const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::InputSystem::LowLevel
NEED_NO_BOX(::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*, "UnityEngine.InputSystem.LowLevel", "IInputStateChangeMonitor");
