#pragma once
// IWYU pragma private; include "Unity/Multiplayer/PlayMode/CurrentPlayer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Multiplayer/PlayMode/zzzz__CurrentPlayer_def.hpp"
#include "Unity/Multiplayer/PlayMode/zzzz__CurrentPlayerApi_def.hpp"
//  Writing Method size for method: ::Unity::Multiplayer::PlayMode::CurrentPlayer.ReloadLatestTagsOnEnterPlaymode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Unity::Multiplayer::PlayMode::CurrentPlayer::ReloadLatestTagsOnEnterPlaymode)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6fc4730;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Multiplayer::PlayMode::CurrentPlayer*>(), { "ReloadLatestTagsOnEnterPlaymode", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::Multiplayer::PlayMode::CurrentPlayer::setStaticF_s_CurrentPlayerApi(::Unity::Multiplayer::PlayMode::CurrentPlayerApi* value) {
  ::cordl_internals::setStaticField<::Unity::Multiplayer::PlayMode::CurrentPlayerApi*, "s_CurrentPlayerApi", ::Unity::Multiplayer::PlayMode::CurrentPlayer*>(
      std::forward<::Unity::Multiplayer::PlayMode::CurrentPlayerApi*>(value));
}
inline ::Unity::Multiplayer::PlayMode::CurrentPlayerApi* Unity::Multiplayer::PlayMode::CurrentPlayer::getStaticF_s_CurrentPlayerApi() {
  return ::cordl_internals::getStaticField<::Unity::Multiplayer::PlayMode::CurrentPlayerApi*, "s_CurrentPlayerApi", ::Unity::Multiplayer::PlayMode::CurrentPlayer*>();
}
inline void Unity::Multiplayer::PlayMode::CurrentPlayer::ReloadLatestTagsOnEnterPlaymode() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Multiplayer::PlayMode::CurrentPlayer*>(), { "ReloadLatestTagsOnEnterPlaymode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::Multiplayer::PlayMode::CurrentPlayer::CurrentPlayer() {}
