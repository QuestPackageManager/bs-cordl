#pragma once
// IWYU pragma private; include "BeatSaber/Main/Leaderboards/UpsertUserMutation.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__MutationRequest_1_impl.hpp"
#include "BeatSaber/Main/Leaderboards/zzzz__UpsertUserMutation_def.hpp"
#include "BeatSaber/Main/GraphQL/InputTypes/zzzz__XOCBeatGamesUserUpsertData_def.hpp"
#include "BeatSaber/Settings/zzzz__Settings_def.hpp"
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::UpsertUserMutation._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Main::Leaderboards::UpsertUserMutation::*)(::BeatSaber::Settings::Settings)>(
    &::BeatSaber::Main::Leaderboards::UpsertUserMutation::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x31a0210;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::UpsertUserMutation*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Settings::Settings>::get() })));
    return ___internal_method;
  }
};
inline void BeatSaber::Main::Leaderboards::UpsertUserMutation::_ctor(::BeatSaber::Settings::Settings settings) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::UpsertUserMutation*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Settings::Settings>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, settings);
}
inline ::BeatSaber::Main::Leaderboards::UpsertUserMutation* BeatSaber::Main::Leaderboards::UpsertUserMutation::New_ctor(::BeatSaber::Settings::Settings settings) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::Main::Leaderboards::UpsertUserMutation*>(settings));
}
// Ctor Parameters []
constexpr ::BeatSaber::Main::Leaderboards::UpsertUserMutation::UpsertUserMutation() {}
