#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__TableCell_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(NetworkPlayerOptionsTableCell)
namespace GlobalNamespace {
class INetworkPlayer;
}
namespace HMUI {
class ButtonBinder;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine::UI {
class Button;
}
// Forward declare root types
namespace GlobalNamespace {
class NetworkPlayerOptionsTableCell;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NetworkPlayerOptionsTableCell);
// Type: ::NetworkPlayerOptionsTableCell
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(13617))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4889))
// CS Name: ::NetworkPlayerOptionsTableCell*
class CORDL_TYPE NetworkPlayerOptionsTableCell : public ::HMUI::TableCell {
public:
  // Declarations
  /// @brief Field _buttons, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__buttons, put = __cordl_internal_set__buttons))::ArrayW<::UnityW<::UnityEngine::UI::Button>, ::Array<::UnityW<::UnityEngine::UI::Button>>*> _buttons;

  /// @brief Field _buttonTexts, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__buttonTexts,
                      put = __cordl_internal_set__buttonTexts))::ArrayW<::UnityW<::TMPro::TextMeshProUGUI>, ::Array<::UnityW<::TMPro::TextMeshProUGUI>>*> _buttonTexts;

  /// @brief Field _buttonBinder, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__buttonBinder, put = __cordl_internal_set__buttonBinder))::HMUI::ButtonBinder* _buttonBinder;

  /// @brief Field _player, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__player, put = __cordl_internal_set__player))::GlobalNamespace::INetworkPlayer* _player;

  __declspec(property(get = get_player, put = set_player))::GlobalNamespace::INetworkPlayer* player;

  constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Button>, ::Array<::UnityW<::UnityEngine::UI::Button>>*>& __cordl_internal_get__buttons();

  constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Button>, ::Array<::UnityW<::UnityEngine::UI::Button>>*> const& __cordl_internal_get__buttons() const;

  constexpr void __cordl_internal_set__buttons(::ArrayW<::UnityW<::UnityEngine::UI::Button>, ::Array<::UnityW<::UnityEngine::UI::Button>>*> value);

  constexpr ::ArrayW<::UnityW<::TMPro::TextMeshProUGUI>, ::Array<::UnityW<::TMPro::TextMeshProUGUI>>*>& __cordl_internal_get__buttonTexts();

  constexpr ::ArrayW<::UnityW<::TMPro::TextMeshProUGUI>, ::Array<::UnityW<::TMPro::TextMeshProUGUI>>*> const& __cordl_internal_get__buttonTexts() const;

  constexpr void __cordl_internal_set__buttonTexts(::ArrayW<::UnityW<::TMPro::TextMeshProUGUI>, ::Array<::UnityW<::TMPro::TextMeshProUGUI>>*> value);

  constexpr ::HMUI::ButtonBinder*& __cordl_internal_get__buttonBinder();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ButtonBinder*> const& __cordl_internal_get__buttonBinder() const;

  constexpr void __cordl_internal_set__buttonBinder(::HMUI::ButtonBinder* value);

  constexpr ::GlobalNamespace::INetworkPlayer*& __cordl_internal_get__player();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::INetworkPlayer*> const& __cordl_internal_get__player() const;

  constexpr void __cordl_internal_set__player(::GlobalNamespace::INetworkPlayer* value);

  /// @brief Method get_player, addr 0x22dac98, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::INetworkPlayer* get_player();

  /// @brief Method set_player, addr 0x22daca0, size 0x8, virtual false, abstract: false, final false
  inline void set_player(::GlobalNamespace::INetworkPlayer* value);

  /// @brief Method Refresh, addr 0x22daca8, size 0xb74, virtual false, abstract: false, final false
  inline void Refresh();

  /// @brief Method Block, addr 0x22db81c, size 0xac, virtual false, abstract: false, final false
  inline void Block();

  /// @brief Method Unblock, addr 0x22db8c8, size 0xac, virtual false, abstract: false, final false
  inline void Unblock();

  /// @brief Method Join, addr 0x22db974, size 0xac, virtual false, abstract: false, final false
  inline void Join();

  /// @brief Method Invite, addr 0x22dba20, size 0xac, virtual false, abstract: false, final false
  inline void Invite();

  /// @brief Method Kick, addr 0x22dbacc, size 0xac, virtual false, abstract: false, final false
  inline void Kick();

  /// @brief Method Leave, addr 0x22dbb78, size 0xac, virtual false, abstract: false, final false
  inline void Leave();

  static inline ::GlobalNamespace::NetworkPlayerOptionsTableCell* New_ctor();

  /// @brief Method .ctor, addr 0x22dbc24, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "NetworkPlayerOptionsTableCell", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetworkPlayerOptionsTableCell(NetworkPlayerOptionsTableCell&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetworkPlayerOptionsTableCell", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetworkPlayerOptionsTableCell(NetworkPlayerOptionsTableCell const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetworkPlayerOptionsTableCell();

public:
  /// @brief Field _buttons, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::UI::Button>, ::Array<::UnityW<::UnityEngine::UI::Button>>*> ____buttons;

  /// @brief Field _buttonTexts, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<::UnityW<::TMPro::TextMeshProUGUI>, ::Array<::UnityW<::TMPro::TextMeshProUGUI>>*> ____buttonTexts;

  /// @brief Field _buttonBinder, offset: 0x68, size: 0x8, def value: None
  ::HMUI::ButtonBinder* ____buttonBinder;

  /// @brief Field _player, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::INetworkPlayer* ____player;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NetworkPlayerOptionsTableCell, 0x78>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkPlayerOptionsTableCell, ____buttons) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkPlayerOptionsTableCell, ____buttonTexts) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkPlayerOptionsTableCell, ____buttonBinder) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkPlayerOptionsTableCell, ____player) == 0x70, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NetworkPlayerOptionsTableCell);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NetworkPlayerOptionsTableCell*, "", "NetworkPlayerOptionsTableCell");
