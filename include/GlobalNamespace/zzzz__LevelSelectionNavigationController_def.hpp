#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapDifficultyMask_def.hpp"
#include "HMUI/zzzz__NavigationController_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LevelSelectionNavigationController)
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
struct BeatmapDifficultyMask;
}
namespace GlobalNamespace {
class IAnnotatedBeatmapLevelCollection;
}
namespace GlobalNamespace {
class IBeatmapLevelPack;
}
namespace GlobalNamespace {
class IBeatmapLevel;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
class LevelCollectionNavigationController;
}
namespace GlobalNamespace {
class LevelFilteringNavigationController;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
struct SongPackMask;
}
namespace GlobalNamespace {
struct __SelectLevelCategoryViewController__LevelCategory;
}
namespace GlobalNamespace {
struct __StandardLevelDetailViewController__ContentType;
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
// Type: ::LevelSelectionNavigationController
// SizeInfo { instance_size: 248, native_size: -1, calculated_instance_size: 248, calculated_native_size: 248, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(13588)), TypeDefinitionIndex(TypeDefinitionIndex(14719))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5687))
// CS Name: ::LevelSelectionNavigationController*
class CORDL_TYPE LevelSelectionNavigationController : public ::HMUI::NavigationController {
public:
  // Declarations
  /// @brief Field _levelFilteringNavigationController, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__levelFilteringNavigationController,
                      put = __cordl_internal_set__levelFilteringNavigationController))::UnityW<::GlobalNamespace::LevelFilteringNavigationController> _levelFilteringNavigationController;

  /// @brief Field _levelCollectionNavigationController, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__levelCollectionNavigationController,
                      put = __cordl_internal_set__levelCollectionNavigationController))::UnityW<::GlobalNamespace::LevelCollectionNavigationController> _levelCollectionNavigationController;

  /// @brief Field _playerDataModel, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__playerDataModel, put = __cordl_internal_set__playerDataModel))::UnityW<::GlobalNamespace::PlayerDataModel> _playerDataModel;

  /// @brief Field didChangeLevelDetailContentEvent, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_didChangeLevelDetailContentEvent, put = __cordl_internal_set_didChangeLevelDetailContentEvent))::System::Action_2<
      ::UnityW<::GlobalNamespace::LevelSelectionNavigationController>, ::GlobalNamespace::__StandardLevelDetailViewController__ContentType>* didChangeLevelDetailContentEvent;

  /// @brief Field didSelectLevelPackEvent, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_didSelectLevelPackEvent,
                      put = __cordl_internal_set_didSelectLevelPackEvent))::System::Action_2<::UnityW<::GlobalNamespace::LevelSelectionNavigationController>,
                                                                                             ::GlobalNamespace::IBeatmapLevelPack*>* didSelectLevelPackEvent;

  /// @brief Field didPressActionButtonEvent, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_didPressActionButtonEvent,
                      put = __cordl_internal_set_didPressActionButtonEvent))::System::Action_1<::UnityW<::GlobalNamespace::LevelSelectionNavigationController>>* didPressActionButtonEvent;

  /// @brief Field didPressPracticeButtonEvent, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_didPressPracticeButtonEvent,
                      put = __cordl_internal_set_didPressPracticeButtonEvent))::System::Action_2<::UnityW<::GlobalNamespace::LevelSelectionNavigationController>,
                                                                                                 ::GlobalNamespace::IBeatmapLevel*>* didPressPracticeButtonEvent;

  /// @brief Field didChangeDifficultyBeatmapEvent, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_didChangeDifficultyBeatmapEvent,
                      put = __cordl_internal_set_didChangeDifficultyBeatmapEvent))::System::Action_2<::UnityW<::GlobalNamespace::LevelSelectionNavigationController>,
                                                                                                     ::GlobalNamespace::IDifficultyBeatmap*>* didChangeDifficultyBeatmapEvent;

  /// @brief Field _hidePacksIfOneOrNone, offset 0xd8, size 0x1
  __declspec(property(get = __cordl_internal_get__hidePacksIfOneOrNone, put = __cordl_internal_set__hidePacksIfOneOrNone)) bool _hidePacksIfOneOrNone;

  /// @brief Field _hidePracticeButton, offset 0xd9, size 0x1
  __declspec(property(get = __cordl_internal_get__hidePracticeButton, put = __cordl_internal_set__hidePracticeButton)) bool _hidePracticeButton;

  /// @brief Field _actionButtonText, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get__actionButtonText, put = __cordl_internal_set__actionButtonText))::StringW _actionButtonText;

  /// @brief Field _allowedBeatmapDifficultyMask, offset 0xe8, size 0x1
  __declspec(property(get = __cordl_internal_get__allowedBeatmapDifficultyMask,
                      put = __cordl_internal_set__allowedBeatmapDifficultyMask))::GlobalNamespace::BeatmapDifficultyMask _allowedBeatmapDifficultyMask;

  /// @brief Field _notAllowedCharacteristics, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get__notAllowedCharacteristics,
                      put = __cordl_internal_set__notAllowedCharacteristics))::ArrayW<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>,
                                                                                      ::Array<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*> _notAllowedCharacteristics;

  __declspec(property(get = get_selectedDifficultyBeatmap))::GlobalNamespace::IDifficultyBeatmap* selectedDifficultyBeatmap;

  __declspec(property(get = get_selectedBeatmapLevel))::GlobalNamespace::IPreviewBeatmapLevel* selectedBeatmapLevel;

  __declspec(property(get = get_selectedLevelCategory))::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory selectedLevelCategory;

  __declspec(property(get = get_selectedBeatmapLevelPack))::GlobalNamespace::IBeatmapLevelPack* selectedBeatmapLevelPack;

  constexpr ::UnityW<::GlobalNamespace::LevelFilteringNavigationController>& __cordl_internal_get__levelFilteringNavigationController();

  constexpr ::UnityW<::GlobalNamespace::LevelFilteringNavigationController> const& __cordl_internal_get__levelFilteringNavigationController() const;

  constexpr void __cordl_internal_set__levelFilteringNavigationController(::UnityW<::GlobalNamespace::LevelFilteringNavigationController> value);

  constexpr ::UnityW<::GlobalNamespace::LevelCollectionNavigationController>& __cordl_internal_get__levelCollectionNavigationController();

  constexpr ::UnityW<::GlobalNamespace::LevelCollectionNavigationController> const& __cordl_internal_get__levelCollectionNavigationController() const;

  constexpr void __cordl_internal_set__levelCollectionNavigationController(::UnityW<::GlobalNamespace::LevelCollectionNavigationController> value);

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& __cordl_internal_get__playerDataModel();

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& __cordl_internal_get__playerDataModel() const;

  constexpr void __cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value);

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::LevelSelectionNavigationController>, ::GlobalNamespace::__StandardLevelDetailViewController__ContentType>*&
  __cordl_internal_get_didChangeLevelDetailContentEvent();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Action_2<::UnityW<::GlobalNamespace::LevelSelectionNavigationController>, ::GlobalNamespace::__StandardLevelDetailViewController__ContentType>*> const&
  __cordl_internal_get_didChangeLevelDetailContentEvent() const;

  constexpr void __cordl_internal_set_didChangeLevelDetailContentEvent(
      ::System::Action_2<::UnityW<::GlobalNamespace::LevelSelectionNavigationController>, ::GlobalNamespace::__StandardLevelDetailViewController__ContentType>* value);

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::LevelSelectionNavigationController>, ::GlobalNamespace::IBeatmapLevelPack*>*& __cordl_internal_get_didSelectLevelPackEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityW<::GlobalNamespace::LevelSelectionNavigationController>, ::GlobalNamespace::IBeatmapLevelPack*>*> const&
  __cordl_internal_get_didSelectLevelPackEvent() const;

  constexpr void __cordl_internal_set_didSelectLevelPackEvent(::System::Action_2<::UnityW<::GlobalNamespace::LevelSelectionNavigationController>, ::GlobalNamespace::IBeatmapLevelPack*>* value);

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::LevelSelectionNavigationController>>*& __cordl_internal_get_didPressActionButtonEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::GlobalNamespace::LevelSelectionNavigationController>>*> const& __cordl_internal_get_didPressActionButtonEvent() const;

  constexpr void __cordl_internal_set_didPressActionButtonEvent(::System::Action_1<::UnityW<::GlobalNamespace::LevelSelectionNavigationController>>* value);

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::LevelSelectionNavigationController>, ::GlobalNamespace::IBeatmapLevel*>*& __cordl_internal_get_didPressPracticeButtonEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityW<::GlobalNamespace::LevelSelectionNavigationController>, ::GlobalNamespace::IBeatmapLevel*>*> const&
  __cordl_internal_get_didPressPracticeButtonEvent() const;

  constexpr void __cordl_internal_set_didPressPracticeButtonEvent(::System::Action_2<::UnityW<::GlobalNamespace::LevelSelectionNavigationController>, ::GlobalNamespace::IBeatmapLevel*>* value);

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::LevelSelectionNavigationController>, ::GlobalNamespace::IDifficultyBeatmap*>*& __cordl_internal_get_didChangeDifficultyBeatmapEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityW<::GlobalNamespace::LevelSelectionNavigationController>, ::GlobalNamespace::IDifficultyBeatmap*>*> const&
  __cordl_internal_get_didChangeDifficultyBeatmapEvent() const;

  constexpr void
  __cordl_internal_set_didChangeDifficultyBeatmapEvent(::System::Action_2<::UnityW<::GlobalNamespace::LevelSelectionNavigationController>, ::GlobalNamespace::IDifficultyBeatmap*>* value);

  constexpr bool& __cordl_internal_get__hidePacksIfOneOrNone();

  constexpr bool const& __cordl_internal_get__hidePacksIfOneOrNone() const;

  constexpr void __cordl_internal_set__hidePacksIfOneOrNone(bool value);

  constexpr bool& __cordl_internal_get__hidePracticeButton();

  constexpr bool const& __cordl_internal_get__hidePracticeButton() const;

  constexpr void __cordl_internal_set__hidePracticeButton(bool value);

  constexpr ::StringW& __cordl_internal_get__actionButtonText();

  constexpr ::StringW const& __cordl_internal_get__actionButtonText() const;

  constexpr void __cordl_internal_set__actionButtonText(::StringW value);

  constexpr ::GlobalNamespace::BeatmapDifficultyMask& __cordl_internal_get__allowedBeatmapDifficultyMask();

  constexpr ::GlobalNamespace::BeatmapDifficultyMask const& __cordl_internal_get__allowedBeatmapDifficultyMask() const;

  constexpr void __cordl_internal_set__allowedBeatmapDifficultyMask(::GlobalNamespace::BeatmapDifficultyMask value);

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::Array<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*>& __cordl_internal_get__notAllowedCharacteristics();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::Array<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*> const&
  __cordl_internal_get__notAllowedCharacteristics() const;

  constexpr void __cordl_internal_set__notAllowedCharacteristics(::ArrayW<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::Array<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*> value);

  /// @brief Method add_didChangeLevelDetailContentEvent, addr 0x22c6d0c, size 0xb0, virtual false, abstract: false, final false
  inline void
  add_didChangeLevelDetailContentEvent(::System::Action_2<::UnityW<::GlobalNamespace::LevelSelectionNavigationController>, ::GlobalNamespace::__StandardLevelDetailViewController__ContentType>* value);

  /// @brief Method remove_didChangeLevelDetailContentEvent, addr 0x22c6dbc, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didChangeLevelDetailContentEvent(
      ::System::Action_2<::UnityW<::GlobalNamespace::LevelSelectionNavigationController>, ::GlobalNamespace::__StandardLevelDetailViewController__ContentType>* value);

  /// @brief Method add_didSelectLevelPackEvent, addr 0x22c6e6c, size 0xb0, virtual false, abstract: false, final false
  inline void add_didSelectLevelPackEvent(::System::Action_2<::UnityW<::GlobalNamespace::LevelSelectionNavigationController>, ::GlobalNamespace::IBeatmapLevelPack*>* value);

  /// @brief Method remove_didSelectLevelPackEvent, addr 0x22c6f1c, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didSelectLevelPackEvent(::System::Action_2<::UnityW<::GlobalNamespace::LevelSelectionNavigationController>, ::GlobalNamespace::IBeatmapLevelPack*>* value);

  /// @brief Method add_didPressActionButtonEvent, addr 0x22c6fcc, size 0xb0, virtual false, abstract: false, final false
  inline void add_didPressActionButtonEvent(::System::Action_1<::UnityW<::GlobalNamespace::LevelSelectionNavigationController>>* value);

  /// @brief Method remove_didPressActionButtonEvent, addr 0x22c707c, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didPressActionButtonEvent(::System::Action_1<::UnityW<::GlobalNamespace::LevelSelectionNavigationController>>* value);

  /// @brief Method add_didPressPracticeButtonEvent, addr 0x22c712c, size 0xb0, virtual false, abstract: false, final false
  inline void add_didPressPracticeButtonEvent(::System::Action_2<::UnityW<::GlobalNamespace::LevelSelectionNavigationController>, ::GlobalNamespace::IBeatmapLevel*>* value);

  /// @brief Method remove_didPressPracticeButtonEvent, addr 0x22c71dc, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didPressPracticeButtonEvent(::System::Action_2<::UnityW<::GlobalNamespace::LevelSelectionNavigationController>, ::GlobalNamespace::IBeatmapLevel*>* value);

  /// @brief Method add_didChangeDifficultyBeatmapEvent, addr 0x22c728c, size 0xb0, virtual false, abstract: false, final false
  inline void add_didChangeDifficultyBeatmapEvent(::System::Action_2<::UnityW<::GlobalNamespace::LevelSelectionNavigationController>, ::GlobalNamespace::IDifficultyBeatmap*>* value);

  /// @brief Method remove_didChangeDifficultyBeatmapEvent, addr 0x22c733c, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didChangeDifficultyBeatmapEvent(::System::Action_2<::UnityW<::GlobalNamespace::LevelSelectionNavigationController>, ::GlobalNamespace::IDifficultyBeatmap*>* value);

  /// @brief Method get_selectedDifficultyBeatmap, addr 0x22c73ec, size 0x18, virtual false, abstract: false, final false
  inline ::GlobalNamespace::IDifficultyBeatmap* get_selectedDifficultyBeatmap();

  /// @brief Method get_selectedBeatmapLevel, addr 0x22c7404, size 0x24, virtual false, abstract: false, final false
  inline ::GlobalNamespace::IPreviewBeatmapLevel* get_selectedBeatmapLevel();

  /// @brief Method get_selectedLevelCategory, addr 0x22c7428, size 0x20, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory get_selectedLevelCategory();

  /// @brief Method get_selectedBeatmapLevelPack, addr 0x22c7448, size 0x18, virtual false, abstract: false, final false
  inline ::GlobalNamespace::IBeatmapLevelPack* get_selectedBeatmapLevelPack();

  /// @brief Method Setup, addr 0x22c7460, size 0x84, virtual false, abstract: false, final false
  inline void Setup(::GlobalNamespace::SongPackMask songPackMask, ::GlobalNamespace::BeatmapDifficultyMask allowedBeatmapDifficultyMask,
                    ::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*, ::Array<::GlobalNamespace::BeatmapCharacteristicSO*>*> notAllowedCharacteristics, bool hidePacksIfOneOrNone,
                    bool hidePracticeButton, ::StringW actionButtonText, ::GlobalNamespace::IBeatmapLevelPack* levelPackToBeSelectedAfterPresent,
                    ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory startLevelCategory, ::GlobalNamespace::IPreviewBeatmapLevel* beatmapLevelToBeSelectedAfterPresent,
                    bool enableCustomLevels);

  /// @brief Method DidActivate, addr 0x22c74e4, size 0x4c0, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x22c79a4, size 0x428, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method HandleLevelCollectionNavigationControllerDidChangeLevelDetailContent, addr 0x22c7dcc, size 0x20, virtual false, abstract: false, final false
  inline void HandleLevelCollectionNavigationControllerDidChangeLevelDetailContent(::GlobalNamespace::LevelCollectionNavigationController* viewController,
                                                                                   ::GlobalNamespace::__StandardLevelDetailViewController__ContentType contentType);

  /// @brief Method HandleLevelCollectionNavigationControllerDidPressPracticeButton, addr 0x22c7dec, size 0x20, virtual false, abstract: false, final false
  inline void HandleLevelCollectionNavigationControllerDidPressPracticeButton(::GlobalNamespace::LevelCollectionNavigationController* arg1, ::GlobalNamespace::IBeatmapLevel* beatmapLevel);

  /// @brief Method HandleLevelCollectionNavigationControllerDidPressActionButton, addr 0x22c7e0c, size 0x20, virtual false, abstract: false, final false
  inline void HandleLevelCollectionNavigationControllerDidPressActionButton(::GlobalNamespace::LevelCollectionNavigationController* viewController);

  /// @brief Method HandleLevelCollectionNavigationControllerDidSelectPack, addr 0x22c7e2c, size 0x20, virtual false, abstract: false, final false
  inline void HandleLevelCollectionNavigationControllerDidSelectPack(::GlobalNamespace::LevelCollectionNavigationController* viewController, ::GlobalNamespace::IBeatmapLevelPack* beatmapLevelPack);

  /// @brief Method HandleLevelCollectionNavigationControllerDidChangeDifficultyBeatmap, addr 0x22c7e4c, size 0x20, virtual false, abstract: false, final false
  inline void HandleLevelCollectionNavigationControllerDidChangeDifficultyBeatmap(::GlobalNamespace::LevelCollectionNavigationController* viewController,
                                                                                  ::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap);

  /// @brief Method HandleLevelCollectionNavigationControllerDidPressOpenPackButton, addr 0x22c7e6c, size 0x1c, virtual false, abstract: false, final false
  inline void HandleLevelCollectionNavigationControllerDidPressOpenPackButton(::GlobalNamespace::LevelCollectionNavigationController* viewController,
                                                                              ::GlobalNamespace::IBeatmapLevelPack* beatmapLevelPack);

  /// @brief Method RefreshDetail, addr 0x22c7e88, size 0x18, virtual false, abstract: false, final false
  inline void RefreshDetail();

  /// @brief Method ClearSelected, addr 0x22c7ea0, size 0x18, virtual false, abstract: false, final false
  inline void ClearSelected();

  /// @brief Method HandleLevelFilteringNavigationControllerDidOpenBeatmapLevelCollections, addr 0x22c7eb8, size 0x1c, virtual false, abstract: false, final false
  inline void HandleLevelFilteringNavigationControllerDidOpenBeatmapLevelCollections();

  /// @brief Method HandleLevelFilteringNavigationControllerDidCloseBeatmapLevelCollections, addr 0x22c7ed4, size 0x1c, virtual false, abstract: false, final false
  inline void HandleLevelFilteringNavigationControllerDidCloseBeatmapLevelCollections();

  /// @brief Method LevelFilteringNavigationControllerDidSelectAnnotatedBeatmapLevelCollection, addr 0x22c7ef0, size 0xe4, virtual false, abstract: false, final false
  inline void LevelFilteringNavigationControllerDidSelectAnnotatedBeatmapLevelCollection(::GlobalNamespace::LevelFilteringNavigationController* controller,
                                                                                         ::GlobalNamespace::IAnnotatedBeatmapLevelCollection* annotatedBeatmapLevelCollection,
                                                                                         ::UnityEngine::GameObject* noDataInfoPrefab, bool sortAlphabetically,
                                                                                         ::GlobalNamespace::BeatmapCharacteristicSO* preferredBeatmapCharacteristic);

  /// @brief Method LevelFilteringNavigationControllerDidStartLoading, addr 0x22c7fd4, size 0x18, virtual false, abstract: false, final false
  inline void LevelFilteringNavigationControllerDidStartLoading(::GlobalNamespace::LevelFilteringNavigationController* controller);

  /// @brief Method LevelFilteringNavigationControllerDidPressAllSongs, addr 0x22c7fec, size 0x18, virtual false, abstract: false, final false
  inline void LevelFilteringNavigationControllerDidPressAllSongs(::GlobalNamespace::LevelFilteringNavigationController* controller);

  static inline ::GlobalNamespace::LevelSelectionNavigationController* New_ctor();

  /// @brief Method .ctor, addr 0x22c8004, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "LevelSelectionNavigationController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LevelSelectionNavigationController(LevelSelectionNavigationController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LevelSelectionNavigationController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LevelSelectionNavigationController(LevelSelectionNavigationController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LevelSelectionNavigationController();

public:
  /// @brief Field _levelFilteringNavigationController, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LevelFilteringNavigationController> ____levelFilteringNavigationController;

  /// @brief Field _levelCollectionNavigationController, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LevelCollectionNavigationController> ____levelCollectionNavigationController;

  /// @brief Field _playerDataModel, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerDataModel> ____playerDataModel;

  /// @brief Field didChangeLevelDetailContentEvent, offset: 0xb0, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::GlobalNamespace::LevelSelectionNavigationController>, ::GlobalNamespace::__StandardLevelDetailViewController__ContentType>* ___didChangeLevelDetailContentEvent;

  /// @brief Field didSelectLevelPackEvent, offset: 0xb8, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::GlobalNamespace::LevelSelectionNavigationController>, ::GlobalNamespace::IBeatmapLevelPack*>* ___didSelectLevelPackEvent;

  /// @brief Field didPressActionButtonEvent, offset: 0xc0, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::GlobalNamespace::LevelSelectionNavigationController>>* ___didPressActionButtonEvent;

  /// @brief Field didPressPracticeButtonEvent, offset: 0xc8, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::GlobalNamespace::LevelSelectionNavigationController>, ::GlobalNamespace::IBeatmapLevel*>* ___didPressPracticeButtonEvent;

  /// @brief Field didChangeDifficultyBeatmapEvent, offset: 0xd0, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::GlobalNamespace::LevelSelectionNavigationController>, ::GlobalNamespace::IDifficultyBeatmap*>* ___didChangeDifficultyBeatmapEvent;

  /// @brief Field _hidePacksIfOneOrNone, offset: 0xd8, size: 0x1, def value: None
  bool ____hidePacksIfOneOrNone;

  /// @brief Field _hidePracticeButton, offset: 0xd9, size: 0x1, def value: None
  bool ____hidePracticeButton;

  /// @brief Field _actionButtonText, offset: 0xe0, size: 0x8, def value: None
  ::StringW ____actionButtonText;

  /// @brief Field _allowedBeatmapDifficultyMask, offset: 0xe8, size: 0x1, def value: None
  ::GlobalNamespace::BeatmapDifficultyMask ____allowedBeatmapDifficultyMask;

  /// @brief Field _notAllowedCharacteristics, offset: 0xf0, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::Array<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*> ____notAllowedCharacteristics;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelSelectionNavigationController, 0xf8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSelectionNavigationController, ____levelFilteringNavigationController) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSelectionNavigationController, ____levelCollectionNavigationController) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSelectionNavigationController, ____playerDataModel) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSelectionNavigationController, ___didChangeLevelDetailContentEvent) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSelectionNavigationController, ___didSelectLevelPackEvent) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSelectionNavigationController, ___didPressActionButtonEvent) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSelectionNavigationController, ___didPressPracticeButtonEvent) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSelectionNavigationController, ___didChangeDifficultyBeatmapEvent) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSelectionNavigationController, ____hidePacksIfOneOrNone) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSelectionNavigationController, ____hidePracticeButton) == 0xd9, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSelectionNavigationController, ____actionButtonText) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSelectionNavigationController, ____allowedBeatmapDifficultyMask) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSelectionNavigationController, ____notAllowedCharacteristics) == 0xf0, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LevelSelectionNavigationController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelSelectionNavigationController*, "", "LevelSelectionNavigationController");
