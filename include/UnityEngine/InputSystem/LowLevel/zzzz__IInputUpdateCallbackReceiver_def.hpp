#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/IInputUpdateCallbackReceiver.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IInputUpdateCallbackReceiver)
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
class IInputUpdateCallbackReceiver;
}
// Write type traits
MARK_REF_T(::UnityEngine::InputSystem::LowLevel::IInputUpdateCallbackReceiver*);
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::LowLevel::IInputUpdateCallbackReceiver*, "UnityEngine.InputSystem.LowLevel", "IInputUpdateCallbackReceiver");
// Dependencies
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: false
// CS Name: UnityEngine.InputSystem.LowLevel.IInputUpdateCallbackReceiver
class CORDL_TYPE IInputUpdateCallbackReceiver {
public:
  // Declarations
  /// @brief Method OnUpdate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnUpdate();

  // Ctor Parameters [CppParam { name: "", ty: "IInputUpdateCallbackReceiver", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IInputUpdateCallbackReceiver(IInputUpdateCallbackReceiverconst&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8992 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::InputSystem::LowLevel
