#pragma once
// IWYU pragma private; include "GlobalNamespace/StandardScoreSyncStateNetSerializable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IPoolablePacket_def.hpp"
#include "GlobalNamespace/zzzz__ISyncStateSerializable_1_def.hpp"
#include "GlobalNamespace/zzzz__StandardScoreSyncState_def.hpp"
#include "GlobalNamespace/zzzz__SyncStateId_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StandardScoreSyncStateNetSerializable)
namespace GlobalNamespace {
template <typename T> class PacketPool_1;
}
namespace GlobalNamespace {
struct StandardScoreSyncState;
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
class StandardScoreSyncStateNetSerializable;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::StandardScoreSyncStateNetSerializable);
// Dependencies IPoolablePacket, ISyncStateSerializable`1<T>, LiteNetLib.Utils.INetSerializable, StandardScoreSyncState, SyncStateId, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: StandardScoreSyncStateNetSerializable
class CORDL_TYPE StandardScoreSyncStateNetSerializable : public ::System::Object {
public:
  // Declarations
  /// @brief Field <id>k__BackingField, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get__id_k__BackingField, put = __cordl_internal_set__id_k__BackingField)) ::GlobalNamespace::SyncStateId _id_k__BackingField;

  /// @brief Field _state, offset 0x10, size 0x14
  __declspec(property(get = __cordl_internal_get__state, put = __cordl_internal_set__state)) ::GlobalNamespace::StandardScoreSyncState _state;

  /// @brief Field <time>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__time_k__BackingField, put = __cordl_internal_set__time_k__BackingField)) int64_t _time_k__BackingField;

  __declspec(property(get = get_id, put = set_id)) ::GlobalNamespace::SyncStateId id;

  __declspec(property(get = get_state, put = set_state)) ::GlobalNamespace::StandardScoreSyncState state;

  __declspec(property(get = get_time, put = set_time)) int64_t time;

  /// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
  constexpr operator ::GlobalNamespace::IPoolablePacket*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::ISyncStateSerializable_1<::GlobalNamespace::StandardScoreSyncState>"
  constexpr operator ::GlobalNamespace::ISyncStateSerializable_1<::GlobalNamespace::StandardScoreSyncState>*() noexcept;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  /// @brief Method Deserialize, addr 0x22eafc8, size 0x50, virtual true, abstract: false, final true
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  static inline ::GlobalNamespace::StandardScoreSyncStateNetSerializable* New_ctor();

  /// @brief Method Release, addr 0x22eb018, size 0x54, virtual true, abstract: false, final true
  inline void Release();

  /// @brief Method Serialize, addr 0x22eaf7c, size 0x4c, virtual true, abstract: false, final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  constexpr ::GlobalNamespace::SyncStateId const& __cordl_internal_get__id_k__BackingField() const;

  constexpr ::GlobalNamespace::SyncStateId& __cordl_internal_get__id_k__BackingField();

  constexpr ::GlobalNamespace::StandardScoreSyncState const& __cordl_internal_get__state() const;

  constexpr ::GlobalNamespace::StandardScoreSyncState& __cordl_internal_get__state();

  constexpr int64_t const& __cordl_internal_get__time_k__BackingField() const;

  constexpr int64_t& __cordl_internal_get__time_k__BackingField();

  constexpr void __cordl_internal_set__id_k__BackingField(::GlobalNamespace::SyncStateId value);

  constexpr void __cordl_internal_set__state(::GlobalNamespace::StandardScoreSyncState value);

  constexpr void __cordl_internal_set__time_k__BackingField(int64_t value);

  /// @brief Method .ctor, addr 0x22eb06c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_id, addr 0x22eaf34, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::SyncStateId get_id();

  /// @brief Method get_pool, addr 0x22eaef4, size 0x40, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::PacketPool_1<::GlobalNamespace::StandardScoreSyncStateNetSerializable*>* get_pool();

  /// @brief Method get_state, addr 0x22eaf54, size 0x14, virtual true, abstract: false, final true
  inline ::GlobalNamespace::StandardScoreSyncState get_state();

  /// @brief Method get_time, addr 0x22eaf44, size 0x8, virtual true, abstract: false, final true
  inline int64_t get_time();

  /// @brief Convert to "::GlobalNamespace::IPoolablePacket"
  constexpr ::GlobalNamespace::IPoolablePacket* i___GlobalNamespace__IPoolablePacket() noexcept;

  /// @brief Convert to "::GlobalNamespace::ISyncStateSerializable_1<::GlobalNamespace::StandardScoreSyncState>"
  constexpr ::GlobalNamespace::ISyncStateSerializable_1<::GlobalNamespace::StandardScoreSyncState>* i___GlobalNamespace__ISyncStateSerializable_1___GlobalNamespace__StandardScoreSyncState_() noexcept;

  /// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
  constexpr ::LiteNetLib::Utils::INetSerializable* i___LiteNetLib__Utils__INetSerializable() noexcept;

  /// @brief Method set_id, addr 0x22eaf3c, size 0x8, virtual true, abstract: false, final true
  inline void set_id(::GlobalNamespace::SyncStateId value);

  /// @brief Method set_state, addr 0x22eaf68, size 0x14, virtual true, abstract: false, final true
  inline void set_state(::GlobalNamespace::StandardScoreSyncState value);

  /// @brief Method set_time, addr 0x22eaf4c, size 0x8, virtual true, abstract: false, final true
  inline void set_time(int64_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StandardScoreSyncStateNetSerializable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StandardScoreSyncStateNetSerializable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StandardScoreSyncStateNetSerializable(StandardScoreSyncStateNetSerializable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StandardScoreSyncStateNetSerializable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StandardScoreSyncStateNetSerializable(StandardScoreSyncStateNetSerializable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14991 };

  /// @brief Field _state, offset: 0x10, size: 0x14, def value: None
  ::GlobalNamespace::StandardScoreSyncState ____state;

  /// @brief Field <id>k__BackingField, offset: 0x24, size: 0x1, def value: None
  ::GlobalNamespace::SyncStateId ____id_k__BackingField;

  /// @brief Field <time>k__BackingField, offset: 0x28, size: 0x8, def value: None
  int64_t ____time_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StandardScoreSyncStateNetSerializable, ____state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardScoreSyncStateNetSerializable, ____id_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardScoreSyncStateNetSerializable, ____time_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StandardScoreSyncStateNetSerializable, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StandardScoreSyncStateNetSerializable);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardScoreSyncStateNetSerializable*, "", "StandardScoreSyncStateNetSerializable");
