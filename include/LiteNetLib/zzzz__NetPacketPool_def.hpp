#pragma once
// IWYU pragma private; include "LiteNetLib/NetPacketPool.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetPacketPool)
namespace LiteNetLib {
class NetPacket;
}
namespace LiteNetLib {
struct PacketProperty;
}
namespace System::Threading {
class ReaderWriterLockSlim;
}
// Forward declare root types
namespace LiteNetLib {
class NetPacketPool;
}
// Write type traits
MARK_REF_PTR_T(::LiteNetLib::NetPacketPool);
// Dependencies System.Object
namespace LiteNetLib {
// Is value type: false
// CS Name: LiteNetLib.NetPacketPool
class CORDL_TYPE NetPacketPool : public ::System::Object {
public:
  // Declarations
  /// @brief Field _count, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__count, put = __cordl_internal_set__count)) int32_t _count;

  /// @brief Field _lock, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__lock, put = __cordl_internal_set__lock)) ::System::Threading::ReaderWriterLockSlim* _lock;

  /// @brief Field _pool, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__pool, put = __cordl_internal_set__pool)) ::ArrayW<::LiteNetLib::NetPacket*, ::Array<::LiteNetLib::NetPacket*>*> _pool;

  /// @brief Method GetPacket, addr 0x3ab0f50, size 0x16c, virtual false, abstract: false, final false
  inline ::LiteNetLib::NetPacket* GetPacket(int32_t size);

  /// @brief Method GetWithData, addr 0x3ab49e8, size 0xd8, virtual false, abstract: false, final false
  inline ::LiteNetLib::NetPacket* GetWithData(::LiteNetLib::PacketProperty property, ::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t start, int32_t length);

  /// @brief Method GetWithProperty, addr 0x3ab3210, size 0xa4, virtual false, abstract: false, final false
  inline ::LiteNetLib::NetPacket* GetWithProperty(::LiteNetLib::PacketProperty property);

  /// @brief Method GetWithProperty, addr 0x3ab26e0, size 0xac, virtual false, abstract: false, final false
  inline ::LiteNetLib::NetPacket* GetWithProperty(::LiteNetLib::PacketProperty property, int32_t size);

  static inline ::LiteNetLib::NetPacketPool* New_ctor();

  /// @brief Method Recycle, addr 0x3aafb24, size 0x11c, virtual false, abstract: false, final false
  inline void Recycle(::LiteNetLib::NetPacket* packet);

  constexpr int32_t const& __cordl_internal_get__count() const;

  constexpr int32_t& __cordl_internal_get__count();

  constexpr ::System::Threading::ReaderWriterLockSlim* const& __cordl_internal_get__lock() const;

  constexpr ::System::Threading::ReaderWriterLockSlim*& __cordl_internal_get__lock();

  constexpr ::ArrayW<::LiteNetLib::NetPacket*, ::Array<::LiteNetLib::NetPacket*>*> const& __cordl_internal_get__pool() const;

  constexpr ::ArrayW<::LiteNetLib::NetPacket*, ::Array<::LiteNetLib::NetPacket*>*>& __cordl_internal_get__pool();

  constexpr void __cordl_internal_set__count(int32_t value);

  constexpr void __cordl_internal_set__lock(::System::Threading::ReaderWriterLockSlim* value);

  constexpr void __cordl_internal_set__pool(::ArrayW<::LiteNetLib::NetPacket*, ::Array<::LiteNetLib::NetPacket*>*> value);

  /// @brief Method .ctor, addr 0x3ab0824, size 0x90, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetPacketPool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NetPacketPool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetPacketPool(NetPacketPool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetPacketPool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetPacketPool(NetPacketPool const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16558 };

  /// @brief Field _pool, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::LiteNetLib::NetPacket*, ::Array<::LiteNetLib::NetPacket*>*> ____pool;

  /// @brief Field _lock, offset: 0x18, size: 0x8, def value: None
  ::System::Threading::ReaderWriterLockSlim* ____lock;

  /// @brief Field _count, offset: 0x20, size: 0x4, def value: None
  int32_t ____count;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::LiteNetLib::NetPacketPool, ____pool) == 0x10, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetPacketPool, ____lock) == 0x18, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetPacketPool, ____count) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::LiteNetLib::NetPacketPool, 0x28>, "Size mismatch!");

} // namespace LiteNetLib
NEED_NO_BOX(::LiteNetLib::NetPacketPool);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::NetPacketPool*, "LiteNetLib", "NetPacketPool");
