#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NodePoseSyncState_def.hpp"
#include "GlobalNamespace/zzzz__SyncStateId_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NodePoseSyncStateDeltaNetSerializable)
namespace GlobalNamespace {
struct SyncStateId;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace GlobalNamespace {
class IPoolablePacket;
}
namespace GlobalNamespace {
template <typename T> class ISyncStateDeltaSerializable_1;
}
namespace GlobalNamespace {
template <typename T> class IPacketPool_1;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace LiteNetLib::Utils {
class INetSerializable;
}
namespace GlobalNamespace {
struct NodePoseSyncState;
}
// Forward declare root types
namespace GlobalNamespace {
class NodePoseSyncStateDeltaNetSerializable;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable);
// Type: ::NodePoseSyncStateDeltaNetSerializable
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12909)), TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(12894))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12895))
// CS Name: ::NodePoseSyncStateDeltaNetSerializable*
class CORDL_TYPE NodePoseSyncStateDeltaNetSerializable : public ::System::Object {
public:
  // Declarations
  /// @brief Field _delta, offset 0x10, size 0x48
  __declspec(property(get = __get__delta, put = __set__delta))::GlobalNamespace::NodePoseSyncState _delta;

  /// @brief Field <baseId>k__BackingField, offset 0x58, size 0x1
  __declspec(property(get = __get__baseId_k__BackingField, put = __set__baseId_k__BackingField))::GlobalNamespace::SyncStateId _baseId_k__BackingField;

  /// @brief Field <timeOffsetMs>k__BackingField, offset 0x5c, size 0x4
  __declspec(property(get = __get__timeOffsetMs_k__BackingField, put = __set__timeOffsetMs_k__BackingField)) int32_t _timeOffsetMs_k__BackingField;

  __declspec(property(get = get_baseId, put = set_baseId))::GlobalNamespace::SyncStateId baseId;

  __declspec(property(get = get_timeOffsetMs, put = set_timeOffsetMs)) int32_t timeOffsetMs;

  __declspec(property(get = get_delta, put = set_delta))::GlobalNamespace::NodePoseSyncState delta;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
  constexpr operator ::GlobalNamespace::IPoolablePacket*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::ISyncStateDeltaSerializable_1<::GlobalNamespace::NodePoseSyncState>"
  constexpr operator ::GlobalNamespace::ISyncStateDeltaSerializable_1<::GlobalNamespace::NodePoseSyncState>*() noexcept;

  constexpr ::GlobalNamespace::NodePoseSyncState& __get__delta();

  constexpr ::GlobalNamespace::NodePoseSyncState const& __get__delta() const;

  constexpr void __set__delta(::GlobalNamespace::NodePoseSyncState value);

  constexpr ::GlobalNamespace::SyncStateId& __get__baseId_k__BackingField();

  constexpr ::GlobalNamespace::SyncStateId const& __get__baseId_k__BackingField() const;

  constexpr void __set__baseId_k__BackingField(::GlobalNamespace::SyncStateId value);

  constexpr int32_t& __get__timeOffsetMs_k__BackingField();

  constexpr int32_t const& __get__timeOffsetMs_k__BackingField() const;

  constexpr void __set__timeOffsetMs_k__BackingField(int32_t value);

  /// @brief Method get_pool addr 0xdd4b0c size 0x40 virtual false final false
  static inline ::GlobalNamespace::IPacketPool_1<::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable*>* get_pool();

  /// @brief Method get_baseId addr 0xdd4b4c size 0x8 virtual true final true
  inline ::GlobalNamespace::SyncStateId get_baseId();

  /// @brief Method set_baseId addr 0xdd4b54 size 0x8 virtual true final true
  inline void set_baseId(::GlobalNamespace::SyncStateId value);

  /// @brief Method get_timeOffsetMs addr 0xdd4b5c size 0x8 virtual true final true
  inline int32_t get_timeOffsetMs();

  /// @brief Method set_timeOffsetMs addr 0xdd4b64 size 0x8 virtual true final true
  inline void set_timeOffsetMs(int32_t value);

  /// @brief Method get_delta addr 0xdd4b6c size 0x10 virtual true final true
  inline ::GlobalNamespace::NodePoseSyncState get_delta();

  /// @brief Method set_delta addr 0xdd4b7c size 0x18 virtual true final true
  inline void set_delta(::GlobalNamespace::NodePoseSyncState value);

  /// @brief Method Serialize addr 0xdd4b94 size 0x98 virtual true final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method Deserialize addr 0xdd4c60 size 0x68 virtual true final true
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Release addr 0xdd4cf4 size 0xac virtual true final true
  inline void Release();

  static inline ::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable* New_ctor();

  /// @brief Method .ctor addr 0xdd4da0 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "NodePoseSyncStateDeltaNetSerializable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NodePoseSyncStateDeltaNetSerializable(NodePoseSyncStateDeltaNetSerializable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NodePoseSyncStateDeltaNetSerializable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NodePoseSyncStateDeltaNetSerializable(NodePoseSyncStateDeltaNetSerializable const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NodePoseSyncStateDeltaNetSerializable();

public:
  /// @brief Field _delta, offset: 0x10, size: 0x48, def value: None
  ::GlobalNamespace::NodePoseSyncState ____delta;

  /// @brief Field <baseId>k__BackingField, offset: 0x58, size: 0x1, def value: None
  ::GlobalNamespace::SyncStateId ____baseId_k__BackingField;

  /// @brief Field <timeOffsetMs>k__BackingField, offset: 0x5c, size: 0x4, def value: None
  int32_t ____timeOffsetMs_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable, 0x60>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable, ____delta) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable, ____baseId_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable, ____timeOffsetMs_k__BackingField) == 0x5c, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable*, "", "NodePoseSyncStateDeltaNetSerializable");
