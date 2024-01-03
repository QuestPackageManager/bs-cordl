#pragma once
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
// Type: ::GameServerListDetailTableCell
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13664))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5421))
// CS Name: ::GameServerListDetailTableCell*
class CORDL_TYPE GameServerListDetailTableCell : public ::HMUI::TableCell {
public:
  // Declarations
  /// @brief Field _joinServerButton, offset 0x58, size 0x8
  __declspec(property(get = __get__joinServerButton, put = __set__joinServerButton))::UnityEngine::UI::Button* _joinServerButton;

  /// @brief Field joinServerButtonWasPressedEvent, offset 0x60, size 0x8
  __declspec(property(get = __get_joinServerButtonWasPressedEvent, put = __set_joinServerButtonWasPressedEvent))::System::Action* joinServerButtonWasPressedEvent;

  /// @brief Field _buttonBinder, offset 0x68, size 0x8
  __declspec(property(get = __get__buttonBinder, put = __set__buttonBinder))::HMUI::ButtonBinder* _buttonBinder;

  constexpr ::UnityEngine::UI::Button*& __get__joinServerButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__joinServerButton() const;

  constexpr void __set__joinServerButton(::UnityEngine::UI::Button* value);

  constexpr ::System::Action*& __get_joinServerButtonWasPressedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_joinServerButtonWasPressedEvent() const;

  constexpr void __set_joinServerButtonWasPressedEvent(::System::Action* value);

  constexpr ::HMUI::ButtonBinder*& __get__buttonBinder();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ButtonBinder*> const& __get__buttonBinder() const;

  constexpr void __set__buttonBinder(::HMUI::ButtonBinder* value);

  /// @brief Method add_joinServerButtonWasPressedEvent, addr 0x2278d10, size 0x9c, virtual false, abstract: false, final false
  inline void add_joinServerButtonWasPressedEvent(::System::Action* value);

  /// @brief Method remove_joinServerButtonWasPressedEvent, addr 0x2278dac, size 0x9c, virtual false, abstract: false, final false
  inline void remove_joinServerButtonWasPressedEvent(::System::Action* value);

  /// @brief Method Start, addr 0x2278e48, size 0xa8, virtual true, abstract: false, final false
  inline void Start();

  static inline ::GlobalNamespace::GameServerListDetailTableCell* New_ctor();

  /// @brief Method .ctor, addr 0x2278ef0, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <Start>b__5_0, addr 0x2278f58, size 0x1c, virtual false, abstract: false, final false
  inline void _Start_b__5_0();

  // Ctor Parameters [CppParam { name: "", ty: "GameServerListDetailTableCell", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameServerListDetailTableCell(GameServerListDetailTableCell&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameServerListDetailTableCell", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameServerListDetailTableCell(GameServerListDetailTableCell const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameServerListDetailTableCell();

public:
  /// @brief Field _joinServerButton, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____joinServerButton;

  /// @brief Field joinServerButtonWasPressedEvent, offset: 0x60, size: 0x8, def value: None
  ::System::Action* ___joinServerButtonWasPressedEvent;

  /// @brief Field _buttonBinder, offset: 0x68, size: 0x8, def value: None
  ::HMUI::ButtonBinder* ____buttonBinder;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameServerListDetailTableCell, 0x70>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerListDetailTableCell, ____joinServerButton) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerListDetailTableCell, ___joinServerButtonWasPressedEvent) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerListDetailTableCell, ____buttonBinder) == 0x68, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameServerListDetailTableCell);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameServerListDetailTableCell*, "", "GameServerListDetailTableCell");
