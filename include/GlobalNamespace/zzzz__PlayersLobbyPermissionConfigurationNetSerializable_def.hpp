#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayersLobbyPermissionConfigurationNetSerializable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PoolableSerializable_def.hpp"
CORDL_MODULE_EXPORT(PlayersLobbyPermissionConfigurationNetSerializable)
namespace GlobalNamespace {
class PlayerLobbyPermissionConfigurationNetSerializable;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayersLobbyPermissionConfigurationNetSerializable;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable);
// Dependencies PoolableSerializable
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayersLobbyPermissionConfigurationNetSerializable
class CORDL_TYPE PlayersLobbyPermissionConfigurationNetSerializable : public ::GlobalNamespace::PoolableSerializable {
public:
  // Declarations
  /// @brief Field _playersPermission, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__playersPermission,
                      put = __cordl_internal_set__playersPermission)) ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable*>* _playersPermission;

  __declspec(property(get = get_playersPermission)) ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable*>* playersPermission;

  /// @brief Method Deserialize, addr 0x3653068, size 0x188, virtual true, abstract: false, final false
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Init, addr 0x3652dfc, size 0x7c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*
  Init(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable*>* playersPermission);

  static inline ::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable* New_ctor();

  /// @brief Method Obtain, addr 0x3652d90, size 0x6c, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable* Obtain();

  /// @brief Method Release, addr 0x36531f0, size 0xd8, virtual true, abstract: false, final false
  inline void Release();

  /// @brief Method Retain, addr 0x365333c, size 0xa8, virtual true, abstract: false, final false
  inline void Retain();

  /// @brief Method Serialize, addr 0x3652f1c, size 0x14c, virtual true, abstract: false, final false
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable*>* const& __cordl_internal_get__playersPermission() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable*>*& __cordl_internal_get__playersPermission();

  constexpr void __cordl_internal_set__playersPermission(::System::Collections::Generic::List_1<::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable*>* value);

  /// @brief Method .ctor, addr 0x3652e78, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_playersPermission, addr 0x3652d88, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable*>* get_playersPermission();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayersLobbyPermissionConfigurationNetSerializable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayersLobbyPermissionConfigurationNetSerializable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayersLobbyPermissionConfigurationNetSerializable(PlayersLobbyPermissionConfigurationNetSerializable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayersLobbyPermissionConfigurationNetSerializable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayersLobbyPermissionConfigurationNetSerializable(PlayersLobbyPermissionConfigurationNetSerializable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20850 };

  /// @brief Field _playersPermission, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable*>* ____playersPermission;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable, ____playersPermission) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*, "", "PlayersLobbyPermissionConfigurationNetSerializable");
