#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MultiplayerPlacementErrorCode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GetMultiplayerInstanceResponse)
namespace BGNet::Core::GameLift {
class PlayerSessionInfo;
}
namespace GlobalNamespace {
struct MultiplayerPlacementErrorCode;
}
// Forward declare root types
namespace BGNet::Core::GameLift {
struct GetMultiplayerInstanceResponse;
}
// Write type traits
MARK_VAL_T(::BGNet::Core::GameLift::GetMultiplayerInstanceResponse);
// Type: BGNet.Core.GameLift::GetMultiplayerInstanceResponse
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGNet::Core::GameLift {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(12738))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13011))
// CS Name: ::BGNet.Core.GameLift::GetMultiplayerInstanceResponse
struct CORDL_TYPE GetMultiplayerInstanceResponse {
public:
  // Declarations
  /// @brief Method .ctor, addr 0xe60ec4, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::MultiplayerPlacementErrorCode errorCode, ::BGNet::Core::GameLift::PlayerSessionInfo* playerSessionInfo, int32_t pollIntervalMs, ::StringW ticketId,
                    ::StringW ticketStatus, ::StringW placementId, ::StringW placementStatus);

  // Ctor Parameters [CppParam { name: "errorCode", ty: "::GlobalNamespace::MultiplayerPlacementErrorCode", modifiers: "", def_value: None }, CppParam { name: "playerSessionInfo", ty:
  // "::BGNet::Core::GameLift::PlayerSessionInfo*", modifiers: "", def_value: None }, CppParam { name: "pollIntervalMs", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "ticketId",
  // ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "ticketStatus", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "placementId", ty: "::StringW", modifiers:
  // "", def_value: None }, CppParam { name: "placementStatus", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr GetMultiplayerInstanceResponse(::GlobalNamespace::MultiplayerPlacementErrorCode errorCode, ::BGNet::Core::GameLift::PlayerSessionInfo* playerSessionInfo, int32_t pollIntervalMs,
                                           ::StringW ticketId, ::StringW ticketStatus, ::StringW placementId, ::StringW placementStatus) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr GetMultiplayerInstanceResponse();

  /// @brief Field errorCode, offset: 0x0, size: 0x4, def value: None
  ::GlobalNamespace::MultiplayerPlacementErrorCode errorCode;

  /// @brief Field playerSessionInfo, offset: 0x8, size: 0x8, def value: None
  ::BGNet::Core::GameLift::PlayerSessionInfo* playerSessionInfo;

  /// @brief Field pollIntervalMs, offset: 0x10, size: 0x4, def value: None
  int32_t pollIntervalMs;

  /// @brief Field ticketId, offset: 0x18, size: 0x8, def value: None
  ::StringW ticketId;

  /// @brief Field ticketStatus, offset: 0x20, size: 0x8, def value: None
  ::StringW ticketStatus;

  /// @brief Field placementId, offset: 0x28, size: 0x8, def value: None
  ::StringW placementId;

  /// @brief Field placementStatus, offset: 0x30, size: 0x8, def value: None
  ::StringW placementStatus;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse, 0x38>, "Size mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::GetMultiplayerInstanceResponse, errorCode) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::GetMultiplayerInstanceResponse, playerSessionInfo) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::GetMultiplayerInstanceResponse, pollIntervalMs) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::GetMultiplayerInstanceResponse, ticketId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::GetMultiplayerInstanceResponse, ticketStatus) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::GetMultiplayerInstanceResponse, placementId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::GetMultiplayerInstanceResponse, placementStatus) == 0x30, "Offset mismatch!");

} // namespace BGNet::Core::GameLift
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::GameLift::GetMultiplayerInstanceResponse, "BGNet.Core.GameLift", "GetMultiplayerInstanceResponse");
