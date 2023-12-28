#pragma once
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
// Type: UnityEngine.InputSystem::InputActionReference
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10210))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6165))
// CS Name: ::UnityEngine.InputSystem::InputActionReference*
class CORDL_TYPE InputActionReference : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  /// @brief Field m_Asset, offset 0x18, size 0x8
  __declspec(property(get = __get_m_Asset, put = __set_m_Asset))::UnityEngine::InputSystem::InputActionAsset* m_Asset;

  /// @brief Field m_ActionId, offset 0x20, size 0x8
  __declspec(property(get = __get_m_ActionId, put = __set_m_ActionId))::StringW m_ActionId;

  /// @brief Field m_Action, offset 0x28, size 0x8
  __declspec(property(get = __get_m_Action, put = __set_m_Action))::UnityEngine::InputSystem::InputAction* m_Action;

  __declspec(property(get = get_asset))::UnityEngine::InputSystem::InputActionAsset* asset;

  __declspec(property(get = get_action))::UnityEngine::InputSystem::InputAction* action;

  constexpr ::UnityEngine::InputSystem::InputActionAsset*& __get_m_Asset();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputActionAsset*> const& __get_m_Asset() const;

  constexpr void __set_m_Asset(::UnityEngine::InputSystem::InputActionAsset* value);

  constexpr ::StringW& __get_m_ActionId();

  constexpr ::StringW const& __get_m_ActionId() const;

  constexpr void __set_m_ActionId(::StringW value);

  constexpr ::UnityEngine::InputSystem::InputAction*& __get_m_Action();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputAction*> const& __get_m_Action() const;

  constexpr void __set_m_Action(::UnityEngine::InputSystem::InputAction* value);

  /// @brief Method get_asset addr 0x2a46e30 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::InputActionAsset* get_asset();

  /// @brief Method get_action addr 0x2a46a58 size 0xac virtual false final false
  inline ::UnityEngine::InputSystem::InputAction* get_action();

  /// @brief Method Set addr 0x2a46e38 size 0x108 virtual false final false
  inline void Set(::UnityEngine::InputSystem::InputAction* action);

  /// @brief Method Set addr 0x2a470b4 size 0x224 virtual false final false
  inline void Set(::UnityEngine::InputSystem::InputActionAsset* asset, ::StringW mapName, ::StringW actionName);

  /// @brief Method SetInternal addr 0x2a46f40 size 0x174 virtual false final false
  inline void SetInternal(::UnityEngine::InputSystem::InputActionAsset* asset, ::UnityEngine::InputSystem::InputAction* action);

  /// @brief Method ToString addr 0x2a47398 size 0x320 virtual true final false
  inline ::StringW ToString();

  /// @brief Method GetDisplayName addr 0x2a472d8 size 0xc0 virtual false final false
  static inline ::StringW GetDisplayName(::UnityEngine::InputSystem::InputAction* action);

  /// @brief Method ToDisplayName addr 0x2a476b8 size 0x3c virtual false final false
  inline ::StringW ToDisplayName();

  /// @brief Method op_Implicit addr 0x2a476f4 size 0xc virtual false final false
  static inline ::UnityEngine::InputSystem::InputAction* op_Implicit___UnityEngine__InputSystem__InputAction_(::UnityEngine::InputSystem::InputActionReference* reference);

  /// @brief Method Create addr 0x2a47700 size 0x6c virtual false final false
  static inline ::UnityEngine::InputSystem::InputActionReference* Create(::UnityEngine::InputSystem::InputAction* action);

  /// @brief Method ToInputAction addr 0x2a4776c size 0x4 virtual false final false
  inline ::UnityEngine::InputSystem::InputAction* ToInputAction();

  static inline ::UnityEngine::InputSystem::InputActionReference* New_ctor();

  /// @brief Method .ctor addr 0x2a47770 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "InputActionReference", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputActionReference(InputActionReference&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputActionReference", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputActionReference(InputActionReference const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputActionReference();

public:
  /// @brief Field m_Asset, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputActionAsset* ___m_Asset;

  /// @brief Field m_ActionId, offset: 0x20, size: 0x8, def value: None
  ::StringW ___m_ActionId;

  /// @brief Field m_Action, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputAction* ___m_Action;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputActionReference, 0x30>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
NEED_NO_BOX(::UnityEngine::InputSystem::InputActionReference);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputActionReference*, "UnityEngine.InputSystem", "InputActionReference");
