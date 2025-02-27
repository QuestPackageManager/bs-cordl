#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/SignatureAndHashAlgorithm.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SignatureAndHashAlgorithm)
namespace System::IO {
class Stream;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class SignatureAndHashAlgorithm;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm);
// Dependencies System.Object
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Tls.SignatureAndHashAlgorithm
class CORDL_TYPE SignatureAndHashAlgorithm : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Hash)) uint8_t Hash;

  __declspec(property(get = get_Signature)) uint8_t Signature;

  /// @brief Field mHash, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_mHash, put = __cordl_internal_set_mHash)) uint8_t mHash;

  /// @brief Field mSignature, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get_mSignature, put = __cordl_internal_set_mSignature)) uint8_t mSignature;

  /// @brief Method Encode, addr 0x24202c4, size 0x9c, virtual true, abstract: false, final false
  inline void Encode(::System::IO::Stream* output);

  /// @brief Method Equals, addr 0x24201b0, size 0xd0, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x2420280, size 0x44, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* New_ctor(uint8_t hash, uint8_t signature);

  /// @brief Method Parse, addr 0x2420360, size 0xa4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* Parse(::System::IO::Stream* input);

  constexpr uint8_t const& __cordl_internal_get_mHash() const;

  constexpr uint8_t& __cordl_internal_get_mHash();

  constexpr uint8_t const& __cordl_internal_get_mSignature() const;

  constexpr uint8_t& __cordl_internal_get_mSignature();

  constexpr void __cordl_internal_set_mHash(uint8_t value);

  constexpr void __cordl_internal_set_mSignature(uint8_t value);

  /// @brief Method .ctor, addr 0x2420048, size 0x158, virtual false, abstract: false, final false
  inline void _ctor(uint8_t hash, uint8_t signature);

  /// @brief Method get_Hash, addr 0x24201a0, size 0x8, virtual true, abstract: false, final false
  inline uint8_t get_Hash();

  /// @brief Method get_Signature, addr 0x24201a8, size 0x8, virtual true, abstract: false, final false
  inline uint8_t get_Signature();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SignatureAndHashAlgorithm();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SignatureAndHashAlgorithm", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SignatureAndHashAlgorithm(SignatureAndHashAlgorithm&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SignatureAndHashAlgorithm", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SignatureAndHashAlgorithm(SignatureAndHashAlgorithm const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1275 };

  /// @brief Field mHash, offset: 0x10, size: 0x1, def value: None
  uint8_t ___mHash;

  /// @brief Field mSignature, offset: 0x11, size: 0x1, def value: None
  uint8_t ___mSignature;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm, ___mHash) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm, ___mSignature) == 0x11, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*, "Org.BouncyCastle.Crypto.Tls", "SignatureAndHashAlgorithm");
