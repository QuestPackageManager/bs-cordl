#pragma once
// IWYU pragma private; include "BGNet/Core/GameLift/GetMultiplayerInstanceRequest.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AuthenticationToken_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSelectionMask_def.hpp"
#include "GlobalNamespace/zzzz__GameplayServerConfiguration_def.hpp"
#include "GlobalNamespace/zzzz__ServiceEnvironment_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GetMultiplayerInstanceRequest)
namespace GlobalNamespace {
struct AuthenticationToken_Platform;
}
namespace GlobalNamespace {
struct BeatmapLevelSelectionMask;
}
namespace GlobalNamespace {
struct GameplayServerConfiguration;
}
namespace GlobalNamespace {
struct ServiceEnvironment;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
// Forward declare root types
namespace BGNet::Core::GameLift {
struct GetMultiplayerInstanceRequest;
}
// Write type traits
MARK_VAL_T(::BGNet::Core::GameLift::GetMultiplayerInstanceRequest);
// Dependencies AuthenticationToken::Platform, BeatmapLevelSelectionMask, GameplayServerConfiguration, ServiceEnvironment
namespace BGNet::Core::GameLift {
// Is value type: true
// CS Name: BGNet.Core.GameLift.GetMultiplayerInstanceRequest
struct CORDL_TYPE GetMultiplayerInstanceRequest {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x22efca0, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor(::StringW version, ::GlobalNamespace::ServiceEnvironment serviceEnvironment, ::StringW userId, ::GlobalNamespace::BeatmapLevelSelectionMask beatmapLevelSelectionMask,
                    ::GlobalNamespace::GameplayServerConfiguration gameplayServerConfiguration, ::GlobalNamespace::AuthenticationToken_Platform platform, ::StringW authUserId,
                    ::StringW singleUseAuthToken, ::StringW privateGameSecret, ::StringW privateGameCode, ::System::Collections::Generic::Dictionary_2<::StringW, int64_t>* gameliftRegionLatencies,
                    ::StringW ticketId, ::StringW placementId);

  // Ctor Parameters []
  // @brief default ctor
  constexpr GetMultiplayerInstanceRequest();

  // Ctor Parameters [CppParam { name: "version", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "serviceEnvironment", ty: "::GlobalNamespace::ServiceEnvironment", modifiers: "",
  // def_value: None }, CppParam { name: "singleUseAuthToken", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "beatmapLevelSelectionMask", ty:
  // "::GlobalNamespace::BeatmapLevelSelectionMask", modifiers: "", def_value: None }, CppParam { name: "gameplayServerConfiguration", ty: "::GlobalNamespace::GameplayServerConfiguration", modifiers:
  // "", def_value: None }, CppParam { name: "userId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "privateGameSecret", ty: "::StringW", modifiers: "", def_value: None },
  // CppParam { name: "privateGameCode", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "platform", ty: "::GlobalNamespace::AuthenticationToken_Platform", modifiers: "",
  // def_value: None }, CppParam { name: "authUserId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "gameliftRegionLatencies", ty:
  // "::System::Collections::Generic::Dictionary_2<::StringW,int64_t>*", modifiers: "", def_value: None }, CppParam { name: "ticketId", ty: "::StringW", modifiers: "", def_value: None }, CppParam {
  // name: "placementId", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr GetMultiplayerInstanceRequest(::StringW version, ::GlobalNamespace::ServiceEnvironment serviceEnvironment, ::StringW singleUseAuthToken,
                                          ::GlobalNamespace::BeatmapLevelSelectionMask beatmapLevelSelectionMask, ::GlobalNamespace::GameplayServerConfiguration gameplayServerConfiguration,
                                          ::StringW userId, ::StringW privateGameSecret, ::StringW privateGameCode, ::GlobalNamespace::AuthenticationToken_Platform platform, ::StringW authUserId,
                                          ::System::Collections::Generic::Dictionary_2<::StringW, int64_t>* gameliftRegionLatencies, ::StringW ticketId, ::StringW placementId) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15021 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x98 };

  /// @brief Field version, offset: 0x0, size: 0x8, def value: None
  ::StringW version;

  /// @brief Field serviceEnvironment, offset: 0x8, size: 0x4, def value: None
  ::GlobalNamespace::ServiceEnvironment serviceEnvironment;

  /// @brief Field singleUseAuthToken, offset: 0x10, size: 0x8, def value: None
  ::StringW singleUseAuthToken;

  /// @brief Field beatmapLevelSelectionMask, offset: 0x18, size: 0x28, def value: None
  ::GlobalNamespace::BeatmapLevelSelectionMask beatmapLevelSelectionMask;

  /// @brief Field gameplayServerConfiguration, offset: 0x40, size: 0x18, def value: None
  ::GlobalNamespace::GameplayServerConfiguration gameplayServerConfiguration;

  /// @brief Field userId, offset: 0x58, size: 0x8, def value: None
  ::StringW userId;

  /// @brief Field privateGameSecret, offset: 0x60, size: 0x8, def value: None
  ::StringW privateGameSecret;

  /// @brief Field privateGameCode, offset: 0x68, size: 0x8, def value: None
  ::StringW privateGameCode;

  /// @brief Field platform, offset: 0x70, size: 0x1, def value: None
  ::GlobalNamespace::AuthenticationToken_Platform platform;

  /// @brief Field authUserId, offset: 0x78, size: 0x8, def value: None
  ::StringW authUserId;

  /// @brief Field gameliftRegionLatencies, offset: 0x80, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, int64_t>* gameliftRegionLatencies;

  /// @brief Field ticketId, offset: 0x88, size: 0x8, def value: None
  ::StringW ticketId;

  /// @brief Field placementId, offset: 0x90, size: 0x8, def value: None
  ::StringW placementId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BGNet::Core::GameLift::GetMultiplayerInstanceRequest, version) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::GetMultiplayerInstanceRequest, serviceEnvironment) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::GetMultiplayerInstanceRequest, singleUseAuthToken) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::GetMultiplayerInstanceRequest, beatmapLevelSelectionMask) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::GetMultiplayerInstanceRequest, gameplayServerConfiguration) == 0x40, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::GetMultiplayerInstanceRequest, userId) == 0x58, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::GetMultiplayerInstanceRequest, privateGameSecret) == 0x60, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::GetMultiplayerInstanceRequest, privateGameCode) == 0x68, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::GetMultiplayerInstanceRequest, platform) == 0x70, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::GetMultiplayerInstanceRequest, authUserId) == 0x78, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::GetMultiplayerInstanceRequest, gameliftRegionLatencies) == 0x80, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::GetMultiplayerInstanceRequest, ticketId) == 0x88, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::GetMultiplayerInstanceRequest, placementId) == 0x90, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BGNet::Core::GameLift::GetMultiplayerInstanceRequest, 0x98>, "Size mismatch!");

} // namespace BGNet::Core::GameLift
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::GameLift::GetMultiplayerInstanceRequest, "BGNet.Core.GameLift", "GetMultiplayerInstanceRequest");
