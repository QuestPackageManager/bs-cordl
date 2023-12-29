#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TlsAeadCipher)
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCipher;
}
namespace Org::BouncyCastle::Crypto::Modes {
class IAeadBlockCipher;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsAeadCipher;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::TlsAeadCipher);
// Type: Org.BouncyCastle.Crypto.Tls::TlsAeadCipher
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 68, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1287))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::TlsAeadCipher*
class CORDL_TYPE TlsAeadCipher : public ::System::Object {
public:
  // Declarations
  /// @brief Field context, offset 0x10, size 0x8
  __declspec(property(get = __get_context, put = __set_context))::Org::BouncyCastle::Crypto::Tls::TlsContext* context;

  /// @brief Field macSize, offset 0x18, size 0x4
  __declspec(property(get = __get_macSize, put = __set_macSize)) int32_t macSize;

  /// @brief Field record_iv_length, offset 0x1c, size 0x4
  __declspec(property(get = __get_record_iv_length, put = __set_record_iv_length)) int32_t record_iv_length;

  /// @brief Field encryptCipher, offset 0x20, size 0x8
  __declspec(property(get = __get_encryptCipher, put = __set_encryptCipher))::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher* encryptCipher;

  /// @brief Field decryptCipher, offset 0x28, size 0x8
  __declspec(property(get = __get_decryptCipher, put = __set_decryptCipher))::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher* decryptCipher;

  /// @brief Field encryptImplicitNonce, offset 0x30, size 0x8
  __declspec(property(get = __get_encryptImplicitNonce, put = __set_encryptImplicitNonce))::ArrayW<uint8_t, ::Array<uint8_t>*> encryptImplicitNonce;

  /// @brief Field decryptImplicitNonce, offset 0x38, size 0x8
  __declspec(property(get = __get_decryptImplicitNonce, put = __set_decryptImplicitNonce))::ArrayW<uint8_t, ::Array<uint8_t>*> decryptImplicitNonce;

  /// @brief Field nonceMode, offset 0x40, size 0x4
  __declspec(property(get = __get_nonceMode, put = __set_nonceMode)) int32_t nonceMode;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsCipher"
  constexpr operator ::Org::BouncyCastle::Crypto::Tls::TlsCipher*() noexcept;

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsContext*& __get_context();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsContext*> const& __get_context() const;

  constexpr void __set_context(::Org::BouncyCastle::Crypto::Tls::TlsContext* value);

  constexpr int32_t& __get_macSize();

  constexpr int32_t const& __get_macSize() const;

  constexpr void __set_macSize(int32_t value);

  constexpr int32_t& __get_record_iv_length();

  constexpr int32_t const& __get_record_iv_length() const;

  constexpr void __set_record_iv_length(int32_t value);

  constexpr ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher*& __get_encryptCipher();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher*> const& __get_encryptCipher() const;

  constexpr void __set_encryptCipher(::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher* value);

  constexpr ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher*& __get_decryptCipher();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher*> const& __get_decryptCipher() const;

  constexpr void __set_decryptCipher(::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher* value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_encryptImplicitNonce();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_encryptImplicitNonce() const;

  constexpr void __set_encryptImplicitNonce(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_decryptImplicitNonce();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_decryptImplicitNonce() const;

  constexpr void __set_decryptImplicitNonce(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int32_t& __get_nonceMode();

  constexpr int32_t const& __get_nonceMode() const;

  constexpr void __set_nonceMode(int32_t value);

  static inline ::Org::BouncyCastle::Crypto::Tls::TlsAeadCipher* New_ctor(::Org::BouncyCastle::Crypto::Tls::TlsContext* context,
                                                                          ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher* clientWriteCipher,
                                                                          ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher* serverWriteCipher, int32_t cipherKeySize, int32_t macSize);

  /// @brief Method .ctor addr 0xf229f8 size 0x8 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher* clientWriteCipher,
                    ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher* serverWriteCipher, int32_t cipherKeySize, int32_t macSize);

  static inline ::Org::BouncyCastle::Crypto::Tls::TlsAeadCipher* New_ctor(::Org::BouncyCastle::Crypto::Tls::TlsContext* context,
                                                                          ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher* clientWriteCipher,
                                                                          ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher* serverWriteCipher, int32_t cipherKeySize, int32_t macSize,
                                                                          int32_t nonceMode);

  /// @brief Method .ctor addr 0xf22a00 size 0x4c8 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher* clientWriteCipher,
                    ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher* serverWriteCipher, int32_t cipherKeySize, int32_t macSize, int32_t nonceMode);

  /// @brief Method GetPlaintextLimit addr 0xf22ec8 size 0x10 virtual true final false
  inline int32_t GetPlaintextLimit(int32_t ciphertextLimit);

  /// @brief Method EncodePlaintext addr 0xf22ed8 size 0x574 virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> EncodePlaintext(int64_t seqNo, uint8_t type, ::ArrayW<uint8_t, ::Array<uint8_t>*> plaintext, int32_t offset, int32_t len);

  /// @brief Method DecodeCiphertext addr 0xf2344c size 0x568 virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> DecodeCiphertext(int64_t seqNo, uint8_t type, ::ArrayW<uint8_t, ::Array<uint8_t>*> ciphertext, int32_t offset, int32_t len);

  /// @brief Method GetAdditionalData addr 0xf239b4 size 0x160 virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetAdditionalData(int64_t seqNo, uint8_t type, int32_t len);

  // Ctor Parameters [CppParam { name: "", ty: "TlsAeadCipher", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TlsAeadCipher(TlsAeadCipher&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TlsAeadCipher", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TlsAeadCipher(TlsAeadCipher const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TlsAeadCipher();

public:
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

  /// @brief Field NONCE_RFC5288 offset 0xffffffff size 0x4
  static constexpr int32_t NONCE_RFC5288{ static_cast<int32_t>(0x1) };

  /// @brief Field NONCE_DRAFT_CHACHA20_POLY1305 offset 0xffffffff size 0x4
  static constexpr int32_t NONCE_DRAFT_CHACHA20_POLY1305{ static_cast<int32_t>(0x2) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::TlsAeadCipher, 0x48>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsAeadCipher, ___context) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsAeadCipher, ___macSize) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsAeadCipher, ___record_iv_length) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsAeadCipher, ___encryptCipher) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsAeadCipher, ___decryptCipher) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsAeadCipher, ___encryptImplicitNonce) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsAeadCipher, ___decryptImplicitNonce) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsAeadCipher, ___nonceMode) == 0x40, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsAeadCipher);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsAeadCipher*, "Org.BouncyCastle.Crypto.Tls", "TlsAeadCipher");
