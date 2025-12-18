#pragma once
// IWYU pragma private; include "BeatSaber/Main/Leaderboards/GraphQLErrorCode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GraphQLErrorCode)
// Forward declare root types
namespace BeatSaber::Main::Leaderboards {
class GraphQLErrorCode;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::Main::Leaderboards::GraphQLErrorCode);
// Dependencies System.Object
namespace BeatSaber::Main::Leaderboards {
// Is value type: false
// CS Name: BeatSaber.Main.Leaderboards.GraphQLErrorCode
class CORDL_TYPE GraphQLErrorCode : public ::System::Object {
public:
  // Declarations
  /// @brief Method IsBeatGamesErrorCode, addr 0x31d0988, size 0x70, virtual false, abstract: false, final false
  static inline bool IsBeatGamesErrorCode(::StringW code);

  /// @brief Method IsBeatGamesErrorCode, addr 0x31cf0f0, size 0x14, virtual false, abstract: false, final false
  static inline bool IsBeatGamesErrorCode(int32_t code);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphQLErrorCode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GraphQLErrorCode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GraphQLErrorCode(GraphQLErrorCode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GraphQLErrorCode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GraphQLErrorCode(GraphQLErrorCode const&) = delete;

  /// @brief Field BEAT_GAMES__CLIENT_VERSION_DEPRECATED offset 0xffffffff size 0x4
  static constexpr int32_t BEAT_GAMES__CLIENT_VERSION_DEPRECATED{ static_cast<int32_t>(0x39d0e0) };

  /// @brief Field BEAT_GAMES__GLOBAL_KILL_SWITCH_ON offset 0xffffffff size 0x4
  static constexpr int32_t BEAT_GAMES__GLOBAL_KILL_SWITCH_ON{ static_cast<int32_t>(0x39d0cb) };

  /// @brief Field BEAT_GAMES__ONBOARDING_EXPERIENCE_FROM_WRONG_DATA_ENVIRONMENT offset 0xffffffff size 0x4
  static constexpr int32_t BEAT_GAMES__ONBOARDING_EXPERIENCE_FROM_WRONG_DATA_ENVIRONMENT{ static_cast<int32_t>(0x39d0ea) };

  /// @brief Field BEAT_GAMES__SCHEDULE_CONFLICTING_CONTENT_VERSIONS_WITH_SAME_MINIMUM_CLIENT_VERSION offset 0xffffffff size 0x4
  static constexpr int32_t BEAT_GAMES__SCHEDULE_CONFLICTING_CONTENT_VERSIONS_WITH_SAME_MINIMUM_CLIENT_VERSION{ static_cast<int32_t>(0x39d0ec) };

  /// @brief Field BEAT_GAMES__SUBMIT_BEATMAP_ATTEMPT_KILL_SWITCH_ON offset 0xffffffff size 0x4
  static constexpr int32_t BEAT_GAMES__SUBMIT_BEATMAP_ATTEMPT_KILL_SWITCH_ON{ static_cast<int32_t>(0x39d0cf) };

  /// @brief Field BEAT_GAMES__UNSUPPORTED_FIELD_TYPE_FOR_STRING_SERIALIZATION offset 0xffffffff size 0x4
  static constexpr int32_t BEAT_GAMES__UNSUPPORTED_FIELD_TYPE_FOR_STRING_SERIALIZATION{ static_cast<int32_t>(0x39d0dd) };

  /// @brief Field BEAT_GAMES__UPSERT_LEADERBOARD_ENTRY_KILLSWITCH_ON offset 0xffffffff size 0x4
  static constexpr int32_t BEAT_GAMES__UPSERT_LEADERBOARD_ENTRY_KILLSWITCH_ON{ static_cast<int32_t>(0x39d0e1) };

  /// @brief Field BEAT_GAMES__USER_IS_DELETED offset 0xffffffff size 0x4
  static constexpr int32_t BEAT_GAMES__USER_IS_DELETED{ static_cast<int32_t>(0x39d0e2) };

  /// @brief Field MAX_ERROR_CODE offset 0xffffffff size 0x4
  static constexpr int32_t MAX_ERROR_CODE{ static_cast<int32_t>(0x39d0f0) };

  /// @brief Field MIN_ERROR_CODE offset 0xffffffff size 0x4
  static constexpr int32_t MIN_ERROR_CODE{ static_cast<int32_t>(0x39d0cb) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20968 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::Main::Leaderboards::GraphQLErrorCode, 0x10>, "Size mismatch!");

} // namespace BeatSaber::Main::Leaderboards
NEED_NO_BOX(::BeatSaber::Main::Leaderboards::GraphQLErrorCode);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Main::Leaderboards::GraphQLErrorCode*, "BeatSaber.Main.Leaderboards", "GraphQLErrorCode");
