#pragma once
// IWYU pragma private; include "BGNet/Core/GameLift/GetMultiplayerInstanceRequest.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::GameLift::GetMultiplayerInstanceRequest::*)(
    ::StringW, ::GlobalNamespace::ServiceEnvironment, ::StringW, ::GlobalNamespace::BeatmapLevelSelectionMask, ::GlobalNamespace::GameplayServerConfiguration,
    ::GlobalNamespace::AuthenticationToken_Platform, ::StringW, ::StringW, ::StringW, ::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, int64_t>*, ::StringW, ::StringW)>(
    &::BGNet::Core::GameLift::GetMultiplayerInstanceRequest::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x22efca0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GetMultiplayerInstanceRequest>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 13>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ServiceEnvironment>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelSelectionMask>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayServerConfiguration>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AuthenticationToken_Platform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, int64_t>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void BGNet::Core::GameLift::GetMultiplayerInstanceRequest::_ctor(
    ::StringW version, ::GlobalNamespace::ServiceEnvironment serviceEnvironment, ::StringW userId, ::GlobalNamespace::BeatmapLevelSelectionMask beatmapLevelSelectionMask,
    ::GlobalNamespace::GameplayServerConfiguration gameplayServerConfiguration, ::GlobalNamespace::AuthenticationToken_Platform platform, ::StringW authUserId, ::StringW singleUseAuthToken,
    ::StringW privateGameSecret, ::StringW privateGameCode, ::System::Collections::Generic::Dictionary_2<::StringW, int64_t>* gameliftRegionLatencies, ::StringW ticketId, ::StringW placementId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GetMultiplayerInstanceRequest>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 13>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ServiceEnvironment>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelSelectionMask>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayServerConfiguration>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AuthenticationToken_Platform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, int64_t>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, version, serviceEnvironment, userId, beatmapLevelSelectionMask, gameplayServerConfiguration, platform, authUserId,
                                                          singleUseAuthToken, privateGameSecret, privateGameCode, gameliftRegionLatencies, ticketId, placementId);
}
// Ctor Parameters [CppParam { name: "version", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "serviceEnvironment", ty: "::GlobalNamespace::ServiceEnvironment", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "singleUseAuthToken", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "beatmapLevelSelectionMask", ty:
// "::GlobalNamespace::BeatmapLevelSelectionMask", modifiers: "", def_value: Some("{}") }, CppParam { name: "gameplayServerConfiguration", ty: "::GlobalNamespace::GameplayServerConfiguration",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "userId", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "privateGameSecret", ty: "::StringW", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "privateGameCode", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "platform", ty:
// "::GlobalNamespace::AuthenticationToken_Platform", modifiers: "", def_value: Some("{}") }, CppParam { name: "authUserId", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "gameliftRegionLatencies", ty: "::System::Collections::Generic::Dictionary_2<::StringW,int64_t>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "ticketId", ty: "::StringW", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "placementId", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::BGNet::Core::GameLift::GetMultiplayerInstanceRequest::GetMultiplayerInstanceRequest(::StringW version, ::GlobalNamespace::ServiceEnvironment serviceEnvironment,
                                                                                                ::StringW singleUseAuthToken, ::GlobalNamespace::BeatmapLevelSelectionMask beatmapLevelSelectionMask,
                                                                                                ::GlobalNamespace::GameplayServerConfiguration gameplayServerConfiguration, ::StringW userId,
                                                                                                ::StringW privateGameSecret, ::StringW privateGameCode,
                                                                                                ::GlobalNamespace::AuthenticationToken_Platform platform, ::StringW authUserId,
                                                                                                ::System::Collections::Generic::Dictionary_2<::StringW, int64_t>* gameliftRegionLatencies,
                                                                                                ::StringW ticketId, ::StringW placementId) noexcept {
  this->version = version;
  this->serviceEnvironment = serviceEnvironment;
  this->singleUseAuthToken = singleUseAuthToken;
  this->beatmapLevelSelectionMask = beatmapLevelSelectionMask;
  this->gameplayServerConfiguration = gameplayServerConfiguration;
  this->userId = userId;
  this->privateGameSecret = privateGameSecret;
  this->privateGameCode = privateGameCode;
  this->platform = platform;
  this->authUserId = authUserId;
  this->gameliftRegionLatencies = gameliftRegionLatencies;
  this->ticketId = ticketId;
  this->placementId = placementId;
}
// Ctor Parameters []
constexpr ::BGNet::Core::GameLift::GetMultiplayerInstanceRequest::GetMultiplayerInstanceRequest() {}
