#pragma once
// IWYU pragma private; include "GlobalNamespace\PlayingMultiplayerRichPresenceData.hpp"
#include "GlobalNamespace/zzzz__InMultiplayerRichPresenceData_impl.hpp"
#include "GlobalNamespace/zzzz__PlayingMultiplayerRichPresenceData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayingMultiplayerRichPresenceData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayingMultiplayerRichPresenceData::*)(bool)>(&::GlobalNamespace::PlayingMultiplayerRichPresenceData::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x58ff590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayingMultiplayerRichPresenceData*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PlayingMultiplayerRichPresenceData::_ctor(bool atMaxPartySize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayingMultiplayerRichPresenceData*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, atMaxPartySize);
}
inline ::GlobalNamespace::PlayingMultiplayerRichPresenceData* GlobalNamespace::PlayingMultiplayerRichPresenceData::New_ctor(bool atMaxPartySize) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayingMultiplayerRichPresenceData*>(atMaxPartySize));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayingMultiplayerRichPresenceData::PlayingMultiplayerRichPresenceData() {}
