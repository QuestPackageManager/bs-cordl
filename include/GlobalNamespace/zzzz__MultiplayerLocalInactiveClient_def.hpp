#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerLocalInactiveClient.hpp"
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
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerLocalInactiveClient
class CORDL_TYPE MultiplayerLocalInactiveClient : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _nodePoseSyncStateManager, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__nodePoseSyncStateManager,
                      put = __cordl_internal_set__nodePoseSyncStateManager)) ::GlobalNamespace::INodePoseSyncStateManager* _nodePoseSyncStateManager;

  /// @brief Field _playerTransforms, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__playerTransforms, put = __cordl_internal_set__playerTransforms)) ::UnityW<::GlobalNamespace::PlayerTransforms> _playerTransforms;

  /// @brief Method LateUpdate, addr 0x3bc4db4, size 0x348, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::GlobalNamespace::MultiplayerLocalInactiveClient* New_ctor();

  constexpr ::GlobalNamespace::INodePoseSyncStateManager* const& __cordl_internal_get__nodePoseSyncStateManager() const;

  constexpr ::GlobalNamespace::INodePoseSyncStateManager*& __cordl_internal_get__nodePoseSyncStateManager();

  constexpr ::UnityW<::GlobalNamespace::PlayerTransforms> const& __cordl_internal_get__playerTransforms() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerTransforms>& __cordl_internal_get__playerTransforms();

  constexpr void __cordl_internal_set__nodePoseSyncStateManager(::GlobalNamespace::INodePoseSyncStateManager* value);

  constexpr void __cordl_internal_set__playerTransforms(::UnityW<::GlobalNamespace::PlayerTransforms> value);

  /// @brief Method .ctor, addr 0x3bc50fc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerLocalInactiveClient();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalInactiveClient", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerLocalInactiveClient(MultiplayerLocalInactiveClient&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalInactiveClient", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerLocalInactiveClient(MultiplayerLocalInactiveClient const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4525 };

  /// @brief Field _playerTransforms, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerTransforms> ____playerTransforms;

  /// @brief Field _nodePoseSyncStateManager, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::INodePoseSyncStateManager* ____nodePoseSyncStateManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerLocalInactiveClient, ____playerTransforms) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalInactiveClient, ____nodePoseSyncStateManager) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLocalInactiveClient, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLocalInactiveClient);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLocalInactiveClient*, "", "MultiplayerLocalInactiveClient");
