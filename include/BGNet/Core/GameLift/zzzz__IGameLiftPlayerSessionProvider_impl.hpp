#pragma once
// IWYU pragma private; include "BGNet\Core\GameLift\IGameLiftPlayerSessionProvider.hpp"
#include "BGNet/Core/GameLift/zzzz__IGameLiftPlayerSessionProvider_def.hpp"
#include "BGNet/Core/GameLift/zzzz__PlayerSessionInfo_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSelectionMask_def.hpp"
#include "GlobalNamespace/zzzz__GameplayServerConfiguration_def.hpp"
#include "GlobalNamespace/zzzz__IAuthenticationTokenProvider_def.hpp"
#include "GlobalNamespace/zzzz__IPollable_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
//  Writing Method size for method: ::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider.GetGameLiftPlayerSessionInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::PlayerSessionInfo*>* (
    ::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider::*)(::GlobalNamespace::IAuthenticationTokenProvider*, ::StringW, ::GlobalNamespace::BeatmapLevelSelectionMask,
                                                                ::GlobalNamespace::GameplayServerConfiguration, ::StringW, ::StringW, ::System::Threading::CancellationToken)>(
    &::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider::GetGameLiftPlayerSessionInfo)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider*>(),
                                                                                          { ::i2c::class_of<::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider*>(), 0 }));
    return ___internal_method;
  }
};
inline ::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::PlayerSessionInfo*>* BGNet::Core::GameLift::IGameLiftPlayerSessionProvider::GetGameLiftPlayerSessionInfo(
    ::GlobalNamespace::IAuthenticationTokenProvider* authenticationTokenProvider, ::StringW userId, ::GlobalNamespace::BeatmapLevelSelectionMask beatmapLevelSelectionMask,
    ::GlobalNamespace::GameplayServerConfiguration gameplayServerConfiguration, ::StringW secret, ::StringW code, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::PlayerSessionInfo*>*>(
      this, ___internal_method, authenticationTokenProvider, userId, beatmapLevelSelectionMask, gameplayServerConfiguration, secret, code, cancellationToken);
}
/// @brief Convert operator to "::GlobalNamespace::IPollable"
constexpr BGNet::Core::GameLift::IGameLiftPlayerSessionProvider::operator ::GlobalNamespace::IPollable*() noexcept {
  return static_cast<::GlobalNamespace::IPollable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IPollable"
constexpr ::GlobalNamespace::IPollable* BGNet::Core::GameLift::IGameLiftPlayerSessionProvider::i___GlobalNamespace__IPollable() noexcept {
  return static_cast<::GlobalNamespace::IPollable*>(static_cast<void*>(this));
}
