#pragma once
// IWYU pragma private; include "GlobalNamespace/CenterStageScreenController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CenterStageScreenController)
namespace GlobalNamespace {
class BeatmapSelectionView;
}
namespace GlobalNamespace {
class CountdownController;
}
namespace GlobalNamespace {
class ILevelGameplaySetupData;
}
namespace GlobalNamespace {
class ILobbyGameStateController;
}
namespace GlobalNamespace {
class MenuLightsManager;
}
namespace GlobalNamespace {
class MenuLightsPresetSO;
}
namespace GlobalNamespace {
class ModifiersSelectionView;
}
namespace GlobalNamespace {
class MultiplayerLobbyCenterScreenLayoutAnimator;
}
// Forward declare root types
namespace GlobalNamespace {
class CenterStageScreenController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CenterStageScreenController);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: CenterStageScreenController
class CORDL_TYPE CenterStageScreenController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _beatmapSelectionView, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapSelectionView, put = __cordl_internal_set__beatmapSelectionView)) ::UnityW<::GlobalNamespace::BeatmapSelectionView> _beatmapSelectionView;

  /// @brief Field _countdownController, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__countdownController, put = __cordl_internal_set__countdownController)) ::UnityW<::GlobalNamespace::CountdownController> _countdownController;

  /// @brief Field _countdownEndTime, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__countdownEndTime, put = __cordl_internal_set__countdownEndTime)) int64_t _countdownEndTime;

  /// @brief Field _countdownMenuLightsPreset, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__countdownMenuLightsPreset, put = __cordl_internal_set__countdownMenuLightsPreset)) ::UnityW<::GlobalNamespace::MenuLightsPresetSO>
      _countdownMenuLightsPreset;

  /// @brief Field <countdownShown>k__BackingField, offset 0x68, size 0x1
  __declspec(property(get = __cordl_internal_get__countdownShown_k__BackingField, put = __cordl_internal_set__countdownShown_k__BackingField)) bool _countdownShown_k__BackingField;

  /// @brief Field _defaultMenuLightsPreset, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__defaultMenuLightsPreset, put = __cordl_internal_set__defaultMenuLightsPreset)) ::UnityW<::GlobalNamespace::MenuLightsPresetSO>
      _defaultMenuLightsPreset;

  /// @brief Field _lobbyGameStateController, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__lobbyGameStateController,
                      put = __cordl_internal_set__lobbyGameStateController)) ::GlobalNamespace::ILobbyGameStateController* _lobbyGameStateController;

  /// @brief Field _lobbyLightsPreset, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__lobbyLightsPreset, put = __cordl_internal_set__lobbyLightsPreset)) ::UnityW<::GlobalNamespace::MenuLightsPresetSO> _lobbyLightsPreset;

  /// @brief Field _menuLightsManager, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__menuLightsManager, put = __cordl_internal_set__menuLightsManager)) ::UnityW<::GlobalNamespace::MenuLightsManager> _menuLightsManager;

  /// @brief Field _modifiersSelectionView, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__modifiersSelectionView, put = __cordl_internal_set__modifiersSelectionView)) ::UnityW<::GlobalNamespace::ModifiersSelectionView>
      _modifiersSelectionView;

  /// @brief Field _multiplayerLobbyCenterScreenLayoutAnimator, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerLobbyCenterScreenLayoutAnimator,
                      put = __cordl_internal_set__multiplayerLobbyCenterScreenLayoutAnimator)) ::UnityW<::GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator>
      _multiplayerLobbyCenterScreenLayoutAnimator;

  __declspec(property(get = get_countdownShown, put = set_countdownShown)) bool countdownShown;

  /// @brief Method HandleLobbyGameStateControllerSelectedLevelGameplaySetupDataChanged, addr 0x3c1a2fc, size 0x4, virtual false, abstract: false, final false
  inline void HandleLobbyGameStateControllerSelectedLevelGameplaySetupDataChanged(::GlobalNamespace::ILevelGameplaySetupData* levelGameplaySetupData);

  /// @brief Method Hide, addr 0x3c08e90, size 0x138, virtual false, abstract: false, final false
  inline void Hide();

  /// @brief Method HideCountdown, addr 0x3c1a208, size 0x3c, virtual false, abstract: false, final false
  inline void HideCountdown(bool instant);

  static inline ::GlobalNamespace::CenterStageScreenController* New_ctor();

  /// @brief Method SetCountdownEndTime, addr 0x3c1a278, size 0x54, virtual false, abstract: false, final false
  inline void SetCountdownEndTime(int64_t countdownEndTime);

  /// @brief Method SetNextGameplaySetupData, addr 0x3c1a0a4, size 0x164, virtual false, abstract: false, final false
  inline void SetNextGameplaySetupData(::GlobalNamespace::ILevelGameplaySetupData* levelGameplaySetupData);

  /// @brief Method Setup, addr 0x3c1a044, size 0x30, virtual false, abstract: false, final false
  inline void Setup(bool showModifiers);

  /// @brief Method Show, addr 0x3c08ce8, size 0x188, virtual false, abstract: false, final false
  inline void Show();

  /// @brief Method ShowCountdown, addr 0x3c1a244, size 0x34, virtual false, abstract: false, final false
  inline void ShowCountdown(int64_t countdownEndTime);

  /// @brief Method ShowCountdownColorPreset, addr 0x3c1a2cc, size 0x30, virtual false, abstract: false, final false
  inline void ShowCountdownColorPreset(bool animated);

  /// @brief Method ShowLobbyColorPreset, addr 0x3c1a074, size 0x30, virtual false, abstract: false, final false
  inline void ShowLobbyColorPreset(bool animated);

  constexpr ::UnityW<::GlobalNamespace::BeatmapSelectionView> const& __cordl_internal_get__beatmapSelectionView() const;

  constexpr ::UnityW<::GlobalNamespace::BeatmapSelectionView>& __cordl_internal_get__beatmapSelectionView();

  constexpr ::UnityW<::GlobalNamespace::CountdownController> const& __cordl_internal_get__countdownController() const;

  constexpr ::UnityW<::GlobalNamespace::CountdownController>& __cordl_internal_get__countdownController();

  constexpr int64_t const& __cordl_internal_get__countdownEndTime() const;

  constexpr int64_t& __cordl_internal_get__countdownEndTime();

  constexpr ::UnityW<::GlobalNamespace::MenuLightsPresetSO> const& __cordl_internal_get__countdownMenuLightsPreset() const;

  constexpr ::UnityW<::GlobalNamespace::MenuLightsPresetSO>& __cordl_internal_get__countdownMenuLightsPreset();

  constexpr bool const& __cordl_internal_get__countdownShown_k__BackingField() const;

  constexpr bool& __cordl_internal_get__countdownShown_k__BackingField();

  constexpr ::UnityW<::GlobalNamespace::MenuLightsPresetSO> const& __cordl_internal_get__defaultMenuLightsPreset() const;

  constexpr ::UnityW<::GlobalNamespace::MenuLightsPresetSO>& __cordl_internal_get__defaultMenuLightsPreset();

  constexpr ::GlobalNamespace::ILobbyGameStateController* const& __cordl_internal_get__lobbyGameStateController() const;

  constexpr ::GlobalNamespace::ILobbyGameStateController*& __cordl_internal_get__lobbyGameStateController();

  constexpr ::UnityW<::GlobalNamespace::MenuLightsPresetSO> const& __cordl_internal_get__lobbyLightsPreset() const;

  constexpr ::UnityW<::GlobalNamespace::MenuLightsPresetSO>& __cordl_internal_get__lobbyLightsPreset();

  constexpr ::UnityW<::GlobalNamespace::MenuLightsManager> const& __cordl_internal_get__menuLightsManager() const;

  constexpr ::UnityW<::GlobalNamespace::MenuLightsManager>& __cordl_internal_get__menuLightsManager();

  constexpr ::UnityW<::GlobalNamespace::ModifiersSelectionView> const& __cordl_internal_get__modifiersSelectionView() const;

  constexpr ::UnityW<::GlobalNamespace::ModifiersSelectionView>& __cordl_internal_get__modifiersSelectionView();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator> const& __cordl_internal_get__multiplayerLobbyCenterScreenLayoutAnimator() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator>& __cordl_internal_get__multiplayerLobbyCenterScreenLayoutAnimator();

  constexpr void __cordl_internal_set__beatmapSelectionView(::UnityW<::GlobalNamespace::BeatmapSelectionView> value);

  constexpr void __cordl_internal_set__countdownController(::UnityW<::GlobalNamespace::CountdownController> value);

  constexpr void __cordl_internal_set__countdownEndTime(int64_t value);

  constexpr void __cordl_internal_set__countdownMenuLightsPreset(::UnityW<::GlobalNamespace::MenuLightsPresetSO> value);

  constexpr void __cordl_internal_set__countdownShown_k__BackingField(bool value);

  constexpr void __cordl_internal_set__defaultMenuLightsPreset(::UnityW<::GlobalNamespace::MenuLightsPresetSO> value);

  constexpr void __cordl_internal_set__lobbyGameStateController(::GlobalNamespace::ILobbyGameStateController* value);

  constexpr void __cordl_internal_set__lobbyLightsPreset(::UnityW<::GlobalNamespace::MenuLightsPresetSO> value);

  constexpr void __cordl_internal_set__menuLightsManager(::UnityW<::GlobalNamespace::MenuLightsManager> value);

  constexpr void __cordl_internal_set__modifiersSelectionView(::UnityW<::GlobalNamespace::ModifiersSelectionView> value);

  constexpr void __cordl_internal_set__multiplayerLobbyCenterScreenLayoutAnimator(::UnityW<::GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator> value);

  /// @brief Method .ctor, addr 0x3c1a300, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_countdownShown, addr 0x3c1a030, size 0x8, virtual false, abstract: false, final false
  inline bool get_countdownShown();

  /// @brief Method set_countdownShown, addr 0x3c1a038, size 0xc, virtual false, abstract: false, final false
  inline void set_countdownShown(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CenterStageScreenController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CenterStageScreenController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CenterStageScreenController(CenterStageScreenController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CenterStageScreenController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CenterStageScreenController(CenterStageScreenController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4927 };

  /// @brief Field _defaultMenuLightsPreset, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MenuLightsPresetSO> ____defaultMenuLightsPreset;

  /// @brief Field _lobbyLightsPreset, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MenuLightsPresetSO> ____lobbyLightsPreset;

  /// @brief Field _countdownMenuLightsPreset, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MenuLightsPresetSO> ____countdownMenuLightsPreset;

  /// @brief Field _beatmapSelectionView, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapSelectionView> ____beatmapSelectionView;

  /// @brief Field _modifiersSelectionView, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ModifiersSelectionView> ____modifiersSelectionView;

  /// @brief Field _countdownController, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::CountdownController> ____countdownController;

  /// @brief Field _multiplayerLobbyCenterScreenLayoutAnimator, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator> ____multiplayerLobbyCenterScreenLayoutAnimator;

  /// @brief Field _lobbyGameStateController, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::ILobbyGameStateController* ____lobbyGameStateController;

  /// @brief Field _menuLightsManager, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MenuLightsManager> ____menuLightsManager;

  /// @brief Field <countdownShown>k__BackingField, offset: 0x68, size: 0x1, def value: None
  bool ____countdownShown_k__BackingField;

  /// @brief Field _countdownEndTime, offset: 0x70, size: 0x8, def value: None
  int64_t ____countdownEndTime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CenterStageScreenController, ____defaultMenuLightsPreset) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CenterStageScreenController, ____lobbyLightsPreset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CenterStageScreenController, ____countdownMenuLightsPreset) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CenterStageScreenController, ____beatmapSelectionView) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CenterStageScreenController, ____modifiersSelectionView) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CenterStageScreenController, ____countdownController) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CenterStageScreenController, ____multiplayerLobbyCenterScreenLayoutAnimator) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CenterStageScreenController, ____lobbyGameStateController) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CenterStageScreenController, ____menuLightsManager) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CenterStageScreenController, ____countdownShown_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CenterStageScreenController, ____countdownEndTime) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CenterStageScreenController, 0x78>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CenterStageScreenController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CenterStageScreenController*, "", "CenterStageScreenController");
