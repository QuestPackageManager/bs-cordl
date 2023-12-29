#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StandardDsaEncoding)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Crypto::Signers {
class IDsaEncoding;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Signers {
class StandardDsaEncoding;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding);
// Type: Org.BouncyCastle.Crypto.Signers::StandardDsaEncoding
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Signers {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1154))
// CS Name: ::Org.BouncyCastle.Crypto.Signers::StandardDsaEncoding*
class CORDL_TYPE StandardDsaEncoding : public ::System::Object {
public:
  // Declarations
  /// @brief Field Instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Instance, put = setStaticF_Instance))::Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding* Instance;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Signers::IDsaEncoding"
  constexpr operator ::Org::BouncyCastle::Crypto::Signers::IDsaEncoding*() noexcept;

  static inline void setStaticF_Instance(::Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding* value);

  static inline ::Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding* getStaticF_Instance();

  /// @brief Method Decode addr 0xee2e78 size 0x244 virtual true final false
  inline ::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> Decode(::Org::BouncyCastle::Math::BigInteger* n,
                                                                                                                   ::ArrayW<uint8_t, ::Array<uint8_t>*> encoding);

  /// @brief Method Encode addr 0xee30bc size 0x158 virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Encode(::Org::BouncyCastle::Math::BigInteger* n, ::Org::BouncyCastle::Math::BigInteger* r, ::Org::BouncyCastle::Math::BigInteger* s);

  /// @brief Method CheckValue addr 0xee3214 size 0xa0 virtual true final false
  inline ::Org::BouncyCastle::Math::BigInteger* CheckValue(::Org::BouncyCastle::Math::BigInteger* n, ::Org::BouncyCastle::Math::BigInteger* x);

  /// @brief Method DecodeValue addr 0xee32b4 size 0xc0 virtual true final false
  inline ::Org::BouncyCastle::Math::BigInteger* DecodeValue(::Org::BouncyCastle::Math::BigInteger* n, ::Org::BouncyCastle::Asn1::Asn1Sequence* s, int32_t pos);

  /// @brief Method EncodeValue addr 0xee3374 size 0x94 virtual true final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* EncodeValue(::Org::BouncyCastle::Math::BigInteger* n, ::Org::BouncyCastle::Math::BigInteger* x);

  static inline ::Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding* New_ctor();

  /// @brief Method .ctor addr 0xee346c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "StandardDsaEncoding", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StandardDsaEncoding(StandardDsaEncoding&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StandardDsaEncoding", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StandardDsaEncoding(StandardDsaEncoding const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StandardDsaEncoding();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Signers
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding*, "Org.BouncyCastle.Crypto.Signers", "StandardDsaEncoding");
