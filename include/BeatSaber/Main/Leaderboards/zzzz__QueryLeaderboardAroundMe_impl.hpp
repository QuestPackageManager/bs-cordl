#pragma once
// IWYU pragma private; include "BeatSaber\Main\Leaderboards\QueryLeaderboardAroundMe.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__QueryRequest_impl.hpp"
#include "BeatSaber/Main/Leaderboards/zzzz__QueryLeaderboardAroundMe_def.hpp"
#include "BeatSaber/Main/GraphQL/InputTypes/zzzz__XOCBeatGamesBeatmapLeaderboardEntryOrder_def.hpp"
#include "BeatSaber/Main/GraphQL/Queries/zzzz__BSLeaderboardAroundMe_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierMask_def.hpp"
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::QueryLeaderboardAroundMe._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::Leaderboards::QueryLeaderboardAroundMe::*)(
    ::StringW, ::StringW, ::GlobalNamespace::BeatmapKey, ::GlobalNamespace::GameplayModifierMask, int64_t, ::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryOrder*)>(
    &::BeatSaber::Main::Leaderboards::QueryLeaderboardAroundMe::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32a2a28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::Leaderboards::QueryLeaderboardAroundMe*>(),
                            { ".ctor",
                              {},
                              { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::BeatmapKey>(), ::i2c::type_of<::GlobalNamespace::GameplayModifierMask>(),
                                ::i2c::type_of<int64_t>(), ::i2c::type_of<::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryOrder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::QueryLeaderboardAroundMe.CreateQuery
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe* (*)(::StringW, ::StringW, ::GlobalNamespace::BeatmapKey, ::GlobalNamespace::GameplayModifierMask, int64_t,
                                                                                ::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryOrder*)>(
        &::BeatSaber::Main::Leaderboards::QueryLeaderboardAroundMe::CreateQuery)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x32a5db8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::Leaderboards::QueryLeaderboardAroundMe*>(),
                            { "CreateQuery",
                              {},
                              { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::BeatmapKey>(), ::i2c::type_of<::GlobalNamespace::GameplayModifierMask>(),
                                ::i2c::type_of<int64_t>(), ::i2c::type_of<::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryOrder*>() } })));
    return ___internal_method;
  }
};
inline void BeatSaber::Main::Leaderboards::QueryLeaderboardAroundMe::setStaticF_kDefaultOrder(::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryOrder* value) {
  ::cordl_internals::setStaticField<::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryOrder*, "kDefaultOrder", ::BeatSaber::Main::Leaderboards::QueryLeaderboardAroundMe*>(
      std::forward<::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryOrder*>(value));
}
inline ::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryOrder* BeatSaber::Main::Leaderboards::QueryLeaderboardAroundMe::getStaticF_kDefaultOrder() {
  return ::cordl_internals::getStaticField<::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryOrder*, "kDefaultOrder",
                                           ::BeatSaber::Main::Leaderboards::QueryLeaderboardAroundMe*>();
}
inline void BeatSaber::Main::Leaderboards::QueryLeaderboardAroundMe::_ctor(::StringW userId, ::StringW environmentPlayerRootId, ::GlobalNamespace::BeatmapKey key,
                                                                           ::GlobalNamespace::GameplayModifierMask modifiers, int64_t amountEntries,
                                                                           ::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryOrder* order) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::Leaderboards::QueryLeaderboardAroundMe*>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::BeatmapKey>(),
                                                                                             ::i2c::type_of<::GlobalNamespace::GameplayModifierMask>(), ::i2c::type_of<int64_t>(),
                                                                                             ::i2c::type_of<::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryOrder*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId, environmentPlayerRootId, key, modifiers, amountEntries, order);
}
inline ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe*
BeatSaber::Main::Leaderboards::QueryLeaderboardAroundMe::CreateQuery(::StringW userId, ::StringW environmentPlayerRootId, ::GlobalNamespace::BeatmapKey key,
                                                                     ::GlobalNamespace::GameplayModifierMask modifiers, int64_t amountEntries,
                                                                     ::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryOrder* order) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::Leaderboards::QueryLeaderboardAroundMe*>(),
                                                                                         { "CreateQuery",
                                                                                           {},
                                                                                           { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::BeatmapKey>(),
                                                                                             ::i2c::type_of<::GlobalNamespace::GameplayModifierMask>(), ::i2c::type_of<int64_t>(),
                                                                                             ::i2c::type_of<::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryOrder*>() } })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe*>(nullptr, ___internal_method, userId, environmentPlayerRootId, key, modifiers, amountEntries,
                                                                                                          order);
}
inline ::BeatSaber::Main::Leaderboards::QueryLeaderboardAroundMe*
BeatSaber::Main::Leaderboards::QueryLeaderboardAroundMe::New_ctor(::StringW userId, ::StringW environmentPlayerRootId, ::GlobalNamespace::BeatmapKey key,
                                                                  ::GlobalNamespace::GameplayModifierMask modifiers, int64_t amountEntries,
                                                                  ::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryOrder* order) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Main::Leaderboards::QueryLeaderboardAroundMe*>(userId, environmentPlayerRootId, key, modifiers, amountEntries, order));
}
// Ctor Parameters []
constexpr ::BeatSaber::Main::Leaderboards::QueryLeaderboardAroundMe::QueryLeaderboardAroundMe() {}
