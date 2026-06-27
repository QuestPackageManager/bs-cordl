#pragma once
// IWYU pragma private; include "BeatSaber/Main/Leaderboards/UpsertUserMutation.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__MutationRequest_1_impl.hpp"
#include "BeatSaber/Main/Leaderboards/zzzz__UpsertUserMutation_def.hpp"
#include "BGLib/Polyglot/zzzz__LocalizationLanguage_def.hpp"
#include "BeatSaber/Main/GraphQL/InputTypes/zzzz__XOCBeatGamesUserUpsertData_def.hpp"
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::UpsertUserMutation._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Main::Leaderboards::UpsertUserMutation::*)(::BGLib::Polyglot::LocalizationLanguage)>(&::BeatSaber::Main::Leaderboards::UpsertUserMutation::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x320c920;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::UpsertUserMutation*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::Polyglot::LocalizationLanguage>::get()}
                    )));
    return ___internal_method;
  }
};
inline void BeatSaber::Main::Leaderboards::UpsertUserMutation::_ctor(::BGLib::Polyglot::LocalizationLanguage  language)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::Leaderboards::UpsertUserMutation*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::Polyglot::LocalizationLanguage>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, language);
}
inline ::BeatSaber::Main::Leaderboards::UpsertUserMutation* BeatSaber::Main::Leaderboards::UpsertUserMutation::New_ctor(::BGLib::Polyglot::LocalizationLanguage  language)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::Main::Leaderboards::UpsertUserMutation*>(language));
}
// Ctor Parameters []
constexpr ::BeatSaber::Main::Leaderboards::UpsertUserMutation::UpsertUserMutation()   {
}
