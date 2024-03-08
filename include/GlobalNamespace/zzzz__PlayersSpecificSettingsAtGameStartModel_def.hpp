#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PlayersSpecificSettingsAtGameStartModel)
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
class PlayerSpecificSettingsAtStartNetSerializable;
}
namespace GlobalNamespace {
class PlayerSpecificSettingsNetSerializable;
}
namespace GlobalNamespace {
class __PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayersSpecificSettingsAtGameStartModel;
}
namespace GlobalNamespace {
class __PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel);
MARK_REF_PTR_T(::GlobalNamespace::__PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0);
// Type: ::<>c__DisplayClass13_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlayersSpecificSettingsAtGameStartModel::<>c__DisplayClass13_0*
class CORDL_TYPE __PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field player, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_player, put = __cordl_internal_set_player))::GlobalNamespace::IConnectedPlayer* player;

  static inline ::GlobalNamespace::__PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0* New_ctor();

  /// @brief Method <SaveFromNetSerializable>b__0, addr 0xee54d8, size 0x11c, virtual false, abstract: false, final false
  inline bool _SaveFromNetSerializable_b__0(::GlobalNamespace::IConnectedPlayer* p);

  constexpr ::GlobalNamespace::IConnectedPlayer*& __cordl_internal_get_player();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectedPlayer*> const& __cordl_internal_get_player() const;

  constexpr void __cordl_internal_set_player(::GlobalNamespace::IConnectedPlayer* value);

  /// @brief Method .ctor, addr 0xee54d0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0(__PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0(__PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0 const&) = delete;

  /// @brief Field player, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IConnectedPlayer* ___player;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0, ___player) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PlayersSpecificSettingsAtGameStartModel
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlayersSpecificSettingsAtGameStartModel*
class CORDL_TYPE PlayersSpecificSettingsAtGameStartModel : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass13_0 = ::GlobalNamespace::__PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0;

  /// @brief Field <localPlayerSpecificSettings>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__localPlayerSpecificSettings_k__BackingField,
                      put = __cordl_internal_set__localPlayerSpecificSettings_k__BackingField))::GlobalNamespace::PlayerSpecificSettingsNetSerializable* _localPlayerSpecificSettings_k__BackingField;

  /// @brief Field _multiplayerSessionManager, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerSessionManager,
                      put = __cordl_internal_set__multiplayerSessionManager))::GlobalNamespace::IMultiplayerSessionManager* _multiplayerSessionManager;

  /// @brief Field <playersAtGameStartNetSerializable>k__BackingField, offset 0x18, size 0x8
  __declspec(property(
      get = __cordl_internal_get__playersAtGameStartNetSerializable_k__BackingField,
      put =
          __cordl_internal_set__playersAtGameStartNetSerializable_k__BackingField))::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* _playersAtGameStartNetSerializable_k__BackingField;

  __declspec(property(get = get_localPlayerSpecificSettings, put = set_localPlayerSpecificSettings))::GlobalNamespace::PlayerSpecificSettingsNetSerializable* localPlayerSpecificSettings;

  __declspec(property(get = get_playersAtGameStart))::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>* playersAtGameStart;

  __declspec(property(get = get_playersAtGameStartNetSerializable,
                      put = set_playersAtGameStartNetSerializable))::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* playersAtGameStartNetSerializable;

  /// @brief Method GetPlayerSpecificSettingsForUserId, addr 0xee4d3c, size 0x3a8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlayerSpecificSettingsNetSerializable* GetPlayerSpecificSettingsForUserId(::StringW userId);

  static inline ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* New_ctor(::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager,
                                                                                     ::GlobalNamespace::PlayerSpecificSettingsNetSerializable* localPlayerSpecificSettings);

  /// @brief Method SaveFromNetSerializable, addr 0xee50e4, size 0x3ec, virtual false, abstract: false, final false
  inline void SaveFromNetSerializable(::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* playersAtGameStartNetSerializable);

  constexpr ::GlobalNamespace::PlayerSpecificSettingsNetSerializable*& __cordl_internal_get__localPlayerSpecificSettings_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerSpecificSettingsNetSerializable*> const& __cordl_internal_get__localPlayerSpecificSettings_k__BackingField() const;

  constexpr ::GlobalNamespace::IMultiplayerSessionManager*& __cordl_internal_get__multiplayerSessionManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSessionManager*> const& __cordl_internal_get__multiplayerSessionManager() const;

  constexpr ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*& __cordl_internal_get__playersAtGameStartNetSerializable_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*> const&
  __cordl_internal_get__playersAtGameStartNetSerializable_k__BackingField() const;

  constexpr void __cordl_internal_set__localPlayerSpecificSettings_k__BackingField(::GlobalNamespace::PlayerSpecificSettingsNetSerializable* value);

  constexpr void __cordl_internal_set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value);

  constexpr void __cordl_internal_set__playersAtGameStartNetSerializable_k__BackingField(::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* value);

  /// @brief Method .ctor, addr 0xee4cb8, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager, ::GlobalNamespace::PlayerSpecificSettingsNetSerializable* localPlayerSpecificSettings);

  /// @brief Method get_localPlayerSpecificSettings, addr 0xee4c98, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlayerSpecificSettingsNetSerializable* get_localPlayerSpecificSettings();

  /// @brief Method get_playersAtGameStart, addr 0xee4c80, size 0x18, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>* get_playersAtGameStart();

  /// @brief Method get_playersAtGameStartNetSerializable, addr 0xee4ca8, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* get_playersAtGameStartNetSerializable();

  /// @brief Method set_localPlayerSpecificSettings, addr 0xee4ca0, size 0x8, virtual false, abstract: false, final false
  inline void set_localPlayerSpecificSettings(::GlobalNamespace::PlayerSpecificSettingsNetSerializable* value);

  /// @brief Method set_playersAtGameStartNetSerializable, addr 0xee4cb0, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field <localPlayerSpecificSettings>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::PlayerSpecificSettingsNetSerializable* ____localPlayerSpecificSettings_k__BackingField;

  /// @brief Field <playersAtGameStartNetSerializable>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* ____playersAtGameStartNetSerializable_k__BackingField;

  /// @brief Field _multiplayerSessionManager, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IMultiplayerSessionManager* ____multiplayerSessionManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel, ____localPlayerSpecificSettings_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel, ____playersAtGameStartNetSerializable_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel, ____multiplayerSessionManager) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*, "", "PlayersSpecificSettingsAtGameStartModel");
NEED_NO_BOX(::GlobalNamespace::__PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0*, "", "PlayersSpecificSettingsAtGameStartModel/<>c__DisplayClass13_0");
