#pragma once
// IWYU pragma private; include "BGNet/Core/GameLift/GetMultiplayerInstanceResponse.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlacementErrorCode_impl.hpp"
#include "BGNet/Core/GameLift/zzzz__GetMultiplayerInstanceResponse_def.hpp"
#include "BGNet/Core/GameLift/zzzz__PlayerSessionInfo_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlacementErrorCode_def.hpp"
//  Writing Method size for method: ::BGNet::Core::GameLift::GetMultiplayerInstanceResponse._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::GameLift::GetMultiplayerInstanceResponse::*)(
    ::GlobalNamespace::MultiplayerPlacementErrorCode, ::BGNet::Core::GameLift::PlayerSessionInfo*, int32_t, ::StringW, ::StringW, ::StringW, ::StringW)>(
    &::BGNet::Core::GameLift::GetMultiplayerInstanceResponse::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x10be6d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerPlacementErrorCode>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::GameLift::PlayerSessionInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
/// @param ticketId: ::StringW (default: nullptr)
/// @param ticketStatus: ::StringW (default: nullptr)
/// @param placementId: ::StringW (default: nullptr)
/// @param placementStatus: ::StringW (default: nullptr)
inline void BGNet::Core::GameLift::GetMultiplayerInstanceResponse::_ctor(::GlobalNamespace::MultiplayerPlacementErrorCode errorCode, ::BGNet::Core::GameLift::PlayerSessionInfo* playerSessionInfo,
                                                                         int32_t pollIntervalMs, ::StringW ticketId, ::StringW ticketStatus, ::StringW placementId, ::StringW placementStatus) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerPlacementErrorCode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::GameLift::PlayerSessionInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, errorCode, playerSessionInfo, pollIntervalMs, ticketId, ticketStatus, placementId, placementStatus);
}
// Ctor Parameters [CppParam { name: "errorCode", ty: "::GlobalNamespace::MultiplayerPlacementErrorCode", modifiers: "", def_value: Some("{}") }, CppParam { name: "playerSessionInfo", ty:
// "::BGNet::Core::GameLift::PlayerSessionInfo*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "pollIntervalMs", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "ticketId", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "ticketStatus", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "placementId", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "placementStatus", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }]
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
