#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MultiplayerLocalInactiveClient)
namespace GlobalNamespace {
class INodePoseSyncStateManager;
}
namespace GlobalNamespace {
class PlayerTransforms;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLocalInactiveClient;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLocalInactiveClient);
// Type: ::MultiplayerLocalInactiveClient
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5159))
// CS Name: ::MultiplayerLocalInactiveClient*
class CORDL_TYPE MultiplayerLocalInactiveClient : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _playerTransforms, offset 0x18, size 0x8
  __declspec(property(get = __get__playerTransforms, put = __set__playerTransforms))::GlobalNamespace::PlayerTransforms* _playerTransforms;

  /// @brief Field _nodePoseSyncStateManager, offset 0x20, size 0x8
  __declspec(property(get = __get__nodePoseSyncStateManager, put = __set__nodePoseSyncStateManager))::GlobalNamespace::INodePoseSyncStateManager* _nodePoseSyncStateManager;

  constexpr ::GlobalNamespace::PlayerTransforms*& __get__playerTransforms();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerTransforms*> const& __get__playerTransforms() const;

  constexpr void __set__playerTransforms(::GlobalNamespace::PlayerTransforms* value);

  constexpr ::GlobalNamespace::INodePoseSyncStateManager*& __get__nodePoseSyncStateManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::INodePoseSyncStateManager*> const& __get__nodePoseSyncStateManager() const;

  constexpr void __set__nodePoseSyncStateManager(::GlobalNamespace::INodePoseSyncStateManager* value);

  /// @brief Method LateUpdate, addr 0x23dc574, size 0x348, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::GlobalNamespace::MultiplayerLocalInactiveClient* New_ctor();

  /// @brief Method .ctor, addr 0x23dc8bc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalInactiveClient", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerLocalInactiveClient(MultiplayerLocalInactiveClient&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalInactiveClient", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerLocalInactiveClient(MultiplayerLocalInactiveClient const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerLocalInactiveClient();

public:
  /// @brief Field _playerTransforms, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::PlayerTransforms* ____playerTransforms;

  /// @brief Field _nodePoseSyncStateManager, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::INodePoseSyncStateManager* ____nodePoseSyncStateManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLocalInactiveClient, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalInactiveClient, ____playerTransforms) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalInactiveClient, ____nodePoseSyncStateManager) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLocalInactiveClient);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLocalInactiveClient*, "", "MultiplayerLocalInactiveClient");
