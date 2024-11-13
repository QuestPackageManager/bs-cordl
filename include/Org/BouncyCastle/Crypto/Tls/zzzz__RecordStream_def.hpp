#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/RecordStream.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseOutputStream_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RecordStream)
namespace Org::BouncyCastle::Crypto::Tls {
class ProtocolVersion;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCipher;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCompression;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsHandshakeHash;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsProtocol;
}
namespace Org::BouncyCastle::Crypto::Tls {
class __RecordStream__HandshakeHashUpdateStream;
}
namespace Org::BouncyCastle::Crypto::Tls {
class __RecordStream__SequenceNumber;
}
namespace Org::BouncyCastle::Utilities::IO {
class BaseOutputStream;
}
namespace System::IO {
class MemoryStream;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class RecordStream;
}
namespace Org::BouncyCastle::Crypto::Tls {
class __RecordStream__HandshakeHashUpdateStream;
}
namespace Org::BouncyCastle::Crypto::Tls {
class __RecordStream__SequenceNumber;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::RecordStream);
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::__RecordStream__HandshakeHashUpdateStream);
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::__RecordStream__SequenceNumber);
// Type: ::HandshakeHashUpdateStream
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: ::RecordStream::HandshakeHashUpdateStream*
class CORDL_TYPE __RecordStream__HandshakeHashUpdateStream : public ::Org::BouncyCastle::Utilities::IO::BaseOutputStream {
public:
  // Declarations
  /// @brief Field mOuter, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_mOuter, put = __cordl_internal_set_mOuter)) ::Org::BouncyCastle::Crypto::Tls::RecordStream* mOuter;

  static inline ::Org::BouncyCastle::Crypto::Tls::__RecordStream__HandshakeHashUpdateStream* New_ctor(::Org::BouncyCastle::Crypto::Tls::RecordStream* mOuter);

  /// @brief Method Write, addr 0x23e4c10, size 0xcc, virtual true, abstract: false, final false
  inline void Write(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off, int32_t len);

  constexpr ::Org::BouncyCastle::Crypto::Tls::RecordStream*& __cordl_internal_get_mOuter();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::RecordStream*> const& __cordl_internal_get_mOuter() const;

  constexpr void __cordl_internal_set_mOuter(::Org::BouncyCastle::Crypto::Tls::RecordStream* value);

  /// @brief Method .ctor, addr 0x23e38fc, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Tls::RecordStream* mOuter);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RecordStream__HandshakeHashUpdateStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RecordStream__HandshakeHashUpdateStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RecordStream__HandshakeHashUpdateStream(__RecordStream__HandshakeHashUpdateStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RecordStream__HandshakeHashUpdateStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RecordStream__HandshakeHashUpdateStream(__RecordStream__HandshakeHashUpdateStream const&) = delete;

  /// @brief Field mOuter, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::RecordStream* ___mOuter;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1263 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::__RecordStream__HandshakeHashUpdateStream, 0x38>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::__RecordStream__HandshakeHashUpdateStream, ___mOuter) == 0x30, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
// Type: ::SequenceNumber
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: ::RecordStream::SequenceNumber*
class CORDL_TYPE __RecordStream__SequenceNumber : public ::System::Object {
public:
  // Declarations
  /// @brief Field exhausted, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_exhausted, put = __cordl_internal_set_exhausted)) bool exhausted;

  /// @brief Field value, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_value, put = __cordl_internal_set_value)) int64_t value;

  static inline ::Org::BouncyCastle::Crypto::Tls::__RecordStream__SequenceNumber* New_ctor();

  /// @brief Method NextValue, addr 0x23e447c, size 0x74, virtual false, abstract: false, final false
  inline int64_t NextValue(uint8_t alertDescription);

  constexpr bool const& __cordl_internal_get_exhausted() const;

  constexpr bool& __cordl_internal_get_exhausted();

  constexpr int64_t const& __cordl_internal_get_value() const;

  constexpr int64_t& __cordl_internal_get_value();

  constexpr void __cordl_internal_set_exhausted(bool value);

  constexpr void __cordl_internal_set_value(int64_t value);

  /// @brief Method .ctor, addr 0x23e38ec, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RecordStream__SequenceNumber();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RecordStream__SequenceNumber", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RecordStream__SequenceNumber(__RecordStream__SequenceNumber&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RecordStream__SequenceNumber", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RecordStream__SequenceNumber(__RecordStream__SequenceNumber const&) = delete;

  /// @brief Field value, offset: 0x10, size: 0x8, def value: None
  int64_t ___value;

  /// @brief Field exhausted, offset: 0x18, size: 0x1, def value: None
  bool ___exhausted;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1264 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::__RecordStream__SequenceNumber, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::__RecordStream__SequenceNumber, ___value) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::__RecordStream__SequenceNumber, ___exhausted) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
// Type: Org.BouncyCastle.Crypto.Tls::RecordStream
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 160, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Tls::RecordStream*
class CORDL_TYPE RecordStream : public ::System::Object {
public:
  // Declarations
  using HandshakeHashUpdateStream = ::Org::BouncyCastle::Crypto::Tls::__RecordStream__HandshakeHashUpdateStream;

  using SequenceNumber = ::Org::BouncyCastle::Crypto::Tls::__RecordStream__SequenceNumber;

  __declspec(property(get = get_HandshakeHash)) ::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* HandshakeHash;

  __declspec(property(get = get_HandshakeHashUpdater)) ::System::IO::Stream* HandshakeHashUpdater;

  __declspec(property(get = get_ReadVersion, put = set_ReadVersion)) ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* ReadVersion;

  /// @brief Field mBuffer, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_mBuffer, put = __cordl_internal_set_mBuffer)) ::System::IO::MemoryStream* mBuffer;

  /// @brief Field mCiphertextLimit, offset 0x9c, size 0x4
  __declspec(property(get = __cordl_internal_get_mCiphertextLimit, put = __cordl_internal_set_mCiphertextLimit)) int32_t mCiphertextLimit;

  /// @brief Field mCompressedLimit, offset 0x98, size 0x4
  __declspec(property(get = __cordl_internal_get_mCompressedLimit, put = __cordl_internal_set_mCompressedLimit)) int32_t mCompressedLimit;

  /// @brief Field mHandler, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_mHandler, put = __cordl_internal_set_mHandler)) ::Org::BouncyCastle::Crypto::Tls::TlsProtocol* mHandler;

  /// @brief Field mHandshakeHash, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_mHandshakeHash, put = __cordl_internal_set_mHandshakeHash)) ::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* mHandshakeHash;

  /// @brief Field mHandshakeHashUpdater, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_mHandshakeHashUpdater, put = __cordl_internal_set_mHandshakeHashUpdater)) ::Org::BouncyCastle::Utilities::IO::BaseOutputStream* mHandshakeHashUpdater;

  /// @brief Field mInput, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_mInput, put = __cordl_internal_set_mInput)) ::System::IO::Stream* mInput;

  /// @brief Field mOutput, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_mOutput, put = __cordl_internal_set_mOutput)) ::System::IO::Stream* mOutput;

  /// @brief Field mPendingCipher, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_mPendingCipher, put = __cordl_internal_set_mPendingCipher)) ::Org::BouncyCastle::Crypto::Tls::TlsCipher* mPendingCipher;

  /// @brief Field mPendingCompression, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_mPendingCompression, put = __cordl_internal_set_mPendingCompression)) ::Org::BouncyCastle::Crypto::Tls::TlsCompression* mPendingCompression;

  /// @brief Field mPlaintextLimit, offset 0x94, size 0x4
  __declspec(property(get = __cordl_internal_get_mPlaintextLimit, put = __cordl_internal_set_mPlaintextLimit)) int32_t mPlaintextLimit;

  /// @brief Field mReadCipher, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_mReadCipher, put = __cordl_internal_set_mReadCipher)) ::Org::BouncyCastle::Crypto::Tls::TlsCipher* mReadCipher;

  /// @brief Field mReadCompression, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_mReadCompression, put = __cordl_internal_set_mReadCompression)) ::Org::BouncyCastle::Crypto::Tls::TlsCompression* mReadCompression;

  /// @brief Field mReadSeqNo, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_mReadSeqNo, put = __cordl_internal_set_mReadSeqNo)) ::Org::BouncyCastle::Crypto::Tls::__RecordStream__SequenceNumber* mReadSeqNo;

  /// @brief Field mReadVersion, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_mReadVersion, put = __cordl_internal_set_mReadVersion)) ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* mReadVersion;

  /// @brief Field mRestrictReadVersion, offset 0x90, size 0x1
  __declspec(property(get = __cordl_internal_get_mRestrictReadVersion, put = __cordl_internal_set_mRestrictReadVersion)) bool mRestrictReadVersion;

  /// @brief Field mWriteCipher, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_mWriteCipher, put = __cordl_internal_set_mWriteCipher)) ::Org::BouncyCastle::Crypto::Tls::TlsCipher* mWriteCipher;

  /// @brief Field mWriteCompression, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_mWriteCompression, put = __cordl_internal_set_mWriteCompression)) ::Org::BouncyCastle::Crypto::Tls::TlsCompression* mWriteCompression;

  /// @brief Field mWriteSeqNo, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_mWriteSeqNo, put = __cordl_internal_set_mWriteSeqNo)) ::Org::BouncyCastle::Crypto::Tls::__RecordStream__SequenceNumber* mWriteSeqNo;

  /// @brief Field mWriteVersion, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_mWriteVersion, put = __cordl_internal_set_mWriteVersion)) ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* mWriteVersion;

  /// @brief Method CheckLength, addr 0x23e3df0, size 0x50, virtual false, abstract: false, final false
  static inline void CheckLength(int32_t length, int32_t limit, uint8_t alertDescription);

  /// @brief Method CheckRecordHeader, addr 0x23e3c70, size 0x12c, virtual true, abstract: false, final false
  inline void CheckRecordHeader(::ArrayW<uint8_t, ::Array<uint8_t>*> recordHeader);

  /// @brief Method CheckType, addr 0x23e3d9c, size 0x54, virtual false, abstract: false, final false
  static inline void CheckType(uint8_t type, uint8_t alertDescription);

  /// @brief Method DecodeAndVerify, addr 0x23e41f8, size 0x284, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> DecodeAndVerify(uint8_t type, ::System::IO::Stream* input, int32_t len);

  /// @brief Method FinaliseHandshake, addr 0x23e3bf4, size 0x7c, virtual true, abstract: false, final false
  inline void FinaliseHandshake();

  /// @brief Method Flush, addr 0x23e4bec, size 0x24, virtual true, abstract: false, final false
  inline void Flush();

  /// @brief Method GetBufferContents, addr 0x23e44f0, size 0x54, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetBufferContents();

  /// @brief Method GetPlaintextLimit, addr 0x23e3a40, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetPlaintextLimit();

  /// @brief Method Init, addr 0x23e3924, size 0x11c, virtual true, abstract: false, final false
  inline void Init(::Org::BouncyCastle::Crypto::Tls::TlsContext* context);

  static inline ::Org::BouncyCastle::Crypto::Tls::RecordStream* New_ctor(::Org::BouncyCastle::Crypto::Tls::TlsProtocol* handler, ::System::IO::Stream* input, ::System::IO::Stream* output);

  /// @brief Method NotifyHelloComplete, addr 0x23e4920, size 0xac, virtual true, abstract: false, final false
  inline void NotifyHelloComplete();

  /// @brief Method PrepareToFinish, addr 0x23e49dc, size 0xb0, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* PrepareToFinish();

  /// @brief Method ReadRecord, addr 0x23e3e40, size 0x1b0, virtual true, abstract: false, final false
  inline bool ReadRecord();

  /// @brief Method ReceivedReadCipherSpec, addr 0x23e3b44, size 0xb0, virtual true, abstract: false, final false
  inline void ReceivedReadCipherSpec();

  /// @brief Method SafeClose, addr 0x23e4a8c, size 0x160, virtual true, abstract: false, final false
  inline void SafeClose();

  /// @brief Method SentWriteCipherSpec, addr 0x23e3a94, size 0xb0, virtual true, abstract: false, final false
  inline void SentWriteCipherSpec();

  /// @brief Method SetPendingConnectionState, addr 0x23e3a88, size 0xc, virtual true, abstract: false, final false
  inline void SetPendingConnectionState(::Org::BouncyCastle::Crypto::Tls::TlsCompression* tlsCompression, ::Org::BouncyCastle::Crypto::Tls::TlsCipher* tlsCipher);

  /// @brief Method SetPlaintextLimit, addr 0x23e3a48, size 0x1c, virtual true, abstract: false, final false
  inline void SetPlaintextLimit(int32_t plaintextLimit);

  /// @brief Method SetRestrictReadVersion, addr 0x23e3a7c, size 0xc, virtual true, abstract: false, final false
  inline void SetRestrictReadVersion(bool enabled);

  /// @brief Method SetWriteVersion, addr 0x23e3a74, size 0x8, virtual true, abstract: false, final false
  inline void SetWriteVersion(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* writeVersion);

  /// @brief Method WriteRecord, addr 0x23e4544, size 0x3dc, virtual true, abstract: false, final false
  inline void WriteRecord(uint8_t type, ::ArrayW<uint8_t, ::Array<uint8_t>*> plaintext, int32_t plaintextOffset, int32_t plaintextLength);

  constexpr ::System::IO::MemoryStream*& __cordl_internal_get_mBuffer();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::MemoryStream*> const& __cordl_internal_get_mBuffer() const;

  constexpr int32_t const& __cordl_internal_get_mCiphertextLimit() const;

  constexpr int32_t& __cordl_internal_get_mCiphertextLimit();

  constexpr int32_t const& __cordl_internal_get_mCompressedLimit() const;

  constexpr int32_t& __cordl_internal_get_mCompressedLimit();

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsProtocol*& __cordl_internal_get_mHandler();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*> const& __cordl_internal_get_mHandler() const;

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash*& __cordl_internal_get_mHandshakeHash();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash*> const& __cordl_internal_get_mHandshakeHash() const;

  constexpr ::Org::BouncyCastle::Utilities::IO::BaseOutputStream*& __cordl_internal_get_mHandshakeHashUpdater();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::IO::BaseOutputStream*> const& __cordl_internal_get_mHandshakeHashUpdater() const;

  constexpr ::System::IO::Stream*& __cordl_internal_get_mInput();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& __cordl_internal_get_mInput() const;

  constexpr ::System::IO::Stream*& __cordl_internal_get_mOutput();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& __cordl_internal_get_mOutput() const;

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsCipher*& __cordl_internal_get_mPendingCipher();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsCipher*> const& __cordl_internal_get_mPendingCipher() const;

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsCompression*& __cordl_internal_get_mPendingCompression();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsCompression*> const& __cordl_internal_get_mPendingCompression() const;

  constexpr int32_t const& __cordl_internal_get_mPlaintextLimit() const;

  constexpr int32_t& __cordl_internal_get_mPlaintextLimit();

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsCipher*& __cordl_internal_get_mReadCipher();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsCipher*> const& __cordl_internal_get_mReadCipher() const;

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsCompression*& __cordl_internal_get_mReadCompression();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsCompression*> const& __cordl_internal_get_mReadCompression() const;

  constexpr ::Org::BouncyCastle::Crypto::Tls::__RecordStream__SequenceNumber*& __cordl_internal_get_mReadSeqNo();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::__RecordStream__SequenceNumber*> const& __cordl_internal_get_mReadSeqNo() const;

  constexpr ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*& __cordl_internal_get_mReadVersion();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*> const& __cordl_internal_get_mReadVersion() const;

  constexpr bool const& __cordl_internal_get_mRestrictReadVersion() const;

  constexpr bool& __cordl_internal_get_mRestrictReadVersion();

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsCipher*& __cordl_internal_get_mWriteCipher();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsCipher*> const& __cordl_internal_get_mWriteCipher() const;

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsCompression*& __cordl_internal_get_mWriteCompression();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsCompression*> const& __cordl_internal_get_mWriteCompression() const;

  constexpr ::Org::BouncyCastle::Crypto::Tls::__RecordStream__SequenceNumber*& __cordl_internal_get_mWriteSeqNo();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::__RecordStream__SequenceNumber*> const& __cordl_internal_get_mWriteSeqNo() const;

  constexpr ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*& __cordl_internal_get_mWriteVersion();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*> const& __cordl_internal_get_mWriteVersion() const;

  constexpr void __cordl_internal_set_mBuffer(::System::IO::MemoryStream* value);

  constexpr void __cordl_internal_set_mCiphertextLimit(int32_t value);

  constexpr void __cordl_internal_set_mCompressedLimit(int32_t value);

  constexpr void __cordl_internal_set_mHandler(::Org::BouncyCastle::Crypto::Tls::TlsProtocol* value);

  constexpr void __cordl_internal_set_mHandshakeHash(::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* value);

  constexpr void __cordl_internal_set_mHandshakeHashUpdater(::Org::BouncyCastle::Utilities::IO::BaseOutputStream* value);

  constexpr void __cordl_internal_set_mInput(::System::IO::Stream* value);

  constexpr void __cordl_internal_set_mOutput(::System::IO::Stream* value);

  constexpr void __cordl_internal_set_mPendingCipher(::Org::BouncyCastle::Crypto::Tls::TlsCipher* value);

  constexpr void __cordl_internal_set_mPendingCompression(::Org::BouncyCastle::Crypto::Tls::TlsCompression* value);

  constexpr void __cordl_internal_set_mPlaintextLimit(int32_t value);

  constexpr void __cordl_internal_set_mReadCipher(::Org::BouncyCastle::Crypto::Tls::TlsCipher* value);

  constexpr void __cordl_internal_set_mReadCompression(::Org::BouncyCastle::Crypto::Tls::TlsCompression* value);

  constexpr void __cordl_internal_set_mReadSeqNo(::Org::BouncyCastle::Crypto::Tls::__RecordStream__SequenceNumber* value);

  constexpr void __cordl_internal_set_mReadVersion(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* value);

  constexpr void __cordl_internal_set_mRestrictReadVersion(bool value);

  constexpr void __cordl_internal_set_mWriteCipher(::Org::BouncyCastle::Crypto::Tls::TlsCipher* value);

  constexpr void __cordl_internal_set_mWriteCompression(::Org::BouncyCastle::Crypto::Tls::TlsCompression* value);

  constexpr void __cordl_internal_set_mWriteSeqNo(::Org::BouncyCastle::Crypto::Tls::__RecordStream__SequenceNumber* value);

  constexpr void __cordl_internal_set_mWriteVersion(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* value);

  /// @brief Method .ctor, addr 0x23e3790, size 0x15c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Tls::TlsProtocol* handler, ::System::IO::Stream* input, ::System::IO::Stream* output);

  /// @brief Method get_HandshakeHash, addr 0x23e49cc, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* get_HandshakeHash();

  /// @brief Method get_HandshakeHashUpdater, addr 0x23e49d4, size 0x8, virtual true, abstract: false, final false
  inline ::System::IO::Stream* get_HandshakeHashUpdater();

  /// @brief Method get_ReadVersion, addr 0x23e3a64, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* get_ReadVersion();

  /// @brief Method set_ReadVersion, addr 0x23e3a6c, size 0x8, virtual true, abstract: false, final false
  inline void set_ReadVersion(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RecordStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RecordStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RecordStream(RecordStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RecordStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RecordStream(RecordStream const&) = delete;

  /// @brief Field mHandler, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsProtocol* ___mHandler;

  /// @brief Field mInput, offset: 0x18, size: 0x8, def value: None
  ::System::IO::Stream* ___mInput;

  /// @brief Field mOutput, offset: 0x20, size: 0x8, def value: None
  ::System::IO::Stream* ___mOutput;

  /// @brief Field mPendingCompression, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsCompression* ___mPendingCompression;

  /// @brief Field mReadCompression, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsCompression* ___mReadCompression;

  /// @brief Field mWriteCompression, offset: 0x38, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsCompression* ___mWriteCompression;

  /// @brief Field mPendingCipher, offset: 0x40, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsCipher* ___mPendingCipher;

  /// @brief Field mReadCipher, offset: 0x48, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsCipher* ___mReadCipher;

  /// @brief Field mWriteCipher, offset: 0x50, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsCipher* ___mWriteCipher;

  /// @brief Field mReadSeqNo, offset: 0x58, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::__RecordStream__SequenceNumber* ___mReadSeqNo;

  /// @brief Field mWriteSeqNo, offset: 0x60, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::__RecordStream__SequenceNumber* ___mWriteSeqNo;

  /// @brief Field mBuffer, offset: 0x68, size: 0x8, def value: None
  ::System::IO::MemoryStream* ___mBuffer;

  /// @brief Field mHandshakeHash, offset: 0x70, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* ___mHandshakeHash;

  /// @brief Field mHandshakeHashUpdater, offset: 0x78, size: 0x8, def value: None
  ::Org::BouncyCastle::Utilities::IO::BaseOutputStream* ___mHandshakeHashUpdater;

  /// @brief Field mReadVersion, offset: 0x80, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* ___mReadVersion;

  /// @brief Field mWriteVersion, offset: 0x88, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* ___mWriteVersion;

  /// @brief Field mRestrictReadVersion, offset: 0x90, size: 0x1, def value: None
  bool ___mRestrictReadVersion;

  /// @brief Field mPlaintextLimit, offset: 0x94, size: 0x4, def value: None
  int32_t ___mPlaintextLimit;

  /// @brief Field mCompressedLimit, offset: 0x98, size: 0x4, def value: None
  int32_t ___mCompressedLimit;

  /// @brief Field mCiphertextLimit, offset: 0x9c, size: 0x4, def value: None
  int32_t ___mCiphertextLimit;

  /// @brief Field DEFAULT_PLAINTEXT_LIMIT offset 0xffffffff size 0x4
  static constexpr int32_t DEFAULT_PLAINTEXT_LIMIT{ static_cast<int32_t>(0x4000) };

  /// @brief Field TLS_HEADER_LENGTH_OFFSET offset 0xffffffff size 0x4
  static constexpr int32_t TLS_HEADER_LENGTH_OFFSET{ static_cast<int32_t>(0x3) };

  /// @brief Field TLS_HEADER_SIZE offset 0xffffffff size 0x4
  static constexpr int32_t TLS_HEADER_SIZE{ static_cast<int32_t>(0x5) };

  /// @brief Field TLS_HEADER_TYPE_OFFSET offset 0xffffffff size 0x4
  static constexpr int32_t TLS_HEADER_TYPE_OFFSET{ static_cast<int32_t>(0x0) };

  /// @brief Field TLS_HEADER_VERSION_OFFSET offset 0xffffffff size 0x4
  static constexpr int32_t TLS_HEADER_VERSION_OFFSET{ static_cast<int32_t>(0x1) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1265 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::RecordStream, 0xa0>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::RecordStream, ___mHandler) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::RecordStream, ___mInput) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::RecordStream, ___mOutput) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::RecordStream, ___mPendingCompression) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::RecordStream, ___mReadCompression) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::RecordStream, ___mWriteCompression) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::RecordStream, ___mPendingCipher) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::RecordStream, ___mReadCipher) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::RecordStream, ___mWriteCipher) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::RecordStream, ___mReadSeqNo) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::RecordStream, ___mWriteSeqNo) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::RecordStream, ___mBuffer) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::RecordStream, ___mHandshakeHash) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::RecordStream, ___mHandshakeHashUpdater) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::RecordStream, ___mReadVersion) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::RecordStream, ___mWriteVersion) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::RecordStream, ___mRestrictReadVersion) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::RecordStream, ___mPlaintextLimit) == 0x94, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::RecordStream, ___mCompressedLimit) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::RecordStream, ___mCiphertextLimit) == 0x9c, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::RecordStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::RecordStream*, "Org.BouncyCastle.Crypto.Tls", "RecordStream");
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::__RecordStream__HandshakeHashUpdateStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::__RecordStream__HandshakeHashUpdateStream*, "Org.BouncyCastle.Crypto.Tls", "RecordStream/HandshakeHashUpdateStream");
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::__RecordStream__SequenceNumber);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::__RecordStream__SequenceNumber*, "Org.BouncyCastle.Crypto.Tls", "RecordStream/SequenceNumber");
