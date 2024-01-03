#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MultiplayerDuelScoreManager)
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
class MultiplayerController;
}
namespace GlobalNamespace {
class MultiplayerScoreItem;
}
namespace GlobalNamespace {
class MultiplayerScoreProvider;
}
namespace GlobalNamespace {
struct __MultiplayerController__State;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerDuelScoreManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerDuelScoreManager);
// Type: ::MultiplayerDuelScoreManager
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 76, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5203))
// CS Name: ::MultiplayerDuelScoreManager*
class CORDL_TYPE MultiplayerDuelScoreManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _scoreItem, offset 0x18, size 0x8
  __declspec(property(get = __get__scoreItem, put = __set__scoreItem))::GlobalNamespace::MultiplayerScoreItem* _scoreItem;

  /// @brief Field _delayBetweenScoreUpdates, offset 0x20, size 0x4
  __declspec(property(get = __get__delayBetweenScoreUpdates, put = __set__delayBetweenScoreUpdates)) float_t _delayBetweenScoreUpdates;

  /// @brief Field _multiplayerController, offset 0x28, size 0x8
  __declspec(property(get = __get__multiplayerController, put = __set__multiplayerController))::GlobalNamespace::MultiplayerController* _multiplayerController;

  /// @brief Field _scoreProvider, offset 0x30, size 0x8
  __declspec(property(get = __get__scoreProvider, put = __set__scoreProvider))::GlobalNamespace::MultiplayerScoreProvider* _scoreProvider;

  /// @brief Field _multiplayerSessionManager, offset 0x38, size 0x8
  __declspec(property(get = __get__multiplayerSessionManager, put = __set__multiplayerSessionManager))::GlobalNamespace::IMultiplayerSessionManager* _multiplayerSessionManager;

  /// @brief Field _opponentPlayer, offset 0x40, size 0x8
  __declspec(property(get = __get__opponentPlayer, put = __set__opponentPlayer))::GlobalNamespace::IConnectedPlayer* _opponentPlayer;

  /// @brief Field _timeSinceLastScoreUpdate, offset 0x48, size 0x4
  __declspec(property(get = __get__timeSinceLastScoreUpdate, put = __set__timeSinceLastScoreUpdate)) float_t _timeSinceLastScoreUpdate;

  constexpr ::GlobalNamespace::MultiplayerScoreItem*& __get__scoreItem();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerScoreItem*> const& __get__scoreItem() const;

  constexpr void __set__scoreItem(::GlobalNamespace::MultiplayerScoreItem* value);

  constexpr float_t& __get__delayBetweenScoreUpdates();

  constexpr float_t const& __get__delayBetweenScoreUpdates() const;

  constexpr void __set__delayBetweenScoreUpdates(float_t value);

  constexpr ::GlobalNamespace::MultiplayerController*& __get__multiplayerController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerController*> const& __get__multiplayerController() const;

  constexpr void __set__multiplayerController(::GlobalNamespace::MultiplayerController* value);

  constexpr ::GlobalNamespace::MultiplayerScoreProvider*& __get__scoreProvider();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerScoreProvider*> const& __get__scoreProvider() const;

  constexpr void __set__scoreProvider(::GlobalNamespace::MultiplayerScoreProvider* value);

  constexpr ::GlobalNamespace::IMultiplayerSessionManager*& __get__multiplayerSessionManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSessionManager*> const& __get__multiplayerSessionManager() const;

  constexpr void __set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value);

  constexpr ::GlobalNamespace::IConnectedPlayer*& __get__opponentPlayer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectedPlayer*> const& __get__opponentPlayer() const;

  constexpr void __set__opponentPlayer(::GlobalNamespace::IConnectedPlayer* value);

  constexpr float_t& __get__timeSinceLastScoreUpdate();

  constexpr float_t const& __get__timeSinceLastScoreUpdate() const;

  constexpr void __set__timeSinceLastScoreUpdate(float_t value);

  /// @brief Method Start, addr 0x224b7c8, size 0xcc, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method OnDestroy, addr 0x224bb60, size 0xd0, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Update, addr 0x224bc30, size 0x68, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method EnsureOpponentAssigned, addr 0x224bc98, size 0x2c, virtual false, abstract: false, final false
  inline bool EnsureOpponentAssigned();

  /// @brief Method GetOpponentPlayer, addr 0x224bcc4, size 0x3f0, virtual false, abstract: false, final false
  inline ::GlobalNamespace::IConnectedPlayer* GetOpponentPlayer();

  /// @brief Method UpdateScoreAndName, addr 0x224b9a8, size 0x1b8, virtual false, abstract: false, final false
  inline void UpdateScoreAndName();

  /// @brief Method HandleStateChanged, addr 0x224c194, size 0xf0, virtual false, abstract: false, final false
  inline void HandleStateChanged(::GlobalNamespace::__MultiplayerController__State newState);

  static inline ::GlobalNamespace::MultiplayerDuelScoreManager* New_ctor();

  /// @brief Method .ctor, addr 0x224c284, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerDuelScoreManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerDuelScoreManager(MultiplayerDuelScoreManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerDuelScoreManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerDuelScoreManager(MultiplayerDuelScoreManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerDuelScoreManager();

public:
  /// @brief Field _scoreItem, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerScoreItem* ____scoreItem;

  /// @brief Field _delayBetweenScoreUpdates, offset: 0x20, size: 0x4, def value: None
  float_t ____delayBetweenScoreUpdates;

  /// @brief Field _multiplayerController, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerController* ____multiplayerController;

  /// @brief Field _scoreProvider, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerScoreProvider* ____scoreProvider;

  /// @brief Field _multiplayerSessionManager, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::IMultiplayerSessionManager* ____multiplayerSessionManager;

  /// @brief Field _opponentPlayer, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::IConnectedPlayer* ____opponentPlayer;

  /// @brief Field _timeSinceLastScoreUpdate, offset: 0x48, size: 0x4, def value: None
  float_t ____timeSinceLastScoreUpdate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerDuelScoreManager, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerDuelScoreManager, ____scoreItem) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerDuelScoreManager, ____delayBetweenScoreUpdates) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerDuelScoreManager, ____multiplayerController) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerDuelScoreManager, ____scoreProvider) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerDuelScoreManager, ____multiplayerSessionManager) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerDuelScoreManager, ____opponentPlayer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerDuelScoreManager, ____timeSinceLastScoreUpdate) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerDuelScoreManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerDuelScoreManager*, "", "MultiplayerDuelScoreManager");
