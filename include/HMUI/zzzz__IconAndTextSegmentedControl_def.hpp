#pragma once
// IWYU pragma private; include "HMUI/IconAndTextSegmentedControl.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__SegmentedControl_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IconAndTextSegmentedControl)
namespace HMUI {
class IconAndTextSegmentedControlCell;
}
namespace HMUI {
class SegmentedControlCell;
}
namespace HMUI {
class __IconAndTextSegmentedControl__DataItem;
}
namespace HMUI {
class __SegmentedControl__IDataSource;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace HMUI {
class IconAndTextSegmentedControl;
}
namespace HMUI {
class __IconAndTextSegmentedControl__DataItem;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::IconAndTextSegmentedControl);
MARK_REF_PTR_T(::HMUI::__IconAndTextSegmentedControl__DataItem);
// Type: ::DataItem
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::IconAndTextSegmentedControl::DataItem*
class CORDL_TYPE __IconAndTextSegmentedControl__DataItem : public ::System::Object {
public:
  // Declarations
  /// @brief Field <icon>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__icon_k__BackingField, put = __cordl_internal_set__icon_k__BackingField)) ::UnityW<::UnityEngine::Sprite> _icon_k__BackingField;

  /// @brief Field <interactable>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__interactable_k__BackingField, put = __cordl_internal_set__interactable_k__BackingField)) bool _interactable_k__BackingField;

  /// @brief Field <text>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__text_k__BackingField, put = __cordl_internal_set__text_k__BackingField)) ::StringW _text_k__BackingField;

  __declspec(property(get = get_icon, put = set_icon)) ::UnityW<::UnityEngine::Sprite> icon;

  __declspec(property(get = get_interactable, put = set_interactable)) bool interactable;

  __declspec(property(get = get_text, put = set_text)) ::StringW text;

  static inline ::HMUI::__IconAndTextSegmentedControl__DataItem* New_ctor(::UnityEngine::Sprite* icon, ::StringW text, bool interactable);

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__icon_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__icon_k__BackingField();

  constexpr bool const& __cordl_internal_get__interactable_k__BackingField() const;

  constexpr bool& __cordl_internal_get__interactable_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__text_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__text_k__BackingField();

  constexpr void __cordl_internal_set__icon_k__BackingField(::UnityW<::UnityEngine::Sprite> value);

  constexpr void __cordl_internal_set__interactable_k__BackingField(bool value);

  constexpr void __cordl_internal_set__text_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x4012ed8, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Sprite* icon, ::StringW text, bool interactable);

  /// @brief Method get_icon, addr 0x4012ea4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Sprite> get_icon();

  /// @brief Method get_interactable, addr 0x4012ec4, size 0x8, virtual false, abstract: false, final false
  inline bool get_interactable();

  /// @brief Method get_text, addr 0x4012eb4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_text();

  /// @brief Method set_icon, addr 0x4012eac, size 0x8, virtual false, abstract: false, final false
  inline void set_icon(::UnityEngine::Sprite* value);

  /// @brief Method set_interactable, addr 0x4012ecc, size 0xc, virtual false, abstract: false, final false
  inline void set_interactable(bool value);

  /// @brief Method set_text, addr 0x4012ebc, size 0x8, virtual false, abstract: false, final false
  inline void set_text(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IconAndTextSegmentedControl__DataItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IconAndTextSegmentedControl__DataItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IconAndTextSegmentedControl__DataItem(__IconAndTextSegmentedControl__DataItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IconAndTextSegmentedControl__DataItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IconAndTextSegmentedControl__DataItem(__IconAndTextSegmentedControl__DataItem const&) = delete;

  /// @brief Field <icon>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ____icon_k__BackingField;

  /// @brief Field <text>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____text_k__BackingField;

  /// @brief Field <interactable>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____interactable_k__BackingField;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18689 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__IconAndTextSegmentedControl__DataItem, 0x28>, "Size mismatch!");

static_assert(offsetof(::HMUI::__IconAndTextSegmentedControl__DataItem, ____icon_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HMUI::__IconAndTextSegmentedControl__DataItem, ____text_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HMUI::__IconAndTextSegmentedControl__DataItem, ____interactable_k__BackingField) == 0x20, "Offset mismatch!");

} // namespace HMUI
// Type: HMUI::IconAndTextSegmentedControl
// SizeInfo { instance_size: 176, native_size: -1, calculated_instance_size: 176, calculated_native_size: 169, minimum_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::HMUI::IconAndTextSegmentedControl*
class CORDL_TYPE IconAndTextSegmentedControl : public ::HMUI::SegmentedControl {
public:
  // Declarations
  using DataItem = ::HMUI::__IconAndTextSegmentedControl__DataItem;

  /// @brief Field _dataItems, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__dataItems,
                      put = __cordl_internal_set__dataItems)) ::ArrayW<::HMUI::__IconAndTextSegmentedControl__DataItem*, ::Array<::HMUI::__IconAndTextSegmentedControl__DataItem*>*>
      _dataItems;

  /// @brief Field _firstCellPrefab, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__firstCellPrefab, put = __cordl_internal_set__firstCellPrefab)) ::UnityW<::HMUI::IconAndTextSegmentedControlCell> _firstCellPrefab;

  /// @brief Field _isInitialized, offset 0xa8, size 0x1
  __declspec(property(get = __cordl_internal_get__isInitialized, put = __cordl_internal_set__isInitialized)) bool _isInitialized;

  /// @brief Field _lastCellPrefab, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__lastCellPrefab, put = __cordl_internal_set__lastCellPrefab)) ::UnityW<::HMUI::IconAndTextSegmentedControlCell> _lastCellPrefab;

  /// @brief Field _middleCellPrefab, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__middleCellPrefab, put = __cordl_internal_set__middleCellPrefab)) ::UnityW<::HMUI::IconAndTextSegmentedControlCell> _middleCellPrefab;

  /// @brief Field _singleCellPrefab, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__singleCellPrefab, put = __cordl_internal_set__singleCellPrefab)) ::UnityW<::HMUI::IconAndTextSegmentedControlCell> _singleCellPrefab;

  /// @brief Convert operator to "::HMUI::__SegmentedControl__IDataSource"
  constexpr operator ::HMUI::__SegmentedControl__IDataSource*() noexcept;

  /// @brief Method CellForCellNumber, addr 0x401281c, size 0x150, virtual true, abstract: false, final true
  inline ::UnityW<::HMUI::SegmentedControlCell> CellForCellNumber(int32_t cellNumber);

  /// @brief Method Init, addr 0x40122bc, size 0x1c, virtual false, abstract: false, final false
  inline void Init();

  static inline ::HMUI::IconAndTextSegmentedControl* New_ctor();

  /// @brief Method NumberOfCells, addr 0x4012804, size 0x18, virtual true, abstract: false, final true
  inline int32_t NumberOfCells();

  /// @brief Method SetData, addr 0x40122e0, size 0x40, virtual false, abstract: false, final false
  inline void SetData(::ArrayW<::HMUI::__IconAndTextSegmentedControl__DataItem*, ::Array<::HMUI::__IconAndTextSegmentedControl__DataItem*>*> dataItems);

  /// @brief Method SetTextsActive, addr 0x40129ac, size 0x328, virtual false, abstract: false, final false
  inline void SetTextsActive(bool active);

  constexpr ::ArrayW<::HMUI::__IconAndTextSegmentedControl__DataItem*, ::Array<::HMUI::__IconAndTextSegmentedControl__DataItem*>*> const& __cordl_internal_get__dataItems() const;

  constexpr ::ArrayW<::HMUI::__IconAndTextSegmentedControl__DataItem*, ::Array<::HMUI::__IconAndTextSegmentedControl__DataItem*>*>& __cordl_internal_get__dataItems();

  constexpr ::UnityW<::HMUI::IconAndTextSegmentedControlCell> const& __cordl_internal_get__firstCellPrefab() const;

  constexpr ::UnityW<::HMUI::IconAndTextSegmentedControlCell>& __cordl_internal_get__firstCellPrefab();

  constexpr bool const& __cordl_internal_get__isInitialized() const;

  constexpr bool& __cordl_internal_get__isInitialized();

  constexpr ::UnityW<::HMUI::IconAndTextSegmentedControlCell> const& __cordl_internal_get__lastCellPrefab() const;

  constexpr ::UnityW<::HMUI::IconAndTextSegmentedControlCell>& __cordl_internal_get__lastCellPrefab();

  constexpr ::UnityW<::HMUI::IconAndTextSegmentedControlCell> const& __cordl_internal_get__middleCellPrefab() const;

  constexpr ::UnityW<::HMUI::IconAndTextSegmentedControlCell>& __cordl_internal_get__middleCellPrefab();

  constexpr ::UnityW<::HMUI::IconAndTextSegmentedControlCell> const& __cordl_internal_get__singleCellPrefab() const;

  constexpr ::UnityW<::HMUI::IconAndTextSegmentedControlCell>& __cordl_internal_get__singleCellPrefab();

  constexpr void __cordl_internal_set__dataItems(::ArrayW<::HMUI::__IconAndTextSegmentedControl__DataItem*, ::Array<::HMUI::__IconAndTextSegmentedControl__DataItem*>*> value);

  constexpr void __cordl_internal_set__firstCellPrefab(::UnityW<::HMUI::IconAndTextSegmentedControlCell> value);

  constexpr void __cordl_internal_set__isInitialized(bool value);

  constexpr void __cordl_internal_set__lastCellPrefab(::UnityW<::HMUI::IconAndTextSegmentedControlCell> value);

  constexpr void __cordl_internal_set__middleCellPrefab(::UnityW<::HMUI::IconAndTextSegmentedControlCell> value);

  constexpr void __cordl_internal_set__singleCellPrefab(::UnityW<::HMUI::IconAndTextSegmentedControlCell> value);

  /// @brief Method .ctor, addr 0x4012d04, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::HMUI::__SegmentedControl__IDataSource"
  constexpr ::HMUI::__SegmentedControl__IDataSource* i___HMUI____SegmentedControl__IDataSource() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IconAndTextSegmentedControl();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IconAndTextSegmentedControl", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IconAndTextSegmentedControl(IconAndTextSegmentedControl&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IconAndTextSegmentedControl", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IconAndTextSegmentedControl(IconAndTextSegmentedControl const&) = delete;

  /// @brief Field _firstCellPrefab, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::HMUI::IconAndTextSegmentedControlCell> ____firstCellPrefab;

  /// @brief Field _lastCellPrefab, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::HMUI::IconAndTextSegmentedControlCell> ____lastCellPrefab;

  /// @brief Field _singleCellPrefab, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::HMUI::IconAndTextSegmentedControlCell> ____singleCellPrefab;

  /// @brief Field _middleCellPrefab, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::HMUI::IconAndTextSegmentedControlCell> ____middleCellPrefab;

  /// @brief Field _dataItems, offset: 0xa0, size: 0x8, def value: None
  ::ArrayW<::HMUI::__IconAndTextSegmentedControl__DataItem*, ::Array<::HMUI::__IconAndTextSegmentedControl__DataItem*>*> ____dataItems;

  /// @brief Field _isInitialized, offset: 0xa8, size: 0x1, def value: None
  bool ____isInitialized;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18690 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::IconAndTextSegmentedControl, 0xb0>, "Size mismatch!");

static_assert(offsetof(::HMUI::IconAndTextSegmentedControl, ____firstCellPrefab) == 0x80, "Offset mismatch!");

static_assert(offsetof(::HMUI::IconAndTextSegmentedControl, ____lastCellPrefab) == 0x88, "Offset mismatch!");

static_assert(offsetof(::HMUI::IconAndTextSegmentedControl, ____singleCellPrefab) == 0x90, "Offset mismatch!");

static_assert(offsetof(::HMUI::IconAndTextSegmentedControl, ____middleCellPrefab) == 0x98, "Offset mismatch!");

static_assert(offsetof(::HMUI::IconAndTextSegmentedControl, ____dataItems) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::HMUI::IconAndTextSegmentedControl, ____isInitialized) == 0xa8, "Offset mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::IconAndTextSegmentedControl);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::IconAndTextSegmentedControl*, "HMUI", "IconAndTextSegmentedControl");
NEED_NO_BOX(::HMUI::__IconAndTextSegmentedControl__DataItem);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__IconAndTextSegmentedControl__DataItem*, "HMUI", "IconAndTextSegmentedControl/DataItem");
