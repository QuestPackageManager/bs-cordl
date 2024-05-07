#pragma once
// IWYU pragma private; include "GlobalNamespace/GameplayRpcManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__RemoteProcedureCall_1_def.hpp"
#include "GlobalNamespace/zzzz__RemoteProcedureCall_2_def.hpp"
#include "GlobalNamespace/zzzz__RemoteProcedureCall_3_def.hpp"
#include "GlobalNamespace/zzzz__RemoteProcedureCall_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GameplayRpcManager)
namespace GlobalNamespace {
class IGameplayRpcManager;
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
namespace GlobalNamespace {
class __GameplayRpcManager__GetGameplaySceneReadyRpc;
}
namespace GlobalNamespace {
class __GameplayRpcManager__GetGameplaySongReadyRpc;
}
namespace GlobalNamespace {
class __GameplayRpcManager__LevelFinishedRpc;
}
namespace GlobalNamespace {
class __GameplayRpcManager__NoteCutRpc;
}
namespace GlobalNamespace {
class __GameplayRpcManager__NoteMissedRpc;
}
namespace GlobalNamespace {
class __GameplayRpcManager__NoteSpawnedRpc;
}
namespace GlobalNamespace {
class __GameplayRpcManager__ObstacleSpawnedRpc;
}
namespace GlobalNamespace {
class __GameplayRpcManager__RequestReturnToMenuRpc;
}
namespace GlobalNamespace {
class __GameplayRpcManager__ReturnToMenuRpc;
}
namespace GlobalNamespace {
struct __GameplayRpcManager__RpcType;
}
namespace GlobalNamespace {
class __GameplayRpcManager__SetGameplaySceneReadyRpc;
}
namespace GlobalNamespace {
class __GameplayRpcManager__SetGameplaySceneSyncFinishedRpc;
}
namespace GlobalNamespace {
class __GameplayRpcManager__SetGameplaySongReadyRpc;
}
namespace GlobalNamespace {
class __GameplayRpcManager__SetPlayerDidConnectLateRpc;
}
namespace GlobalNamespace {
class __GameplayRpcManager__SetSongStartTimeRpc;
}
namespace GlobalNamespace {
class __GameplayRpcManager__SliderSpawnedRpc;
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
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
struct __GameplayRpcManager__RpcType;
}
namespace GlobalNamespace {
class GameplayRpcManager;
}
namespace GlobalNamespace {
class __GameplayRpcManager__GetGameplaySceneReadyRpc;
}
namespace GlobalNamespace {
class __GameplayRpcManager__GetGameplaySongReadyRpc;
}
namespace GlobalNamespace {
class __GameplayRpcManager__LevelFinishedRpc;
}
namespace GlobalNamespace {
class __GameplayRpcManager__NoteCutRpc;
}
namespace GlobalNamespace {
class __GameplayRpcManager__NoteMissedRpc;
}
namespace GlobalNamespace {
class __GameplayRpcManager__NoteSpawnedRpc;
}
namespace GlobalNamespace {
class __GameplayRpcManager__ObstacleSpawnedRpc;
}
namespace GlobalNamespace {
class __GameplayRpcManager__RequestReturnToMenuRpc;
}
namespace GlobalNamespace {
class __GameplayRpcManager__ReturnToMenuRpc;
}
namespace GlobalNamespace {
class __GameplayRpcManager__SetGameplaySceneReadyRpc;
}
namespace GlobalNamespace {
class __GameplayRpcManager__SetGameplaySceneSyncFinishedRpc;
}
namespace GlobalNamespace {
class __GameplayRpcManager__SetGameplaySongReadyRpc;
}
namespace GlobalNamespace {
class __GameplayRpcManager__SetPlayerDidConnectLateRpc;
}
namespace GlobalNamespace {
class __GameplayRpcManager__SetSongStartTimeRpc;
}
namespace GlobalNamespace {
class __GameplayRpcManager__SliderSpawnedRpc;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__GameplayRpcManager__RpcType);
MARK_REF_PTR_T(::GlobalNamespace::GameplayRpcManager);
MARK_REF_PTR_T(::GlobalNamespace::__GameplayRpcManager__GetGameplaySceneReadyRpc);
MARK_REF_PTR_T(::GlobalNamespace::__GameplayRpcManager__GetGameplaySongReadyRpc);
MARK_REF_PTR_T(::GlobalNamespace::__GameplayRpcManager__LevelFinishedRpc);
MARK_REF_PTR_T(::GlobalNamespace::__GameplayRpcManager__NoteCutRpc);
MARK_REF_PTR_T(::GlobalNamespace::__GameplayRpcManager__NoteMissedRpc);
MARK_REF_PTR_T(::GlobalNamespace::__GameplayRpcManager__NoteSpawnedRpc);
MARK_REF_PTR_T(::GlobalNamespace::__GameplayRpcManager__ObstacleSpawnedRpc);
MARK_REF_PTR_T(::GlobalNamespace::__GameplayRpcManager__RequestReturnToMenuRpc);
MARK_REF_PTR_T(::GlobalNamespace::__GameplayRpcManager__ReturnToMenuRpc);
MARK_REF_PTR_T(::GlobalNamespace::__GameplayRpcManager__SetGameplaySceneReadyRpc);
MARK_REF_PTR_T(::GlobalNamespace::__GameplayRpcManager__SetGameplaySceneSyncFinishedRpc);
MARK_REF_PTR_T(::GlobalNamespace::__GameplayRpcManager__SetGameplaySongReadyRpc);
MARK_REF_PTR_T(::GlobalNamespace::__GameplayRpcManager__SetPlayerDidConnectLateRpc);
MARK_REF_PTR_T(::GlobalNamespace::__GameplayRpcManager__SetSongStartTimeRpc);
MARK_REF_PTR_T(::GlobalNamespace::__GameplayRpcManager__SliderSpawnedRpc);
// Type: ::RpcType
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::GameplayRpcManager::RpcType
struct CORDL_TYPE __GameplayRpcManager__RpcType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct ____GameplayRpcManager__RpcType_Unwrapped
  enum struct ____GameplayRpcManager__RpcType_Unwrapped : uint8_t {
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
  constexpr operator ____GameplayRpcManager__RpcType_Unwrapped() const noexcept {
    return static_cast<____GameplayRpcManager__RpcType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint8_t() const noexcept {
    return static_cast<uint8_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameplayRpcManager__RpcType();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr __GameplayRpcManager__RpcType(uint8_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  /// @brief Field GetGameplaySceneReady value: static_cast<uint8_t>(0x2u)
  static ::GlobalNamespace::__GameplayRpcManager__RpcType const GetGameplaySceneReady;

  /// @brief Field GetGameplaySongReady value: static_cast<uint8_t>(0x5u)
  static ::GlobalNamespace::__GameplayRpcManager__RpcType const GetGameplaySongReady;

  /// @brief Field LevelFinished value: static_cast<uint8_t>(0x9u)
  static ::GlobalNamespace::__GameplayRpcManager__RpcType const LevelFinished;

  /// @brief Field NoteCut value: static_cast<uint8_t>(0x7u)
  static ::GlobalNamespace::__GameplayRpcManager__RpcType const NoteCut;

  /// @brief Field NoteMissed value: static_cast<uint8_t>(0x8u)
  static ::GlobalNamespace::__GameplayRpcManager__RpcType const NoteMissed;

  /// @brief Field NoteSpawned value: static_cast<uint8_t>(0xcu)
  static ::GlobalNamespace::__GameplayRpcManager__RpcType const NoteSpawned;

  /// @brief Field ObstacleSpawned value: static_cast<uint8_t>(0xdu)
  static ::GlobalNamespace::__GameplayRpcManager__RpcType const ObstacleSpawned;

  /// @brief Field RequestReturnToMenu value: static_cast<uint8_t>(0xbu)
  static ::GlobalNamespace::__GameplayRpcManager__RpcType const RequestReturnToMenu;

  /// @brief Field ReturnToMenu value: static_cast<uint8_t>(0xau)
  static ::GlobalNamespace::__GameplayRpcManager__RpcType const ReturnToMenu;

  /// @brief Field SetActivePlayerFailedToConnect value: static_cast<uint8_t>(0x3u)
  static ::GlobalNamespace::__GameplayRpcManager__RpcType const SetActivePlayerFailedToConnect;

  /// @brief Field SetGameplaySceneReady value: static_cast<uint8_t>(0x1u)
  static ::GlobalNamespace::__GameplayRpcManager__RpcType const SetGameplaySceneReady;

  /// @brief Field SetGameplaySceneSyncFinish value: static_cast<uint8_t>(0x0u)
  static ::GlobalNamespace::__GameplayRpcManager__RpcType const SetGameplaySceneSyncFinish;

  /// @brief Field SetGameplaySongReady value: static_cast<uint8_t>(0x4u)
  static ::GlobalNamespace::__GameplayRpcManager__RpcType const SetGameplaySongReady;

  /// @brief Field SetSongStartTime value: static_cast<uint8_t>(0x6u)
  static ::GlobalNamespace::__GameplayRpcManager__RpcType const SetSongStartTime;

  /// @brief Field SliderSpawned value: static_cast<uint8_t>(0xeu)
  static ::GlobalNamespace::__GameplayRpcManager__RpcType const SliderSpawned;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameplayRpcManager__RpcType, 0x1>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameplayRpcManager__RpcType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::SetGameplaySceneSyncFinishedRpc
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GameplayRpcManager::SetGameplaySceneSyncFinishedRpc*
class CORDL_TYPE __GameplayRpcManager__SetGameplaySceneSyncFinishedRpc : public ::GlobalNamespace::RemoteProcedureCall_2<::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW> {
public:
  // Declarations
  static inline ::GlobalNamespace::__GameplayRpcManager__SetGameplaySceneSyncFinishedRpc* New_ctor();

  /// @brief Method .ctor, addr 0x109a15c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameplayRpcManager__SetGameplaySceneSyncFinishedRpc();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__GameplayRpcManager__SetGameplaySceneSyncFinishedRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GameplayRpcManager__SetGameplaySceneSyncFinishedRpc(__GameplayRpcManager__SetGameplaySceneSyncFinishedRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GameplayRpcManager__SetGameplaySceneSyncFinishedRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GameplayRpcManager__SetGameplaySceneSyncFinishedRpc(__GameplayRpcManager__SetGameplaySceneSyncFinishedRpc const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameplayRpcManager__SetGameplaySceneSyncFinishedRpc, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::SetGameplaySceneReadyRpc
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GameplayRpcManager::SetGameplaySceneReadyRpc*
class CORDL_TYPE __GameplayRpcManager__SetGameplaySceneReadyRpc : public ::GlobalNamespace::RemoteProcedureCall_1<::GlobalNamespace::PlayerSpecificSettingsNetSerializable*> {
public:
  // Declarations
  static inline ::GlobalNamespace::__GameplayRpcManager__SetGameplaySceneReadyRpc* New_ctor();

  /// @brief Method .ctor, addr 0x109a1a4, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameplayRpcManager__SetGameplaySceneReadyRpc();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__GameplayRpcManager__SetGameplaySceneReadyRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GameplayRpcManager__SetGameplaySceneReadyRpc(__GameplayRpcManager__SetGameplaySceneReadyRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GameplayRpcManager__SetGameplaySceneReadyRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GameplayRpcManager__SetGameplaySceneReadyRpc(__GameplayRpcManager__SetGameplaySceneReadyRpc const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameplayRpcManager__SetGameplaySceneReadyRpc, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::GetGameplaySceneReadyRpc
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GameplayRpcManager::GetGameplaySceneReadyRpc*
class CORDL_TYPE __GameplayRpcManager__GetGameplaySceneReadyRpc : public ::GlobalNamespace::RemoteProcedureCall {
public:
  // Declarations
  static inline ::GlobalNamespace::__GameplayRpcManager__GetGameplaySceneReadyRpc* New_ctor();

  /// @brief Method .ctor, addr 0x109a1ec, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameplayRpcManager__GetGameplaySceneReadyRpc();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__GameplayRpcManager__GetGameplaySceneReadyRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GameplayRpcManager__GetGameplaySceneReadyRpc(__GameplayRpcManager__GetGameplaySceneReadyRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GameplayRpcManager__GetGameplaySceneReadyRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GameplayRpcManager__GetGameplaySceneReadyRpc(__GameplayRpcManager__GetGameplaySceneReadyRpc const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameplayRpcManager__GetGameplaySceneReadyRpc, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::SetPlayerDidConnectLateRpc
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GameplayRpcManager::SetPlayerDidConnectLateRpc*
class CORDL_TYPE __GameplayRpcManager__SetPlayerDidConnectLateRpc
    : public ::GlobalNamespace::RemoteProcedureCall_3<::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW> {
public:
  // Declarations
  static inline ::GlobalNamespace::__GameplayRpcManager__SetPlayerDidConnectLateRpc* New_ctor();

  /// @brief Method .ctor, addr 0x109a1f4, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameplayRpcManager__SetPlayerDidConnectLateRpc();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__GameplayRpcManager__SetPlayerDidConnectLateRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GameplayRpcManager__SetPlayerDidConnectLateRpc(__GameplayRpcManager__SetPlayerDidConnectLateRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GameplayRpcManager__SetPlayerDidConnectLateRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GameplayRpcManager__SetPlayerDidConnectLateRpc(__GameplayRpcManager__SetPlayerDidConnectLateRpc const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameplayRpcManager__SetPlayerDidConnectLateRpc, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::SetGameplaySongReadyRpc
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GameplayRpcManager::SetGameplaySongReadyRpc*
class CORDL_TYPE __GameplayRpcManager__SetGameplaySongReadyRpc : public ::GlobalNamespace::RemoteProcedureCall {
public:
  // Declarations
  static inline ::GlobalNamespace::__GameplayRpcManager__SetGameplaySongReadyRpc* New_ctor();

  /// @brief Method .ctor, addr 0x109a23c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameplayRpcManager__SetGameplaySongReadyRpc();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__GameplayRpcManager__SetGameplaySongReadyRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GameplayRpcManager__SetGameplaySongReadyRpc(__GameplayRpcManager__SetGameplaySongReadyRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GameplayRpcManager__SetGameplaySongReadyRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GameplayRpcManager__SetGameplaySongReadyRpc(__GameplayRpcManager__SetGameplaySongReadyRpc const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameplayRpcManager__SetGameplaySongReadyRpc, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::GetGameplaySongReadyRpc
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GameplayRpcManager::GetGameplaySongReadyRpc*
class CORDL_TYPE __GameplayRpcManager__GetGameplaySongReadyRpc : public ::GlobalNamespace::RemoteProcedureCall {
public:
  // Declarations
  static inline ::GlobalNamespace::__GameplayRpcManager__GetGameplaySongReadyRpc* New_ctor();

  /// @brief Method .ctor, addr 0x109a244, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameplayRpcManager__GetGameplaySongReadyRpc();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__GameplayRpcManager__GetGameplaySongReadyRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GameplayRpcManager__GetGameplaySongReadyRpc(__GameplayRpcManager__GetGameplaySongReadyRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GameplayRpcManager__GetGameplaySongReadyRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GameplayRpcManager__GetGameplaySongReadyRpc(__GameplayRpcManager__GetGameplaySongReadyRpc const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameplayRpcManager__GetGameplaySongReadyRpc, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::SetSongStartTimeRpc
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GameplayRpcManager::SetSongStartTimeRpc*
class CORDL_TYPE __GameplayRpcManager__SetSongStartTimeRpc : public ::GlobalNamespace::RemoteProcedureCall_1<int64_t> {
public:
  // Declarations
  static inline ::GlobalNamespace::__GameplayRpcManager__SetSongStartTimeRpc* New_ctor();

  /// @brief Method .ctor, addr 0x109a24c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameplayRpcManager__SetSongStartTimeRpc();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__GameplayRpcManager__SetSongStartTimeRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GameplayRpcManager__SetSongStartTimeRpc(__GameplayRpcManager__SetSongStartTimeRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GameplayRpcManager__SetSongStartTimeRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GameplayRpcManager__SetSongStartTimeRpc(__GameplayRpcManager__SetSongStartTimeRpc const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameplayRpcManager__SetSongStartTimeRpc, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::NoteSpawnedRpc
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GameplayRpcManager::NoteSpawnedRpc*
class CORDL_TYPE __GameplayRpcManager__NoteSpawnedRpc : public ::GlobalNamespace::RemoteProcedureCall_2<float_t, ::GlobalNamespace::NoteSpawnInfoNetSerializable*> {
public:
  // Declarations
  static inline ::GlobalNamespace::__GameplayRpcManager__NoteSpawnedRpc* New_ctor();

  /// @brief Method .ctor, addr 0x109a294, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameplayRpcManager__NoteSpawnedRpc();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__GameplayRpcManager__NoteSpawnedRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GameplayRpcManager__NoteSpawnedRpc(__GameplayRpcManager__NoteSpawnedRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GameplayRpcManager__NoteSpawnedRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GameplayRpcManager__NoteSpawnedRpc(__GameplayRpcManager__NoteSpawnedRpc const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameplayRpcManager__NoteSpawnedRpc, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::ObstacleSpawnedRpc
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GameplayRpcManager::ObstacleSpawnedRpc*
class CORDL_TYPE __GameplayRpcManager__ObstacleSpawnedRpc : public ::GlobalNamespace::RemoteProcedureCall_2<float_t, ::GlobalNamespace::ObstacleSpawnInfoNetSerializable*> {
public:
  // Declarations
  static inline ::GlobalNamespace::__GameplayRpcManager__ObstacleSpawnedRpc* New_ctor();

  /// @brief Method .ctor, addr 0x109a2dc, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameplayRpcManager__ObstacleSpawnedRpc();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__GameplayRpcManager__ObstacleSpawnedRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GameplayRpcManager__ObstacleSpawnedRpc(__GameplayRpcManager__ObstacleSpawnedRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GameplayRpcManager__ObstacleSpawnedRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GameplayRpcManager__ObstacleSpawnedRpc(__GameplayRpcManager__ObstacleSpawnedRpc const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameplayRpcManager__ObstacleSpawnedRpc, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::SliderSpawnedRpc
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GameplayRpcManager::SliderSpawnedRpc*
class CORDL_TYPE __GameplayRpcManager__SliderSpawnedRpc : public ::GlobalNamespace::RemoteProcedureCall_2<float_t, ::GlobalNamespace::SliderSpawnInfoNetSerializable*> {
public:
  // Declarations
  static inline ::GlobalNamespace::__GameplayRpcManager__SliderSpawnedRpc* New_ctor();

  /// @brief Method .ctor, addr 0x109a324, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameplayRpcManager__SliderSpawnedRpc();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__GameplayRpcManager__SliderSpawnedRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GameplayRpcManager__SliderSpawnedRpc(__GameplayRpcManager__SliderSpawnedRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GameplayRpcManager__SliderSpawnedRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GameplayRpcManager__SliderSpawnedRpc(__GameplayRpcManager__SliderSpawnedRpc const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameplayRpcManager__SliderSpawnedRpc, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::NoteCutRpc
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GameplayRpcManager::NoteCutRpc*
class CORDL_TYPE __GameplayRpcManager__NoteCutRpc : public ::GlobalNamespace::RemoteProcedureCall_2<float_t, ::GlobalNamespace::NoteCutInfoNetSerializable*> {
public:
  // Declarations
  static inline ::GlobalNamespace::__GameplayRpcManager__NoteCutRpc* New_ctor();

  /// @brief Method .ctor, addr 0x109a36c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameplayRpcManager__NoteCutRpc();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__GameplayRpcManager__NoteCutRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GameplayRpcManager__NoteCutRpc(__GameplayRpcManager__NoteCutRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GameplayRpcManager__NoteCutRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GameplayRpcManager__NoteCutRpc(__GameplayRpcManager__NoteCutRpc const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameplayRpcManager__NoteCutRpc, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::NoteMissedRpc
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GameplayRpcManager::NoteMissedRpc*
class CORDL_TYPE __GameplayRpcManager__NoteMissedRpc : public ::GlobalNamespace::RemoteProcedureCall_2<float_t, ::GlobalNamespace::NoteMissInfoNetSerializable*> {
public:
  // Declarations
  static inline ::GlobalNamespace::__GameplayRpcManager__NoteMissedRpc* New_ctor();

  /// @brief Method .ctor, addr 0x109a3b4, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameplayRpcManager__NoteMissedRpc();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__GameplayRpcManager__NoteMissedRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GameplayRpcManager__NoteMissedRpc(__GameplayRpcManager__NoteMissedRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GameplayRpcManager__NoteMissedRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GameplayRpcManager__NoteMissedRpc(__GameplayRpcManager__NoteMissedRpc const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameplayRpcManager__NoteMissedRpc, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::LevelFinishedRpc
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GameplayRpcManager::LevelFinishedRpc*
class CORDL_TYPE __GameplayRpcManager__LevelFinishedRpc : public ::GlobalNamespace::RemoteProcedureCall_1<::GlobalNamespace::MultiplayerLevelCompletionResults*> {
public:
  // Declarations
  static inline ::GlobalNamespace::__GameplayRpcManager__LevelFinishedRpc* New_ctor();

  /// @brief Method .ctor, addr 0x109a3fc, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameplayRpcManager__LevelFinishedRpc();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__GameplayRpcManager__LevelFinishedRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GameplayRpcManager__LevelFinishedRpc(__GameplayRpcManager__LevelFinishedRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GameplayRpcManager__LevelFinishedRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GameplayRpcManager__LevelFinishedRpc(__GameplayRpcManager__LevelFinishedRpc const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameplayRpcManager__LevelFinishedRpc, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::ReturnToMenuRpc
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GameplayRpcManager::ReturnToMenuRpc*
class CORDL_TYPE __GameplayRpcManager__ReturnToMenuRpc : public ::GlobalNamespace::RemoteProcedureCall {
public:
  // Declarations
  static inline ::GlobalNamespace::__GameplayRpcManager__ReturnToMenuRpc* New_ctor();

  /// @brief Method .ctor, addr 0x109a444, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameplayRpcManager__ReturnToMenuRpc();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__GameplayRpcManager__ReturnToMenuRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GameplayRpcManager__ReturnToMenuRpc(__GameplayRpcManager__ReturnToMenuRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GameplayRpcManager__ReturnToMenuRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GameplayRpcManager__ReturnToMenuRpc(__GameplayRpcManager__ReturnToMenuRpc const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameplayRpcManager__ReturnToMenuRpc, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::RequestReturnToMenuRpc
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GameplayRpcManager::RequestReturnToMenuRpc*
class CORDL_TYPE __GameplayRpcManager__RequestReturnToMenuRpc : public ::GlobalNamespace::RemoteProcedureCall {
public:
  // Declarations
  static inline ::GlobalNamespace::__GameplayRpcManager__RequestReturnToMenuRpc* New_ctor();

  /// @brief Method .ctor, addr 0x109a44c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameplayRpcManager__RequestReturnToMenuRpc();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__GameplayRpcManager__RequestReturnToMenuRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GameplayRpcManager__RequestReturnToMenuRpc(__GameplayRpcManager__RequestReturnToMenuRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GameplayRpcManager__RequestReturnToMenuRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GameplayRpcManager__RequestReturnToMenuRpc(__GameplayRpcManager__RequestReturnToMenuRpc const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameplayRpcManager__RequestReturnToMenuRpc, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::GameplayRpcManager
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GameplayRpcManager*
class CORDL_TYPE GameplayRpcManager : public ::System::Object {
public:
  // Declarations
  using GetGameplaySceneReadyRpc = ::GlobalNamespace::__GameplayRpcManager__GetGameplaySceneReadyRpc;

  using GetGameplaySongReadyRpc = ::GlobalNamespace::__GameplayRpcManager__GetGameplaySongReadyRpc;

  using LevelFinishedRpc = ::GlobalNamespace::__GameplayRpcManager__LevelFinishedRpc;

  using NoteCutRpc = ::GlobalNamespace::__GameplayRpcManager__NoteCutRpc;

  using NoteMissedRpc = ::GlobalNamespace::__GameplayRpcManager__NoteMissedRpc;

  using NoteSpawnedRpc = ::GlobalNamespace::__GameplayRpcManager__NoteSpawnedRpc;

  using ObstacleSpawnedRpc = ::GlobalNamespace::__GameplayRpcManager__ObstacleSpawnedRpc;

  using RequestReturnToMenuRpc = ::GlobalNamespace::__GameplayRpcManager__RequestReturnToMenuRpc;

  using ReturnToMenuRpc = ::GlobalNamespace::__GameplayRpcManager__ReturnToMenuRpc;

  using RpcType = ::GlobalNamespace::__GameplayRpcManager__RpcType;

  using SetGameplaySceneReadyRpc = ::GlobalNamespace::__GameplayRpcManager__SetGameplaySceneReadyRpc;

  using SetGameplaySceneSyncFinishedRpc = ::GlobalNamespace::__GameplayRpcManager__SetGameplaySceneSyncFinishedRpc;

  using SetGameplaySongReadyRpc = ::GlobalNamespace::__GameplayRpcManager__SetGameplaySongReadyRpc;

  using SetPlayerDidConnectLateRpc = ::GlobalNamespace::__GameplayRpcManager__SetPlayerDidConnectLateRpc;

  using SetSongStartTimeRpc = ::GlobalNamespace::__GameplayRpcManager__SetSongStartTimeRpc;

  using SliderSpawnedRpc = ::GlobalNamespace::__GameplayRpcManager__SliderSpawnedRpc;

  /// @brief Field _multiplayerSessionManager, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerSessionManager,
                      put = __cordl_internal_set__multiplayerSessionManager))::GlobalNamespace::IMultiplayerSessionManager* _multiplayerSessionManager;

  /// @brief Field _rpcHandler, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__rpcHandler, put = __cordl_internal_set__rpcHandler))::GlobalNamespace::RpcHandler_1<::GlobalNamespace::__GameplayRpcManager__RpcType>* _rpcHandler;

  __declspec(property(get = get_enabled, put = set_enabled)) bool enabled;

  /// @brief Field getGameplaySceneReadyEvent, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_getGameplaySceneReadyEvent, put = __cordl_internal_set_getGameplaySceneReadyEvent))::System::Action_1<::StringW>* getGameplaySceneReadyEvent;

  /// @brief Field getGameplaySongReadyEvent, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_getGameplaySongReadyEvent, put = __cordl_internal_set_getGameplaySongReadyEvent))::System::Action_1<::StringW>* getGameplaySongReadyEvent;

  /// @brief Field levelFinishedEvent, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_levelFinishedEvent,
                      put = __cordl_internal_set_levelFinishedEvent))::System::Action_2<::StringW, ::GlobalNamespace::MultiplayerLevelCompletionResults*>* levelFinishedEvent;

  /// @brief Field noteWasCutEvent, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_noteWasCutEvent,
                      put = __cordl_internal_set_noteWasCutEvent))::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteCutInfoNetSerializable*>* noteWasCutEvent;

  /// @brief Field noteWasMissedEvent, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_noteWasMissedEvent,
                      put = __cordl_internal_set_noteWasMissedEvent))::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteMissInfoNetSerializable*>* noteWasMissedEvent;

  /// @brief Field noteWasSpawnedEvent, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_noteWasSpawnedEvent,
                      put = __cordl_internal_set_noteWasSpawnedEvent))::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteSpawnInfoNetSerializable*>* noteWasSpawnedEvent;

  /// @brief Field obstacleWasSpawnedEvent, offset 0x60, size 0x8
  __declspec(
      property(get = __cordl_internal_get_obstacleWasSpawnedEvent,
               put = __cordl_internal_set_obstacleWasSpawnedEvent))::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>* obstacleWasSpawnedEvent;

  /// @brief Field requestReturnToMenuEvent, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_requestReturnToMenuEvent, put = __cordl_internal_set_requestReturnToMenuEvent))::System::Action_1<::StringW>* requestReturnToMenuEvent;

  /// @brief Field returnToMenuEvent, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_returnToMenuEvent, put = __cordl_internal_set_returnToMenuEvent))::System::Action_1<::StringW>* returnToMenuEvent;

  /// @brief Field setGameplaySceneReadyEvent, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_setGameplaySceneReadyEvent,
                      put = __cordl_internal_set_setGameplaySceneReadyEvent))::System::Action_2<::StringW, ::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>* setGameplaySceneReadyEvent;

  /// @brief Field setGameplaySceneSyncFinishedEvent, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_setGameplaySceneSyncFinishedEvent,
                      put = __cordl_internal_set_setGameplaySceneSyncFinishedEvent))::System::Action_3<::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*,
                                                                                                       ::StringW>* setGameplaySceneSyncFinishedEvent;

  /// @brief Field setGameplaySongReadyEvent, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_setGameplaySongReadyEvent, put = __cordl_internal_set_setGameplaySongReadyEvent))::System::Action_1<::StringW>* setGameplaySongReadyEvent;

  /// @brief Field setPlayerDidConnectLateEvent, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_setPlayerDidConnectLateEvent,
                      put = __cordl_internal_set_setPlayerDidConnectLateEvent))::System::Action_4<::StringW, ::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*,
                                                                                                  ::StringW>* setPlayerDidConnectLateEvent;

  /// @brief Field setSongStartTimeEvent, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_setSongStartTimeEvent, put = __cordl_internal_set_setSongStartTimeEvent))::System::Action_2<::StringW, int64_t>* setSongStartTimeEvent;

  /// @brief Field sliderWasSpawnedEvent, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_sliderWasSpawnedEvent,
                      put = __cordl_internal_set_sliderWasSpawnedEvent))::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::SliderSpawnInfoNetSerializable*>* sliderWasSpawnedEvent;

  /// @brief Convert operator to "::GlobalNamespace::IGameplayRpcManager"
  constexpr operator ::GlobalNamespace::IGameplayRpcManager*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x1098544, size 0x5c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method GetGameplaySceneReady, addr 0x1098ab8, size 0x50, virtual true, abstract: false, final true
  inline void GetGameplaySceneReady();

  /// @brief Method GetGameplaySongReady, addr 0x109903c, size 0x50, virtual true, abstract: false, final true
  inline void GetGameplaySongReady();

  /// @brief Method InvokeGetGameplayLevelReadyCallback, addr 0x109908c, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeGetGameplayLevelReadyCallback(::StringW userId);

  /// @brief Method InvokeGetGameplaySceneReadyCallback, addr 0x1098b08, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeGetGameplaySceneReadyCallback(::StringW userId);

  /// @brief Method InvokeLevelFinishedCallback, addr 0x1099da8, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeLevelFinishedCallback(::StringW userId, ::GlobalNamespace::MultiplayerLevelCompletionResults* results);

  /// @brief Method InvokeNoteWasCutCallback, addr 0x10999f0, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeNoteWasCutCallback(::StringW userId, int64_t syncTime, float_t songTime, ::GlobalNamespace::NoteCutInfoNetSerializable* noteCutInfo);

  /// @brief Method InvokeNoteWasMissedCallback, addr 0x1099bd4, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeNoteWasMissedCallback(::StringW userId, int64_t syncTime, float_t songTime, ::GlobalNamespace::NoteMissInfoNetSerializable* noteMissInfo);

  /// @brief Method InvokeNoteWasSpawnedCallback, addr 0x1099444, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeNoteWasSpawnedCallback(::StringW userId, int64_t syncTime, float_t songTime, ::GlobalNamespace::NoteSpawnInfoNetSerializable* noteSpawnInfo);

  /// @brief Method InvokeObstacleWasSpawnedCallback, addr 0x1099628, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeObstacleWasSpawnedCallback(::StringW userId, int64_t syncTime, float_t songTime, ::GlobalNamespace::ObstacleSpawnInfoNetSerializable* obstacleSpawnInfo);

  /// @brief Method InvokeRequestReturnToMenuCallback, addr 0x109a140, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeRequestReturnToMenuCallback(::StringW userId);

  /// @brief Method InvokeReturnToMenuCallback, addr 0x1099f74, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeReturnToMenuCallback(::StringW userId);

  /// @brief Method InvokeSetGameplaySceneReadyCallback, addr 0x109893c, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeSetGameplaySceneReadyCallback(::StringW userId, ::GlobalNamespace::PlayerSpecificSettingsNetSerializable* playerSpecificSettingsNetSerializable);

  /// @brief Method InvokeSetGameplaySceneSyncFinishCallback, addr 0x1098768, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeSetGameplaySceneSyncFinishCallback(::StringW userId, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* playersAtGameStart, ::StringW sessionGameId);

  /// @brief Method InvokeSetGameplaySongReadyCallback, addr 0x1098ec0, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeSetGameplaySongReadyCallback(::StringW userId);

  /// @brief Method InvokeSetPlayerDidConnectLate, addr 0x1098cf4, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeSetPlayerDidConnectLate(::StringW userId, ::StringW failedUserId, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* playersAtGameStartNetSerializable,
                                            ::StringW sessionGameId);

  /// @brief Method InvokeSetSongStartTimeCallback, addr 0x1099260, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeSetSongStartTimeCallback(::StringW userId, int64_t startTime);

  /// @brief Method InvokeSliderWasSpawnedCallback, addr 0x109980c, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeSliderWasSpawnedCallback(::StringW userId, int64_t syncTime, float_t songTime, ::GlobalNamespace::SliderSpawnInfoNetSerializable* sliderSpawnInfo);

  /// @brief Method LevelFinished, addr 0x1099d50, size 0x58, virtual true, abstract: false, final true
  inline void LevelFinished(::GlobalNamespace::MultiplayerLevelCompletionResults* results);

  static inline ::GlobalNamespace::GameplayRpcManager* New_ctor(::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager);

  /// @brief Method NoteCut, addr 0x1099988, size 0x68, virtual true, abstract: false, final true
  inline void NoteCut(float_t songTime, ::GlobalNamespace::NoteCutInfoNetSerializable* noteCutInfoNetSerializable);

  /// @brief Method NoteMissed, addr 0x1099b6c, size 0x68, virtual true, abstract: false, final true
  inline void NoteMissed(float_t songTime, ::GlobalNamespace::NoteMissInfoNetSerializable* noteMissInfoNetSerializable);

  /// @brief Method NoteSpawned, addr 0x10993dc, size 0x68, virtual true, abstract: false, final true
  inline void NoteSpawned(float_t songTime, ::GlobalNamespace::NoteSpawnInfoNetSerializable* noteSpawnInfoNetSerializable);

  /// @brief Method ObstacleSpawned, addr 0x10995c0, size 0x68, virtual true, abstract: false, final true
  inline void ObstacleSpawned(float_t songTime, ::GlobalNamespace::ObstacleSpawnInfoNetSerializable* obstacleSpawnInfoNetSerializable);

  /// @brief Method RequestReturnToMenu, addr 0x109a0f0, size 0x50, virtual true, abstract: false, final true
  inline void RequestReturnToMenu();

  /// @brief Method ReturnToMenu, addr 0x1099f24, size 0x50, virtual true, abstract: false, final true
  inline void ReturnToMenu();

  /// @brief Method SetGameplaySceneReady, addr 0x10988e4, size 0x58, virtual true, abstract: false, final true
  inline void SetGameplaySceneReady(::GlobalNamespace::PlayerSpecificSettingsNetSerializable* playerSpecificSettings);

  /// @brief Method SetGameplaySceneSyncFinished, addr 0x1098700, size 0x68, virtual true, abstract: false, final true
  inline void SetGameplaySceneSyncFinished(::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* playersAtGameStartNetSerializable, ::StringW sessionGameId);

  /// @brief Method SetGameplaySongReady, addr 0x1098e70, size 0x50, virtual true, abstract: false, final true
  inline void SetGameplaySongReady();

  /// @brief Method SetPlayerDidConnectLate, addr 0x1098c84, size 0x70, virtual true, abstract: false, final true
  inline void SetPlayerDidConnectLate(::StringW usedId, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* playersAtGameStartNetSerializable, ::StringW sessionGameId);

  /// @brief Method SetSongStartTime, addr 0x1099208, size 0x58, virtual true, abstract: false, final true
  inline void SetSongStartTime(int64_t startTime);

  /// @brief Method SliderSpawned, addr 0x10997a4, size 0x68, virtual true, abstract: false, final true
  inline void SliderSpawned(float_t songTime, ::GlobalNamespace::SliderSpawnInfoNetSerializable* sliderSpawnInfoNetSerializable);

  constexpr ::GlobalNamespace::IMultiplayerSessionManager*& __cordl_internal_get__multiplayerSessionManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSessionManager*> const& __cordl_internal_get__multiplayerSessionManager() const;

  constexpr ::GlobalNamespace::RpcHandler_1<::GlobalNamespace::__GameplayRpcManager__RpcType>*& __cordl_internal_get__rpcHandler();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RpcHandler_1<::GlobalNamespace::__GameplayRpcManager__RpcType>*> const& __cordl_internal_get__rpcHandler() const;

  constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_getGameplaySceneReadyEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> const& __cordl_internal_get_getGameplaySceneReadyEvent() const;

  constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_getGameplaySongReadyEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> const& __cordl_internal_get_getGameplaySongReadyEvent() const;

  constexpr ::System::Action_2<::StringW, ::GlobalNamespace::MultiplayerLevelCompletionResults*>*& __cordl_internal_get_levelFinishedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::StringW, ::GlobalNamespace::MultiplayerLevelCompletionResults*>*> const& __cordl_internal_get_levelFinishedEvent() const;

  constexpr ::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteCutInfoNetSerializable*>*& __cordl_internal_get_noteWasCutEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteCutInfoNetSerializable*>*> const& __cordl_internal_get_noteWasCutEvent() const;

  constexpr ::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteMissInfoNetSerializable*>*& __cordl_internal_get_noteWasMissedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteMissInfoNetSerializable*>*> const&
  __cordl_internal_get_noteWasMissedEvent() const;

  constexpr ::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteSpawnInfoNetSerializable*>*& __cordl_internal_get_noteWasSpawnedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteSpawnInfoNetSerializable*>*> const&
  __cordl_internal_get_noteWasSpawnedEvent() const;

  constexpr ::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>*& __cordl_internal_get_obstacleWasSpawnedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>*> const&
  __cordl_internal_get_obstacleWasSpawnedEvent() const;

  constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_requestReturnToMenuEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> const& __cordl_internal_get_requestReturnToMenuEvent() const;

  constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_returnToMenuEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> const& __cordl_internal_get_returnToMenuEvent() const;

  constexpr ::System::Action_2<::StringW, ::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>*& __cordl_internal_get_setGameplaySceneReadyEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::StringW, ::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>*> const&
  __cordl_internal_get_setGameplaySceneReadyEvent() const;

  constexpr ::System::Action_3<::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>*& __cordl_internal_get_setGameplaySceneSyncFinishedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_3<::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>*> const&
  __cordl_internal_get_setGameplaySceneSyncFinishedEvent() const;

  constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_setGameplaySongReadyEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> const& __cordl_internal_get_setGameplaySongReadyEvent() const;

  constexpr ::System::Action_4<::StringW, ::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>*& __cordl_internal_get_setPlayerDidConnectLateEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_4<::StringW, ::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>*> const&
  __cordl_internal_get_setPlayerDidConnectLateEvent() const;

  constexpr ::System::Action_2<::StringW, int64_t>*& __cordl_internal_get_setSongStartTimeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::StringW, int64_t>*> const& __cordl_internal_get_setSongStartTimeEvent() const;

  constexpr ::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::SliderSpawnInfoNetSerializable*>*& __cordl_internal_get_sliderWasSpawnedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::SliderSpawnInfoNetSerializable*>*> const&
  __cordl_internal_get_sliderWasSpawnedEvent() const;

  constexpr void __cordl_internal_set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value);

  constexpr void __cordl_internal_set__rpcHandler(::GlobalNamespace::RpcHandler_1<::GlobalNamespace::__GameplayRpcManager__RpcType>* value);

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

  /// @brief Method .ctor, addr 0x1097df4, size 0x750, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager);

  /// @brief Method add_getGameplaySceneReadyEvent, addr 0x1098958, size 0xb0, virtual true, abstract: false, final true
  inline void add_getGameplaySceneReadyEvent(::System::Action_1<::StringW>* value);

  /// @brief Method add_getGameplaySongReadyEvent, addr 0x1098edc, size 0xb0, virtual true, abstract: false, final true
  inline void add_getGameplaySongReadyEvent(::System::Action_1<::StringW>* value);

  /// @brief Method add_levelFinishedEvent, addr 0x1099bf0, size 0xb0, virtual true, abstract: false, final true
  inline void add_levelFinishedEvent(::System::Action_2<::StringW, ::GlobalNamespace::MultiplayerLevelCompletionResults*>* value);

  /// @brief Method add_noteWasCutEvent, addr 0x1099828, size 0xb0, virtual true, abstract: false, final true
  inline void add_noteWasCutEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteCutInfoNetSerializable*>* value);

  /// @brief Method add_noteWasMissedEvent, addr 0x1099a0c, size 0xb0, virtual true, abstract: false, final true
  inline void add_noteWasMissedEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteMissInfoNetSerializable*>* value);

  /// @brief Method add_noteWasSpawnedEvent, addr 0x109927c, size 0xb0, virtual true, abstract: false, final true
  inline void add_noteWasSpawnedEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteSpawnInfoNetSerializable*>* value);

  /// @brief Method add_obstacleWasSpawnedEvent, addr 0x1099460, size 0xb0, virtual true, abstract: false, final true
  inline void add_obstacleWasSpawnedEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>* value);

  /// @brief Method add_requestReturnToMenuEvent, addr 0x1099f90, size 0xb0, virtual true, abstract: false, final true
  inline void add_requestReturnToMenuEvent(::System::Action_1<::StringW>* value);

  /// @brief Method add_returnToMenuEvent, addr 0x1099dc4, size 0xb0, virtual true, abstract: false, final true
  inline void add_returnToMenuEvent(::System::Action_1<::StringW>* value);

  /// @brief Method add_setGameplaySceneReadyEvent, addr 0x1098784, size 0xb0, virtual true, abstract: false, final true
  inline void add_setGameplaySceneReadyEvent(::System::Action_2<::StringW, ::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>* value);

  /// @brief Method add_setGameplaySceneSyncFinishedEvent, addr 0x10985a0, size 0xb0, virtual true, abstract: false, final true
  inline void add_setGameplaySceneSyncFinishedEvent(::System::Action_3<::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>* value);

  /// @brief Method add_setGameplaySongReadyEvent, addr 0x1098d10, size 0xb0, virtual true, abstract: false, final true
  inline void add_setGameplaySongReadyEvent(::System::Action_1<::StringW>* value);

  /// @brief Method add_setPlayerDidConnectLateEvent, addr 0x1098b24, size 0xb0, virtual true, abstract: false, final true
  inline void add_setPlayerDidConnectLateEvent(::System::Action_4<::StringW, ::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>* value);

  /// @brief Method add_setSongStartTimeEvent, addr 0x10990a8, size 0xb0, virtual true, abstract: false, final true
  inline void add_setSongStartTimeEvent(::System::Action_2<::StringW, int64_t>* value);

  /// @brief Method add_sliderWasSpawnedEvent, addr 0x1099644, size 0xb0, virtual true, abstract: false, final true
  inline void add_sliderWasSpawnedEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::SliderSpawnInfoNetSerializable*>* value);

  /// @brief Method get_enabled, addr 0x1097c6c, size 0xc0, virtual true, abstract: false, final true
  inline bool get_enabled();

  /// @brief Convert to "::GlobalNamespace::IGameplayRpcManager"
  constexpr ::GlobalNamespace::IGameplayRpcManager* i___GlobalNamespace__IGameplayRpcManager() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method remove_getGameplaySceneReadyEvent, addr 0x1098a08, size 0xb0, virtual true, abstract: false, final true
  inline void remove_getGameplaySceneReadyEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_getGameplaySongReadyEvent, addr 0x1098f8c, size 0xb0, virtual true, abstract: false, final true
  inline void remove_getGameplaySongReadyEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_levelFinishedEvent, addr 0x1099ca0, size 0xb0, virtual true, abstract: false, final true
  inline void remove_levelFinishedEvent(::System::Action_2<::StringW, ::GlobalNamespace::MultiplayerLevelCompletionResults*>* value);

  /// @brief Method remove_noteWasCutEvent, addr 0x10998d8, size 0xb0, virtual true, abstract: false, final true
  inline void remove_noteWasCutEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteCutInfoNetSerializable*>* value);

  /// @brief Method remove_noteWasMissedEvent, addr 0x1099abc, size 0xb0, virtual true, abstract: false, final true
  inline void remove_noteWasMissedEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteMissInfoNetSerializable*>* value);

  /// @brief Method remove_noteWasSpawnedEvent, addr 0x109932c, size 0xb0, virtual true, abstract: false, final true
  inline void remove_noteWasSpawnedEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteSpawnInfoNetSerializable*>* value);

  /// @brief Method remove_obstacleWasSpawnedEvent, addr 0x1099510, size 0xb0, virtual true, abstract: false, final true
  inline void remove_obstacleWasSpawnedEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>* value);

  /// @brief Method remove_requestReturnToMenuEvent, addr 0x109a040, size 0xb0, virtual true, abstract: false, final true
  inline void remove_requestReturnToMenuEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_returnToMenuEvent, addr 0x1099e74, size 0xb0, virtual true, abstract: false, final true
  inline void remove_returnToMenuEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_setGameplaySceneReadyEvent, addr 0x1098834, size 0xb0, virtual true, abstract: false, final true
  inline void remove_setGameplaySceneReadyEvent(::System::Action_2<::StringW, ::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>* value);

  /// @brief Method remove_setGameplaySceneSyncFinishedEvent, addr 0x1098650, size 0xb0, virtual true, abstract: false, final true
  inline void remove_setGameplaySceneSyncFinishedEvent(::System::Action_3<::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>* value);

  /// @brief Method remove_setGameplaySongReadyEvent, addr 0x1098dc0, size 0xb0, virtual true, abstract: false, final true
  inline void remove_setGameplaySongReadyEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_setPlayerDidConnectLateEvent, addr 0x1098bd4, size 0xb0, virtual true, abstract: false, final true
  inline void remove_setPlayerDidConnectLateEvent(::System::Action_4<::StringW, ::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>* value);

  /// @brief Method remove_setSongStartTimeEvent, addr 0x1099158, size 0xb0, virtual true, abstract: false, final true
  inline void remove_setSongStartTimeEvent(::System::Action_2<::StringW, int64_t>* value);

  /// @brief Method remove_sliderWasSpawnedEvent, addr 0x10996f4, size 0xb0, virtual true, abstract: false, final true
  inline void remove_sliderWasSpawnedEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::SliderSpawnInfoNetSerializable*>* value);

  /// @brief Method set_enabled, addr 0x1097d2c, size 0xc8, virtual true, abstract: false, final true
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

  /// @brief Field _multiplayerSessionManager, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IMultiplayerSessionManager* ____multiplayerSessionManager;

  /// @brief Field _rpcHandler, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::RpcHandler_1<::GlobalNamespace::__GameplayRpcManager__RpcType>* ____rpcHandler;

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

  /// @brief Field kGameplayState offset 0xffffffff size 0x8
  static constexpr ::ConstString kGameplayState{ u"in_gameplay" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameplayRpcManager, 0x98>, "Size mismatch!");

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

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameplayRpcManager__RpcType, "", "GameplayRpcManager/RpcType");
NEED_NO_BOX(::GlobalNamespace::GameplayRpcManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayRpcManager*, "", "GameplayRpcManager");
NEED_NO_BOX(::GlobalNamespace::__GameplayRpcManager__GetGameplaySceneReadyRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameplayRpcManager__GetGameplaySceneReadyRpc*, "", "GameplayRpcManager/GetGameplaySceneReadyRpc");
NEED_NO_BOX(::GlobalNamespace::__GameplayRpcManager__GetGameplaySongReadyRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameplayRpcManager__GetGameplaySongReadyRpc*, "", "GameplayRpcManager/GetGameplaySongReadyRpc");
NEED_NO_BOX(::GlobalNamespace::__GameplayRpcManager__LevelFinishedRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameplayRpcManager__LevelFinishedRpc*, "", "GameplayRpcManager/LevelFinishedRpc");
NEED_NO_BOX(::GlobalNamespace::__GameplayRpcManager__NoteCutRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameplayRpcManager__NoteCutRpc*, "", "GameplayRpcManager/NoteCutRpc");
NEED_NO_BOX(::GlobalNamespace::__GameplayRpcManager__NoteMissedRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameplayRpcManager__NoteMissedRpc*, "", "GameplayRpcManager/NoteMissedRpc");
NEED_NO_BOX(::GlobalNamespace::__GameplayRpcManager__NoteSpawnedRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameplayRpcManager__NoteSpawnedRpc*, "", "GameplayRpcManager/NoteSpawnedRpc");
NEED_NO_BOX(::GlobalNamespace::__GameplayRpcManager__ObstacleSpawnedRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameplayRpcManager__ObstacleSpawnedRpc*, "", "GameplayRpcManager/ObstacleSpawnedRpc");
NEED_NO_BOX(::GlobalNamespace::__GameplayRpcManager__RequestReturnToMenuRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameplayRpcManager__RequestReturnToMenuRpc*, "", "GameplayRpcManager/RequestReturnToMenuRpc");
NEED_NO_BOX(::GlobalNamespace::__GameplayRpcManager__ReturnToMenuRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameplayRpcManager__ReturnToMenuRpc*, "", "GameplayRpcManager/ReturnToMenuRpc");
NEED_NO_BOX(::GlobalNamespace::__GameplayRpcManager__SetGameplaySceneReadyRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameplayRpcManager__SetGameplaySceneReadyRpc*, "", "GameplayRpcManager/SetGameplaySceneReadyRpc");
NEED_NO_BOX(::GlobalNamespace::__GameplayRpcManager__SetGameplaySceneSyncFinishedRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameplayRpcManager__SetGameplaySceneSyncFinishedRpc*, "", "GameplayRpcManager/SetGameplaySceneSyncFinishedRpc");
NEED_NO_BOX(::GlobalNamespace::__GameplayRpcManager__SetGameplaySongReadyRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameplayRpcManager__SetGameplaySongReadyRpc*, "", "GameplayRpcManager/SetGameplaySongReadyRpc");
NEED_NO_BOX(::GlobalNamespace::__GameplayRpcManager__SetPlayerDidConnectLateRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameplayRpcManager__SetPlayerDidConnectLateRpc*, "", "GameplayRpcManager/SetPlayerDidConnectLateRpc");
NEED_NO_BOX(::GlobalNamespace::__GameplayRpcManager__SetSongStartTimeRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameplayRpcManager__SetSongStartTimeRpc*, "", "GameplayRpcManager/SetSongStartTimeRpc");
NEED_NO_BOX(::GlobalNamespace::__GameplayRpcManager__SliderSpawnedRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameplayRpcManager__SliderSpawnedRpc*, "", "GameplayRpcManager/SliderSpawnedRpc");
