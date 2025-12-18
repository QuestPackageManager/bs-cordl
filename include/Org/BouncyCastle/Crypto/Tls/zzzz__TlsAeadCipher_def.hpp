#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/TlsAeadCipher.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TlsAeadCipher)
namespace Org::BouncyCastle::Crypto::Modes {
class IAeadBlockCipher;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCipher;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsAeadCipher;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::TlsAeadCipher);
// Dependencies System.Object
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsAeadCipher
class CORDL_TYPE TlsAeadCipher : public ::System::Object {
public:
  // Declarations
  /// @brief Field context, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_context, put = __cordl_internal_set_context)) ::Org::BouncyCastle::Crypto::Tls::TlsContext* context;

  /// @brief Field decryptCipher, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_decryptCipher, put = __cordl_internal_set_decryptCipher)) ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher* decryptCipher;

  /// @brief Field decryptImplicitNonce, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_decryptImplicitNonce, put = __cordl_internal_set_decryptImplicitNonce)) ::ArrayW<uint8_t, ::Array<uint8_t>*> decryptImplicitNonce;

  /// @brief Field encryptCipher, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_encryptCipher, put = __cordl_internal_set_encryptCipher)) ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher* encryptCipher;

  /// @brief Field encryptImplicitNonce, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_encryptImplicitNonce, put = __cordl_internal_set_encryptImplicitNonce)) ::ArrayW<uint8_t, ::Array<uint8_t>*> encryptImplicitNonce;

  /// @brief Field macSize, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_macSize, put = __cordl_internal_set_macSize)) int32_t macSize;

  /// @brief Field nonceMode, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_nonceMode, put = __cordl_internal_set_nonceMode)) int32_t nonceMode;

  /// @brief Field record_iv_length, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_record_iv_length, put = __cordl_internal_set_record_iv_length)) int32_t record_iv_length;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsCipher"
  constexpr operator ::Org::BouncyCastle::Crypto::Tls::TlsCipher*() noexcept;

  /// @brief Method DecodeCiphertext, addr 0x33777b0, size 0x554, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> DecodeCiphertext(int64_t seqNo, uint8_t type, ::ArrayW<uint8_t, ::Array<uint8_t>*> ciphertext, int32_t offset, int32_t len);

  /// @brief Method EncodePlaintext, addr 0x3377260, size 0x550, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> EncodePlaintext(int64_t seqNo, uint8_t type, ::ArrayW<uint8_t, ::Array<uint8_t>*> plaintext, int32_t offset, int32_t len);

  /// @brief Method GetAdditionalData, addr 0x3377d04, size 0x170, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetAdditionalData(int64_t seqNo, uint8_t type, int32_t len);

  /// @brief Method GetPlaintextLimit, addr 0x3377250, size 0x10, virtual true, abstract: false, final false
  inline int32_t GetPlaintextLimit(int32_t ciphertextLimit);

  static inline ::Org::BouncyCastle::Crypto::Tls::TlsAeadCipher* New_ctor(::Org::BouncyCastle::Crypto::Tls::TlsContext* context,
                                                                          ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher* clientWriteCipher,
                                                                          ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher* serverWriteCipher, int32_t cipherKeySize, int32_t macSize);

  static inline ::Org::BouncyCastle::Crypto::Tls::TlsAeadCipher* New_ctor(::Org::BouncyCastle::Crypto::Tls::TlsContext* context,
                                                                          ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher* clientWriteCipher,
                                                                          ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher* serverWriteCipher, int32_t cipherKeySize, int32_t macSize,
                                                                          int32_t nonceMode);

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsContext* const& __cordl_internal_get_context() const;

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsContext*& __cordl_internal_get_context();

  constexpr ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher* const& __cordl_internal_get_decryptCipher() const;

  constexpr ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher*& __cordl_internal_get_decryptCipher();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_decryptImplicitNonce() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_decryptImplicitNonce();

  constexpr ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher* const& __cordl_internal_get_encryptCipher() const;

  constexpr ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher*& __cordl_internal_get_encryptCipher();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_encryptImplicitNonce() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_encryptImplicitNonce();

  constexpr int32_t const& __cordl_internal_get_macSize() const;

  constexpr int32_t& __cordl_internal_get_macSize();

  constexpr int32_t const& __cordl_internal_get_nonceMode() const;

  constexpr int32_t& __cordl_internal_get_nonceMode();

  constexpr int32_t const& __cordl_internal_get_record_iv_length() const;

  constexpr int32_t& __cordl_internal_get_record_iv_length();

  constexpr void __cordl_internal_set_context(::Org::BouncyCastle::Crypto::Tls::TlsContext* value);

  constexpr void __cordl_internal_set_decryptCipher(::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher* value);

  constexpr void __cordl_internal_set_decryptImplicitNonce(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_encryptCipher(::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher* value);

  constexpr void __cordl_internal_set_encryptImplicitNonce(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_macSize(int32_t value);

  constexpr void __cordl_internal_set_nonceMode(int32_t value);

  constexpr void __cordl_internal_set_record_iv_length(int32_t value);

  /// @brief Method .ctor, addr 0x3376d90, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher* clientWriteCipher,
                    ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher* serverWriteCipher, int32_t cipherKeySize, int32_t macSize);

  /// @brief Method .ctor, addr 0x3376d98, size 0x4b8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher* clientWriteCipher,
                    ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher* serverWriteCipher, int32_t cipherKeySize, int32_t macSize, int32_t nonceMode);

  /// @brief Convert to "::Org::BouncyCastle::Crypto::Tls::TlsCipher"
  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsCipher* i___Org__BouncyCastle__Crypto__Tls__TlsCipher() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TlsAeadCipher();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TlsAeadCipher", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TlsAeadCipher(TlsAeadCipher&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TlsAeadCipher", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TlsAeadCipher(TlsAeadCipher const&) = delete;

  /// @brief Field NONCE_DRAFT_CHACHA20_POLY1305 offset 0xffffffff size 0x4
  static constexpr int32_t NONCE_DRAFT_CHACHA20_POLY1305{ static_cast<int32_t>(0x2) };

  /// @brief Field NONCE_RFC5288 offset 0xffffffff size 0x4
  static constexpr int32_t NONCE_RFC5288{ static_cast<int32_t>(0x1) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1287 };

  /// @brief Field context, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsContext* ___context;

  /// @brief Field macSize, offset: 0x18, size: 0x4, def value: None
  int32_t ___macSize;

  /// @brief Field record_iv_length, offset: 0x1c, size: 0x4, def value: None
  int32_t ___record_iv_length;

  /// @brief Field encryptCipher, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher* ___encryptCipher;

  /// @brief Field decryptCipher, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher* ___decryptCipher;

  /// @brief Field encryptImplicitNonce, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___encryptImplicitNonce;

  /// @brief Field decryptImplicitNonce, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___decryptImplicitNonce;

  /// @brief Field nonceMode, offset: 0x40, size: 0x4, def value: None
  int32_t ___nonceMode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsAeadCipher, ___context) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsAeadCipher, ___macSize) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsAeadCipher, ___record_iv_length) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsAeadCipher, ___encryptCipher) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsAeadCipher, ___decryptCipher) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsAeadCipher, ___encryptImplicitNonce) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsAeadCipher, ___decryptImplicitNonce) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsAeadCipher, ___nonceMode) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::TlsAeadCipher, 0x48>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsAeadCipher);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsAeadCipher*, "Org.BouncyCastle.Crypto.Tls", "TlsAeadCipher");
