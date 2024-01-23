#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
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
// Type: UnityEngine.InputSystem.LowLevel::IInputStateCallbackReceiver
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: false
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6561))
// CS Name: ::UnityEngine.InputSystem.LowLevel::IInputStateCallbackReceiver*
class CORDL_TYPE IInputStateCallbackReceiver {
public:
  // Declarations
  /// @brief Method OnNextUpdate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnNextUpdate();

  /// @brief Method OnStateEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnStateEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr);

  /// @brief Method GetStateOffsetForEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool GetStateOffsetForEvent(::UnityEngine::InputSystem::InputControl* control, ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, ByRef<uint32_t> offset);

  // Ctor Parameters [CppParam { name: "", ty: "IInputStateCallbackReceiver", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IInputStateCallbackReceiver(IInputStateCallbackReceiver&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IInputStateCallbackReceiver", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IInputStateCallbackReceiver(IInputStateCallbackReceiver const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::InputSystem::LowLevel
NEED_NO_BOX(::UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver*, "UnityEngine.InputSystem.LowLevel", "IInputStateCallbackReceiver");
