#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TlsStreamCipher)
namespace Org::BouncyCastle::Crypto {
class IStreamCipher;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsMac;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCipher;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsStreamCipher;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher);
// Type: Org.BouncyCastle.Crypto.Tls::TlsStreamCipher
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 57, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1331))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::TlsStreamCipher*
class CORDL_TYPE TlsStreamCipher : public ::System::Object {
public:
  // Declarations
  /// @brief Field context, offset 0x10, size 0x8
  __declspec(property(get = __get_context, put = __set_context))::Org::BouncyCastle::Crypto::Tls::TlsContext* context;

  /// @brief Field encryptCipher, offset 0x18, size 0x8
  __declspec(property(get = __get_encryptCipher, put = __set_encryptCipher))::Org::BouncyCastle::Crypto::IStreamCipher* encryptCipher;

  /// @brief Field decryptCipher, offset 0x20, size 0x8
  __declspec(property(get = __get_decryptCipher, put = __set_decryptCipher))::Org::BouncyCastle::Crypto::IStreamCipher* decryptCipher;

  /// @brief Field writeMac, offset 0x28, size 0x8
  __declspec(property(get = __get_writeMac, put = __set_writeMac))::Org::BouncyCastle::Crypto::Tls::TlsMac* writeMac;

  /// @brief Field readMac, offset 0x30, size 0x8
  __declspec(property(get = __get_readMac, put = __set_readMac))::Org::BouncyCastle::Crypto::Tls::TlsMac* readMac;

  /// @brief Field usesNonce, offset 0x38, size 0x1
  __declspec(property(get = __get_usesNonce, put = __set_usesNonce)) bool usesNonce;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsCipher"
  constexpr operator ::Org::BouncyCastle::Crypto::Tls::TlsCipher*() noexcept;

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsContext*& __get_context();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsContext*> const& __get_context() const;

  constexpr void __set_context(::Org::BouncyCastle::Crypto::Tls::TlsContext* value);

  constexpr ::Org::BouncyCastle::Crypto::IStreamCipher*& __get_encryptCipher();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IStreamCipher*> const& __get_encryptCipher() const;

  constexpr void __set_encryptCipher(::Org::BouncyCastle::Crypto::IStreamCipher* value);

  constexpr ::Org::BouncyCastle::Crypto::IStreamCipher*& __get_decryptCipher();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IStreamCipher*> const& __get_decryptCipher() const;

  constexpr void __set_decryptCipher(::Org::BouncyCastle::Crypto::IStreamCipher* value);

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsMac*& __get_writeMac();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsMac*> const& __get_writeMac() const;

  constexpr void __set_writeMac(::Org::BouncyCastle::Crypto::Tls::TlsMac* value);

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsMac*& __get_readMac();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsMac*> const& __get_readMac() const;

  constexpr void __set_readMac(::Org::BouncyCastle::Crypto::Tls::TlsMac* value);

  constexpr bool& __get_usesNonce();

  constexpr bool const& __get_usesNonce() const;

  constexpr void __set_usesNonce(bool value);

  static inline ::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher* New_ctor(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, ::Org::BouncyCastle::Crypto::IStreamCipher* clientWriteCipher,
                                                                            ::Org::BouncyCastle::Crypto::IStreamCipher* serverWriteCipher, ::Org::BouncyCastle::Crypto::IDigest* clientWriteDigest,
                                                                            ::Org::BouncyCastle::Crypto::IDigest* serverWriteDigest, int32_t cipherKeySize, bool usesNonce);

  /// @brief Method .ctor, addr 0xfb97ac, size 0x6a0, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, ::Org::BouncyCastle::Crypto::IStreamCipher* clientWriteCipher, ::Org::BouncyCastle::Crypto::IStreamCipher* serverWriteCipher,
                    ::Org::BouncyCastle::Crypto::IDigest* clientWriteDigest, ::Org::BouncyCastle::Crypto::IDigest* serverWriteDigest, int32_t cipherKeySize, bool usesNonce);

  /// @brief Method GetPlaintextLimit, addr 0xfb9e4c, size 0x2c, virtual true, abstract: false, final false
  inline int32_t GetPlaintextLimit(int32_t ciphertextLimit);

  /// @brief Method EncodePlaintext, addr 0xfb9e78, size 0x1f8, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> EncodePlaintext(int64_t seqNo, uint8_t type, ::ArrayW<uint8_t, ::Array<uint8_t>*> plaintext, int32_t offset, int32_t len);

  /// @brief Method DecodeCiphertext, addr 0xfba070, size 0x208, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> DecodeCiphertext(int64_t seqNo, uint8_t type, ::ArrayW<uint8_t, ::Array<uint8_t>*> ciphertext, int32_t offset, int32_t len);

  /// @brief Method CheckMac, addr 0xfba278, size 0x124, virtual true, abstract: false, final false
  inline void CheckMac(int64_t seqNo, uint8_t type, ::ArrayW<uint8_t, ::Array<uint8_t>*> recBuf, int32_t recStart, int32_t recEnd, ::ArrayW<uint8_t, ::Array<uint8_t>*> calcBuf, int32_t calcOff,
                       int32_t calcLen);

  /// @brief Method UpdateIV, addr 0xfba39c, size 0x150, virtual true, abstract: false, final false
  inline void UpdateIV(::Org::BouncyCastle::Crypto::IStreamCipher* cipher, bool forEncryption, int64_t seqNo);

  // Ctor Parameters [CppParam { name: "", ty: "TlsStreamCipher", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TlsStreamCipher(TlsStreamCipher&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TlsStreamCipher", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TlsStreamCipher(TlsStreamCipher const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TlsStreamCipher();

public:
  /// @brief Field context, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsContext* ___context;

  /// @brief Field encryptCipher, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IStreamCipher* ___encryptCipher;

  /// @brief Field decryptCipher, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IStreamCipher* ___decryptCipher;

  /// @brief Field writeMac, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsMac* ___writeMac;

  /// @brief Field readMac, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsMac* ___readMac;

  /// @brief Field usesNonce, offset: 0x38, size: 0x1, def value: None
  bool ___usesNonce;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher, 0x40>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher, ___context) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher, ___encryptCipher) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher, ___decryptCipher) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher, ___writeMac) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher, ___readMac) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher, ___usesNonce) == 0x38, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher*, "Org.BouncyCastle.Crypto.Tls", "TlsStreamCipher");
