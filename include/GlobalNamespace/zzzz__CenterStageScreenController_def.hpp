#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CenterStageScreenController)
namespace GlobalNamespace {
class MultiplayerLobbyCenterScreenLayoutAnimator;
}
namespace GlobalNamespace {
class CountdownController;
}
namespace GlobalNamespace {
class BeatmapSelectionView;
}
namespace GlobalNamespace {
class MenuLightsManager;
}
namespace GlobalNamespace {
class ModifiersSelectionView;
}
namespace GlobalNamespace {
class ILobbyGameStateController;
}
namespace GlobalNamespace {
class ILevelGameplaySetupData;
}
namespace GlobalNamespace {
class MenuLightsPresetSO;
}
// Forward declare root types
namespace GlobalNamespace {
class CenterStageScreenController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CenterStageScreenController);
// Type: ::CenterStageScreenController
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5809))
// CS Name: ::CenterStageScreenController*
class CORDL_TYPE CenterStageScreenController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _defaultMenuLightsPreset, offset 0x18, size 0x8
  __declspec(property(get = __get__defaultMenuLightsPreset, put = __set__defaultMenuLightsPreset))::GlobalNamespace::MenuLightsPresetSO* _defaultMenuLightsPreset;

  /// @brief Field _lobbyLightsPreset, offset 0x20, size 0x8
  __declspec(property(get = __get__lobbyLightsPreset, put = __set__lobbyLightsPreset))::GlobalNamespace::MenuLightsPresetSO* _lobbyLightsPreset;

  /// @brief Field _countdownMenuLightsPreset, offset 0x28, size 0x8
  __declspec(property(get = __get__countdownMenuLightsPreset, put = __set__countdownMenuLightsPreset))::GlobalNamespace::MenuLightsPresetSO* _countdownMenuLightsPreset;

  /// @brief Field _beatmapSelectionView, offset 0x30, size 0x8
  __declspec(property(get = __get__beatmapSelectionView, put = __set__beatmapSelectionView))::GlobalNamespace::BeatmapSelectionView* _beatmapSelectionView;

  /// @brief Field _modifiersSelectionView, offset 0x38, size 0x8
  __declspec(property(get = __get__modifiersSelectionView, put = __set__modifiersSelectionView))::GlobalNamespace::ModifiersSelectionView* _modifiersSelectionView;

  /// @brief Field _countdownController, offset 0x40, size 0x8
  __declspec(property(get = __get__countdownController, put = __set__countdownController))::GlobalNamespace::CountdownController* _countdownController;

  /// @brief Field _multiplayerLobbyCenterScreenLayoutAnimator, offset 0x48, size 0x8
  __declspec(property(get = __get__multiplayerLobbyCenterScreenLayoutAnimator,
                      put = __set__multiplayerLobbyCenterScreenLayoutAnimator))::GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator* _multiplayerLobbyCenterScreenLayoutAnimator;

  /// @brief Field _lobbyGameStateController, offset 0x50, size 0x8
  __declspec(property(get = __get__lobbyGameStateController, put = __set__lobbyGameStateController))::GlobalNamespace::ILobbyGameStateController* _lobbyGameStateController;

  /// @brief Field _menuLightsManager, offset 0x58, size 0x8
  __declspec(property(get = __get__menuLightsManager, put = __set__menuLightsManager))::GlobalNamespace::MenuLightsManager* _menuLightsManager;

  /// @brief Field <countdownShown>k__BackingField, offset 0x60, size 0x1
  __declspec(property(get = __get__countdownShown_k__BackingField, put = __set__countdownShown_k__BackingField)) bool _countdownShown_k__BackingField;

  /// @brief Field _countdownEndTime, offset 0x64, size 0x4
  __declspec(property(get = __get__countdownEndTime, put = __set__countdownEndTime)) float_t _countdownEndTime;

  __declspec(property(get = get_countdownShown, put = set_countdownShown)) bool countdownShown;

  constexpr ::GlobalNamespace::MenuLightsPresetSO*& __get__defaultMenuLightsPreset();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuLightsPresetSO*> const& __get__defaultMenuLightsPreset() const;

  constexpr void __set__defaultMenuLightsPreset(::GlobalNamespace::MenuLightsPresetSO* value);

  constexpr ::GlobalNamespace::MenuLightsPresetSO*& __get__lobbyLightsPreset();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuLightsPresetSO*> const& __get__lobbyLightsPreset() const;

  constexpr void __set__lobbyLightsPreset(::GlobalNamespace::MenuLightsPresetSO* value);

  constexpr ::GlobalNamespace::MenuLightsPresetSO*& __get__countdownMenuLightsPreset();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuLightsPresetSO*> const& __get__countdownMenuLightsPreset() const;

  constexpr void __set__countdownMenuLightsPreset(::GlobalNamespace::MenuLightsPresetSO* value);

  constexpr ::GlobalNamespace::BeatmapSelectionView*& __get__beatmapSelectionView();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapSelectionView*> const& __get__beatmapSelectionView() const;

  constexpr void __set__beatmapSelectionView(::GlobalNamespace::BeatmapSelectionView* value);

  constexpr ::GlobalNamespace::ModifiersSelectionView*& __get__modifiersSelectionView();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ModifiersSelectionView*> const& __get__modifiersSelectionView() const;

  constexpr void __set__modifiersSelectionView(::GlobalNamespace::ModifiersSelectionView* value);

  constexpr ::GlobalNamespace::CountdownController*& __get__countdownController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::CountdownController*> const& __get__countdownController() const;

  constexpr void __set__countdownController(::GlobalNamespace::CountdownController* value);

  constexpr ::GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator*& __get__multiplayerLobbyCenterScreenLayoutAnimator();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator*> const& __get__multiplayerLobbyCenterScreenLayoutAnimator() const;

  constexpr void __set__multiplayerLobbyCenterScreenLayoutAnimator(::GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator* value);

  constexpr ::GlobalNamespace::ILobbyGameStateController*& __get__lobbyGameStateController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ILobbyGameStateController*> const& __get__lobbyGameStateController() const;

  constexpr void __set__lobbyGameStateController(::GlobalNamespace::ILobbyGameStateController* value);

  constexpr ::GlobalNamespace::MenuLightsManager*& __get__menuLightsManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuLightsManager*> const& __get__menuLightsManager() const;

  constexpr void __set__menuLightsManager(::GlobalNamespace::MenuLightsManager* value);

  constexpr bool& __get__countdownShown_k__BackingField();

  constexpr bool const& __get__countdownShown_k__BackingField() const;

  constexpr void __set__countdownShown_k__BackingField(bool value);

  constexpr float_t& __get__countdownEndTime();

  constexpr float_t const& __get__countdownEndTime() const;

  constexpr void __set__countdownEndTime(float_t value);

  /// @brief Method get_countdownShown addr 0x2189f4c size 0x8 virtual false final false
  inline bool get_countdownShown();

  /// @brief Method set_countdownShown addr 0x2189f54 size 0xc virtual false final false
  inline void set_countdownShown(bool value);

  /// @brief Method Setup addr 0x2189f60 size 0x30 virtual false final false
  inline void Setup(bool showModifiers);

  /// @brief Method Show addr 0x2189f90 size 0x18c virtual false final false
  inline void Show();

  /// @brief Method Hide addr 0x218a284 size 0x130 virtual false final false
  inline void Hide();

  /// @brief Method ShowCountdown addr 0x218a3f8 size 0x3c virtual false final false
  inline void ShowCountdown(float_t countdownEndTime);

  /// @brief Method HideCountdown addr 0x218a3b4 size 0x44 virtual false final false
  inline void HideCountdown(bool instant);

  /// @brief Method SetCountdownEndTime addr 0x218a434 size 0x58 virtual false final false
  inline void SetCountdownEndTime(float_t countdownEndTime);

  /// @brief Method ShowCountdownColorPreset addr 0x218a48c size 0x2c virtual false final false
  inline void ShowCountdownColorPreset(bool animated);

  /// @brief Method ShowLobbyColorPreset addr 0x218a11c size 0x2c virtual false final false
  inline void ShowLobbyColorPreset(bool animated);

  /// @brief Method HandleLobbyGameStateControllerSelectedLevelGameplaySetupDataChanged addr 0x218a4b8 size 0x4 virtual false final false
  inline void HandleLobbyGameStateControllerSelectedLevelGameplaySetupDataChanged(::GlobalNamespace::ILevelGameplaySetupData* levelGameplaySetupData);

  /// @brief Method SetNextGameplaySetupData addr 0x218a148 size 0x13c virtual false final false
  inline void SetNextGameplaySetupData(::GlobalNamespace::ILevelGameplaySetupData* levelGameplaySetupData);

  static inline ::GlobalNamespace::CenterStageScreenController* New_ctor();

  /// @brief Method .ctor addr 0x218a4bc size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "CenterStageScreenController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CenterStageScreenController(CenterStageScreenController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CenterStageScreenController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CenterStageScreenController(CenterStageScreenController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CenterStageScreenController();

public:
  /// @brief Field _defaultMenuLightsPreset, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::MenuLightsPresetSO* ____defaultMenuLightsPreset;

  /// @brief Field _lobbyLightsPreset, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MenuLightsPresetSO* ____lobbyLightsPreset;

  /// @brief Field _countdownMenuLightsPreset, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::MenuLightsPresetSO* ____countdownMenuLightsPreset;

  /// @brief Field _beatmapSelectionView, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapSelectionView* ____beatmapSelectionView;

  /// @brief Field _modifiersSelectionView, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::ModifiersSelectionView* ____modifiersSelectionView;

  /// @brief Field _countdownController, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::CountdownController* ____countdownController;

  /// @brief Field _multiplayerLobbyCenterScreenLayoutAnimator, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator* ____multiplayerLobbyCenterScreenLayoutAnimator;

  /// @brief Field _lobbyGameStateController, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::ILobbyGameStateController* ____lobbyGameStateController;

  /// @brief Field _menuLightsManager, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::MenuLightsManager* ____menuLightsManager;

  /// @brief Field <countdownShown>k__BackingField, offset: 0x60, size: 0x1, def value: None
  bool ____countdownShown_k__BackingField;

  /// @brief Field _countdownEndTime, offset: 0x64, size: 0x4, def value: None
  float_t ____countdownEndTime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CenterStageScreenController, 0x68>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::CenterStageScreenController, ____defaultMenuLightsPreset) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CenterStageScreenController, ____lobbyLightsPreset) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CenterStageScreenController, ____countdownMenuLightsPreset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CenterStageScreenController, ____beatmapSelectionView) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CenterStageScreenController, ____modifiersSelectionView) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CenterStageScreenController, ____countdownController) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CenterStageScreenController, ____multiplayerLobbyCenterScreenLayoutAnimator) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CenterStageScreenController, ____lobbyGameStateController) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CenterStageScreenController, ____menuLightsManager) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CenterStageScreenController, ____countdownShown_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CenterStageScreenController, ____countdownEndTime) == 0x64, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CenterStageScreenController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CenterStageScreenController*, "", "CenterStageScreenController");
