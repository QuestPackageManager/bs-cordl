#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseOutputStream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BcpgOutputStream)
namespace Org::BouncyCastle::Bcpg {
class ContainedPacket;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Bcpg {
struct PacketTag;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgObject;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class BcpgOutputStream;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::BcpgOutputStream);
// Type: Org.BouncyCastle.Bcpg::BcpgOutputStream
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 76, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(484))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(555))
// CS Name: ::Org.BouncyCastle.Bcpg::BcpgOutputStream*
class CORDL_TYPE BcpgOutputStream : public ::Org::BouncyCastle::Utilities::IO::BaseOutputStream {
public:
  // Declarations
  /// @brief Field outStr, offset 0x30, size 0x8
  __declspec(property(get = __get_outStr, put = __set_outStr))::System::IO::Stream* outStr;

  /// @brief Field partialBuffer, offset 0x38, size 0x8
  __declspec(property(get = __get_partialBuffer, put = __set_partialBuffer))::ArrayW<uint8_t, ::Array<uint8_t>*> partialBuffer;

  /// @brief Field partialBufferLength, offset 0x40, size 0x4
  __declspec(property(get = __get_partialBufferLength, put = __set_partialBufferLength)) int32_t partialBufferLength;

  /// @brief Field partialPower, offset 0x44, size 0x4
  __declspec(property(get = __get_partialPower, put = __set_partialPower)) int32_t partialPower;

  /// @brief Field partialOffset, offset 0x48, size 0x4
  __declspec(property(get = __get_partialOffset, put = __set_partialOffset)) int32_t partialOffset;

  constexpr ::System::IO::Stream*& __get_outStr();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& __get_outStr() const;

  constexpr void __set_outStr(::System::IO::Stream* value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_partialBuffer();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_partialBuffer() const;

  constexpr void __set_partialBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int32_t& __get_partialBufferLength();

  constexpr int32_t const& __get_partialBufferLength() const;

  constexpr void __set_partialBufferLength(int32_t value);

  constexpr int32_t& __get_partialPower();

  constexpr int32_t const& __get_partialPower() const;

  constexpr void __set_partialPower(int32_t value);

  constexpr int32_t& __get_partialOffset();

  constexpr int32_t const& __get_partialOffset() const;

  constexpr void __set_partialOffset(int32_t value);

  /// @brief Method Wrap addr 0x11cf758 size 0x90 virtual false final false
  static inline ::Org::BouncyCastle::Bcpg::BcpgOutputStream* Wrap(::System::IO::Stream* outStr);

  static inline ::Org::BouncyCastle::Bcpg::BcpgOutputStream* New_ctor(::System::IO::Stream* outStr);

  /// @brief Method .ctor addr 0x11cf6b0 size 0x78 virtual false final false
  inline void _ctor(::System::IO::Stream* outStr);

  static inline ::Org::BouncyCastle::Bcpg::BcpgOutputStream* New_ctor(::System::IO::Stream* outStr, ::Org::BouncyCastle::Bcpg::PacketTag tag);

  /// @brief Method .ctor addr 0x11cf7e8 size 0x90 virtual false final false
  inline void _ctor(::System::IO::Stream* outStr, ::Org::BouncyCastle::Bcpg::PacketTag tag);

  static inline ::Org::BouncyCastle::Bcpg::BcpgOutputStream* New_ctor(::System::IO::Stream* outStr, ::Org::BouncyCastle::Bcpg::PacketTag tag, int64_t length, bool oldFormat);

  /// @brief Method .ctor addr 0x11cf9ec size 0x130 virtual false final false
  inline void _ctor(::System::IO::Stream* outStr, ::Org::BouncyCastle::Bcpg::PacketTag tag, int64_t length, bool oldFormat);

  static inline ::Org::BouncyCastle::Bcpg::BcpgOutputStream* New_ctor(::System::IO::Stream* outStr, ::Org::BouncyCastle::Bcpg::PacketTag tag, int64_t length);

  /// @brief Method .ctor addr 0x11cfb1c size 0x9c virtual false final false
  inline void _ctor(::System::IO::Stream* outStr, ::Org::BouncyCastle::Bcpg::PacketTag tag, int64_t length);

  static inline ::Org::BouncyCastle::Bcpg::BcpgOutputStream* New_ctor(::System::IO::Stream* outStr, ::Org::BouncyCastle::Bcpg::PacketTag tag, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer);

  /// @brief Method .ctor addr 0x11cfbb8 size 0x128 virtual false final false
  inline void _ctor(::System::IO::Stream* outStr, ::Org::BouncyCastle::Bcpg::PacketTag tag, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer);

  /// @brief Method WriteNewPacketLength addr 0x11cfce0 size 0xe0 virtual false final false
  inline void WriteNewPacketLength(int64_t bodyLen);

  /// @brief Method WriteHeader addr 0x11cf878 size 0x174 virtual false final false
  inline void WriteHeader(::Org::BouncyCastle::Bcpg::PacketTag tag, bool oldPackets, bool partial, int64_t bodyLen);

  /// @brief Method PartialFlush addr 0x11cfdc0 size 0x80 virtual false final false
  inline void PartialFlush(bool isLast);

  /// @brief Method WritePartial addr 0x11cfe40 size 0x68 virtual false final false
  inline void WritePartial(uint8_t b);

  /// @brief Method WritePartial addr 0x11cfea8 size 0xec virtual false final false
  inline void WritePartial(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t off, int32_t len);

  /// @brief Method WriteByte addr 0x11cff94 size 0x34 virtual true final false
  inline void WriteByte(uint8_t value);

  /// @brief Method Write addr 0x11cffc8 size 0x34 virtual true final false
  inline void Write(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method WriteShort addr 0x11cfffc size 0x94 virtual true final false
  inline void WriteShort(int16_t n);

  /// @brief Method WriteInt addr 0x11d0090 size 0xb4 virtual true final false
  inline void WriteInt(int32_t n);

  /// @brief Method WriteLong addr 0x11d0144 size 0xf4 virtual true final false
  inline void WriteLong(int64_t n);

  /// @brief Method WritePacket addr 0x11d0238 size 0x28 virtual false final false
  inline void WritePacket(::Org::BouncyCastle::Bcpg::ContainedPacket* p);

  /// @brief Method WritePacket addr 0x11d0260 size 0x48 virtual false final false
  inline void WritePacket(::Org::BouncyCastle::Bcpg::PacketTag tag, ::ArrayW<uint8_t, ::Array<uint8_t>*> body, bool oldFormat);

  /// @brief Method WriteObject addr 0x11cf728 size 0x28 virtual false final false
  inline void WriteObject(::Org::BouncyCastle::Bcpg::BcpgObject* bcpgObject);

  /// @brief Method WriteObjects addr 0x11d02a8 size 0x6c virtual false final false
  inline void WriteObjects(::ArrayW<::Org::BouncyCastle::Bcpg::BcpgObject*, ::Array<::Org::BouncyCastle::Bcpg::BcpgObject*>*> v);

  /// @brief Method Flush addr 0x11d0314 size 0x24 virtual true final false
  inline void Flush();

  /// @brief Method Finish addr 0x11d0338 size 0x40 virtual false final false
  inline void Finish();

  /// @brief Method Close addr 0x11d0378 size 0x8c virtual true final false
  inline void Close();

  // Ctor Parameters [CppParam { name: "", ty: "BcpgOutputStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BcpgOutputStream(BcpgOutputStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BcpgOutputStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BcpgOutputStream(BcpgOutputStream const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BcpgOutputStream();

public:
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::BcpgOutputStream, 0x50>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::BcpgOutputStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::BcpgOutputStream*, "Org.BouncyCastle.Bcpg", "BcpgOutputStream");
