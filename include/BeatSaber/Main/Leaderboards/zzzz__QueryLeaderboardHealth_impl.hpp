#pragma once
// IWYU pragma private; include "BeatSaber/Main/Leaderboards/QueryLeaderboardHealth.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__QueryRequest_impl.hpp"
#include "BeatSaber/Main/Leaderboards/zzzz__QueryLeaderboardHealth_def.hpp"
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::QueryLeaderboardHealth._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Main::Leaderboards::QueryLeaderboardHealth::*)()>(
    &::BeatSaber::Main::Leaderboards::QueryLeaderboardHealth::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x31d002c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::QueryLeaderboardHealth*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void BeatSaber::Main::Leaderboards::QueryLeaderboardHealth::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::QueryLeaderboardHealth*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::BeatSaber::Main::Leaderboards::QueryLeaderboardHealth* BeatSaber::Main::Leaderboards::QueryLeaderboardHealth::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::Main::Leaderboards::QueryLeaderboardHealth*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::Main::Leaderboards::QueryLeaderboardHealth::QueryLeaderboardHealth() {}
