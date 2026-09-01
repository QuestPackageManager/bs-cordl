#pragma once
// IWYU pragma private; include "BeatSaber\Main\Leaderboards\QueryLeaderboardHealth.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__QueryRequest_impl.hpp"
#include "BeatSaber/Main/Leaderboards/zzzz__QueryLeaderboardHealth_def.hpp"
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::QueryLeaderboardHealth._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::Leaderboards::QueryLeaderboardHealth::*)()>(&::BeatSaber::Main::Leaderboards::QueryLeaderboardHealth::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x32a4f5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::Leaderboards::QueryLeaderboardHealth*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void BeatSaber::Main::Leaderboards::QueryLeaderboardHealth::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::Leaderboards::QueryLeaderboardHealth*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::Main::Leaderboards::QueryLeaderboardHealth* BeatSaber::Main::Leaderboards::QueryLeaderboardHealth::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Main::Leaderboards::QueryLeaderboardHealth*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::Main::Leaderboards::QueryLeaderboardHealth::QueryLeaderboardHealth() {}
