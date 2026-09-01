#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\InputInteraction.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__TypeTable_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(InputInteraction)
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class InputInteraction;
}
// Write type traits
MARK_REF_T(::UnityEngine::InputSystem::InputInteraction*);
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::InputInteraction*, "UnityEngine.InputSystem", "InputInteraction");
// Dependencies System.Object, UnityEngine.InputSystem.Utilities.TypeTable
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputInteraction
class CORDL_TYPE InputInteraction : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_Interactions, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Interactions, put = setStaticF_s_Interactions)) ::UnityEngine::InputSystem::Utilities::TypeTable s_Interactions;

  /// @brief Method GetDisplayName, addr 0x64d2f8c, size 0xe4, virtual false, abstract: false, final false
  static inline ::StringW GetDisplayName(::StringW interaction);

  /// @brief Method GetDisplayName, addr 0x64d3070, size 0x178, virtual false, abstract: false, final false
  static inline ::StringW GetDisplayName(::System::Type* interactionType);

  /// @brief Method GetValueType, addr 0x64d2eb8, size 0xd4, virtual false, abstract: false, final false
  static inline ::System::Type* GetValueType(::System::Type* interactionType);

  static inline ::UnityEngine::InputSystem::Utilities::TypeTable getStaticF_s_Interactions();

  static inline void setStaticF_s_Interactions(::UnityEngine::InputSystem::Utilities::TypeTable value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputInteraction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputInteraction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputInteraction(InputInteraction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputInteraction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputInteraction(InputInteraction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8612 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::InputSystem::InputInteraction) == 0x10, "Size mismatch!");

} // namespace UnityEngine::InputSystem
