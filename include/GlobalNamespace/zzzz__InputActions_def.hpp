#pragma once
// IWYU pragma private; include "GlobalNamespace/InputActions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(InputActions)
namespace GlobalNamespace {
class UIKeyboardManager;
}
namespace UnityEngine::EventSystems {
class EventSystem;
}
namespace Zenject {
class SceneContext;
}
// Forward declare root types
namespace GlobalNamespace {
class InputActions;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::InputActions*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputActions*, "", "InputActions");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: InputActions
class CORDL_TYPE InputActions : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _keyboardManager, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__keyboardManager, put = __cordl_internal_set__keyboardManager)) ::UnityW<::GlobalNamespace::UIKeyboardManager> _keyboardManager;

  /// @brief Method HasInputFocus, addr 0x58dfafc, size 0x104, virtual false, abstract: false, final false
  static inline bool HasInputFocus(::UnityEngine::EventSystems::EventSystem* eventSystem, ::GlobalNamespace::UIKeyboardManager* keyboardManager);

  static inline ::GlobalNamespace::InputActions* New_ctor();

  /// @brief Method ResolveGameplayCoreSceneContext, addr 0x58dfdb8, size 0x3a4, virtual false, abstract: false, final false
  static inline ::UnityW<::Zenject::SceneContext> ResolveGameplayCoreSceneContext();

  /// @brief Method ToggleAutoplay, addr 0x58dfc00, size 0x1b4, virtual false, abstract: false, final false
  static inline void ToggleAutoplay();

  /// @brief Method ToggleLevelFreeze, addr 0x58dfdb4, size 0x4, virtual false, abstract: false, final false
  static inline void ToggleLevelFreeze();

  /// @brief Method Update, addr 0x58df824, size 0x2d8, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::UnityW<::GlobalNamespace::UIKeyboardManager> const& __cordl_internal_get__keyboardManager() const;

  constexpr ::UnityW<::GlobalNamespace::UIKeyboardManager>& __cordl_internal_get__keyboardManager();

  constexpr void __cordl_internal_set__keyboardManager(::UnityW<::GlobalNamespace::UIKeyboardManager> value);

  /// @brief Method .ctor, addr 0x58e015c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputActions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputActions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputActions(InputActions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputActions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputActions(InputActions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6500 };

  /// @brief Field _keyboardManager, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::UIKeyboardManager> ____keyboardManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputActions, ____keyboardManager) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputActions) == 0x28, "Size mismatch!");

} // namespace GlobalNamespace
