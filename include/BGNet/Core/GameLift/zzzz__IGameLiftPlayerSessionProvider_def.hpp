#pragma once
// IWYU pragma private; include "BGNet/Core/GameLift/IGameLiftPlayerSessionProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IGameLiftPlayerSessionProvider)
namespace BGNet::Core::GameLift {
class PlayerSessionInfo;
}
namespace GlobalNamespace {
struct BeatmapLevelSelectionMask;
}
namespace GlobalNamespace {
struct GameplayServerConfiguration;
}
namespace GlobalNamespace {
class IAuthenticationTokenProvider;
}
namespace GlobalNamespace {
class IPollable;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace BGNet::Core::GameLift {
class IGameLiftPlayerSessionProvider;
}
// Write type traits
MARK_REF_PTR_T(::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider);
// Type: BGNet.Core.GameLift::IGameLiftPlayerSessionProvider
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BGNet::Core::GameLift {
// Is value type: false
// CS Name: ::BGNet.Core.GameLift::IGameLiftPlayerSessionProvider*
class CORDL_TYPE IGameLiftPlayerSessionProvider {
public:
  // Declarations
  /// @brief Convert operator to "::GlobalNamespace::IPollable"
  constexpr operator ::GlobalNamespace::IPollable*() noexcept;

  /// @brief Method GetGameLiftPlayerSessionInfo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::PlayerSessionInfo*>*
  GetGameLiftPlayerSessionInfo(::GlobalNamespace::IAuthenticationTokenProvider* authenticationTokenProvider, ::StringW userId, ::GlobalNamespace::BeatmapLevelSelectionMask beatmapLevelSelectionMask,
                               ::GlobalNamespace::GameplayServerConfiguration gameplayServerConfiguration, ::StringW secret, ::StringW code, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Convert to "::GlobalNamespace::IPollable"
  constexpr ::GlobalNamespace::IPollable* i___GlobalNamespace__IPollable() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IGameLiftPlayerSessionProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IGameLiftPlayerSessionProvider(IGameLiftPlayerSessionProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IGameLiftPlayerSessionProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IGameLiftPlayerSessionProvider(IGameLiftPlayerSessionProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14984 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace BGNet::Core::GameLift
NEED_NO_BOX(::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider*, "BGNet.Core.GameLift", "IGameLiftPlayerSessionProvider");
