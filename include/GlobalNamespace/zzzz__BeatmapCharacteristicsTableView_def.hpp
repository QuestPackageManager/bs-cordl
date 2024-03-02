#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
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
namespace HMUI {
class __TableView__IDataSource;
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
// Type: ::BeatmapCharacteristicsTableView
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatmapCharacteristicsTableView*
class CORDL_TYPE BeatmapCharacteristicsTableView : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _beatmapCharacteristicCollection, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCharacteristicCollection,
                      put = __cordl_internal_set__beatmapCharacteristicCollection))::GlobalNamespace::BeatmapCharacteristicCollection* _beatmapCharacteristicCollection;

  /// @brief Field _cellPrefab, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__cellPrefab, put = __cordl_internal_set__cellPrefab))::UnityW<::GlobalNamespace::BeatmapCharacteristicTableCell> _cellPrefab;

  /// @brief Field _cellReuseIdentifier, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__cellReuseIdentifier, put = __cordl_internal_set__cellReuseIdentifier))::StringW _cellReuseIdentifier;

  /// @brief Field _cellWidth, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__cellWidth, put = __cordl_internal_set__cellWidth)) float_t _cellWidth;

  /// @brief Field _isInitialized, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get__isInitialized, put = __cordl_internal_set__isInitialized)) bool _isInitialized;

  /// @brief Field _selectedColumn, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get__selectedColumn, put = __cordl_internal_set__selectedColumn)) int32_t _selectedColumn;

  /// @brief Field _tableView, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__tableView, put = __cordl_internal_set__tableView))::UnityW<::HMUI::TableView> _tableView;

  /// @brief Field didSelectCharacteristic, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_didSelectCharacteristic,
                      put = __cordl_internal_set_didSelectCharacteristic))::System::Action_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* didSelectCharacteristic;

  /// @brief Convert operator to "::HMUI::__TableView__IDataSource"
  constexpr operator ::HMUI::__TableView__IDataSource*() noexcept;

  /// @brief Method CellForIdx, addr 0x23ddf7c, size 0x1b4, virtual true, abstract: false, final true
  inline ::UnityW<::HMUI::TableCell> CellForIdx(::HMUI::TableView* tableView, int32_t idx);

  /// @brief Method CellSize, addr 0x23ddebc, size 0x8, virtual true, abstract: false, final true
  inline float_t CellSize();

  /// @brief Method HandleAdditionalContentModelDidInvalidateData, addr 0x23de210, size 0xa8, virtual false, abstract: false, final false
  inline void HandleAdditionalContentModelDidInvalidateData();

  /// @brief Method HandleDidSelectColumnEvent, addr 0x23de130, size 0xe0, virtual false, abstract: false, final false
  inline void HandleDidSelectColumnEvent(::HMUI::TableView* tableView, int32_t column);

  /// @brief Method Init, addr 0x23ddd1c, size 0xc0, virtual false, abstract: false, final false
  inline void Init();

  static inline ::GlobalNamespace::BeatmapCharacteristicsTableView* New_ctor();

  /// @brief Method NumberOfCells, addr 0x23ddec4, size 0xb8, virtual true, abstract: false, final true
  inline int32_t NumberOfCells();

  /// @brief Method OnDestroy, addr 0x23dde30, size 0x8c, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method SelectCellWithIdx, addr 0x23de2b8, size 0x20, virtual false, abstract: false, final false
  inline void SelectCellWithIdx(int32_t idx);

  /// @brief Method SetData, addr 0x23ddddc, size 0x54, virtual false, abstract: false, final false
  inline void SetData(::GlobalNamespace::BeatmapCharacteristicCollection* beatmapCharacteristicCollection);

  constexpr ::GlobalNamespace::BeatmapCharacteristicCollection*& __cordl_internal_get__beatmapCharacteristicCollection();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCharacteristicCollection*> const& __cordl_internal_get__beatmapCharacteristicCollection() const;

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

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*& __cordl_internal_get_didSelectCharacteristic();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*> const& __cordl_internal_get_didSelectCharacteristic() const;

  constexpr void __cordl_internal_set__beatmapCharacteristicCollection(::GlobalNamespace::BeatmapCharacteristicCollection* value);

  constexpr void __cordl_internal_set__cellPrefab(::UnityW<::GlobalNamespace::BeatmapCharacteristicTableCell> value);

  constexpr void __cordl_internal_set__cellReuseIdentifier(::StringW value);

  constexpr void __cordl_internal_set__cellWidth(float_t value);

  constexpr void __cordl_internal_set__isInitialized(bool value);

  constexpr void __cordl_internal_set__selectedColumn(int32_t value);

  constexpr void __cordl_internal_set__tableView(::UnityW<::HMUI::TableView> value);

  constexpr void __cordl_internal_set_didSelectCharacteristic(::System::Action_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* value);

  /// @brief Method .ctor, addr 0x23de2d8, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didSelectCharacteristic, addr 0x23ddbbc, size 0xb0, virtual false, abstract: false, final false
  inline void add_didSelectCharacteristic(::System::Action_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* value);

  /// @brief Convert to "::HMUI::__TableView__IDataSource"
  constexpr ::HMUI::__TableView__IDataSource* i___HMUI____TableView__IDataSource() noexcept;

  /// @brief Method remove_didSelectCharacteristic, addr 0x23ddc6c, size 0xb0, virtual false, abstract: false, final false
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

  /// @brief Field _tableView, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::HMUI::TableView> ____tableView;

  /// @brief Field _cellPrefab, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapCharacteristicTableCell> ____cellPrefab;

  /// @brief Field _cellReuseIdentifier, offset: 0x28, size: 0x8, def value: None
  ::StringW ____cellReuseIdentifier;

  /// @brief Field _cellWidth, offset: 0x30, size: 0x4, def value: None
  float_t ____cellWidth;

  /// @brief Field didSelectCharacteristic, offset: 0x38, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* ___didSelectCharacteristic;

  /// @brief Field _beatmapCharacteristicCollection, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCharacteristicCollection* ____beatmapCharacteristicCollection;

  /// @brief Field _isInitialized, offset: 0x48, size: 0x1, def value: None
  bool ____isInitialized;

  /// @brief Field _selectedColumn, offset: 0x4c, size: 0x4, def value: None
  int32_t ____selectedColumn;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapCharacteristicsTableView, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCharacteristicsTableView, ____tableView) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCharacteristicsTableView, ____cellPrefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCharacteristicsTableView, ____cellReuseIdentifier) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCharacteristicsTableView, ____cellWidth) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCharacteristicsTableView, ___didSelectCharacteristic) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCharacteristicsTableView, ____beatmapCharacteristicCollection) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCharacteristicsTableView, ____isInitialized) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCharacteristicsTableView, ____selectedColumn) == 0x4c, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapCharacteristicsTableView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapCharacteristicsTableView*, "", "BeatmapCharacteristicsTableView");
