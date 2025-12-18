#pragma once
// IWYU pragma private; include "BeatSaber/Main/Leaderboards/LeaderboardHelpers.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Main/Leaderboards/zzzz__LeaderboardHelpers_def.hpp"
#include "BeatSaber/Main/GraphQL/Enums/zzzz__XOCBeatGamesBeatmapCharacteristic_def.hpp"
#include "BeatSaber/Main/GraphQL/Enums/zzzz__XOCBeatGamesBeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::LeaderboardHelpers.ConvertCharacteristic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapCharacteristic (*)(::StringW)>(
    &::BeatSaber::Main::Leaderboards::LeaderboardHelpers::ConvertCharacteristic)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x31d09f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::LeaderboardHelpers*>::get(), "ConvertCharacteristic",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::LeaderboardHelpers.ConvertDifficulty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapDifficulty (*)(::GlobalNamespace::BeatmapDifficulty)>(
    &::BeatSaber::Main::Leaderboards::LeaderboardHelpers::ConvertDifficulty)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x31d0d40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::LeaderboardHelpers*>::get(), "ConvertDifficulty", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get() })));
    return ___internal_method;
  }
};
inline ::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapCharacteristic BeatSaber::Main::Leaderboards::LeaderboardHelpers::ConvertCharacteristic(::StringW characteristicName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::LeaderboardHelpers*>::get(), "ConvertCharacteristic",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapCharacteristic, false>(nullptr, ___internal_method, characteristicName);
}
inline ::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapDifficulty BeatSaber::Main::Leaderboards::LeaderboardHelpers::ConvertDifficulty(::GlobalNamespace::BeatmapDifficulty difficulty) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::LeaderboardHelpers*>::get(), "ConvertDifficulty", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapDifficulty, false>(nullptr, ___internal_method, difficulty);
}
// Ctor Parameters []
constexpr ::BeatSaber::Main::Leaderboards::LeaderboardHelpers::LeaderboardHelpers() {}
