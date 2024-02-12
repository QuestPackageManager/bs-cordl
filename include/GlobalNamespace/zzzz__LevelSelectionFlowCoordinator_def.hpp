#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__SelectLevelCategoryViewController_def.hpp"
#include "HMUI/zzzz__FlowCoordinator_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
class LevelSelectionNavigationController;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
class SearchFilterParamsViewController;
}
namespace GlobalNamespace {
struct SongPackMask;
}
namespace GlobalNamespace {
class __LevelSelectionFlowCoordinator__State;
}
namespace GlobalNamespace {
struct __SelectLevelCategoryViewController__LevelCategory;
}
namespace GlobalNamespace {
struct __StandardLevelDetailViewController__ContentType;
}
namespace HMUI {
class ViewController;
}
namespace HMUI {
struct __ViewController__AnimationType;
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
class __LevelSelectionFlowCoordinator__State;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LevelSelectionFlowCoordinator);
MARK_REF_PTR_T(::GlobalNamespace::__LevelSelectionFlowCoordinator__State);
// Type: ::State
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2448)), TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(4976)),
// TypeDefinitionIndex(TypeDefinitionIndex(10773)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 4761 })] Self: TypeDefinitionIndex(TypeDefinitionIndex(4804)) CS
// Name: ::LevelSelectionFlowCoordinator::State*
class CORDL_TYPE __LevelSelectionFlowCoordinator__State : public ::System::Object {
public:
  // Declarations
  /// @brief Field levelCategory, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_levelCategory,
                      put = __cordl_internal_set_levelCategory))::System::Nullable_1<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory> levelCategory;

  /// @brief Field beatmapLevelPack, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_beatmapLevelPack, put = __cordl_internal_set_beatmapLevelPack))::GlobalNamespace::BeatmapLevelPack* beatmapLevelPack;

  /// @brief Field beatmapKey, offset 0x20, size 0x18
  __declspec(property(get = __cordl_internal_get_beatmapKey, put = __cordl_internal_set_beatmapKey))::GlobalNamespace::BeatmapKey beatmapKey;

  /// @brief Field beatmapLevel, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_beatmapLevel, put = __cordl_internal_set_beatmapLevel))::GlobalNamespace::BeatmapLevel* beatmapLevel;

  constexpr ::System::Nullable_1<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>& __cordl_internal_get_levelCategory();

  constexpr ::System::Nullable_1<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory> const& __cordl_internal_get_levelCategory() const;

  constexpr void __cordl_internal_set_levelCategory(::System::Nullable_1<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory> value);

  constexpr ::GlobalNamespace::BeatmapLevelPack*& __cordl_internal_get_beatmapLevelPack();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelPack*> const& __cordl_internal_get_beatmapLevelPack() const;

  constexpr void __cordl_internal_set_beatmapLevelPack(::GlobalNamespace::BeatmapLevelPack* value);

  constexpr ::GlobalNamespace::BeatmapKey& __cordl_internal_get_beatmapKey();

  constexpr ::GlobalNamespace::BeatmapKey const& __cordl_internal_get_beatmapKey() const;

  constexpr void __cordl_internal_set_beatmapKey(::GlobalNamespace::BeatmapKey value);

  constexpr ::GlobalNamespace::BeatmapLevel*& __cordl_internal_get_beatmapLevel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevel*> const& __cordl_internal_get_beatmapLevel() const;

  constexpr void __cordl_internal_set_beatmapLevel(::GlobalNamespace::BeatmapLevel* value);

  static inline ::GlobalNamespace::__LevelSelectionFlowCoordinator__State* New_ctor(::System::Nullable_1<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory> levelCategory,
                                                                                    ::GlobalNamespace::BeatmapLevelPack* beatmapLevelPack, ByRef<::GlobalNamespace::BeatmapKey> beatmapKey,
                                                                                    ::GlobalNamespace::BeatmapLevel* beatmapLevel);

  /// @brief Method .ctor, addr 0x23e660c, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(::System::Nullable_1<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory> levelCategory, ::GlobalNamespace::BeatmapLevelPack* beatmapLevelPack,
                    ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel);

  static inline ::GlobalNamespace::__LevelSelectionFlowCoordinator__State* New_ctor(::GlobalNamespace::BeatmapLevelPack* beatmapLevelPack);

  /// @brief Method .ctor, addr 0x23e6658, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::BeatmapLevelPack* beatmapLevelPack);

  static inline ::GlobalNamespace::__LevelSelectionFlowCoordinator__State* New_ctor(::GlobalNamespace::BeatmapLevelPack* beatmapLevelPack, ::GlobalNamespace::BeatmapLevel* beatmapLevel);

  /// @brief Method .ctor, addr 0x23e6688, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::BeatmapLevelPack* beatmapLevelPack, ::GlobalNamespace::BeatmapLevel* beatmapLevel);

  // Ctor Parameters [CppParam { name: "", ty: "__LevelSelectionFlowCoordinator__State", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LevelSelectionFlowCoordinator__State(__LevelSelectionFlowCoordinator__State&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LevelSelectionFlowCoordinator__State", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LevelSelectionFlowCoordinator__State(__LevelSelectionFlowCoordinator__State const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LevelSelectionFlowCoordinator__State();

public:
  /// @brief Field levelCategory, offset: 0x10, size: 0x8, def value: None
  ::System::Nullable_1<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory> ___levelCategory;

  /// @brief Field beatmapLevelPack, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelPack* ___beatmapLevelPack;

  /// @brief Field beatmapKey, offset: 0x20, size: 0x18, def value: None
  ::GlobalNamespace::BeatmapKey ___beatmapKey;

  /// @brief Field beatmapLevel, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevel* ___beatmapLevel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LevelSelectionFlowCoordinator__State, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelSelectionFlowCoordinator__State, ___levelCategory) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelSelectionFlowCoordinator__State, ___beatmapLevelPack) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelSelectionFlowCoordinator__State, ___beatmapKey) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelSelectionFlowCoordinator__State, ___beatmapLevel) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LevelSelectionFlowCoordinator
// SizeInfo { instance_size: 208, native_size: -1, calculated_instance_size: 208, calculated_native_size: 208, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(13535))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4805))
// CS Name: ::LevelSelectionFlowCoordinator*
class CORDL_TYPE LevelSelectionFlowCoordinator : public ::HMUI::FlowCoordinator {
public:
  // Declarations
  using State = ::GlobalNamespace::__LevelSelectionFlowCoordinator__State;

  /// @brief Field playerDataModel, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_playerDataModel, put = __cordl_internal_set_playerDataModel))::UnityW<::GlobalNamespace::PlayerDataModel> playerDataModel;

  /// @brief Field levelSelectionNavigationController, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_levelSelectionNavigationController,
                      put = __cordl_internal_set_levelSelectionNavigationController))::UnityW<::GlobalNamespace::LevelSelectionNavigationController> levelSelectionNavigationController;

  /// @brief Field _searchFilterParamsViewController, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__searchFilterParamsViewController,
                      put = __cordl_internal_set__searchFilterParamsViewController))::UnityW<::GlobalNamespace::SearchFilterParamsViewController> _searchFilterParamsViewController;

  /// @brief Field _levelSearchViewController, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__levelSearchViewController,
                      put = __cordl_internal_set__levelSearchViewController))::UnityW<::GlobalNamespace::LevelSearchViewController> _levelSearchViewController;

  /// @brief Field _startState, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__startState, put = __cordl_internal_set__startState))::GlobalNamespace::__LevelSelectionFlowCoordinator__State* _startState;

  __declspec(property(get = get_isInRootViewController)) bool isInRootViewController;

  __declspec(property(get = get_selectedLevelCategory))::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory selectedLevelCategory;

  __declspec(property(get = get_selectedBeatmapLevelPack))::GlobalNamespace::BeatmapLevelPack* selectedBeatmapLevelPack;

  __declspec(property(get = get_selectedBeatmapKey))::GlobalNamespace::BeatmapKey selectedBeatmapKey;

  __declspec(property(get = get_selectedBeatmapLevel))::GlobalNamespace::BeatmapLevel* selectedBeatmapLevel;

  __declspec(property(get = get_initialTopScreenViewController))::UnityW<::HMUI::ViewController> initialTopScreenViewController;

  __declspec(property(get = get_initialLeftScreenViewController))::UnityW<::HMUI::ViewController> initialLeftScreenViewController;

  __declspec(property(get = get_initialRightScreenViewController))::UnityW<::HMUI::ViewController> initialRightScreenViewController;

  __declspec(property(get = get_showBackButtonForMainViewController)) bool showBackButtonForMainViewController;

  __declspec(property(get = get_hidePacksIfOneOrNone)) bool hidePacksIfOneOrNone;

  __declspec(property(get = get_hidePracticeButton)) bool hidePracticeButton;

  __declspec(property(get = get_actionButtonText))::StringW actionButtonText;

  __declspec(property(get = get_mainTitle))::StringW mainTitle;

  __declspec(property(get = get_enableCustomLevels)) bool enableCustomLevels;

  __declspec(property(get = get_songPackMask))::GlobalNamespace::SongPackMask songPackMask;

  __declspec(property(get = get_allowedBeatmapDifficultyMask))::GlobalNamespace::BeatmapDifficultyMask allowedBeatmapDifficultyMask;

  __declspec(property(
      get = get_notAllowedCharacteristics))::ArrayW<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::Array<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*> notAllowedCharacteristics;

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& __cordl_internal_get_playerDataModel();

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& __cordl_internal_get_playerDataModel() const;

  constexpr void __cordl_internal_set_playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value);

  constexpr ::UnityW<::GlobalNamespace::LevelSelectionNavigationController>& __cordl_internal_get_levelSelectionNavigationController();

  constexpr ::UnityW<::GlobalNamespace::LevelSelectionNavigationController> const& __cordl_internal_get_levelSelectionNavigationController() const;

  constexpr void __cordl_internal_set_levelSelectionNavigationController(::UnityW<::GlobalNamespace::LevelSelectionNavigationController> value);

  constexpr ::UnityW<::GlobalNamespace::SearchFilterParamsViewController>& __cordl_internal_get__searchFilterParamsViewController();

  constexpr ::UnityW<::GlobalNamespace::SearchFilterParamsViewController> const& __cordl_internal_get__searchFilterParamsViewController() const;

  constexpr void __cordl_internal_set__searchFilterParamsViewController(::UnityW<::GlobalNamespace::SearchFilterParamsViewController> value);

  constexpr ::UnityW<::GlobalNamespace::LevelSearchViewController>& __cordl_internal_get__levelSearchViewController();

  constexpr ::UnityW<::GlobalNamespace::LevelSearchViewController> const& __cordl_internal_get__levelSearchViewController() const;

  constexpr void __cordl_internal_set__levelSearchViewController(::UnityW<::GlobalNamespace::LevelSearchViewController> value);

  constexpr ::GlobalNamespace::__LevelSelectionFlowCoordinator__State*& __cordl_internal_get__startState();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__LevelSelectionFlowCoordinator__State*> const& __cordl_internal_get__startState() const;

  constexpr void __cordl_internal_set__startState(::GlobalNamespace::__LevelSelectionFlowCoordinator__State* value);

  /// @brief Method get_isInRootViewController, addr 0x23e58e4, size 0x74, virtual false, abstract: false, final false
  inline bool get_isInRootViewController();

  /// @brief Method get_selectedLevelCategory, addr 0x23e5958, size 0x1c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory get_selectedLevelCategory();

  /// @brief Method get_selectedBeatmapLevelPack, addr 0x23e5974, size 0x1c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapLevelPack* get_selectedBeatmapLevelPack();

  /// @brief Method get_selectedBeatmapKey, addr 0x23e5990, size 0x40, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapKey get_selectedBeatmapKey();

  /// @brief Method get_selectedBeatmapLevel, addr 0x23e59d0, size 0x1c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapLevel* get_selectedBeatmapLevel();

  /// @brief Method get_initialTopScreenViewController, addr 0x23e59ec, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::HMUI::ViewController> get_initialTopScreenViewController();

  /// @brief Method get_initialLeftScreenViewController, addr 0x23e59f4, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::HMUI::ViewController> get_initialLeftScreenViewController();

  /// @brief Method get_initialRightScreenViewController, addr 0x23e59fc, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::HMUI::ViewController> get_initialRightScreenViewController();

  /// @brief Method get_showBackButtonForMainViewController, addr 0x23e5a04, size 0x8, virtual true, abstract: false, final false
  inline bool get_showBackButtonForMainViewController();

  /// @brief Method get_hidePacksIfOneOrNone, addr 0x23e5a0c, size 0x8, virtual true, abstract: false, final false
  inline bool get_hidePacksIfOneOrNone();

  /// @brief Method get_hidePracticeButton, addr 0x23e5a14, size 0x8, virtual true, abstract: false, final false
  inline bool get_hidePracticeButton();

  /// @brief Method get_actionButtonText, addr 0x23e5a1c, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_actionButtonText();

  /// @brief Method get_mainTitle, addr 0x23e5a60, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_mainTitle();

  /// @brief Method get_enableCustomLevels, addr 0x23e5a68, size 0x8, virtual true, abstract: false, final false
  inline bool get_enableCustomLevels();

  /// @brief Method get_songPackMask, addr 0x23e5a70, size 0x2c, virtual true, abstract: false, final false
  inline ::GlobalNamespace::SongPackMask get_songPackMask();

  /// @brief Method get_allowedBeatmapDifficultyMask, addr 0x23e5a9c, size 0x8, virtual true, abstract: false, final false
  inline ::GlobalNamespace::BeatmapDifficultyMask get_allowedBeatmapDifficultyMask();

  /// @brief Method get_notAllowedCharacteristics, addr 0x23e5aa4, size 0x44, virtual true, abstract: false, final false
  inline ::ArrayW<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::Array<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*> get_notAllowedCharacteristics();

  /// @brief Method LevelSelectionFlowCoordinatorDidActivate, addr 0x23e5ae8, size 0x4, virtual true, abstract: false, final false
  inline void LevelSelectionFlowCoordinatorDidActivate(bool firstActivation, bool addedToHierarchy);

  /// @brief Method LevelSelectionFlowCoordinatorDidDeactivate, addr 0x23e5aec, size 0x4, virtual true, abstract: false, final false
  inline void LevelSelectionFlowCoordinatorDidDeactivate(bool removedFromHierarchy);

  /// @brief Method LevelSelectionFlowCoordinatorTopViewControllerWillChange, addr 0x23e5af0, size 0xfc, virtual true, abstract: false, final false
  inline void LevelSelectionFlowCoordinatorTopViewControllerWillChange(::HMUI::ViewController* oldViewController, ::HMUI::ViewController* newViewController,
                                                                       ::HMUI::__ViewController__AnimationType animationType);

  /// @brief Method ActionButtonWasPressed, addr 0x23e5bec, size 0x4, virtual true, abstract: false, final false
  inline void ActionButtonWasPressed();

  /// @brief Method PracticeButtonWasPressed, addr 0x23e5bf0, size 0x4, virtual true, abstract: false, final false
  inline void PracticeButtonWasPressed();

  /// @brief Method SelectionDidChange, addr 0x23e5bf4, size 0x4, virtual true, abstract: false, final false
  inline void SelectionDidChange(::GlobalNamespace::BeatmapLevelPack* pack, ByRef<::GlobalNamespace::BeatmapKey> beatmapKey);

  /// @brief Method Setup, addr 0x23e5bf8, size 0x8, virtual false, abstract: false, final false
  inline void Setup(::GlobalNamespace::__LevelSelectionFlowCoordinator__State* state);

  /// @brief Method DidActivate, addr 0x23e5c00, size 0x4f0, virtual true, abstract: false, final true
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x23e60f0, size 0x2b8, virtual true, abstract: false, final true
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method TopViewControllerWillChange, addr 0x23e63a8, size 0x10, virtual true, abstract: false, final true
  inline void TopViewControllerWillChange(::HMUI::ViewController* oldViewController, ::HMUI::ViewController* newViewController, ::HMUI::__ViewController__AnimationType animationType);

  /// @brief Method HandleLevelSelectionNavigationControllerDidSelectPack, addr 0x23e63b8, size 0x30, virtual false, abstract: false, final false
  inline void HandleLevelSelectionNavigationControllerDidSelectPack(::GlobalNamespace::LevelSelectionNavigationController* viewController, ::GlobalNamespace::BeatmapLevelPack* pack);

  /// @brief Method HandleSearchFilterParamsViewControllerDidFinish, addr 0x23e63e8, size 0x48, virtual false, abstract: false, final false
  inline void HandleSearchFilterParamsViewControllerDidFinish(::GlobalNamespace::SearchFilterParamsViewController* viewController, ::GlobalNamespace::LevelFilter filter);

  /// @brief Method HandleLevelSearchViewControllerDidPressSearchButton, addr 0x23e6430, size 0x40, virtual false, abstract: false, final false
  inline void HandleLevelSearchViewControllerDidPressSearchButton(::GlobalNamespace::LevelSearchViewController* viewController, ::GlobalNamespace::LevelFilter filter);

  /// @brief Method HandleLevelSelectionNavigationControllerDidPressActionButton, addr 0x23e6470, size 0x10, virtual false, abstract: false, final false
  inline void HandleLevelSelectionNavigationControllerDidPressActionButton(::GlobalNamespace::LevelSelectionNavigationController* viewController);

  /// @brief Method HandleLevelSelectionNavigationControllerDidPressPracticeButton, addr 0x23e6480, size 0x10, virtual true, abstract: false, final false
  inline void HandleLevelSelectionNavigationControllerDidPressPracticeButton(::GlobalNamespace::LevelSelectionNavigationController* viewController, ::GlobalNamespace::BeatmapLevel* beatmapLevel);

  /// @brief Method HandleLevelSelectionNavigationControllerDidChangeDifficultyBeatmap, addr 0x23e6490, size 0x64, virtual true, abstract: false, final false
  inline void HandleLevelSelectionNavigationControllerDidChangeDifficultyBeatmap(::GlobalNamespace::LevelSelectionNavigationController* viewController);

  /// @brief Method HandleLevelSelectionNavigationControllerDidChangeLevelDetailContent, addr 0x23e64f4, size 0x6c, virtual true, abstract: false, final false
  inline void HandleLevelSelectionNavigationControllerDidChangeLevelDetailContent(::GlobalNamespace::LevelSelectionNavigationController* viewController,
                                                                                  ::GlobalNamespace::__StandardLevelDetailViewController__ContentType contentType);

  /// @brief Method Refresh, addr 0x23e6560, size 0x1c, virtual true, abstract: false, final false
  inline void Refresh();

  /// @brief Method IsMainViewController, addr 0x23e657c, size 0x6c, virtual false, abstract: false, final false
  inline bool IsMainViewController(::HMUI::ViewController* viewController);

  /// @brief Method PresentMainViewController, addr 0x23e65e8, size 0x1c, virtual false, abstract: false, final false
  inline void PresentMainViewController(::System::Action* finishedCallback, ::HMUI::__ViewController__AnimationType animationType);

  static inline ::GlobalNamespace::LevelSelectionFlowCoordinator* New_ctor();

  /// @brief Method .ctor, addr 0x23e6604, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "LevelSelectionFlowCoordinator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LevelSelectionFlowCoordinator(LevelSelectionFlowCoordinator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LevelSelectionFlowCoordinator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LevelSelectionFlowCoordinator(LevelSelectionFlowCoordinator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LevelSelectionFlowCoordinator();

public:
  /// @brief Field playerDataModel, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerDataModel> ___playerDataModel;

  /// @brief Field levelSelectionNavigationController, offset: 0xb0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LevelSelectionNavigationController> ___levelSelectionNavigationController;

  /// @brief Field _searchFilterParamsViewController, offset: 0xb8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SearchFilterParamsViewController> ____searchFilterParamsViewController;

  /// @brief Field _levelSearchViewController, offset: 0xc0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LevelSearchViewController> ____levelSearchViewController;

  /// @brief Field _startState, offset: 0xc8, size: 0x8, def value: None
  ::GlobalNamespace::__LevelSelectionFlowCoordinator__State* ____startState;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelSelectionFlowCoordinator, 0xd0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSelectionFlowCoordinator, ___playerDataModel) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSelectionFlowCoordinator, ___levelSelectionNavigationController) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSelectionFlowCoordinator, ____searchFilterParamsViewController) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSelectionFlowCoordinator, ____levelSearchViewController) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSelectionFlowCoordinator, ____startState) == 0xc8, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LevelSelectionFlowCoordinator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelSelectionFlowCoordinator*, "", "LevelSelectionFlowCoordinator");
NEED_NO_BOX(::GlobalNamespace::__LevelSelectionFlowCoordinator__State);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LevelSelectionFlowCoordinator__State*, "", "LevelSelectionFlowCoordinator/State");
