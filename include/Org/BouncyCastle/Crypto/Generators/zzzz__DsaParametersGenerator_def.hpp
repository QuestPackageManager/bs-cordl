#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Generators/DsaParametersGenerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DsaParametersGenerator)
namespace Org::BouncyCastle::Crypto::Parameters {
class DsaParameterGenerationParameters;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class DsaParameters;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Generators {
class DsaParametersGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Generators::DsaParametersGenerator);
// Dependencies System.Object
namespace Org::BouncyCastle::Crypto::Generators {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Generators.DsaParametersGenerator
class CORDL_TYPE DsaParametersGenerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field L, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_L, put = __cordl_internal_set_L)) int32_t L;

  /// @brief Field N, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_N, put = __cordl_internal_set_N)) int32_t N;

  /// @brief Field certainty, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_certainty, put = __cordl_internal_set_certainty)) int32_t certainty;

  /// @brief Field digest, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_digest, put = __cordl_internal_set_digest)) ::Org::BouncyCastle::Crypto::IDigest* digest;

  /// @brief Field random, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_random, put = __cordl_internal_set_random)) ::Org::BouncyCastle::Security::SecureRandom* random;

  /// @brief Field usageIndex, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_usageIndex, put = __cordl_internal_set_usageIndex)) int32_t usageIndex;

  /// @brief Field use186_3, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_use186_3, put = __cordl_internal_set_use186_3)) bool use186_3;

  /// @brief Method CalculateGenerator_FIPS186_2, addr 0x238386c, size 0x114, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* CalculateGenerator_FIPS186_2(::Org::BouncyCastle::Math::BigInteger* p, ::Org::BouncyCastle::Math::BigInteger* q,
                                                                             ::Org::BouncyCastle::Security::SecureRandom* r);

  /// @brief Method CalculateGenerator_FIPS186_3_Unverifiable, addr 0x2383f34, size 0xc, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* CalculateGenerator_FIPS186_3_Unverifiable(::Org::BouncyCastle::Math::BigInteger* p, ::Org::BouncyCastle::Math::BigInteger* q,
                                                                                          ::Org::BouncyCastle::Security::SecureRandom* r);

  /// @brief Method CalculateGenerator_FIPS186_3_Verifiable, addr 0x2383f40, size 0x2a8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* CalculateGenerator_FIPS186_3_Verifiable(::Org::BouncyCastle::Crypto::IDigest* d, ::Org::BouncyCastle::Math::BigInteger* p,
                                                                                        ::Org::BouncyCastle::Math::BigInteger* q, ::ArrayW<uint8_t, ::Array<uint8_t>*> seed, int32_t index);

  /// @brief Method GenerateParameters, addr 0x23831b8, size 0x1c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Parameters::DsaParameters* GenerateParameters();

  /// @brief Method GenerateParameters_FIPS186_2, addr 0x23831d4, size 0x52c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Parameters::DsaParameters* GenerateParameters_FIPS186_2();

  /// @brief Method GenerateParameters_FIPS186_3, addr 0x2383980, size 0x5b4, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Parameters::DsaParameters* GenerateParameters_FIPS186_3();

  /// @brief Method GetDefaultN, addr 0x2382f1c, size 0x14, virtual false, abstract: false, final false
  static inline int32_t GetDefaultN(int32_t L);

  /// @brief Method Hash, addr 0x2383700, size 0x128, virtual false, abstract: false, final false
  static inline void Hash(::Org::BouncyCastle::Crypto::IDigest* d, ::ArrayW<uint8_t, ::Array<uint8_t>*> input, ::ArrayW<uint8_t, ::Array<uint8_t>*> output);

  /// @brief Method Inc, addr 0x2383828, size 0x44, virtual false, abstract: false, final false
  static inline void Inc(::ArrayW<uint8_t, ::Array<uint8_t>*> buf);

  /// @brief Method Init, addr 0x2382f30, size 0x288, virtual true, abstract: false, final false
  inline void Init(::Org::BouncyCastle::Crypto::Parameters::DsaParameterGenerationParameters* parameters);

  /// @brief Method Init, addr 0x2382e68, size 0x98, virtual true, abstract: false, final false
  inline void Init(int32_t size, int32_t certainty, ::Org::BouncyCastle::Security::SecureRandom* random);

  /// @brief Method IsValidDsaStrength, addr 0x2382f00, size 0x1c, virtual false, abstract: false, final false
  static inline bool IsValidDsaStrength(int32_t strength);

  static inline ::Org::BouncyCastle::Crypto::Generators::DsaParametersGenerator* New_ctor();

  static inline ::Org::BouncyCastle::Crypto::Generators::DsaParametersGenerator* New_ctor(::Org::BouncyCastle::Crypto::IDigest* digest);

  constexpr int32_t const& __cordl_internal_get_L() const;

  constexpr int32_t& __cordl_internal_get_L();

  constexpr int32_t const& __cordl_internal_get_N() const;

  constexpr int32_t& __cordl_internal_get_N();

  constexpr int32_t const& __cordl_internal_get_certainty() const;

  constexpr int32_t& __cordl_internal_get_certainty();

  constexpr ::Org::BouncyCastle::Crypto::IDigest* const& __cordl_internal_get_digest() const;

  constexpr ::Org::BouncyCastle::Crypto::IDigest*& __cordl_internal_get_digest();

  constexpr ::Org::BouncyCastle::Security::SecureRandom* const& __cordl_internal_get_random() const;

  constexpr ::Org::BouncyCastle::Security::SecureRandom*& __cordl_internal_get_random();

  constexpr int32_t const& __cordl_internal_get_usageIndex() const;

  constexpr int32_t& __cordl_internal_get_usageIndex();

  constexpr bool const& __cordl_internal_get_use186_3() const;

  constexpr bool& __cordl_internal_get_use186_3();

  constexpr void __cordl_internal_set_L(int32_t value);

  constexpr void __cordl_internal_set_N(int32_t value);

  constexpr void __cordl_internal_set_certainty(int32_t value);

  constexpr void __cordl_internal_set_digest(::Org::BouncyCastle::Crypto::IDigest* value);

  constexpr void __cordl_internal_set_random(::Org::BouncyCastle::Security::SecureRandom* value);

  constexpr void __cordl_internal_set_usageIndex(int32_t value);

  constexpr void __cordl_internal_set_use186_3(bool value);

  /// @brief Method .ctor, addr 0x2382ddc, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2382e40, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IDigest* digest);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DsaParametersGenerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DsaParametersGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DsaParametersGenerator(DsaParametersGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DsaParametersGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DsaParametersGenerator(DsaParametersGenerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 898 };

  /// @brief Field digest, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IDigest* ___digest;

  /// @brief Field L, offset: 0x18, size: 0x4, def value: None
  int32_t ___L;

  /// @brief Field N, offset: 0x1c, size: 0x4, def value: None
  int32_t ___N;

  /// @brief Field certainty, offset: 0x20, size: 0x4, def value: None
  int32_t ___certainty;

  /// @brief Field random, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Security::SecureRandom* ___random;

  /// @brief Field use186_3, offset: 0x30, size: 0x1, def value: None
  bool ___use186_3;

  /// @brief Field usageIndex, offset: 0x34, size: 0x4, def value: None
  int32_t ___usageIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Generators::DsaParametersGenerator, ___digest) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Generators::DsaParametersGenerator, ___L) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Generators::DsaParametersGenerator, ___N) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Generators::DsaParametersGenerator, ___certainty) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Generators::DsaParametersGenerator, ___random) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Generators::DsaParametersGenerator, ___use186_3) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Generators::DsaParametersGenerator, ___usageIndex) == 0x34, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Generators::DsaParametersGenerator, 0x38>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Generators
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Generators::DsaParametersGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Generators::DsaParametersGenerator*, "Org.BouncyCastle.Crypto.Generators", "DsaParametersGenerator");
