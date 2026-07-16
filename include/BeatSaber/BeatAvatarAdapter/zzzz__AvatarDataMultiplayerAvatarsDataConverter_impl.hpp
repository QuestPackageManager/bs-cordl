#pragma once
// IWYU pragma private; include "BeatSaber/BeatAvatarAdapter/AvatarDataMultiplayerAvatarsDataConverter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/BeatAvatarAdapter/zzzz__AvatarDataMultiplayerAvatarsDataConverter_def.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__AvatarData_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerAvatarData_def.hpp"
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarDataMultiplayerAvatarsDataConverter.CreateMultiplayerAvatarsData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MultiplayerAvatarData (*)(::BeatSaber::BeatAvatarSDK::AvatarData*)>(
    &::BeatSaber::BeatAvatarAdapter::AvatarDataMultiplayerAvatarsDataConverter::CreateMultiplayerAvatarsData)> {
  constexpr static std::size_t size = 0x49c;
  constexpr static std::size_t addrs = 0x327306c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarDataMultiplayerAvatarsDataConverter*>(),
                                                                                           { "CreateMultiplayerAvatarsData", {}, { ::i2c::type_of<::BeatSaber::BeatAvatarSDK::AvatarData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarDataMultiplayerAvatarsDataConverter.CreateAvatarData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::BeatAvatarSDK::AvatarData* (*)(::GlobalNamespace::MultiplayerAvatarData)>(
    &::BeatSaber::BeatAvatarAdapter::AvatarDataMultiplayerAvatarsDataConverter::CreateAvatarData)> {
  constexpr static std::size_t size = 0x584;
  constexpr static std::size_t addrs = 0x3273508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarDataMultiplayerAvatarsDataConverter*>(),
                                                                                           { "CreateAvatarData", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerAvatarData>() } })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::MultiplayerAvatarData
BeatSaber::BeatAvatarAdapter::AvatarDataMultiplayerAvatarsDataConverter::CreateMultiplayerAvatarsData(::BeatSaber::BeatAvatarSDK::AvatarData* avatarData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarDataMultiplayerAvatarsDataConverter*>(),
                                                                                         { "CreateMultiplayerAvatarsData", {}, { ::i2c::type_of<::BeatSaber::BeatAvatarSDK::AvatarData*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerAvatarData>(nullptr, ___internal_method, avatarData);
}
inline ::BeatSaber::BeatAvatarSDK::AvatarData*
BeatSaber::BeatAvatarAdapter::AvatarDataMultiplayerAvatarsDataConverter::CreateAvatarData(::GlobalNamespace::MultiplayerAvatarData multiplayerAvatarsData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarDataMultiplayerAvatarsDataConverter*>(),
                                                                                         { "CreateAvatarData", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerAvatarData>() } })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::BeatAvatarSDK::AvatarData*>(nullptr, ___internal_method, multiplayerAvatarsData);
}
// Ctor Parameters []
constexpr ::BeatSaber::BeatAvatarAdapter::AvatarDataMultiplayerAvatarsDataConverter::AvatarDataMultiplayerAvatarsDataConverter() {}
