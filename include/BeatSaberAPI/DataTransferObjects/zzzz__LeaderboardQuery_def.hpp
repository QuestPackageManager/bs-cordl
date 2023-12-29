#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaberAPI/DataTransferObjects/zzzz__ScoresScope_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LeaderboardQuery)
namespace BeatSaberAPI::DataTransferObjects {
struct __LevelScoreResult__GameplayModifiers;
}
// Forward declare root types
namespace BeatSaberAPI::DataTransferObjects {
class LeaderboardQuery;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaberAPI::DataTransferObjects::LeaderboardQuery);
// Type: BeatSaberAPI.DataTransferObjects::LeaderboardQuery
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaberAPI::DataTransferObjects {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6181)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6180))
// CS Name: ::BeatSaberAPI.DataTransferObjects::LeaderboardQuery*
class CORDL_TYPE LeaderboardQuery : public ::System::Object {
public:
  // Declarations
  /// @brief Field leaderboardId, offset 0x10, size 0x8
  __declspec(property(get = __get_leaderboardId, put = __set_leaderboardId))::StringW leaderboardId;

  /// @brief Field count, offset 0x18, size 0x4
  __declspec(property(get = __get_count, put = __set_count)) int32_t count;

  /// @brief Field fromRank, offset 0x1c, size 0x4
  __declspec(property(get = __get_fromRank, put = __set_fromRank)) int32_t fromRank;

  /// @brief Field scope, offset 0x20, size 0x4
  __declspec(property(get = __get_scope, put = __set_scope))::BeatSaberAPI::DataTransferObjects::ScoresScope scope;

  /// @brief Field friendsUserIds, offset 0x28, size 0x8
  __declspec(property(get = __get_friendsUserIds, put = __set_friendsUserIds))::ArrayW<::StringW, ::Array<::StringW>*> friendsUserIds;

  /// @brief Field onlyWithSpecificGameplayModifiers, offset 0x30, size 0x1
  __declspec(property(get = __get_onlyWithSpecificGameplayModifiers, put = __set_onlyWithSpecificGameplayModifiers)) bool onlyWithSpecificGameplayModifiers;

  /// @brief Field gameplayModifiers, offset 0x38, size 0x8
  __declspec(property(get = __get_gameplayModifiers, put = __set_gameplayModifiers))::ArrayW<::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers,
                                                                                             ::Array<::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers>*> gameplayModifiers;

  constexpr ::StringW& __get_leaderboardId();

  constexpr ::StringW const& __get_leaderboardId() const;

  constexpr void __set_leaderboardId(::StringW value);

  constexpr int32_t& __get_count();

  constexpr int32_t const& __get_count() const;

  constexpr void __set_count(int32_t value);

  constexpr int32_t& __get_fromRank();

  constexpr int32_t const& __get_fromRank() const;

  constexpr void __set_fromRank(int32_t value);

  constexpr ::BeatSaberAPI::DataTransferObjects::ScoresScope& __get_scope();

  constexpr ::BeatSaberAPI::DataTransferObjects::ScoresScope const& __get_scope() const;

  constexpr void __set_scope(::BeatSaberAPI::DataTransferObjects::ScoresScope value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __get_friendsUserIds();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __get_friendsUserIds() const;

  constexpr void __set_friendsUserIds(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr bool& __get_onlyWithSpecificGameplayModifiers();

  constexpr bool const& __get_onlyWithSpecificGameplayModifiers() const;

  constexpr void __set_onlyWithSpecificGameplayModifiers(bool value);

  constexpr ::ArrayW<::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers, ::Array<::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers>*>&
  __get_gameplayModifiers();

  constexpr ::ArrayW<::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers, ::Array<::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers>*> const&
  __get_gameplayModifiers() const;

  constexpr void __set_gameplayModifiers(
      ::ArrayW<::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers, ::Array<::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers>*> value);

  static inline ::BeatSaberAPI::DataTransferObjects::LeaderboardQuery* New_ctor();

  /// @brief Method .ctor addr 0x21e8adc size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "LeaderboardQuery", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LeaderboardQuery(LeaderboardQuery&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LeaderboardQuery", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LeaderboardQuery(LeaderboardQuery const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LeaderboardQuery();

public:
  /// @brief Field leaderboardId, offset: 0x10, size: 0x8, def value: None
  ::StringW ___leaderboardId;

  /// @brief Field count, offset: 0x18, size: 0x4, def value: None
  int32_t ___count;

  /// @brief Field fromRank, offset: 0x1c, size: 0x4, def value: None
  int32_t ___fromRank;

  /// @brief Field scope, offset: 0x20, size: 0x4, def value: None
  ::BeatSaberAPI::DataTransferObjects::ScoresScope ___scope;

  /// @brief Field friendsUserIds, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___friendsUserIds;

  /// @brief Field onlyWithSpecificGameplayModifiers, offset: 0x30, size: 0x1, def value: None
  bool ___onlyWithSpecificGameplayModifiers;

  /// @brief Field gameplayModifiers, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers, ::Array<::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers>*> ___gameplayModifiers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaberAPI::DataTransferObjects::LeaderboardQuery, 0x40>, "Size mismatch!");

static_assert(offsetof(::BeatSaberAPI::DataTransferObjects::LeaderboardQuery, ___leaderboardId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaberAPI::DataTransferObjects::LeaderboardQuery, ___count) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaberAPI::DataTransferObjects::LeaderboardQuery, ___fromRank) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::BeatSaberAPI::DataTransferObjects::LeaderboardQuery, ___scope) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaberAPI::DataTransferObjects::LeaderboardQuery, ___friendsUserIds) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaberAPI::DataTransferObjects::LeaderboardQuery, ___onlyWithSpecificGameplayModifiers) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatSaberAPI::DataTransferObjects::LeaderboardQuery, ___gameplayModifiers) == 0x38, "Offset mismatch!");

} // namespace BeatSaberAPI::DataTransferObjects
NEED_NO_BOX(::BeatSaberAPI::DataTransferObjects::LeaderboardQuery);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaberAPI::DataTransferObjects::LeaderboardQuery*, "BeatSaberAPI.DataTransferObjects", "LeaderboardQuery");
