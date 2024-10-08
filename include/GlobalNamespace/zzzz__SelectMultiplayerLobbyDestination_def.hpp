#pragma once
// IWYU pragma private; include "GlobalNamespace/SelectMultiplayerLobbyDestination.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MenuDestination_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SelectMultiplayerLobbyDestination)
// Forward declare root types
namespace GlobalNamespace {
class SelectMultiplayerLobbyDestination;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SelectMultiplayerLobbyDestination);
// Type: ::SelectMultiplayerLobbyDestination
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SelectMultiplayerLobbyDestination*
class CORDL_TYPE SelectMultiplayerLobbyDestination : public ::GlobalNamespace::MenuDestination {
public:
  // Declarations
  /// @brief Field lobbyCode, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_lobbyCode, put = __cordl_internal_set_lobbyCode)) ::StringW lobbyCode;

  /// @brief Field lobbySecret, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_lobbySecret, put = __cordl_internal_set_lobbySecret)) ::StringW lobbySecret;

  static inline ::GlobalNamespace::SelectMultiplayerLobbyDestination* New_ctor(::StringW lobbyCode);

  static inline ::GlobalNamespace::SelectMultiplayerLobbyDestination* New_ctor(::StringW lobbySecret, ::StringW lobbyCode);

  constexpr ::StringW const& __cordl_internal_get_lobbyCode() const;

  constexpr ::StringW& __cordl_internal_get_lobbyCode();

  constexpr ::StringW const& __cordl_internal_get_lobbySecret() const;

  constexpr ::StringW& __cordl_internal_get_lobbySecret();

  constexpr void __cordl_internal_set_lobbyCode(::StringW value);

  constexpr void __cordl_internal_set_lobbySecret(::StringW value);

  /// @brief Method .ctor, addr 0x266d118, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW lobbyCode);

  /// @brief Method .ctor, addr 0x266d0ec, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::StringW lobbySecret, ::StringW lobbyCode);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SelectMultiplayerLobbyDestination();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SelectMultiplayerLobbyDestination", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SelectMultiplayerLobbyDestination(SelectMultiplayerLobbyDestination&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SelectMultiplayerLobbyDestination", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SelectMultiplayerLobbyDestination(SelectMultiplayerLobbyDestination const&) = delete;

  /// @brief Field lobbySecret, offset: 0x10, size: 0x8, def value: None
  ::StringW ___lobbySecret;

  /// @brief Field lobbyCode, offset: 0x18, size: 0x8, def value: None
  ::StringW ___lobbyCode;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12779 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SelectMultiplayerLobbyDestination, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SelectMultiplayerLobbyDestination, ___lobbySecret) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelectMultiplayerLobbyDestination, ___lobbyCode) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SelectMultiplayerLobbyDestination);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SelectMultiplayerLobbyDestination*, "", "SelectMultiplayerLobbyDestination");
