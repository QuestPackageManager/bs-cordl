#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\IO\SignerSink.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseOutputStream_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SignerSink)
namespace Org::BouncyCastle::Crypto {
class ISigner;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::IO {
class SignerSink;
}
// Write type traits
MARK_REF_T(::Org::BouncyCastle::Crypto::IO::SignerSink*);
DEFINE_IL2CPP_CLASS(::Org::BouncyCastle::Crypto::IO::SignerSink*, "Org.BouncyCastle.Crypto.IO", "SignerSink");
// Dependencies Org.BouncyCastle.Utilities.IO.BaseOutputStream
namespace Org::BouncyCastle::Crypto::IO {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.IO.SignerSink
class CORDL_TYPE SignerSink : public ::Org::BouncyCastle::Utilities::IO::BaseOutputStream {
public:
  // Declarations
  __declspec(property(get = get_Signer)) ::Org::BouncyCastle::Crypto::ISigner* Signer;

  /// @brief Field mSigner, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_mSigner, put = __cordl_internal_set_mSigner)) ::Org::BouncyCastle::Crypto::ISigner* mSigner;

  static inline ::Org::BouncyCastle::Crypto::IO::SignerSink* New_ctor(::Org::BouncyCastle::Crypto::ISigner* signer);

  /// @brief Method Write, addr 0x33e6fa4, size 0xec, virtual true, abstract: false, final false
  inline void Write(::ArrayW<uint8_t> buf, int32_t off, int32_t len);

  /// @brief Method WriteByte, addr 0x33e6eec, size 0xb8, virtual true, abstract: false, final false
  inline void WriteByte(uint8_t b);

  constexpr ::Org::BouncyCastle::Crypto::ISigner* const& __cordl_internal_get_mSigner() const;

  constexpr ::Org::BouncyCastle::Crypto::ISigner*& __cordl_internal_get_mSigner();

  constexpr void __cordl_internal_set_mSigner(::Org::BouncyCastle::Crypto::ISigner* value);

  /// @brief Method .ctor, addr 0x33e6ebc, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::ISigner* signer);

  /// @brief Method get_Signer, addr 0x33e6ee4, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::ISigner* get_Signer();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SignerSink();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SignerSink", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SignerSink(SignerSink&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SignerSink", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SignerSink(SignerSink const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 932 };

  /// @brief Field mSigner, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::ISigner* ___mSigner;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::IO::SignerSink, ___mSigner) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Org::BouncyCastle::Crypto::IO::SignerSink) == 0x38, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::IO
