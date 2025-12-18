#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayersSpecificSettingsAtGameStartModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PlayersSpecificSettingsAtGameStartModel)
namespace GlobalNamespace {
class IBeatSaberConnectedPlayer;
}
namespace GlobalNamespace {
class IBeatSaberMultiplayerSessionManager;
}
namespace GlobalNamespace {
class PlayerSpecificSettingsAtStartNetSerializable;
}
namespace GlobalNamespace {
class PlayerSpecificSettingsNetSerializable;
}
namespace GlobalNamespace {
class PlayersSpecificSettingsAtGameStartModel___c__DisplayClass13_0;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayersSpecificSettingsAtGameStartModel;
}
namespace GlobalNamespace {
class PlayersSpecificSettingsAtGameStartModel___c__DisplayClass13_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel);
MARK_REF_PTR_T(::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel___c__DisplayClass13_0);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayersSpecificSettingsAtGameStartModel/<>c__DisplayClass13_0
class CORDL_TYPE PlayersSpecificSettingsAtGameStartModel___c__DisplayClass13_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field player, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_player, put = __cordl_internal_set_player)) ::GlobalNamespace::IBeatSaberConnectedPlayer* player;

  static inline ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel___c__DisplayClass13_0* New_ctor();

  /// @brief Method <SaveFromNetSerializable>b__0, addr 0x31e4b5c, size 0x124, virtual false, abstract: false, final false
  inline bool _SaveFromNetSerializable_b__0(::GlobalNamespace::IBeatSaberConnectedPlayer* p);

  constexpr ::GlobalNamespace::IBeatSaberConnectedPlayer* const& __cordl_internal_get_player() const;

  constexpr ::GlobalNamespace::IBeatSaberConnectedPlayer*& __cordl_internal_get_player();

  constexpr void __cordl_internal_set_player(::GlobalNamespace::IBeatSaberConnectedPlayer* value);

  /// @brief Method .ctor, addr 0x31e4b58, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayersSpecificSettingsAtGameStartModel___c__DisplayClass13_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayersSpecificSettingsAtGameStartModel___c__DisplayClass13_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayersSpecificSettingsAtGameStartModel___c__DisplayClass13_0(PlayersSpecificSettingsAtGameStartModel___c__DisplayClass13_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayersSpecificSettingsAtGameStartModel___c__DisplayClass13_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayersSpecificSettingsAtGameStartModel___c__DisplayClass13_0(PlayersSpecificSettingsAtGameStartModel___c__DisplayClass13_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18937 };

  /// @brief Field player, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IBeatSaberConnectedPlayer* ___player;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel___c__DisplayClass13_0, ___player) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel___c__DisplayClass13_0, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayersSpecificSettingsAtGameStartModel
class CORDL_TYPE PlayersSpecificSettingsAtGameStartModel : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass13_0 = ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel___c__DisplayClass13_0;

  /// @brief Field <localPlayerSpecificSettings>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__localPlayerSpecificSettings_k__BackingField,
                      put = __cordl_internal_set__localPlayerSpecificSettings_k__BackingField)) ::GlobalNamespace::PlayerSpecificSettingsNetSerializable* _localPlayerSpecificSettings_k__BackingField;

  /// @brief Field _multiplayerSessionManager, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerSessionManager,
                      put = __cordl_internal_set__multiplayerSessionManager)) ::GlobalNamespace::IBeatSaberMultiplayerSessionManager* _multiplayerSessionManager;

  /// @brief Field <playersAtGameStartNetSerializable>k__BackingField, offset 0x18, size 0x8
  __declspec(property(
      get = __cordl_internal_get__playersAtGameStartNetSerializable_k__BackingField,
      put =
          __cordl_internal_set__playersAtGameStartNetSerializable_k__BackingField)) ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* _playersAtGameStartNetSerializable_k__BackingField;

  __declspec(property(get = get_localPlayerSpecificSettings, put = set_localPlayerSpecificSettings)) ::GlobalNamespace::PlayerSpecificSettingsNetSerializable* localPlayerSpecificSettings;

  __declspec(property(get = get_playersAtGameStart)) ::System::Collections::Generic::List_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>* playersAtGameStart;

  __declspec(property(get = get_playersAtGameStartNetSerializable,
                      put = set_playersAtGameStartNetSerializable)) ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* playersAtGameStartNetSerializable;

  /// @brief Method GetPlayerSpecificSettingsForUserId, addr 0x31e43d8, size 0x37c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlayerSpecificSettingsNetSerializable* GetPlayerSpecificSettingsForUserId(::StringW userId);

  static inline ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* New_ctor(::GlobalNamespace::IBeatSaberMultiplayerSessionManager* multiplayerSessionManager,
                                                                                     ::GlobalNamespace::PlayerSpecificSettingsNetSerializable* localPlayerSpecificSettings);

  /// @brief Method SaveFromNetSerializable, addr 0x31e4754, size 0x404, virtual false, abstract: false, final false
  inline void SaveFromNetSerializable(::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* playersAtGameStartNetSerializable);

  constexpr ::GlobalNamespace::PlayerSpecificSettingsNetSerializable* const& __cordl_internal_get__localPlayerSpecificSettings_k__BackingField() const;

  constexpr ::GlobalNamespace::PlayerSpecificSettingsNetSerializable*& __cordl_internal_get__localPlayerSpecificSettings_k__BackingField();

  constexpr ::GlobalNamespace::IBeatSaberMultiplayerSessionManager* const& __cordl_internal_get__multiplayerSessionManager() const;

  constexpr ::GlobalNamespace::IBeatSaberMultiplayerSessionManager*& __cordl_internal_get__multiplayerSessionManager();

  constexpr ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* const& __cordl_internal_get__playersAtGameStartNetSerializable_k__BackingField() const;

  constexpr ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*& __cordl_internal_get__playersAtGameStartNetSerializable_k__BackingField();

  constexpr void __cordl_internal_set__localPlayerSpecificSettings_k__BackingField(::GlobalNamespace::PlayerSpecificSettingsNetSerializable* value);

  constexpr void __cordl_internal_set__multiplayerSessionManager(::GlobalNamespace::IBeatSaberMultiplayerSessionManager* value);

  constexpr void __cordl_internal_set__playersAtGameStartNetSerializable_k__BackingField(::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* value);

  /// @brief Method .ctor, addr 0x31e4370, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IBeatSaberMultiplayerSessionManager* multiplayerSessionManager, ::GlobalNamespace::PlayerSpecificSettingsNetSerializable* localPlayerSpecificSettings);

  /// @brief Method get_localPlayerSpecificSettings, addr 0x31e4350, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlayerSpecificSettingsNetSerializable* get_localPlayerSpecificSettings();

  /// @brief Method get_playersAtGameStart, addr 0x31e433c, size 0x14, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>* get_playersAtGameStart();

  /// @brief Method get_playersAtGameStartNetSerializable, addr 0x31e4360, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* get_playersAtGameStartNetSerializable();

  /// @brief Method set_localPlayerSpecificSettings, addr 0x31e4358, size 0x8, virtual false, abstract: false, final false
  inline void set_localPlayerSpecificSettings(::GlobalNamespace::PlayerSpecificSettingsNetSerializable* value);

  /// @brief Method set_playersAtGameStartNetSerializable, addr 0x31e4368, size 0x8, virtual false, abstract: false, final false
  inline void set_playersAtGameStartNetSerializable(::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayersSpecificSettingsAtGameStartModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayersSpecificSettingsAtGameStartModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayersSpecificSettingsAtGameStartModel(PlayersSpecificSettingsAtGameStartModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayersSpecificSettingsAtGameStartModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayersSpecificSettingsAtGameStartModel(PlayersSpecificSettingsAtGameStartModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18938 };

  /// @brief Field <localPlayerSpecificSettings>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::PlayerSpecificSettingsNetSerializable* ____localPlayerSpecificSettings_k__BackingField;

  /// @brief Field <playersAtGameStartNetSerializable>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* ____playersAtGameStartNetSerializable_k__BackingField;

  /// @brief Field _multiplayerSessionManager, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IBeatSaberMultiplayerSessionManager* ____multiplayerSessionManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel, ____localPlayerSpecificSettings_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel, ____playersAtGameStartNetSerializable_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel, ____multiplayerSessionManager) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*, "", "PlayersSpecificSettingsAtGameStartModel");
NEED_NO_BOX(::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel___c__DisplayClass13_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel___c__DisplayClass13_0*, "", "PlayersSpecificSettingsAtGameStartModel/<>c__DisplayClass13_0");
