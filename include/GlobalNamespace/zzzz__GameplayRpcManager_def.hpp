#pragma once
// IWYU pragma private; include "GlobalNamespace/GameplayRpcManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IGameplayRpcManager_def.hpp"
#include "GlobalNamespace/zzzz__RemoteProcedureCall_1_def.hpp"
#include "GlobalNamespace/zzzz__RemoteProcedureCall_2_def.hpp"
#include "GlobalNamespace/zzzz__RemoteProcedureCall_3_def.hpp"
#include "GlobalNamespace/zzzz__RemoteProcedureCall_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GameplayRpcManager)
namespace GlobalNamespace {
class GameplayRpcManager_GetGameplaySceneReadyRpc;
}
namespace GlobalNamespace {
class GameplayRpcManager_GetGameplaySongReadyRpc;
}
namespace GlobalNamespace {
class GameplayRpcManager_LevelFinishedRpc;
}
namespace GlobalNamespace {
class GameplayRpcManager_NoteCutRpc;
}
namespace GlobalNamespace {
class GameplayRpcManager_NoteMissedRpc;
}
namespace GlobalNamespace {
class GameplayRpcManager_NoteSpawnedRpc;
}
namespace GlobalNamespace {
class GameplayRpcManager_ObstacleSpawnedRpc;
}
namespace GlobalNamespace {
class GameplayRpcManager_RequestReturnToMenuRpc;
}
namespace GlobalNamespace {
class GameplayRpcManager_ReturnToMenuRpc;
}
namespace GlobalNamespace {
struct GameplayRpcManager_RpcType;
}
namespace GlobalNamespace {
class GameplayRpcManager_SetGameplaySceneReadyRpc;
}
namespace GlobalNamespace {
class GameplayRpcManager_SetGameplaySceneSyncFinishedRpc;
}
namespace GlobalNamespace {
class GameplayRpcManager_SetGameplaySongReadyRpc;
}
namespace GlobalNamespace {
class GameplayRpcManager_SetPlayerDidConnectLateRpc;
}
namespace GlobalNamespace {
class GameplayRpcManager_SetSongStartTimeRpc;
}
namespace GlobalNamespace {
class GameplayRpcManager_SliderSpawnedRpc;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
class MultiplayerLevelCompletionResults;
}
namespace GlobalNamespace {
class NoteCutInfoNetSerializable;
}
namespace GlobalNamespace {
class NoteMissInfoNetSerializable;
}
namespace GlobalNamespace {
class NoteSpawnInfoNetSerializable;
}
namespace GlobalNamespace {
class ObstacleSpawnInfoNetSerializable;
}
namespace GlobalNamespace {
class PlayerSpecificSettingsAtStartNetSerializable;
}
namespace GlobalNamespace {
class PlayerSpecificSettingsNetSerializable;
}
namespace GlobalNamespace {
template <typename TType> class RpcHandler_1;
}
namespace GlobalNamespace {
class SliderSpawnInfoNetSerializable;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
template <typename T1, typename T2, typename T3> class Action_3;
}
namespace System {
template <typename T1, typename T2, typename T3, typename T4> class Action_4;
}
// Forward declare root types
namespace GlobalNamespace {
struct GameplayRpcManager_RpcType;
}
namespace GlobalNamespace {
class GameplayRpcManager;
}
namespace GlobalNamespace {
class GameplayRpcManager_GetGameplaySceneReadyRpc;
}
namespace GlobalNamespace {
class GameplayRpcManager_GetGameplaySongReadyRpc;
}
namespace GlobalNamespace {
class GameplayRpcManager_LevelFinishedRpc;
}
namespace GlobalNamespace {
class GameplayRpcManager_NoteCutRpc;
}
namespace GlobalNamespace {
class GameplayRpcManager_NoteMissedRpc;
}
namespace GlobalNamespace {
class GameplayRpcManager_NoteSpawnedRpc;
}
namespace GlobalNamespace {
class GameplayRpcManager_ObstacleSpawnedRpc;
}
namespace GlobalNamespace {
class GameplayRpcManager_RequestReturnToMenuRpc;
}
namespace GlobalNamespace {
class GameplayRpcManager_ReturnToMenuRpc;
}
namespace GlobalNamespace {
class GameplayRpcManager_SetGameplaySceneReadyRpc;
}
namespace GlobalNamespace {
class GameplayRpcManager_SetGameplaySceneSyncFinishedRpc;
}
namespace GlobalNamespace {
class GameplayRpcManager_SetGameplaySongReadyRpc;
}
namespace GlobalNamespace {
class GameplayRpcManager_SetPlayerDidConnectLateRpc;
}
namespace GlobalNamespace {
class GameplayRpcManager_SetSongStartTimeRpc;
}
namespace GlobalNamespace {
class GameplayRpcManager_SliderSpawnedRpc;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GameplayRpcManager_RpcType);
MARK_REF_PTR_T(::GlobalNamespace::GameplayRpcManager);
MARK_REF_PTR_T(::GlobalNamespace::GameplayRpcManager_GetGameplaySceneReadyRpc);
MARK_REF_PTR_T(::GlobalNamespace::GameplayRpcManager_GetGameplaySongReadyRpc);
MARK_REF_PTR_T(::GlobalNamespace::GameplayRpcManager_LevelFinishedRpc);
MARK_REF_PTR_T(::GlobalNamespace::GameplayRpcManager_NoteCutRpc);
MARK_REF_PTR_T(::GlobalNamespace::GameplayRpcManager_NoteMissedRpc);
MARK_REF_PTR_T(::GlobalNamespace::GameplayRpcManager_NoteSpawnedRpc);
MARK_REF_PTR_T(::GlobalNamespace::GameplayRpcManager_ObstacleSpawnedRpc);
MARK_REF_PTR_T(::GlobalNamespace::GameplayRpcManager_RequestReturnToMenuRpc);
MARK_REF_PTR_T(::GlobalNamespace::GameplayRpcManager_ReturnToMenuRpc);
MARK_REF_PTR_T(::GlobalNamespace::GameplayRpcManager_SetGameplaySceneReadyRpc);
MARK_REF_PTR_T(::GlobalNamespace::GameplayRpcManager_SetGameplaySceneSyncFinishedRpc);
MARK_REF_PTR_T(::GlobalNamespace::GameplayRpcManager_SetGameplaySongReadyRpc);
MARK_REF_PTR_T(::GlobalNamespace::GameplayRpcManager_SetPlayerDidConnectLateRpc);
MARK_REF_PTR_T(::GlobalNamespace::GameplayRpcManager_SetSongStartTimeRpc);
MARK_REF_PTR_T(::GlobalNamespace::GameplayRpcManager_SliderSpawnedRpc);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: GameplayRpcManager/RpcType
struct CORDL_TYPE GameplayRpcManager_RpcType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct __GameplayRpcManager_RpcType_Unwrapped
  enum struct __GameplayRpcManager_RpcType_Unwrapped : uint8_t {
    __E_SetGameplaySceneSyncFinish = static_cast<uint8_t>(0x0u),
    __E_SetGameplaySceneReady = static_cast<uint8_t>(0x1u),
    __E_GetGameplaySceneReady = static_cast<uint8_t>(0x2u),
    __E_SetActivePlayerFailedToConnect = static_cast<uint8_t>(0x3u),
    __E_SetGameplaySongReady = static_cast<uint8_t>(0x4u),
    __E_GetGameplaySongReady = static_cast<uint8_t>(0x5u),
    __E_SetSongStartTime = static_cast<uint8_t>(0x6u),
    __E_NoteCut = static_cast<uint8_t>(0x7u),
    __E_NoteMissed = static_cast<uint8_t>(0x8u),
    __E_LevelFinished = static_cast<uint8_t>(0x9u),
    __E_ReturnToMenu = static_cast<uint8_t>(0xau),
    __E_RequestReturnToMenu = static_cast<uint8_t>(0xbu),
    __E_NoteSpawned = static_cast<uint8_t>(0xcu),
    __E_ObstacleSpawned = static_cast<uint8_t>(0xdu),
    __E_SliderSpawned = static_cast<uint8_t>(0xeu),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __GameplayRpcManager_RpcType_Unwrapped() const noexcept {
    return static_cast<__GameplayRpcManager_RpcType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint8_t() const noexcept {
    return static_cast<uint8_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr GameplayRpcManager_RpcType();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr GameplayRpcManager_RpcType(uint8_t value__) noexcept;

  /// @brief Field GetGameplaySceneReady value: U8(2)
  static ::GlobalNamespace::GameplayRpcManager_RpcType const GetGameplaySceneReady;

  /// @brief Field GetGameplaySongReady value: U8(5)
  static ::GlobalNamespace::GameplayRpcManager_RpcType const GetGameplaySongReady;

  /// @brief Field LevelFinished value: U8(9)
  static ::GlobalNamespace::GameplayRpcManager_RpcType const LevelFinished;

  /// @brief Field NoteCut value: U8(7)
  static ::GlobalNamespace::GameplayRpcManager_RpcType const NoteCut;

  /// @brief Field NoteMissed value: U8(8)
  static ::GlobalNamespace::GameplayRpcManager_RpcType const NoteMissed;

  /// @brief Field NoteSpawned value: U8(12)
  static ::GlobalNamespace::GameplayRpcManager_RpcType const NoteSpawned;

  /// @brief Field ObstacleSpawned value: U8(13)
  static ::GlobalNamespace::GameplayRpcManager_RpcType const ObstacleSpawned;

  /// @brief Field RequestReturnToMenu value: U8(11)
  static ::GlobalNamespace::GameplayRpcManager_RpcType const RequestReturnToMenu;

  /// @brief Field ReturnToMenu value: U8(10)
  static ::GlobalNamespace::GameplayRpcManager_RpcType const ReturnToMenu;

  /// @brief Field SetActivePlayerFailedToConnect value: U8(3)
  static ::GlobalNamespace::GameplayRpcManager_RpcType const SetActivePlayerFailedToConnect;

  /// @brief Field SetGameplaySceneReady value: U8(1)
  static ::GlobalNamespace::GameplayRpcManager_RpcType const SetGameplaySceneReady;

  /// @brief Field SetGameplaySceneSyncFinish value: U8(0)
  static ::GlobalNamespace::GameplayRpcManager_RpcType const SetGameplaySceneSyncFinish;

  /// @brief Field SetGameplaySongReady value: U8(4)
  static ::GlobalNamespace::GameplayRpcManager_RpcType const SetGameplaySongReady;

  /// @brief Field SetSongStartTime value: U8(6)
  static ::GlobalNamespace::GameplayRpcManager_RpcType const SetSongStartTime;

  /// @brief Field SliderSpawned value: U8(14)
  static ::GlobalNamespace::GameplayRpcManager_RpcType const SliderSpawned;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14749 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameplayRpcManager_RpcType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameplayRpcManager_RpcType, 0x1>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies RemoteProcedureCall`2<T0, T1>
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameplayRpcManager/SetGameplaySceneSyncFinishedRpc
class CORDL_TYPE GameplayRpcManager_SetGameplaySceneSyncFinishedRpc : public ::GlobalNamespace::RemoteProcedureCall_2<::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW> {
public:
  // Declarations
  static inline ::GlobalNamespace::GameplayRpcManager_SetGameplaySceneSyncFinishedRpc* New_ctor();

  /// @brief Method .ctor, addr 0x22cb2d4, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameplayRpcManager_SetGameplaySceneSyncFinishedRpc();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameplayRpcManager_SetGameplaySceneSyncFinishedRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameplayRpcManager_SetGameplaySceneSyncFinishedRpc(GameplayRpcManager_SetGameplaySceneSyncFinishedRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameplayRpcManager_SetGameplaySceneSyncFinishedRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameplayRpcManager_SetGameplaySceneSyncFinishedRpc(GameplayRpcManager_SetGameplaySceneSyncFinishedRpc const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14750 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameplayRpcManager_SetGameplaySceneSyncFinishedRpc, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies RemoteProcedureCall`1<T0>
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameplayRpcManager/SetGameplaySceneReadyRpc
class CORDL_TYPE GameplayRpcManager_SetGameplaySceneReadyRpc : public ::GlobalNamespace::RemoteProcedureCall_1<::GlobalNamespace::PlayerSpecificSettingsNetSerializable*> {
public:
  // Declarations
  static inline ::GlobalNamespace::GameplayRpcManager_SetGameplaySceneReadyRpc* New_ctor();

  /// @brief Method .ctor, addr 0x22cb31c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameplayRpcManager_SetGameplaySceneReadyRpc();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameplayRpcManager_SetGameplaySceneReadyRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameplayRpcManager_SetGameplaySceneReadyRpc(GameplayRpcManager_SetGameplaySceneReadyRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameplayRpcManager_SetGameplaySceneReadyRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameplayRpcManager_SetGameplaySceneReadyRpc(GameplayRpcManager_SetGameplaySceneReadyRpc const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14751 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameplayRpcManager_SetGameplaySceneReadyRpc, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies RemoteProcedureCall
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameplayRpcManager/GetGameplaySceneReadyRpc
class CORDL_TYPE GameplayRpcManager_GetGameplaySceneReadyRpc : public ::GlobalNamespace::RemoteProcedureCall {
public:
  // Declarations
  static inline ::GlobalNamespace::GameplayRpcManager_GetGameplaySceneReadyRpc* New_ctor();

  /// @brief Method .ctor, addr 0x22cb364, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameplayRpcManager_GetGameplaySceneReadyRpc();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameplayRpcManager_GetGameplaySceneReadyRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameplayRpcManager_GetGameplaySceneReadyRpc(GameplayRpcManager_GetGameplaySceneReadyRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameplayRpcManager_GetGameplaySceneReadyRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameplayRpcManager_GetGameplaySceneReadyRpc(GameplayRpcManager_GetGameplaySceneReadyRpc const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14752 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameplayRpcManager_GetGameplaySceneReadyRpc, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies RemoteProcedureCall`3<T0, T1, T2>
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameplayRpcManager/SetPlayerDidConnectLateRpc
class CORDL_TYPE GameplayRpcManager_SetPlayerDidConnectLateRpc
    : public ::GlobalNamespace::RemoteProcedureCall_3<::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW> {
public:
  // Declarations
  static inline ::GlobalNamespace::GameplayRpcManager_SetPlayerDidConnectLateRpc* New_ctor();

  /// @brief Method .ctor, addr 0x22cb36c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameplayRpcManager_SetPlayerDidConnectLateRpc();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameplayRpcManager_SetPlayerDidConnectLateRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameplayRpcManager_SetPlayerDidConnectLateRpc(GameplayRpcManager_SetPlayerDidConnectLateRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameplayRpcManager_SetPlayerDidConnectLateRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameplayRpcManager_SetPlayerDidConnectLateRpc(GameplayRpcManager_SetPlayerDidConnectLateRpc const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14753 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameplayRpcManager_SetPlayerDidConnectLateRpc, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies RemoteProcedureCall
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameplayRpcManager/SetGameplaySongReadyRpc
class CORDL_TYPE GameplayRpcManager_SetGameplaySongReadyRpc : public ::GlobalNamespace::RemoteProcedureCall {
public:
  // Declarations
  static inline ::GlobalNamespace::GameplayRpcManager_SetGameplaySongReadyRpc* New_ctor();

  /// @brief Method .ctor, addr 0x22cb3b4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameplayRpcManager_SetGameplaySongReadyRpc();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameplayRpcManager_SetGameplaySongReadyRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameplayRpcManager_SetGameplaySongReadyRpc(GameplayRpcManager_SetGameplaySongReadyRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameplayRpcManager_SetGameplaySongReadyRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameplayRpcManager_SetGameplaySongReadyRpc(GameplayRpcManager_SetGameplaySongReadyRpc const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14754 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameplayRpcManager_SetGameplaySongReadyRpc, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies RemoteProcedureCall
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameplayRpcManager/GetGameplaySongReadyRpc
class CORDL_TYPE GameplayRpcManager_GetGameplaySongReadyRpc : public ::GlobalNamespace::RemoteProcedureCall {
public:
  // Declarations
  static inline ::GlobalNamespace::GameplayRpcManager_GetGameplaySongReadyRpc* New_ctor();

  /// @brief Method .ctor, addr 0x22cb3bc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameplayRpcManager_GetGameplaySongReadyRpc();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameplayRpcManager_GetGameplaySongReadyRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameplayRpcManager_GetGameplaySongReadyRpc(GameplayRpcManager_GetGameplaySongReadyRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameplayRpcManager_GetGameplaySongReadyRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameplayRpcManager_GetGameplaySongReadyRpc(GameplayRpcManager_GetGameplaySongReadyRpc const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14755 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameplayRpcManager_GetGameplaySongReadyRpc, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies RemoteProcedureCall`1<T0>
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameplayRpcManager/SetSongStartTimeRpc
class CORDL_TYPE GameplayRpcManager_SetSongStartTimeRpc : public ::GlobalNamespace::RemoteProcedureCall_1<int64_t> {
public:
  // Declarations
  static inline ::GlobalNamespace::GameplayRpcManager_SetSongStartTimeRpc* New_ctor();

  /// @brief Method .ctor, addr 0x22cb3c4, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameplayRpcManager_SetSongStartTimeRpc();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameplayRpcManager_SetSongStartTimeRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameplayRpcManager_SetSongStartTimeRpc(GameplayRpcManager_SetSongStartTimeRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameplayRpcManager_SetSongStartTimeRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameplayRpcManager_SetSongStartTimeRpc(GameplayRpcManager_SetSongStartTimeRpc const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14756 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameplayRpcManager_SetSongStartTimeRpc, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies RemoteProcedureCall`2<T0, T1>
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameplayRpcManager/NoteSpawnedRpc
class CORDL_TYPE GameplayRpcManager_NoteSpawnedRpc : public ::GlobalNamespace::RemoteProcedureCall_2<float_t, ::GlobalNamespace::NoteSpawnInfoNetSerializable*> {
public:
  // Declarations
  static inline ::GlobalNamespace::GameplayRpcManager_NoteSpawnedRpc* New_ctor();

  /// @brief Method .ctor, addr 0x22cb40c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameplayRpcManager_NoteSpawnedRpc();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameplayRpcManager_NoteSpawnedRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameplayRpcManager_NoteSpawnedRpc(GameplayRpcManager_NoteSpawnedRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameplayRpcManager_NoteSpawnedRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameplayRpcManager_NoteSpawnedRpc(GameplayRpcManager_NoteSpawnedRpc const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14757 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameplayRpcManager_NoteSpawnedRpc, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies RemoteProcedureCall`2<T0, T1>
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameplayRpcManager/ObstacleSpawnedRpc
class CORDL_TYPE GameplayRpcManager_ObstacleSpawnedRpc : public ::GlobalNamespace::RemoteProcedureCall_2<float_t, ::GlobalNamespace::ObstacleSpawnInfoNetSerializable*> {
public:
  // Declarations
  static inline ::GlobalNamespace::GameplayRpcManager_ObstacleSpawnedRpc* New_ctor();

  /// @brief Method .ctor, addr 0x22cb454, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameplayRpcManager_ObstacleSpawnedRpc();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameplayRpcManager_ObstacleSpawnedRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameplayRpcManager_ObstacleSpawnedRpc(GameplayRpcManager_ObstacleSpawnedRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameplayRpcManager_ObstacleSpawnedRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameplayRpcManager_ObstacleSpawnedRpc(GameplayRpcManager_ObstacleSpawnedRpc const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14758 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameplayRpcManager_ObstacleSpawnedRpc, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies RemoteProcedureCall`2<T0, T1>
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameplayRpcManager/SliderSpawnedRpc
class CORDL_TYPE GameplayRpcManager_SliderSpawnedRpc : public ::GlobalNamespace::RemoteProcedureCall_2<float_t, ::GlobalNamespace::SliderSpawnInfoNetSerializable*> {
public:
  // Declarations
  static inline ::GlobalNamespace::GameplayRpcManager_SliderSpawnedRpc* New_ctor();

  /// @brief Method .ctor, addr 0x22cb49c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameplayRpcManager_SliderSpawnedRpc();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameplayRpcManager_SliderSpawnedRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameplayRpcManager_SliderSpawnedRpc(GameplayRpcManager_SliderSpawnedRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameplayRpcManager_SliderSpawnedRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameplayRpcManager_SliderSpawnedRpc(GameplayRpcManager_SliderSpawnedRpc const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14759 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameplayRpcManager_SliderSpawnedRpc, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies RemoteProcedureCall`2<T0, T1>
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameplayRpcManager/NoteCutRpc
class CORDL_TYPE GameplayRpcManager_NoteCutRpc : public ::GlobalNamespace::RemoteProcedureCall_2<float_t, ::GlobalNamespace::NoteCutInfoNetSerializable*> {
public:
  // Declarations
  static inline ::GlobalNamespace::GameplayRpcManager_NoteCutRpc* New_ctor();

  /// @brief Method .ctor, addr 0x22cb4e4, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameplayRpcManager_NoteCutRpc();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameplayRpcManager_NoteCutRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameplayRpcManager_NoteCutRpc(GameplayRpcManager_NoteCutRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameplayRpcManager_NoteCutRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameplayRpcManager_NoteCutRpc(GameplayRpcManager_NoteCutRpc const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14760 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameplayRpcManager_NoteCutRpc, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies RemoteProcedureCall`2<T0, T1>
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameplayRpcManager/NoteMissedRpc
class CORDL_TYPE GameplayRpcManager_NoteMissedRpc : public ::GlobalNamespace::RemoteProcedureCall_2<float_t, ::GlobalNamespace::NoteMissInfoNetSerializable*> {
public:
  // Declarations
  static inline ::GlobalNamespace::GameplayRpcManager_NoteMissedRpc* New_ctor();

  /// @brief Method .ctor, addr 0x22cb52c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameplayRpcManager_NoteMissedRpc();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameplayRpcManager_NoteMissedRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameplayRpcManager_NoteMissedRpc(GameplayRpcManager_NoteMissedRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameplayRpcManager_NoteMissedRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameplayRpcManager_NoteMissedRpc(GameplayRpcManager_NoteMissedRpc const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14761 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameplayRpcManager_NoteMissedRpc, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies RemoteProcedureCall`1<T0>
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameplayRpcManager/LevelFinishedRpc
class CORDL_TYPE GameplayRpcManager_LevelFinishedRpc : public ::GlobalNamespace::RemoteProcedureCall_1<::GlobalNamespace::MultiplayerLevelCompletionResults*> {
public:
  // Declarations
  static inline ::GlobalNamespace::GameplayRpcManager_LevelFinishedRpc* New_ctor();

  /// @brief Method .ctor, addr 0x22cb574, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameplayRpcManager_LevelFinishedRpc();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameplayRpcManager_LevelFinishedRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameplayRpcManager_LevelFinishedRpc(GameplayRpcManager_LevelFinishedRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameplayRpcManager_LevelFinishedRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameplayRpcManager_LevelFinishedRpc(GameplayRpcManager_LevelFinishedRpc const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14762 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameplayRpcManager_LevelFinishedRpc, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies RemoteProcedureCall
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameplayRpcManager/ReturnToMenuRpc
class CORDL_TYPE GameplayRpcManager_ReturnToMenuRpc : public ::GlobalNamespace::RemoteProcedureCall {
public:
  // Declarations
  static inline ::GlobalNamespace::GameplayRpcManager_ReturnToMenuRpc* New_ctor();

  /// @brief Method .ctor, addr 0x22cb5bc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameplayRpcManager_ReturnToMenuRpc();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameplayRpcManager_ReturnToMenuRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameplayRpcManager_ReturnToMenuRpc(GameplayRpcManager_ReturnToMenuRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameplayRpcManager_ReturnToMenuRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameplayRpcManager_ReturnToMenuRpc(GameplayRpcManager_ReturnToMenuRpc const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14763 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameplayRpcManager_ReturnToMenuRpc, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies RemoteProcedureCall
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameplayRpcManager/RequestReturnToMenuRpc
class CORDL_TYPE GameplayRpcManager_RequestReturnToMenuRpc : public ::GlobalNamespace::RemoteProcedureCall {
public:
  // Declarations
  static inline ::GlobalNamespace::GameplayRpcManager_RequestReturnToMenuRpc* New_ctor();

  /// @brief Method .ctor, addr 0x22cb5c4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameplayRpcManager_RequestReturnToMenuRpc();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameplayRpcManager_RequestReturnToMenuRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameplayRpcManager_RequestReturnToMenuRpc(GameplayRpcManager_RequestReturnToMenuRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameplayRpcManager_RequestReturnToMenuRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameplayRpcManager_RequestReturnToMenuRpc(GameplayRpcManager_RequestReturnToMenuRpc const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14764 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameplayRpcManager_RequestReturnToMenuRpc, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies IGameplayRpcManager, System.IDisposable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameplayRpcManager
class CORDL_TYPE GameplayRpcManager : public ::System::Object {
public:
  // Declarations
  using GetGameplaySceneReadyRpc = ::GlobalNamespace::GameplayRpcManager_GetGameplaySceneReadyRpc;

  using GetGameplaySongReadyRpc = ::GlobalNamespace::GameplayRpcManager_GetGameplaySongReadyRpc;

  using LevelFinishedRpc = ::GlobalNamespace::GameplayRpcManager_LevelFinishedRpc;

  using NoteCutRpc = ::GlobalNamespace::GameplayRpcManager_NoteCutRpc;

  using NoteMissedRpc = ::GlobalNamespace::GameplayRpcManager_NoteMissedRpc;

  using NoteSpawnedRpc = ::GlobalNamespace::GameplayRpcManager_NoteSpawnedRpc;

  using ObstacleSpawnedRpc = ::GlobalNamespace::GameplayRpcManager_ObstacleSpawnedRpc;

  using RequestReturnToMenuRpc = ::GlobalNamespace::GameplayRpcManager_RequestReturnToMenuRpc;

  using ReturnToMenuRpc = ::GlobalNamespace::GameplayRpcManager_ReturnToMenuRpc;

  using RpcType = ::GlobalNamespace::GameplayRpcManager_RpcType;

  using SetGameplaySceneReadyRpc = ::GlobalNamespace::GameplayRpcManager_SetGameplaySceneReadyRpc;

  using SetGameplaySceneSyncFinishedRpc = ::GlobalNamespace::GameplayRpcManager_SetGameplaySceneSyncFinishedRpc;

  using SetGameplaySongReadyRpc = ::GlobalNamespace::GameplayRpcManager_SetGameplaySongReadyRpc;

  using SetPlayerDidConnectLateRpc = ::GlobalNamespace::GameplayRpcManager_SetPlayerDidConnectLateRpc;

  using SetSongStartTimeRpc = ::GlobalNamespace::GameplayRpcManager_SetSongStartTimeRpc;

  using SliderSpawnedRpc = ::GlobalNamespace::GameplayRpcManager_SliderSpawnedRpc;

  /// @brief Field _multiplayerSessionManager, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerSessionManager,
                      put = __cordl_internal_set__multiplayerSessionManager)) ::GlobalNamespace::IMultiplayerSessionManager* _multiplayerSessionManager;

  /// @brief Field _rpcHandler, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__rpcHandler, put = __cordl_internal_set__rpcHandler)) ::GlobalNamespace::RpcHandler_1<::GlobalNamespace::GameplayRpcManager_RpcType>* _rpcHandler;

  __declspec(property(get = get_enabled, put = set_enabled)) bool enabled;

  /// @brief Field getGameplaySceneReadyEvent, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_getGameplaySceneReadyEvent, put = __cordl_internal_set_getGameplaySceneReadyEvent)) ::System::Action_1<::StringW>* getGameplaySceneReadyEvent;

  /// @brief Field getGameplaySongReadyEvent, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_getGameplaySongReadyEvent, put = __cordl_internal_set_getGameplaySongReadyEvent)) ::System::Action_1<::StringW>* getGameplaySongReadyEvent;

  /// @brief Field levelFinishedEvent, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_levelFinishedEvent,
                      put = __cordl_internal_set_levelFinishedEvent)) ::System::Action_2<::StringW, ::GlobalNamespace::MultiplayerLevelCompletionResults*>* levelFinishedEvent;

  /// @brief Field noteWasCutEvent, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_noteWasCutEvent,
                      put = __cordl_internal_set_noteWasCutEvent)) ::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteCutInfoNetSerializable*>* noteWasCutEvent;

  /// @brief Field noteWasMissedEvent, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_noteWasMissedEvent,
                      put = __cordl_internal_set_noteWasMissedEvent)) ::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteMissInfoNetSerializable*>* noteWasMissedEvent;

  /// @brief Field noteWasSpawnedEvent, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_noteWasSpawnedEvent,
                      put = __cordl_internal_set_noteWasSpawnedEvent)) ::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteSpawnInfoNetSerializable*>* noteWasSpawnedEvent;

  /// @brief Field obstacleWasSpawnedEvent, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_obstacleWasSpawnedEvent,
                      put =
                          __cordl_internal_set_obstacleWasSpawnedEvent)) ::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>* obstacleWasSpawnedEvent;

  /// @brief Field requestReturnToMenuEvent, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_requestReturnToMenuEvent, put = __cordl_internal_set_requestReturnToMenuEvent)) ::System::Action_1<::StringW>* requestReturnToMenuEvent;

  /// @brief Field returnToMenuEvent, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_returnToMenuEvent, put = __cordl_internal_set_returnToMenuEvent)) ::System::Action_1<::StringW>* returnToMenuEvent;

  /// @brief Field setGameplaySceneReadyEvent, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_setGameplaySceneReadyEvent,
                      put = __cordl_internal_set_setGameplaySceneReadyEvent)) ::System::Action_2<::StringW, ::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>* setGameplaySceneReadyEvent;

  /// @brief Field setGameplaySceneSyncFinishedEvent, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_setGameplaySceneSyncFinishedEvent,
                      put = __cordl_internal_set_setGameplaySceneSyncFinishedEvent)) ::System::Action_3<::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>*
      setGameplaySceneSyncFinishedEvent;

  /// @brief Field setGameplaySongReadyEvent, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_setGameplaySongReadyEvent, put = __cordl_internal_set_setGameplaySongReadyEvent)) ::System::Action_1<::StringW>* setGameplaySongReadyEvent;

  /// @brief Field setPlayerDidConnectLateEvent, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_setPlayerDidConnectLateEvent,
                      put = __cordl_internal_set_setPlayerDidConnectLateEvent)) ::System::Action_4<::StringW, ::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>*
      setPlayerDidConnectLateEvent;

  /// @brief Field setSongStartTimeEvent, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_setSongStartTimeEvent, put = __cordl_internal_set_setSongStartTimeEvent)) ::System::Action_2<::StringW, int64_t>* setSongStartTimeEvent;

  /// @brief Field sliderWasSpawnedEvent, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_sliderWasSpawnedEvent,
                      put = __cordl_internal_set_sliderWasSpawnedEvent)) ::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::SliderSpawnInfoNetSerializable*>* sliderWasSpawnedEvent;

  /// @brief Convert operator to "::GlobalNamespace::IGameplayRpcManager"
  constexpr operator ::GlobalNamespace::IGameplayRpcManager*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x22c96bc, size 0x5c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method GetGameplaySceneReady, addr 0x22c9c30, size 0x50, virtual true, abstract: false, final true
  inline void GetGameplaySceneReady();

  /// @brief Method GetGameplaySongReady, addr 0x22ca1b4, size 0x50, virtual true, abstract: false, final true
  inline void GetGameplaySongReady();

  /// @brief Method InvokeGetGameplayLevelReadyCallback, addr 0x22ca204, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeGetGameplayLevelReadyCallback(::StringW userId);

  /// @brief Method InvokeGetGameplaySceneReadyCallback, addr 0x22c9c80, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeGetGameplaySceneReadyCallback(::StringW userId);

  /// @brief Method InvokeLevelFinishedCallback, addr 0x22caf20, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeLevelFinishedCallback(::StringW userId, ::GlobalNamespace::MultiplayerLevelCompletionResults* results);

  /// @brief Method InvokeNoteWasCutCallback, addr 0x22cab68, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeNoteWasCutCallback(::StringW userId, int64_t syncTime, float_t songTime, ::GlobalNamespace::NoteCutInfoNetSerializable* noteCutInfo);

  /// @brief Method InvokeNoteWasMissedCallback, addr 0x22cad4c, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeNoteWasMissedCallback(::StringW userId, int64_t syncTime, float_t songTime, ::GlobalNamespace::NoteMissInfoNetSerializable* noteMissInfo);

  /// @brief Method InvokeNoteWasSpawnedCallback, addr 0x22ca5bc, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeNoteWasSpawnedCallback(::StringW userId, int64_t syncTime, float_t songTime, ::GlobalNamespace::NoteSpawnInfoNetSerializable* noteSpawnInfo);

  /// @brief Method InvokeObstacleWasSpawnedCallback, addr 0x22ca7a0, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeObstacleWasSpawnedCallback(::StringW userId, int64_t syncTime, float_t songTime, ::GlobalNamespace::ObstacleSpawnInfoNetSerializable* obstacleSpawnInfo);

  /// @brief Method InvokeRequestReturnToMenuCallback, addr 0x22cb2b8, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeRequestReturnToMenuCallback(::StringW userId);

  /// @brief Method InvokeReturnToMenuCallback, addr 0x22cb0ec, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeReturnToMenuCallback(::StringW userId);

  /// @brief Method InvokeSetGameplaySceneReadyCallback, addr 0x22c9ab4, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeSetGameplaySceneReadyCallback(::StringW userId, ::GlobalNamespace::PlayerSpecificSettingsNetSerializable* playerSpecificSettingsNetSerializable);

  /// @brief Method InvokeSetGameplaySceneSyncFinishCallback, addr 0x22c98e0, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeSetGameplaySceneSyncFinishCallback(::StringW userId, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* playersAtGameStart, ::StringW sessionGameId);

  /// @brief Method InvokeSetGameplaySongReadyCallback, addr 0x22ca038, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeSetGameplaySongReadyCallback(::StringW userId);

  /// @brief Method InvokeSetPlayerDidConnectLate, addr 0x22c9e6c, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeSetPlayerDidConnectLate(::StringW userId, ::StringW failedUserId, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* playersAtGameStartNetSerializable,
                                            ::StringW sessionGameId);

  /// @brief Method InvokeSetSongStartTimeCallback, addr 0x22ca3d8, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeSetSongStartTimeCallback(::StringW userId, int64_t startTime);

  /// @brief Method InvokeSliderWasSpawnedCallback, addr 0x22ca984, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeSliderWasSpawnedCallback(::StringW userId, int64_t syncTime, float_t songTime, ::GlobalNamespace::SliderSpawnInfoNetSerializable* sliderSpawnInfo);

  /// @brief Method LevelFinished, addr 0x22caec8, size 0x58, virtual true, abstract: false, final true
  inline void LevelFinished(::GlobalNamespace::MultiplayerLevelCompletionResults* results);

  static inline ::GlobalNamespace::GameplayRpcManager* New_ctor(::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager);

  /// @brief Method NoteCut, addr 0x22cab00, size 0x68, virtual true, abstract: false, final true
  inline void NoteCut(float_t songTime, ::GlobalNamespace::NoteCutInfoNetSerializable* noteCutInfoNetSerializable);

  /// @brief Method NoteMissed, addr 0x22cace4, size 0x68, virtual true, abstract: false, final true
  inline void NoteMissed(float_t songTime, ::GlobalNamespace::NoteMissInfoNetSerializable* noteMissInfoNetSerializable);

  /// @brief Method NoteSpawned, addr 0x22ca554, size 0x68, virtual true, abstract: false, final true
  inline void NoteSpawned(float_t songTime, ::GlobalNamespace::NoteSpawnInfoNetSerializable* noteSpawnInfoNetSerializable);

  /// @brief Method ObstacleSpawned, addr 0x22ca738, size 0x68, virtual true, abstract: false, final true
  inline void ObstacleSpawned(float_t songTime, ::GlobalNamespace::ObstacleSpawnInfoNetSerializable* obstacleSpawnInfoNetSerializable);

  /// @brief Method RequestReturnToMenu, addr 0x22cb268, size 0x50, virtual true, abstract: false, final true
  inline void RequestReturnToMenu();

  /// @brief Method ReturnToMenu, addr 0x22cb09c, size 0x50, virtual true, abstract: false, final true
  inline void ReturnToMenu();

  /// @brief Method SetGameplaySceneReady, addr 0x22c9a5c, size 0x58, virtual true, abstract: false, final true
  inline void SetGameplaySceneReady(::GlobalNamespace::PlayerSpecificSettingsNetSerializable* playerSpecificSettings);

  /// @brief Method SetGameplaySceneSyncFinished, addr 0x22c9878, size 0x68, virtual true, abstract: false, final true
  inline void SetGameplaySceneSyncFinished(::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* playersAtGameStartNetSerializable, ::StringW sessionGameId);

  /// @brief Method SetGameplaySongReady, addr 0x22c9fe8, size 0x50, virtual true, abstract: false, final true
  inline void SetGameplaySongReady();

  /// @brief Method SetPlayerDidConnectLate, addr 0x22c9dfc, size 0x70, virtual true, abstract: false, final true
  inline void SetPlayerDidConnectLate(::StringW usedId, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* playersAtGameStartNetSerializable, ::StringW sessionGameId);

  /// @brief Method SetSongStartTime, addr 0x22ca380, size 0x58, virtual true, abstract: false, final true
  inline void SetSongStartTime(int64_t startTime);

  /// @brief Method SliderSpawned, addr 0x22ca91c, size 0x68, virtual true, abstract: false, final true
  inline void SliderSpawned(float_t songTime, ::GlobalNamespace::SliderSpawnInfoNetSerializable* sliderSpawnInfoNetSerializable);

  constexpr ::GlobalNamespace::IMultiplayerSessionManager* const& __cordl_internal_get__multiplayerSessionManager() const;

  constexpr ::GlobalNamespace::IMultiplayerSessionManager*& __cordl_internal_get__multiplayerSessionManager();

  constexpr ::GlobalNamespace::RpcHandler_1<::GlobalNamespace::GameplayRpcManager_RpcType>* const& __cordl_internal_get__rpcHandler() const;

  constexpr ::GlobalNamespace::RpcHandler_1<::GlobalNamespace::GameplayRpcManager_RpcType>*& __cordl_internal_get__rpcHandler();

  constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_getGameplaySceneReadyEvent() const;

  constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_getGameplaySceneReadyEvent();

  constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_getGameplaySongReadyEvent() const;

  constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_getGameplaySongReadyEvent();

  constexpr ::System::Action_2<::StringW, ::GlobalNamespace::MultiplayerLevelCompletionResults*>* const& __cordl_internal_get_levelFinishedEvent() const;

  constexpr ::System::Action_2<::StringW, ::GlobalNamespace::MultiplayerLevelCompletionResults*>*& __cordl_internal_get_levelFinishedEvent();

  constexpr ::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteCutInfoNetSerializable*>* const& __cordl_internal_get_noteWasCutEvent() const;

  constexpr ::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteCutInfoNetSerializable*>*& __cordl_internal_get_noteWasCutEvent();

  constexpr ::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteMissInfoNetSerializable*>* const& __cordl_internal_get_noteWasMissedEvent() const;

  constexpr ::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteMissInfoNetSerializable*>*& __cordl_internal_get_noteWasMissedEvent();

  constexpr ::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteSpawnInfoNetSerializable*>* const& __cordl_internal_get_noteWasSpawnedEvent() const;

  constexpr ::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteSpawnInfoNetSerializable*>*& __cordl_internal_get_noteWasSpawnedEvent();

  constexpr ::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>* const& __cordl_internal_get_obstacleWasSpawnedEvent() const;

  constexpr ::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>*& __cordl_internal_get_obstacleWasSpawnedEvent();

  constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_requestReturnToMenuEvent() const;

  constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_requestReturnToMenuEvent();

  constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_returnToMenuEvent() const;

  constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_returnToMenuEvent();

  constexpr ::System::Action_2<::StringW, ::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>* const& __cordl_internal_get_setGameplaySceneReadyEvent() const;

  constexpr ::System::Action_2<::StringW, ::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>*& __cordl_internal_get_setGameplaySceneReadyEvent();

  constexpr ::System::Action_3<::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>* const& __cordl_internal_get_setGameplaySceneSyncFinishedEvent() const;

  constexpr ::System::Action_3<::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>*& __cordl_internal_get_setGameplaySceneSyncFinishedEvent();

  constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_setGameplaySongReadyEvent() const;

  constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_setGameplaySongReadyEvent();

  constexpr ::System::Action_4<::StringW, ::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>* const& __cordl_internal_get_setPlayerDidConnectLateEvent() const;

  constexpr ::System::Action_4<::StringW, ::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>*& __cordl_internal_get_setPlayerDidConnectLateEvent();

  constexpr ::System::Action_2<::StringW, int64_t>* const& __cordl_internal_get_setSongStartTimeEvent() const;

  constexpr ::System::Action_2<::StringW, int64_t>*& __cordl_internal_get_setSongStartTimeEvent();

  constexpr ::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::SliderSpawnInfoNetSerializable*>* const& __cordl_internal_get_sliderWasSpawnedEvent() const;

  constexpr ::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::SliderSpawnInfoNetSerializable*>*& __cordl_internal_get_sliderWasSpawnedEvent();

  constexpr void __cordl_internal_set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value);

  constexpr void __cordl_internal_set__rpcHandler(::GlobalNamespace::RpcHandler_1<::GlobalNamespace::GameplayRpcManager_RpcType>* value);

  constexpr void __cordl_internal_set_getGameplaySceneReadyEvent(::System::Action_1<::StringW>* value);

  constexpr void __cordl_internal_set_getGameplaySongReadyEvent(::System::Action_1<::StringW>* value);

  constexpr void __cordl_internal_set_levelFinishedEvent(::System::Action_2<::StringW, ::GlobalNamespace::MultiplayerLevelCompletionResults*>* value);

  constexpr void __cordl_internal_set_noteWasCutEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteCutInfoNetSerializable*>* value);

  constexpr void __cordl_internal_set_noteWasMissedEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteMissInfoNetSerializable*>* value);

  constexpr void __cordl_internal_set_noteWasSpawnedEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteSpawnInfoNetSerializable*>* value);

  constexpr void __cordl_internal_set_obstacleWasSpawnedEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>* value);

  constexpr void __cordl_internal_set_requestReturnToMenuEvent(::System::Action_1<::StringW>* value);

  constexpr void __cordl_internal_set_returnToMenuEvent(::System::Action_1<::StringW>* value);

  constexpr void __cordl_internal_set_setGameplaySceneReadyEvent(::System::Action_2<::StringW, ::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>* value);

  constexpr void __cordl_internal_set_setGameplaySceneSyncFinishedEvent(::System::Action_3<::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>* value);

  constexpr void __cordl_internal_set_setGameplaySongReadyEvent(::System::Action_1<::StringW>* value);

  constexpr void __cordl_internal_set_setPlayerDidConnectLateEvent(::System::Action_4<::StringW, ::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>* value);

  constexpr void __cordl_internal_set_setSongStartTimeEvent(::System::Action_2<::StringW, int64_t>* value);

  constexpr void __cordl_internal_set_sliderWasSpawnedEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::SliderSpawnInfoNetSerializable*>* value);

  /// @brief Method .ctor, addr 0x22c8fa0, size 0x71c, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager);

  /// @brief Method add_getGameplaySceneReadyEvent, addr 0x22c9ad0, size 0xb0, virtual true, abstract: false, final true
  inline void add_getGameplaySceneReadyEvent(::System::Action_1<::StringW>* value);

  /// @brief Method add_getGameplaySongReadyEvent, addr 0x22ca054, size 0xb0, virtual true, abstract: false, final true
  inline void add_getGameplaySongReadyEvent(::System::Action_1<::StringW>* value);

  /// @brief Method add_levelFinishedEvent, addr 0x22cad68, size 0xb0, virtual true, abstract: false, final true
  inline void add_levelFinishedEvent(::System::Action_2<::StringW, ::GlobalNamespace::MultiplayerLevelCompletionResults*>* value);

  /// @brief Method add_noteWasCutEvent, addr 0x22ca9a0, size 0xb0, virtual true, abstract: false, final true
  inline void add_noteWasCutEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteCutInfoNetSerializable*>* value);

  /// @brief Method add_noteWasMissedEvent, addr 0x22cab84, size 0xb0, virtual true, abstract: false, final true
  inline void add_noteWasMissedEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteMissInfoNetSerializable*>* value);

  /// @brief Method add_noteWasSpawnedEvent, addr 0x22ca3f4, size 0xb0, virtual true, abstract: false, final true
  inline void add_noteWasSpawnedEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteSpawnInfoNetSerializable*>* value);

  /// @brief Method add_obstacleWasSpawnedEvent, addr 0x22ca5d8, size 0xb0, virtual true, abstract: false, final true
  inline void add_obstacleWasSpawnedEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>* value);

  /// @brief Method add_requestReturnToMenuEvent, addr 0x22cb108, size 0xb0, virtual true, abstract: false, final true
  inline void add_requestReturnToMenuEvent(::System::Action_1<::StringW>* value);

  /// @brief Method add_returnToMenuEvent, addr 0x22caf3c, size 0xb0, virtual true, abstract: false, final true
  inline void add_returnToMenuEvent(::System::Action_1<::StringW>* value);

  /// @brief Method add_setGameplaySceneReadyEvent, addr 0x22c98fc, size 0xb0, virtual true, abstract: false, final true
  inline void add_setGameplaySceneReadyEvent(::System::Action_2<::StringW, ::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>* value);

  /// @brief Method add_setGameplaySceneSyncFinishedEvent, addr 0x22c9718, size 0xb0, virtual true, abstract: false, final true
  inline void add_setGameplaySceneSyncFinishedEvent(::System::Action_3<::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>* value);

  /// @brief Method add_setGameplaySongReadyEvent, addr 0x22c9e88, size 0xb0, virtual true, abstract: false, final true
  inline void add_setGameplaySongReadyEvent(::System::Action_1<::StringW>* value);

  /// @brief Method add_setPlayerDidConnectLateEvent, addr 0x22c9c9c, size 0xb0, virtual true, abstract: false, final true
  inline void add_setPlayerDidConnectLateEvent(::System::Action_4<::StringW, ::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>* value);

  /// @brief Method add_setSongStartTimeEvent, addr 0x22ca220, size 0xb0, virtual true, abstract: false, final true
  inline void add_setSongStartTimeEvent(::System::Action_2<::StringW, int64_t>* value);

  /// @brief Method add_sliderWasSpawnedEvent, addr 0x22ca7bc, size 0xb0, virtual true, abstract: false, final true
  inline void add_sliderWasSpawnedEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::SliderSpawnInfoNetSerializable*>* value);

  /// @brief Method get_enabled, addr 0x22c8e18, size 0xc0, virtual true, abstract: false, final true
  inline bool get_enabled();

  /// @brief Convert to "::GlobalNamespace::IGameplayRpcManager"
  constexpr ::GlobalNamespace::IGameplayRpcManager* i___GlobalNamespace__IGameplayRpcManager() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method remove_getGameplaySceneReadyEvent, addr 0x22c9b80, size 0xb0, virtual true, abstract: false, final true
  inline void remove_getGameplaySceneReadyEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_getGameplaySongReadyEvent, addr 0x22ca104, size 0xb0, virtual true, abstract: false, final true
  inline void remove_getGameplaySongReadyEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_levelFinishedEvent, addr 0x22cae18, size 0xb0, virtual true, abstract: false, final true
  inline void remove_levelFinishedEvent(::System::Action_2<::StringW, ::GlobalNamespace::MultiplayerLevelCompletionResults*>* value);

  /// @brief Method remove_noteWasCutEvent, addr 0x22caa50, size 0xb0, virtual true, abstract: false, final true
  inline void remove_noteWasCutEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteCutInfoNetSerializable*>* value);

  /// @brief Method remove_noteWasMissedEvent, addr 0x22cac34, size 0xb0, virtual true, abstract: false, final true
  inline void remove_noteWasMissedEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteMissInfoNetSerializable*>* value);

  /// @brief Method remove_noteWasSpawnedEvent, addr 0x22ca4a4, size 0xb0, virtual true, abstract: false, final true
  inline void remove_noteWasSpawnedEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteSpawnInfoNetSerializable*>* value);

  /// @brief Method remove_obstacleWasSpawnedEvent, addr 0x22ca688, size 0xb0, virtual true, abstract: false, final true
  inline void remove_obstacleWasSpawnedEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>* value);

  /// @brief Method remove_requestReturnToMenuEvent, addr 0x22cb1b8, size 0xb0, virtual true, abstract: false, final true
  inline void remove_requestReturnToMenuEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_returnToMenuEvent, addr 0x22cafec, size 0xb0, virtual true, abstract: false, final true
  inline void remove_returnToMenuEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_setGameplaySceneReadyEvent, addr 0x22c99ac, size 0xb0, virtual true, abstract: false, final true
  inline void remove_setGameplaySceneReadyEvent(::System::Action_2<::StringW, ::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>* value);

  /// @brief Method remove_setGameplaySceneSyncFinishedEvent, addr 0x22c97c8, size 0xb0, virtual true, abstract: false, final true
  inline void remove_setGameplaySceneSyncFinishedEvent(::System::Action_3<::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>* value);

  /// @brief Method remove_setGameplaySongReadyEvent, addr 0x22c9f38, size 0xb0, virtual true, abstract: false, final true
  inline void remove_setGameplaySongReadyEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_setPlayerDidConnectLateEvent, addr 0x22c9d4c, size 0xb0, virtual true, abstract: false, final true
  inline void remove_setPlayerDidConnectLateEvent(::System::Action_4<::StringW, ::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>* value);

  /// @brief Method remove_setSongStartTimeEvent, addr 0x22ca2d0, size 0xb0, virtual true, abstract: false, final true
  inline void remove_setSongStartTimeEvent(::System::Action_2<::StringW, int64_t>* value);

  /// @brief Method remove_sliderWasSpawnedEvent, addr 0x22ca86c, size 0xb0, virtual true, abstract: false, final true
  inline void remove_sliderWasSpawnedEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::SliderSpawnInfoNetSerializable*>* value);

  /// @brief Method set_enabled, addr 0x22c8ed8, size 0xc8, virtual true, abstract: false, final true
  inline void set_enabled(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameplayRpcManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameplayRpcManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameplayRpcManager(GameplayRpcManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameplayRpcManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameplayRpcManager(GameplayRpcManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14765 };

  /// @brief Field kGameplayState offset 0xffffffff size 0x8
  static constexpr ::ConstString kGameplayState{ u"in_gameplay" };

  /// @brief Field _multiplayerSessionManager, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IMultiplayerSessionManager* ____multiplayerSessionManager;

  /// @brief Field _rpcHandler, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::RpcHandler_1<::GlobalNamespace::GameplayRpcManager_RpcType>* ____rpcHandler;

  /// @brief Field setGameplaySceneSyncFinishedEvent, offset: 0x20, size: 0x8, def value: None
  ::System::Action_3<::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>* ___setGameplaySceneSyncFinishedEvent;

  /// @brief Field setGameplaySceneReadyEvent, offset: 0x28, size: 0x8, def value: None
  ::System::Action_2<::StringW, ::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>* ___setGameplaySceneReadyEvent;

  /// @brief Field getGameplaySceneReadyEvent, offset: 0x30, size: 0x8, def value: None
  ::System::Action_1<::StringW>* ___getGameplaySceneReadyEvent;

  /// @brief Field setPlayerDidConnectLateEvent, offset: 0x38, size: 0x8, def value: None
  ::System::Action_4<::StringW, ::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>* ___setPlayerDidConnectLateEvent;

  /// @brief Field setGameplaySongReadyEvent, offset: 0x40, size: 0x8, def value: None
  ::System::Action_1<::StringW>* ___setGameplaySongReadyEvent;

  /// @brief Field getGameplaySongReadyEvent, offset: 0x48, size: 0x8, def value: None
  ::System::Action_1<::StringW>* ___getGameplaySongReadyEvent;

  /// @brief Field setSongStartTimeEvent, offset: 0x50, size: 0x8, def value: None
  ::System::Action_2<::StringW, int64_t>* ___setSongStartTimeEvent;

  /// @brief Field noteWasSpawnedEvent, offset: 0x58, size: 0x8, def value: None
  ::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteSpawnInfoNetSerializable*>* ___noteWasSpawnedEvent;

  /// @brief Field obstacleWasSpawnedEvent, offset: 0x60, size: 0x8, def value: None
  ::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>* ___obstacleWasSpawnedEvent;

  /// @brief Field sliderWasSpawnedEvent, offset: 0x68, size: 0x8, def value: None
  ::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::SliderSpawnInfoNetSerializable*>* ___sliderWasSpawnedEvent;

  /// @brief Field noteWasCutEvent, offset: 0x70, size: 0x8, def value: None
  ::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteCutInfoNetSerializable*>* ___noteWasCutEvent;

  /// @brief Field noteWasMissedEvent, offset: 0x78, size: 0x8, def value: None
  ::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteMissInfoNetSerializable*>* ___noteWasMissedEvent;

  /// @brief Field levelFinishedEvent, offset: 0x80, size: 0x8, def value: None
  ::System::Action_2<::StringW, ::GlobalNamespace::MultiplayerLevelCompletionResults*>* ___levelFinishedEvent;

  /// @brief Field returnToMenuEvent, offset: 0x88, size: 0x8, def value: None
  ::System::Action_1<::StringW>* ___returnToMenuEvent;

  /// @brief Field requestReturnToMenuEvent, offset: 0x90, size: 0x8, def value: None
  ::System::Action_1<::StringW>* ___requestReturnToMenuEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameplayRpcManager, ____multiplayerSessionManager) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayRpcManager, ____rpcHandler) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayRpcManager, ___setGameplaySceneSyncFinishedEvent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayRpcManager, ___setGameplaySceneReadyEvent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayRpcManager, ___getGameplaySceneReadyEvent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayRpcManager, ___setPlayerDidConnectLateEvent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayRpcManager, ___setGameplaySongReadyEvent) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayRpcManager, ___getGameplaySongReadyEvent) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayRpcManager, ___setSongStartTimeEvent) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayRpcManager, ___noteWasSpawnedEvent) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayRpcManager, ___obstacleWasSpawnedEvent) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayRpcManager, ___sliderWasSpawnedEvent) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayRpcManager, ___noteWasCutEvent) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayRpcManager, ___noteWasMissedEvent) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayRpcManager, ___levelFinishedEvent) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayRpcManager, ___returnToMenuEvent) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayRpcManager, ___requestReturnToMenuEvent) == 0x90, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameplayRpcManager, 0x98>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayRpcManager_RpcType, "", "GameplayRpcManager/RpcType");
NEED_NO_BOX(::GlobalNamespace::GameplayRpcManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayRpcManager*, "", "GameplayRpcManager");
NEED_NO_BOX(::GlobalNamespace::GameplayRpcManager_GetGameplaySceneReadyRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayRpcManager_GetGameplaySceneReadyRpc*, "", "GameplayRpcManager/GetGameplaySceneReadyRpc");
NEED_NO_BOX(::GlobalNamespace::GameplayRpcManager_GetGameplaySongReadyRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayRpcManager_GetGameplaySongReadyRpc*, "", "GameplayRpcManager/GetGameplaySongReadyRpc");
NEED_NO_BOX(::GlobalNamespace::GameplayRpcManager_LevelFinishedRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayRpcManager_LevelFinishedRpc*, "", "GameplayRpcManager/LevelFinishedRpc");
NEED_NO_BOX(::GlobalNamespace::GameplayRpcManager_NoteCutRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayRpcManager_NoteCutRpc*, "", "GameplayRpcManager/NoteCutRpc");
NEED_NO_BOX(::GlobalNamespace::GameplayRpcManager_NoteMissedRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayRpcManager_NoteMissedRpc*, "", "GameplayRpcManager/NoteMissedRpc");
NEED_NO_BOX(::GlobalNamespace::GameplayRpcManager_NoteSpawnedRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayRpcManager_NoteSpawnedRpc*, "", "GameplayRpcManager/NoteSpawnedRpc");
NEED_NO_BOX(::GlobalNamespace::GameplayRpcManager_ObstacleSpawnedRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayRpcManager_ObstacleSpawnedRpc*, "", "GameplayRpcManager/ObstacleSpawnedRpc");
NEED_NO_BOX(::GlobalNamespace::GameplayRpcManager_RequestReturnToMenuRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayRpcManager_RequestReturnToMenuRpc*, "", "GameplayRpcManager/RequestReturnToMenuRpc");
NEED_NO_BOX(::GlobalNamespace::GameplayRpcManager_ReturnToMenuRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayRpcManager_ReturnToMenuRpc*, "", "GameplayRpcManager/ReturnToMenuRpc");
NEED_NO_BOX(::GlobalNamespace::GameplayRpcManager_SetGameplaySceneReadyRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayRpcManager_SetGameplaySceneReadyRpc*, "", "GameplayRpcManager/SetGameplaySceneReadyRpc");
NEED_NO_BOX(::GlobalNamespace::GameplayRpcManager_SetGameplaySceneSyncFinishedRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayRpcManager_SetGameplaySceneSyncFinishedRpc*, "", "GameplayRpcManager/SetGameplaySceneSyncFinishedRpc");
NEED_NO_BOX(::GlobalNamespace::GameplayRpcManager_SetGameplaySongReadyRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayRpcManager_SetGameplaySongReadyRpc*, "", "GameplayRpcManager/SetGameplaySongReadyRpc");
NEED_NO_BOX(::GlobalNamespace::GameplayRpcManager_SetPlayerDidConnectLateRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayRpcManager_SetPlayerDidConnectLateRpc*, "", "GameplayRpcManager/SetPlayerDidConnectLateRpc");
NEED_NO_BOX(::GlobalNamespace::GameplayRpcManager_SetSongStartTimeRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayRpcManager_SetSongStartTimeRpc*, "", "GameplayRpcManager/SetSongStartTimeRpc");
NEED_NO_BOX(::GlobalNamespace::GameplayRpcManager_SliderSpawnedRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayRpcManager_SliderSpawnedRpc*, "", "GameplayRpcManager/SliderSpawnedRpc");
