#pragma once
// IWYU pragma private; include "LiteNetLib/NetPacketReader.hpp"
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
// Dependencies LiteNetLib.Utils.NetDataReader
namespace LiteNetLib {
// Is value type: false
// CS Name: LiteNetLib.NetPacketReader
class CORDL_TYPE NetPacketReader : public ::LiteNetLib::Utils::NetDataReader {
public:
  // Declarations
  /// @brief Field _evt, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__evt, put = __cordl_internal_set__evt)) ::LiteNetLib::NetEvent* _evt;

  /// @brief Field _manager, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__manager, put = __cordl_internal_set__manager)) ::LiteNetLib::NetManager* _manager;

  /// @brief Field _packet, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__packet, put = __cordl_internal_set__packet)) ::LiteNetLib::NetPacket* _packet;

  static inline ::LiteNetLib::NetPacketReader* New_ctor(::LiteNetLib::NetManager* manager, ::LiteNetLib::NetEvent* evt);

  /// @brief Method Recycle, addr 0x3aafd50, size 0x68, virtual false, abstract: false, final false
  inline void Recycle();

  /// @brief Method RecycleInternal, addr 0x3aafad8, size 0x44, virtual false, abstract: false, final false
  inline void RecycleInternal();

  /// @brief Method SetSource, addr 0x3aafa10, size 0x40, virtual false, abstract: false, final false
  inline void SetSource(::LiteNetLib::NetPacket* packet);

  constexpr ::LiteNetLib::NetEvent* const& __cordl_internal_get__evt() const;

  constexpr ::LiteNetLib::NetEvent*& __cordl_internal_get__evt();

  constexpr ::LiteNetLib::NetManager* const& __cordl_internal_get__manager() const;

  constexpr ::LiteNetLib::NetManager*& __cordl_internal_get__manager();

  constexpr ::LiteNetLib::NetPacket* const& __cordl_internal_get__packet() const;

  constexpr ::LiteNetLib::NetPacket*& __cordl_internal_get__packet();

  constexpr void __cordl_internal_set__evt(::LiteNetLib::NetEvent* value);

  constexpr void __cordl_internal_set__manager(::LiteNetLib::NetManager* value);

  constexpr void __cordl_internal_set__packet(::LiteNetLib::NetPacket* value);

  /// @brief Method .ctor, addr 0x3aaf9e4, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::LiteNetLib::NetManager* manager, ::LiteNetLib::NetEvent* evt);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetPacketReader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NetPacketReader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetPacketReader(NetPacketReader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetPacketReader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetPacketReader(NetPacketReader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16548 };

  /// @brief Field _packet, offset: 0x28, size: 0x8, def value: None
  ::LiteNetLib::NetPacket* ____packet;

  /// @brief Field _manager, offset: 0x30, size: 0x8, def value: None
  ::LiteNetLib::NetManager* ____manager;

  /// @brief Field _evt, offset: 0x38, size: 0x8, def value: None
  ::LiteNetLib::NetEvent* ____evt;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::LiteNetLib::NetPacketReader, ____packet) == 0x28, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetPacketReader, ____manager) == 0x30, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetPacketReader, ____evt) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::LiteNetLib::NetPacketReader, 0x40>, "Size mismatch!");

} // namespace LiteNetLib
NEED_NO_BOX(::LiteNetLib::NetPacketReader);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::NetPacketReader*, "LiteNetLib", "NetPacketReader");
