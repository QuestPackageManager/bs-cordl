#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/HeartbeatMessage.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__MemoryStream_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HeartbeatMessage)
namespace Org::BouncyCastle::Crypto::Tls {
class HeartbeatMessage_PayloadBuffer;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class HeartbeatMessage;
}
namespace Org::BouncyCastle::Crypto::Tls {
class HeartbeatMessage_PayloadBuffer;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage);
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage_PayloadBuffer);
// Dependencies System.IO.MemoryStream
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Tls.HeartbeatMessage/PayloadBuffer
class CORDL_TYPE HeartbeatMessage_PayloadBuffer : public ::System::IO::MemoryStream {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage_PayloadBuffer* New_ctor();

  /// @brief Method ToTruncatedByteArray, addr 0x2417530, size 0xa8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ToTruncatedByteArray(int32_t payloadLength);

  /// @brief Method .ctor, addr 0x2417528, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HeartbeatMessage_PayloadBuffer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HeartbeatMessage_PayloadBuffer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HeartbeatMessage_PayloadBuffer(HeartbeatMessage_PayloadBuffer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HeartbeatMessage_PayloadBuffer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HeartbeatMessage_PayloadBuffer(HeartbeatMessage_PayloadBuffer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1248 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage_PayloadBuffer, 0x50>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
// Dependencies System.Object
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Tls.HeartbeatMessage
class CORDL_TYPE HeartbeatMessage : public ::System::Object {
public:
  // Declarations
  using PayloadBuffer = ::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage_PayloadBuffer;

  /// @brief Field mPaddingLength, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_mPaddingLength, put = __cordl_internal_set_mPaddingLength)) int32_t mPaddingLength;

  /// @brief Field mPayload, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_mPayload, put = __cordl_internal_set_mPayload)) ::ArrayW<uint8_t, ::Array<uint8_t>*> mPayload;

  /// @brief Field mType, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_mType, put = __cordl_internal_set_mType)) uint8_t mType;

  /// @brief Method Encode, addr 0x2417178, size 0x1fc, virtual true, abstract: false, final false
  inline void Encode(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, ::System::IO::Stream* output);

  static inline ::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage* New_ctor(uint8_t type, ::ArrayW<uint8_t, ::Array<uint8_t>*> payload, int32_t paddingLength);

  /// @brief Method Parse, addr 0x2417374, size 0x1b4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage* Parse(::System::IO::Stream* input);

  constexpr int32_t const& __cordl_internal_get_mPaddingLength() const;

  constexpr int32_t& __cordl_internal_get_mPaddingLength();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_mPayload() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_mPayload();

  constexpr uint8_t const& __cordl_internal_get_mType() const;

  constexpr uint8_t& __cordl_internal_get_mType();

  constexpr void __cordl_internal_set_mPaddingLength(int32_t value);

  constexpr void __cordl_internal_set_mPayload(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_mType(uint8_t value);

  /// @brief Method .ctor, addr 0x2417040, size 0x124, virtual false, abstract: false, final false
  inline void _ctor(uint8_t type, ::ArrayW<uint8_t, ::Array<uint8_t>*> payload, int32_t paddingLength);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HeartbeatMessage();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HeartbeatMessage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HeartbeatMessage(HeartbeatMessage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HeartbeatMessage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HeartbeatMessage(HeartbeatMessage const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1249 };

  /// @brief Field mType, offset: 0x10, size: 0x1, def value: None
  uint8_t ___mType;

  /// @brief Field mPayload, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mPayload;

  /// @brief Field mPaddingLength, offset: 0x20, size: 0x4, def value: None
  int32_t ___mPaddingLength;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage, ___mType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage, ___mPayload) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage, ___mPaddingLength) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage*, "Org.BouncyCastle.Crypto.Tls", "HeartbeatMessage");
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage_PayloadBuffer);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage_PayloadBuffer*, "Org.BouncyCastle.Crypto.Tls", "HeartbeatMessage/PayloadBuffer");
