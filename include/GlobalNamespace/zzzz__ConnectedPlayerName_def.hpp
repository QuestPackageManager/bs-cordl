#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ConnectedPlayerName)
namespace TMPro {
class TextMeshProUGUI;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
// Forward declare root types
namespace GlobalNamespace {
class ConnectedPlayerName;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ConnectedPlayerName);
// Type: ::ConnectedPlayerName
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4089))
// CS Name: ::ConnectedPlayerName*
class CORDL_TYPE ConnectedPlayerName : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _nameText, offset 0x18, size 0x8
  __declspec(property(get = __get__nameText, put = __set__nameText))::TMPro::TextMeshProUGUI* _nameText;

  /// @brief Field _connectedPlayer, offset 0x20, size 0x8
  __declspec(property(get = __get__connectedPlayer, put = __set__connectedPlayer))::GlobalNamespace::IConnectedPlayer* _connectedPlayer;

  constexpr ::TMPro::TextMeshProUGUI*& __get__nameText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__nameText() const;

  constexpr void __set__nameText(::TMPro::TextMeshProUGUI* value);

  constexpr ::GlobalNamespace::IConnectedPlayer*& __get__connectedPlayer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectedPlayer*> const& __get__connectedPlayer() const;

  constexpr void __set__connectedPlayer(::GlobalNamespace::IConnectedPlayer* value);

  /// @brief Method Start addr 0x20d59b8 size 0xc4 virtual false final false
  inline void Start();

  static inline ::GlobalNamespace::ConnectedPlayerName* New_ctor();

  /// @brief Method .ctor addr 0x20d5a7c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ConnectedPlayerName", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConnectedPlayerName(ConnectedPlayerName&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConnectedPlayerName", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConnectedPlayerName(ConnectedPlayerName const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConnectedPlayerName();

public:
  /// @brief Field _nameText, offset: 0x18, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____nameText;

  /// @brief Field _connectedPlayer, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IConnectedPlayer* ____connectedPlayer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ConnectedPlayerName, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectedPlayerName, ____nameText) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectedPlayerName, ____connectedPlayer) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ConnectedPlayerName);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ConnectedPlayerName*, "", "ConnectedPlayerName");
