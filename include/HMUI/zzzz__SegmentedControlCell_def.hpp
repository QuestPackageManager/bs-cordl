#pragma once
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
// Type: HMUI::SegmentedControlCell
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13653))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13551))
// CS Name: ::HMUI::SegmentedControlCell*
class CORDL_TYPE SegmentedControlCell : public ::HMUI::SelectableCell {
public:
  // Declarations
  /// @brief Field <cellNumber>k__BackingField, offset 0x44, size 0x4
  __declspec(property(get = __get__cellNumber_k__BackingField, put = __set__cellNumber_k__BackingField)) int32_t _cellNumber_k__BackingField;

  /// @brief Field _segmentedControl, offset 0x48, size 0x8
  __declspec(property(get = __get__segmentedControl, put = __set__segmentedControl))::HMUI::SegmentedControl* _segmentedControl;

  __declspec(property(get = get_cellNumber, put = set_cellNumber)) int32_t cellNumber;

  constexpr int32_t& __get__cellNumber_k__BackingField();

  constexpr int32_t const& __get__cellNumber_k__BackingField() const;

  constexpr void __set__cellNumber_k__BackingField(int32_t value);

  constexpr ::HMUI::SegmentedControl*& __get__segmentedControl();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::SegmentedControl*> const& __get__segmentedControl() const;

  constexpr void __set__segmentedControl(::HMUI::SegmentedControl* value);

  /// @brief Method get_cellNumber addr 0x2120268 size 0x8 virtual false final false
  inline int32_t get_cellNumber();

  /// @brief Method set_cellNumber addr 0x2120270 size 0x8 virtual false final false
  inline void set_cellNumber(int32_t value);

  /// @brief Method SegmentedControlSetup addr 0x211fffc size 0xc virtual false final false
  inline void SegmentedControlSetup(::HMUI::SegmentedControl* segmentedControl, int32_t cellNumber);

  /// @brief Method InternalToggle addr 0x2120278 size 0x24 virtual true final false
  inline void InternalToggle();

  static inline ::HMUI::SegmentedControlCell* New_ctor();

  /// @brief Method .ctor addr 0x211f9c0 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SegmentedControlCell", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SegmentedControlCell(SegmentedControlCell&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SegmentedControlCell", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SegmentedControlCell(SegmentedControlCell const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SegmentedControlCell();

public:
  /// @brief Field <cellNumber>k__BackingField, offset: 0x44, size: 0x4, def value: None
  int32_t ____cellNumber_k__BackingField;

  /// @brief Field _segmentedControl, offset: 0x48, size: 0x8, def value: None
  ::HMUI::SegmentedControl* ____segmentedControl;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::SegmentedControlCell, 0x50>, "Size mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::SegmentedControlCell);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::SegmentedControlCell*, "HMUI", "SegmentedControlCell");
