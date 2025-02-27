#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/IInputUpdateCallbackReceiver.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IInputUpdateCallbackReceiver)
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
class IInputUpdateCallbackReceiver;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::LowLevel::IInputUpdateCallbackReceiver);
// Dependencies
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: false
// CS Name: UnityEngine.InputSystem.LowLevel.IInputUpdateCallbackReceiver
class CORDL_TYPE IInputUpdateCallbackReceiver {
public:
  // Declarations
  /// @brief Method OnUpdate, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnUpdate();

  // Ctor Parameters [CppParam { name: "", ty: "IInputUpdateCallbackReceiver", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IInputUpdateCallbackReceiver(IInputUpdateCallbackReceiver const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6908 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::InputSystem::LowLevel
NEED_NO_BOX(::UnityEngine::InputSystem::LowLevel::IInputUpdateCallbackReceiver);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::IInputUpdateCallbackReceiver*, "UnityEngine.InputSystem.LowLevel", "IInputUpdateCallbackReceiver");
