#pragma once
// IWYU pragma private; include "HMUI/TableViewWithVariableSizedCells.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__TableView_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TableViewWithVariableSizedCells)
// Forward declare root types
namespace HMUI {
class TableViewWithVariableSizedCells;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::TableViewWithVariableSizedCells);
// Dependencies HMUI.TableView
namespace HMUI {
// Is value type: false
// CS Name: HMUI.TableViewWithVariableSizedCells
class CORDL_TYPE TableViewWithVariableSizedCells : public ::HMUI::TableView {
public:
  // Declarations
  /// @brief Field _cachedCellSizes, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__cachedCellSizes, put = __cordl_internal_set__cachedCellSizes)) ::ArrayW<float_t, ::Array<float_t>*> _cachedCellSizes;

  /// @brief Field _cachedCumulativeCellSizes, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__cachedCumulativeCellSizes, put = __cordl_internal_set__cachedCumulativeCellSizes)) ::ArrayW<float_t, ::Array<float_t>*> _cachedCumulativeCellSizes;

  /// @brief Field _totalHeight, offset 0xc4, size 0x4
  __declspec(property(get = __cordl_internal_get__totalHeight, put = __cordl_internal_set__totalHeight)) float_t _totalHeight;

  __declspec(property(get = get_contentSize)) float_t contentSize;

  /// @brief Method GetCellPosition, addr 0x56dc1e4, size 0x50, virtual true, abstract: false, final false
  inline float_t GetCellPosition(int32_t idx);

  /// @brief Method GetCellSize, addr 0x56dc1b4, size 0x30, virtual true, abstract: false, final false
  inline float_t GetCellSize(int32_t idx);

  /// @brief Method GetMaxVisibleIdx, addr 0x56dc0c4, size 0xf0, virtual true, abstract: false, final false
  inline int32_t GetMaxVisibleIdx();

  /// @brief Method GetMinVisibleIdx, addr 0x56dbff4, size 0xd0, virtual true, abstract: false, final false
  inline int32_t GetMinVisibleIdx();

  static inline ::HMUI::TableViewWithVariableSizedCells* New_ctor();

  /// @brief Method UpdateCachedData, addr 0x56dc234, size 0x1f4, virtual true, abstract: false, final false
  inline void UpdateCachedData();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __cordl_internal_get__cachedCellSizes() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __cordl_internal_get__cachedCellSizes();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __cordl_internal_get__cachedCumulativeCellSizes() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __cordl_internal_get__cachedCumulativeCellSizes();

  constexpr float_t const& __cordl_internal_get__totalHeight() const;

  constexpr float_t& __cordl_internal_get__totalHeight();

  constexpr void __cordl_internal_set__cachedCellSizes(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr void __cordl_internal_set__cachedCumulativeCellSizes(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr void __cordl_internal_set__totalHeight(float_t value);

  /// @brief Method .ctor, addr 0x56dc428, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_contentSize, addr 0x56dbfec, size 0x8, virtual true, abstract: false, final false
  inline float_t get_contentSize();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TableViewWithVariableSizedCells();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TableViewWithVariableSizedCells", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TableViewWithVariableSizedCells(TableViewWithVariableSizedCells&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TableViewWithVariableSizedCells", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TableViewWithVariableSizedCells(TableViewWithVariableSizedCells const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19221 };

  /// @brief Field _totalHeight, offset: 0xc4, size: 0x4, def value: None
  float_t ____totalHeight;

  /// @brief Field _cachedCellSizes, offset: 0xc8, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ____cachedCellSizes;

  /// @brief Field _cachedCumulativeCellSizes, offset: 0xd0, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ____cachedCumulativeCellSizes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HMUI::TableViewWithVariableSizedCells, ____totalHeight) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::HMUI::TableViewWithVariableSizedCells, ____cachedCellSizes) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::HMUI::TableViewWithVariableSizedCells, ____cachedCumulativeCellSizes) == 0xd0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::TableViewWithVariableSizedCells, 0xd8>, "Size mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::TableViewWithVariableSizedCells);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::TableViewWithVariableSizedCells*, "HMUI", "TableViewWithVariableSizedCells");
