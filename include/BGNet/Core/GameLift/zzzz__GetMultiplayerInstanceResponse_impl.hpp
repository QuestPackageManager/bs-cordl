#pragma once
// IWYU pragma private; include "BGNet/Core/GameLift/GetMultiplayerInstanceResponse.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlacementErrorCode_impl.hpp"
#include "BGNet/Core/GameLift/zzzz__GetMultiplayerInstanceResponse_def.hpp"
#include "BGNet/Core/GameLift/zzzz__PlayerSessionInfo_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlacementErrorCode_def.hpp"
//  Writing Method size for method: ::BGNet::Core::GameLift::GetMultiplayerInstanceResponse._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGNet::Core::GameLift::GetMultiplayerInstanceResponse::*)(
    ::GlobalNamespace::MultiplayerPlacementErrorCode, ::BGNet::Core::GameLift::PlayerSessionInfo*, int32_t, ::StringW, ::StringW, ::StringW, ::StringW)>(
    &::BGNet::Core::GameLift::GetMultiplayerInstanceResponse::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x32c1c4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>(),
                                         { ".ctor",
                                           {},
                                           { ::i2c::type_of<::GlobalNamespace::MultiplayerPlacementErrorCode>(), ::i2c::type_of<::BGNet::Core::GameLift::PlayerSessionInfo*>(),
                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void BGNet::Core::GameLift::GetMultiplayerInstanceResponse::_ctor(::GlobalNamespace::MultiplayerPlacementErrorCode errorCode, ::BGNet::Core::GameLift::PlayerSessionInfo* playerSessionInfo,
                                                                         int32_t pollIntervalMs, ::StringW ticketId, ::StringW ticketStatus, ::StringW placementId, ::StringW placementStatus) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<::GlobalNamespace::MultiplayerPlacementErrorCode>(), ::i2c::type_of<::BGNet::Core::GameLift::PlayerSessionInfo*>(),
                                                  ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, errorCode, playerSessionInfo, pollIntervalMs, ticketId, ticketStatus, placementId, placementStatus);
}
// Ctor Parameters [CppParam { name: "errorCode", ty: "::GlobalNamespace::MultiplayerPlacementErrorCode", modifiers: "", def_value: Some("{}") }, CppParam { name: "playerSessionInfo", ty:
// "::BGNet::Core::GameLift::PlayerSessionInfo*", modifiers: "", def_value: Some("{}") }, CppParam { name: "pollIntervalMs", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "ticketId", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "ticketStatus", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "placementId", ty:
// "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "placementStatus", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::BGNet::Core::GameLift::GetMultiplayerInstanceResponse::GetMultiplayerInstanceResponse(::GlobalNamespace::MultiplayerPlacementErrorCode errorCode,
                                                                                                  ::BGNet::Core::GameLift::PlayerSessionInfo* playerSessionInfo, int32_t pollIntervalMs,
                                                                                                  ::StringW ticketId, ::StringW ticketStatus, ::StringW placementId,
                                                                                                  ::StringW placementStatus) noexcept {
  this->errorCode = errorCode;
  this->playerSessionInfo = playerSessionInfo;
  this->pollIntervalMs = pollIntervalMs;
  this->ticketId = ticketId;
  this->ticketStatus = ticketStatus;
  this->placementId = placementId;
  this->placementStatus = placementStatus;
}
// Ctor Parameters []
constexpr ::BGNet::Core::GameLift::GetMultiplayerInstanceResponse::GetMultiplayerInstanceResponse() {}
