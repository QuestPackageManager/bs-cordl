#pragma once
// IWYU pragma private; include "GlobalNamespace/NodePoseSyncStateDeltaNetSerializable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IPoolablePacket_def.hpp"
#include "GlobalNamespace/zzzz__ISyncStateDeltaSerializable_1_def.hpp"
#include "GlobalNamespace/zzzz__NodePoseSyncState_def.hpp"
#include "GlobalNamespace/zzzz__SyncStateId_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NodePoseSyncStateDeltaNetSerializable)
namespace GlobalNamespace {
template <typename T> class IPacketPool_1;
}
namespace GlobalNamespace {
struct NodePoseSyncState;
}
namespace GlobalNamespace {
struct SyncStateId;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
// Forward declare root types
namespace GlobalNamespace {
class NodePoseSyncStateDeltaNetSerializable;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable);
// Dependencies IPoolablePacket, ISyncStateDeltaSerializable`1<T>, LiteNetLib.Utils.INetSerializable, NodePoseSyncState, SyncStateId, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: NodePoseSyncStateDeltaNetSerializable
class CORDL_TYPE NodePoseSyncStateDeltaNetSerializable : public ::System::Object {
public:
  // Declarations
  /// @brief Field <baseId>k__BackingField, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get__baseId_k__BackingField, put = __cordl_internal_set__baseId_k__BackingField)) ::GlobalNamespace::SyncStateId _baseId_k__BackingField;

  /// @brief Field _delta, offset 0x10, size 0x48
  __declspec(property(get = __cordl_internal_get__delta, put = __cordl_internal_set__delta)) ::GlobalNamespace::NodePoseSyncState _delta;

  /// @brief Field <timeOffsetMs>k__BackingField, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get__timeOffsetMs_k__BackingField, put = __cordl_internal_set__timeOffsetMs_k__BackingField)) int32_t _timeOffsetMs_k__BackingField;

  __declspec(property(get = get_baseId, put = set_baseId)) ::GlobalNamespace::SyncStateId baseId;

  __declspec(property(get = get_delta, put = set_delta)) ::GlobalNamespace::NodePoseSyncState delta;

  __declspec(property(get = get_timeOffsetMs, put = set_timeOffsetMs)) int32_t timeOffsetMs;

  /// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
  constexpr operator ::GlobalNamespace::IPoolablePacket*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::ISyncStateDeltaSerializable_1<::GlobalNamespace::NodePoseSyncState>"
  constexpr operator ::GlobalNamespace::ISyncStateDeltaSerializable_1<::GlobalNamespace::NodePoseSyncState>*() noexcept;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  /// @brief Method Deserialize, addr 0x22ee444, size 0x74, virtual true, abstract: false, final true
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  static inline ::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable* New_ctor();

  /// @brief Method Release, addr 0x22ee4e4, size 0xac, virtual true, abstract: false, final true
  inline void Release();

  /// @brief Method Serialize, addr 0x22ee37c, size 0x94, virtual true, abstract: false, final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  constexpr ::GlobalNamespace::SyncStateId const& __cordl_internal_get__baseId_k__BackingField() const;

  constexpr ::GlobalNamespace::SyncStateId& __cordl_internal_get__baseId_k__BackingField();

  constexpr ::GlobalNamespace::NodePoseSyncState const& __cordl_internal_get__delta() const;

  constexpr ::GlobalNamespace::NodePoseSyncState& __cordl_internal_get__delta();

  constexpr int32_t const& __cordl_internal_get__timeOffsetMs_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__timeOffsetMs_k__BackingField();

  constexpr void __cordl_internal_set__baseId_k__BackingField(::GlobalNamespace::SyncStateId value);

  constexpr void __cordl_internal_set__delta(::GlobalNamespace::NodePoseSyncState value);

  constexpr void __cordl_internal_set__timeOffsetMs_k__BackingField(int32_t value);

  /// @brief Method .ctor, addr 0x22ee590, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_baseId, addr 0x22ee334, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::SyncStateId get_baseId();

  /// @brief Method get_delta, addr 0x22ee354, size 0x10, virtual true, abstract: false, final true
  inline ::GlobalNamespace::NodePoseSyncState get_delta();

  /// @brief Method get_pool, addr 0x22ee2f4, size 0x40, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::IPacketPool_1<::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable*>* get_pool();

  /// @brief Method get_timeOffsetMs, addr 0x22ee344, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_timeOffsetMs();

  /// @brief Convert to "::GlobalNamespace::IPoolablePacket"
  constexpr ::GlobalNamespace::IPoolablePacket* i___GlobalNamespace__IPoolablePacket() noexcept;

  /// @brief Convert to "::GlobalNamespace::ISyncStateDeltaSerializable_1<::GlobalNamespace::NodePoseSyncState>"
  constexpr ::GlobalNamespace::ISyncStateDeltaSerializable_1<::GlobalNamespace::NodePoseSyncState>* i___GlobalNamespace__ISyncStateDeltaSerializable_1___GlobalNamespace__NodePoseSyncState_() noexcept;

  /// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
  constexpr ::LiteNetLib::Utils::INetSerializable* i___LiteNetLib__Utils__INetSerializable() noexcept;

  /// @brief Method set_baseId, addr 0x22ee33c, size 0x8, virtual true, abstract: false, final true
  inline void set_baseId(::GlobalNamespace::SyncStateId value);

  /// @brief Method set_delta, addr 0x22ee364, size 0x18, virtual true, abstract: false, final true
  inline void set_delta(::GlobalNamespace::NodePoseSyncState value);

  /// @brief Method set_timeOffsetMs, addr 0x22ee34c, size 0x8, virtual true, abstract: false, final true
  inline void set_timeOffsetMs(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NodePoseSyncStateDeltaNetSerializable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NodePoseSyncStateDeltaNetSerializable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NodePoseSyncStateDeltaNetSerializable(NodePoseSyncStateDeltaNetSerializable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NodePoseSyncStateDeltaNetSerializable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NodePoseSyncStateDeltaNetSerializable(NodePoseSyncStateDeltaNetSerializable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14985 };

  /// @brief Field _delta, offset: 0x10, size: 0x48, def value: None
  ::GlobalNamespace::NodePoseSyncState ____delta;

  /// @brief Field <baseId>k__BackingField, offset: 0x58, size: 0x1, def value: None
  ::GlobalNamespace::SyncStateId ____baseId_k__BackingField;

  /// @brief Field <timeOffsetMs>k__BackingField, offset: 0x5c, size: 0x4, def value: None
  int32_t ____timeOffsetMs_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable, ____delta) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable, ____baseId_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable, ____timeOffsetMs_k__BackingField) == 0x5c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable, 0x60>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable*, "", "NodePoseSyncStateDeltaNetSerializable");
