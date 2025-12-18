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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Main::Leaderboards::UpsertLeaderboardEntryMutation::*)(
    ::GlobalNamespace::LevelCompletionResults*, ::GlobalNamespace::BeatmapKey, ::GlobalNamespace::GameplayModifiers*)>(&::BeatSaber::Main::Leaderboards::UpsertLeaderboardEntryMutation::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x31d0860;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::UpsertLeaderboardEntryMutation*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapKey>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::UpsertLeaderboardEntryMutation.ConvertInputData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData* (*)(::GlobalNamespace::LevelCompletionResults*, ::GlobalNamespace::BeatmapKey,
                                                                                                           ::GlobalNamespace::GameplayModifiers*)>(
        &::BeatSaber::Main::Leaderboards::UpsertLeaderboardEntryMutation::ConvertInputData)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x31d0d4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::UpsertLeaderboardEntryMutation*>::get(), "ConvertInputData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapKey>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get() })));
    return ___internal_method;
  }
};
inline void BeatSaber::Main::Leaderboards::UpsertLeaderboardEntryMutation::_ctor(::GlobalNamespace::LevelCompletionResults* results, ::GlobalNamespace::BeatmapKey beatmapKey,
                                                                                 ::GlobalNamespace::GameplayModifiers* modifiers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::UpsertLeaderboardEntryMutation*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapKey>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, results, beatmapKey, modifiers);
}
inline ::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData*
BeatSaber::Main::Leaderboards::UpsertLeaderboardEntryMutation::ConvertInputData(::GlobalNamespace::LevelCompletionResults* levelCompletionResults, ::GlobalNamespace::BeatmapKey beatmapKey,
                                                                                ::GlobalNamespace::GameplayModifiers* modifiers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::UpsertLeaderboardEntryMutation*>::get(), "ConvertInputData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapKey>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData*, false>(nullptr, ___internal_method, levelCompletionResults,
                                                                                                                                            beatmapKey, modifiers);
}
inline ::BeatSaber::Main::Leaderboards::UpsertLeaderboardEntryMutation* BeatSaber::Main::Leaderboards::UpsertLeaderboardEntryMutation::New_ctor(::GlobalNamespace::LevelCompletionResults* results,
                                                                                                                                                ::GlobalNamespace::BeatmapKey beatmapKey,
                                                                                                                                                ::GlobalNamespace::GameplayModifiers* modifiers) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::Main::Leaderboards::UpsertLeaderboardEntryMutation*>(results, beatmapKey, modifiers));
}
// Ctor Parameters []
constexpr ::BeatSaber::Main::Leaderboards::UpsertLeaderboardEntryMutation::UpsertLeaderboardEntryMutation() {}
