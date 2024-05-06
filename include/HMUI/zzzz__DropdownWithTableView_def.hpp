#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DropdownWithTableView)
namespace HMUI {
class ModalView;
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
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 68, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::HMUI::DropdownWithTableView*
class CORDL_TYPE DropdownWithTableView : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _button, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__button, put = __cordl_internal_set__button))::UnityW<::UnityEngine::UI::Button> _button;

  /// @brief Field _modalView, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__modalView, put = __cordl_internal_set__modalView))::UnityW<::HMUI::ModalView> _modalView;

  /// @brief Field _numberOfVisibleCells, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__numberOfVisibleCells, put = __cordl_internal_set__numberOfVisibleCells)) int32_t _numberOfVisibleCells;

  /// @brief Field <selectedIndex>k__BackingField, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__selectedIndex_k__BackingField, put = __cordl_internal_set__selectedIndex_k__BackingField)) int32_t _selectedIndex_k__BackingField;

  /// @brief Field _tableView, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__tableView, put = __cordl_internal_set__tableView))::UnityW<::HMUI::TableView> _tableView;

  /// @brief Field didSelectCellWithIdxEvent, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_didSelectCellWithIdxEvent,
                      put = __cordl_internal_set_didSelectCellWithIdxEvent))::System::Action_2<::UnityW<::HMUI::DropdownWithTableView>, int32_t>* didSelectCellWithIdxEvent;

  __declspec(property(get = get_interactable, put = set_interactable)) bool interactable;

  __declspec(property(get = get_selectedIndex, put = set_selectedIndex)) int32_t selectedIndex;

  __declspec(property(get = get_tableViewDataSource))::HMUI::__TableView__IDataSource* tableViewDataSource;

  /// @brief Method Awake, addr 0x2513da4, size 0x17c, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method HandleModalViewBlockerClicked, addr 0x251421c, size 0x8, virtual false, abstract: false, final false
  inline void HandleModalViewBlockerClicked();

  /// @brief Method HandleTableViewDidSelectCellWithIdx, addr 0x25141e4, size 0x38, virtual false, abstract: false, final false
  inline void HandleTableViewDidSelectCellWithIdx(::HMUI::TableView* tableView, int32_t idx);

  /// @brief Method Hide, addr 0x2513f28, size 0x3c, virtual false, abstract: false, final false
  inline void Hide(bool animated);

  /// @brief Method Init, addr 0x2513ba4, size 0x20, virtual false, abstract: false, final false
  inline void Init(::HMUI::__TableView__IDataSource* tableViewDataSource);

  static inline ::HMUI::DropdownWithTableView* New_ctor();

  /// @brief Method OnButtonClick, addr 0x251415c, size 0x8, virtual false, abstract: false, final false
  inline void OnButtonClick();

  /// @brief Method OnDestroy, addr 0x2513f64, size 0x1f8, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnDisable, addr 0x2513f20, size 0x8, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method RefreshSize, addr 0x2513bfc, size 0x180, virtual false, abstract: false, final false
  inline void RefreshSize(::HMUI::__TableView__IDataSource* dataSource);

  /// @brief Method ReloadData, addr 0x2513bc4, size 0x38, virtual false, abstract: false, final false
  inline void ReloadData();

  /// @brief Method SelectCellWithIdx, addr 0x2513d7c, size 0x28, virtual true, abstract: false, final false
  inline void SelectCellWithIdx(int32_t idx);

  /// @brief Method Show, addr 0x2514164, size 0x80, virtual false, abstract: false, final false
  inline void Show(bool animated);

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__button() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__button();

  constexpr ::UnityW<::HMUI::ModalView> const& __cordl_internal_get__modalView() const;

  constexpr ::UnityW<::HMUI::ModalView>& __cordl_internal_get__modalView();

  constexpr int32_t const& __cordl_internal_get__numberOfVisibleCells() const;

  constexpr int32_t& __cordl_internal_get__numberOfVisibleCells();

  constexpr int32_t const& __cordl_internal_get__selectedIndex_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__selectedIndex_k__BackingField();

  constexpr ::UnityW<::HMUI::TableView> const& __cordl_internal_get__tableView() const;

  constexpr ::UnityW<::HMUI::TableView>& __cordl_internal_get__tableView();

  constexpr ::System::Action_2<::UnityW<::HMUI::DropdownWithTableView>, int32_t>*& __cordl_internal_get_didSelectCellWithIdxEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityW<::HMUI::DropdownWithTableView>, int32_t>*> const& __cordl_internal_get_didSelectCellWithIdxEvent() const;

  constexpr void __cordl_internal_set__button(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__modalView(::UnityW<::HMUI::ModalView> value);

  constexpr void __cordl_internal_set__numberOfVisibleCells(int32_t value);

  constexpr void __cordl_internal_set__selectedIndex_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__tableView(::UnityW<::HMUI::TableView> value);

  constexpr void __cordl_internal_set_didSelectCellWithIdxEvent(::System::Action_2<::UnityW<::HMUI::DropdownWithTableView>, int32_t>* value);

  /// @brief Method .ctor, addr 0x2514224, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didSelectCellWithIdxEvent, addr 0x25139dc, size 0xb0, virtual false, abstract: false, final false
  inline void add_didSelectCellWithIdxEvent(::System::Action_2<::UnityW<::HMUI::DropdownWithTableView>, int32_t>* value);

  /// @brief Method get_interactable, addr 0x2513b68, size 0x1c, virtual false, abstract: false, final false
  inline bool get_interactable();

  /// @brief Method get_selectedIndex, addr 0x2513b58, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_selectedIndex();

  /// @brief Method get_tableViewDataSource, addr 0x2513b3c, size 0x1c, virtual false, abstract: false, final false
  inline ::HMUI::__TableView__IDataSource* get_tableViewDataSource();

  /// @brief Method remove_didSelectCellWithIdxEvent, addr 0x2513a8c, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didSelectCellWithIdxEvent(::System::Action_2<::UnityW<::HMUI::DropdownWithTableView>, int32_t>* value);

  /// @brief Method set_interactable, addr 0x2513b84, size 0x20, virtual false, abstract: false, final false
  inline void set_interactable(bool value);

  /// @brief Method set_selectedIndex, addr 0x2513b60, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field _button, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____button;

  /// @brief Field _tableView, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::HMUI::TableView> ____tableView;

  /// @brief Field _modalView, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::HMUI::ModalView> ____modalView;

  /// @brief Field _numberOfVisibleCells, offset: 0x30, size: 0x4, def value: None
  int32_t ____numberOfVisibleCells;

  /// @brief Field didSelectCellWithIdxEvent, offset: 0x38, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::HMUI::DropdownWithTableView>, int32_t>* ___didSelectCellWithIdxEvent;

  /// @brief Field <selectedIndex>k__BackingField, offset: 0x40, size: 0x4, def value: None
  int32_t ____selectedIndex_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::DropdownWithTableView, 0x48>, "Size mismatch!");

static_assert(offsetof(::HMUI::DropdownWithTableView, ____button) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HMUI::DropdownWithTableView, ____tableView) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::DropdownWithTableView, ____modalView) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HMUI::DropdownWithTableView, ____numberOfVisibleCells) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HMUI::DropdownWithTableView, ___didSelectCellWithIdxEvent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::HMUI::DropdownWithTableView, ____selectedIndex_k__BackingField) == 0x40, "Offset mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::DropdownWithTableView);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::DropdownWithTableView*, "HMUI", "DropdownWithTableView");
