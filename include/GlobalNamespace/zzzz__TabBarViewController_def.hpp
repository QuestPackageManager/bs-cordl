#pragma once
// IWYU pragma private; include "GlobalNamespace/TabBarViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TabBarViewController)
namespace GlobalNamespace {
class TabBarViewController_TabBarItem;
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
class TabBarViewController_TabBarItem;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TabBarViewController);
MARK_REF_PTR_T(::GlobalNamespace::TabBarViewController_TabBarItem);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: TabBarViewController/TabBarItem
class CORDL_TYPE TabBarViewController_TabBarItem : public ::System::Object {
public:
  // Declarations
  /// @brief Field action, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_action, put = __cordl_internal_set_action)) ::System::Action* action;

  /// @brief Field title, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_title, put = __cordl_internal_set_title)) ::StringW title;

  static inline ::GlobalNamespace::TabBarViewController_TabBarItem* New_ctor(::StringW title, ::System::Action* action);

  constexpr ::System::Action* const& __cordl_internal_get_action() const;

  constexpr ::System::Action*& __cordl_internal_get_action();

  constexpr ::StringW const& __cordl_internal_get_title() const;

  constexpr ::StringW& __cordl_internal_get_title();

  constexpr void __cordl_internal_set_action(::System::Action* value);

  constexpr void __cordl_internal_set_title(::StringW value);

  /// @brief Method .ctor, addr 0x3afc664, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::StringW title, ::System::Action* action);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TabBarViewController_TabBarItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TabBarViewController_TabBarItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TabBarViewController_TabBarItem(TabBarViewController_TabBarItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TabBarViewController_TabBarItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TabBarViewController_TabBarItem(TabBarViewController_TabBarItem const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4965 };

  /// @brief Field title, offset: 0x10, size: 0x8, def value: None
  ::StringW ___title;

  /// @brief Field action, offset: 0x18, size: 0x8, def value: None
  ::System::Action* ___action;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TabBarViewController_TabBarItem, ___title) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TabBarViewController_TabBarItem, ___action) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TabBarViewController_TabBarItem, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies HMUI.ViewController
namespace GlobalNamespace {
// Is value type: false
// CS Name: TabBarViewController
class CORDL_TYPE TabBarViewController : public ::HMUI::ViewController {
public:
  // Declarations
  using TabBarItem = ::GlobalNamespace::TabBarViewController_TabBarItem;

  /// @brief Field _contentSizeFilter, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__contentSizeFilter, put = __cordl_internal_set__contentSizeFilter)) ::UnityW<::UnityEngine::UI::ContentSizeFitter> _contentSizeFilter;

  /// @brief Field _items, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__items,
                      put = __cordl_internal_set__items)) ::ArrayW<::GlobalNamespace::TabBarViewController_TabBarItem*, ::Array<::GlobalNamespace::TabBarViewController_TabBarItem*>*>
      _items;

  /// @brief Field _labels, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__labels, put = __cordl_internal_set__labels)) ::ArrayW<::StringW, ::Array<::StringW>*> _labels;

  /// @brief Field _segmentedControll, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__segmentedControll, put = __cordl_internal_set__segmentedControll)) ::UnityW<::HMUI::TextSegmentedControl> _segmentedControll;

  /// @brief Field _shouldReloadData, offset 0x98, size 0x1
  __declspec(property(get = __cordl_internal_get__shouldReloadData, put = __cordl_internal_set__shouldReloadData)) bool _shouldReloadData;

  __declspec(property(get = get_selectedCellNumber)) int32_t selectedCellNumber;

  __declspec(property(get = get_sizeToFit, put = set_sizeToFit)) bool sizeToFit;

  /// @brief Method Clear, addr 0x3afc41c, size 0x54, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method DidActivate, addr 0x3afc470, size 0xc4, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method HandleDidSelectCell, addr 0x3afc60c, size 0x50, virtual false, abstract: false, final false
  inline void HandleDidSelectCell(::HMUI::SegmentedControl* segmentedControl, int32_t cellNumber);

  static inline ::GlobalNamespace::TabBarViewController* New_ctor();

  /// @brief Method OnDestroy, addr 0x3afc534, size 0xd8, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method SelectItem, addr 0x3afc400, size 0x1c, virtual false, abstract: false, final false
  inline void SelectItem(int32_t index);

  /// @brief Method Setup, addr 0x3afc270, size 0x190, virtual false, abstract: false, final false
  inline void Setup(::ArrayW<::GlobalNamespace::TabBarViewController_TabBarItem*, ::Array<::GlobalNamespace::TabBarViewController_TabBarItem*>*> items);

  constexpr ::UnityW<::UnityEngine::UI::ContentSizeFitter> const& __cordl_internal_get__contentSizeFilter() const;

  constexpr ::UnityW<::UnityEngine::UI::ContentSizeFitter>& __cordl_internal_get__contentSizeFilter();

  constexpr ::ArrayW<::GlobalNamespace::TabBarViewController_TabBarItem*, ::Array<::GlobalNamespace::TabBarViewController_TabBarItem*>*> const& __cordl_internal_get__items() const;

  constexpr ::ArrayW<::GlobalNamespace::TabBarViewController_TabBarItem*, ::Array<::GlobalNamespace::TabBarViewController_TabBarItem*>*>& __cordl_internal_get__items();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get__labels() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get__labels();

  constexpr ::UnityW<::HMUI::TextSegmentedControl> const& __cordl_internal_get__segmentedControll() const;

  constexpr ::UnityW<::HMUI::TextSegmentedControl>& __cordl_internal_get__segmentedControll();

  constexpr bool const& __cordl_internal_get__shouldReloadData() const;

  constexpr bool& __cordl_internal_get__shouldReloadData();

  constexpr void __cordl_internal_set__contentSizeFilter(::UnityW<::UnityEngine::UI::ContentSizeFitter> value);

  constexpr void __cordl_internal_set__items(::ArrayW<::GlobalNamespace::TabBarViewController_TabBarItem*, ::Array<::GlobalNamespace::TabBarViewController_TabBarItem*>*> value);

  constexpr void __cordl_internal_set__labels(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set__segmentedControll(::UnityW<::HMUI::TextSegmentedControl> value);

  constexpr void __cordl_internal_set__shouldReloadData(bool value);

  /// @brief Method .ctor, addr 0x3afc65c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_selectedCellNumber, addr 0x3afc254, size 0x1c, virtual false, abstract: false, final false
  inline int32_t get_selectedCellNumber();

  /// @brief Method get_sizeToFit, addr 0x3afc238, size 0x1c, virtual false, abstract: false, final false
  inline bool get_sizeToFit();

  /// @brief Method set_sizeToFit, addr 0x3afc218, size 0x20, virtual false, abstract: false, final false
  inline void set_sizeToFit(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TabBarViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TabBarViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TabBarViewController(TabBarViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TabBarViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TabBarViewController(TabBarViewController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4966 };

  /// @brief Field _segmentedControll, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::HMUI::TextSegmentedControl> ____segmentedControll;

  /// @brief Field _contentSizeFilter, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::ContentSizeFitter> ____contentSizeFilter;

  /// @brief Field _labels, offset: 0x88, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ____labels;

  /// @brief Field _items, offset: 0x90, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::TabBarViewController_TabBarItem*, ::Array<::GlobalNamespace::TabBarViewController_TabBarItem*>*> ____items;

  /// @brief Field _shouldReloadData, offset: 0x98, size: 0x1, def value: None
  bool ____shouldReloadData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TabBarViewController, ____segmentedControll) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TabBarViewController, ____contentSizeFilter) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TabBarViewController, ____labels) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TabBarViewController, ____items) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TabBarViewController, ____shouldReloadData) == 0x98, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TabBarViewController, 0xa0>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TabBarViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TabBarViewController*, "", "TabBarViewController");
NEED_NO_BOX(::GlobalNamespace::TabBarViewController_TabBarItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TabBarViewController_TabBarItem*, "", "TabBarViewController/TabBarItem");
