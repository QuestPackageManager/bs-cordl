#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Deeplink)
// Forward declare root types
namespace GlobalNamespace {
class Deeplink;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::Deeplink);
// Type: ::Deeplink
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4182))
// CS Name: ::Deeplink*
class CORDL_TYPE Deeplink : public ::System::Object {
public:
  // Declarations
  /// @brief Field Destination, offset 0x10, size 0x8
  __declspec(property(get = __get_Destination, put = __set_Destination))::StringW Destination;

  /// @brief Field LevelID, offset 0x18, size 0x8
  __declspec(property(get = __get_LevelID, put = __set_LevelID))::StringW LevelID;

  /// @brief Field PackID, offset 0x20, size 0x8
  __declspec(property(get = __get_PackID, put = __set_PackID))::StringW PackID;

  /// @brief Field Difficulty, offset 0x28, size 0x8
  __declspec(property(get = __get_Difficulty, put = __set_Difficulty))::StringW Difficulty;

  /// @brief Field Characteristic, offset 0x30, size 0x8
  __declspec(property(get = __get_Characteristic, put = __set_Characteristic))::StringW Characteristic;

  /// @brief Field MultiplayerLobbyCode, offset 0x38, size 0x8
  __declspec(property(get = __get_MultiplayerLobbyCode, put = __set_MultiplayerLobbyCode))::StringW MultiplayerLobbyCode;

  /// @brief Field MultiplayerSecret, offset 0x40, size 0x8
  __declspec(property(get = __get_MultiplayerSecret, put = __set_MultiplayerSecret))::StringW MultiplayerSecret;

  /// @brief Field MultiplayerRoomId, offset 0x48, size 0x8
  __declspec(property(get = __get_MultiplayerRoomId, put = __set_MultiplayerRoomId)) uint64_t MultiplayerRoomId;

  constexpr ::StringW& __get_Destination();

  constexpr ::StringW const& __get_Destination() const;

  constexpr void __set_Destination(::StringW value);

  constexpr ::StringW& __get_LevelID();

  constexpr ::StringW const& __get_LevelID() const;

  constexpr void __set_LevelID(::StringW value);

  constexpr ::StringW& __get_PackID();

  constexpr ::StringW const& __get_PackID() const;

  constexpr void __set_PackID(::StringW value);

  constexpr ::StringW& __get_Difficulty();

  constexpr ::StringW const& __get_Difficulty() const;

  constexpr void __set_Difficulty(::StringW value);

  constexpr ::StringW& __get_Characteristic();

  constexpr ::StringW const& __get_Characteristic() const;

  constexpr void __set_Characteristic(::StringW value);

  constexpr ::StringW& __get_MultiplayerLobbyCode();

  constexpr ::StringW const& __get_MultiplayerLobbyCode() const;

  constexpr void __set_MultiplayerLobbyCode(::StringW value);

  constexpr ::StringW& __get_MultiplayerSecret();

  constexpr ::StringW const& __get_MultiplayerSecret() const;

  constexpr void __set_MultiplayerSecret(::StringW value);

  constexpr uint64_t& __get_MultiplayerRoomId();

  constexpr uint64_t const& __get_MultiplayerRoomId() const;

  constexpr void __set_MultiplayerRoomId(uint64_t value);

  static inline ::GlobalNamespace::Deeplink* New_ctor();

  /// @brief Method .ctor addr 0x21ced34 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "Deeplink", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Deeplink(Deeplink&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Deeplink", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Deeplink(Deeplink const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Deeplink();

public:
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

  /// @brief Field MultiplayerRoomId, offset: 0x48, size: 0x8, def value: None
  uint64_t ___MultiplayerRoomId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Deeplink, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::Deeplink, ___Destination) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Deeplink, ___LevelID) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Deeplink, ___PackID) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Deeplink, ___Difficulty) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Deeplink, ___Characteristic) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Deeplink, ___MultiplayerLobbyCode) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Deeplink, ___MultiplayerSecret) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Deeplink, ___MultiplayerRoomId) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::Deeplink);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Deeplink*, "", "Deeplink");
