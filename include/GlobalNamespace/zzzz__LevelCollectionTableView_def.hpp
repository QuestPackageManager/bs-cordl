#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LevelCollectionTableView)
namespace GlobalNamespace {
class LevelPackHeaderTableCell;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace GlobalNamespace {
class BeatmapLevelsPromoDataSO;
}
namespace UnityEngine {
class Sprite;
}
namespace System {
template <typename T> class Action_1;
}
namespace HMUI {
class TableCell;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace GlobalNamespace {
class LevelListTableCell;
}
namespace HMUI {
class AlphabetScrollbar;
}
namespace HMUI {
class TableView;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace GlobalNamespace {
class IAdditionalContentModel;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace HMUI {
class __TableView__IDataSource;
}
namespace GlobalNamespace {
class __LevelCollectionTableView____c;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
class LevelCollectionTableView;
}
namespace GlobalNamespace {
class __LevelCollectionTableView____c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LevelCollectionTableView);
MARK_REF_PTR_T(::GlobalNamespace::__LevelCollectionTableView____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5792))
// CS Name: ::LevelCollectionTableView::<>c*
class CORDL_TYPE __LevelCollectionTableView____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__LevelCollectionTableView____c* __9;

  /// @brief Field <>9__27_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__27_0, put = setStaticF___9__27_0))::System::Func_2<::GlobalNamespace::IPreviewBeatmapLevel*, bool>* __9__27_0;

  static inline void setStaticF___9(::GlobalNamespace::__LevelCollectionTableView____c* value);

  static inline ::GlobalNamespace::__LevelCollectionTableView____c* getStaticF___9();

  static inline void setStaticF___9__27_0(::System::Func_2<::GlobalNamespace::IPreviewBeatmapLevel*, bool>* value);

  static inline ::System::Func_2<::GlobalNamespace::IPreviewBeatmapLevel*, bool>* getStaticF___9__27_0();

  static inline ::GlobalNamespace::__LevelCollectionTableView____c* New_ctor();

  /// @brief Method .ctor addr 0x22e6d28 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <SetData>b__27_0 addr 0x22e6d30 size 0xac virtual false final false
  inline bool _SetData_b__27_0(::GlobalNamespace::IPreviewBeatmapLevel* beatmapLevel);

  // Ctor Parameters [CppParam { name: "", ty: "__LevelCollectionTableView____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LevelCollectionTableView____c(__LevelCollectionTableView____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LevelCollectionTableView____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LevelCollectionTableView____c(__LevelCollectionTableView____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LevelCollectionTableView____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LevelCollectionTableView____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::LevelCollectionTableView
// SizeInfo { instance_size: 184, native_size: -1, calculated_instance_size: 184, calculated_native_size: 184, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5793))
// CS Name: ::LevelCollectionTableView*
class CORDL_TYPE LevelCollectionTableView : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using __c = ::GlobalNamespace::__LevelCollectionTableView____c;

  /// @brief Field _tableView, offset 0x18, size 0x8
  __declspec(property(get = __get__tableView, put = __set__tableView))::HMUI::TableView* _tableView;

  /// @brief Field _alphabetScrollbar, offset 0x20, size 0x8
  __declspec(property(get = __get__alphabetScrollbar, put = __set__alphabetScrollbar))::HMUI::AlphabetScrollbar* _alphabetScrollbar;

  /// @brief Field _levelCellPrefab, offset 0x28, size 0x8
  __declspec(property(get = __get__levelCellPrefab, put = __set__levelCellPrefab))::GlobalNamespace::LevelListTableCell* _levelCellPrefab;

  /// @brief Field _levelCellsReuseIdentifier, offset 0x30, size 0x8
  __declspec(property(get = __get__levelCellsReuseIdentifier, put = __set__levelCellsReuseIdentifier))::StringW _levelCellsReuseIdentifier;

  /// @brief Field _packCellPrefab, offset 0x38, size 0x8
  __declspec(property(get = __get__packCellPrefab, put = __set__packCellPrefab))::GlobalNamespace::LevelPackHeaderTableCell* _packCellPrefab;

  /// @brief Field _packCellsReuseIdentifier, offset 0x40, size 0x8
  __declspec(property(get = __get__packCellsReuseIdentifier, put = __set__packCellsReuseIdentifier))::StringW _packCellsReuseIdentifier;

  /// @brief Field _cellHeight, offset 0x48, size 0x4
  __declspec(property(get = __get__cellHeight, put = __set__cellHeight)) float_t _cellHeight;

  /// @brief Field _showAlphabetScrollbarLevelCountThreshold, offset 0x4c, size 0x4
  __declspec(property(get = __get__showAlphabetScrollbarLevelCountThreshold, put = __set__showAlphabetScrollbarLevelCountThreshold)) int32_t _showAlphabetScrollbarLevelCountThreshold;

  /// @brief Field _additionalContentModel, offset 0x50, size 0x8
  __declspec(property(get = __get__additionalContentModel, put = __set__additionalContentModel))::GlobalNamespace::IAdditionalContentModel* _additionalContentModel;

  /// @brief Field _beatmapLevelsPromoData, offset 0x58, size 0x8
  __declspec(property(get = __get__beatmapLevelsPromoData, put = __set__beatmapLevelsPromoData))::GlobalNamespace::BeatmapLevelsPromoDataSO* _beatmapLevelsPromoData;

  /// @brief Field _playerDataModel, offset 0x60, size 0x8
  __declspec(property(get = __get__playerDataModel, put = __set__playerDataModel))::GlobalNamespace::PlayerDataModel* _playerDataModel;

  /// @brief Field didSelectLevelEvent, offset 0x68, size 0x8
  __declspec(property(get = __get_didSelectLevelEvent,
                      put = __set_didSelectLevelEvent))::System::Action_2<::GlobalNamespace::LevelCollectionTableView*, ::GlobalNamespace::IPreviewBeatmapLevel*>* didSelectLevelEvent;

  /// @brief Field didSelectHeaderEvent, offset 0x70, size 0x8
  __declspec(property(get = __get_didSelectHeaderEvent, put = __set_didSelectHeaderEvent))::System::Action_1<::GlobalNamespace::LevelCollectionTableView*>* didSelectHeaderEvent;

  /// @brief Field _isInitialized, offset 0x78, size 0x1
  __declspec(property(get = __get__isInitialized, put = __set__isInitialized)) bool _isInitialized;

  /// @brief Field _previewBeatmapLevels, offset 0x80, size 0x8
  __declspec(property(get = __get__previewBeatmapLevels,
                      put = __set__previewBeatmapLevels))::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel*>* _previewBeatmapLevels;

  /// @brief Field _headerSprite, offset 0x88, size 0x8
  __declspec(property(get = __get__headerSprite, put = __set__headerSprite))::UnityEngine::Sprite* _headerSprite;

  /// @brief Field _headerText, offset 0x90, size 0x8
  __declspec(property(get = __get__headerText, put = __set__headerText))::StringW _headerText;

  /// @brief Field _showLevelPackHeader, offset 0x98, size 0x1
  __declspec(property(get = __get__showLevelPackHeader, put = __set__showLevelPackHeader)) bool _showLevelPackHeader;

  /// @brief Field _favoriteLevelIds, offset 0xa0, size 0x8
  __declspec(property(get = __get__favoriteLevelIds, put = __set__favoriteLevelIds))::System::Collections::Generic::HashSet_1<::StringW>* _favoriteLevelIds;

  /// @brief Field _selectedRow, offset 0xa8, size 0x4
  __declspec(property(get = __get__selectedRow, put = __set__selectedRow)) int32_t _selectedRow;

  /// @brief Field _selectedPreviewBeatmapLevel, offset 0xb0, size 0x8
  __declspec(property(get = __get__selectedPreviewBeatmapLevel, put = __set__selectedPreviewBeatmapLevel))::GlobalNamespace::IPreviewBeatmapLevel* _selectedPreviewBeatmapLevel;

  /// @brief Convert operator to "::HMUI::__TableView__IDataSource"
  constexpr operator ::HMUI::__TableView__IDataSource*() noexcept;

  constexpr ::HMUI::TableView*& __get__tableView();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::TableView*> const& __get__tableView() const;

  constexpr void __set__tableView(::HMUI::TableView* value);

  constexpr ::HMUI::AlphabetScrollbar*& __get__alphabetScrollbar();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::AlphabetScrollbar*> const& __get__alphabetScrollbar() const;

  constexpr void __set__alphabetScrollbar(::HMUI::AlphabetScrollbar* value);

  constexpr ::GlobalNamespace::LevelListTableCell*& __get__levelCellPrefab();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LevelListTableCell*> const& __get__levelCellPrefab() const;

  constexpr void __set__levelCellPrefab(::GlobalNamespace::LevelListTableCell* value);

  constexpr ::StringW& __get__levelCellsReuseIdentifier();

  constexpr ::StringW const& __get__levelCellsReuseIdentifier() const;

  constexpr void __set__levelCellsReuseIdentifier(::StringW value);

  constexpr ::GlobalNamespace::LevelPackHeaderTableCell*& __get__packCellPrefab();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LevelPackHeaderTableCell*> const& __get__packCellPrefab() const;

  constexpr void __set__packCellPrefab(::GlobalNamespace::LevelPackHeaderTableCell* value);

  constexpr ::StringW& __get__packCellsReuseIdentifier();

  constexpr ::StringW const& __get__packCellsReuseIdentifier() const;

  constexpr void __set__packCellsReuseIdentifier(::StringW value);

  constexpr float_t& __get__cellHeight();

  constexpr float_t const& __get__cellHeight() const;

  constexpr void __set__cellHeight(float_t value);

  constexpr int32_t& __get__showAlphabetScrollbarLevelCountThreshold();

  constexpr int32_t const& __get__showAlphabetScrollbarLevelCountThreshold() const;

  constexpr void __set__showAlphabetScrollbarLevelCountThreshold(int32_t value);

  constexpr ::GlobalNamespace::IAdditionalContentModel*& __get__additionalContentModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAdditionalContentModel*> const& __get__additionalContentModel() const;

  constexpr void __set__additionalContentModel(::GlobalNamespace::IAdditionalContentModel* value);

  constexpr ::GlobalNamespace::BeatmapLevelsPromoDataSO*& __get__beatmapLevelsPromoData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelsPromoDataSO*> const& __get__beatmapLevelsPromoData() const;

  constexpr void __set__beatmapLevelsPromoData(::GlobalNamespace::BeatmapLevelsPromoDataSO* value);

  constexpr ::GlobalNamespace::PlayerDataModel*& __get__playerDataModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerDataModel*> const& __get__playerDataModel() const;

  constexpr void __set__playerDataModel(::GlobalNamespace::PlayerDataModel* value);

  constexpr ::System::Action_2<::GlobalNamespace::LevelCollectionTableView*, ::GlobalNamespace::IPreviewBeatmapLevel*>*& __get_didSelectLevelEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::LevelCollectionTableView*, ::GlobalNamespace::IPreviewBeatmapLevel*>*> const& __get_didSelectLevelEvent() const;

  constexpr void __set_didSelectLevelEvent(::System::Action_2<::GlobalNamespace::LevelCollectionTableView*, ::GlobalNamespace::IPreviewBeatmapLevel*>* value);

  constexpr ::System::Action_1<::GlobalNamespace::LevelCollectionTableView*>*& __get_didSelectHeaderEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::LevelCollectionTableView*>*> const& __get_didSelectHeaderEvent() const;

  constexpr void __set_didSelectHeaderEvent(::System::Action_1<::GlobalNamespace::LevelCollectionTableView*>* value);

  constexpr bool& __get__isInitialized();

  constexpr bool const& __get__isInitialized() const;

  constexpr void __set__isInitialized(bool value);

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel*>*& __get__previewBeatmapLevels();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel*>*> const& __get__previewBeatmapLevels() const;

  constexpr void __set__previewBeatmapLevels(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel*>* value);

  constexpr ::UnityEngine::Sprite*& __get__headerSprite();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> const& __get__headerSprite() const;

  constexpr void __set__headerSprite(::UnityEngine::Sprite* value);

  constexpr ::StringW& __get__headerText();

  constexpr ::StringW const& __get__headerText() const;

  constexpr void __set__headerText(::StringW value);

  constexpr bool& __get__showLevelPackHeader();

  constexpr bool const& __get__showLevelPackHeader() const;

  constexpr void __set__showLevelPackHeader(bool value);

  constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& __get__favoriteLevelIds();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::StringW>*> const& __get__favoriteLevelIds() const;

  constexpr void __set__favoriteLevelIds(::System::Collections::Generic::HashSet_1<::StringW>* value);

  constexpr int32_t& __get__selectedRow();

  constexpr int32_t const& __get__selectedRow() const;

  constexpr void __set__selectedRow(int32_t value);

  constexpr ::GlobalNamespace::IPreviewBeatmapLevel*& __get__selectedPreviewBeatmapLevel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPreviewBeatmapLevel*> const& __get__selectedPreviewBeatmapLevel() const;

  constexpr void __set__selectedPreviewBeatmapLevel(::GlobalNamespace::IPreviewBeatmapLevel* value);

  /// @brief Method add_didSelectLevelEvent addr 0x22e4b7c size 0xb0 virtual false final false
  inline void add_didSelectLevelEvent(::System::Action_2<::GlobalNamespace::LevelCollectionTableView*, ::GlobalNamespace::IPreviewBeatmapLevel*>* value);

  /// @brief Method remove_didSelectLevelEvent addr 0x22e4c2c size 0xb0 virtual false final false
  inline void remove_didSelectLevelEvent(::System::Action_2<::GlobalNamespace::LevelCollectionTableView*, ::GlobalNamespace::IPreviewBeatmapLevel*>* value);

  /// @brief Method add_didSelectHeaderEvent addr 0x22e4cdc size 0xb0 virtual false final false
  inline void add_didSelectHeaderEvent(::System::Action_1<::GlobalNamespace::LevelCollectionTableView*>* value);

  /// @brief Method remove_didSelectHeaderEvent addr 0x22e4d8c size 0xb0 virtual false final false
  inline void remove_didSelectHeaderEvent(::System::Action_1<::GlobalNamespace::LevelCollectionTableView*>* value);

  /// @brief Method Init addr 0x22e4e3c size 0x40 virtual false final false
  inline void Init(::StringW headerText, ::UnityEngine::Sprite* headerSprite);

  /// @brief Method Init addr 0x22e4e7c size 0xc0 virtual false final false
  inline void Init();

  /// @brief Method SetData addr 0x22e4f3c size 0x340 virtual false final false
  inline void SetData(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel*>* previewBeatmapLevels,
                      ::System::Collections::Generic::HashSet_1<::StringW>* favoriteLevelIds, bool beatmapLevelsAreSorted, bool sortPreviewBeatmapLevels);

  /// @brief Method RefreshFavorites addr 0x22e527c size 0x10c virtual false final false
  inline void RefreshFavorites(::System::Collections::Generic::HashSet_1<::StringW>* favoriteLevelIds);

  /// @brief Method OnEnable addr 0x22e5388 size 0xec virtual false final false
  inline void OnEnable();

  /// @brief Method OnDisable addr 0x22e5474 size 0xf0 virtual false final false
  inline void OnDisable();

  /// @brief Method OnDestroy addr 0x22e5564 size 0xd4 virtual false final false
  inline void OnDestroy();

  /// @brief Method CellSize addr 0x22e5638 size 0x8 virtual true final true
  inline float_t CellSize();

  /// @brief Method NumberOfCells addr 0x22e5640 size 0xb0 virtual true final true
  inline int32_t NumberOfCells();

  /// @brief Method CellForIdx addr 0x22e56f0 size 0x3f8 virtual true final true
  inline ::HMUI::TableCell* CellForIdx(::HMUI::TableView* tableView, int32_t row);

  /// @brief Method HandleDidSelectRowEvent addr 0x22e5ed8 size 0x114 virtual false final false
  inline void HandleDidSelectRowEvent(::HMUI::TableView* tableView, int32_t row);

  /// @brief Method HandleAdditionalContentModelDidInvalidateData addr 0x22e5fec size 0xa4 virtual false final false
  inline void HandleAdditionalContentModelDidInvalidateData();

  /// @brief Method CancelAsyncOperations addr 0x22e6090 size 0x37c virtual false final false
  inline void CancelAsyncOperations();

  /// @brief Method RefreshLevelsAvailability addr 0x22e640c size 0x548 virtual false final false
  inline void RefreshLevelsAvailability();

  /// @brief Method SelectLevelPackHeaderCell addr 0x22e6954 size 0x2c virtual false final false
  inline void SelectLevelPackHeaderCell();

  /// @brief Method ClearSelection addr 0x22e6980 size 0x30 virtual false final false
  inline void ClearSelection();

  /// @brief Method SelectLevel addr 0x22e69b0 size 0x288 virtual false final false
  inline void SelectLevel(::GlobalNamespace::IPreviewBeatmapLevel* beatmapLevel);

  static inline ::GlobalNamespace::LevelCollectionTableView* New_ctor();

  /// @brief Method .ctor addr 0x22e6c38 size 0x8c virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "LevelCollectionTableView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LevelCollectionTableView(LevelCollectionTableView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LevelCollectionTableView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LevelCollectionTableView(LevelCollectionTableView const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LevelCollectionTableView();

public:
  /// @brief Field _tableView, offset: 0x18, size: 0x8, def value: None
  ::HMUI::TableView* ____tableView;

  /// @brief Field _alphabetScrollbar, offset: 0x20, size: 0x8, def value: None
  ::HMUI::AlphabetScrollbar* ____alphabetScrollbar;

  /// @brief Field _levelCellPrefab, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::LevelListTableCell* ____levelCellPrefab;

  /// @brief Field _levelCellsReuseIdentifier, offset: 0x30, size: 0x8, def value: None
  ::StringW ____levelCellsReuseIdentifier;

  /// @brief Field _packCellPrefab, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::LevelPackHeaderTableCell* ____packCellPrefab;

  /// @brief Field _packCellsReuseIdentifier, offset: 0x40, size: 0x8, def value: None
  ::StringW ____packCellsReuseIdentifier;

  /// @brief Field _cellHeight, offset: 0x48, size: 0x4, def value: None
  float_t ____cellHeight;

  /// @brief Field _showAlphabetScrollbarLevelCountThreshold, offset: 0x4c, size: 0x4, def value: None
  int32_t ____showAlphabetScrollbarLevelCountThreshold;

  /// @brief Field _additionalContentModel, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::IAdditionalContentModel* ____additionalContentModel;

  /// @brief Field _beatmapLevelsPromoData, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsPromoDataSO* ____beatmapLevelsPromoData;

  /// @brief Field _playerDataModel, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::PlayerDataModel* ____playerDataModel;

  /// @brief Field didSelectLevelEvent, offset: 0x68, size: 0x8, def value: None
  ::System::Action_2<::GlobalNamespace::LevelCollectionTableView*, ::GlobalNamespace::IPreviewBeatmapLevel*>* ___didSelectLevelEvent;

  /// @brief Field didSelectHeaderEvent, offset: 0x70, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::LevelCollectionTableView*>* ___didSelectHeaderEvent;

  /// @brief Field _isInitialized, offset: 0x78, size: 0x1, def value: None
  bool ____isInitialized;

  /// @brief Field _previewBeatmapLevels, offset: 0x80, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel*>* ____previewBeatmapLevels;

  /// @brief Field _headerSprite, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::Sprite* ____headerSprite;

  /// @brief Field _headerText, offset: 0x90, size: 0x8, def value: None
  ::StringW ____headerText;

  /// @brief Field _showLevelPackHeader, offset: 0x98, size: 0x1, def value: None
  bool ____showLevelPackHeader;

  /// @brief Field _favoriteLevelIds, offset: 0xa0, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::StringW>* ____favoriteLevelIds;

  /// @brief Field _selectedRow, offset: 0xa8, size: 0x4, def value: None
  int32_t ____selectedRow;

  /// @brief Field _selectedPreviewBeatmapLevel, offset: 0xb0, size: 0x8, def value: None
  ::GlobalNamespace::IPreviewBeatmapLevel* ____selectedPreviewBeatmapLevel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelCollectionTableView, 0xb8>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LevelCollectionTableView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelCollectionTableView*, "", "LevelCollectionTableView");
NEED_NO_BOX(::GlobalNamespace::__LevelCollectionTableView____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LevelCollectionTableView____c*, "", "LevelCollectionTableView/<>c");
