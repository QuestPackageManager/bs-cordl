#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LeaderboardPlayerInfo)
// Forward declare root types
namespace GlobalNamespace {
class LeaderboardPlayerInfo;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LeaderboardPlayerInfo);
// Type: ::LeaderboardPlayerInfo
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 65, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LeaderboardPlayerInfo*
class CORDL_TYPE LeaderboardPlayerInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field <authType>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__authType_k__BackingField, put = __cordl_internal_set__authType_k__BackingField))::StringW _authType_k__BackingField;

  /// @brief Field <playerFriends>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__playerFriends_k__BackingField, put = __cordl_internal_set__playerFriends_k__BackingField))::StringW _playerFriends_k__BackingField;

  /// @brief Field <playerId>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__playerId_k__BackingField, put = __cordl_internal_set__playerId_k__BackingField))::StringW _playerId_k__BackingField;

  /// @brief Field <playerKey>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__playerKey_k__BackingField, put = __cordl_internal_set__playerKey_k__BackingField))::StringW _playerKey_k__BackingField;

  /// @brief Field <playerName>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__playerName_k__BackingField, put = __cordl_internal_set__playerName_k__BackingField))::StringW _playerName_k__BackingField;

  /// @brief Field <succeeded>k__BackingField, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get__succeeded_k__BackingField, put = __cordl_internal_set__succeeded_k__BackingField)) bool _succeeded_k__BackingField;

  __declspec(property(get = get_authType, put = set_authType))::StringW authType;

  __declspec(property(get = get_playerFriends, put = set_playerFriends))::StringW playerFriends;

  __declspec(property(get = get_playerId, put = set_playerId))::StringW playerId;

  __declspec(property(get = get_playerKey, put = set_playerKey))::StringW playerKey;

  __declspec(property(get = get_playerName, put = set_playerName))::StringW playerName;

  /// @brief Field serverKey, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_serverKey, put = __cordl_internal_set_serverKey))::StringW serverKey;

  __declspec(property(get = get_succeeded, put = set_succeeded)) bool succeeded;

  static inline ::GlobalNamespace::LeaderboardPlayerInfo* New_ctor(bool succeeded, ::StringW playerId, ::StringW playerName, ::StringW playerKey, ::StringW authType, ::StringW playerFriends);

  constexpr ::StringW const& __cordl_internal_get__authType_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__authType_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__playerFriends_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__playerFriends_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__playerId_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__playerId_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__playerKey_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__playerKey_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__playerName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__playerName_k__BackingField();

  constexpr bool const& __cordl_internal_get__succeeded_k__BackingField() const;

  constexpr bool& __cordl_internal_get__succeeded_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get_serverKey() const;

  constexpr ::StringW& __cordl_internal_get_serverKey();

  constexpr void __cordl_internal_set__authType_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__playerFriends_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__playerId_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__playerKey_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__playerName_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__succeeded_k__BackingField(bool value);

  constexpr void __cordl_internal_set_serverKey(::StringW value);

  /// @brief Method .ctor, addr 0x12d5490, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor(bool succeeded, ::StringW playerId, ::StringW playerName, ::StringW playerKey, ::StringW authType, ::StringW playerFriends);

  /// @brief Method get_authType, addr 0x12d545c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_authType();

  /// @brief Method get_playerFriends, addr 0x12d546c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_playerFriends();

  /// @brief Method get_playerId, addr 0x12d542c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_playerId();

  /// @brief Method get_playerKey, addr 0x12d544c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_playerKey();

  /// @brief Method get_playerName, addr 0x12d543c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_playerName();

  /// @brief Method get_succeeded, addr 0x12d547c, size 0x8, virtual false, abstract: false, final false
  inline bool get_succeeded();

  /// @brief Method set_authType, addr 0x12d5464, size 0x8, virtual false, abstract: false, final false
  inline void set_authType(::StringW value);

  /// @brief Method set_playerFriends, addr 0x12d5474, size 0x8, virtual false, abstract: false, final false
  inline void set_playerFriends(::StringW value);

  /// @brief Method set_playerId, addr 0x12d5434, size 0x8, virtual false, abstract: false, final false
  inline void set_playerId(::StringW value);

  /// @brief Method set_playerKey, addr 0x12d5454, size 0x8, virtual false, abstract: false, final false
  inline void set_playerKey(::StringW value);

  /// @brief Method set_playerName, addr 0x12d5444, size 0x8, virtual false, abstract: false, final false
  inline void set_playerName(::StringW value);

  /// @brief Method set_succeeded, addr 0x12d5484, size 0xc, virtual false, abstract: false, final false
  inline void set_succeeded(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LeaderboardPlayerInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LeaderboardPlayerInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LeaderboardPlayerInfo(LeaderboardPlayerInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LeaderboardPlayerInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LeaderboardPlayerInfo(LeaderboardPlayerInfo const&) = delete;

  /// @brief Field serverKey, offset: 0x10, size: 0x8, def value: None
  ::StringW ___serverKey;

  /// @brief Field <playerId>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____playerId_k__BackingField;

  /// @brief Field <playerName>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::StringW ____playerName_k__BackingField;

  /// @brief Field <playerKey>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::StringW ____playerKey_k__BackingField;

  /// @brief Field <authType>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::StringW ____authType_k__BackingField;

  /// @brief Field <playerFriends>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::StringW ____playerFriends_k__BackingField;

  /// @brief Field <succeeded>k__BackingField, offset: 0x40, size: 0x1, def value: None
  bool ____succeeded_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LeaderboardPlayerInfo, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LeaderboardPlayerInfo, ___serverKey) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LeaderboardPlayerInfo, ____playerId_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LeaderboardPlayerInfo, ____playerName_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LeaderboardPlayerInfo, ____playerKey_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LeaderboardPlayerInfo, ____authType_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LeaderboardPlayerInfo, ____playerFriends_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LeaderboardPlayerInfo, ____succeeded_k__BackingField) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LeaderboardPlayerInfo);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LeaderboardPlayerInfo*, "", "LeaderboardPlayerInfo");
