#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/IInputInteraction_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IInputInteraction_1)
// Forward declare root types
namespace UnityEngine::InputSystem {
template <typename TValue> class IInputInteraction_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::InputSystem::IInputInteraction_1);
// Dependencies
namespace UnityEngine::InputSystem {
// cpp template
template <typename TValue>
// Is value type: false
// CS Name: UnityEngine.InputSystem.IInputInteraction`1<TValue>
class CORDL_TYPE IInputInteraction_1 {
public:
  // Declarations
  /// @brief Convert operator to "::cordl_internals::InterfaceW"
  constexpr operator ::cordl_internals::InterfaceW*() noexcept;

  /// @brief Convert to "::cordl_internals::InterfaceW"
  constexpr ::cordl_internals::InterfaceW* i___cordl_internals__InterfaceW() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IInputInteraction_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IInputInteraction_1(IInputInteraction_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8588 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::InputSystem
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::InputSystem::IInputInteraction_1, "UnityEngine.InputSystem", "IInputInteraction`1");
