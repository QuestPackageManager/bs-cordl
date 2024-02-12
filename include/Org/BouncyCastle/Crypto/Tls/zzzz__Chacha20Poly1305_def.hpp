#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Chacha20Poly1305)
namespace Org::BouncyCastle::Crypto::Engines {
class ChaCha7539Engine;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class KeyParameter;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCipher;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
namespace Org::BouncyCastle::Crypto {
class IMac;
}
namespace Org::BouncyCastle::Crypto {
class IStreamCipher;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class Chacha20Poly1305;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305);
// Type: Org.BouncyCastle.Crypto.Tls::Chacha20Poly1305
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1195))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::Chacha20Poly1305*
class CORDL_TYPE Chacha20Poly1305 : public ::System::Object {
public:
  // Declarations
  /// @brief Field context, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_context, put = __cordl_internal_set_context))::Org::BouncyCastle::Crypto::Tls::TlsContext* context;

  /// @brief Field encryptCipher, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_encryptCipher, put = __cordl_internal_set_encryptCipher))::Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine* encryptCipher;

  /// @brief Field decryptCipher, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_decryptCipher, put = __cordl_internal_set_decryptCipher))::Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine* decryptCipher;

  /// @brief Field encryptIV, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_encryptIV, put = __cordl_internal_set_encryptIV))::ArrayW<uint8_t, ::Array<uint8_t>*> encryptIV;

  /// @brief Field decryptIV, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_decryptIV, put = __cordl_internal_set_decryptIV))::ArrayW<uint8_t, ::Array<uint8_t>*> decryptIV;

  /// @brief Field Zeroes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Zeroes, put = setStaticF_Zeroes))::ArrayW<uint8_t, ::Array<uint8_t>*> Zeroes;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsCipher"
  constexpr operator ::Org::BouncyCastle::Crypto::Tls::TlsCipher*() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Crypto::Tls::TlsCipher"
  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsCipher* i___Org__BouncyCastle__Crypto__Tls__TlsCipher() noexcept;

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsContext*& __cordl_internal_get_context();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsContext*> const& __cordl_internal_get_context() const;

  constexpr void __cordl_internal_set_context(::Org::BouncyCastle::Crypto::Tls::TlsContext* value);

  constexpr ::Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine*& __cordl_internal_get_encryptCipher();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine*> const& __cordl_internal_get_encryptCipher() const;

  constexpr void __cordl_internal_set_encryptCipher(::Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine* value);

  constexpr ::Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine*& __cordl_internal_get_decryptCipher();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine*> const& __cordl_internal_get_decryptCipher() const;

  constexpr void __cordl_internal_set_decryptCipher(::Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine* value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_encryptIV();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_encryptIV() const;

  constexpr void __cordl_internal_set_encryptIV(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_decryptIV();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_decryptIV() const;

  constexpr void __cordl_internal_set_decryptIV(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_Zeroes(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_Zeroes();

  static inline ::Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305* New_ctor(::Org::BouncyCastle::Crypto::Tls::TlsContext* context);

  /// @brief Method .ctor, addr 0xf8ad24, size 0x324, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Tls::TlsContext* context);

  /// @brief Method GetPlaintextLimit, addr 0xf8b048, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetPlaintextLimit(int32_t ciphertextLimit);

  /// @brief Method EncodePlaintext, addr 0xf8b050, size 0x13c, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> EncodePlaintext(int64_t seqNo, uint8_t type, ::ArrayW<uint8_t, ::Array<uint8_t>*> plaintext, int32_t offset, int32_t len);

  /// @brief Method DecodeCiphertext, addr 0xf8b18c, size 0x1f0, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> DecodeCiphertext(int64_t seqNo, uint8_t type, ::ArrayW<uint8_t, ::Array<uint8_t>*> ciphertext, int32_t offset, int32_t len);

  /// @brief Method InitRecord, addr 0xf8b37c, size 0x130, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* InitRecord(::Org::BouncyCastle::Crypto::IStreamCipher* cipher, bool forEncryption, int64_t seqNo,
                                                                           ::ArrayW<uint8_t, ::Array<uint8_t>*> iv);

  /// @brief Method CalculateNonce, addr 0xf8b4ac, size 0xec, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CalculateNonce(int64_t seqNo, ::ArrayW<uint8_t, ::Array<uint8_t>*> iv);

  /// @brief Method GenerateRecordMacKey, addr 0xf8b598, size 0x15c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* GenerateRecordMacKey(::Org::BouncyCastle::Crypto::IStreamCipher* cipher);

  /// @brief Method CalculateRecordMac, addr 0xf8b6f4, size 0x1a8, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CalculateRecordMac(::Org::BouncyCastle::Crypto::Parameters::KeyParameter* macKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> additionalData,
                                                                 ::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off, int32_t len);

  /// @brief Method UpdateRecordMacLength, addr 0xf8b89c, size 0xc8, virtual true, abstract: false, final false
  inline void UpdateRecordMacLength(::Org::BouncyCastle::Crypto::IMac* mac, int32_t len);

  /// @brief Method UpdateRecordMacText, addr 0xf8b964, size 0x188, virtual true, abstract: false, final false
  inline void UpdateRecordMacText(::Org::BouncyCastle::Crypto::IMac* mac, ::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off, int32_t len);

  /// @brief Method GetAdditionalData, addr 0xf8baec, size 0x160, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetAdditionalData(int64_t seqNo, uint8_t type, int32_t len);

  // Ctor Parameters [CppParam { name: "", ty: "Chacha20Poly1305", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Chacha20Poly1305(Chacha20Poly1305&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Chacha20Poly1305", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Chacha20Poly1305(Chacha20Poly1305 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Chacha20Poly1305();

public:
  /// @brief Field context, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsContext* ___context;

  /// @brief Field encryptCipher, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine* ___encryptCipher;

  /// @brief Field decryptCipher, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine* ___decryptCipher;

  /// @brief Field encryptIV, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___encryptIV;

  /// @brief Field decryptIV, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___decryptIV;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305, 0x38>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305, ___context) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305, ___encryptCipher) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305, ___decryptCipher) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305, ___encryptIV) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305, ___decryptIV) == 0x30, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305*, "Org.BouncyCastle.Crypto.Tls", "Chacha20Poly1305");
