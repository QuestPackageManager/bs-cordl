#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/UI/MultiplayerEventSystem.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__EventSystem_def.hpp"
CORDL_MODULE_EXPORT(MultiplayerEventSystem)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace UnityEngine::InputSystem::UI {
class MultiplayerEventSystem;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::UI::MultiplayerEventSystem);
// Dependencies UnityEngine.EventSystems.EventSystem
namespace UnityEngine::InputSystem::UI {
// Is value type: false
// CS Name: UnityEngine.InputSystem.UI.MultiplayerEventSystem
class CORDL_TYPE MultiplayerEventSystem : public ::UnityEngine::EventSystems::EventSystem {
public:
  // Declarations
  /// @brief Field m_PlayerRoot, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PlayerRoot, put = __cordl_internal_set_m_PlayerRoot)) ::UnityW<::UnityEngine::GameObject> m_PlayerRoot;

  __declspec(property(get = get_playerRoot, put = set_playerRoot)) ::UnityW<::UnityEngine::GameObject> playerRoot;

  /// @brief Method InitializePlayerRoot, addr 0x45f4ef4, size 0xc4, virtual false, abstract: false, final false
  inline void InitializePlayerRoot();

  static inline ::UnityEngine::InputSystem::UI::MultiplayerEventSystem* New_ctor();

  /// @brief Method OnDisable, addr 0x45f4fd4, size 0x8, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x45f4fb8, size 0x1c, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method Update, addr 0x45f4fdc, size 0x108, virtual true, abstract: false, final false
  inline void Update();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_PlayerRoot() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_PlayerRoot();

  constexpr void __cordl_internal_set_m_PlayerRoot(::UnityW<::UnityEngine::GameObject> value);

  /// @brief Method .ctor, addr 0x45f50e4, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_playerRoot, addr 0x45f4ee4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_playerRoot();

  /// @brief Method set_playerRoot, addr 0x45f4eec, size 0x8, virtual false, abstract: false, final false
  inline void set_playerRoot(::UnityEngine::GameObject* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerEventSystem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerEventSystem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerEventSystem(MultiplayerEventSystem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerEventSystem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerEventSystem(MultiplayerEventSystem const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6786 };

  /// @brief Field m_PlayerRoot, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___m_PlayerRoot;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::UI::MultiplayerEventSystem, ___m_PlayerRoot) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::UI::MultiplayerEventSystem, 0x68>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::UI
NEED_NO_BOX(::UnityEngine::InputSystem::UI::MultiplayerEventSystem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::UI::MultiplayerEventSystem*, "UnityEngine.InputSystem.UI", "MultiplayerEventSystem");
