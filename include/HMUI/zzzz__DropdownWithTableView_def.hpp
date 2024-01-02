#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DropdownWithTableView)
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace HMUI {
class __TableView__IDataSource;
}
namespace HMUI {
class ModalView;
}
namespace UnityEngine::UI {
class Button;
}
namespace HMUI {
class TableView;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13624))
// CS Name: ::HMUI::DropdownWithTableView*
class CORDL_TYPE DropdownWithTableView : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _button, offset 0x18, size 0x8
  __declspec(property(get = __get__button, put = __set__button))::UnityEngine::UI::Button* _button;

  /// @brief Field _tableView, offset 0x20, size 0x8
  __declspec(property(get = __get__tableView, put = __set__tableView))::HMUI::TableView* _tableView;

  /// @brief Field _modalView, offset 0x28, size 0x8
  __declspec(property(get = __get__modalView, put = __set__modalView))::HMUI::ModalView* _modalView;

  /// @brief Field _numberOfVisibleCells, offset 0x30, size 0x4
  __declspec(property(get = __get__numberOfVisibleCells, put = __set__numberOfVisibleCells)) int32_t _numberOfVisibleCells;

  /// @brief Field didSelectCellWithIdxEvent, offset 0x38, size 0x8
  __declspec(property(get = __get_didSelectCellWithIdxEvent, put = __set_didSelectCellWithIdxEvent))::System::Action_2<::HMUI::DropdownWithTableView*, int32_t>* didSelectCellWithIdxEvent;

  /// @brief Field <selectedIndex>k__BackingField, offset 0x40, size 0x4
  __declspec(property(get = __get__selectedIndex_k__BackingField, put = __set__selectedIndex_k__BackingField)) int32_t _selectedIndex_k__BackingField;

  __declspec(property(get = get_tableViewDataSource))::HMUI::__TableView__IDataSource* tableViewDataSource;

  __declspec(property(get = get_selectedIndex, put = set_selectedIndex)) int32_t selectedIndex;

  constexpr ::UnityEngine::UI::Button*& __get__button();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__button() const;

  constexpr void __set__button(::UnityEngine::UI::Button* value);

  constexpr ::HMUI::TableView*& __get__tableView();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::TableView*> const& __get__tableView() const;

  constexpr void __set__tableView(::HMUI::TableView* value);

  constexpr ::HMUI::ModalView*& __get__modalView();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ModalView*> const& __get__modalView() const;

  constexpr void __set__modalView(::HMUI::ModalView* value);

  constexpr int32_t& __get__numberOfVisibleCells();

  constexpr int32_t const& __get__numberOfVisibleCells() const;

  constexpr void __set__numberOfVisibleCells(int32_t value);

  constexpr ::System::Action_2<::HMUI::DropdownWithTableView*, int32_t>*& __get_didSelectCellWithIdxEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::HMUI::DropdownWithTableView*, int32_t>*> const& __get_didSelectCellWithIdxEvent() const;

  constexpr void __set_didSelectCellWithIdxEvent(::System::Action_2<::HMUI::DropdownWithTableView*, int32_t>* value);

  constexpr int32_t& __get__selectedIndex_k__BackingField();

  constexpr int32_t const& __get__selectedIndex_k__BackingField() const;

  constexpr void __set__selectedIndex_k__BackingField(int32_t value);

  /// @brief Method add_didSelectCellWithIdxEvent, addr 0x2130b30, size 0xb0, virtual false, abstract: false, final false
  inline void add_didSelectCellWithIdxEvent(::System::Action_2<::HMUI::DropdownWithTableView*, int32_t>* value);

  /// @brief Method remove_didSelectCellWithIdxEvent, addr 0x2130be0, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didSelectCellWithIdxEvent(::System::Action_2<::HMUI::DropdownWithTableView*, int32_t>* value);

  /// @brief Method get_tableViewDataSource, addr 0x2130c90, size 0x1c, virtual false, abstract: false, final false
  inline ::HMUI::__TableView__IDataSource* get_tableViewDataSource();

  /// @brief Method get_selectedIndex, addr 0x2130cac, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_selectedIndex();

  /// @brief Method set_selectedIndex, addr 0x2130cb4, size 0x8, virtual false, abstract: false, final false
  inline void set_selectedIndex(int32_t value);

  /// @brief Method Init, addr 0x2130cbc, size 0x20, virtual false, abstract: false, final false
  inline void Init(::HMUI::__TableView__IDataSource* tableViewDataSource);

  /// @brief Method ReloadData, addr 0x2130cdc, size 0x38, virtual false, abstract: false, final false
  inline void ReloadData();

  /// @brief Method SelectCellWithIdx, addr 0x2130e94, size 0x28, virtual true, abstract: false, final false
  inline void SelectCellWithIdx(int32_t idx);

  /// @brief Method Awake, addr 0x2130ebc, size 0x17c, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method OnDisable, addr 0x2131038, size 0x8, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnDestroy, addr 0x213107c, size 0x1f8, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method RefreshSize, addr 0x2130d14, size 0x180, virtual false, abstract: false, final false
  inline void RefreshSize(::HMUI::__TableView__IDataSource* dataSource);

  /// @brief Method OnButtonClick, addr 0x2131274, size 0x8, virtual false, abstract: false, final false
  inline void OnButtonClick();

  /// @brief Method HandleTableViewDidSelectCellWithIdx, addr 0x21312fc, size 0x38, virtual false, abstract: false, final false
  inline void HandleTableViewDidSelectCellWithIdx(::HMUI::TableView* tableView, int32_t idx);

  /// @brief Method Hide, addr 0x2131040, size 0x3c, virtual false, abstract: false, final false
  inline void Hide(bool animated);

  /// @brief Method Show, addr 0x213127c, size 0x80, virtual false, abstract: false, final false
  inline void Show(bool animated);

  /// @brief Method HandleModalViewBlockerClicked, addr 0x2131334, size 0x8, virtual false, abstract: false, final false
  inline void HandleModalViewBlockerClicked();

  static inline ::HMUI::DropdownWithTableView* New_ctor();

  /// @brief Method .ctor, addr 0x213133c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "DropdownWithTableView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DropdownWithTableView(DropdownWithTableView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DropdownWithTableView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DropdownWithTableView(DropdownWithTableView const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DropdownWithTableView();

public:
  /// @brief Field _button, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____button;

  /// @brief Field _tableView, offset: 0x20, size: 0x8, def value: None
  ::HMUI::TableView* ____tableView;

  /// @brief Field _modalView, offset: 0x28, size: 0x8, def value: None
  ::HMUI::ModalView* ____modalView;

  /// @brief Field _numberOfVisibleCells, offset: 0x30, size: 0x4, def value: None
  int32_t ____numberOfVisibleCells;

  /// @brief Field didSelectCellWithIdxEvent, offset: 0x38, size: 0x8, def value: None
  ::System::Action_2<::HMUI::DropdownWithTableView*, int32_t>* ___didSelectCellWithIdxEvent;

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
