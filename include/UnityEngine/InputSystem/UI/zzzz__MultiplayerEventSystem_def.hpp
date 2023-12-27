#pragma once
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
// Type: UnityEngine.InputSystem.UI::MultiplayerEventSystem
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13191))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6377))
// CS Name: ::UnityEngine.InputSystem.UI::MultiplayerEventSystem*
class CORDL_TYPE MultiplayerEventSystem : public ::UnityEngine::EventSystems::EventSystem {
public:
  // Declarations
  /// @brief Field m_PlayerRoot, offset 0x50, size 0x8
  __declspec(property(get = __get_m_PlayerRoot, put = __set_m_PlayerRoot))::UnityEngine::GameObject* m_PlayerRoot;

  __declspec(property(get = get_playerRoot, put = set_playerRoot))::UnityEngine::GameObject* playerRoot;

  constexpr ::UnityEngine::GameObject*& __get_m_PlayerRoot();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get_m_PlayerRoot() const;

  constexpr void __set_m_PlayerRoot(::UnityEngine::GameObject* value);

  /// @brief Method get_playerRoot addr 0x2ad6510 size 0x8 virtual false final false
  inline ::UnityEngine::GameObject* get_playerRoot();

  /// @brief Method set_playerRoot addr 0x2ad6518 size 0x8 virtual false final false
  inline void set_playerRoot(::UnityEngine::GameObject* value);

  /// @brief Method OnEnable addr 0x2ad65e4 size 0x1c virtual true final false
  inline void OnEnable();

  /// @brief Method OnDisable addr 0x2ad6600 size 0x8 virtual true final false
  inline void OnDisable();

  /// @brief Method InitializePlayerRoot addr 0x2ad6520 size 0xc4 virtual false final false
  inline void InitializePlayerRoot();

  /// @brief Method Update addr 0x2ad6608 size 0x108 virtual true final false
  inline void Update();

  static inline ::UnityEngine::InputSystem::UI::MultiplayerEventSystem* New_ctor();

  /// @brief Method .ctor addr 0x2ad6710 size 0x58 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerEventSystem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerEventSystem(MultiplayerEventSystem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerEventSystem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerEventSystem(MultiplayerEventSystem const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerEventSystem();

public:
  /// @brief Field m_PlayerRoot, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::GameObject* ___m_PlayerRoot;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::UI::MultiplayerEventSystem, 0x58>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::UI
NEED_NO_BOX(::UnityEngine::InputSystem::UI::MultiplayerEventSystem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::UI::MultiplayerEventSystem*, "UnityEngine.InputSystem.UI", "MultiplayerEventSystem");
