#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TabBarViewController)
namespace GlobalNamespace {
class __TabBarViewController__TabBarItem;
}
namespace HMUI {
class SegmentedControl;
}
namespace HMUI {
class TextSegmentedControl;
}
namespace System {
class Action;
}
namespace UnityEngine::UI {
class ContentSizeFitter;
}
// Forward declare root types
namespace GlobalNamespace {
class TabBarViewController;
}
namespace GlobalNamespace {
class __TabBarViewController__TabBarItem;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TabBarViewController);
MARK_REF_PTR_T(::GlobalNamespace::__TabBarViewController__TabBarItem);
// Type: ::TabBarItem
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5766))
// CS Name: ::TabBarViewController::TabBarItem*
class CORDL_TYPE __TabBarViewController__TabBarItem : public ::System::Object {
public:
  // Declarations
  /// @brief Field title, offset 0x10, size 0x8
  __declspec(property(get = __get_title, put = __set_title))::StringW title;

  /// @brief Field action, offset 0x18, size 0x8
  __declspec(property(get = __get_action, put = __set_action))::System::Action* action;

  constexpr ::StringW& __get_title();

  constexpr ::StringW const& __get_title() const;

  constexpr void __set_title(::StringW value);

  constexpr ::System::Action*& __get_action();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_action() const;

  constexpr void __set_action(::System::Action* value);

  static inline ::GlobalNamespace::__TabBarViewController__TabBarItem* New_ctor(::StringW title, ::System::Action* action);

  /// @brief Method .ctor, addr 0x22dc454, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::StringW title, ::System::Action* action);

  // Ctor Parameters [CppParam { name: "", ty: "__TabBarViewController__TabBarItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TabBarViewController__TabBarItem(__TabBarViewController__TabBarItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TabBarViewController__TabBarItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TabBarViewController__TabBarItem(__TabBarViewController__TabBarItem const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TabBarViewController__TabBarItem();

public:
  /// @brief Field title, offset: 0x10, size: 0x8, def value: None
  ::StringW ___title;

  /// @brief Field action, offset: 0x18, size: 0x8, def value: None
  ::System::Action* ___action;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__TabBarViewController__TabBarItem, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__TabBarViewController__TabBarItem, ___title) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TabBarViewController__TabBarItem, ___action) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::TabBarViewController
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 145, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13605))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5767))
// CS Name: ::TabBarViewController*
class CORDL_TYPE TabBarViewController : public ::HMUI::ViewController {
public:
  // Declarations
  using TabBarItem = ::GlobalNamespace::__TabBarViewController__TabBarItem;

  /// @brief Field _segmentedControll, offset 0x70, size 0x8
  __declspec(property(get = __get__segmentedControll, put = __set__segmentedControll))::HMUI::TextSegmentedControl* _segmentedControll;

  /// @brief Field _contentSizeFilter, offset 0x78, size 0x8
  __declspec(property(get = __get__contentSizeFilter, put = __set__contentSizeFilter))::UnityEngine::UI::ContentSizeFitter* _contentSizeFilter;

  /// @brief Field _labels, offset 0x80, size 0x8
  __declspec(property(get = __get__labels, put = __set__labels))::ArrayW<::StringW, ::Array<::StringW>*> _labels;

  /// @brief Field _items, offset 0x88, size 0x8
  __declspec(property(get = __get__items, put = __set__items))::ArrayW<::GlobalNamespace::__TabBarViewController__TabBarItem*, ::Array<::GlobalNamespace::__TabBarViewController__TabBarItem*>*> _items;

  /// @brief Field _shouldReloadData, offset 0x90, size 0x1
  __declspec(property(get = __get__shouldReloadData, put = __set__shouldReloadData)) bool _shouldReloadData;

  __declspec(property(get = get_sizeToFit, put = set_sizeToFit)) bool sizeToFit;

  __declspec(property(get = get_selectedCellNumber)) int32_t selectedCellNumber;

  constexpr ::HMUI::TextSegmentedControl*& __get__segmentedControll();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::TextSegmentedControl*> const& __get__segmentedControll() const;

  constexpr void __set__segmentedControll(::HMUI::TextSegmentedControl* value);

  constexpr ::UnityEngine::UI::ContentSizeFitter*& __get__contentSizeFilter();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::ContentSizeFitter*> const& __get__contentSizeFilter() const;

  constexpr void __set__contentSizeFilter(::UnityEngine::UI::ContentSizeFitter* value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __get__labels();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __get__labels() const;

  constexpr void __set__labels(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr ::ArrayW<::GlobalNamespace::__TabBarViewController__TabBarItem*, ::Array<::GlobalNamespace::__TabBarViewController__TabBarItem*>*>& __get__items();

  constexpr ::ArrayW<::GlobalNamespace::__TabBarViewController__TabBarItem*, ::Array<::GlobalNamespace::__TabBarViewController__TabBarItem*>*> const& __get__items() const;

  constexpr void __set__items(::ArrayW<::GlobalNamespace::__TabBarViewController__TabBarItem*, ::Array<::GlobalNamespace::__TabBarViewController__TabBarItem*>*> value);

  constexpr bool& __get__shouldReloadData();

  constexpr bool const& __get__shouldReloadData() const;

  constexpr void __set__shouldReloadData(bool value);

  /// @brief Method set_sizeToFit, addr 0x22dc008, size 0x20, virtual false, abstract: false, final false
  inline void set_sizeToFit(bool value);

  /// @brief Method get_sizeToFit, addr 0x22dc028, size 0x1c, virtual false, abstract: false, final false
  inline bool get_sizeToFit();

  /// @brief Method get_selectedCellNumber, addr 0x22dc044, size 0x1c, virtual false, abstract: false, final false
  inline int32_t get_selectedCellNumber();

  /// @brief Method Setup, addr 0x22dc060, size 0x18c, virtual false, abstract: false, final false
  inline void Setup(::ArrayW<::GlobalNamespace::__TabBarViewController__TabBarItem*, ::Array<::GlobalNamespace::__TabBarViewController__TabBarItem*>*> items);

  /// @brief Method SelectItem, addr 0x22dc1ec, size 0x1c, virtual false, abstract: false, final false
  inline void SelectItem(int32_t index);

  /// @brief Method Clear, addr 0x22dc208, size 0x54, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method DidActivate, addr 0x22dc25c, size 0xc4, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method OnDestroy, addr 0x22dc320, size 0xdc, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method HandleDidSelectCell, addr 0x22dc3fc, size 0x50, virtual false, abstract: false, final false
  inline void HandleDidSelectCell(::HMUI::SegmentedControl* segmentedControl, int32_t cellNumber);

  static inline ::GlobalNamespace::TabBarViewController* New_ctor();

  /// @brief Method .ctor, addr 0x22dc44c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TabBarViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TabBarViewController(TabBarViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TabBarViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TabBarViewController(TabBarViewController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TabBarViewController();

public:
  /// @brief Field _segmentedControll, offset: 0x70, size: 0x8, def value: None
  ::HMUI::TextSegmentedControl* ____segmentedControll;

  /// @brief Field _contentSizeFilter, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::UI::ContentSizeFitter* ____contentSizeFilter;

  /// @brief Field _labels, offset: 0x80, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ____labels;

  /// @brief Field _items, offset: 0x88, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__TabBarViewController__TabBarItem*, ::Array<::GlobalNamespace::__TabBarViewController__TabBarItem*>*> ____items;

  /// @brief Field _shouldReloadData, offset: 0x90, size: 0x1, def value: None
  bool ____shouldReloadData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TabBarViewController, 0x98>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::TabBarViewController, ____segmentedControll) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TabBarViewController, ____contentSizeFilter) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TabBarViewController, ____labels) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TabBarViewController, ____items) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TabBarViewController, ____shouldReloadData) == 0x90, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TabBarViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TabBarViewController*, "", "TabBarViewController");
NEED_NO_BOX(::GlobalNamespace::__TabBarViewController__TabBarItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__TabBarViewController__TabBarItem*, "", "TabBarViewController/TabBarItem");
