#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Signers/PlainDsaEncoding.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding);
// Type: Org.BouncyCastle.Crypto.Signers::PlainDsaEncoding
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Signers {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Signers::PlainDsaEncoding*
class CORDL_TYPE PlainDsaEncoding : public ::System::Object {
public:
  // Declarations
  /// @brief Field Instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Instance, put = setStaticF_Instance))::Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding* Instance;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Signers::IDsaEncoding"
  constexpr operator ::Org::BouncyCastle::Crypto::Signers::IDsaEncoding*() noexcept;

  /// @brief Method CheckValue, addr 0x11b7300, size 0x9c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* CheckValue(::Org::BouncyCastle::Math::BigInteger* n, ::Org::BouncyCastle::Math::BigInteger* x);

  /// @brief Method Decode, addr 0x11b709c, size 0x198, virtual true, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> Decode(::Org::BouncyCastle::Math::BigInteger* n,
                                                                                                                   ::ArrayW<uint8_t, ::Array<uint8_t>*> encoding);

  /// @brief Method DecodeValue, addr 0x11b739c, size 0xa0, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* DecodeValue(::Org::BouncyCastle::Math::BigInteger* n, ::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off, int32_t len);

  /// @brief Method Encode, addr 0x11b7234, size 0xcc, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Encode(::Org::BouncyCastle::Math::BigInteger* n, ::Org::BouncyCastle::Math::BigInteger* r, ::Org::BouncyCastle::Math::BigInteger* s);

  /// @brief Method EncodeValue, addr 0x11b743c, size 0x124, virtual true, abstract: false, final false
  inline void EncodeValue(::Org::BouncyCastle::Math::BigInteger* n, ::Org::BouncyCastle::Math::BigInteger* x, ::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off, int32_t len);

  static inline ::Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding* New_ctor();

  /// @brief Method .ctor, addr 0x11b75c4, size 0x8, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Signers
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding*, "Org.BouncyCastle.Crypto.Signers", "PlainDsaEncoding");
