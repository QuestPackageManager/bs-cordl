#pragma once
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
// Type: UnityEngine.InputSystem.LowLevel::IInputUpdateCallbackReceiver
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: false
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6498))
// CS Name: ::UnityEngine.InputSystem.LowLevel::IInputUpdateCallbackReceiver*
class CORDL_TYPE IInputUpdateCallbackReceiver {
public:
  // Declarations
  /// @brief Method OnUpdate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnUpdate();

  // Ctor Parameters [CppParam { name: "", ty: "IInputUpdateCallbackReceiver", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IInputUpdateCallbackReceiver(IInputUpdateCallbackReceiver&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IInputUpdateCallbackReceiver", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IInputUpdateCallbackReceiver(IInputUpdateCallbackReceiver const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::InputSystem::LowLevel
NEED_NO_BOX(::UnityEngine::InputSystem::LowLevel::IInputUpdateCallbackReceiver);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::IInputUpdateCallbackReceiver*, "UnityEngine.InputSystem.LowLevel", "IInputUpdateCallbackReceiver");
