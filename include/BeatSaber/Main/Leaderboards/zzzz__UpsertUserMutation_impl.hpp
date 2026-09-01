#pragma once
// IWYU pragma private; include "BeatSaber\Main\Leaderboards\UpsertUserMutation.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__MutationRequest_1_impl.hpp"
#include "BeatSaber/Main/Leaderboards/zzzz__UpsertUserMutation_def.hpp"
#include "BGLib/Polyglot/zzzz__LocalizationLanguage_def.hpp"
#include "BeatSaber/Main/GraphQL/InputTypes/zzzz__XOCBeatGamesUserUpsertData_def.hpp"
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::UpsertUserMutation._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::Leaderboards::UpsertUserMutation::*)(::BGLib::Polyglot::LocalizationLanguage)>(
    &::BeatSaber::Main::Leaderboards::UpsertUserMutation::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x32a4fc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::Leaderboards::UpsertUserMutation*>(), { ".ctor", {}, { ::i2c::type_of<::BGLib::Polyglot::LocalizationLanguage>() } })));
    return ___internal_method;
  }
};
inline void BeatSaber::Main::Leaderboards::UpsertUserMutation::_ctor(::BGLib::Polyglot::LocalizationLanguage language) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::Leaderboards::UpsertUserMutation*>(), { ".ctor", {}, { ::i2c::type_of<::BGLib::Polyglot::LocalizationLanguage>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, language);
}
inline ::BeatSaber::Main::Leaderboards::UpsertUserMutation* BeatSaber::Main::Leaderboards::UpsertUserMutation::New_ctor(::BGLib::Polyglot::LocalizationLanguage language) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Main::Leaderboards::UpsertUserMutation*>(language));
}
// Ctor Parameters []
constexpr ::BeatSaber::Main::Leaderboards::UpsertUserMutation::UpsertUserMutation() {}
