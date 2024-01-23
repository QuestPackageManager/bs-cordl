#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: LiteNetLib::NetPacketPool
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace LiteNetLib {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14172))
// CS Name: ::LiteNetLib::NetPacketPool*
class CORDL_TYPE NetPacketPool : public ::System::Object {
public:
  // Declarations
  /// @brief Field _pool, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__pool, put = __cordl_internal_set__pool))::ArrayW<::LiteNetLib::NetPacket*, ::Array<::LiteNetLib::NetPacket*>*> _pool;

  /// @brief Field _lock, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__lock, put = __cordl_internal_set__lock))::System::Threading::ReaderWriterLockSlim* _lock;

  /// @brief Field _count, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__count, put = __cordl_internal_set__count)) int32_t _count;

  constexpr ::ArrayW<::LiteNetLib::NetPacket*, ::Array<::LiteNetLib::NetPacket*>*>& __cordl_internal_get__pool();

  constexpr ::ArrayW<::LiteNetLib::NetPacket*, ::Array<::LiteNetLib::NetPacket*>*> const& __cordl_internal_get__pool() const;

  constexpr void __cordl_internal_set__pool(::ArrayW<::LiteNetLib::NetPacket*, ::Array<::LiteNetLib::NetPacket*>*> value);

  constexpr ::System::Threading::ReaderWriterLockSlim*& __cordl_internal_get__lock();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::ReaderWriterLockSlim*> const& __cordl_internal_get__lock() const;

  constexpr void __cordl_internal_set__lock(::System::Threading::ReaderWriterLockSlim* value);

  constexpr int32_t& __cordl_internal_get__count();

  constexpr int32_t const& __cordl_internal_get__count() const;

  constexpr void __cordl_internal_set__count(int32_t value);

  /// @brief Method GetWithData, addr 0x220152c, size 0xd8, virtual false, abstract: false, final false
  inline ::LiteNetLib::NetPacket* GetWithData(::LiteNetLib::PacketProperty property, ::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t start, int32_t length);

  /// @brief Method GetWithProperty, addr 0x21ff0b4, size 0xac, virtual false, abstract: false, final false
  inline ::LiteNetLib::NetPacket* GetWithProperty(::LiteNetLib::PacketProperty property, int32_t size);

  /// @brief Method GetWithProperty, addr 0x21ffc58, size 0xa4, virtual false, abstract: false, final false
  inline ::LiteNetLib::NetPacket* GetWithProperty(::LiteNetLib::PacketProperty property);

  /// @brief Method GetPacket, addr 0x21fd95c, size 0x16c, virtual false, abstract: false, final false
  inline ::LiteNetLib::NetPacket* GetPacket(int32_t size);

  /// @brief Method Recycle, addr 0x21fc4a0, size 0x140, virtual false, abstract: false, final false
  inline void Recycle(::LiteNetLib::NetPacket* packet);

  static inline ::LiteNetLib::NetPacketPool* New_ctor();

  /// @brief Method .ctor, addr 0x21fd208, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "NetPacketPool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetPacketPool(NetPacketPool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetPacketPool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetPacketPool(NetPacketPool const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetPacketPool();

public:
  /// @brief Field _pool, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::LiteNetLib::NetPacket*, ::Array<::LiteNetLib::NetPacket*>*> ____pool;

  /// @brief Field _lock, offset: 0x18, size: 0x8, def value: None
  ::System::Threading::ReaderWriterLockSlim* ____lock;

  /// @brief Field _count, offset: 0x20, size: 0x4, def value: None
  int32_t ____count;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::NetPacketPool, 0x28>, "Size mismatch!");

static_assert(offsetof(::LiteNetLib::NetPacketPool, ____pool) == 0x10, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetPacketPool, ____lock) == 0x18, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetPacketPool, ____count) == 0x20, "Offset mismatch!");

} // namespace LiteNetLib
NEED_NO_BOX(::LiteNetLib::NetPacketPool);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::NetPacketPool*, "LiteNetLib", "NetPacketPool");
