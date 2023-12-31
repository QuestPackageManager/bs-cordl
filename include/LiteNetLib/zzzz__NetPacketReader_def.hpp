#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
CORDL_MODULE_EXPORT(NetPacketReader)
namespace LiteNetLib {
class NetEvent;
}
namespace LiteNetLib {
class NetManager;
}
namespace LiteNetLib {
class NetPacket;
}
// Forward declare root types
namespace LiteNetLib {
class NetPacketReader;
}
// Write type traits
MARK_REF_PTR_T(::LiteNetLib::NetPacketReader);
// Type: LiteNetLib::NetPacketReader
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace LiteNetLib {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14194))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14162))
// CS Name: ::LiteNetLib::NetPacketReader*
class CORDL_TYPE NetPacketReader : public ::LiteNetLib::Utils::NetDataReader {
public:
  // Declarations
  /// @brief Field _packet, offset 0x28, size 0x8
  __declspec(property(get = __get__packet, put = __set__packet))::LiteNetLib::NetPacket* _packet;

  /// @brief Field _manager, offset 0x30, size 0x8
  __declspec(property(get = __get__manager, put = __set__manager))::LiteNetLib::NetManager* _manager;

  /// @brief Field _evt, offset 0x38, size 0x8
  __declspec(property(get = __get__evt, put = __set__evt))::LiteNetLib::NetEvent* _evt;

  constexpr ::LiteNetLib::NetPacket*& __get__packet();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::NetPacket*> const& __get__packet() const;

  constexpr void __set__packet(::LiteNetLib::NetPacket* value);

  constexpr ::LiteNetLib::NetManager*& __get__manager();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::NetManager*> const& __get__manager() const;

  constexpr void __set__manager(::LiteNetLib::NetManager* value);

  constexpr ::LiteNetLib::NetEvent*& __get__evt();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::NetEvent*> const& __get__evt() const;

  constexpr void __set__evt(::LiteNetLib::NetEvent* value);

  static inline ::LiteNetLib::NetPacketReader* New_ctor(::LiteNetLib::NetManager* manager, ::LiteNetLib::NetEvent* evt);

  /// @brief Method .ctor, addr 0x21fc360, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::LiteNetLib::NetManager* manager, ::LiteNetLib::NetEvent* evt);

  /// @brief Method SetSource, addr 0x21fc38c, size 0x40, virtual false, abstract: false, final false
  inline void SetSource(::LiteNetLib::NetPacket* packet);

  /// @brief Method RecycleInternal, addr 0x21fc454, size 0x44, virtual false, abstract: false, final false
  inline void RecycleInternal();

  /// @brief Method Recycle, addr 0x21fc6f4, size 0x6c, virtual false, abstract: false, final false
  inline void Recycle();

  // Ctor Parameters [CppParam { name: "", ty: "NetPacketReader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetPacketReader(NetPacketReader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetPacketReader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetPacketReader(NetPacketReader const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetPacketReader();

public:
  /// @brief Field _packet, offset: 0x28, size: 0x8, def value: None
  ::LiteNetLib::NetPacket* ____packet;

  /// @brief Field _manager, offset: 0x30, size: 0x8, def value: None
  ::LiteNetLib::NetManager* ____manager;

  /// @brief Field _evt, offset: 0x38, size: 0x8, def value: None
  ::LiteNetLib::NetEvent* ____evt;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::NetPacketReader, 0x40>, "Size mismatch!");

static_assert(offsetof(::LiteNetLib::NetPacketReader, ____packet) == 0x28, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetPacketReader, ____manager) == 0x30, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetPacketReader, ____evt) == 0x38, "Offset mismatch!");

} // namespace LiteNetLib
NEED_NO_BOX(::LiteNetLib::NetPacketReader);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::NetPacketReader*, "LiteNetLib", "NetPacketReader");
