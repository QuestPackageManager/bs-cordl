#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CipherStream)
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Crypto {
class IBufferedCipher;
}
namespace System::IO {
struct SeekOrigin;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::IO {
class CipherStream;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::IO::CipherStream);
// Type: Org.BouncyCastle.Crypto.IO::CipherStream
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 77, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3619))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(927))
// CS Name: ::Org.BouncyCastle.Crypto.IO::CipherStream*
class CORDL_TYPE CipherStream : public ::System::IO::Stream {
public:
  // Declarations
  /// @brief Field stream, offset 0x28, size 0x8
  __declspec(property(get = __get_stream, put = __set_stream))::System::IO::Stream* stream;

  /// @brief Field inCipher, offset 0x30, size 0x8
  __declspec(property(get = __get_inCipher, put = __set_inCipher))::Org::BouncyCastle::Crypto::IBufferedCipher* inCipher;

  /// @brief Field outCipher, offset 0x38, size 0x8
  __declspec(property(get = __get_outCipher, put = __set_outCipher))::Org::BouncyCastle::Crypto::IBufferedCipher* outCipher;

  /// @brief Field mInBuf, offset 0x40, size 0x8
  __declspec(property(get = __get_mInBuf, put = __set_mInBuf))::ArrayW<uint8_t, ::Array<uint8_t>*> mInBuf;

  /// @brief Field mInPos, offset 0x48, size 0x4
  __declspec(property(get = __get_mInPos, put = __set_mInPos)) int32_t mInPos;

  /// @brief Field inStreamEnded, offset 0x4c, size 0x1
  __declspec(property(get = __get_inStreamEnded, put = __set_inStreamEnded)) bool inStreamEnded;

  __declspec(property(get = get_ReadCipher))::Org::BouncyCastle::Crypto::IBufferedCipher* ReadCipher;

  __declspec(property(get = get_WriteCipher))::Org::BouncyCastle::Crypto::IBufferedCipher* WriteCipher;

  __declspec(property(get = get_CanRead)) bool CanRead;

  __declspec(property(get = get_CanWrite)) bool CanWrite;

  __declspec(property(get = get_CanSeek)) bool CanSeek;

  __declspec(property(get = get_Length)) int64_t Length;

  __declspec(property(get = get_Position, put = set_Position)) int64_t Position;

  constexpr ::System::IO::Stream*& __get_stream();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& __get_stream() const;

  constexpr void __set_stream(::System::IO::Stream* value);

  constexpr ::Org::BouncyCastle::Crypto::IBufferedCipher*& __get_inCipher();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IBufferedCipher*> const& __get_inCipher() const;

  constexpr void __set_inCipher(::Org::BouncyCastle::Crypto::IBufferedCipher* value);

  constexpr ::Org::BouncyCastle::Crypto::IBufferedCipher*& __get_outCipher();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IBufferedCipher*> const& __get_outCipher() const;

  constexpr void __set_outCipher(::Org::BouncyCastle::Crypto::IBufferedCipher* value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_mInBuf();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_mInBuf() const;

  constexpr void __set_mInBuf(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int32_t& __get_mInPos();

  constexpr int32_t const& __get_mInPos() const;

  constexpr void __set_mInPos(int32_t value);

  constexpr bool& __get_inStreamEnded();

  constexpr bool const& __get_inStreamEnded() const;

  constexpr void __set_inStreamEnded(bool value);

  static inline ::Org::BouncyCastle::Crypto::IO::CipherStream* New_ctor(::System::IO::Stream* stream, ::Org::BouncyCastle::Crypto::IBufferedCipher* readCipher,
                                                                        ::Org::BouncyCastle::Crypto::IBufferedCipher* writeCipher);

  /// @brief Method .ctor, addr 0xf070f8, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* stream, ::Org::BouncyCastle::Crypto::IBufferedCipher* readCipher, ::Org::BouncyCastle::Crypto::IBufferedCipher* writeCipher);

  /// @brief Method get_ReadCipher, addr 0xf07188, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::IBufferedCipher* get_ReadCipher();

  /// @brief Method get_WriteCipher, addr 0xf07190, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::IBufferedCipher* get_WriteCipher();

  /// @brief Method ReadByte, addr 0xf07198, size 0x9c, virtual true, abstract: false, final false
  inline int32_t ReadByte();

  /// @brief Method Read, addr 0xf07278, size 0x14c, virtual true, abstract: false, final false
  inline int32_t Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method FillInBuf, addr 0xf07234, size 0x44, virtual false, abstract: false, final false
  inline bool FillInBuf();

  /// @brief Method ReadAndProcessBlock, addr 0xf073c4, size 0x218, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReadAndProcessBlock();

  /// @brief Method Write, addr 0xf075dc, size 0x118, virtual true, abstract: false, final false
  inline void Write(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method WriteByte, addr 0xf076f4, size 0x104, virtual true, abstract: false, final false
  inline void WriteByte(uint8_t b);

  /// @brief Method get_CanRead, addr 0xf077f8, size 0x40, virtual true, abstract: false, final false
  inline bool get_CanRead();

  /// @brief Method get_CanWrite, addr 0xf07838, size 0x40, virtual true, abstract: false, final false
  inline bool get_CanWrite();

  /// @brief Method get_CanSeek, addr 0xf07878, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanSeek();

  /// @brief Method get_Length, addr 0xf07880, size 0x40, virtual true, abstract: false, final true
  inline int64_t get_Length();

  /// @brief Method get_Position, addr 0xf078c0, size 0x40, virtual true, abstract: false, final true
  inline int64_t get_Position();

  /// @brief Method set_Position, addr 0xf07900, size 0x40, virtual true, abstract: false, final true
  inline void set_Position(int64_t value);

  /// @brief Method Close, addr 0xf07940, size 0x124, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method Flush, addr 0xf07a64, size 0x24, virtual true, abstract: false, final false
  inline void Flush();

  /// @brief Method Seek, addr 0xf07a88, size 0x40, virtual true, abstract: false, final true
  inline int64_t Seek(int64_t offset, ::System::IO::SeekOrigin origin);

  /// @brief Method SetLength, addr 0xf07ac8, size 0x40, virtual true, abstract: false, final true
  inline void SetLength(int64_t length);

  // Ctor Parameters [CppParam { name: "", ty: "CipherStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CipherStream(CipherStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CipherStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CipherStream(CipherStream const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CipherStream();

public:
  /// @brief Field stream, offset: 0x28, size: 0x8, def value: None
  ::System::IO::Stream* ___stream;

  /// @brief Field inCipher, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IBufferedCipher* ___inCipher;

  /// @brief Field outCipher, offset: 0x38, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IBufferedCipher* ___outCipher;

  /// @brief Field mInBuf, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mInBuf;

  /// @brief Field mInPos, offset: 0x48, size: 0x4, def value: None
  int32_t ___mInPos;

  /// @brief Field inStreamEnded, offset: 0x4c, size: 0x1, def value: None
  bool ___inStreamEnded;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::IO::CipherStream, 0x50>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::IO::CipherStream, ___stream) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::IO::CipherStream, ___inCipher) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::IO::CipherStream, ___outCipher) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::IO::CipherStream, ___mInBuf) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::IO::CipherStream, ___mInPos) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::IO::CipherStream, ___inStreamEnded) == 0x4c, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::IO
NEED_NO_BOX(::Org::BouncyCastle::Crypto::IO::CipherStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::IO::CipherStream*, "Org.BouncyCastle.Crypto.IO", "CipherStream");
