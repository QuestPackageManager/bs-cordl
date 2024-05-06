#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Generators/DHParametersHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DHParametersHelper)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Generators {
class DHParametersHelper;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Generators::DHParametersHelper);
// Type: Org.BouncyCastle.Crypto.Generators::DHParametersHelper
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Generators {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Generators::DHParametersHelper*
class CORDL_TYPE DHParametersHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Field BigPrimeProducts, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_BigPrimeProducts,
                             put = setStaticF_BigPrimeProducts))::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> BigPrimeProducts;

  /// @brief Field Six, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Six, put = setStaticF_Six))::Org::BouncyCastle::Math::BigInteger* Six;

  /// @brief Field primeLists, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_primeLists, put = setStaticF_primeLists))::ArrayW<::ArrayW<int32_t, ::Array<int32_t>*>, ::Array<::ArrayW<int32_t, ::Array<int32_t>*>>*> primeLists;

  /// @brief Field primeProducts, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_primeProducts, put = setStaticF_primeProducts))::ArrayW<int32_t, ::Array<int32_t>*> primeProducts;

  /// @brief Method ConstructBigPrimeProducts, addr 0x1156784, size 0x110, virtual false, abstract: false, final false
  static inline ::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> ConstructBigPrimeProducts(::ArrayW<int32_t, ::Array<int32_t>*> primeProducts);

  /// @brief Method GenerateSafePrimes, addr 0x11561b0, size 0x4dc, virtual false, abstract: false, final false
  static inline ::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> GenerateSafePrimes(int32_t size, int32_t certainty,
                                                                                                                                      ::Org::BouncyCastle::Security::SecureRandom* random);

  static inline ::Org::BouncyCastle::Crypto::Generators::DHParametersHelper* New_ctor();

  /// @brief Method SelectGenerator, addr 0x115668c, size 0xf0, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::BigInteger* SelectGenerator(::Org::BouncyCastle::Math::BigInteger* p, ::Org::BouncyCastle::Math::BigInteger* q,
                                                                       ::Org::BouncyCastle::Security::SecureRandom* random);

  /// @brief Method .ctor, addr 0x115693c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> getStaticF_BigPrimeProducts();

  static inline ::Org::BouncyCastle::Math::BigInteger* getStaticF_Six();

  static inline ::ArrayW<::ArrayW<int32_t, ::Array<int32_t>*>, ::Array<::ArrayW<int32_t, ::Array<int32_t>*>>*> getStaticF_primeLists();

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_primeProducts();

  static inline void setStaticF_BigPrimeProducts(::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> value);

  static inline void setStaticF_Six(::Org::BouncyCastle::Math::BigInteger* value);

  static inline void setStaticF_primeLists(::ArrayW<::ArrayW<int32_t, ::Array<int32_t>*>, ::Array<::ArrayW<int32_t, ::Array<int32_t>*>>*> value);

  static inline void setStaticF_primeProducts(::ArrayW<int32_t, ::Array<int32_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DHParametersHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DHParametersHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DHParametersHelper(DHParametersHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DHParametersHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DHParametersHelper(DHParametersHelper const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Generators::DHParametersHelper, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Generators
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Generators::DHParametersHelper);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Generators::DHParametersHelper*, "Org.BouncyCastle.Crypto.Generators", "DHParametersHelper");
