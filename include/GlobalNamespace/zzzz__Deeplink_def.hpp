#pragma once
// IWYU pragma private; include "GlobalNamespace/Deeplink.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Deeplink)
// Forward declare root types
namespace GlobalNamespace {
class Deeplink;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::Deeplink);
// Type: ::Deeplink
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::Deeplink*
class CORDL_TYPE Deeplink : public ::System::Object {
public:
  // Declarations
  /// @brief Field Characteristic, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_Characteristic, put = __cordl_internal_set_Characteristic)) ::StringW Characteristic;

  /// @brief Field Destination, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Destination, put = __cordl_internal_set_Destination)) ::StringW Destination;

  /// @brief Field Difficulty, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_Difficulty, put = __cordl_internal_set_Difficulty)) ::StringW Difficulty;

  /// @brief Field LevelID, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_LevelID, put = __cordl_internal_set_LevelID)) ::StringW LevelID;

  /// @brief Field MultiplayerLobbyCode, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_MultiplayerLobbyCode, put = __cordl_internal_set_MultiplayerLobbyCode)) ::StringW MultiplayerLobbyCode;

  /// @brief Field MultiplayerSecret, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_MultiplayerSecret, put = __cordl_internal_set_MultiplayerSecret)) ::StringW MultiplayerSecret;

  /// @brief Field PackID, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_PackID, put = __cordl_internal_set_PackID)) ::StringW PackID;

  /// @brief Method FromJson, addr 0x26782c0, size 0x48, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::Deeplink* FromJson(::StringW jsonDeeplink);

  static inline ::GlobalNamespace::Deeplink* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_Characteristic() const;

  constexpr ::StringW& __cordl_internal_get_Characteristic();

  constexpr ::StringW const& __cordl_internal_get_Destination() const;

  constexpr ::StringW& __cordl_internal_get_Destination();

  constexpr ::StringW const& __cordl_internal_get_Difficulty() const;

  constexpr ::StringW& __cordl_internal_get_Difficulty();

  constexpr ::StringW const& __cordl_internal_get_LevelID() const;

  constexpr ::StringW& __cordl_internal_get_LevelID();

  constexpr ::StringW const& __cordl_internal_get_MultiplayerLobbyCode() const;

  constexpr ::StringW& __cordl_internal_get_MultiplayerLobbyCode();

  constexpr ::StringW const& __cordl_internal_get_MultiplayerSecret() const;

  constexpr ::StringW& __cordl_internal_get_MultiplayerSecret();

  constexpr ::StringW const& __cordl_internal_get_PackID() const;

  constexpr ::StringW& __cordl_internal_get_PackID();

  constexpr void __cordl_internal_set_Characteristic(::StringW value);

  constexpr void __cordl_internal_set_Destination(::StringW value);

  constexpr void __cordl_internal_set_Difficulty(::StringW value);

  constexpr void __cordl_internal_set_LevelID(::StringW value);

  constexpr void __cordl_internal_set_MultiplayerLobbyCode(::StringW value);

  constexpr void __cordl_internal_set_MultiplayerSecret(::StringW value);

  constexpr void __cordl_internal_set_PackID(::StringW value);

  /// @brief Method .ctor, addr 0x2678308, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Deeplink();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Deeplink", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Deeplink(Deeplink&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Deeplink", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Deeplink(Deeplink const&) = delete;

  /// @brief Field Destination, offset: 0x10, size: 0x8, def value: None
  ::StringW ___Destination;

  /// @brief Field LevelID, offset: 0x18, size: 0x8, def value: None
  ::StringW ___LevelID;

  /// @brief Field PackID, offset: 0x20, size: 0x8, def value: None
  ::StringW ___PackID;

  /// @brief Field Difficulty, offset: 0x28, size: 0x8, def value: None
  ::StringW ___Difficulty;

  /// @brief Field Characteristic, offset: 0x30, size: 0x8, def value: None
  ::StringW ___Characteristic;

  /// @brief Field MultiplayerLobbyCode, offset: 0x38, size: 0x8, def value: None
  ::StringW ___MultiplayerLobbyCode;

  /// @brief Field MultiplayerSecret, offset: 0x40, size: 0x8, def value: None
  ::StringW ___MultiplayerSecret;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12777 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Deeplink, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::Deeplink, ___Destination) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Deeplink, ___LevelID) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Deeplink, ___PackID) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Deeplink, ___Difficulty) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Deeplink, ___Characteristic) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Deeplink, ___MultiplayerLobbyCode) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Deeplink, ___MultiplayerSecret) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::Deeplink);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Deeplink*, "", "Deeplink");
