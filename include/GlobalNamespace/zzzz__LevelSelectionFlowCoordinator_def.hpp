#pragma once
// IWYU pragma private; include "GlobalNamespace/LevelSelectionFlowCoordinator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__SelectLevelCategoryViewController_def.hpp"
#include "HMUI/zzzz__FlowCoordinator_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LevelSelectionFlowCoordinator)
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
struct BeatmapDifficultyMask;
}
namespace GlobalNamespace {
struct BeatmapKey;
}
namespace GlobalNamespace {
class BeatmapLevelPack;
}
namespace GlobalNamespace {
class BeatmapLevel;
}
namespace GlobalNamespace {
struct LevelFilter;
}
namespace GlobalNamespace {
class LevelSearchViewController;
}
namespace GlobalNamespace {
class LevelSelectionFlowCoordinator_State;
}
namespace GlobalNamespace {
class LevelSelectionNavigationController;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
class SearchFilterParamsViewController;
}
namespace GlobalNamespace {
struct SelectLevelCategoryViewController_LevelCategory;
}
namespace GlobalNamespace {
struct SongPackMask;
}
namespace GlobalNamespace {
struct StandardLevelDetailViewController_ContentType;
}
namespace HMUI {
struct ViewController_AnimationType;
}
namespace HMUI {
class ViewController;
}
namespace System {
class Action;
}
namespace System {
template <typename T> struct Nullable_1;
}
// Forward declare root types
namespace GlobalNamespace {
class LevelSelectionFlowCoordinator;
}
namespace GlobalNamespace {
class LevelSelectionFlowCoordinator_State;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LevelSelectionFlowCoordinator);
MARK_REF_PTR_T(::GlobalNamespace::LevelSelectionFlowCoordinator_State);
// Dependencies BeatmapKey, SelectLevelCategoryViewController::LevelCategory, System.Nullable`1<T>, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LevelSelectionFlowCoordinator/State
class CORDL_TYPE LevelSelectionFlowCoordinator_State : public ::System::Object {
public:
  // Declarations
  /// @brief Field beatmapKey, offset 0x20, size 0x18
  __declspec(property(get = __cordl_internal_get_beatmapKey, put = __cordl_internal_set_beatmapKey)) ::GlobalNamespace::BeatmapKey beatmapKey;

  /// @brief Field beatmapLevel, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_beatmapLevel, put = __cordl_internal_set_beatmapLevel)) ::GlobalNamespace::BeatmapLevel* beatmapLevel;

  /// @brief Field beatmapLevelPack, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_beatmapLevelPack, put = __cordl_internal_set_beatmapLevelPack)) ::GlobalNamespace::BeatmapLevelPack* beatmapLevelPack;

  /// @brief Field levelCategory, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_levelCategory, put = __cordl_internal_set_levelCategory)) ::System::Nullable_1<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory>
      levelCategory;

  static inline ::GlobalNamespace::LevelSelectionFlowCoordinator_State* New_ctor(::GlobalNamespace::BeatmapLevelPack* beatmapLevelPack);

  static inline ::GlobalNamespace::LevelSelectionFlowCoordinator_State* New_ctor(::GlobalNamespace::BeatmapLevelPack* beatmapLevelPack, ::GlobalNamespace::BeatmapLevel* beatmapLevel);

  static inline ::GlobalNamespace::LevelSelectionFlowCoordinator_State* New_ctor(::System::Nullable_1<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory> levelCategory,
                                                                                 ::GlobalNamespace::BeatmapLevelPack* beatmapLevelPack, ::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey,
                                                                                 ::GlobalNamespace::BeatmapLevel* beatmapLevel);

  constexpr ::GlobalNamespace::BeatmapKey const& __cordl_internal_get_beatmapKey() const;

  constexpr ::GlobalNamespace::BeatmapKey& __cordl_internal_get_beatmapKey();

  constexpr ::GlobalNamespace::BeatmapLevel* const& __cordl_internal_get_beatmapLevel() const;

  constexpr ::GlobalNamespace::BeatmapLevel*& __cordl_internal_get_beatmapLevel();

  constexpr ::GlobalNamespace::BeatmapLevelPack* const& __cordl_internal_get_beatmapLevelPack() const;

  constexpr ::GlobalNamespace::BeatmapLevelPack*& __cordl_internal_get_beatmapLevelPack();

  constexpr ::System::Nullable_1<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory> const& __cordl_internal_get_levelCategory() const;

  constexpr ::System::Nullable_1<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory>& __cordl_internal_get_levelCategory();

  constexpr void __cordl_internal_set_beatmapKey(::GlobalNamespace::BeatmapKey value);

  constexpr void __cordl_internal_set_beatmapLevel(::GlobalNamespace::BeatmapLevel* value);

  constexpr void __cordl_internal_set_beatmapLevelPack(::GlobalNamespace::BeatmapLevelPack* value);

  constexpr void __cordl_internal_set_levelCategory(::System::Nullable_1<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory> value);

  /// @brief Method .ctor, addr 0x3b3d78c, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::BeatmapLevelPack* beatmapLevelPack);

  /// @brief Method .ctor, addr 0x3b3d7bc, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::BeatmapLevelPack* beatmapLevelPack, ::GlobalNamespace::BeatmapLevel* beatmapLevel);

  /// @brief Method .ctor, addr 0x3b3d740, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(::System::Nullable_1<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory> levelCategory, ::GlobalNamespace::BeatmapLevelPack* beatmapLevelPack,
                    ::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LevelSelectionFlowCoordinator_State();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LevelSelectionFlowCoordinator_State", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LevelSelectionFlowCoordinator_State(LevelSelectionFlowCoordinator_State&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LevelSelectionFlowCoordinator_State", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LevelSelectionFlowCoordinator_State(LevelSelectionFlowCoordinator_State const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5286 };

  /// @brief Field levelCategory, offset: 0x10, size: 0x8, def value: None
  ::System::Nullable_1<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory> ___levelCategory;

  /// @brief Field beatmapLevelPack, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelPack* ___beatmapLevelPack;

  /// @brief Field beatmapKey, offset: 0x20, size: 0x18, def value: None
  ::GlobalNamespace::BeatmapKey ___beatmapKey;

  /// @brief Field beatmapLevel, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevel* ___beatmapLevel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LevelSelectionFlowCoordinator_State, ___levelCategory) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSelectionFlowCoordinator_State, ___beatmapLevelPack) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSelectionFlowCoordinator_State, ___beatmapKey) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSelectionFlowCoordinator_State, ___beatmapLevel) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelSelectionFlowCoordinator_State, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies HMUI.FlowCoordinator
namespace GlobalNamespace {
// Is value type: false
// CS Name: LevelSelectionFlowCoordinator
class CORDL_TYPE LevelSelectionFlowCoordinator : public ::HMUI::FlowCoordinator {
public:
  // Declarations
  using State = ::GlobalNamespace::LevelSelectionFlowCoordinator_State;

  /// @brief Field _levelSearchViewController, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__levelSearchViewController, put = __cordl_internal_set__levelSearchViewController)) ::UnityW<::GlobalNamespace::LevelSearchViewController>
      _levelSearchViewController;

  /// @brief Field _searchFilterParamsViewController, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__searchFilterParamsViewController,
                      put = __cordl_internal_set__searchFilterParamsViewController)) ::UnityW<::GlobalNamespace::SearchFilterParamsViewController>
      _searchFilterParamsViewController;

  /// @brief Field _startState, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__startState, put = __cordl_internal_set__startState)) ::GlobalNamespace::LevelSelectionFlowCoordinator_State* _startState;

  __declspec(property(get = get_actionButtonText)) ::StringW actionButtonText;

  __declspec(property(get = get_allowedBeatmapDifficultyMask)) ::GlobalNamespace::BeatmapDifficultyMask allowedBeatmapDifficultyMask;

  __declspec(property(get = get_enableCustomLevels)) bool enableCustomLevels;

  __declspec(property(get = get_hidePacksIfOneOrNone)) bool hidePacksIfOneOrNone;

  __declspec(property(get = get_hidePracticeButton)) bool hidePracticeButton;

  __declspec(property(get = get_initialLeftScreenViewController)) ::UnityW<::HMUI::ViewController> initialLeftScreenViewController;

  __declspec(property(get = get_initialRightScreenViewController)) ::UnityW<::HMUI::ViewController> initialRightScreenViewController;

  __declspec(property(get = get_initialTopScreenViewController)) ::UnityW<::HMUI::ViewController> initialTopScreenViewController;

  __declspec(property(get = get_isInRootViewController)) bool isInRootViewController;

  /// @brief Field levelSelectionNavigationController, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_levelSelectionNavigationController,
                      put = __cordl_internal_set_levelSelectionNavigationController)) ::UnityW<::GlobalNamespace::LevelSelectionNavigationController>
      levelSelectionNavigationController;

  __declspec(property(get = get_mainTitle)) ::StringW mainTitle;

  __declspec(property(get = get_notAllowedCharacteristics)) ::ArrayW<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::Array<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*>
      notAllowedCharacteristics;

  /// @brief Field playerDataModel, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_playerDataModel, put = __cordl_internal_set_playerDataModel)) ::UnityW<::GlobalNamespace::PlayerDataModel> playerDataModel;

  __declspec(property(get = get_selectedBeatmapKey)) ::GlobalNamespace::BeatmapKey selectedBeatmapKey;

  __declspec(property(get = get_selectedBeatmapLevel)) ::GlobalNamespace::BeatmapLevel* selectedBeatmapLevel;

  __declspec(property(get = get_selectedBeatmapLevelPack)) ::GlobalNamespace::BeatmapLevelPack* selectedBeatmapLevelPack;

  __declspec(property(get = get_selectedLevelCategory)) ::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory selectedLevelCategory;

  __declspec(property(get = get_showBackButtonForMainViewController)) bool showBackButtonForMainViewController;

  __declspec(property(get = get_songPackMask)) ::GlobalNamespace::SongPackMask songPackMask;

  /// @brief Method ActionButtonWasPressed, addr 0x3b3cd8c, size 0x4, virtual true, abstract: false, final false
  inline void ActionButtonWasPressed();

  /// @brief Method DidActivate, addr 0x3b3cda0, size 0x4a8, virtual true, abstract: false, final true
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x3b3d248, size 0x294, virtual true, abstract: false, final true
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method HandleLevelSearchViewControllerDidPressSearchButton, addr 0x3b3d564, size 0x40, virtual false, abstract: false, final false
  inline void HandleLevelSearchViewControllerDidPressSearchButton(::GlobalNamespace::LevelSearchViewController* viewController, ::GlobalNamespace::LevelFilter filter);

  /// @brief Method HandleLevelSelectionNavigationControllerDidChangeDifficultyBeatmap, addr 0x3b3d5c4, size 0x64, virtual true, abstract: false, final false
  inline void HandleLevelSelectionNavigationControllerDidChangeDifficultyBeatmap(::GlobalNamespace::LevelSelectionNavigationController* viewController);

  /// @brief Method HandleLevelSelectionNavigationControllerDidChangeLevelDetailContent, addr 0x3b3d628, size 0x6c, virtual true, abstract: false, final false
  inline void HandleLevelSelectionNavigationControllerDidChangeLevelDetailContent(::GlobalNamespace::LevelSelectionNavigationController* viewController,
                                                                                  ::GlobalNamespace::StandardLevelDetailViewController_ContentType contentType);

  /// @brief Method HandleLevelSelectionNavigationControllerDidPressActionButton, addr 0x3b3d5a4, size 0x10, virtual false, abstract: false, final false
  inline void HandleLevelSelectionNavigationControllerDidPressActionButton(::GlobalNamespace::LevelSelectionNavigationController* viewController);

  /// @brief Method HandleLevelSelectionNavigationControllerDidPressPracticeButton, addr 0x3b3d5b4, size 0x10, virtual true, abstract: false, final false
  inline void HandleLevelSelectionNavigationControllerDidPressPracticeButton(::GlobalNamespace::LevelSelectionNavigationController* viewController, ::GlobalNamespace::BeatmapLevel* beatmapLevel);

  /// @brief Method HandleLevelSelectionNavigationControllerDidSelectPack, addr 0x3b3d4ec, size 0x30, virtual false, abstract: false, final false
  inline void HandleLevelSelectionNavigationControllerDidSelectPack(::GlobalNamespace::LevelSelectionNavigationController* viewController, ::GlobalNamespace::BeatmapLevelPack* pack);

  /// @brief Method HandleSearchFilterParamsViewControllerDidFinish, addr 0x3b3d51c, size 0x48, virtual false, abstract: false, final false
  inline void HandleSearchFilterParamsViewControllerDidFinish(::GlobalNamespace::SearchFilterParamsViewController* viewController, ::GlobalNamespace::LevelFilter filter);

  /// @brief Method IsMainViewController, addr 0x3b3d6b0, size 0x6c, virtual false, abstract: false, final false
  inline bool IsMainViewController(::HMUI::ViewController* viewController);

  /// @brief Method LevelSelectionFlowCoordinatorDidActivate, addr 0x3b3cc88, size 0x4, virtual true, abstract: false, final false
  inline void LevelSelectionFlowCoordinatorDidActivate(bool firstActivation, bool addedToHierarchy);

  /// @brief Method LevelSelectionFlowCoordinatorDidDeactivate, addr 0x3b3cc8c, size 0x4, virtual true, abstract: false, final false
  inline void LevelSelectionFlowCoordinatorDidDeactivate(bool removedFromHierarchy);

  /// @brief Method LevelSelectionFlowCoordinatorTopViewControllerWillChange, addr 0x3b3cc90, size 0xfc, virtual true, abstract: false, final false
  inline void LevelSelectionFlowCoordinatorTopViewControllerWillChange(::HMUI::ViewController* oldViewController, ::HMUI::ViewController* newViewController,
                                                                       ::HMUI::ViewController_AnimationType animationType);

  static inline ::GlobalNamespace::LevelSelectionFlowCoordinator* New_ctor();

  /// @brief Method PracticeButtonWasPressed, addr 0x3b3cd90, size 0x4, virtual true, abstract: false, final false
  inline void PracticeButtonWasPressed();

  /// @brief Method PresentMainViewController, addr 0x3b3d71c, size 0x1c, virtual false, abstract: false, final false
  inline void PresentMainViewController(::System::Action* finishedCallback, ::HMUI::ViewController_AnimationType animationType);

  /// @brief Method Refresh, addr 0x3b3d694, size 0x1c, virtual true, abstract: false, final false
  inline void Refresh();

  /// @brief Method SelectionDidChange, addr 0x3b3cd94, size 0x4, virtual true, abstract: false, final false
  inline void SelectionDidChange(::GlobalNamespace::BeatmapLevelPack* pack, ::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey);

  /// @brief Method Setup, addr 0x3b3cd98, size 0x8, virtual false, abstract: false, final false
  inline void Setup(::GlobalNamespace::LevelSelectionFlowCoordinator_State* state);

  /// @brief Method TopViewControllerWillChange, addr 0x3b3d4dc, size 0x10, virtual true, abstract: false, final true
  inline void TopViewControllerWillChange(::HMUI::ViewController* oldViewController, ::HMUI::ViewController* newViewController, ::HMUI::ViewController_AnimationType animationType);

  constexpr ::UnityW<::GlobalNamespace::LevelSearchViewController> const& __cordl_internal_get__levelSearchViewController() const;

  constexpr ::UnityW<::GlobalNamespace::LevelSearchViewController>& __cordl_internal_get__levelSearchViewController();

  constexpr ::UnityW<::GlobalNamespace::SearchFilterParamsViewController> const& __cordl_internal_get__searchFilterParamsViewController() const;

  constexpr ::UnityW<::GlobalNamespace::SearchFilterParamsViewController>& __cordl_internal_get__searchFilterParamsViewController();

  constexpr ::GlobalNamespace::LevelSelectionFlowCoordinator_State* const& __cordl_internal_get__startState() const;

  constexpr ::GlobalNamespace::LevelSelectionFlowCoordinator_State*& __cordl_internal_get__startState();

  constexpr ::UnityW<::GlobalNamespace::LevelSelectionNavigationController> const& __cordl_internal_get_levelSelectionNavigationController() const;

  constexpr ::UnityW<::GlobalNamespace::LevelSelectionNavigationController>& __cordl_internal_get_levelSelectionNavigationController();

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& __cordl_internal_get_playerDataModel() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& __cordl_internal_get_playerDataModel();

  constexpr void __cordl_internal_set__levelSearchViewController(::UnityW<::GlobalNamespace::LevelSearchViewController> value);

  constexpr void __cordl_internal_set__searchFilterParamsViewController(::UnityW<::GlobalNamespace::SearchFilterParamsViewController> value);

  constexpr void __cordl_internal_set__startState(::GlobalNamespace::LevelSelectionFlowCoordinator_State* value);

  constexpr void __cordl_internal_set_levelSelectionNavigationController(::UnityW<::GlobalNamespace::LevelSelectionNavigationController> value);

  constexpr void __cordl_internal_set_playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value);

  /// @brief Method .ctor, addr 0x3b3d738, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_actionButtonText, addr 0x3b3cbbc, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_actionButtonText();

  /// @brief Method get_allowedBeatmapDifficultyMask, addr 0x3b3cc3c, size 0x8, virtual true, abstract: false, final false
  inline ::GlobalNamespace::BeatmapDifficultyMask get_allowedBeatmapDifficultyMask();

  /// @brief Method get_enableCustomLevels, addr 0x3b3cc08, size 0x8, virtual true, abstract: false, final false
  inline bool get_enableCustomLevels();

  /// @brief Method get_hidePacksIfOneOrNone, addr 0x3b3cbac, size 0x8, virtual true, abstract: false, final false
  inline bool get_hidePacksIfOneOrNone();

  /// @brief Method get_hidePracticeButton, addr 0x3b3cbb4, size 0x8, virtual true, abstract: false, final false
  inline bool get_hidePracticeButton();

  /// @brief Method get_initialLeftScreenViewController, addr 0x3b3cb94, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::HMUI::ViewController> get_initialLeftScreenViewController();

  /// @brief Method get_initialRightScreenViewController, addr 0x3b3cb9c, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::HMUI::ViewController> get_initialRightScreenViewController();

  /// @brief Method get_initialTopScreenViewController, addr 0x3b3cb8c, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::HMUI::ViewController> get_initialTopScreenViewController();

  /// @brief Method get_isInRootViewController, addr 0x3b3ca84, size 0x74, virtual false, abstract: false, final false
  inline bool get_isInRootViewController();

  /// @brief Method get_mainTitle, addr 0x3b3cc00, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_mainTitle();

  /// @brief Method get_notAllowedCharacteristics, addr 0x3b3cc44, size 0x44, virtual true, abstract: false, final false
  inline ::ArrayW<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::Array<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*> get_notAllowedCharacteristics();

  /// @brief Method get_selectedBeatmapKey, addr 0x3b3cb30, size 0x40, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapKey get_selectedBeatmapKey();

  /// @brief Method get_selectedBeatmapLevel, addr 0x3b3cb70, size 0x1c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapLevel* get_selectedBeatmapLevel();

  /// @brief Method get_selectedBeatmapLevelPack, addr 0x3b3cb14, size 0x1c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapLevelPack* get_selectedBeatmapLevelPack();

  /// @brief Method get_selectedLevelCategory, addr 0x3b3caf8, size 0x1c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory get_selectedLevelCategory();

  /// @brief Method get_showBackButtonForMainViewController, addr 0x3b3cba4, size 0x8, virtual true, abstract: false, final false
  inline bool get_showBackButtonForMainViewController();

  /// @brief Method get_songPackMask, addr 0x3b3cc10, size 0x2c, virtual true, abstract: false, final false
  inline ::GlobalNamespace::SongPackMask get_songPackMask();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LevelSelectionFlowCoordinator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LevelSelectionFlowCoordinator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LevelSelectionFlowCoordinator(LevelSelectionFlowCoordinator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LevelSelectionFlowCoordinator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LevelSelectionFlowCoordinator(LevelSelectionFlowCoordinator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5287 };

  /// @brief Field playerDataModel, offset: 0xb0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerDataModel> ___playerDataModel;

  /// @brief Field levelSelectionNavigationController, offset: 0xb8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LevelSelectionNavigationController> ___levelSelectionNavigationController;

  /// @brief Field _searchFilterParamsViewController, offset: 0xc0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SearchFilterParamsViewController> ____searchFilterParamsViewController;

  /// @brief Field _levelSearchViewController, offset: 0xc8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LevelSearchViewController> ____levelSearchViewController;

  /// @brief Field _startState, offset: 0xd0, size: 0x8, def value: None
  ::GlobalNamespace::LevelSelectionFlowCoordinator_State* ____startState;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LevelSelectionFlowCoordinator, ___playerDataModel) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSelectionFlowCoordinator, ___levelSelectionNavigationController) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSelectionFlowCoordinator, ____searchFilterParamsViewController) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSelectionFlowCoordinator, ____levelSearchViewController) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSelectionFlowCoordinator, ____startState) == 0xd0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelSelectionFlowCoordinator, 0xd8>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LevelSelectionFlowCoordinator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelSelectionFlowCoordinator*, "", "LevelSelectionFlowCoordinator");
NEED_NO_BOX(::GlobalNamespace::LevelSelectionFlowCoordinator_State);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelSelectionFlowCoordinator_State*, "", "LevelSelectionFlowCoordinator/State");
