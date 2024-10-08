#pragma once
// IWYU pragma private; include "HMUI/DropdownWithTableView.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DropdownWithTableView)
namespace HMUI {
class ModalViewBase;
}
namespace HMUI {
class TableView;
}
namespace HMUI {
class __TableView__IDataSource;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace UnityEngine::UI {
class Button;
}
// Forward declare root types
namespace HMUI {
class DropdownWithTableView;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::DropdownWithTableView);
// Type: HMUI::DropdownWithTableView
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 84, minimum_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::HMUI::DropdownWithTableView*
class CORDL_TYPE DropdownWithTableView : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _button, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__button, put = __cordl_internal_set__button)) ::UnityW<::UnityEngine::UI::Button> _button;

  /// @brief Field _extraSpace, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__extraSpace, put = __cordl_internal_set__extraSpace)) float_t _extraSpace;

  /// @brief Field _hideOnSelection, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get__hideOnSelection, put = __cordl_internal_set__hideOnSelection)) bool _hideOnSelection;

  /// @brief Field _modalView, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__modalView, put = __cordl_internal_set__modalView)) ::UnityW<::HMUI::ModalViewBase> _modalView;

  /// @brief Field _numberOfVisibleCells, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__numberOfVisibleCells, put = __cordl_internal_set__numberOfVisibleCells)) int32_t _numberOfVisibleCells;

  /// @brief Field <selectedIndex>k__BackingField, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__selectedIndex_k__BackingField, put = __cordl_internal_set__selectedIndex_k__BackingField)) int32_t _selectedIndex_k__BackingField;

  /// @brief Field _tableView, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__tableView, put = __cordl_internal_set__tableView)) ::UnityW<::HMUI::TableView> _tableView;

  /// @brief Field didSelectCellWithIdxEvent, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_didSelectCellWithIdxEvent,
                      put = __cordl_internal_set_didSelectCellWithIdxEvent)) ::System::Action_2<::UnityW<::HMUI::DropdownWithTableView>, int32_t>* didSelectCellWithIdxEvent;

  __declspec(property(get = get_interactable, put = set_interactable)) bool interactable;

  __declspec(property(get = get_selectedIndex, put = set_selectedIndex)) int32_t selectedIndex;

  __declspec(property(get = get_tableViewDataSource)) ::HMUI::__TableView__IDataSource* tableViewDataSource;

  /// @brief Method Awake, addr 0x398b368, size 0x174, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method GetNewTableViewRectSize, addr 0x398b73c, size 0x154, virtual false, abstract: false, final false
  inline float_t GetNewTableViewRectSize(::HMUI::__TableView__IDataSource* dataSource);

  /// @brief Method HandleModalViewBlockerClicked, addr 0x398b964, size 0x8, virtual false, abstract: false, final false
  inline void HandleModalViewBlockerClicked();

  /// @brief Method HandleTableViewDidSelectCellWithIdx, addr 0x398b91c, size 0x48, virtual false, abstract: false, final false
  inline void HandleTableViewDidSelectCellWithIdx(::HMUI::TableView* tableView, int32_t idx);

  /// @brief Method Hide, addr 0x398b4e4, size 0x40, virtual false, abstract: false, final false
  inline void Hide(bool animated);

  /// @brief Method Init, addr 0x398b2d4, size 0x28, virtual false, abstract: false, final false
  inline void Init(::HMUI::__TableView__IDataSource* tableViewDataSource);

  static inline ::HMUI::DropdownWithTableView* New_ctor();

  /// @brief Method OnButtonClick, addr 0x398b890, size 0x8, virtual false, abstract: false, final false
  inline void OnButtonClick();

  /// @brief Method OnDestroy, addr 0x398b524, size 0x1f0, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnDisable, addr 0x398b4dc, size 0x8, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method RefreshSize, addr 0x398b714, size 0x28, virtual true, abstract: false, final false
  inline void RefreshSize(::HMUI::__TableView__IDataSource* dataSource);

  /// @brief Method ReloadData, addr 0x398b2fc, size 0x44, virtual false, abstract: false, final false
  inline void ReloadData();

  /// @brief Method SelectCellWithIdx, addr 0x398b340, size 0x28, virtual true, abstract: false, final false
  inline void SelectCellWithIdx(int32_t idx);

  /// @brief Method Show, addr 0x398b898, size 0x84, virtual false, abstract: false, final false
  inline void Show(bool animated);

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__button() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__button();

  constexpr float_t const& __cordl_internal_get__extraSpace() const;

  constexpr float_t& __cordl_internal_get__extraSpace();

  constexpr bool const& __cordl_internal_get__hideOnSelection() const;

  constexpr bool& __cordl_internal_get__hideOnSelection();

  constexpr ::UnityW<::HMUI::ModalViewBase> const& __cordl_internal_get__modalView() const;

  constexpr ::UnityW<::HMUI::ModalViewBase>& __cordl_internal_get__modalView();

  constexpr int32_t const& __cordl_internal_get__numberOfVisibleCells() const;

  constexpr int32_t& __cordl_internal_get__numberOfVisibleCells();

  constexpr int32_t const& __cordl_internal_get__selectedIndex_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__selectedIndex_k__BackingField();

  constexpr ::UnityW<::HMUI::TableView> const& __cordl_internal_get__tableView() const;

  constexpr ::UnityW<::HMUI::TableView>& __cordl_internal_get__tableView();

  constexpr ::System::Action_2<::UnityW<::HMUI::DropdownWithTableView>, int32_t>*& __cordl_internal_get_didSelectCellWithIdxEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityW<::HMUI::DropdownWithTableView>, int32_t>*> const& __cordl_internal_get_didSelectCellWithIdxEvent() const;

  constexpr void __cordl_internal_set__button(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__extraSpace(float_t value);

  constexpr void __cordl_internal_set__hideOnSelection(bool value);

  constexpr void __cordl_internal_set__modalView(::UnityW<::HMUI::ModalViewBase> value);

  constexpr void __cordl_internal_set__numberOfVisibleCells(int32_t value);

  constexpr void __cordl_internal_set__selectedIndex_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__tableView(::UnityW<::HMUI::TableView> value);

  constexpr void __cordl_internal_set_didSelectCellWithIdxEvent(::System::Action_2<::UnityW<::HMUI::DropdownWithTableView>, int32_t>* value);

  /// @brief Method .ctor, addr 0x398b96c, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didSelectCellWithIdxEvent, addr 0x398b10c, size 0xb0, virtual false, abstract: false, final false
  inline void add_didSelectCellWithIdxEvent(::System::Action_2<::UnityW<::HMUI::DropdownWithTableView>, int32_t>* value);

  /// @brief Method get_interactable, addr 0x398b298, size 0x1c, virtual false, abstract: false, final false
  inline bool get_interactable();

  /// @brief Method get_selectedIndex, addr 0x398b288, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_selectedIndex();

  /// @brief Method get_tableViewDataSource, addr 0x398b26c, size 0x1c, virtual false, abstract: false, final false
  inline ::HMUI::__TableView__IDataSource* get_tableViewDataSource();

  /// @brief Method remove_didSelectCellWithIdxEvent, addr 0x398b1bc, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didSelectCellWithIdxEvent(::System::Action_2<::UnityW<::HMUI::DropdownWithTableView>, int32_t>* value);

  /// @brief Method set_interactable, addr 0x398b2b4, size 0x20, virtual false, abstract: false, final false
  inline void set_interactable(bool value);

  /// @brief Method set_selectedIndex, addr 0x398b290, size 0x8, virtual false, abstract: false, final false
  inline void set_selectedIndex(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DropdownWithTableView();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DropdownWithTableView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DropdownWithTableView(DropdownWithTableView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DropdownWithTableView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DropdownWithTableView(DropdownWithTableView const&) = delete;

  /// @brief Field _button, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____button;

  /// @brief Field _tableView, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::HMUI::TableView> ____tableView;

  /// @brief Field _modalView, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::HMUI::ModalViewBase> ____modalView;

  /// @brief Field _extraSpace, offset: 0x38, size: 0x4, def value: None
  float_t ____extraSpace;

  /// @brief Field _numberOfVisibleCells, offset: 0x3c, size: 0x4, def value: None
  int32_t ____numberOfVisibleCells;

  /// @brief Field _hideOnSelection, offset: 0x40, size: 0x1, def value: None
  bool ____hideOnSelection;

  /// @brief Field didSelectCellWithIdxEvent, offset: 0x48, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::HMUI::DropdownWithTableView>, int32_t>* ___didSelectCellWithIdxEvent;

  /// @brief Field <selectedIndex>k__BackingField, offset: 0x50, size: 0x4, def value: None
  int32_t ____selectedIndex_k__BackingField;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16027 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::DropdownWithTableView, 0x58>, "Size mismatch!");

static_assert(offsetof(::HMUI::DropdownWithTableView, ____button) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::DropdownWithTableView, ____tableView) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HMUI::DropdownWithTableView, ____modalView) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HMUI::DropdownWithTableView, ____extraSpace) == 0x38, "Offset mismatch!");

static_assert(offsetof(::HMUI::DropdownWithTableView, ____numberOfVisibleCells) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::HMUI::DropdownWithTableView, ____hideOnSelection) == 0x40, "Offset mismatch!");

static_assert(offsetof(::HMUI::DropdownWithTableView, ___didSelectCellWithIdxEvent) == 0x48, "Offset mismatch!");

static_assert(offsetof(::HMUI::DropdownWithTableView, ____selectedIndex_k__BackingField) == 0x50, "Offset mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::DropdownWithTableView);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::DropdownWithTableView*, "HMUI", "DropdownWithTableView");
