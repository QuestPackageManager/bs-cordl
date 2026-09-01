#pragma once
// IWYU pragma private; include "BeatSaber\Main\Leaderboards\LeaderboardHelpers.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Main/Leaderboards/zzzz__LeaderboardHelpers_def.hpp"
#include "BeatSaber/Main/GraphQL/Enums/zzzz__XOCBeatGamesBeatmapCharacteristic_def.hpp"
#include "BeatSaber/Main/GraphQL/Enums/zzzz__XOCBeatGamesBeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::LeaderboardHelpers.ConvertCharacteristic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapCharacteristic (*)(::StringW)>(
    &::BeatSaber::Main::Leaderboards::LeaderboardHelpers::ConvertCharacteristic)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x32a5938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::Leaderboards::LeaderboardHelpers*>(), { "ConvertCharacteristic", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::LeaderboardHelpers.ConvertDifficulty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapDifficulty (*)(::GlobalNamespace::BeatmapDifficulty)>(
    &::BeatSaber::Main::Leaderboards::LeaderboardHelpers::ConvertDifficulty)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x32a5c80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::Leaderboards::LeaderboardHelpers*>(),
                                                                                           { "ConvertDifficulty", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>() } })));
    return ___internal_method;
  }
};
inline ::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapCharacteristic BeatSaber::Main::Leaderboards::LeaderboardHelpers::ConvertCharacteristic(::StringW characteristicName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::Leaderboards::LeaderboardHelpers*>(), { "ConvertCharacteristic", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapCharacteristic>(nullptr, ___internal_method, characteristicName);
}
inline ::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapDifficulty BeatSaber::Main::Leaderboards::LeaderboardHelpers::ConvertDifficulty(::GlobalNamespace::BeatmapDifficulty difficulty) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::Leaderboards::LeaderboardHelpers*>(),
                                                                                         { "ConvertDifficulty", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>() } })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapDifficulty>(nullptr, ___internal_method, difficulty);
}
// Ctor Parameters []
constexpr ::BeatSaber::Main::Leaderboards::LeaderboardHelpers::LeaderboardHelpers() {}
