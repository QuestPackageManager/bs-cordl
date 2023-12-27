#pragma once
#include "BGNet/Core/GameLift/zzzz__IGameLiftPlayerSessionProvider_def.hpp"
#include "GlobalNamespace/zzzz__GameplayServerConfiguration_def.hpp"
#include "GlobalNamespace/zzzz__IPollable_def.hpp"
#include "BGNet/Core/GameLift/zzzz__PlayerSessionInfo_def.hpp"
#include "GlobalNamespace/zzzz__IAuthenticationTokenProvider_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSelectionMask_def.hpp"
//  Writing Method size for method: ::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider.GetGameLiftPlayerSessionInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::PlayerSessionInfo*>* (
    ::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider::*)(::GlobalNamespace::IAuthenticationTokenProvider*, ::StringW, ::GlobalNamespace::BeatmapLevelSelectionMask,
                                                                ::GlobalNamespace::GameplayServerConfiguration, ::StringW, ::StringW, ::System::Threading::CancellationToken)>(
    &::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider::GetGameLiftPlayerSessionInfo)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider*>::get(), 0));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IPollable"
constexpr BGNet::Core::GameLift::IGameLiftPlayerSessionProvider::operator ::GlobalNamespace::IPollable*() noexcept {
  return static_cast<::GlobalNamespace::IPollable*>(static_cast<void*>(this));
}
inline ::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::PlayerSessionInfo*>* BGNet::Core::GameLift::IGameLiftPlayerSessionProvider::GetGameLiftPlayerSessionInfo(
    ::GlobalNamespace::IAuthenticationTokenProvider* authenticationTokenProvider, ::StringW userId, ::GlobalNamespace::BeatmapLevelSelectionMask beatmapLevelSelectionMask,
    ::GlobalNamespace::GameplayServerConfiguration gameplayServerConfiguration, ::StringW secret, ::StringW code, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::PlayerSessionInfo*>*, false>(
      this, ___internal_method, authenticationTokenProvider, userId, beatmapLevelSelectionMask, gameplayServerConfiguration, secret, code, cancellationToken);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
