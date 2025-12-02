#pragma once
// IWYU pragma private; include "BeatSaber/Main/Leaderboards/QueryLeaderboardAroundMe.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__QueryRequest_impl.hpp"
#include "BeatSaber/Main/Leaderboards/zzzz__QueryLeaderboardAroundMe_def.hpp"
#include "BeatSaber/Main/GraphQL/InputTypes/zzzz__XOCBeatGamesBeatmapLeaderboardEntryOrder_def.hpp"
#include "BeatSaber/Main/GraphQL/Queries/zzzz__BSLeaderboardAroundMe_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierMask_def.hpp"
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::QueryLeaderboardAroundMe._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Main::Leaderboards::QueryLeaderboardAroundMe::*)(
    ::StringW, ::GlobalNamespace::BeatmapKey, ::GlobalNamespace::GameplayModifierMask, int64_t, ::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryOrder*)>(
    &::BeatSaber::Main::Leaderboards::QueryLeaderboardAroundMe::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x319dacc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::QueryLeaderboardAroundMe*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapKey>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifierMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryOrder*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::QueryLeaderboardAroundMe.CreateQuery
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe* (*)(::StringW, ::GlobalNamespace::BeatmapKey, ::GlobalNamespace::GameplayModifierMask, int64_t,
                                                                                ::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryOrder*)>(
        &::BeatSaber::Main::Leaderboards::QueryLeaderboardAroundMe::CreateQuery)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x31a0fb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::QueryLeaderboardAroundMe*>::get(), "CreateQuery", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapKey>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifierMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryOrder*>::get() })));
    return ___internal_method;
  }
};
inline void BeatSaber::Main::Leaderboards::QueryLeaderboardAroundMe::setStaticF_kDefaultOrder(::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryOrder* value) {
  ::cordl_internals::setStaticField<::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryOrder*, "kDefaultOrder",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::QueryLeaderboardAroundMe*>::get>(
      std::forward<::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryOrder*>(value));
}
inline ::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryOrder* BeatSaber::Main::Leaderboards::QueryLeaderboardAroundMe::getStaticF_kDefaultOrder() {
  return ::cordl_internals::getStaticField<::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryOrder*, "kDefaultOrder",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::QueryLeaderboardAroundMe*>::get>();
}
inline void BeatSaber::Main::Leaderboards::QueryLeaderboardAroundMe::_ctor(::StringW userId, ::GlobalNamespace::BeatmapKey key, ::GlobalNamespace::GameplayModifierMask modifiers,
                                                                           int64_t amountEntries, ::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryOrder* order) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::QueryLeaderboardAroundMe*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapKey>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifierMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryOrder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, key, modifiers, amountEntries, order);
}
inline ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe*
BeatSaber::Main::Leaderboards::QueryLeaderboardAroundMe::CreateQuery(::StringW userId, ::GlobalNamespace::BeatmapKey key, ::GlobalNamespace::GameplayModifierMask modifiers, int64_t amountEntries,
                                                                     ::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryOrder* order) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::QueryLeaderboardAroundMe*>::get(), "CreateQuery", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapKey>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifierMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryOrder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe*, false>(nullptr, ___internal_method, userId, key, modifiers, amountEntries, order);
}
inline ::BeatSaber::Main::Leaderboards::QueryLeaderboardAroundMe*
BeatSaber::Main::Leaderboards::QueryLeaderboardAroundMe::New_ctor(::StringW userId, ::GlobalNamespace::BeatmapKey key, ::GlobalNamespace::GameplayModifierMask modifiers, int64_t amountEntries,
                                                                  ::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryOrder* order) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::Main::Leaderboards::QueryLeaderboardAroundMe*>(userId, key, modifiers, amountEntries, order));
}
// Ctor Parameters []
constexpr ::BeatSaber::Main::Leaderboards::QueryLeaderboardAroundMe::QueryLeaderboardAroundMe() {}
