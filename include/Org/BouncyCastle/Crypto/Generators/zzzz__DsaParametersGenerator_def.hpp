#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DsaParametersGenerator)
namespace Org::BouncyCastle::Crypto::Parameters {
class DsaParameters;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class DsaParameterGenerationParameters;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Generators {
class DsaParametersGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Generators::DsaParametersGenerator);
// Type: Org.BouncyCastle.Crypto.Generators::DsaParametersGenerator
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Generators {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(898))
// CS Name: ::Org.BouncyCastle.Crypto.Generators::DsaParametersGenerator*
class CORDL_TYPE DsaParametersGenerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field digest, offset 0x10, size 0x8
  __declspec(property(get = __get_digest, put = __set_digest))::Org::BouncyCastle::Crypto::IDigest* digest;

  /// @brief Field L, offset 0x18, size 0x4
  __declspec(property(get = __get_L, put = __set_L)) int32_t L;

  /// @brief Field N, offset 0x1c, size 0x4
  __declspec(property(get = __get_N, put = __set_N)) int32_t N;

  /// @brief Field certainty, offset 0x20, size 0x4
  __declspec(property(get = __get_certainty, put = __set_certainty)) int32_t certainty;

  /// @brief Field random, offset 0x28, size 0x8
  __declspec(property(get = __get_random, put = __set_random))::Org::BouncyCastle::Security::SecureRandom* random;

  /// @brief Field use186_3, offset 0x30, size 0x1
  __declspec(property(get = __get_use186_3, put = __set_use186_3)) bool use186_3;

  /// @brief Field usageIndex, offset 0x34, size 0x4
  __declspec(property(get = __get_usageIndex, put = __set_usageIndex)) int32_t usageIndex;

  constexpr ::Org::BouncyCastle::Crypto::IDigest*& __get_digest();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IDigest*> const& __get_digest() const;

  constexpr void __set_digest(::Org::BouncyCastle::Crypto::IDigest* value);

  constexpr int32_t& __get_L();

  constexpr int32_t const& __get_L() const;

  constexpr void __set_L(int32_t value);

  constexpr int32_t& __get_N();

  constexpr int32_t const& __get_N() const;

  constexpr void __set_N(int32_t value);

  constexpr int32_t& __get_certainty();

  constexpr int32_t const& __get_certainty() const;

  constexpr void __set_certainty(int32_t value);

  constexpr ::Org::BouncyCastle::Security::SecureRandom*& __get_random();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Security::SecureRandom*> const& __get_random() const;

  constexpr void __set_random(::Org::BouncyCastle::Security::SecureRandom* value);

  constexpr bool& __get_use186_3();

  constexpr bool const& __get_use186_3() const;

  constexpr void __set_use186_3(bool value);

  constexpr int32_t& __get_usageIndex();

  constexpr int32_t const& __get_usageIndex() const;

  constexpr void __set_usageIndex(int32_t value);

  static inline ::Org::BouncyCastle::Crypto::Generators::DsaParametersGenerator* New_ctor();

  /// @brief Method .ctor addr 0xef8500 size 0x6c virtual false final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Crypto::Generators::DsaParametersGenerator* New_ctor(::Org::BouncyCastle::Crypto::IDigest* digest);

  /// @brief Method .ctor addr 0xef856c size 0x28 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IDigest* digest);

  /// @brief Method Init addr 0xef8594 size 0x9c virtual true final false
  inline void Init(int32_t size, int32_t certainty, ::Org::BouncyCastle::Security::SecureRandom* random);

  /// @brief Method Init addr 0xef8660 size 0x29c virtual true final false
  inline void Init(::Org::BouncyCastle::Crypto::Parameters::DsaParameterGenerationParameters* parameters);

  /// @brief Method GenerateParameters addr 0xef88fc size 0x1c virtual true final false
  inline ::Org::BouncyCastle::Crypto::Parameters::DsaParameters* GenerateParameters();

  /// @brief Method GenerateParameters_FIPS186_2 addr 0xef8918 size 0x538 virtual true final false
  inline ::Org::BouncyCastle::Crypto::Parameters::DsaParameters* GenerateParameters_FIPS186_2();

  /// @brief Method CalculateGenerator_FIPS186_2 addr 0xef8fc0 size 0x114 virtual true final false
  inline ::Org::BouncyCastle::Math::BigInteger* CalculateGenerator_FIPS186_2(::Org::BouncyCastle::Math::BigInteger* p, ::Org::BouncyCastle::Math::BigInteger* q,
                                                                             ::Org::BouncyCastle::Security::SecureRandom* r);

  /// @brief Method GenerateParameters_FIPS186_3 addr 0xef90d4 size 0x58c virtual true final false
  inline ::Org::BouncyCastle::Crypto::Parameters::DsaParameters* GenerateParameters_FIPS186_3();

  /// @brief Method CalculateGenerator_FIPS186_3_Unverifiable addr 0xef9660 size 0xc virtual true final false
  inline ::Org::BouncyCastle::Math::BigInteger* CalculateGenerator_FIPS186_3_Unverifiable(::Org::BouncyCastle::Math::BigInteger* p, ::Org::BouncyCastle::Math::BigInteger* q,
                                                                                          ::Org::BouncyCastle::Security::SecureRandom* r);

  /// @brief Method CalculateGenerator_FIPS186_3_Verifiable addr 0xef966c size 0x2b0 virtual true final false
  inline ::Org::BouncyCastle::Math::BigInteger* CalculateGenerator_FIPS186_3_Verifiable(::Org::BouncyCastle::Crypto::IDigest* d, ::Org::BouncyCastle::Math::BigInteger* p,
                                                                                        ::Org::BouncyCastle::Math::BigInteger* q, ::ArrayW<uint8_t, ::Array<uint8_t>*> seed, int32_t index);

  /// @brief Method IsValidDsaStrength addr 0xef8630 size 0x1c virtual false final false
  static inline bool IsValidDsaStrength(int32_t strength);

  /// @brief Method Hash addr 0xef8e50 size 0x128 virtual false final false
  static inline void Hash(::Org::BouncyCastle::Crypto::IDigest* d, ::ArrayW<uint8_t, ::Array<uint8_t>*> input, ::ArrayW<uint8_t, ::Array<uint8_t>*> output);

  /// @brief Method GetDefaultN addr 0xef864c size 0x14 virtual false final false
  static inline int32_t GetDefaultN(int32_t L);

  /// @brief Method Inc addr 0xef8f78 size 0x48 virtual false final false
  static inline void Inc(::ArrayW<uint8_t, ::Array<uint8_t>*> buf);

  // Ctor Parameters [CppParam { name: "", ty: "DsaParametersGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DsaParametersGenerator(DsaParametersGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DsaParametersGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DsaParametersGenerator(DsaParametersGenerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DsaParametersGenerator();

public:
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
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Generators::DsaParametersGenerator, 0x38>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Generators
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Generators::DsaParametersGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Generators::DsaParametersGenerator*, "Org.BouncyCastle.Crypto.Generators", "DsaParametersGenerator");
