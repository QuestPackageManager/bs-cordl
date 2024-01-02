#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__SegmentedControl_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IconSegmentedControl)
namespace HMUI {
class __IconSegmentedControl__DataItem;
}
namespace HMUI {
class IconSegmentedControlCell;
}
namespace HMUI {
class SegmentedControlCell;
}
namespace UnityEngine {
class Object;
}
namespace HMUI {
class __SegmentedControl__IDataSource;
}
namespace Zenject {
class DiContainer;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace HMUI {
class IconSegmentedControl;
}
namespace HMUI {
class __IconSegmentedControl__DataItem;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::IconSegmentedControl);
MARK_REF_PTR_T(::HMUI::__IconSegmentedControl__DataItem);
// Type: ::DataItem
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13546))
// CS Name: ::IconSegmentedControl::DataItem*
class CORDL_TYPE __IconSegmentedControl__DataItem : public ::System::Object {
public:
  // Declarations
  /// @brief Field <icon>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__icon_k__BackingField, put = __set__icon_k__BackingField))::UnityEngine::Sprite* _icon_k__BackingField;

  /// @brief Field <hintText>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __get__hintText_k__BackingField, put = __set__hintText_k__BackingField))::StringW _hintText_k__BackingField;

  __declspec(property(get = get_icon, put = set_icon))::UnityEngine::Sprite* icon;

  __declspec(property(get = get_hintText, put = set_hintText))::StringW hintText;

  constexpr ::UnityEngine::Sprite*& __get__icon_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> const& __get__icon_k__BackingField() const;

  constexpr void __set__icon_k__BackingField(::UnityEngine::Sprite* value);

  constexpr ::StringW& __get__hintText_k__BackingField();

  constexpr ::StringW const& __get__hintText_k__BackingField() const;

  constexpr void __set__hintText_k__BackingField(::StringW value);

  /// @brief Method get_icon, addr 0x211f950, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Sprite* get_icon();

  /// @brief Method set_icon, addr 0x211f958, size 0x8, virtual false, abstract: false, final false
  inline void set_icon(::UnityEngine::Sprite* value);

  /// @brief Method get_hintText, addr 0x211f960, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_hintText();

  /// @brief Method set_hintText, addr 0x211f968, size 0x8, virtual false, abstract: false, final false
  inline void set_hintText(::StringW value);

  static inline ::HMUI::__IconSegmentedControl__DataItem* New_ctor(::UnityEngine::Sprite* icon, ::StringW hintText);

  /// @brief Method .ctor, addr 0x211f970, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Sprite* icon, ::StringW hintText);

  // Ctor Parameters [CppParam { name: "", ty: "__IconSegmentedControl__DataItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IconSegmentedControl__DataItem(__IconSegmentedControl__DataItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IconSegmentedControl__DataItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IconSegmentedControl__DataItem(__IconSegmentedControl__DataItem const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IconSegmentedControl__DataItem();

public:
  /// @brief Field <icon>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Sprite* ____icon_k__BackingField;

  /// @brief Field <hintText>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____hintText_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__IconSegmentedControl__DataItem, 0x20>, "Size mismatch!");

static_assert(offsetof(::HMUI::__IconSegmentedControl__DataItem, ____icon_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HMUI::__IconSegmentedControl__DataItem, ____hintText_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace HMUI
// Type: HMUI::IconSegmentedControl
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 153, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13550))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13547))
// CS Name: ::HMUI::IconSegmentedControl*
class CORDL_TYPE IconSegmentedControl : public ::HMUI::SegmentedControl {
public:
  // Declarations
  using DataItem = ::HMUI::__IconSegmentedControl__DataItem;

  /// @brief Field _iconSize, offset 0x58, size 0x4
  __declspec(property(get = __get__iconSize, put = __set__iconSize)) float_t _iconSize;

  /// @brief Field _overrideCellSize, offset 0x5c, size 0x1
  __declspec(property(get = __get__overrideCellSize, put = __set__overrideCellSize)) bool _overrideCellSize;

  /// @brief Field _padding, offset 0x60, size 0x4
  __declspec(property(get = __get__padding, put = __set__padding)) float_t _padding;

  /// @brief Field _hideCellBackground, offset 0x64, size 0x1
  __declspec(property(get = __get__hideCellBackground, put = __set__hideCellBackground)) bool _hideCellBackground;

  /// @brief Field _firstCellPrefab, offset 0x68, size 0x8
  __declspec(property(get = __get__firstCellPrefab, put = __set__firstCellPrefab))::HMUI::IconSegmentedControlCell* _firstCellPrefab;

  /// @brief Field _lastCellPrefab, offset 0x70, size 0x8
  __declspec(property(get = __get__lastCellPrefab, put = __set__lastCellPrefab))::HMUI::IconSegmentedControlCell* _lastCellPrefab;

  /// @brief Field _middleCellPrefab, offset 0x78, size 0x8
  __declspec(property(get = __get__middleCellPrefab, put = __set__middleCellPrefab))::HMUI::IconSegmentedControlCell* _middleCellPrefab;

  /// @brief Field _singleCellPrefab, offset 0x80, size 0x8
  __declspec(property(get = __get__singleCellPrefab, put = __set__singleCellPrefab))::HMUI::IconSegmentedControlCell* _singleCellPrefab;

  /// @brief Field _container, offset 0x88, size 0x8
  __declspec(property(get = __get__container, put = __set__container))::Zenject::DiContainer* _container;

  /// @brief Field _dataItems, offset 0x90, size 0x8
  __declspec(property(get = __get__dataItems, put = __set__dataItems))::ArrayW<::HMUI::__IconSegmentedControl__DataItem*, ::Array<::HMUI::__IconSegmentedControl__DataItem*>*> _dataItems;

  /// @brief Field _isInitialized, offset 0x98, size 0x1
  __declspec(property(get = __get__isInitialized, put = __set__isInitialized)) bool _isInitialized;

  /// @brief Convert operator to "::HMUI::__SegmentedControl__IDataSource"
  constexpr operator ::HMUI::__SegmentedControl__IDataSource*() noexcept;

  constexpr float_t& __get__iconSize();

  constexpr float_t const& __get__iconSize() const;

  constexpr void __set__iconSize(float_t value);

  constexpr bool& __get__overrideCellSize();

  constexpr bool const& __get__overrideCellSize() const;

  constexpr void __set__overrideCellSize(bool value);

  constexpr float_t& __get__padding();

  constexpr float_t const& __get__padding() const;

  constexpr void __set__padding(float_t value);

  constexpr bool& __get__hideCellBackground();

  constexpr bool const& __get__hideCellBackground() const;

  constexpr void __set__hideCellBackground(bool value);

  constexpr ::HMUI::IconSegmentedControlCell*& __get__firstCellPrefab();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::IconSegmentedControlCell*> const& __get__firstCellPrefab() const;

  constexpr void __set__firstCellPrefab(::HMUI::IconSegmentedControlCell* value);

  constexpr ::HMUI::IconSegmentedControlCell*& __get__lastCellPrefab();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::IconSegmentedControlCell*> const& __get__lastCellPrefab() const;

  constexpr void __set__lastCellPrefab(::HMUI::IconSegmentedControlCell* value);

  constexpr ::HMUI::IconSegmentedControlCell*& __get__middleCellPrefab();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::IconSegmentedControlCell*> const& __get__middleCellPrefab() const;

  constexpr void __set__middleCellPrefab(::HMUI::IconSegmentedControlCell* value);

  constexpr ::HMUI::IconSegmentedControlCell*& __get__singleCellPrefab();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::IconSegmentedControlCell*> const& __get__singleCellPrefab() const;

  constexpr void __set__singleCellPrefab(::HMUI::IconSegmentedControlCell* value);

  constexpr ::Zenject::DiContainer*& __get__container();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __get__container() const;

  constexpr void __set__container(::Zenject::DiContainer* value);

  constexpr ::ArrayW<::HMUI::__IconSegmentedControl__DataItem*, ::Array<::HMUI::__IconSegmentedControl__DataItem*>*>& __get__dataItems();

  constexpr ::ArrayW<::HMUI::__IconSegmentedControl__DataItem*, ::Array<::HMUI::__IconSegmentedControl__DataItem*>*> const& __get__dataItems() const;

  constexpr void __set__dataItems(::ArrayW<::HMUI::__IconSegmentedControl__DataItem*, ::Array<::HMUI::__IconSegmentedControl__DataItem*>*> value);

  constexpr bool& __get__isInitialized();

  constexpr bool const& __get__isInitialized() const;

  constexpr void __set__isInitialized(bool value);

  /// @brief Method Init, addr 0x211efa0, size 0x1c, virtual false, abstract: false, final false
  inline void Init();

  /// @brief Method SetData, addr 0x211efc4, size 0x40, virtual false, abstract: false, final false
  inline void SetData(::ArrayW<::HMUI::__IconSegmentedControl__DataItem*, ::Array<::HMUI::__IconSegmentedControl__DataItem*>*> dataItems);

  /// @brief Method NumberOfCells, addr 0x211f40c, size 0x18, virtual true, abstract: false, final true
  inline int32_t NumberOfCells();

  /// @brief Method CellForCellNumber, addr 0x211f424, size 0x180, virtual true, abstract: false, final true
  inline ::HMUI::SegmentedControlCell* CellForCellNumber(int32_t cellNumber);

  /// @brief Method InstantiateCell, addr 0x211f5a4, size 0x180, virtual false, abstract: false, final false
  inline ::HMUI::IconSegmentedControlCell* InstantiateCell(::UnityEngine::Object* prefab);

  static inline ::HMUI::IconSegmentedControl* New_ctor();

  /// @brief Method .ctor, addr 0x211f834, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "IconSegmentedControl", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IconSegmentedControl(IconSegmentedControl&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IconSegmentedControl", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IconSegmentedControl(IconSegmentedControl const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IconSegmentedControl();

public:
  /// @brief Field _iconSize, offset: 0x58, size: 0x4, def value: None
  float_t ____iconSize;

  /// @brief Field _overrideCellSize, offset: 0x5c, size: 0x1, def value: None
  bool ____overrideCellSize;

  /// @brief Field _padding, offset: 0x60, size: 0x4, def value: None
  float_t ____padding;

  /// @brief Field _hideCellBackground, offset: 0x64, size: 0x1, def value: None
  bool ____hideCellBackground;

  /// @brief Field _firstCellPrefab, offset: 0x68, size: 0x8, def value: None
  ::HMUI::IconSegmentedControlCell* ____firstCellPrefab;

  /// @brief Field _lastCellPrefab, offset: 0x70, size: 0x8, def value: None
  ::HMUI::IconSegmentedControlCell* ____lastCellPrefab;

  /// @brief Field _middleCellPrefab, offset: 0x78, size: 0x8, def value: None
  ::HMUI::IconSegmentedControlCell* ____middleCellPrefab;

  /// @brief Field _singleCellPrefab, offset: 0x80, size: 0x8, def value: None
  ::HMUI::IconSegmentedControlCell* ____singleCellPrefab;

  /// @brief Field _container, offset: 0x88, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  /// @brief Field _dataItems, offset: 0x90, size: 0x8, def value: None
  ::ArrayW<::HMUI::__IconSegmentedControl__DataItem*, ::Array<::HMUI::__IconSegmentedControl__DataItem*>*> ____dataItems;

  /// @brief Field _isInitialized, offset: 0x98, size: 0x1, def value: None
  bool ____isInitialized;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::IconSegmentedControl, 0xa0>, "Size mismatch!");

static_assert(offsetof(::HMUI::IconSegmentedControl, ____iconSize) == 0x58, "Offset mismatch!");

static_assert(offsetof(::HMUI::IconSegmentedControl, ____overrideCellSize) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::HMUI::IconSegmentedControl, ____padding) == 0x60, "Offset mismatch!");

static_assert(offsetof(::HMUI::IconSegmentedControl, ____hideCellBackground) == 0x64, "Offset mismatch!");

static_assert(offsetof(::HMUI::IconSegmentedControl, ____firstCellPrefab) == 0x68, "Offset mismatch!");

static_assert(offsetof(::HMUI::IconSegmentedControl, ____lastCellPrefab) == 0x70, "Offset mismatch!");

static_assert(offsetof(::HMUI::IconSegmentedControl, ____middleCellPrefab) == 0x78, "Offset mismatch!");

static_assert(offsetof(::HMUI::IconSegmentedControl, ____singleCellPrefab) == 0x80, "Offset mismatch!");

static_assert(offsetof(::HMUI::IconSegmentedControl, ____container) == 0x88, "Offset mismatch!");

static_assert(offsetof(::HMUI::IconSegmentedControl, ____dataItems) == 0x90, "Offset mismatch!");

static_assert(offsetof(::HMUI::IconSegmentedControl, ____isInitialized) == 0x98, "Offset mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::IconSegmentedControl);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::IconSegmentedControl*, "HMUI", "IconSegmentedControl");
NEED_NO_BOX(::HMUI::__IconSegmentedControl__DataItem);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__IconSegmentedControl__DataItem*, "HMUI", "IconSegmentedControl/DataItem");
