#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/IInputInteraction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(IInputInteraction)
namespace UnityEngine::InputSystem {
struct InputInteractionContext;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class IInputInteraction;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::IInputInteraction);
// Type: UnityEngine.InputSystem::IInputInteraction
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: ::UnityEngine.InputSystem::IInputInteraction*
class CORDL_TYPE IInputInteraction {
public:
  // Declarations
  /// @brief Method Process, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Process(ByRef<::UnityEngine::InputSystem::InputInteractionContext> context);

  /// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Reset();

  // Ctor Parameters [CppParam { name: "", ty: "IInputInteraction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IInputInteraction(IInputInteraction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IInputInteraction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IInputInteraction(IInputInteraction const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::InputSystem
NEED_NO_BOX(::UnityEngine::InputSystem::IInputInteraction);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::IInputInteraction*, "UnityEngine.InputSystem", "IInputInteraction");
