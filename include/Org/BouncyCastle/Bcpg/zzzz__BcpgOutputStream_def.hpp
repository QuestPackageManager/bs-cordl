#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/BcpgOutputStream.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseOutputStream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BcpgOutputStream)
namespace Org::BouncyCastle::Bcpg {
class BcpgObject;
}
namespace Org::BouncyCastle::Bcpg {
class ContainedPacket;
}
namespace Org::BouncyCastle::Bcpg {
struct PacketTag;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class BcpgOutputStream;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::BcpgOutputStream);
// Type: Org.BouncyCastle.Bcpg::BcpgOutputStream
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 76, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Bcpg::BcpgOutputStream*
class CORDL_TYPE BcpgOutputStream : public ::Org::BouncyCastle::Utilities::IO::BaseOutputStream {
public:
  // Declarations
  /// @brief Field outStr, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_outStr, put = __cordl_internal_set_outStr)) ::System::IO::Stream* outStr;

  /// @brief Field partialBuffer, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_partialBuffer, put = __cordl_internal_set_partialBuffer)) ::ArrayW<uint8_t, ::Array<uint8_t>*> partialBuffer;

  /// @brief Field partialBufferLength, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_partialBufferLength, put = __cordl_internal_set_partialBufferLength)) int32_t partialBufferLength;

  /// @brief Field partialOffset, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_partialOffset, put = __cordl_internal_set_partialOffset)) int32_t partialOffset;

  /// @brief Field partialPower, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_partialPower, put = __cordl_internal_set_partialPower)) int32_t partialPower;

  /// @brief Method Close, addr 0x2606afc, size 0x8c, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method Finish, addr 0x2606abc, size 0x40, virtual false, abstract: false, final false
  inline void Finish();

  /// @brief Method Flush, addr 0x2606a98, size 0x24, virtual true, abstract: false, final false
  inline void Flush();

  static inline ::Org::BouncyCastle::Bcpg::BcpgOutputStream* New_ctor(::System::IO::Stream* outStr);

  static inline ::Org::BouncyCastle::Bcpg::BcpgOutputStream* New_ctor(::System::IO::Stream* outStr, ::Org::BouncyCastle::Bcpg::PacketTag tag);

  static inline ::Org::BouncyCastle::Bcpg::BcpgOutputStream* New_ctor(::System::IO::Stream* outStr, ::Org::BouncyCastle::Bcpg::PacketTag tag, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer);

  static inline ::Org::BouncyCastle::Bcpg::BcpgOutputStream* New_ctor(::System::IO::Stream* outStr, ::Org::BouncyCastle::Bcpg::PacketTag tag, int64_t length);

  static inline ::Org::BouncyCastle::Bcpg::BcpgOutputStream* New_ctor(::System::IO::Stream* outStr, ::Org::BouncyCastle::Bcpg::PacketTag tag, int64_t length, bool oldFormat);

  /// @brief Method PartialFlush, addr 0x2606544, size 0x80, virtual false, abstract: false, final false
  inline void PartialFlush(bool isLast);

  /// @brief Method Wrap, addr 0x2605ef4, size 0x8c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Bcpg::BcpgOutputStream* Wrap(::System::IO::Stream* outStr);

  /// @brief Method Write, addr 0x260674c, size 0x34, virtual true, abstract: false, final false
  inline void Write(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method WriteByte, addr 0x2606718, size 0x34, virtual true, abstract: false, final false
  inline void WriteByte(uint8_t value);

  /// @brief Method WriteHeader, addr 0x260600c, size 0x174, virtual false, abstract: false, final false
  inline void WriteHeader(::Org::BouncyCastle::Bcpg::PacketTag tag, bool oldPackets, bool partial, int64_t bodyLen);

  /// @brief Method WriteInt, addr 0x2606814, size 0xb4, virtual true, abstract: false, final false
  inline void WriteInt(int32_t n);

  /// @brief Method WriteLong, addr 0x26068c8, size 0xf4, virtual true, abstract: false, final false
  inline void WriteLong(int64_t n);

  /// @brief Method WriteNewPacketLength, addr 0x2606464, size 0xe0, virtual false, abstract: false, final false
  inline void WriteNewPacketLength(int64_t bodyLen);

  /// @brief Method WriteObject, addr 0x2605ec4, size 0x28, virtual false, abstract: false, final false
  inline void WriteObject(::Org::BouncyCastle::Bcpg::BcpgObject* bcpgObject);

  /// @brief Method WriteObjects, addr 0x2606a2c, size 0x6c, virtual false, abstract: false, final false
  inline void WriteObjects(::ArrayW<::Org::BouncyCastle::Bcpg::BcpgObject*, ::Array<::Org::BouncyCastle::Bcpg::BcpgObject*>*> v);

  /// @brief Method WritePacket, addr 0x26069bc, size 0x28, virtual false, abstract: false, final false
  inline void WritePacket(::Org::BouncyCastle::Bcpg::ContainedPacket* p);

  /// @brief Method WritePacket, addr 0x26069e4, size 0x48, virtual false, abstract: false, final false
  inline void WritePacket(::Org::BouncyCastle::Bcpg::PacketTag tag, ::ArrayW<uint8_t, ::Array<uint8_t>*> body, bool oldFormat);

  /// @brief Method WritePartial, addr 0x26065c4, size 0x68, virtual false, abstract: false, final false
  inline void WritePartial(uint8_t b);

  /// @brief Method WritePartial, addr 0x260662c, size 0xec, virtual false, abstract: false, final false
  inline void WritePartial(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t off, int32_t len);

  /// @brief Method WriteShort, addr 0x2606780, size 0x94, virtual true, abstract: false, final false
  inline void WriteShort(int16_t n);

  constexpr ::System::IO::Stream*& __cordl_internal_get_outStr();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& __cordl_internal_get_outStr() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_partialBuffer() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_partialBuffer();

  constexpr int32_t const& __cordl_internal_get_partialBufferLength() const;

  constexpr int32_t& __cordl_internal_get_partialBufferLength();

  constexpr int32_t const& __cordl_internal_get_partialOffset() const;

  constexpr int32_t& __cordl_internal_get_partialOffset();

  constexpr int32_t const& __cordl_internal_get_partialPower() const;

  constexpr int32_t& __cordl_internal_get_partialPower();

  constexpr void __cordl_internal_set_outStr(::System::IO::Stream* value);

  constexpr void __cordl_internal_set_partialBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_partialBufferLength(int32_t value);

  constexpr void __cordl_internal_set_partialOffset(int32_t value);

  constexpr void __cordl_internal_set_partialPower(int32_t value);

  /// @brief Method .ctor, addr 0x2605e50, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* outStr);

  /// @brief Method .ctor, addr 0x2605f80, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* outStr, ::Org::BouncyCastle::Bcpg::PacketTag tag);

  /// @brief Method .ctor, addr 0x2606344, size 0x120, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* outStr, ::Org::BouncyCastle::Bcpg::PacketTag tag, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer);

  /// @brief Method .ctor, addr 0x26062ac, size 0x98, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* outStr, ::Org::BouncyCastle::Bcpg::PacketTag tag, int64_t length);

  /// @brief Method .ctor, addr 0x2606180, size 0x12c, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* outStr, ::Org::BouncyCastle::Bcpg::PacketTag tag, int64_t length, bool oldFormat);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BcpgOutputStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BcpgOutputStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BcpgOutputStream(BcpgOutputStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BcpgOutputStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BcpgOutputStream(BcpgOutputStream const&) = delete;

  /// @brief Field outStr, offset: 0x30, size: 0x8, def value: None
  ::System::IO::Stream* ___outStr;

  /// @brief Field partialBuffer, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___partialBuffer;

  /// @brief Field partialBufferLength, offset: 0x40, size: 0x4, def value: None
  int32_t ___partialBufferLength;

  /// @brief Field partialPower, offset: 0x44, size: 0x4, def value: None
  int32_t ___partialPower;

  /// @brief Field partialOffset, offset: 0x48, size: 0x4, def value: None
  int32_t ___partialOffset;

  /// @brief Field BufferSizePower offset 0xffffffff size 0x4
  static constexpr int32_t BufferSizePower{ static_cast<int32_t>(0x10) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 555 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::BcpgOutputStream, 0x50>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::BcpgOutputStream, ___outStr) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::BcpgOutputStream, ___partialBuffer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::BcpgOutputStream, ___partialBufferLength) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::BcpgOutputStream, ___partialPower) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::BcpgOutputStream, ___partialOffset) == 0x48, "Offset mismatch!");

} // namespace Org::BouncyCastle::Bcpg
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::BcpgOutputStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::BcpgOutputStream*, "Org.BouncyCastle.Bcpg", "BcpgOutputStream");
