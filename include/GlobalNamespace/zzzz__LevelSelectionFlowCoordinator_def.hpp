#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SelectLevelCategoryViewController_def.hpp"
#include "HMUI/zzzz__FlowCoordinator_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LevelSelectionFlowCoordinator)
namespace GlobalNamespace {
struct BeatmapDifficultyMask;
}
namespace GlobalNamespace {
struct __SelectLevelCategoryViewController__LevelCategory;
}
namespace GlobalNamespace {
class IBeatmapLevelPack;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
class IBeatmapLevel;
}
namespace HMUI {
struct __ViewController__AnimationType;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
struct SongPackMask;
}
namespace GlobalNamespace {
struct __StandardLevelDetailViewController__ContentType;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace HMUI {
class ViewController;
}
namespace GlobalNamespace {
class SearchFilterParamsViewController;
}
namespace GlobalNamespace {
class __LevelSelectionFlowCoordinator__State;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
class LevelSelectionNavigationController;
}
namespace GlobalNamespace {
class LevelFilterParams;
}
namespace GlobalNamespace {
class LevelSearchViewController;
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
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2446), inst: 4677 }),
// TypeDefinitionIndex(TypeDefinitionIndex(5773)), TypeDefinitionIndex(TypeDefinitionIndex(2446))} Self: TypeDefinitionIndex(TypeDefinitionIndex(5598)) CS Name: ::LevelSelectionFlowCoordinator::State*
class CORDL_TYPE __LevelSelectionFlowCoordinator__State : public ::System::Object {
public:
  // Declarations
  /// @brief Field levelCategory, offset 0x10, size 0x8
  __declspec(property(get = __get_levelCategory, put = __set_levelCategory))::System::Nullable_1<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory> levelCategory;

  /// @brief Field beatmapLevelPack, offset 0x18, size 0x8
  __declspec(property(get = __get_beatmapLevelPack, put = __set_beatmapLevelPack))::GlobalNamespace::IBeatmapLevelPack* beatmapLevelPack;

  /// @brief Field previewBeatmapLevel, offset 0x20, size 0x8
  __declspec(property(get = __get_previewBeatmapLevel, put = __set_previewBeatmapLevel))::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel;

  /// @brief Field difficultyBeatmap, offset 0x28, size 0x8
  __declspec(property(get = __get_difficultyBeatmap, put = __set_difficultyBeatmap))::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap;

  constexpr ::System::Nullable_1<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>& __get_levelCategory();

  constexpr ::System::Nullable_1<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory> const& __get_levelCategory() const;

  constexpr void __set_levelCategory(::System::Nullable_1<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory> value);

  constexpr ::GlobalNamespace::IBeatmapLevelPack*& __get_beatmapLevelPack();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapLevelPack*> const& __get_beatmapLevelPack() const;

  constexpr void __set_beatmapLevelPack(::GlobalNamespace::IBeatmapLevelPack* value);

  constexpr ::GlobalNamespace::IPreviewBeatmapLevel*& __get_previewBeatmapLevel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPreviewBeatmapLevel*> const& __get_previewBeatmapLevel() const;

  constexpr void __set_previewBeatmapLevel(::GlobalNamespace::IPreviewBeatmapLevel* value);

  constexpr ::GlobalNamespace::IDifficultyBeatmap*& __get_difficultyBeatmap();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IDifficultyBeatmap*> const& __get_difficultyBeatmap() const;

  constexpr void __set_difficultyBeatmap(::GlobalNamespace::IDifficultyBeatmap* value);

  static inline ::GlobalNamespace::__LevelSelectionFlowCoordinator__State* New_ctor(::System::Nullable_1<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory> levelCategory,
                                                                                    ::GlobalNamespace::IBeatmapLevelPack* beatmapLevelPack,
                                                                                    ::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel,
                                                                                    ::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap);

  /// @brief Method .ctor addr 0x2147160 size 0x40 virtual false final false
  inline void _ctor(::System::Nullable_1<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory> levelCategory, ::GlobalNamespace::IBeatmapLevelPack* beatmapLevelPack,
                    ::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, ::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap);

  static inline ::GlobalNamespace::__LevelSelectionFlowCoordinator__State* New_ctor(::GlobalNamespace::IBeatmapLevelPack* beatmapLevelPack);

  /// @brief Method .ctor addr 0x21471a0 size 0x2c virtual false final false
  inline void _ctor(::GlobalNamespace::IBeatmapLevelPack* beatmapLevelPack);

  static inline ::GlobalNamespace::__LevelSelectionFlowCoordinator__State* New_ctor(::GlobalNamespace::IBeatmapLevelPack* beatmapLevelPack,
                                                                                    ::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel);

  /// @brief Method .ctor addr 0x21471cc size 0x30 virtual false final false
  inline void _ctor(::GlobalNamespace::IBeatmapLevelPack* beatmapLevelPack, ::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel);

  static inline ::GlobalNamespace::__LevelSelectionFlowCoordinator__State* New_ctor(::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory levelCategory,
                                                                                    ::GlobalNamespace::IBeatmapLevelPack* beatmapLevelPack, ::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap);

  /// @brief Method .ctor addr 0x21471fc size 0x100 virtual false final false
  inline void _ctor(::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory levelCategory, ::GlobalNamespace::IBeatmapLevelPack* beatmapLevelPack,
                    ::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap);

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
  ::GlobalNamespace::IBeatmapLevelPack* ___beatmapLevelPack;

  /// @brief Field previewBeatmapLevel, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IPreviewBeatmapLevel* ___previewBeatmapLevel;

  /// @brief Field difficultyBeatmap, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::IDifficultyBeatmap* ___difficultyBeatmap;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LevelSelectionFlowCoordinator__State, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelSelectionFlowCoordinator__State, ___levelCategory) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelSelectionFlowCoordinator__State, ___beatmapLevelPack) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelSelectionFlowCoordinator__State, ___previewBeatmapLevel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelSelectionFlowCoordinator__State, ___difficultyBeatmap) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LevelSelectionFlowCoordinator
// SizeInfo { instance_size: 208, native_size: -1, calculated_instance_size: 208, calculated_native_size: 208, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13699))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5599))
// CS Name: ::LevelSelectionFlowCoordinator*
class CORDL_TYPE LevelSelectionFlowCoordinator : public ::HMUI::FlowCoordinator {
public:
  // Declarations
  using State = ::GlobalNamespace::__LevelSelectionFlowCoordinator__State;

  /// @brief Field playerDataModel, offset 0xa8, size 0x8
  __declspec(property(get = __get_playerDataModel, put = __set_playerDataModel))::GlobalNamespace::PlayerDataModel* playerDataModel;

  /// @brief Field levelSelectionNavigationController, offset 0xb0, size 0x8
  __declspec(property(get = __get_levelSelectionNavigationController,
                      put = __set_levelSelectionNavigationController))::GlobalNamespace::LevelSelectionNavigationController* levelSelectionNavigationController;

  /// @brief Field _searchFilterParamsViewController, offset 0xb8, size 0x8
  __declspec(property(get = __get__searchFilterParamsViewController,
                      put = __set__searchFilterParamsViewController))::GlobalNamespace::SearchFilterParamsViewController* _searchFilterParamsViewController;

  /// @brief Field _levelSearchViewController, offset 0xc0, size 0x8
  __declspec(property(get = __get__levelSearchViewController, put = __set__levelSearchViewController))::GlobalNamespace::LevelSearchViewController* _levelSearchViewController;

  /// @brief Field _startState, offset 0xc8, size 0x8
  __declspec(property(get = __get__startState, put = __set__startState))::GlobalNamespace::__LevelSelectionFlowCoordinator__State* _startState;

  __declspec(property(get = get_isInRootViewController)) bool isInRootViewController;

  __declspec(property(get = get_selectedLevelCategory))::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory selectedLevelCategory;

  __declspec(property(get = get_selectedBeatmapLevelPack))::GlobalNamespace::IBeatmapLevelPack* selectedBeatmapLevelPack;

  __declspec(property(get = get_selectedDifficultyBeatmap))::GlobalNamespace::IDifficultyBeatmap* selectedDifficultyBeatmap;

  __declspec(property(get = get_selectedBeatmapLevel))::GlobalNamespace::IPreviewBeatmapLevel* selectedBeatmapLevel;

  __declspec(property(get = get_initialTopScreenViewController))::HMUI::ViewController* initialTopScreenViewController;

  __declspec(property(get = get_initialLeftScreenViewController))::HMUI::ViewController* initialLeftScreenViewController;

  __declspec(property(get = get_initialRightScreenViewController))::HMUI::ViewController* initialRightScreenViewController;

  __declspec(property(get = get_showBackButtonForMainViewController)) bool showBackButtonForMainViewController;

  __declspec(property(get = get_hidePacksIfOneOrNone)) bool hidePacksIfOneOrNone;

  __declspec(property(get = get_hidePracticeButton)) bool hidePracticeButton;

  __declspec(property(get = get_actionButtonText))::StringW actionButtonText;

  __declspec(property(get = get_mainTitle))::StringW mainTitle;

  __declspec(property(get = get_enableCustomLevels)) bool enableCustomLevels;

  __declspec(property(get = get_songPackMask))::GlobalNamespace::SongPackMask songPackMask;

  __declspec(property(get = get_allowedBeatmapDifficultyMask))::GlobalNamespace::BeatmapDifficultyMask allowedBeatmapDifficultyMask;

  __declspec(property(get = get_notAllowedCharacteristics))::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*, ::Array<::GlobalNamespace::BeatmapCharacteristicSO*>*> notAllowedCharacteristics;

  constexpr ::GlobalNamespace::PlayerDataModel*& __get_playerDataModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerDataModel*> const& __get_playerDataModel() const;

  constexpr void __set_playerDataModel(::GlobalNamespace::PlayerDataModel* value);

  constexpr ::GlobalNamespace::LevelSelectionNavigationController*& __get_levelSelectionNavigationController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LevelSelectionNavigationController*> const& __get_levelSelectionNavigationController() const;

  constexpr void __set_levelSelectionNavigationController(::GlobalNamespace::LevelSelectionNavigationController* value);

  constexpr ::GlobalNamespace::SearchFilterParamsViewController*& __get__searchFilterParamsViewController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SearchFilterParamsViewController*> const& __get__searchFilterParamsViewController() const;

  constexpr void __set__searchFilterParamsViewController(::GlobalNamespace::SearchFilterParamsViewController* value);

  constexpr ::GlobalNamespace::LevelSearchViewController*& __get__levelSearchViewController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LevelSearchViewController*> const& __get__levelSearchViewController() const;

  constexpr void __set__levelSearchViewController(::GlobalNamespace::LevelSearchViewController* value);

  constexpr ::GlobalNamespace::__LevelSelectionFlowCoordinator__State*& __get__startState();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__LevelSelectionFlowCoordinator__State*> const& __get__startState() const;

  constexpr void __set__startState(::GlobalNamespace::__LevelSelectionFlowCoordinator__State* value);

  /// @brief Method get_isInRootViewController addr 0x2146524 size 0x74 virtual false final false
  inline bool get_isInRootViewController();

  /// @brief Method get_selectedLevelCategory addr 0x2146598 size 0x1c virtual false final false
  inline ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory get_selectedLevelCategory();

  /// @brief Method get_selectedBeatmapLevelPack addr 0x21465b4 size 0x1c virtual false final false
  inline ::GlobalNamespace::IBeatmapLevelPack* get_selectedBeatmapLevelPack();

  /// @brief Method get_selectedDifficultyBeatmap addr 0x21465d0 size 0x1c virtual false final false
  inline ::GlobalNamespace::IDifficultyBeatmap* get_selectedDifficultyBeatmap();

  /// @brief Method get_selectedBeatmapLevel addr 0x21465ec size 0x1c virtual false final false
  inline ::GlobalNamespace::IPreviewBeatmapLevel* get_selectedBeatmapLevel();

  /// @brief Method get_initialTopScreenViewController addr 0x2146608 size 0x8 virtual true final false
  inline ::HMUI::ViewController* get_initialTopScreenViewController();

  /// @brief Method get_initialLeftScreenViewController addr 0x2146610 size 0x8 virtual true final false
  inline ::HMUI::ViewController* get_initialLeftScreenViewController();

  /// @brief Method get_initialRightScreenViewController addr 0x2146618 size 0x8 virtual true final false
  inline ::HMUI::ViewController* get_initialRightScreenViewController();

  /// @brief Method get_showBackButtonForMainViewController addr 0x2146620 size 0x8 virtual true final false
  inline bool get_showBackButtonForMainViewController();

  /// @brief Method get_hidePacksIfOneOrNone addr 0x2146628 size 0x8 virtual true final false
  inline bool get_hidePacksIfOneOrNone();

  /// @brief Method get_hidePracticeButton addr 0x2146630 size 0x8 virtual true final false
  inline bool get_hidePracticeButton();

  /// @brief Method get_actionButtonText addr 0x2146638 size 0x44 virtual true final false
  inline ::StringW get_actionButtonText();

  /// @brief Method get_mainTitle addr 0x214667c size 0x8 virtual true final false
  inline ::StringW get_mainTitle();

  /// @brief Method get_enableCustomLevels addr 0x2146684 size 0x8 virtual true final false
  inline bool get_enableCustomLevels();

  /// @brief Method get_songPackMask addr 0x214668c size 0x8 virtual true final false
  inline ::GlobalNamespace::SongPackMask get_songPackMask();

  /// @brief Method get_allowedBeatmapDifficultyMask addr 0x2146694 size 0x8 virtual true final false
  inline ::GlobalNamespace::BeatmapDifficultyMask get_allowedBeatmapDifficultyMask();

  /// @brief Method get_notAllowedCharacteristics addr 0x214669c size 0x44 virtual true final false
  inline ::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*, ::Array<::GlobalNamespace::BeatmapCharacteristicSO*>*> get_notAllowedCharacteristics();

  /// @brief Method LevelSelectionFlowCoordinatorDidActivate addr 0x21466e0 size 0x4 virtual true final false
  inline void LevelSelectionFlowCoordinatorDidActivate(bool firstActivation, bool addedToHierarchy);

  /// @brief Method LevelSelectionFlowCoordinatorDidDeactivate addr 0x21466e4 size 0x4 virtual true final false
  inline void LevelSelectionFlowCoordinatorDidDeactivate(bool removedFromHierarchy);

  /// @brief Method LevelSelectionFlowCoordinatorTopViewControllerWillChange addr 0x21466e8 size 0xfc virtual true final false
  inline void LevelSelectionFlowCoordinatorTopViewControllerWillChange(::HMUI::ViewController* oldViewController, ::HMUI::ViewController* newViewController,
                                                                       ::HMUI::__ViewController__AnimationType animationType);

  /// @brief Method ActionButtonWasPressed addr 0x21467e4 size 0x4 virtual true final false
  inline void ActionButtonWasPressed();

  /// @brief Method PracticeButtonWasPressed addr 0x21467e8 size 0x4 virtual true final false
  inline void PracticeButtonWasPressed();

  /// @brief Method SelectionDidChange addr 0x21467ec size 0x4 virtual true final false
  inline void SelectionDidChange(::GlobalNamespace::IBeatmapLevelPack* pack, ::GlobalNamespace::IDifficultyBeatmap* beatmap);

  /// @brief Method Setup addr 0x21467f0 size 0x8 virtual false final false
  inline void Setup(::GlobalNamespace::__LevelSelectionFlowCoordinator__State* state);

  /// @brief Method DidActivate addr 0x21467f8 size 0x4bc virtual true final true
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate addr 0x2146cb4 size 0x2c4 virtual true final true
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method TopViewControllerWillChange addr 0x2146f78 size 0x10 virtual true final true
  inline void TopViewControllerWillChange(::HMUI::ViewController* oldViewController, ::HMUI::ViewController* newViewController, ::HMUI::__ViewController__AnimationType animationType);

  /// @brief Method HandleLevelSelectionNavigationControllerDidSelectPack addr 0x2146f88 size 0x18 virtual false final false
  inline void HandleLevelSelectionNavigationControllerDidSelectPack(::GlobalNamespace::LevelSelectionNavigationController* viewController, ::GlobalNamespace::IBeatmapLevelPack* pack);

  /// @brief Method HandleSearchFilterParamsViewControllerDidFinish addr 0x2146fa0 size 0x48 virtual false final false
  inline void HandleSearchFilterParamsViewControllerDidFinish(::GlobalNamespace::SearchFilterParamsViewController* viewController, ::GlobalNamespace::LevelFilterParams* levelFilterParams);

  /// @brief Method HandleLevelSearchViewControllerDidPressSearchButton addr 0x2146fe8 size 0x40 virtual false final false
  inline void HandleLevelSearchViewControllerDidPressSearchButton(::GlobalNamespace::LevelSearchViewController* viewController, ::GlobalNamespace::LevelFilterParams* levelFilterParams);

  /// @brief Method HandleLevelSelectionNavigationControllerDidPressActionButton addr 0x2147028 size 0x10 virtual false final false
  inline void HandleLevelSelectionNavigationControllerDidPressActionButton(::GlobalNamespace::LevelSelectionNavigationController* viewController);

  /// @brief Method HandleLevelSelectionNavigationControllerDidPressPracticeButton addr 0x2147038 size 0x10 virtual true final false
  inline void HandleLevelSelectionNavigationControllerDidPressPracticeButton(::GlobalNamespace::LevelSelectionNavigationController* viewController, ::GlobalNamespace::IBeatmapLevel* level);

  /// @brief Method HandleLevelSelectionNavigationControllerDidChangeDifficultyBeatmap addr 0x2147048 size 0x14 virtual true final false
  inline void HandleLevelSelectionNavigationControllerDidChangeDifficultyBeatmap(::GlobalNamespace::LevelSelectionNavigationController* viewController, ::GlobalNamespace::IDifficultyBeatmap* beatmap);

  /// @brief Method HandleLevelSelectionNavigationControllerDidChangeLevelDetailContent addr 0x214705c size 0x58 virtual true final false
  inline void HandleLevelSelectionNavigationControllerDidChangeLevelDetailContent(::GlobalNamespace::LevelSelectionNavigationController* viewController,
                                                                                  ::GlobalNamespace::__StandardLevelDetailViewController__ContentType contentType);

  /// @brief Method Refresh addr 0x21470b4 size 0x1c virtual true final false
  inline void Refresh();

  /// @brief Method IsMainViewController addr 0x21470d0 size 0x6c virtual false final false
  inline bool IsMainViewController(::HMUI::ViewController* viewController);

  /// @brief Method PresentMainViewController addr 0x214713c size 0x1c virtual false final false
  inline void PresentMainViewController(::System::Action* finishedCallback, ::HMUI::__ViewController__AnimationType animationType);

  static inline ::GlobalNamespace::LevelSelectionFlowCoordinator* New_ctor();

  /// @brief Method .ctor addr 0x2147158 size 0x8 virtual false final false
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
  ::GlobalNamespace::PlayerDataModel* ___playerDataModel;

  /// @brief Field levelSelectionNavigationController, offset: 0xb0, size: 0x8, def value: None
  ::GlobalNamespace::LevelSelectionNavigationController* ___levelSelectionNavigationController;

  /// @brief Field _searchFilterParamsViewController, offset: 0xb8, size: 0x8, def value: None
  ::GlobalNamespace::SearchFilterParamsViewController* ____searchFilterParamsViewController;

  /// @brief Field _levelSearchViewController, offset: 0xc0, size: 0x8, def value: None
  ::GlobalNamespace::LevelSearchViewController* ____levelSearchViewController;

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
