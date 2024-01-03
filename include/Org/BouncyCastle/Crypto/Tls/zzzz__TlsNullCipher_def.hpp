#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TlsNullCipher)
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCipher;
}
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
// Type: Org.BouncyCastle.Crypto.Tls::TlsNullCipher
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1313))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::TlsNullCipher*
class CORDL_TYPE TlsNullCipher : public ::System::Object {
public:
  // Declarations
  /// @brief Field context, offset 0x10, size 0x8
  __declspec(property(get = __get_context, put = __set_context))::Org::BouncyCastle::Crypto::Tls::TlsContext* context;

  /// @brief Field writeMac, offset 0x18, size 0x8
  __declspec(property(get = __get_writeMac, put = __set_writeMac))::Org::BouncyCastle::Crypto::Tls::TlsMac* writeMac;

  /// @brief Field readMac, offset 0x20, size 0x8
  __declspec(property(get = __get_readMac, put = __set_readMac))::Org::BouncyCastle::Crypto::Tls::TlsMac* readMac;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsCipher"
  constexpr operator ::Org::BouncyCastle::Crypto::Tls::TlsCipher*() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Crypto::Tls::TlsCipher"
  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsCipher* i___Org__BouncyCastle__Crypto__Tls__TlsCipher() noexcept;

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsContext*& __get_context();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsContext*> const& __get_context() const;

  constexpr void __set_context(::Org::BouncyCastle::Crypto::Tls::TlsContext* value);

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsMac*& __get_writeMac();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsMac*> const& __get_writeMac() const;

  constexpr void __set_writeMac(::Org::BouncyCastle::Crypto::Tls::TlsMac* value);

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsMac*& __get_readMac();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsMac*> const& __get_readMac() const;

  constexpr void __set_readMac(::Org::BouncyCastle::Crypto::Tls::TlsMac* value);

  static inline ::Org::BouncyCastle::Crypto::Tls::TlsNullCipher* New_ctor(::Org::BouncyCastle::Crypto::Tls::TlsContext* context);

  /// @brief Method .ctor, addr 0xfaed44, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Tls::TlsContext* context);

  static inline ::Org::BouncyCastle::Crypto::Tls::TlsNullCipher* New_ctor(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, ::Org::BouncyCastle::Crypto::IDigest* clientWriteDigest,
                                                                          ::Org::BouncyCastle::Crypto::IDigest* serverWriteDigest);

  /// @brief Method .ctor, addr 0xfaed70, size 0x458, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, ::Org::BouncyCastle::Crypto::IDigest* clientWriteDigest, ::Org::BouncyCastle::Crypto::IDigest* serverWriteDigest);

  /// @brief Method GetPlaintextLimit, addr 0xfaf368, size 0x2c, virtual true, abstract: false, final false
  inline int32_t GetPlaintextLimit(int32_t ciphertextLimit);

  /// @brief Method EncodePlaintext, addr 0xfaf394, size 0x130, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> EncodePlaintext(int64_t seqNo, uint8_t type, ::ArrayW<uint8_t, ::Array<uint8_t>*> plaintext, int32_t offset, int32_t len);

  /// @brief Method DecodeCiphertext, addr 0xfaf4c4, size 0x194, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> DecodeCiphertext(int64_t seqNo, uint8_t type, ::ArrayW<uint8_t, ::Array<uint8_t>*> ciphertext, int32_t offset, int32_t len);

  // Ctor Parameters [CppParam { name: "", ty: "TlsNullCipher", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TlsNullCipher(TlsNullCipher&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TlsNullCipher", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TlsNullCipher(TlsNullCipher const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TlsNullCipher();

public:
  /// @brief Field context, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsContext* ___context;

  /// @brief Field writeMac, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsMac* ___writeMac;

  /// @brief Field readMac, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsMac* ___readMac;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::TlsNullCipher, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsNullCipher, ___context) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsNullCipher, ___writeMac) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsNullCipher, ___readMac) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsNullCipher);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsNullCipher*, "Org.BouncyCastle.Crypto.Tls", "TlsNullCipher");
