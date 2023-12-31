#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Agreement/zzzz__ECDHBasicAgreement_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ECDHWithKdfBasicAgreement)
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IDerivationFunction;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Agreement {
class ECDHWithKdfBasicAgreement;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Agreement::ECDHWithKdfBasicAgreement);
// Type: Org.BouncyCastle.Crypto.Agreement::ECDHWithKdfBasicAgreement
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Agreement {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(736))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(738))
// CS Name: ::Org.BouncyCastle.Crypto.Agreement::ECDHWithKdfBasicAgreement*
class CORDL_TYPE ECDHWithKdfBasicAgreement : public ::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement {
public:
  // Declarations
  /// @brief Field algorithm, offset 0x18, size 0x8
  __declspec(property(get = __get_algorithm, put = __set_algorithm))::StringW algorithm;

  /// @brief Field kdf, offset 0x20, size 0x8
  __declspec(property(get = __get_kdf, put = __set_kdf))::Org::BouncyCastle::Crypto::IDerivationFunction* kdf;

  constexpr ::StringW& __get_algorithm();

  constexpr ::StringW const& __get_algorithm() const;

  constexpr void __set_algorithm(::StringW value);

  constexpr ::Org::BouncyCastle::Crypto::IDerivationFunction*& __get_kdf();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IDerivationFunction*> const& __get_kdf() const;

  constexpr void __set_kdf(::Org::BouncyCastle::Crypto::IDerivationFunction* value);

  static inline ::Org::BouncyCastle::Crypto::Agreement::ECDHWithKdfBasicAgreement* New_ctor(::StringW algorithm, ::Org::BouncyCastle::Crypto::IDerivationFunction* kdf);

  /// @brief Method .ctor, addr 0x121ab3c, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(::StringW algorithm, ::Org::BouncyCastle::Crypto::IDerivationFunction* kdf);

  /// @brief Method CalculateAgreement, addr 0x121abe0, size 0x26c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* CalculateAgreement(::Org::BouncyCastle::Crypto::ICipherParameters* pubKey);

  /// @brief Method BigIntToBytes, addr 0x121ae4c, size 0x3c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> BigIntToBytes(::Org::BouncyCastle::Math::BigInteger* r);

  // Ctor Parameters [CppParam { name: "", ty: "ECDHWithKdfBasicAgreement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ECDHWithKdfBasicAgreement(ECDHWithKdfBasicAgreement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ECDHWithKdfBasicAgreement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ECDHWithKdfBasicAgreement(ECDHWithKdfBasicAgreement const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ECDHWithKdfBasicAgreement();

public:
  /// @brief Field algorithm, offset: 0x18, size: 0x8, def value: None
  ::StringW ___algorithm;

  /// @brief Field kdf, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IDerivationFunction* ___kdf;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Agreement::ECDHWithKdfBasicAgreement, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::ECDHWithKdfBasicAgreement, ___algorithm) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::ECDHWithKdfBasicAgreement, ___kdf) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Agreement
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Agreement::ECDHWithKdfBasicAgreement);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Agreement::ECDHWithKdfBasicAgreement*, "Org.BouncyCastle.Crypto.Agreement", "ECDHWithKdfBasicAgreement");
