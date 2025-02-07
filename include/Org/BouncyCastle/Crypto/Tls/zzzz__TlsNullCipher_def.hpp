#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/TlsNullCipher.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCipher_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TlsNullCipher)
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsMac;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsNullCipher;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::TlsNullCipher);
// Dependencies Org.BouncyCastle.Crypto.Tls.TlsCipher, System.Object
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsNullCipher
class CORDL_TYPE TlsNullCipher : public ::System::Object {
public:
  // Declarations
  /// @brief Field context, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_context, put = __cordl_internal_set_context)) ::Org::BouncyCastle::Crypto::Tls::TlsContext* context;

  /// @brief Field readMac, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_readMac, put = __cordl_internal_set_readMac)) ::Org::BouncyCastle::Crypto::Tls::TlsMac* readMac;

  /// @brief Field writeMac, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_writeMac, put = __cordl_internal_set_writeMac)) ::Org::BouncyCastle::Crypto::Tls::TlsMac* writeMac;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsCipher"
  constexpr operator ::Org::BouncyCastle::Crypto::Tls::TlsCipher*() noexcept;

  /// @brief Method DecodeCiphertext, addr 0x2434910, size 0x188, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> DecodeCiphertext(int64_t seqNo, uint8_t type, ::ArrayW<uint8_t, ::Array<uint8_t>*> ciphertext, int32_t offset, int32_t len);

  /// @brief Method EncodePlaintext, addr 0x24347e0, size 0x130, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> EncodePlaintext(int64_t seqNo, uint8_t type, ::ArrayW<uint8_t, ::Array<uint8_t>*> plaintext, int32_t offset, int32_t len);

  /// @brief Method GetPlaintextLimit, addr 0x24347b4, size 0x2c, virtual true, abstract: false, final false
  inline int32_t GetPlaintextLimit(int32_t ciphertextLimit);

  static inline ::Org::BouncyCastle::Crypto::Tls::TlsNullCipher* New_ctor(::Org::BouncyCastle::Crypto::Tls::TlsContext* context);

  static inline ::Org::BouncyCastle::Crypto::Tls::TlsNullCipher* New_ctor(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, ::Org::BouncyCastle::Crypto::IDigest* clientWriteDigest,
                                                                          ::Org::BouncyCastle::Crypto::IDigest* serverWriteDigest);

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsContext* const& __cordl_internal_get_context() const;

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsContext*& __cordl_internal_get_context();

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsMac* const& __cordl_internal_get_readMac() const;

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsMac*& __cordl_internal_get_readMac();

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsMac* const& __cordl_internal_get_writeMac() const;

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsMac*& __cordl_internal_get_writeMac();

  constexpr void __cordl_internal_set_context(::Org::BouncyCastle::Crypto::Tls::TlsContext* value);

  constexpr void __cordl_internal_set_readMac(::Org::BouncyCastle::Crypto::Tls::TlsMac* value);

  constexpr void __cordl_internal_set_writeMac(::Org::BouncyCastle::Crypto::Tls::TlsMac* value);

  /// @brief Method .ctor, addr 0x24341a4, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Tls::TlsContext* context);

  /// @brief Method .ctor, addr 0x24341d0, size 0x444, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, ::Org::BouncyCastle::Crypto::IDigest* clientWriteDigest, ::Org::BouncyCastle::Crypto::IDigest* serverWriteDigest);

  /// @brief Convert to "::Org::BouncyCastle::Crypto::Tls::TlsCipher"
  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsCipher* i___Org__BouncyCastle__Crypto__Tls__TlsCipher() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TlsNullCipher();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TlsNullCipher", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TlsNullCipher(TlsNullCipher&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TlsNullCipher", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TlsNullCipher(TlsNullCipher const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1313 };

  /// @brief Field context, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsContext* ___context;

  /// @brief Field writeMac, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsMac* ___writeMac;

  /// @brief Field readMac, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsMac* ___readMac;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsNullCipher, ___context) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsNullCipher, ___writeMac) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsNullCipher, ___readMac) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::TlsNullCipher, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsNullCipher);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsNullCipher*, "Org.BouncyCastle.Crypto.Tls", "TlsNullCipher");
