#pragma once
// IWYU pragma private; include "HMUI/SegmentedControlCell.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__SelectableCell_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SegmentedControlCell)
namespace HMUI {
class SegmentedControl;
}
// Forward declare root types
namespace HMUI {
class SegmentedControlCell;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::SegmentedControlCell);
// Dependencies HMUI.SelectableCell
namespace HMUI {
// Is value type: false
// CS Name: HMUI.SegmentedControlCell
class CORDL_TYPE SegmentedControlCell : public ::HMUI::SelectableCell {
public:
  // Declarations
  /// @brief Field <cellNumber>k__BackingField, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get__cellNumber_k__BackingField, put = __cordl_internal_set__cellNumber_k__BackingField)) int32_t _cellNumber_k__BackingField;

  /// @brief Field _segmentedControl, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__segmentedControl, put = __cordl_internal_set__segmentedControl)) ::UnityW<::HMUI::SegmentedControl> _segmentedControl;

  __declspec(property(get = get_cellNumber, put = set_cellNumber)) int32_t cellNumber;

  /// @brief Method InternalToggle, addr 0x5d3aab8, size 0x24, virtual true, abstract: false, final false
  inline void InternalToggle();

  static inline ::HMUI::SegmentedControlCell* New_ctor();

  /// @brief Method SegmentedControlSetup, addr 0x5d3a748, size 0xc, virtual false, abstract: false, final false
  inline void SegmentedControlSetup(::HMUI::SegmentedControl* segmentedControl, int32_t cellNumber);

  constexpr int32_t const& __cordl_internal_get__cellNumber_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__cellNumber_k__BackingField();

  constexpr ::UnityW<::HMUI::SegmentedControl> const& __cordl_internal_get__segmentedControl() const;

  constexpr ::UnityW<::HMUI::SegmentedControl>& __cordl_internal_get__segmentedControl();

  constexpr void __cordl_internal_set__cellNumber_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__segmentedControl(::UnityW<::HMUI::SegmentedControl> value);

  /// @brief Method .ctor, addr 0x5d39a10, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_cellNumber, addr 0x5d3aaa8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_cellNumber();

  /// @brief Method set_cellNumber, addr 0x5d3aab0, size 0x8, virtual false, abstract: false, final false
  inline void set_cellNumber(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SegmentedControlCell();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SegmentedControlCell", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SegmentedControlCell(SegmentedControlCell&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SegmentedControlCell", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SegmentedControlCell(SegmentedControlCell const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22727 };

  /// @brief Field <cellNumber>k__BackingField, offset: 0x64, size: 0x4, def value: None
  int32_t ____cellNumber_k__BackingField;

  /// @brief Field _segmentedControl, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::HMUI::SegmentedControl> ____segmentedControl;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HMUI::SegmentedControlCell, ____cellNumber_k__BackingField) == 0x64, "Offset mismatch!");

static_assert(offsetof(::HMUI::SegmentedControlCell, ____segmentedControl) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::SegmentedControlCell, 0x70>, "Size mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::SegmentedControlCell);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::SegmentedControlCell*, "HMUI", "SegmentedControlCell");
