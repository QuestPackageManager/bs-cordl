#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/IO/SignerStream.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SignerStream)
namespace Org::BouncyCastle::Crypto {
class ISigner;
}
namespace System::IO {
struct SeekOrigin;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::IO {
class SignerStream;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::IO::SignerStream);
// Dependencies System.IO.Stream
namespace Org::BouncyCastle::Crypto::IO {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.IO.SignerStream
class CORDL_TYPE SignerStream : public ::System::IO::Stream {
public:
  // Declarations
  __declspec(property(get = get_CanRead)) bool CanRead;

  __declspec(property(get = get_CanSeek)) bool CanSeek;

  __declspec(property(get = get_CanWrite)) bool CanWrite;

  __declspec(property(get = get_Length)) int64_t Length;

  __declspec(property(get = get_Position, put = set_Position)) int64_t Position;

  /// @brief Field inSigner, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_inSigner, put = __cordl_internal_set_inSigner)) ::Org::BouncyCastle::Crypto::ISigner* inSigner;

  /// @brief Field outSigner, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_outSigner, put = __cordl_internal_set_outSigner)) ::Org::BouncyCastle::Crypto::ISigner* outSigner;

  /// @brief Field stream, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_stream, put = __cordl_internal_set_stream)) ::System::IO::Stream* stream;

  /// @brief Method Close, addr 0x23935a0, size 0x68, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method Flush, addr 0x2393608, size 0x24, virtual true, abstract: false, final false
  inline void Flush();

  static inline ::Org::BouncyCastle::Crypto::IO::SignerStream* New_ctor(::System::IO::Stream* stream, ::Org::BouncyCastle::Crypto::ISigner* readSigner,
                                                                        ::Org::BouncyCastle::Crypto::ISigner* writeSigner);

  /// @brief Method Read, addr 0x2393154, size 0xfc, virtual true, abstract: false, final false
  inline int32_t Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method ReadByte, addr 0x2393250, size 0xd0, virtual true, abstract: false, final false
  inline int32_t ReadByte();

  /// @brief Method ReadSigner, addr 0x2393144, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::ISigner* ReadSigner();

  /// @brief Method Seek, addr 0x239362c, size 0x24, virtual true, abstract: false, final false
  inline int64_t Seek(int64_t offset, ::System::IO::SeekOrigin origin);

  /// @brief Method SetLength, addr 0x2393650, size 0x24, virtual true, abstract: false, final false
  inline void SetLength(int64_t length);

  /// @brief Method Write, addr 0x2393320, size 0xf0, virtual true, abstract: false, final false
  inline void Write(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method WriteByte, addr 0x2393410, size 0xc8, virtual true, abstract: false, final false
  inline void WriteByte(uint8_t b);

  /// @brief Method WriteSigner, addr 0x239314c, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::ISigner* WriteSigner();

  constexpr ::Org::BouncyCastle::Crypto::ISigner* const& __cordl_internal_get_inSigner() const;

  constexpr ::Org::BouncyCastle::Crypto::ISigner*& __cordl_internal_get_inSigner();

  constexpr ::Org::BouncyCastle::Crypto::ISigner* const& __cordl_internal_get_outSigner() const;

  constexpr ::Org::BouncyCastle::Crypto::ISigner*& __cordl_internal_get_outSigner();

  constexpr ::System::IO::Stream* const& __cordl_internal_get_stream() const;

  constexpr ::System::IO::Stream*& __cordl_internal_get_stream();

  constexpr void __cordl_internal_set_inSigner(::Org::BouncyCastle::Crypto::ISigner* value);

  constexpr void __cordl_internal_set_outSigner(::Org::BouncyCastle::Crypto::ISigner* value);

  constexpr void __cordl_internal_set_stream(::System::IO::Stream* value);

  /// @brief Method .ctor, addr 0x23930c4, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* stream, ::Org::BouncyCastle::Crypto::ISigner* readSigner, ::Org::BouncyCastle::Crypto::ISigner* writeSigner);

  /// @brief Method get_CanRead, addr 0x23934d8, size 0x20, virtual true, abstract: false, final false
  inline bool get_CanRead();

  /// @brief Method get_CanSeek, addr 0x2393518, size 0x20, virtual true, abstract: false, final false
  inline bool get_CanSeek();

  /// @brief Method get_CanWrite, addr 0x23934f8, size 0x20, virtual true, abstract: false, final false
  inline bool get_CanWrite();

  /// @brief Method get_Length, addr 0x2393538, size 0x20, virtual true, abstract: false, final false
  inline int64_t get_Length();

  /// @brief Method get_Position, addr 0x2393558, size 0x24, virtual true, abstract: false, final false
  inline int64_t get_Position();

  /// @brief Method set_Position, addr 0x239357c, size 0x24, virtual true, abstract: false, final false
  inline void set_Position(int64_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SignerStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SignerStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SignerStream(SignerStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SignerStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SignerStream(SignerStream const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 933 };

  /// @brief Field stream, offset: 0x28, size: 0x8, def value: None
  ::System::IO::Stream* ___stream;

  /// @brief Field inSigner, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::ISigner* ___inSigner;

  /// @brief Field outSigner, offset: 0x38, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::ISigner* ___outSigner;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::IO::SignerStream, ___stream) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::IO::SignerStream, ___inSigner) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::IO::SignerStream, ___outSigner) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::IO::SignerStream, 0x40>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::IO
NEED_NO_BOX(::Org::BouncyCastle::Crypto::IO::SignerStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::IO::SignerStream*, "Org.BouncyCastle.Crypto.IO", "SignerStream");
