#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerLeaderboardPanelController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MultiplayerLeaderboardPanelController)
namespace GlobalNamespace {
class MultiplayerLeaderboardPanelItem;
}
namespace GlobalNamespace {
class MultiplayerScoreProvider;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLeaderboardPanelController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLeaderboardPanelController);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerLeaderboardPanelController
class CORDL_TYPE MultiplayerLeaderboardPanelController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _items, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__items,
                      put = __cordl_internal_set__items)) ::ArrayW<::UnityW<::GlobalNamespace::MultiplayerLeaderboardPanelItem>, ::Array<::UnityW<::GlobalNamespace::MultiplayerLeaderboardPanelItem>>*>
      _items;

  /// @brief Field _scoreProvider, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__scoreProvider, put = __cordl_internal_set__scoreProvider)) ::UnityW<::GlobalNamespace::MultiplayerScoreProvider> _scoreProvider;

  static inline ::GlobalNamespace::MultiplayerLeaderboardPanelController* New_ctor();

  /// @brief Method Start, addr 0x3ba3578, size 0x60, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x3ba3604, size 0x248, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::MultiplayerLeaderboardPanelItem>, ::Array<::UnityW<::GlobalNamespace::MultiplayerLeaderboardPanelItem>>*> const& __cordl_internal_get__items() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::MultiplayerLeaderboardPanelItem>, ::Array<::UnityW<::GlobalNamespace::MultiplayerLeaderboardPanelItem>>*>& __cordl_internal_get__items();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerScoreProvider> const& __cordl_internal_get__scoreProvider() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerScoreProvider>& __cordl_internal_get__scoreProvider();

  constexpr void __cordl_internal_set__items(::ArrayW<::UnityW<::GlobalNamespace::MultiplayerLeaderboardPanelItem>, ::Array<::UnityW<::GlobalNamespace::MultiplayerLeaderboardPanelItem>>*> value);

  constexpr void __cordl_internal_set__scoreProvider(::UnityW<::GlobalNamespace::MultiplayerScoreProvider> value);

  /// @brief Method .ctor, addr 0x3ba3b10, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerLeaderboardPanelController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLeaderboardPanelController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerLeaderboardPanelController(MultiplayerLeaderboardPanelController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLeaderboardPanelController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerLeaderboardPanelController(MultiplayerLeaderboardPanelController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4413 };

  /// @brief Field _items, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::MultiplayerLeaderboardPanelItem>, ::Array<::UnityW<::GlobalNamespace::MultiplayerLeaderboardPanelItem>>*> ____items;

  /// @brief Field _scoreProvider, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerScoreProvider> ____scoreProvider;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerLeaderboardPanelController, ____items) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLeaderboardPanelController, ____scoreProvider) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLeaderboardPanelController, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLeaderboardPanelController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLeaderboardPanelController*, "", "MultiplayerLeaderboardPanelController");
