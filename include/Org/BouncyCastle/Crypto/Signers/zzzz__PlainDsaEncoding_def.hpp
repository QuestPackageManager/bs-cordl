#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Signers\PlainDsaEncoding.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlainDsaEncoding)
namespace Org::BouncyCastle::Crypto::Signers {
class IDsaEncoding;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Signers {
class PlainDsaEncoding;
}
// Write type traits
MARK_REF_T(::Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding*);
DEFINE_IL2CPP_CLASS(::Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding*, "Org.BouncyCastle.Crypto.Signers", "PlainDsaEncoding");
// Dependencies System.Object
namespace Org::BouncyCastle::Crypto::Signers {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Signers.PlainDsaEncoding
class CORDL_TYPE PlainDsaEncoding : public ::System::Object {
public:
  // Declarations
  /// @brief Field Instance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Instance, put = setStaticF_Instance)) ::Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding* Instance;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Signers::IDsaEncoding"
  constexpr operator ::Org::BouncyCastle::Crypto::Signers::IDsaEncoding*() noexcept;

  /// @brief Method CheckValue, addr 0x342f06c, size 0x98, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* CheckValue(::Org::BouncyCastle::Math::BigInteger* n, ::Org::BouncyCastle::Math::BigInteger* x);

  /// @brief Method Decode, addr 0x342ee08, size 0x198, virtual true, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Math::BigInteger*> Decode(::Org::BouncyCastle::Math::BigInteger* n, ::ArrayW<uint8_t> encoding);

  /// @brief Method DecodeValue, addr 0x342f104, size 0x9c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* DecodeValue(::Org::BouncyCastle::Math::BigInteger* n, ::ArrayW<uint8_t> buf, int32_t off, int32_t len);

  /// @brief Method Encode, addr 0x342efa0, size 0xcc, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t> Encode(::Org::BouncyCastle::Math::BigInteger* n, ::Org::BouncyCastle::Math::BigInteger* r, ::Org::BouncyCastle::Math::BigInteger* s);

  /// @brief Method EncodeValue, addr 0x342f1a0, size 0x11c, virtual true, abstract: false, final false
  inline void EncodeValue(::Org::BouncyCastle::Math::BigInteger* n, ::Org::BouncyCastle::Math::BigInteger* x, ::ArrayW<uint8_t> buf, int32_t off, int32_t len);

  static inline ::Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding* New_ctor();

  /// @brief Method .ctor, addr 0x342f310, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding* getStaticF_Instance();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::Signers::IDsaEncoding"
  constexpr ::Org::BouncyCastle::Crypto::Signers::IDsaEncoding* i___Org__BouncyCastle__Crypto__Signers__IDsaEncoding() noexcept;

  static inline void setStaticF_Instance(::Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlainDsaEncoding();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlainDsaEncoding", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlainDsaEncoding(PlainDsaEncoding&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlainDsaEncoding", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlainDsaEncoding(PlainDsaEncoding const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1149 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding) == 0x10, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Signers
