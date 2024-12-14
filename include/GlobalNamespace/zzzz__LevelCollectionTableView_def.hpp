#pragma once
// IWYU pragma private; include "GlobalNamespace/LevelCollectionTableView.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__TableView_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LevelCollectionTableView)
namespace GlobalNamespace {
class BeatmapLevel;
}
namespace GlobalNamespace {
class BeatmapLevelsPromoModel;
}
namespace GlobalNamespace {
class IAdditionalContentModel;
}
namespace GlobalNamespace {
class IEntitlementModel;
}
namespace GlobalNamespace {
class LevelListTableCell;
}
namespace GlobalNamespace {
class LevelPackHeaderTableCell;
}
namespace HMUI {
class AlphabetScrollbar;
}
namespace HMUI {
class TableCell;
}
namespace HMUI {
class TableView;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace GlobalNamespace {
class LevelCollectionTableView;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LevelCollectionTableView);
// Dependencies HMUI.TableView::IDataSource, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: LevelCollectionTableView
class CORDL_TYPE LevelCollectionTableView : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _additionalContentModel, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__additionalContentModel, put = __cordl_internal_set__additionalContentModel)) ::GlobalNamespace::IAdditionalContentModel* _additionalContentModel;

  /// @brief Field _alphabetScrollbar, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__alphabetScrollbar, put = __cordl_internal_set__alphabetScrollbar)) ::UnityW<::HMUI::AlphabetScrollbar> _alphabetScrollbar;

  /// @brief Field _beatmapLevels, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevels,
                      put = __cordl_internal_set__beatmapLevels)) ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevel*>* _beatmapLevels;

  /// @brief Field _beatmapLevelsPromoModel, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelsPromoModel, put = __cordl_internal_set__beatmapLevelsPromoModel)) ::GlobalNamespace::BeatmapLevelsPromoModel* _beatmapLevelsPromoModel;

  /// @brief Field _cellHeight, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__cellHeight, put = __cordl_internal_set__cellHeight)) float_t _cellHeight;

  /// @brief Field _entitlementModel, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__entitlementModel, put = __cordl_internal_set__entitlementModel)) ::GlobalNamespace::IEntitlementModel* _entitlementModel;

  /// @brief Field _favoriteLevelIds, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__favoriteLevelIds, put = __cordl_internal_set__favoriteLevelIds)) ::System::Collections::Generic::HashSet_1<::StringW>* _favoriteLevelIds;

  /// @brief Field _headerSprite, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__headerSprite, put = __cordl_internal_set__headerSprite)) ::UnityW<::UnityEngine::Sprite> _headerSprite;

  /// @brief Field _headerText, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__headerText, put = __cordl_internal_set__headerText)) ::StringW _headerText;

  /// @brief Field _isInitialized, offset 0x80, size 0x1
  __declspec(property(get = __cordl_internal_get__isInitialized, put = __cordl_internal_set__isInitialized)) bool _isInitialized;

  /// @brief Field _levelCellPrefab, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__levelCellPrefab, put = __cordl_internal_set__levelCellPrefab)) ::UnityW<::GlobalNamespace::LevelListTableCell> _levelCellPrefab;

  /// @brief Field _levelCellsReuseIdentifier, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__levelCellsReuseIdentifier, put = __cordl_internal_set__levelCellsReuseIdentifier)) ::StringW _levelCellsReuseIdentifier;

  /// @brief Field _packCellPrefab, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__packCellPrefab, put = __cordl_internal_set__packCellPrefab)) ::UnityW<::GlobalNamespace::LevelPackHeaderTableCell> _packCellPrefab;

  /// @brief Field _packCellsReuseIdentifier, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__packCellsReuseIdentifier, put = __cordl_internal_set__packCellsReuseIdentifier)) ::StringW _packCellsReuseIdentifier;

  /// @brief Field _selectedBeatmapLevel, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__selectedBeatmapLevel, put = __cordl_internal_set__selectedBeatmapLevel)) ::GlobalNamespace::BeatmapLevel* _selectedBeatmapLevel;

  /// @brief Field _selectedRow, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get__selectedRow, put = __cordl_internal_set__selectedRow)) int32_t _selectedRow;

  /// @brief Field _showLevelPackHeader, offset 0xb0, size 0x1
  __declspec(property(get = __cordl_internal_get__showLevelPackHeader, put = __cordl_internal_set__showLevelPackHeader)) bool _showLevelPackHeader;

  /// @brief Field _tableView, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__tableView, put = __cordl_internal_set__tableView)) ::UnityW<::HMUI::TableView> _tableView;

  /// @brief Field didSelectHeaderEvent, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_didSelectHeaderEvent,
                      put = __cordl_internal_set_didSelectHeaderEvent)) ::System::Action_1<::UnityW<::GlobalNamespace::LevelCollectionTableView>>* didSelectHeaderEvent;

  /// @brief Field didSelectLevelEvent, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_didSelectLevelEvent,
                      put = __cordl_internal_set_didSelectLevelEvent)) ::System::Action_2<::UnityW<::GlobalNamespace::LevelCollectionTableView>, ::GlobalNamespace::BeatmapLevel*>* didSelectLevelEvent;

  /// @brief Convert operator to "::HMUI::TableView_IDataSource"
  constexpr operator ::HMUI::TableView_IDataSource*() noexcept;

  /// @brief Method CancelAsyncOperations, addr 0x3b0363c, size 0x378, virtual false, abstract: false, final false
  inline void CancelAsyncOperations();

  /// @brief Method CellForIdx, addr 0x3b03134, size 0x32c, virtual true, abstract: false, final true
  inline ::UnityW<::HMUI::TableCell> CellForIdx(::HMUI::TableView* tableView, int32_t index);

  /// @brief Method CellSize, addr 0x3b02fcc, size 0xb8, virtual true, abstract: false, final true
  inline float_t CellSize(int32_t idx);

  /// @brief Method ClearSelection, addr 0x3b03eb0, size 0x30, virtual false, abstract: false, final false
  inline void ClearSelection();

  /// @brief Method HandleAdditionalContentModelDidInvalidateData, addr 0x3b03598, size 0xa4, virtual false, abstract: false, final false
  inline void HandleAdditionalContentModelDidInvalidateData();

  /// @brief Method HandleDidSelectCellWithIndex, addr 0x3b03484, size 0x114, virtual false, abstract: false, final false
  inline void HandleDidSelectCellWithIndex(::HMUI::TableView* tableView, int32_t index);

  /// @brief Method Init, addr 0x3b029a4, size 0xc4, virtual false, abstract: false, final false
  inline void Init();

  /// @brief Method Init, addr 0x3b02964, size 0x40, virtual false, abstract: false, final false
  inline void Init(::StringW headerText, ::UnityEngine::Sprite* headerSprite);

  static inline ::GlobalNamespace::LevelCollectionTableView* New_ctor();

  /// @brief Method NumberOfCells, addr 0x3b03084, size 0xb0, virtual true, abstract: false, final true
  inline int32_t NumberOfCells();

  /// @brief Method OnDestroy, addr 0x3b02efc, size 0xd0, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnDisable, addr 0x3b02e08, size 0xf4, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x3b02d18, size 0xf0, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method RefreshFavorites, addr 0x3b02c0c, size 0x10c, virtual false, abstract: false, final false
  inline void RefreshFavorites(::System::Collections::Generic::HashSet_1<::StringW>* favoriteLevelIds);

  /// @brief Method RefreshLevelsAvailability, addr 0x3b039d8, size 0x4ac, virtual false, abstract: false, final false
  inline void RefreshLevelsAvailability();

  /// @brief Method ReloadCellsData, addr 0x3b039b4, size 0x24, virtual false, abstract: false, final false
  inline void ReloadCellsData();

  /// @brief Method SelectLevel, addr 0x3b03ee0, size 0x1bc, virtual false, abstract: false, final false
  inline void SelectLevel(::GlobalNamespace::BeatmapLevel* beatmapLevel);

  /// @brief Method SelectLevelPackHeaderCell, addr 0x3b03e84, size 0x2c, virtual false, abstract: false, final false
  inline void SelectLevelPackHeaderCell();

  /// @brief Method SetData, addr 0x3b02a68, size 0x1a4, virtual false, abstract: false, final false
  inline void SetData(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevel*>* beatmapLevels, ::System::Collections::Generic::HashSet_1<::StringW>* favoriteLevelIds,
                      bool beatmapLevelsAreSorted, bool sortBeatmapLevels);

  /// @brief Method UpdateScrollviewContentSize, addr 0x3b03460, size 0x24, virtual false, abstract: false, final false
  inline void UpdateScrollviewContentSize();

  constexpr ::GlobalNamespace::IAdditionalContentModel* const& __cordl_internal_get__additionalContentModel() const;

  constexpr ::GlobalNamespace::IAdditionalContentModel*& __cordl_internal_get__additionalContentModel();

  constexpr ::UnityW<::HMUI::AlphabetScrollbar> const& __cordl_internal_get__alphabetScrollbar() const;

  constexpr ::UnityW<::HMUI::AlphabetScrollbar>& __cordl_internal_get__alphabetScrollbar();

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevel*>* const& __cordl_internal_get__beatmapLevels() const;

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevel*>*& __cordl_internal_get__beatmapLevels();

  constexpr ::GlobalNamespace::BeatmapLevelsPromoModel* const& __cordl_internal_get__beatmapLevelsPromoModel() const;

  constexpr ::GlobalNamespace::BeatmapLevelsPromoModel*& __cordl_internal_get__beatmapLevelsPromoModel();

  constexpr float_t const& __cordl_internal_get__cellHeight() const;

  constexpr float_t& __cordl_internal_get__cellHeight();

  constexpr ::GlobalNamespace::IEntitlementModel* const& __cordl_internal_get__entitlementModel() const;

  constexpr ::GlobalNamespace::IEntitlementModel*& __cordl_internal_get__entitlementModel();

  constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& __cordl_internal_get__favoriteLevelIds() const;

  constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& __cordl_internal_get__favoriteLevelIds();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__headerSprite() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__headerSprite();

  constexpr ::StringW const& __cordl_internal_get__headerText() const;

  constexpr ::StringW& __cordl_internal_get__headerText();

  constexpr bool const& __cordl_internal_get__isInitialized() const;

  constexpr bool& __cordl_internal_get__isInitialized();

  constexpr ::UnityW<::GlobalNamespace::LevelListTableCell> const& __cordl_internal_get__levelCellPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::LevelListTableCell>& __cordl_internal_get__levelCellPrefab();

  constexpr ::StringW const& __cordl_internal_get__levelCellsReuseIdentifier() const;

  constexpr ::StringW& __cordl_internal_get__levelCellsReuseIdentifier();

  constexpr ::UnityW<::GlobalNamespace::LevelPackHeaderTableCell> const& __cordl_internal_get__packCellPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::LevelPackHeaderTableCell>& __cordl_internal_get__packCellPrefab();

  constexpr ::StringW const& __cordl_internal_get__packCellsReuseIdentifier() const;

  constexpr ::StringW& __cordl_internal_get__packCellsReuseIdentifier();

  constexpr ::GlobalNamespace::BeatmapLevel* const& __cordl_internal_get__selectedBeatmapLevel() const;

  constexpr ::GlobalNamespace::BeatmapLevel*& __cordl_internal_get__selectedBeatmapLevel();

  constexpr int32_t const& __cordl_internal_get__selectedRow() const;

  constexpr int32_t& __cordl_internal_get__selectedRow();

  constexpr bool const& __cordl_internal_get__showLevelPackHeader() const;

  constexpr bool& __cordl_internal_get__showLevelPackHeader();

  constexpr ::UnityW<::HMUI::TableView> const& __cordl_internal_get__tableView() const;

  constexpr ::UnityW<::HMUI::TableView>& __cordl_internal_get__tableView();

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::LevelCollectionTableView>>* const& __cordl_internal_get_didSelectHeaderEvent() const;

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::LevelCollectionTableView>>*& __cordl_internal_get_didSelectHeaderEvent();

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::LevelCollectionTableView>, ::GlobalNamespace::BeatmapLevel*>* const& __cordl_internal_get_didSelectLevelEvent() const;

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::LevelCollectionTableView>, ::GlobalNamespace::BeatmapLevel*>*& __cordl_internal_get_didSelectLevelEvent();

  constexpr void __cordl_internal_set__additionalContentModel(::GlobalNamespace::IAdditionalContentModel* value);

  constexpr void __cordl_internal_set__alphabetScrollbar(::UnityW<::HMUI::AlphabetScrollbar> value);

  constexpr void __cordl_internal_set__beatmapLevels(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevel*>* value);

  constexpr void __cordl_internal_set__beatmapLevelsPromoModel(::GlobalNamespace::BeatmapLevelsPromoModel* value);

  constexpr void __cordl_internal_set__cellHeight(float_t value);

  constexpr void __cordl_internal_set__entitlementModel(::GlobalNamespace::IEntitlementModel* value);

  constexpr void __cordl_internal_set__favoriteLevelIds(::System::Collections::Generic::HashSet_1<::StringW>* value);

  constexpr void __cordl_internal_set__headerSprite(::UnityW<::UnityEngine::Sprite> value);

  constexpr void __cordl_internal_set__headerText(::StringW value);

  constexpr void __cordl_internal_set__isInitialized(bool value);

  constexpr void __cordl_internal_set__levelCellPrefab(::UnityW<::GlobalNamespace::LevelListTableCell> value);

  constexpr void __cordl_internal_set__levelCellsReuseIdentifier(::StringW value);

  constexpr void __cordl_internal_set__packCellPrefab(::UnityW<::GlobalNamespace::LevelPackHeaderTableCell> value);

  constexpr void __cordl_internal_set__packCellsReuseIdentifier(::StringW value);

  constexpr void __cordl_internal_set__selectedBeatmapLevel(::GlobalNamespace::BeatmapLevel* value);

  constexpr void __cordl_internal_set__selectedRow(int32_t value);

  constexpr void __cordl_internal_set__showLevelPackHeader(bool value);

  constexpr void __cordl_internal_set__tableView(::UnityW<::HMUI::TableView> value);

  constexpr void __cordl_internal_set_didSelectHeaderEvent(::System::Action_1<::UnityW<::GlobalNamespace::LevelCollectionTableView>>* value);

  constexpr void __cordl_internal_set_didSelectLevelEvent(::System::Action_2<::UnityW<::GlobalNamespace::LevelCollectionTableView>, ::GlobalNamespace::BeatmapLevel*>* value);

  /// @brief Method .ctor, addr 0x3b0409c, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didSelectHeaderEvent, addr 0x3b02804, size 0xb0, virtual false, abstract: false, final false
  inline void add_didSelectHeaderEvent(::System::Action_1<::UnityW<::GlobalNamespace::LevelCollectionTableView>>* value);

  /// @brief Method add_didSelectLevelEvent, addr 0x3b026a4, size 0xb0, virtual false, abstract: false, final false
  inline void add_didSelectLevelEvent(::System::Action_2<::UnityW<::GlobalNamespace::LevelCollectionTableView>, ::GlobalNamespace::BeatmapLevel*>* value);

  /// @brief Convert to "::HMUI::TableView_IDataSource"
  constexpr ::HMUI::TableView_IDataSource* i___HMUI__TableView_IDataSource() noexcept;

  /// @brief Method remove_didSelectHeaderEvent, addr 0x3b028b4, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didSelectHeaderEvent(::System::Action_1<::UnityW<::GlobalNamespace::LevelCollectionTableView>>* value);

  /// @brief Method remove_didSelectLevelEvent, addr 0x3b02754, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didSelectLevelEvent(::System::Action_2<::UnityW<::GlobalNamespace::LevelCollectionTableView>, ::GlobalNamespace::BeatmapLevel*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LevelCollectionTableView();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LevelCollectionTableView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LevelCollectionTableView(LevelCollectionTableView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LevelCollectionTableView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LevelCollectionTableView(LevelCollectionTableView const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4986 };

  /// @brief Field _tableView, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::HMUI::TableView> ____tableView;

  /// @brief Field _alphabetScrollbar, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::HMUI::AlphabetScrollbar> ____alphabetScrollbar;

  /// @brief Field _levelCellPrefab, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LevelListTableCell> ____levelCellPrefab;

  /// @brief Field _levelCellsReuseIdentifier, offset: 0x38, size: 0x8, def value: None
  ::StringW ____levelCellsReuseIdentifier;

  /// @brief Field _packCellPrefab, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LevelPackHeaderTableCell> ____packCellPrefab;

  /// @brief Field _packCellsReuseIdentifier, offset: 0x48, size: 0x8, def value: None
  ::StringW ____packCellsReuseIdentifier;

  /// @brief Field _cellHeight, offset: 0x50, size: 0x4, def value: None
  float_t ____cellHeight;

  /// @brief Field _additionalContentModel, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::IAdditionalContentModel* ____additionalContentModel;

  /// @brief Field _entitlementModel, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::IEntitlementModel* ____entitlementModel;

  /// @brief Field _beatmapLevelsPromoModel, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsPromoModel* ____beatmapLevelsPromoModel;

  /// @brief Field didSelectLevelEvent, offset: 0x70, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::GlobalNamespace::LevelCollectionTableView>, ::GlobalNamespace::BeatmapLevel*>* ___didSelectLevelEvent;

  /// @brief Field didSelectHeaderEvent, offset: 0x78, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::GlobalNamespace::LevelCollectionTableView>>* ___didSelectHeaderEvent;

  /// @brief Field _isInitialized, offset: 0x80, size: 0x1, def value: None
  bool ____isInitialized;

  /// @brief Field _beatmapLevels, offset: 0x88, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevel*>* ____beatmapLevels;

  /// @brief Field _selectedRow, offset: 0x90, size: 0x4, def value: None
  int32_t ____selectedRow;

  /// @brief Field _selectedBeatmapLevel, offset: 0x98, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevel* ____selectedBeatmapLevel;

  /// @brief Field _headerSprite, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ____headerSprite;

  /// @brief Field _headerText, offset: 0xa8, size: 0x8, def value: None
  ::StringW ____headerText;

  /// @brief Field _showLevelPackHeader, offset: 0xb0, size: 0x1, def value: None
  bool ____showLevelPackHeader;

  /// @brief Field _favoriteLevelIds, offset: 0xb8, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::StringW>* ____favoriteLevelIds;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LevelCollectionTableView, ____tableView) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCollectionTableView, ____alphabetScrollbar) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCollectionTableView, ____levelCellPrefab) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCollectionTableView, ____levelCellsReuseIdentifier) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCollectionTableView, ____packCellPrefab) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCollectionTableView, ____packCellsReuseIdentifier) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCollectionTableView, ____cellHeight) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCollectionTableView, ____additionalContentModel) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCollectionTableView, ____entitlementModel) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCollectionTableView, ____beatmapLevelsPromoModel) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCollectionTableView, ___didSelectLevelEvent) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCollectionTableView, ___didSelectHeaderEvent) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCollectionTableView, ____isInitialized) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCollectionTableView, ____beatmapLevels) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCollectionTableView, ____selectedRow) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCollectionTableView, ____selectedBeatmapLevel) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCollectionTableView, ____headerSprite) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCollectionTableView, ____headerText) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCollectionTableView, ____showLevelPackHeader) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCollectionTableView, ____favoriteLevelIds) == 0xb8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelCollectionTableView, 0xc0>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LevelCollectionTableView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelCollectionTableView*, "", "LevelCollectionTableView");
