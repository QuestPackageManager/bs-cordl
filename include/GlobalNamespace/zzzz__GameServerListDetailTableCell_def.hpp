#pragma once
// IWYU pragma private; include "GlobalNamespace/GameServerListDetailTableCell.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__TableCell_def.hpp"
CORDL_MODULE_EXPORT(GameServerListDetailTableCell)
namespace HMUI {
class ButtonBinder;
}
namespace System {
class Action;
}
namespace UnityEngine::UI {
class Button;
}
// Forward declare root types
namespace GlobalNamespace {
class GameServerListDetailTableCell;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameServerListDetailTableCell);
// Dependencies HMUI.TableCell
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameServerListDetailTableCell
class CORDL_TYPE GameServerListDetailTableCell : public ::HMUI::TableCell {
public:
  // Declarations
  /// @brief Field _buttonBinder, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__buttonBinder, put = __cordl_internal_set__buttonBinder)) ::HMUI::ButtonBinder* _buttonBinder;

  /// @brief Field _joinServerButton, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__joinServerButton, put = __cordl_internal_set__joinServerButton)) ::UnityW<::UnityEngine::UI::Button> _joinServerButton;

  /// @brief Field joinServerButtonWasPressedEvent, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_joinServerButtonWasPressedEvent, put = __cordl_internal_set_joinServerButtonWasPressedEvent)) ::System::Action* joinServerButtonWasPressedEvent;

  static inline ::GlobalNamespace::GameServerListDetailTableCell* New_ctor();

  /// @brief Method Start, addr 0x3bfc630, size 0xa4, virtual true, abstract: false, final false
  inline void Start();

  /// @brief Method <Start>b__5_0, addr 0x3bfc734, size 0x1c, virtual false, abstract: false, final false
  inline void _Start_b__5_0();

  constexpr ::HMUI::ButtonBinder* const& __cordl_internal_get__buttonBinder() const;

  constexpr ::HMUI::ButtonBinder*& __cordl_internal_get__buttonBinder();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__joinServerButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__joinServerButton();

  constexpr ::System::Action* const& __cordl_internal_get_joinServerButtonWasPressedEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_joinServerButtonWasPressedEvent();

  constexpr void __cordl_internal_set__buttonBinder(::HMUI::ButtonBinder* value);

  constexpr void __cordl_internal_set__joinServerButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set_joinServerButtonWasPressedEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x3bfc6d4, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_joinServerButtonWasPressedEvent, addr 0x3bfc4f8, size 0x9c, virtual false, abstract: false, final false
  inline void add_joinServerButtonWasPressedEvent(::System::Action* value);

  /// @brief Method remove_joinServerButtonWasPressedEvent, addr 0x3bfc594, size 0x9c, virtual false, abstract: false, final false
  inline void remove_joinServerButtonWasPressedEvent(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameServerListDetailTableCell();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameServerListDetailTableCell", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameServerListDetailTableCell(GameServerListDetailTableCell&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameServerListDetailTableCell", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameServerListDetailTableCell(GameServerListDetailTableCell const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4751 };

  /// @brief Field _joinServerButton, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____joinServerButton;

  /// @brief Field joinServerButtonWasPressedEvent, offset: 0x80, size: 0x8, def value: None
  ::System::Action* ___joinServerButtonWasPressedEvent;

  /// @brief Field _buttonBinder, offset: 0x88, size: 0x8, def value: None
  ::HMUI::ButtonBinder* ____buttonBinder;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameServerListDetailTableCell, ____joinServerButton) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerListDetailTableCell, ___joinServerButtonWasPressedEvent) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerListDetailTableCell, ____buttonBinder) == 0x88, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameServerListDetailTableCell, 0x90>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameServerListDetailTableCell);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameServerListDetailTableCell*, "", "GameServerListDetailTableCell");
