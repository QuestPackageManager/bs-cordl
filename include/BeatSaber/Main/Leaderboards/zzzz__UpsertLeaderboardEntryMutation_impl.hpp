#pragma once
// IWYU pragma private; include "BeatSaber/Main/Leaderboards/UpsertLeaderboardEntryMutation.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__MutationRequest_1_impl.hpp"
#include "BeatSaber/Main/Leaderboards/zzzz__UpsertLeaderboardEntryMutation_def.hpp"
#include "BeatSaber/Main/GraphQL/InputTypes/zzzz__XOCBeatGamesBeatmapLeaderboardEntryUpsertData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__LevelCompletionResults_def.hpp"
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::UpsertLeaderboardEntryMutation._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::Leaderboards::UpsertLeaderboardEntryMutation::*)(
    ::GlobalNamespace::LevelCompletionResults*, ::GlobalNamespace::BeatmapKey, ::GlobalNamespace::GameplayModifiers*)>(&::BeatSaber::Main::Leaderboards::UpsertLeaderboardEntryMutation::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x32a4068;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::Leaderboards::UpsertLeaderboardEntryMutation*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::LevelCompletionResults*>(), ::i2c::type_of<::GlobalNamespace::BeatmapKey>(),
                                                                 ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::UpsertLeaderboardEntryMutation.ConvertInputData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData* (*)(::GlobalNamespace::LevelCompletionResults*, ::GlobalNamespace::BeatmapKey,
                                                                                                           ::GlobalNamespace::GameplayModifiers*)>(
        &::BeatSaber::Main::Leaderboards::UpsertLeaderboardEntryMutation::ConvertInputData)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x32a454c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::Leaderboards::UpsertLeaderboardEntryMutation*>(),
                                                             { "ConvertInputData",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::LevelCompletionResults*>(), ::i2c::type_of<::GlobalNamespace::BeatmapKey>(),
                                                                 ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
    return ___internal_method;
  }
};
inline void BeatSaber::Main::Leaderboards::UpsertLeaderboardEntryMutation::_ctor(::GlobalNamespace::LevelCompletionResults* results, ::GlobalNamespace::BeatmapKey beatmapKey,
                                                                                 ::GlobalNamespace::GameplayModifiers* modifiers) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::Leaderboards::UpsertLeaderboardEntryMutation*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::LevelCompletionResults*>(), ::i2c::type_of<::GlobalNamespace::BeatmapKey>(),
                                                               ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, results, beatmapKey, modifiers);
}
inline ::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData*
BeatSaber::Main::Leaderboards::UpsertLeaderboardEntryMutation::ConvertInputData(::GlobalNamespace::LevelCompletionResults* levelCompletionResults, ::GlobalNamespace::BeatmapKey beatmapKey,
                                                                                ::GlobalNamespace::GameplayModifiers* modifiers) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::Leaderboards::UpsertLeaderboardEntryMutation*>(),
                                                           { "ConvertInputData",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::LevelCompletionResults*>(), ::i2c::type_of<::GlobalNamespace::BeatmapKey>(),
                                                               ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData*>(nullptr, ___internal_method, levelCompletionResults, beatmapKey,
                                                                                                                                     modifiers);
}
inline ::BeatSaber::Main::Leaderboards::UpsertLeaderboardEntryMutation* BeatSaber::Main::Leaderboards::UpsertLeaderboardEntryMutation::New_ctor(::GlobalNamespace::LevelCompletionResults* results,
                                                                                                                                                ::GlobalNamespace::BeatmapKey beatmapKey,
                                                                                                                                                ::GlobalNamespace::GameplayModifiers* modifiers) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Main::Leaderboards::UpsertLeaderboardEntryMutation*>(results, beatmapKey, modifiers));
}
// Ctor Parameters []
constexpr ::BeatSaber::Main::Leaderboards::UpsertLeaderboardEntryMutation::UpsertLeaderboardEntryMutation() {}
