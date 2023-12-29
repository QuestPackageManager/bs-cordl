#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LeaderboardEntry)
namespace BeatSaberAPI::DataTransferObjects {
struct __LevelScoreResult__GameplayModifiers;
}
// Forward declare root types
namespace BeatSaberAPI::DataTransferObjects {
class LeaderboardEntry;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaberAPI::DataTransferObjects::LeaderboardEntry);
// Type: BeatSaberAPI.DataTransferObjects::LeaderboardEntry
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaberAPI::DataTransferObjects {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2368)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6179))
// CS Name: ::BeatSaberAPI.DataTransferObjects::LeaderboardEntry*
class CORDL_TYPE LeaderboardEntry : public ::System::Object {
public:
  // Declarations
  /// @brief Field id, offset 0x10, size 0x4
  __declspec(property(get = __get_id, put = __set_id)) int32_t id;

  /// @brief Field score, offset 0x14, size 0x4
  __declspec(property(get = __get_score, put = __set_score)) int32_t score;

  /// @brief Field unmodifiedScore, offset 0x18, size 0x4
  __declspec(property(get = __get_unmodifiedScore, put = __set_unmodifiedScore)) int32_t unmodifiedScore;

  /// @brief Field rank, offset 0x1c, size 0x4
  __declspec(property(get = __get_rank, put = __set_rank)) int32_t rank;

  /// @brief Field updated, offset 0x20, size 0x8
  __declspec(property(get = __get_updated, put = __set_updated))::System::DateTime updated;

  /// @brief Field userDisplayName, offset 0x28, size 0x8
  __declspec(property(get = __get_userDisplayName, put = __set_userDisplayName))::StringW userDisplayName;

  /// @brief Field platformUserId, offset 0x30, size 0x8
  __declspec(property(get = __get_platformUserId, put = __set_platformUserId))::StringW platformUserId;

  /// @brief Field gameplayModifiers, offset 0x38, size 0x8
  __declspec(property(get = __get_gameplayModifiers, put = __set_gameplayModifiers))::ArrayW<::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers,
                                                                                             ::Array<::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers>*> gameplayModifiers;

  constexpr int32_t& __get_id();

  constexpr int32_t const& __get_id() const;

  constexpr void __set_id(int32_t value);

  constexpr int32_t& __get_score();

  constexpr int32_t const& __get_score() const;

  constexpr void __set_score(int32_t value);

  constexpr int32_t& __get_unmodifiedScore();

  constexpr int32_t const& __get_unmodifiedScore() const;

  constexpr void __set_unmodifiedScore(int32_t value);

  constexpr int32_t& __get_rank();

  constexpr int32_t const& __get_rank() const;

  constexpr void __set_rank(int32_t value);

  constexpr ::System::DateTime& __get_updated();

  constexpr ::System::DateTime const& __get_updated() const;

  constexpr void __set_updated(::System::DateTime value);

  constexpr ::StringW& __get_userDisplayName();

  constexpr ::StringW const& __get_userDisplayName() const;

  constexpr void __set_userDisplayName(::StringW value);

  constexpr ::StringW& __get_platformUserId();

  constexpr ::StringW const& __get_platformUserId() const;

  constexpr void __set_platformUserId(::StringW value);

  constexpr ::ArrayW<::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers, ::Array<::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers>*>&
  __get_gameplayModifiers();

  constexpr ::ArrayW<::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers, ::Array<::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers>*> const&
  __get_gameplayModifiers() const;

  constexpr void __set_gameplayModifiers(
      ::ArrayW<::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers, ::Array<::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers>*> value);

  static inline ::BeatSaberAPI::DataTransferObjects::LeaderboardEntry* New_ctor();

  /// @brief Method .ctor addr 0x21e8ad4 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "LeaderboardEntry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LeaderboardEntry(LeaderboardEntry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LeaderboardEntry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LeaderboardEntry(LeaderboardEntry const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LeaderboardEntry();

public:
  /// @brief Field id, offset: 0x10, size: 0x4, def value: None
  int32_t ___id;

  /// @brief Field score, offset: 0x14, size: 0x4, def value: None
  int32_t ___score;

  /// @brief Field unmodifiedScore, offset: 0x18, size: 0x4, def value: None
  int32_t ___unmodifiedScore;

  /// @brief Field rank, offset: 0x1c, size: 0x4, def value: None
  int32_t ___rank;

  /// @brief Field updated, offset: 0x20, size: 0x8, def value: None
  ::System::DateTime ___updated;

  /// @brief Field userDisplayName, offset: 0x28, size: 0x8, def value: None
  ::StringW ___userDisplayName;

  /// @brief Field platformUserId, offset: 0x30, size: 0x8, def value: None
  ::StringW ___platformUserId;

  /// @brief Field gameplayModifiers, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers, ::Array<::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers>*> ___gameplayModifiers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaberAPI::DataTransferObjects::LeaderboardEntry, 0x40>, "Size mismatch!");

static_assert(offsetof(::BeatSaberAPI::DataTransferObjects::LeaderboardEntry, ___id) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaberAPI::DataTransferObjects::LeaderboardEntry, ___score) == 0x14, "Offset mismatch!");

static_assert(offsetof(::BeatSaberAPI::DataTransferObjects::LeaderboardEntry, ___unmodifiedScore) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaberAPI::DataTransferObjects::LeaderboardEntry, ___rank) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::BeatSaberAPI::DataTransferObjects::LeaderboardEntry, ___updated) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaberAPI::DataTransferObjects::LeaderboardEntry, ___userDisplayName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaberAPI::DataTransferObjects::LeaderboardEntry, ___platformUserId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatSaberAPI::DataTransferObjects::LeaderboardEntry, ___gameplayModifiers) == 0x38, "Offset mismatch!");

} // namespace BeatSaberAPI::DataTransferObjects
NEED_NO_BOX(::BeatSaberAPI::DataTransferObjects::LeaderboardEntry);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaberAPI::DataTransferObjects::LeaderboardEntry*, "BeatSaberAPI.DataTransferObjects", "LeaderboardEntry");
