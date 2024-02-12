#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__TypeTable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(InputInteraction)
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class InputInteraction;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::InputInteraction);
// Type: UnityEngine.InputSystem::InputInteraction
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(5971))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5390))
// CS Name: ::UnityEngine.InputSystem::InputInteraction*
class CORDL_TYPE InputInteraction : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_Interactions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Interactions, put = setStaticF_s_Interactions))::UnityEngine::InputSystem::Utilities::TypeTable s_Interactions;

  static inline void setStaticF_s_Interactions(::UnityEngine::InputSystem::Utilities::TypeTable value);

  static inline ::UnityEngine::InputSystem::Utilities::TypeTable getStaticF_s_Interactions();

  /// @brief Method GetValueType, addr 0x2a38034, size 0xf4, virtual false, abstract: false, final false
  static inline ::System::Type* GetValueType(::System::Type* interactionType);

  /// @brief Method GetDisplayName, addr 0x2a38128, size 0x104, virtual false, abstract: false, final false
  static inline ::StringW GetDisplayName(::StringW interaction);

  /// @brief Method GetDisplayName, addr 0x2a3822c, size 0x198, virtual false, abstract: false, final false
  static inline ::StringW GetDisplayName(::System::Type* interactionType);

  // Ctor Parameters [CppParam { name: "", ty: "InputInteraction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputInteraction(InputInteraction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputInteraction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputInteraction(InputInteraction const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputInteraction();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputInteraction, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
NEED_NO_BOX(::UnityEngine::InputSystem::InputInteraction);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputInteraction*, "UnityEngine.InputSystem", "InputInteraction");
