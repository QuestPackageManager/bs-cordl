#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapCharacteristicsTableView)
namespace HMUI {
class TableCell;
}
namespace GlobalNamespace {
class BeatmapCharacteristicCollection;
}
namespace GlobalNamespace {
class BeatmapCharacteristicTableCell;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace HMUI {
class __TableView__IDataSource;
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
// Type: ::BeatmapCharacteristicsTableView
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5771))
// CS Name: ::BeatmapCharacteristicsTableView*
class CORDL_TYPE BeatmapCharacteristicsTableView : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _tableView, offset 0x18, size 0x8
  __declspec(property(get = __get__tableView, put = __set__tableView))::HMUI::TableView* _tableView;

  /// @brief Field _cellPrefab, offset 0x20, size 0x8
  __declspec(property(get = __get__cellPrefab, put = __set__cellPrefab))::GlobalNamespace::BeatmapCharacteristicTableCell* _cellPrefab;

  /// @brief Field _cellReuseIdentifier, offset 0x28, size 0x8
  __declspec(property(get = __get__cellReuseIdentifier, put = __set__cellReuseIdentifier))::StringW _cellReuseIdentifier;

  /// @brief Field _cellWidth, offset 0x30, size 0x4
  __declspec(property(get = __get__cellWidth, put = __set__cellWidth)) float_t _cellWidth;

  /// @brief Field didSelectCharacteristic, offset 0x38, size 0x8
  __declspec(property(get = __get_didSelectCharacteristic, put = __set_didSelectCharacteristic))::System::Action_1<::GlobalNamespace::BeatmapCharacteristicSO*>* didSelectCharacteristic;

  /// @brief Field _beatmapCharacteristicCollection, offset 0x40, size 0x8
  __declspec(property(get = __get__beatmapCharacteristicCollection, put = __set__beatmapCharacteristicCollection))::GlobalNamespace::BeatmapCharacteristicCollection* _beatmapCharacteristicCollection;

  /// @brief Field _isInitialized, offset 0x48, size 0x1
  __declspec(property(get = __get__isInitialized, put = __set__isInitialized)) bool _isInitialized;

  /// @brief Field _selectedColumn, offset 0x4c, size 0x4
  __declspec(property(get = __get__selectedColumn, put = __set__selectedColumn)) int32_t _selectedColumn;

  /// @brief Convert operator to "::HMUI::__TableView__IDataSource"
  constexpr operator ::HMUI::__TableView__IDataSource*() noexcept;

  constexpr ::HMUI::TableView*& __get__tableView();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::TableView*> const& __get__tableView() const;

  constexpr void __set__tableView(::HMUI::TableView* value);

  constexpr ::GlobalNamespace::BeatmapCharacteristicTableCell*& __get__cellPrefab();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCharacteristicTableCell*> const& __get__cellPrefab() const;

  constexpr void __set__cellPrefab(::GlobalNamespace::BeatmapCharacteristicTableCell* value);

  constexpr ::StringW& __get__cellReuseIdentifier();

  constexpr ::StringW const& __get__cellReuseIdentifier() const;

  constexpr void __set__cellReuseIdentifier(::StringW value);

  constexpr float_t& __get__cellWidth();

  constexpr float_t const& __get__cellWidth() const;

  constexpr void __set__cellWidth(float_t value);

  constexpr ::System::Action_1<::GlobalNamespace::BeatmapCharacteristicSO*>*& __get_didSelectCharacteristic();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::BeatmapCharacteristicSO*>*> const& __get_didSelectCharacteristic() const;

  constexpr void __set_didSelectCharacteristic(::System::Action_1<::GlobalNamespace::BeatmapCharacteristicSO*>* value);

  constexpr ::GlobalNamespace::BeatmapCharacteristicCollection*& __get__beatmapCharacteristicCollection();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCharacteristicCollection*> const& __get__beatmapCharacteristicCollection() const;

  constexpr void __set__beatmapCharacteristicCollection(::GlobalNamespace::BeatmapCharacteristicCollection* value);

  constexpr bool& __get__isInitialized();

  constexpr bool const& __get__isInitialized() const;

  constexpr void __set__isInitialized(bool value);

  constexpr int32_t& __get__selectedColumn();

  constexpr int32_t const& __get__selectedColumn() const;

  constexpr void __set__selectedColumn(int32_t value);

  /// @brief Method add_didSelectCharacteristic, addr 0x22df218, size 0xb0, virtual false, abstract: false, final false
  inline void add_didSelectCharacteristic(::System::Action_1<::GlobalNamespace::BeatmapCharacteristicSO*>* value);

  /// @brief Method remove_didSelectCharacteristic, addr 0x22df2c8, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didSelectCharacteristic(::System::Action_1<::GlobalNamespace::BeatmapCharacteristicSO*>* value);

  /// @brief Method Init, addr 0x22df378, size 0xc0, virtual false, abstract: false, final false
  inline void Init();

  /// @brief Method SetData, addr 0x22df438, size 0x54, virtual false, abstract: false, final false
  inline void SetData(::GlobalNamespace::BeatmapCharacteristicCollection* beatmapCharacteristicCollection);

  /// @brief Method OnDestroy, addr 0x22df48c, size 0x8c, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method CellSize, addr 0x22df518, size 0x8, virtual true, abstract: false, final true
  inline float_t CellSize();

  /// @brief Method NumberOfCells, addr 0x22df520, size 0xb8, virtual true, abstract: false, final true
  inline int32_t NumberOfCells();

  /// @brief Method CellForIdx, addr 0x22df5d8, size 0x1b4, virtual true, abstract: false, final true
  inline ::HMUI::TableCell* CellForIdx(::HMUI::TableView* tableView, int32_t idx);

  /// @brief Method HandleDidSelectColumnEvent, addr 0x22df78c, size 0xe0, virtual false, abstract: false, final false
  inline void HandleDidSelectColumnEvent(::HMUI::TableView* tableView, int32_t column);

  /// @brief Method HandleAdditionalContentModelDidInvalidateData, addr 0x22df86c, size 0xa8, virtual false, abstract: false, final false
  inline void HandleAdditionalContentModelDidInvalidateData();

  /// @brief Method SelectCellWithIdx, addr 0x22df914, size 0x20, virtual false, abstract: false, final false
  inline void SelectCellWithIdx(int32_t idx);

  static inline ::GlobalNamespace::BeatmapCharacteristicsTableView* New_ctor();

  /// @brief Method .ctor, addr 0x22df934, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapCharacteristicsTableView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapCharacteristicsTableView(BeatmapCharacteristicsTableView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapCharacteristicsTableView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapCharacteristicsTableView(BeatmapCharacteristicsTableView const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapCharacteristicsTableView();

public:
  /// @brief Field _tableView, offset: 0x18, size: 0x8, def value: None
  ::HMUI::TableView* ____tableView;

  /// @brief Field _cellPrefab, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCharacteristicTableCell* ____cellPrefab;

  /// @brief Field _cellReuseIdentifier, offset: 0x28, size: 0x8, def value: None
  ::StringW ____cellReuseIdentifier;

  /// @brief Field _cellWidth, offset: 0x30, size: 0x4, def value: None
  float_t ____cellWidth;

  /// @brief Field didSelectCharacteristic, offset: 0x38, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::BeatmapCharacteristicSO*>* ___didSelectCharacteristic;

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
