#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Parameters/NaccacheSternPrivateKeyParameters.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__NaccacheSternKeyParameters_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NaccacheSternPrivateKeyParameters)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace System::Collections {
class ArrayList;
}
namespace System::Collections {
class IList;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class NaccacheSternPrivateKeyParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::NaccacheSternPrivateKeyParameters);
// Dependencies Org.BouncyCastle.Crypto.Parameters.NaccacheSternKeyParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Parameters.NaccacheSternPrivateKeyParameters
class CORDL_TYPE NaccacheSternPrivateKeyParameters : public ::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters {
public:
  // Declarations
  __declspec(property(get = get_PhiN)) ::Org::BouncyCastle::Math::BigInteger* PhiN;

  __declspec(property(get = get_SmallPrimes)) ::System::Collections::ArrayList* SmallPrimes;

  __declspec(property(get = get_SmallPrimesList)) ::System::Collections::IList* SmallPrimesList;

  /// @brief Field phiN, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_phiN, put = __cordl_internal_set_phiN)) ::Org::BouncyCastle::Math::BigInteger* phiN;

  /// @brief Field smallPrimes, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_smallPrimes, put = __cordl_internal_set_smallPrimes)) ::System::Collections::IList* smallPrimes;

  static inline ::Org::BouncyCastle::Crypto::Parameters::NaccacheSternPrivateKeyParameters* New_ctor(::Org::BouncyCastle::Math::BigInteger* g, ::Org::BouncyCastle::Math::BigInteger* n,
                                                                                                     int32_t lowerSigmaBound, ::System::Collections::ArrayList* smallPrimes,
                                                                                                     ::Org::BouncyCastle::Math::BigInteger* phiN);

  static inline ::Org::BouncyCastle::Crypto::Parameters::NaccacheSternPrivateKeyParameters* New_ctor(::Org::BouncyCastle::Math::BigInteger* g, ::Org::BouncyCastle::Math::BigInteger* n,
                                                                                                     int32_t lowerSigmaBound, ::System::Collections::IList* smallPrimes,
                                                                                                     ::Org::BouncyCastle::Math::BigInteger* phiN);

  constexpr ::Org::BouncyCastle::Math::BigInteger* const& __cordl_internal_get_phiN() const;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_phiN();

  constexpr ::System::Collections::IList* const& __cordl_internal_get_smallPrimes() const;

  constexpr ::System::Collections::IList*& __cordl_internal_get_smallPrimes();

  constexpr void __cordl_internal_set_phiN(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr void __cordl_internal_set_smallPrimes(::System::Collections::IList* value);

  /// @brief Method .ctor, addr 0x23bf63c, size 0x54, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* g, ::Org::BouncyCastle::Math::BigInteger* n, int32_t lowerSigmaBound, ::System::Collections::ArrayList* smallPrimes,
                    ::Org::BouncyCastle::Math::BigInteger* phiN);

  /// @brief Method .ctor, addr 0x23bf690, size 0x54, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* g, ::Org::BouncyCastle::Math::BigInteger* n, int32_t lowerSigmaBound, ::System::Collections::IList* smallPrimes,
                    ::Org::BouncyCastle::Math::BigInteger* phiN);

  /// @brief Method get_PhiN, addr 0x23bf6e4, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_PhiN();

  /// @brief Method get_SmallPrimes, addr 0x23bf6ec, size 0x60, virtual false, abstract: false, final false
  inline ::System::Collections::ArrayList* get_SmallPrimes();

  /// @brief Method get_SmallPrimesList, addr 0x23bf74c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::IList* get_SmallPrimesList();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NaccacheSternPrivateKeyParameters();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NaccacheSternPrivateKeyParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NaccacheSternPrivateKeyParameters(NaccacheSternPrivateKeyParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NaccacheSternPrivateKeyParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NaccacheSternPrivateKeyParameters(NaccacheSternPrivateKeyParameters const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1070 };

  /// @brief Field phiN, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___phiN;

  /// @brief Field smallPrimes, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::IList* ___smallPrimes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::NaccacheSternPrivateKeyParameters, ___phiN) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::NaccacheSternPrivateKeyParameters, ___smallPrimes) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::NaccacheSternPrivateKeyParameters, 0x40>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::NaccacheSternPrivateKeyParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::NaccacheSternPrivateKeyParameters*, "Org.BouncyCastle.Crypto.Parameters", "NaccacheSternPrivateKeyParameters");
