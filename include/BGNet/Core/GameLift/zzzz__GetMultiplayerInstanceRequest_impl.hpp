#pragma once
// IWYU pragma private; include "BGNet\Core\GameLift\GetMultiplayerInstanceRequest.hpp"
#include "GlobalNamespace/zzzz__AuthenticationToken_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSelectionMask_impl.hpp"
#include "GlobalNamespace/zzzz__GameplayServerConfiguration_impl.hpp"
#include "GlobalNamespace/zzzz__ServiceEnvironment_impl.hpp"
#include "BGNet/Core/GameLift/zzzz__GetMultiplayerInstanceRequest_def.hpp"
#include "GlobalNamespace/zzzz__AuthenticationToken_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSelectionMask_def.hpp"
#include "GlobalNamespace/zzzz__GameplayServerConfiguration_def.hpp"
#include "GlobalNamespace/zzzz__ServiceEnvironment_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::BGNet::Core::GameLift::GetMultiplayerInstanceRequest._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGNet::Core::GameLift::GetMultiplayerInstanceRequest::*)(
    ::StringW, ::GlobalNamespace::ServiceEnvironment, ::StringW, ::GlobalNamespace::BeatmapLevelSelectionMask, ::GlobalNamespace::GameplayServerConfiguration,
    ::GlobalNamespace::AuthenticationToken_PlatformType, ::StringW, ::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, int64_t>*, ::StringW, ::StringW, ::StringW)>(
    &::BGNet::Core::GameLift::GetMultiplayerInstanceRequest::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x32c3380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Core::GameLift::GetMultiplayerInstanceRequest>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::ServiceEnvironment>(), ::i2c::type_of<::StringW>(),
                                                                 ::i2c::type_of<::GlobalNamespace::BeatmapLevelSelectionMask>(), ::i2c::type_of<::GlobalNamespace::GameplayServerConfiguration>(),
                                                                 ::i2c::type_of<::GlobalNamespace::AuthenticationToken_PlatformType>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW, int64_t>*>(), ::i2c::type_of<::StringW>(),
                                                                 ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void BGNet::Core::GameLift::GetMultiplayerInstanceRequest::_ctor(::StringW version, ::GlobalNamespace::ServiceEnvironment serviceEnvironment, ::StringW userId,
                                                                        ::GlobalNamespace::BeatmapLevelSelectionMask beatmapLevelSelectionMask,
                                                                        ::GlobalNamespace::GameplayServerConfiguration gameplayServerConfiguration,
                                                                        ::GlobalNamespace::AuthenticationToken_PlatformType platform, ::StringW privateGameSecret, ::StringW privateGameCode,
                                                                        ::System::Collections::Generic::Dictionary_2<::StringW, int64_t>* gameliftRegionLatencies, ::StringW ticketId,
                                                                        ::StringW placementId, ::StringW customLocation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Core::GameLift::GetMultiplayerInstanceRequest>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::ServiceEnvironment>(), ::i2c::type_of<::StringW>(),
                                                               ::i2c::type_of<::GlobalNamespace::BeatmapLevelSelectionMask>(), ::i2c::type_of<::GlobalNamespace::GameplayServerConfiguration>(),
                                                               ::i2c::type_of<::GlobalNamespace::AuthenticationToken_PlatformType>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(),
                                                               ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW, int64_t>*>(), ::i2c::type_of<::StringW>(),
                                                               ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, version, serviceEnvironment, userId, beatmapLevelSelectionMask, gameplayServerConfiguration, platform, privateGameSecret,
                                                   privateGameCode, gameliftRegionLatencies, ticketId, placementId, customLocation);
}
// Ctor Parameters [CppParam { name: "version", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "serviceEnvironment", ty: "::GlobalNamespace::ServiceEnvironment", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "beatmapLevelSelectionMask", ty: "::GlobalNamespace::BeatmapLevelSelectionMask", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "gameplayServerConfiguration", ty: "::GlobalNamespace::GameplayServerConfiguration", modifiers: "", def_value: Some("{}") }, CppParam { name: "userId", ty: "::StringW", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "privateGameSecret", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "privateGameCode", ty: "::StringW", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "platform", ty: "::GlobalNamespace::AuthenticationToken_PlatformType", modifiers: "", def_value: Some("{}") }, CppParam { name: "gameliftRegionLatencies", ty:
// "::System::Collections::Generic::Dictionary_2<::StringW,int64_t>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "ticketId", ty: "::StringW", modifiers: "", def_value: Some("{}") },
// CppParam { name: "placementId", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "customLocation", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::BGNet::Core::GameLift::GetMultiplayerInstanceRequest::GetMultiplayerInstanceRequest(::StringW version, ::GlobalNamespace::ServiceEnvironment serviceEnvironment,
                                                                                                ::GlobalNamespace::BeatmapLevelSelectionMask beatmapLevelSelectionMask,
                                                                                                ::GlobalNamespace::GameplayServerConfiguration gameplayServerConfiguration, ::StringW userId,
                                                                                                ::StringW privateGameSecret, ::StringW privateGameCode,
                                                                                                ::GlobalNamespace::AuthenticationToken_PlatformType platform,
                                                                                                ::System::Collections::Generic::Dictionary_2<::StringW, int64_t>* gameliftRegionLatencies,
                                                                                                ::StringW ticketId, ::StringW placementId, ::StringW customLocation) noexcept {
  this->version = version;
  this->serviceEnvironment = serviceEnvironment;
  this->beatmapLevelSelectionMask = beatmapLevelSelectionMask;
  this->gameplayServerConfiguration = gameplayServerConfiguration;
  this->userId = userId;
  this->privateGameSecret = privateGameSecret;
  this->privateGameCode = privateGameCode;
  this->platform = platform;
  this->gameliftRegionLatencies = gameliftRegionLatencies;
  this->ticketId = ticketId;
  this->placementId = placementId;
  this->customLocation = customLocation;
}
// Ctor Parameters []
constexpr ::BGNet::Core::GameLift::GetMultiplayerInstanceRequest::GetMultiplayerInstanceRequest() {}
