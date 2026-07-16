#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/OnScreen/OnScreenSupport.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnScreenSupport)
// Forward declare root types
namespace UnityEngine::InputSystem::OnScreen {
class OnScreenSupport;
}
// Write type traits
MARK_REF_T(::UnityEngine::InputSystem::OnScreen::OnScreenSupport*);
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::OnScreen::OnScreenSupport*, "UnityEngine.InputSystem.OnScreen", "OnScreenSupport");
// Dependencies System.Object
namespace UnityEngine::InputSystem::OnScreen {
// Is value type: false
// CS Name: UnityEngine.InputSystem.OnScreen.OnScreenSupport
class CORDL_TYPE OnScreenSupport : public ::System::Object {
public:
  // Declarations
  /// @brief Method Initialize, addr 0x659a070, size 0x4, virtual false, abstract: false, final false
  static inline void Initialize();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OnScreenSupport();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OnScreenSupport", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OnScreenSupport(OnScreenSupport&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OnScreenSupport", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OnScreenSupport(OnScreenSupport const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8854 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::InputSystem::OnScreen::OnScreenSupport) == 0x10, "Size mismatch!");

} // namespace UnityEngine::InputSystem::OnScreen
