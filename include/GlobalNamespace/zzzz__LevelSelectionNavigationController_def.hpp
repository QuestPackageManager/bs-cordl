#pragma once
// IWYU pragma private; include "GlobalNamespace/LevelSelectionNavigationController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapDifficultyMask_def.hpp"
#include "HMUI/zzzz__NavigationController_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LevelSelectionNavigationController)
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
class LevelCollectionNavigationController;
}
namespace GlobalNamespace {
class LevelFilteringNavigationController;
}
namespace GlobalNamespace {
struct LevelSelectionOptions;
}
namespace GlobalNamespace {
class PlayerDataModel;
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
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class LevelSelectionNavigationController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LevelSelectionNavigationController);
// Dependencies BeatmapDifficultyMask, HMUI.NavigationController
namespace GlobalNamespace {
// Is value type: false
// CS Name: LevelSelectionNavigationController
class CORDL_TYPE LevelSelectionNavigationController : public ::HMUI::NavigationController {
public:
  // Declarations
  /// @brief Field _actionButtonText, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get__actionButtonText, put = __cordl_internal_set__actionButtonText)) ::StringW _actionButtonText;

  /// @brief Field _allowedBeatmapDifficultyMask, offset 0xf0, size 0x1
  __declspec(property(get = __cordl_internal_get__allowedBeatmapDifficultyMask,
                      put = __cordl_internal_set__allowedBeatmapDifficultyMask)) ::GlobalNamespace::BeatmapDifficultyMask _allowedBeatmapDifficultyMask;

  /// @brief Field _hidePacksIfOneOrNone, offset 0xe0, size 0x1
  __declspec(property(get = __cordl_internal_get__hidePacksIfOneOrNone, put = __cordl_internal_set__hidePacksIfOneOrNone)) bool _hidePacksIfOneOrNone;

  /// @brief Field _hidePracticeButton, offset 0xe1, size 0x1
  __declspec(property(get = __cordl_internal_get__hidePracticeButton, put = __cordl_internal_set__hidePracticeButton)) bool _hidePracticeButton;

  /// @brief Field _levelCollectionNavigationController, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__levelCollectionNavigationController,
                      put = __cordl_internal_set__levelCollectionNavigationController)) ::UnityW<::GlobalNamespace::LevelCollectionNavigationController>
      _levelCollectionNavigationController;

  /// @brief Field _levelFilteringNavigationController, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__levelFilteringNavigationController,
                      put = __cordl_internal_set__levelFilteringNavigationController)) ::UnityW<::GlobalNamespace::LevelFilteringNavigationController>
      _levelFilteringNavigationController;

  /// @brief Field _notAllowedCharacteristics, offset 0xf8, size 0x8
  __declspec(property(
      get = __cordl_internal_get__notAllowedCharacteristics,
      put = __cordl_internal_set__notAllowedCharacteristics)) ::ArrayW<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::Array<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*>
      _notAllowedCharacteristics;

  /// @brief Field _playerDataModel, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__playerDataModel, put = __cordl_internal_set__playerDataModel)) ::UnityW<::GlobalNamespace::PlayerDataModel> _playerDataModel;

  __declspec(property(get = get_beatmapKey)) ::GlobalNamespace::BeatmapKey beatmapKey;

  __declspec(property(get = get_beatmapLevel)) ::GlobalNamespace::BeatmapLevel* beatmapLevel;

  /// @brief Field didChangeDifficultyBeatmapEvent, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_didChangeDifficultyBeatmapEvent,
                      put = __cordl_internal_set_didChangeDifficultyBeatmapEvent)) ::System::Action_1<::UnityW<::GlobalNamespace::LevelSelectionNavigationController>>* didChangeDifficultyBeatmapEvent;

  /// @brief Field didChangeLevelDetailContentEvent, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_didChangeLevelDetailContentEvent, put = __cordl_internal_set_didChangeLevelDetailContentEvent)) ::System::Action_2<
      ::UnityW<::GlobalNamespace::LevelSelectionNavigationController>, ::GlobalNamespace::StandardLevelDetailViewController_ContentType>* didChangeLevelDetailContentEvent;

  /// @brief Field didPressActionButtonEvent, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_didPressActionButtonEvent,
                      put = __cordl_internal_set_didPressActionButtonEvent)) ::System::Action_1<::UnityW<::GlobalNamespace::LevelSelectionNavigationController>>* didPressActionButtonEvent;

  /// @brief Field didPressPracticeButtonEvent, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_didPressPracticeButtonEvent,
                      put = __cordl_internal_set_didPressPracticeButtonEvent)) ::System::Action_2<::UnityW<::GlobalNamespace::LevelSelectionNavigationController>, ::GlobalNamespace::BeatmapLevel*>*
      didPressPracticeButtonEvent;

  /// @brief Field didSelectLevelPackEvent, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_didSelectLevelPackEvent,
                      put = __cordl_internal_set_didSelectLevelPackEvent)) ::System::Action_2<::UnityW<::GlobalNamespace::LevelSelectionNavigationController>, ::GlobalNamespace::BeatmapLevelPack*>*
      didSelectLevelPackEvent;

  __declspec(property(get = get_selectedBeatmapLevelPack)) ::GlobalNamespace::BeatmapLevelPack* selectedBeatmapLevelPack;

  __declspec(property(get = get_selectedLevelCategory)) ::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory selectedLevelCategory;

  /// @brief Method ClearSelected, addr 0x3b6a960, size 0x1c, virtual false, abstract: false, final false
  inline void ClearSelected();

  /// @brief Method DidActivate, addr 0x3b69fb4, size 0x4ac, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x3b6a460, size 0x414, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method HandleLevelCollectionNavigationControllerDidChangeDifficultyBeatmap, addr 0x3b6a904, size 0x20, virtual false, abstract: false, final false
  inline void HandleLevelCollectionNavigationControllerDidChangeDifficultyBeatmap(::GlobalNamespace::LevelCollectionNavigationController* viewController);

  /// @brief Method HandleLevelCollectionNavigationControllerDidChangeLevelDetailContent, addr 0x3b6a874, size 0x20, virtual false, abstract: false, final false
  inline void HandleLevelCollectionNavigationControllerDidChangeLevelDetailContent(::GlobalNamespace::LevelCollectionNavigationController* viewController,
                                                                                   ::GlobalNamespace::StandardLevelDetailViewController_ContentType contentType);

  /// @brief Method HandleLevelCollectionNavigationControllerDidPressActionButton, addr 0x3b6a8bc, size 0x28, virtual false, abstract: false, final false
  inline void HandleLevelCollectionNavigationControllerDidPressActionButton(::GlobalNamespace::LevelCollectionNavigationController* viewController);

  /// @brief Method HandleLevelCollectionNavigationControllerDidPressOpenPackButton, addr 0x3b6a924, size 0x20, virtual false, abstract: false, final false
  inline void HandleLevelCollectionNavigationControllerDidPressOpenPackButton(::GlobalNamespace::LevelCollectionNavigationController* viewController,
                                                                              ::GlobalNamespace::BeatmapLevelPack* beatmapLevelPack);

  /// @brief Method HandleLevelCollectionNavigationControllerDidPressPracticeButton, addr 0x3b6a894, size 0x28, virtual false, abstract: false, final false
  inline void HandleLevelCollectionNavigationControllerDidPressPracticeButton(::GlobalNamespace::LevelCollectionNavigationController* _, ::GlobalNamespace::BeatmapLevel* beatmapLevel);

  /// @brief Method HandleLevelCollectionNavigationControllerDidSelectPack, addr 0x3b6a8e4, size 0x20, virtual false, abstract: false, final false
  inline void HandleLevelCollectionNavigationControllerDidSelectPack(::GlobalNamespace::LevelCollectionNavigationController* viewController, ::GlobalNamespace::BeatmapLevelPack* beatmapLevelPack);

  /// @brief Method HandleLevelFilteringNavigationControllerDidCloseBeatmapLevelCollections, addr 0x3b6a99c, size 0x20, virtual false, abstract: false, final false
  inline void HandleLevelFilteringNavigationControllerDidCloseBeatmapLevelCollections();

  /// @brief Method HandleLevelFilteringNavigationControllerDidOpenBeatmapLevelCollections, addr 0x3b6a97c, size 0x20, virtual false, abstract: false, final false
  inline void HandleLevelFilteringNavigationControllerDidOpenBeatmapLevelCollections();

  /// @brief Method HandleLevelFilteringNavigationControllerDidPressAllSongs, addr 0x3b6ab24, size 0x1c, virtual false, abstract: false, final false
  inline void HandleLevelFilteringNavigationControllerDidPressAllSongs(::GlobalNamespace::LevelFilteringNavigationController* controller);

  /// @brief Method HandleLevelFilteringNavigationControllerDidSelectBeatmapLevelPack, addr 0x3b6a9bc, size 0x14c, virtual false, abstract: false, final false
  inline void HandleLevelFilteringNavigationControllerDidSelectBeatmapLevelPack(::GlobalNamespace::LevelFilteringNavigationController* controller,
                                                                                ::GlobalNamespace::BeatmapLevelPack* annotatedBeatmapLevelPack, ::UnityEngine::GameObject* noDataInfoPrefab,
                                                                                ::GlobalNamespace::LevelSelectionOptions options);

  /// @brief Method HandleLevelFilteringNavigationControllerDidStartLoading, addr 0x3b6ab08, size 0x1c, virtual false, abstract: false, final false
  inline void HandleLevelFilteringNavigationControllerDidStartLoading(::GlobalNamespace::LevelFilteringNavigationController* controller);

  static inline ::GlobalNamespace::LevelSelectionNavigationController* New_ctor();

  /// @brief Method RefreshDetail, addr 0x3b6a944, size 0x1c, virtual false, abstract: false, final false
  inline void RefreshDetail();

  /// @brief Method Setup, addr 0x3b69f34, size 0x80, virtual false, abstract: false, final false
  inline void Setup(::GlobalNamespace::SongPackMask songPackMask, ::GlobalNamespace::BeatmapDifficultyMask allowedBeatmapDifficultyMask,
                    ::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*, ::Array<::GlobalNamespace::BeatmapCharacteristicSO*>*> notAllowedCharacteristics, bool hidePacksIfOneOrNone,
                    bool hidePracticeButton, ::StringW actionButtonText, ::GlobalNamespace::BeatmapLevelPack* levelPackToBeSelectedAfterPresent,
                    ::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory startLevelCategory, ::GlobalNamespace::BeatmapLevel* beatmapLevelToBeSelectedAfterPresent,
                    bool enableCustomLevels);

  constexpr ::StringW const& __cordl_internal_get__actionButtonText() const;

  constexpr ::StringW& __cordl_internal_get__actionButtonText();

  constexpr ::GlobalNamespace::BeatmapDifficultyMask const& __cordl_internal_get__allowedBeatmapDifficultyMask() const;

  constexpr ::GlobalNamespace::BeatmapDifficultyMask& __cordl_internal_get__allowedBeatmapDifficultyMask();

  constexpr bool const& __cordl_internal_get__hidePacksIfOneOrNone() const;

  constexpr bool& __cordl_internal_get__hidePacksIfOneOrNone();

  constexpr bool const& __cordl_internal_get__hidePracticeButton() const;

  constexpr bool& __cordl_internal_get__hidePracticeButton();

  constexpr ::UnityW<::GlobalNamespace::LevelCollectionNavigationController> const& __cordl_internal_get__levelCollectionNavigationController() const;

  constexpr ::UnityW<::GlobalNamespace::LevelCollectionNavigationController>& __cordl_internal_get__levelCollectionNavigationController();

  constexpr ::UnityW<::GlobalNamespace::LevelFilteringNavigationController> const& __cordl_internal_get__levelFilteringNavigationController() const;

  constexpr ::UnityW<::GlobalNamespace::LevelFilteringNavigationController>& __cordl_internal_get__levelFilteringNavigationController();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::Array<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*> const&
  __cordl_internal_get__notAllowedCharacteristics() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::Array<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*>& __cordl_internal_get__notAllowedCharacteristics();

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& __cordl_internal_get__playerDataModel() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& __cordl_internal_get__playerDataModel();

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::LevelSelectionNavigationController>>* const& __cordl_internal_get_didChangeDifficultyBeatmapEvent() const;

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::LevelSelectionNavigationController>>*& __cordl_internal_get_didChangeDifficultyBeatmapEvent();

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::LevelSelectionNavigationController>, ::GlobalNamespace::StandardLevelDetailViewController_ContentType>* const&
  __cordl_internal_get_didChangeLevelDetailContentEvent() const;

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::LevelSelectionNavigationController>, ::GlobalNamespace::StandardLevelDetailViewController_ContentType>*&
  __cordl_internal_get_didChangeLevelDetailContentEvent();

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::LevelSelectionNavigationController>>* const& __cordl_internal_get_didPressActionButtonEvent() const;

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::LevelSelectionNavigationController>>*& __cordl_internal_get_didPressActionButtonEvent();

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::LevelSelectionNavigationController>, ::GlobalNamespace::BeatmapLevel*>* const& __cordl_internal_get_didPressPracticeButtonEvent() const;

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::LevelSelectionNavigationController>, ::GlobalNamespace::BeatmapLevel*>*& __cordl_internal_get_didPressPracticeButtonEvent();

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::LevelSelectionNavigationController>, ::GlobalNamespace::BeatmapLevelPack*>* const& __cordl_internal_get_didSelectLevelPackEvent() const;

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::LevelSelectionNavigationController>, ::GlobalNamespace::BeatmapLevelPack*>*& __cordl_internal_get_didSelectLevelPackEvent();

  constexpr void __cordl_internal_set__actionButtonText(::StringW value);

  constexpr void __cordl_internal_set__allowedBeatmapDifficultyMask(::GlobalNamespace::BeatmapDifficultyMask value);

  constexpr void __cordl_internal_set__hidePacksIfOneOrNone(bool value);

  constexpr void __cordl_internal_set__hidePracticeButton(bool value);

  constexpr void __cordl_internal_set__levelCollectionNavigationController(::UnityW<::GlobalNamespace::LevelCollectionNavigationController> value);

  constexpr void __cordl_internal_set__levelFilteringNavigationController(::UnityW<::GlobalNamespace::LevelFilteringNavigationController> value);

  constexpr void __cordl_internal_set__notAllowedCharacteristics(::ArrayW<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::Array<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*> value);

  constexpr void __cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value);

  constexpr void __cordl_internal_set_didChangeDifficultyBeatmapEvent(::System::Action_1<::UnityW<::GlobalNamespace::LevelSelectionNavigationController>>* value);

  constexpr void __cordl_internal_set_didChangeLevelDetailContentEvent(
      ::System::Action_2<::UnityW<::GlobalNamespace::LevelSelectionNavigationController>, ::GlobalNamespace::StandardLevelDetailViewController_ContentType>* value);

  constexpr void __cordl_internal_set_didPressActionButtonEvent(::System::Action_1<::UnityW<::GlobalNamespace::LevelSelectionNavigationController>>* value);

  constexpr void __cordl_internal_set_didPressPracticeButtonEvent(::System::Action_2<::UnityW<::GlobalNamespace::LevelSelectionNavigationController>, ::GlobalNamespace::BeatmapLevel*>* value);

  constexpr void __cordl_internal_set_didSelectLevelPackEvent(::System::Action_2<::UnityW<::GlobalNamespace::LevelSelectionNavigationController>, ::GlobalNamespace::BeatmapLevelPack*>* value);

  /// @brief Method .ctor, addr 0x3b6ab40, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didChangeDifficultyBeatmapEvent, addr 0x3b69d40, size 0xb0, virtual false, abstract: false, final false
  inline void add_didChangeDifficultyBeatmapEvent(::System::Action_1<::UnityW<::GlobalNamespace::LevelSelectionNavigationController>>* value);

  /// @brief Method add_didChangeLevelDetailContentEvent, addr 0x3b697c0, size 0xb0, virtual false, abstract: false, final false
  inline void
  add_didChangeLevelDetailContentEvent(::System::Action_2<::UnityW<::GlobalNamespace::LevelSelectionNavigationController>, ::GlobalNamespace::StandardLevelDetailViewController_ContentType>* value);

  /// @brief Method add_didPressActionButtonEvent, addr 0x3b69a80, size 0xb0, virtual false, abstract: false, final false
  inline void add_didPressActionButtonEvent(::System::Action_1<::UnityW<::GlobalNamespace::LevelSelectionNavigationController>>* value);

  /// @brief Method add_didPressPracticeButtonEvent, addr 0x3b69be0, size 0xb0, virtual false, abstract: false, final false
  inline void add_didPressPracticeButtonEvent(::System::Action_2<::UnityW<::GlobalNamespace::LevelSelectionNavigationController>, ::GlobalNamespace::BeatmapLevel*>* value);

  /// @brief Method add_didSelectLevelPackEvent, addr 0x3b69920, size 0xb0, virtual false, abstract: false, final false
  inline void add_didSelectLevelPackEvent(::System::Action_2<::UnityW<::GlobalNamespace::LevelSelectionNavigationController>, ::GlobalNamespace::BeatmapLevelPack*>* value);

  /// @brief Method get_beatmapKey, addr 0x3b69ed8, size 0x40, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapKey get_beatmapKey();

  /// @brief Method get_beatmapLevel, addr 0x3b69f18, size 0x1c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapLevel* get_beatmapLevel();

  /// @brief Method get_selectedBeatmapLevelPack, addr 0x3b69ebc, size 0x1c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapLevelPack* get_selectedBeatmapLevelPack();

  /// @brief Method get_selectedLevelCategory, addr 0x3b69ea0, size 0x1c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory get_selectedLevelCategory();

  /// @brief Method remove_didChangeDifficultyBeatmapEvent, addr 0x3b69df0, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didChangeDifficultyBeatmapEvent(::System::Action_1<::UnityW<::GlobalNamespace::LevelSelectionNavigationController>>* value);

  /// @brief Method remove_didChangeLevelDetailContentEvent, addr 0x3b69870, size 0xb0, virtual false, abstract: false, final false
  inline void
  remove_didChangeLevelDetailContentEvent(::System::Action_2<::UnityW<::GlobalNamespace::LevelSelectionNavigationController>, ::GlobalNamespace::StandardLevelDetailViewController_ContentType>* value);

  /// @brief Method remove_didPressActionButtonEvent, addr 0x3b69b30, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didPressActionButtonEvent(::System::Action_1<::UnityW<::GlobalNamespace::LevelSelectionNavigationController>>* value);

  /// @brief Method remove_didPressPracticeButtonEvent, addr 0x3b69c90, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didPressPracticeButtonEvent(::System::Action_2<::UnityW<::GlobalNamespace::LevelSelectionNavigationController>, ::GlobalNamespace::BeatmapLevel*>* value);

  /// @brief Method remove_didSelectLevelPackEvent, addr 0x3b699d0, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didSelectLevelPackEvent(::System::Action_2<::UnityW<::GlobalNamespace::LevelSelectionNavigationController>, ::GlobalNamespace::BeatmapLevelPack*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LevelSelectionNavigationController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LevelSelectionNavigationController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LevelSelectionNavigationController(LevelSelectionNavigationController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LevelSelectionNavigationController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LevelSelectionNavigationController(LevelSelectionNavigationController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5368 };

  /// @brief Field _levelFilteringNavigationController, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LevelFilteringNavigationController> ____levelFilteringNavigationController;

  /// @brief Field _levelCollectionNavigationController, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LevelCollectionNavigationController> ____levelCollectionNavigationController;

  /// @brief Field _playerDataModel, offset: 0xb0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerDataModel> ____playerDataModel;

  /// @brief Field didChangeLevelDetailContentEvent, offset: 0xb8, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::GlobalNamespace::LevelSelectionNavigationController>, ::GlobalNamespace::StandardLevelDetailViewController_ContentType>* ___didChangeLevelDetailContentEvent;

  /// @brief Field didSelectLevelPackEvent, offset: 0xc0, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::GlobalNamespace::LevelSelectionNavigationController>, ::GlobalNamespace::BeatmapLevelPack*>* ___didSelectLevelPackEvent;

  /// @brief Field didPressActionButtonEvent, offset: 0xc8, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::GlobalNamespace::LevelSelectionNavigationController>>* ___didPressActionButtonEvent;

  /// @brief Field didPressPracticeButtonEvent, offset: 0xd0, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::GlobalNamespace::LevelSelectionNavigationController>, ::GlobalNamespace::BeatmapLevel*>* ___didPressPracticeButtonEvent;

  /// @brief Field didChangeDifficultyBeatmapEvent, offset: 0xd8, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::GlobalNamespace::LevelSelectionNavigationController>>* ___didChangeDifficultyBeatmapEvent;

  /// @brief Field _hidePacksIfOneOrNone, offset: 0xe0, size: 0x1, def value: None
  bool ____hidePacksIfOneOrNone;

  /// @brief Field _hidePracticeButton, offset: 0xe1, size: 0x1, def value: None
  bool ____hidePracticeButton;

  /// @brief Field _actionButtonText, offset: 0xe8, size: 0x8, def value: None
  ::StringW ____actionButtonText;

  /// @brief Field _allowedBeatmapDifficultyMask, offset: 0xf0, size: 0x1, def value: None
  ::GlobalNamespace::BeatmapDifficultyMask ____allowedBeatmapDifficultyMask;

  /// @brief Field _notAllowedCharacteristics, offset: 0xf8, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::Array<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*> ____notAllowedCharacteristics;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LevelSelectionNavigationController, ____levelFilteringNavigationController) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSelectionNavigationController, ____levelCollectionNavigationController) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSelectionNavigationController, ____playerDataModel) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSelectionNavigationController, ___didChangeLevelDetailContentEvent) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSelectionNavigationController, ___didSelectLevelPackEvent) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSelectionNavigationController, ___didPressActionButtonEvent) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSelectionNavigationController, ___didPressPracticeButtonEvent) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSelectionNavigationController, ___didChangeDifficultyBeatmapEvent) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSelectionNavigationController, ____hidePacksIfOneOrNone) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSelectionNavigationController, ____hidePracticeButton) == 0xe1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSelectionNavigationController, ____actionButtonText) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSelectionNavigationController, ____allowedBeatmapDifficultyMask) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSelectionNavigationController, ____notAllowedCharacteristics) == 0xf8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelSelectionNavigationController, 0x100>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LevelSelectionNavigationController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelSelectionNavigationController*, "", "LevelSelectionNavigationController");
