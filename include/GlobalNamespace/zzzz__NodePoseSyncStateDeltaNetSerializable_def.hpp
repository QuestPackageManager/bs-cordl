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
template <typename T> class IPacketPool_1;
}
namespace GlobalNamespace {
class IPoolablePacket;
}
namespace GlobalNamespace {
template <typename T> class ISyncStateDeltaSerializable_1;
}
namespace GlobalNamespace {
struct NodePoseSyncState;
}
namespace GlobalNamespace {
struct SyncStateId;
}
namespace LiteNetLib::Utils {
class INetSerializable;
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
// Type: ::NodePoseSyncStateDeltaNetSerializable
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(12973)), TypeDefinitionIndex(TypeDefinitionIndex(12988))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12974))
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

  /// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
  constexpr ::LiteNetLib::Utils::INetSerializable* i___LiteNetLib__Utils__INetSerializable() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
  constexpr operator ::GlobalNamespace::IPoolablePacket*() noexcept;

  /// @brief Convert to "::GlobalNamespace::IPoolablePacket"
  constexpr ::GlobalNamespace::IPoolablePacket* i___GlobalNamespace__IPoolablePacket() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::ISyncStateDeltaSerializable_1<::GlobalNamespace::NodePoseSyncState>"
  constexpr operator ::GlobalNamespace::ISyncStateDeltaSerializable_1<::GlobalNamespace::NodePoseSyncState>*() noexcept;

  /// @brief Convert to "::GlobalNamespace::ISyncStateDeltaSerializable_1<::GlobalNamespace::NodePoseSyncState>"
  constexpr ::GlobalNamespace::ISyncStateDeltaSerializable_1<::GlobalNamespace::NodePoseSyncState>* i___GlobalNamespace__ISyncStateDeltaSerializable_1___GlobalNamespace__NodePoseSyncState_() noexcept;

  constexpr ::GlobalNamespace::NodePoseSyncState& __get__delta();

  constexpr ::GlobalNamespace::NodePoseSyncState const& __get__delta() const;

  constexpr void __set__delta(::GlobalNamespace::NodePoseSyncState value);

  constexpr ::GlobalNamespace::SyncStateId& __get__baseId_k__BackingField();

  constexpr ::GlobalNamespace::SyncStateId const& __get__baseId_k__BackingField() const;

  constexpr void __set__baseId_k__BackingField(::GlobalNamespace::SyncStateId value);

  constexpr int32_t& __get__timeOffsetMs_k__BackingField();

  constexpr int32_t const& __get__timeOffsetMs_k__BackingField() const;

  constexpr void __set__timeOffsetMs_k__BackingField(int32_t value);

  /// @brief Method get_pool, addr 0xe59b90, size 0x40, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::IPacketPool_1<::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable*>* get_pool();

  /// @brief Method get_baseId, addr 0xe59bd0, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::SyncStateId get_baseId();

  /// @brief Method set_baseId, addr 0xe59bd8, size 0x8, virtual true, abstract: false, final true
  inline void set_baseId(::GlobalNamespace::SyncStateId value);

  /// @brief Method get_timeOffsetMs, addr 0xe59be0, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_timeOffsetMs();

  /// @brief Method set_timeOffsetMs, addr 0xe59be8, size 0x8, virtual true, abstract: false, final true
  inline void set_timeOffsetMs(int32_t value);

  /// @brief Method get_delta, addr 0xe59bf0, size 0x10, virtual true, abstract: false, final true
  inline ::GlobalNamespace::NodePoseSyncState get_delta();

  /// @brief Method set_delta, addr 0xe59c00, size 0x18, virtual true, abstract: false, final true
  inline void set_delta(::GlobalNamespace::NodePoseSyncState value);

  /// @brief Method Serialize, addr 0xe59c18, size 0x98, virtual true, abstract: false, final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method Deserialize, addr 0xe59ce4, size 0x68, virtual true, abstract: false, final true
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Release, addr 0xe59d78, size 0xac, virtual true, abstract: false, final true
  inline void Release();

  static inline ::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable* New_ctor();

  /// @brief Method .ctor, addr 0xe59e24, size 0x8, virtual false, abstract: false, final false
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
