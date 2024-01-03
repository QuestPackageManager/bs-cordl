#pragma once
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
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace GlobalNamespace {
struct GameplayServerConfiguration;
}
namespace GlobalNamespace {
struct BeatmapLevelSelectionMask;
}
namespace GlobalNamespace {
struct ServiceEnvironment;
}
namespace GlobalNamespace {
struct __AuthenticationToken__Platform;
}
// Forward declare root types
namespace BGNet::Core::GameLift {
struct GetMultiplayerInstanceRequest;
}
// Write type traits
MARK_VAL_T(::BGNet::Core::GameLift::GetMultiplayerInstanceRequest);
// Type: BGNet.Core.GameLift::GetMultiplayerInstanceRequest
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 168, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGNet::Core::GameLift {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12681)), TypeDefinitionIndex(TypeDefinitionIndex(12686)), TypeDefinitionIndex(TypeDefinitionIndex(12740)),
// TypeDefinitionIndex(TypeDefinitionIndex(12758))} Self: TypeDefinitionIndex(TypeDefinitionIndex(13010)) CS Name: ::BGNet.Core.GameLift::GetMultiplayerInstanceRequest
struct CORDL_TYPE GetMultiplayerInstanceRequest {
public:
  // Declarations
  /// @brief Method .ctor, addr 0xe6060c, size 0x5c, virtual false, abstract: false, final false
  /// @param ticketId: ::StringW (default: nullptr)
  /// @param placementId: ::StringW (default: nullptr)
  inline void _ctor(::StringW version, ::GlobalNamespace::ServiceEnvironment serviceEnvironment, ::StringW userId, ::GlobalNamespace::BeatmapLevelSelectionMask beatmapLevelSelectionMask,
                    ::GlobalNamespace::GameplayServerConfiguration gameplayServerConfiguration, ::GlobalNamespace::__AuthenticationToken__Platform platform, ::StringW authUserId,
                    ::StringW singleUseAuthToken, ::StringW privateGameSecret, ::StringW privateGameCode, ::System::Collections::Generic::Dictionary_2<::StringW, int64_t>* gameliftRegionLatencies,
                    ::StringW ticketId = nullptr, ::StringW placementId = nullptr);

  // Ctor Parameters [CppParam { name: "version", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "serviceEnvironment", ty: "::GlobalNamespace::ServiceEnvironment", modifiers: "",
  // def_value: None }, CppParam { name: "singleUseAuthToken", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "beatmapLevelSelectionMask", ty:
  // "::GlobalNamespace::BeatmapLevelSelectionMask", modifiers: "", def_value: None }, CppParam { name: "gameplayServerConfiguration", ty: "::GlobalNamespace::GameplayServerConfiguration", modifiers:
  // "", def_value: None }, CppParam { name: "userId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "privateGameSecret", ty: "::StringW", modifiers: "", def_value: None },
  // CppParam { name: "privateGameCode", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "platform", ty: "::GlobalNamespace::__AuthenticationToken__Platform", modifiers: "",
  // def_value: None }, CppParam { name: "authUserId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "gameliftRegionLatencies", ty:
  // "::System::Collections::Generic::Dictionary_2<::StringW,int64_t>*", modifiers: "", def_value: None }, CppParam { name: "ticketId", ty: "::StringW", modifiers: "", def_value: None }, CppParam {
  // name: "placementId", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr GetMultiplayerInstanceRequest(::StringW version, ::GlobalNamespace::ServiceEnvironment serviceEnvironment, ::StringW singleUseAuthToken,
                                          ::GlobalNamespace::BeatmapLevelSelectionMask beatmapLevelSelectionMask, ::GlobalNamespace::GameplayServerConfiguration gameplayServerConfiguration,
                                          ::StringW userId, ::StringW privateGameSecret, ::StringW privateGameCode, ::GlobalNamespace::__AuthenticationToken__Platform platform, ::StringW authUserId,
                                          ::System::Collections::Generic::Dictionary_2<::StringW, int64_t>* gameliftRegionLatencies, ::StringW ticketId, ::StringW placementId) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr GetMultiplayerInstanceRequest();

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
  ::GlobalNamespace::__AuthenticationToken__Platform platform;

  /// @brief Field authUserId, offset: 0x78, size: 0x8, def value: None
  ::StringW authUserId;

  /// @brief Field gameliftRegionLatencies, offset: 0x80, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, int64_t>* gameliftRegionLatencies;

  /// @brief Field ticketId, offset: 0x88, size: 0x8, def value: None
  ::StringW ticketId;

  /// @brief Field placementId, offset: 0x90, size: 0x8, def value: None
  ::StringW placementId;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x98 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGNet::Core::GameLift::GetMultiplayerInstanceRequest, 0x98>, "Size mismatch!");

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

} // namespace BGNet::Core::GameLift
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::GameLift::GetMultiplayerInstanceRequest, "BGNet.Core.GameLift", "GetMultiplayerInstanceRequest");
