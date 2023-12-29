#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NodePoseSyncState_def.hpp"
#include "GlobalNamespace/zzzz__SyncStateId_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(NodePoseSyncStateNetSerializable)
namespace LiteNetLib::Utils {
class INetSerializable;
}
namespace GlobalNamespace {
struct SyncStateId;
}
namespace GlobalNamespace {
class IPoolablePacket;
}
namespace GlobalNamespace {
template <typename T> class ISyncStateSerializable_1;
}
namespace GlobalNamespace {
template <typename T> class PacketPool_1;
}
namespace GlobalNamespace {
struct NodePoseSyncState;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
// Forward declare root types
namespace GlobalNamespace {
class NodePoseSyncStateNetSerializable;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NodePoseSyncStateNetSerializable);
// Type: ::NodePoseSyncStateNetSerializable
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12894)), TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(12909))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12896))
// CS Name: ::NodePoseSyncStateNetSerializable*
class CORDL_TYPE NodePoseSyncStateNetSerializable : public ::System::Object {
public:
  // Declarations
  /// @brief Field _state, offset 0x10, size 0x48
  __declspec(property(get = __get__state, put = __set__state))::GlobalNamespace::NodePoseSyncState _state;

  /// @brief Field <id>k__BackingField, offset 0x58, size 0x1
  __declspec(property(get = __get__id_k__BackingField, put = __set__id_k__BackingField))::GlobalNamespace::SyncStateId _id_k__BackingField;

  /// @brief Field <time>k__BackingField, offset 0x5c, size 0x4
  __declspec(property(get = __get__time_k__BackingField, put = __set__time_k__BackingField)) float_t _time_k__BackingField;

  __declspec(property(get = get_id, put = set_id))::GlobalNamespace::SyncStateId id;

  __declspec(property(get = get_time, put = set_time)) float_t time;

  __declspec(property(get = get_state, put = set_state))::GlobalNamespace::NodePoseSyncState state;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
  constexpr operator ::GlobalNamespace::IPoolablePacket*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::ISyncStateSerializable_1<::GlobalNamespace::NodePoseSyncState>"
  constexpr operator ::GlobalNamespace::ISyncStateSerializable_1<::GlobalNamespace::NodePoseSyncState>*() noexcept;

  constexpr ::GlobalNamespace::NodePoseSyncState& __get__state();

  constexpr ::GlobalNamespace::NodePoseSyncState const& __get__state() const;

  constexpr void __set__state(::GlobalNamespace::NodePoseSyncState value);

  constexpr ::GlobalNamespace::SyncStateId& __get__id_k__BackingField();

  constexpr ::GlobalNamespace::SyncStateId const& __get__id_k__BackingField() const;

  constexpr void __set__id_k__BackingField(::GlobalNamespace::SyncStateId value);

  constexpr float_t& __get__time_k__BackingField();

  constexpr float_t const& __get__time_k__BackingField() const;

  constexpr void __set__time_k__BackingField(float_t value);

  /// @brief Method get_pool addr 0xdd4da8 size 0x40 virtual false final false
  static inline ::GlobalNamespace::PacketPool_1<::GlobalNamespace::NodePoseSyncStateNetSerializable*>* get_pool();

  /// @brief Method get_id addr 0xdd4de8 size 0x8 virtual true final true
  inline ::GlobalNamespace::SyncStateId get_id();

  /// @brief Method set_id addr 0xdd4df0 size 0x8 virtual true final true
  inline void set_id(::GlobalNamespace::SyncStateId value);

  /// @brief Method get_time addr 0xdd4df8 size 0x8 virtual true final true
  inline float_t get_time();

  /// @brief Method set_time addr 0xdd4e00 size 0x8 virtual true final true
  inline void set_time(float_t value);

  /// @brief Method get_state addr 0xdd4e08 size 0x10 virtual true final true
  inline ::GlobalNamespace::NodePoseSyncState get_state();

  /// @brief Method set_state addr 0xdd4e18 size 0x18 virtual true final true
  inline void set_state(::GlobalNamespace::NodePoseSyncState value);

  /// @brief Method Serialize addr 0xdd4e30 size 0x4c virtual true final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method Deserialize addr 0xdd4ea0 size 0x4c virtual true final true
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Release addr 0xdd4f0c size 0x54 virtual true final true
  inline void Release();

  static inline ::GlobalNamespace::NodePoseSyncStateNetSerializable* New_ctor();

  /// @brief Method .ctor addr 0xdd4f60 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "NodePoseSyncStateNetSerializable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NodePoseSyncStateNetSerializable(NodePoseSyncStateNetSerializable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NodePoseSyncStateNetSerializable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NodePoseSyncStateNetSerializable(NodePoseSyncStateNetSerializable const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NodePoseSyncStateNetSerializable();

public:
  /// @brief Field _state, offset: 0x10, size: 0x48, def value: None
  ::GlobalNamespace::NodePoseSyncState ____state;

  /// @brief Field <id>k__BackingField, offset: 0x58, size: 0x1, def value: None
  ::GlobalNamespace::SyncStateId ____id_k__BackingField;

  /// @brief Field <time>k__BackingField, offset: 0x5c, size: 0x4, def value: None
  float_t ____time_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NodePoseSyncStateNetSerializable, 0x60>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::NodePoseSyncStateNetSerializable, ____state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NodePoseSyncStateNetSerializable, ____id_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NodePoseSyncStateNetSerializable, ____time_k__BackingField) == 0x5c, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NodePoseSyncStateNetSerializable);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NodePoseSyncStateNetSerializable*, "", "NodePoseSyncStateNetSerializable");
