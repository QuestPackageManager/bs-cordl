#pragma once
// IWYU pragma private; include "GlobalNamespace/ScoreSyncStateManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IScoreSyncStateManager_5_def.hpp"
#include "GlobalNamespace/zzzz__IScoreSyncStateManager_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerSyncStateManager_5_def.hpp"
#include "GlobalNamespace/zzzz__StandardScoreSyncState_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ScoreSyncStateManager)
namespace GlobalNamespace {
template <typename T> class IPacketPool_1;
}
namespace GlobalNamespace {
struct MultiplayerSessionManager_MessageType;
}
namespace GlobalNamespace {
class StandardScoreSyncStateDeltaNetSerializable;
}
namespace GlobalNamespace {
class StandardScoreSyncStateNetSerializable;
}
// Forward declare root types
namespace GlobalNamespace {
class ScoreSyncStateManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ScoreSyncStateManager);
// Dependencies IScoreSyncStateManager, IScoreSyncStateManager`5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>, MultiplayerSyncStateManager`5<TStateTable, TType, TState,
// TSerializable, TDeltaSerializable>, StandardScoreSyncState, StandardScoreSyncState::Score
namespace GlobalNamespace {
// Is value type: false
// CS Name: ScoreSyncStateManager
class CORDL_TYPE ScoreSyncStateManager
    : public ::GlobalNamespace::MultiplayerSyncStateManager_5<::GlobalNamespace::StandardScoreSyncState, ::GlobalNamespace::StandardScoreSyncState_Score, int32_t,
                                                              ::GlobalNamespace::StandardScoreSyncStateNetSerializable*, ::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable*> {
public:
  // Declarations
  __declspec(property(get = get_deltaMessageType)) ::GlobalNamespace::MultiplayerSessionManager_MessageType deltaMessageType;

  __declspec(property(get = get_deltaSerializablePool)) ::GlobalNamespace::IPacketPool_1<::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable*>* deltaSerializablePool;

  __declspec(property(get = get_deltaUpdateFrequencyMs)) int64_t deltaUpdateFrequencyMs;

  __declspec(property(get = get_fullStateUpdateFrequencyMs)) int64_t fullStateUpdateFrequencyMs;

  __declspec(property(get = get_localBufferSize)) int32_t localBufferSize;

  __declspec(property(get = get_messageType)) ::GlobalNamespace::MultiplayerSessionManager_MessageType messageType;

  __declspec(property(get = get_remoteBufferSize)) int32_t remoteBufferSize;

  __declspec(property(get = get_serializablePool)) ::GlobalNamespace::IPacketPool_1<::GlobalNamespace::StandardScoreSyncStateNetSerializable*>* serializablePool;

  /// @brief Convert operator to "::GlobalNamespace::IScoreSyncStateManager"
  constexpr operator ::GlobalNamespace::IScoreSyncStateManager*() noexcept;

  /// @brief Convert operator to
  /// "::GlobalNamespace::IScoreSyncStateManager_5<::GlobalNamespace::StandardScoreSyncState,::GlobalNamespace::StandardScoreSyncState_Score,int32_t,::GlobalNamespace::StandardScoreSyncStateNetSerializable*,::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable*>"
  constexpr operator ::GlobalNamespace::IScoreSyncStateManager_5<::GlobalNamespace::StandardScoreSyncState, ::GlobalNamespace::StandardScoreSyncState_Score, int32_t,
                                                                 ::GlobalNamespace::StandardScoreSyncStateNetSerializable*, ::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable*>*() noexcept;

  /// @brief Method Interpolate, addr 0x3e72e0c, size 0xfc, virtual true, abstract: false, final false
  inline int32_t Interpolate(int32_t prev, int64_t prevTime, int32_t curr, int64_t currTime, int64_t time);

  static inline ::GlobalNamespace::ScoreSyncStateManager* New_ctor();

  /// @brief Method .ctor, addr 0x3e72f08, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_deltaMessageType, addr 0x3e72e04, size 0x8, virtual true, abstract: false, final false
  inline ::GlobalNamespace::MultiplayerSessionManager_MessageType get_deltaMessageType();

  /// @brief Method get_deltaSerializablePool, addr 0x3e72df4, size 0x8, virtual true, abstract: false, final false
  inline ::GlobalNamespace::IPacketPool_1<::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable*>* get_deltaSerializablePool();

  /// @brief Method get_deltaUpdateFrequencyMs, addr 0x3e72dcc, size 0x8, virtual true, abstract: false, final false
  inline int64_t get_deltaUpdateFrequencyMs();

  /// @brief Method get_fullStateUpdateFrequencyMs, addr 0x3e72dd4, size 0x8, virtual true, abstract: false, final false
  inline int64_t get_fullStateUpdateFrequencyMs();

  /// @brief Method get_localBufferSize, addr 0x3e72ddc, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_localBufferSize();

  /// @brief Method get_messageType, addr 0x3e72dfc, size 0x8, virtual true, abstract: false, final false
  inline ::GlobalNamespace::MultiplayerSessionManager_MessageType get_messageType();

  /// @brief Method get_remoteBufferSize, addr 0x3e72de4, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_remoteBufferSize();

  /// @brief Method get_serializablePool, addr 0x3e72dec, size 0x8, virtual true, abstract: false, final false
  inline ::GlobalNamespace::IPacketPool_1<::GlobalNamespace::StandardScoreSyncStateNetSerializable*>* get_serializablePool();

  /// @brief Convert to "::GlobalNamespace::IScoreSyncStateManager"
  constexpr ::GlobalNamespace::IScoreSyncStateManager* i___GlobalNamespace__IScoreSyncStateManager() noexcept;

  /// @brief Convert to
  /// "::GlobalNamespace::IScoreSyncStateManager_5<::GlobalNamespace::StandardScoreSyncState,::GlobalNamespace::StandardScoreSyncState_Score,int32_t,::GlobalNamespace::StandardScoreSyncStateNetSerializable*,::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable*>"
  constexpr ::GlobalNamespace::IScoreSyncStateManager_5<::GlobalNamespace::StandardScoreSyncState, ::GlobalNamespace::StandardScoreSyncState_Score, int32_t,
                                                        ::GlobalNamespace::StandardScoreSyncStateNetSerializable*, ::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable*>*
  i___GlobalNamespace__IScoreSyncStateManager_5___GlobalNamespace__StandardScoreSyncState___GlobalNamespace__StandardScoreSyncState_Score_int32_t___GlobalNamespace__StandardScoreSyncStateNetSerializable____GlobalNamespace__StandardScoreSyncStateDeltaNetSerializable__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScoreSyncStateManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScoreSyncStateManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScoreSyncStateManager(ScoreSyncStateManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScoreSyncStateManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScoreSyncStateManager(ScoreSyncStateManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17379 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ScoreSyncStateManager, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ScoreSyncStateManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ScoreSyncStateManager*, "", "ScoreSyncStateManager");
