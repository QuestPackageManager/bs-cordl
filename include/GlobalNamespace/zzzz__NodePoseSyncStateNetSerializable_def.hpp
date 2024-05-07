#pragma once
// IWYU pragma private; include "GlobalNamespace/NodePoseSyncStateNetSerializable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NodePoseSyncState_def.hpp"
#include "GlobalNamespace/zzzz__SyncStateId_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NodePoseSyncStateNetSerializable)
namespace GlobalNamespace {
class IPoolablePacket;
}
namespace GlobalNamespace {
template <typename T> class ISyncStateSerializable_1;
}
namespace GlobalNamespace {
struct NodePoseSyncState;
}
namespace GlobalNamespace {
template <typename T> class PacketPool_1;
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
class NodePoseSyncStateNetSerializable;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NodePoseSyncStateNetSerializable);
// Type: ::NodePoseSyncStateNetSerializable
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::NodePoseSyncStateNetSerializable*
class CORDL_TYPE NodePoseSyncStateNetSerializable : public ::System::Object {
public:
  // Declarations
  /// @brief Field <id>k__BackingField, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get__id_k__BackingField, put = __cordl_internal_set__id_k__BackingField))::GlobalNamespace::SyncStateId _id_k__BackingField;

  /// @brief Field _state, offset 0x10, size 0x48
  __declspec(property(get = __cordl_internal_get__state, put = __cordl_internal_set__state))::GlobalNamespace::NodePoseSyncState _state;

  /// @brief Field <time>k__BackingField, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__time_k__BackingField, put = __cordl_internal_set__time_k__BackingField)) int64_t _time_k__BackingField;

  __declspec(property(get = get_id, put = set_id))::GlobalNamespace::SyncStateId id;

  __declspec(property(get = get_state, put = set_state))::GlobalNamespace::NodePoseSyncState state;

  __declspec(property(get = get_time, put = set_time)) int64_t time;

  /// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
  constexpr operator ::GlobalNamespace::IPoolablePacket*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::ISyncStateSerializable_1<::GlobalNamespace::NodePoseSyncState>"
  constexpr operator ::GlobalNamespace::ISyncStateSerializable_1<::GlobalNamespace::NodePoseSyncState>*() noexcept;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  /// @brief Method Deserialize, addr 0x10b86dc, size 0x50, virtual true, abstract: false, final true
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  static inline ::GlobalNamespace::NodePoseSyncStateNetSerializable* New_ctor();

  /// @brief Method Release, addr 0x10b874c, size 0x54, virtual true, abstract: false, final true
  inline void Release();

  /// @brief Method Serialize, addr 0x10b866c, size 0x4c, virtual true, abstract: false, final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  constexpr ::GlobalNamespace::SyncStateId const& __cordl_internal_get__id_k__BackingField() const;

  constexpr ::GlobalNamespace::SyncStateId& __cordl_internal_get__id_k__BackingField();

  constexpr ::GlobalNamespace::NodePoseSyncState const& __cordl_internal_get__state() const;

  constexpr ::GlobalNamespace::NodePoseSyncState& __cordl_internal_get__state();

  constexpr int64_t const& __cordl_internal_get__time_k__BackingField() const;

  constexpr int64_t& __cordl_internal_get__time_k__BackingField();

  constexpr void __cordl_internal_set__id_k__BackingField(::GlobalNamespace::SyncStateId value);

  constexpr void __cordl_internal_set__state(::GlobalNamespace::NodePoseSyncState value);

  constexpr void __cordl_internal_set__time_k__BackingField(int64_t value);

  /// @brief Method .ctor, addr 0x10b87a0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_id, addr 0x10b8624, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::SyncStateId get_id();

  /// @brief Method get_pool, addr 0x10b85e4, size 0x40, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::PacketPool_1<::GlobalNamespace::NodePoseSyncStateNetSerializable*>* get_pool();

  /// @brief Method get_state, addr 0x10b8644, size 0x10, virtual true, abstract: false, final true
  inline ::GlobalNamespace::NodePoseSyncState get_state();

  /// @brief Method get_time, addr 0x10b8634, size 0x8, virtual true, abstract: false, final true
  inline int64_t get_time();

  /// @brief Convert to "::GlobalNamespace::IPoolablePacket"
  constexpr ::GlobalNamespace::IPoolablePacket* i___GlobalNamespace__IPoolablePacket() noexcept;

  /// @brief Convert to "::GlobalNamespace::ISyncStateSerializable_1<::GlobalNamespace::NodePoseSyncState>"
  constexpr ::GlobalNamespace::ISyncStateSerializable_1<::GlobalNamespace::NodePoseSyncState>* i___GlobalNamespace__ISyncStateSerializable_1___GlobalNamespace__NodePoseSyncState_() noexcept;

  /// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
  constexpr ::LiteNetLib::Utils::INetSerializable* i___LiteNetLib__Utils__INetSerializable() noexcept;

  /// @brief Method set_id, addr 0x10b862c, size 0x8, virtual true, abstract: false, final true
  inline void set_id(::GlobalNamespace::SyncStateId value);

  /// @brief Method set_state, addr 0x10b8654, size 0x18, virtual true, abstract: false, final true
  inline void set_state(::GlobalNamespace::NodePoseSyncState value);

  /// @brief Method set_time, addr 0x10b863c, size 0x8, virtual true, abstract: false, final true
  inline void set_time(int64_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NodePoseSyncStateNetSerializable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NodePoseSyncStateNetSerializable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NodePoseSyncStateNetSerializable(NodePoseSyncStateNetSerializable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NodePoseSyncStateNetSerializable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NodePoseSyncStateNetSerializable(NodePoseSyncStateNetSerializable const&) = delete;

  /// @brief Field _state, offset: 0x10, size: 0x48, def value: None
  ::GlobalNamespace::NodePoseSyncState ____state;

  /// @brief Field <id>k__BackingField, offset: 0x58, size: 0x1, def value: None
  ::GlobalNamespace::SyncStateId ____id_k__BackingField;

  /// @brief Field <time>k__BackingField, offset: 0x60, size: 0x8, def value: None
  int64_t ____time_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NodePoseSyncStateNetSerializable, 0x68>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::NodePoseSyncStateNetSerializable, ____state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NodePoseSyncStateNetSerializable, ____id_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NodePoseSyncStateNetSerializable, ____time_k__BackingField) == 0x60, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NodePoseSyncStateNetSerializable);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NodePoseSyncStateNetSerializable*, "", "NodePoseSyncStateNetSerializable");
