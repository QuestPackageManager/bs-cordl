#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputActionReference.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(InputActionReference)
namespace UnityEngine::InputSystem {
class InputActionAsset;
}
namespace UnityEngine::InputSystem {
class InputAction;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class InputActionReference;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::InputActionReference);
// Dependencies UnityEngine.ScriptableObject
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputActionReference
class CORDL_TYPE InputActionReference : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  __declspec(property(get = get_action)) ::UnityEngine::InputSystem::InputAction* action;

  __declspec(property(get = get_asset)) ::UnityW<::UnityEngine::InputSystem::InputActionAsset> asset;

  /// @brief Field m_Action, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Action, put = __cordl_internal_set_m_Action)) ::UnityEngine::InputSystem::InputAction* m_Action;

  /// @brief Field m_ActionId, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ActionId, put = __cordl_internal_set_m_ActionId)) ::StringW m_ActionId;

  /// @brief Field m_Asset, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Asset, put = __cordl_internal_set_m_Asset)) ::UnityW<::UnityEngine::InputSystem::InputActionAsset> m_Asset;

  /// @brief Method Create, addr 0x6332bb4, size 0x70, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> Create(::UnityEngine::InputSystem::InputAction* action);

  /// @brief Method GetDisplayName, addr 0x6332894, size 0x90, virtual false, abstract: false, final false
  static inline ::StringW GetDisplayName(::UnityEngine::InputSystem::InputAction* action);

  static inline ::UnityEngine::InputSystem::InputActionReference* New_ctor();

  /// @brief Method ResetCachedAction, addr 0x6332c24, size 0xf8, virtual false, abstract: false, final false
  static inline void ResetCachedAction();

  /// @brief Method Set, addr 0x6332410, size 0x104, virtual false, abstract: false, final false
  inline void Set(::UnityEngine::InputSystem::InputAction* action);

  /// @brief Method Set, addr 0x6332680, size 0x214, virtual false, abstract: false, final false
  inline void Set(::UnityEngine::InputSystem::InputActionAsset* asset, ::StringW mapName, ::StringW actionName);

  /// @brief Method SetInternal, addr 0x6332514, size 0x16c, virtual false, abstract: false, final false
  inline void SetInternal(::UnityEngine::InputSystem::InputActionAsset* asset, ::UnityEngine::InputSystem::InputAction* action);

  /// @brief Method ToDisplayName, addr 0x6332b74, size 0x34, virtual false, abstract: false, final false
  inline ::StringW ToDisplayName();

  /// @brief Method ToInputAction, addr 0x6332d1c, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputAction* ToInputAction();

  /// @brief Method ToString, addr 0x6332924, size 0x250, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::UnityEngine::InputSystem::InputAction* const& __cordl_internal_get_m_Action() const;

  constexpr ::UnityEngine::InputSystem::InputAction*& __cordl_internal_get_m_Action();

  constexpr ::StringW const& __cordl_internal_get_m_ActionId() const;

  constexpr ::StringW& __cordl_internal_get_m_ActionId();

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionAsset> const& __cordl_internal_get_m_Asset() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionAsset>& __cordl_internal_get_m_Asset();

  constexpr void __cordl_internal_set_m_Action(::UnityEngine::InputSystem::InputAction* value);

  constexpr void __cordl_internal_set_m_ActionId(::StringW value);

  constexpr void __cordl_internal_set_m_Asset(::UnityW<::UnityEngine::InputSystem::InputActionAsset> value);

  /// @brief Method .ctor, addr 0x6332d20, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_action, addr 0x6331ff8, size 0xb4, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputAction* get_action();

  /// @brief Method get_asset, addr 0x6332408, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::InputSystem::InputActionAsset> get_asset();

  /// @brief Method op_Implicit, addr 0x6332ba8, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::InputAction* op_Implicit___UnityEngine__InputSystem__InputAction_(::UnityEngine::InputSystem::InputActionReference* reference);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputActionReference();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputActionReference", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputActionReference(InputActionReference&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputActionReference", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputActionReference(InputActionReference const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8628 };

  /// @brief Field m_Asset, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionAsset> ___m_Asset;

  /// @brief Field m_ActionId, offset: 0x20, size: 0x8, def value: None
  ::StringW ___m_ActionId;

  /// @brief Field m_Action, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputAction* ___m_Action;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputActionReference, ___m_Asset) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionReference, ___m_ActionId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionReference, ___m_Action) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputActionReference, 0x30>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
NEED_NO_BOX(::UnityEngine::InputSystem::InputActionReference);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputActionReference*, "UnityEngine.InputSystem", "InputActionReference");
