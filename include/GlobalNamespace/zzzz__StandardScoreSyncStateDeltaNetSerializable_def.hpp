#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__StandardScoreSyncState_def.hpp"
#include "GlobalNamespace/zzzz__SyncStateId_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StandardScoreSyncStateDeltaNetSerializable)
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
struct StandardScoreSyncState;
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
class StandardScoreSyncStateDeltaNetSerializable;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable);
// Type: ::StandardScoreSyncStateDeltaNetSerializable
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(12876)), TypeDefinitionIndex(TypeDefinitionIndex(12886))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12877))
// CS Name: ::StandardScoreSyncStateDeltaNetSerializable*
class CORDL_TYPE StandardScoreSyncStateDeltaNetSerializable : public ::System::Object {
public:
  // Declarations
  /// @brief Field _delta, offset 0x10, size 0x14
  __declspec(property(get = __cordl_internal_get__delta, put = __cordl_internal_set__delta))::GlobalNamespace::StandardScoreSyncState _delta;

  /// @brief Field <baseId>k__BackingField, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get__baseId_k__BackingField, put = __cordl_internal_set__baseId_k__BackingField))::GlobalNamespace::SyncStateId _baseId_k__BackingField;

  /// @brief Field <timeOffsetMs>k__BackingField, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__timeOffsetMs_k__BackingField, put = __cordl_internal_set__timeOffsetMs_k__BackingField)) int32_t _timeOffsetMs_k__BackingField;

  __declspec(property(get = get_baseId, put = set_baseId))::GlobalNamespace::SyncStateId baseId;

  __declspec(property(get = get_timeOffsetMs, put = set_timeOffsetMs)) int32_t timeOffsetMs;

  __declspec(property(get = get_delta, put = set_delta))::GlobalNamespace::StandardScoreSyncState delta;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  /// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
  constexpr ::LiteNetLib::Utils::INetSerializable* i___LiteNetLib__Utils__INetSerializable() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
  constexpr operator ::GlobalNamespace::IPoolablePacket*() noexcept;

  /// @brief Convert to "::GlobalNamespace::IPoolablePacket"
  constexpr ::GlobalNamespace::IPoolablePacket* i___GlobalNamespace__IPoolablePacket() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::ISyncStateDeltaSerializable_1<::GlobalNamespace::StandardScoreSyncState>"
  constexpr operator ::GlobalNamespace::ISyncStateDeltaSerializable_1<::GlobalNamespace::StandardScoreSyncState>*() noexcept;

  /// @brief Convert to "::GlobalNamespace::ISyncStateDeltaSerializable_1<::GlobalNamespace::StandardScoreSyncState>"
  constexpr ::GlobalNamespace::ISyncStateDeltaSerializable_1<::GlobalNamespace::StandardScoreSyncState>*
  i___GlobalNamespace__ISyncStateDeltaSerializable_1___GlobalNamespace__StandardScoreSyncState_() noexcept;

  constexpr ::GlobalNamespace::StandardScoreSyncState& __cordl_internal_get__delta();

  constexpr ::GlobalNamespace::StandardScoreSyncState const& __cordl_internal_get__delta() const;

  constexpr void __cordl_internal_set__delta(::GlobalNamespace::StandardScoreSyncState value);

  constexpr ::GlobalNamespace::SyncStateId& __cordl_internal_get__baseId_k__BackingField();

  constexpr ::GlobalNamespace::SyncStateId const& __cordl_internal_get__baseId_k__BackingField() const;

  constexpr void __cordl_internal_set__baseId_k__BackingField(::GlobalNamespace::SyncStateId value);

  constexpr int32_t& __cordl_internal_get__timeOffsetMs_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__timeOffsetMs_k__BackingField() const;

  constexpr void __cordl_internal_set__timeOffsetMs_k__BackingField(int32_t value);

  /// @brief Method get_pool, addr 0xe856a8, size 0x40, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::IPacketPool_1<::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable*>* get_pool();

  /// @brief Method get_baseId, addr 0xe856e8, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::SyncStateId get_baseId();

  /// @brief Method set_baseId, addr 0xe856f0, size 0x8, virtual true, abstract: false, final true
  inline void set_baseId(::GlobalNamespace::SyncStateId value);

  /// @brief Method get_timeOffsetMs, addr 0xe856f8, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_timeOffsetMs();

  /// @brief Method set_timeOffsetMs, addr 0xe85700, size 0x8, virtual true, abstract: false, final true
  inline void set_timeOffsetMs(int32_t value);

  /// @brief Method get_delta, addr 0xe85708, size 0x14, virtual true, abstract: false, final true
  inline ::GlobalNamespace::StandardScoreSyncState get_delta();

  /// @brief Method set_delta, addr 0xe8571c, size 0x14, virtual true, abstract: false, final true
  inline void set_delta(::GlobalNamespace::StandardScoreSyncState value);

  /// @brief Method Serialize, addr 0xe85730, size 0xb0, virtual true, abstract: false, final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method Deserialize, addr 0xe857e0, size 0x60, virtual true, abstract: false, final true
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Release, addr 0xe85840, size 0xac, virtual true, abstract: false, final true
  inline void Release();

  static inline ::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable* New_ctor();

  /// @brief Method .ctor, addr 0xe858ec, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "StandardScoreSyncStateDeltaNetSerializable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StandardScoreSyncStateDeltaNetSerializable(StandardScoreSyncStateDeltaNetSerializable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StandardScoreSyncStateDeltaNetSerializable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StandardScoreSyncStateDeltaNetSerializable(StandardScoreSyncStateDeltaNetSerializable const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StandardScoreSyncStateDeltaNetSerializable();

public:
  /// @brief Field _delta, offset: 0x10, size: 0x14, def value: None
  ::GlobalNamespace::StandardScoreSyncState ____delta;

  /// @brief Field <baseId>k__BackingField, offset: 0x24, size: 0x1, def value: None
  ::GlobalNamespace::SyncStateId ____baseId_k__BackingField;

  /// @brief Field <timeOffsetMs>k__BackingField, offset: 0x28, size: 0x4, def value: None
  int32_t ____timeOffsetMs_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable, ____delta) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable, ____baseId_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable, ____timeOffsetMs_k__BackingField) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable*, "", "StandardScoreSyncStateDeltaNetSerializable");
