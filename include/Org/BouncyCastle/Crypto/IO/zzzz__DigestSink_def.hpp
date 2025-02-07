#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/IO/DigestSink.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseOutputStream_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DigestSink)
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::IO {
class DigestSink;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::IO::DigestSink);
// Dependencies Org.BouncyCastle.Utilities.IO.BaseOutputStream
namespace Org::BouncyCastle::Crypto::IO {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.IO.DigestSink
class CORDL_TYPE DigestSink : public ::Org::BouncyCastle::Utilities::IO::BaseOutputStream {
public:
  // Declarations
  __declspec(property(get = get_Digest)) ::Org::BouncyCastle::Crypto::IDigest* Digest;

  /// @brief Field mDigest, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_mDigest, put = __cordl_internal_set_mDigest)) ::Org::BouncyCastle::Crypto::IDigest* mDigest;

  static inline ::Org::BouncyCastle::Crypto::IO::DigestSink* New_ctor(::Org::BouncyCastle::Crypto::IDigest* digest);

  /// @brief Method Write, addr 0x2392750, size 0xdc, virtual true, abstract: false, final false
  inline void Write(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off, int32_t len);

  /// @brief Method WriteByte, addr 0x23926a4, size 0xac, virtual true, abstract: false, final false
  inline void WriteByte(uint8_t b);

  constexpr ::Org::BouncyCastle::Crypto::IDigest* const& __cordl_internal_get_mDigest() const;

  constexpr ::Org::BouncyCastle::Crypto::IDigest*& __cordl_internal_get_mDigest();

  constexpr void __cordl_internal_set_mDigest(::Org::BouncyCastle::Crypto::IDigest* value);

  /// @brief Method .ctor, addr 0x2392674, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IDigest* digest);

  /// @brief Method get_Digest, addr 0x239269c, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::IDigest* get_Digest();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DigestSink();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DigestSink", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DigestSink(DigestSink&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DigestSink", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DigestSink(DigestSink const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 928 };

  /// @brief Field mDigest, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IDigest* ___mDigest;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::IO::DigestSink, ___mDigest) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::IO::DigestSink, 0x38>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::IO
NEED_NO_BOX(::Org::BouncyCastle::Crypto::IO::DigestSink);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::IO::DigestSink*, "Org.BouncyCastle.Crypto.IO", "DigestSink");
