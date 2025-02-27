#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/IInputStateCallbackReceiver.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IInputStateCallbackReceiver)
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
class IInputStateCallbackReceiver;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver);
// Dependencies
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: false
// CS Name: UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver
class CORDL_TYPE IInputStateCallbackReceiver {
public:
  // Declarations
  /// @brief Method GetStateOffsetForEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool GetStateOffsetForEvent(::UnityEngine::InputSystem::InputControl* control, ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, ::ByRef<uint32_t> offset);

  /// @brief Method OnNextUpdate, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnNextUpdate();

  /// @brief Method OnStateEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnStateEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr);

  // Ctor Parameters [CppParam { name: "", ty: "IInputStateCallbackReceiver", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IInputStateCallbackReceiver(IInputStateCallbackReceiver const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6971 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::InputSystem::LowLevel
NEED_NO_BOX(::UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver*, "UnityEngine.InputSystem.LowLevel", "IInputStateCallbackReceiver");
