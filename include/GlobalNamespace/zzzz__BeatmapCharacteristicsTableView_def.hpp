#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapCharacteristicsTableView.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__TableView_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapCharacteristicsTableView)
namespace GlobalNamespace {
class BeatmapCharacteristicCollection;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
class BeatmapCharacteristicTableCell;
}
namespace HMUI {
class TableCell;
}
namespace HMUI {
class TableView;
}
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapCharacteristicsTableView;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapCharacteristicsTableView);
// Dependencies HMUI.TableView::IDataSource, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapCharacteristicsTableView
class CORDL_TYPE BeatmapCharacteristicsTableView : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _beatmapCharacteristicCollection, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCharacteristicCollection,
                      put = __cordl_internal_set__beatmapCharacteristicCollection)) ::GlobalNamespace::BeatmapCharacteristicCollection* _beatmapCharacteristicCollection;

  /// @brief Field _cellPrefab, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__cellPrefab, put = __cordl_internal_set__cellPrefab)) ::UnityW<::GlobalNamespace::BeatmapCharacteristicTableCell> _cellPrefab;

  /// @brief Field _cellReuseIdentifier, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__cellReuseIdentifier, put = __cordl_internal_set__cellReuseIdentifier)) ::StringW _cellReuseIdentifier;

  /// @brief Field _cellWidth, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__cellWidth, put = __cordl_internal_set__cellWidth)) float_t _cellWidth;

  /// @brief Field _isInitialized, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get__isInitialized, put = __cordl_internal_set__isInitialized)) bool _isInitialized;

  /// @brief Field _selectedColumn, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get__selectedColumn, put = __cordl_internal_set__selectedColumn)) int32_t _selectedColumn;

  /// @brief Field _tableView, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__tableView, put = __cordl_internal_set__tableView)) ::UnityW<::HMUI::TableView> _tableView;

  /// @brief Field didSelectCharacteristic, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_didSelectCharacteristic,
                      put = __cordl_internal_set_didSelectCharacteristic)) ::System::Action_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* didSelectCharacteristic;

  /// @brief Convert operator to "::HMUI::TableView_IDataSource"
  constexpr operator ::HMUI::TableView_IDataSource*() noexcept;

  /// @brief Method CellForIdx, addr 0x3afece0, size 0x1b4, virtual true, abstract: false, final true
  inline ::UnityW<::HMUI::TableCell> CellForIdx(::HMUI::TableView* tableView, int32_t idx);

  /// @brief Method CellSize, addr 0x3afec20, size 0x8, virtual true, abstract: false, final true
  inline float_t CellSize(int32_t idx);

  /// @brief Method HandleAdditionalContentModelDidInvalidateData, addr 0x3afef74, size 0xac, virtual false, abstract: false, final false
  inline void HandleAdditionalContentModelDidInvalidateData();

  /// @brief Method HandleDidSelectColumnEvent, addr 0x3afee94, size 0xe0, virtual false, abstract: false, final false
  inline void HandleDidSelectColumnEvent(::HMUI::TableView* tableView, int32_t column);

  /// @brief Method Init, addr 0x3afea74, size 0xc4, virtual false, abstract: false, final false
  inline void Init();

  static inline ::GlobalNamespace::BeatmapCharacteristicsTableView* New_ctor();

  /// @brief Method NumberOfCells, addr 0x3afec28, size 0xb8, virtual true, abstract: false, final true
  inline int32_t NumberOfCells();

  /// @brief Method OnDestroy, addr 0x3afeb90, size 0x90, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method SelectCellWithIdx, addr 0x3aff020, size 0x20, virtual false, abstract: false, final false
  inline void SelectCellWithIdx(int32_t idx);

  /// @brief Method SetData, addr 0x3afeb38, size 0x58, virtual false, abstract: false, final false
  inline void SetData(::GlobalNamespace::BeatmapCharacteristicCollection* beatmapCharacteristicCollection);

  constexpr ::GlobalNamespace::BeatmapCharacteristicCollection* const& __cordl_internal_get__beatmapCharacteristicCollection() const;

  constexpr ::GlobalNamespace::BeatmapCharacteristicCollection*& __cordl_internal_get__beatmapCharacteristicCollection();

  constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicTableCell> const& __cordl_internal_get__cellPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicTableCell>& __cordl_internal_get__cellPrefab();

  constexpr ::StringW const& __cordl_internal_get__cellReuseIdentifier() const;

  constexpr ::StringW& __cordl_internal_get__cellReuseIdentifier();

  constexpr float_t const& __cordl_internal_get__cellWidth() const;

  constexpr float_t& __cordl_internal_get__cellWidth();

  constexpr bool const& __cordl_internal_get__isInitialized() const;

  constexpr bool& __cordl_internal_get__isInitialized();

  constexpr int32_t const& __cordl_internal_get__selectedColumn() const;

  constexpr int32_t& __cordl_internal_get__selectedColumn();

  constexpr ::UnityW<::HMUI::TableView> const& __cordl_internal_get__tableView() const;

  constexpr ::UnityW<::HMUI::TableView>& __cordl_internal_get__tableView();

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* const& __cordl_internal_get_didSelectCharacteristic() const;

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*& __cordl_internal_get_didSelectCharacteristic();

  constexpr void __cordl_internal_set__beatmapCharacteristicCollection(::GlobalNamespace::BeatmapCharacteristicCollection* value);

  constexpr void __cordl_internal_set__cellPrefab(::UnityW<::GlobalNamespace::BeatmapCharacteristicTableCell> value);

  constexpr void __cordl_internal_set__cellReuseIdentifier(::StringW value);

  constexpr void __cordl_internal_set__cellWidth(float_t value);

  constexpr void __cordl_internal_set__isInitialized(bool value);

  constexpr void __cordl_internal_set__selectedColumn(int32_t value);

  constexpr void __cordl_internal_set__tableView(::UnityW<::HMUI::TableView> value);

  constexpr void __cordl_internal_set_didSelectCharacteristic(::System::Action_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* value);

  /// @brief Method .ctor, addr 0x3aff040, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didSelectCharacteristic, addr 0x3afe914, size 0xb0, virtual false, abstract: false, final false
  inline void add_didSelectCharacteristic(::System::Action_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* value);

  /// @brief Convert to "::HMUI::TableView_IDataSource"
  constexpr ::HMUI::TableView_IDataSource* i___HMUI__TableView_IDataSource() noexcept;

  /// @brief Method remove_didSelectCharacteristic, addr 0x3afe9c4, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didSelectCharacteristic(::System::Action_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapCharacteristicsTableView();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapCharacteristicsTableView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapCharacteristicsTableView(BeatmapCharacteristicsTableView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapCharacteristicsTableView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapCharacteristicsTableView(BeatmapCharacteristicsTableView const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4969 };

  /// @brief Field _tableView, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::HMUI::TableView> ____tableView;

  /// @brief Field _cellPrefab, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapCharacteristicTableCell> ____cellPrefab;

  /// @brief Field _cellReuseIdentifier, offset: 0x30, size: 0x8, def value: None
  ::StringW ____cellReuseIdentifier;

  /// @brief Field _cellWidth, offset: 0x38, size: 0x4, def value: None
  float_t ____cellWidth;

  /// @brief Field didSelectCharacteristic, offset: 0x40, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* ___didSelectCharacteristic;

  /// @brief Field _beatmapCharacteristicCollection, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCharacteristicCollection* ____beatmapCharacteristicCollection;

  /// @brief Field _isInitialized, offset: 0x50, size: 0x1, def value: None
  bool ____isInitialized;

  /// @brief Field _selectedColumn, offset: 0x54, size: 0x4, def value: None
  int32_t ____selectedColumn;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapCharacteristicsTableView, ____tableView) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCharacteristicsTableView, ____cellPrefab) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCharacteristicsTableView, ____cellReuseIdentifier) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCharacteristicsTableView, ____cellWidth) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCharacteristicsTableView, ___didSelectCharacteristic) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCharacteristicsTableView, ____beatmapCharacteristicCollection) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCharacteristicsTableView, ____isInitialized) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCharacteristicsTableView, ____selectedColumn) == 0x54, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapCharacteristicsTableView, 0x58>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapCharacteristicsTableView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapCharacteristicsTableView*, "", "BeatmapCharacteristicsTableView");
