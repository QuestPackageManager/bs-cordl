#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MenuDestination_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SelectMultiplayerLobbyDestination)
// Forward declare root types
namespace GlobalNamespace {
class SelectMultiplayerLobbyDestination;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SelectMultiplayerLobbyDestination);
// Type: ::SelectMultiplayerLobbyDestination
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4157))
// CS Name: ::SelectMultiplayerLobbyDestination*
class CORDL_TYPE SelectMultiplayerLobbyDestination : public ::GlobalNamespace::MenuDestination {
public:
  // Declarations
  /// @brief Field lobbySecret, offset 0x10, size 0x8
  __declspec(property(get = __get_lobbySecret, put = __set_lobbySecret))::StringW lobbySecret;

  /// @brief Field lobbyCode, offset 0x18, size 0x8
  __declspec(property(get = __get_lobbyCode, put = __set_lobbyCode))::StringW lobbyCode;

  constexpr ::StringW& __get_lobbySecret();

  constexpr ::StringW const& __get_lobbySecret() const;

  constexpr void __set_lobbySecret(::StringW value);

  constexpr ::StringW& __get_lobbyCode();

  constexpr ::StringW const& __get_lobbyCode() const;

  constexpr void __set_lobbyCode(::StringW value);

  static inline ::GlobalNamespace::SelectMultiplayerLobbyDestination* New_ctor(::StringW lobbySecret, ::StringW lobbyCode);

  /// @brief Method .ctor addr 0x223cfa8 size 0x2c virtual false final false
  inline void _ctor(::StringW lobbySecret, ::StringW lobbyCode);

  static inline ::GlobalNamespace::SelectMultiplayerLobbyDestination* New_ctor(uint64_t roomId);

  /// @brief Method .ctor addr 0x223cfd4 size 0xd4 virtual false final false
  inline void _ctor(uint64_t roomId);

  static inline ::GlobalNamespace::SelectMultiplayerLobbyDestination* New_ctor(::StringW lobbyCode);

  /// @brief Method .ctor addr 0x223dd28 size 0x28 virtual false final false
  inline void _ctor(::StringW lobbyCode);

  // Ctor Parameters [CppParam { name: "", ty: "SelectMultiplayerLobbyDestination", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SelectMultiplayerLobbyDestination(SelectMultiplayerLobbyDestination&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SelectMultiplayerLobbyDestination", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SelectMultiplayerLobbyDestination(SelectMultiplayerLobbyDestination const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SelectMultiplayerLobbyDestination();

public:
  /// @brief Field lobbySecret, offset: 0x10, size: 0x8, def value: None
  ::StringW ___lobbySecret;

  /// @brief Field lobbyCode, offset: 0x18, size: 0x8, def value: None
  ::StringW ___lobbyCode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SelectMultiplayerLobbyDestination, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SelectMultiplayerLobbyDestination);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SelectMultiplayerLobbyDestination*, "", "SelectMultiplayerLobbyDestination");
