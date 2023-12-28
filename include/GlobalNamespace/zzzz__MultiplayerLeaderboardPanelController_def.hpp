#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: ::MultiplayerLeaderboardPanelController
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5037))
// CS Name: ::MultiplayerLeaderboardPanelController*
class CORDL_TYPE MultiplayerLeaderboardPanelController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _items, offset 0x18, size 0x8
  __declspec(property(get = __get__items, put = __set__items))::ArrayW<::GlobalNamespace::MultiplayerLeaderboardPanelItem*, ::Array<::GlobalNamespace::MultiplayerLeaderboardPanelItem*>*> _items;

  /// @brief Field _scoreProvider, offset 0x20, size 0x8
  __declspec(property(get = __get__scoreProvider, put = __set__scoreProvider))::GlobalNamespace::MultiplayerScoreProvider* _scoreProvider;

  constexpr ::ArrayW<::GlobalNamespace::MultiplayerLeaderboardPanelItem*, ::Array<::GlobalNamespace::MultiplayerLeaderboardPanelItem*>*>& __get__items();

  constexpr ::ArrayW<::GlobalNamespace::MultiplayerLeaderboardPanelItem*, ::Array<::GlobalNamespace::MultiplayerLeaderboardPanelItem*>*> const& __get__items() const;

  constexpr void __set__items(::ArrayW<::GlobalNamespace::MultiplayerLeaderboardPanelItem*, ::Array<::GlobalNamespace::MultiplayerLeaderboardPanelItem*>*> value);

  constexpr ::GlobalNamespace::MultiplayerScoreProvider*& __get__scoreProvider();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerScoreProvider*> const& __get__scoreProvider() const;

  constexpr void __set__scoreProvider(::GlobalNamespace::MultiplayerScoreProvider* value);

  /// @brief Method Start addr 0x23c1940 size 0x60 virtual false final false
  inline void Start();

  /// @brief Method Update addr 0x23c19cc size 0x248 virtual false final false
  inline void Update();

  static inline ::GlobalNamespace::MultiplayerLeaderboardPanelController* New_ctor();

  /// @brief Method .ctor addr 0x23c1ee4 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLeaderboardPanelController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerLeaderboardPanelController(MultiplayerLeaderboardPanelController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLeaderboardPanelController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerLeaderboardPanelController(MultiplayerLeaderboardPanelController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerLeaderboardPanelController();

public:
  /// @brief Field _items, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::MultiplayerLeaderboardPanelItem*, ::Array<::GlobalNamespace::MultiplayerLeaderboardPanelItem*>*> ____items;

  /// @brief Field _scoreProvider, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerScoreProvider* ____scoreProvider;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLeaderboardPanelController, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLeaderboardPanelController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLeaderboardPanelController*, "", "MultiplayerLeaderboardPanelController");
