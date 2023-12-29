#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IInputInteraction_1)
namespace UnityEngine::InputSystem {
class IInputInteraction;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
template <typename TValue> class IInputInteraction_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::InputSystem::IInputInteraction_1);
// Type: UnityEngine.InputSystem::IInputInteraction`1
// SizeInfo { instance_size: 0, native_size: 0, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// cpp template
template <typename TValue>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6216))
// CS Name: ::UnityEngine.InputSystem::IInputInteraction`1<TValue>*
class CORDL_TYPE IInputInteraction_1 {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::InputSystem::IInputInteraction"
  constexpr operator ::UnityEngine::InputSystem::IInputInteraction*() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IInputInteraction_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IInputInteraction_1(IInputInteraction_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IInputInteraction_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IInputInteraction_1(IInputInteraction_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::InputSystem
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::InputSystem::IInputInteraction_1, "UnityEngine.InputSystem", "IInputInteraction`1");
