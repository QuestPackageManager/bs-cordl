#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__KeyGenerationParameters_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NaccacheSternKeyGenerationParameters)
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class NaccacheSternKeyGenerationParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyGenerationParameters);
// Type: Org.BouncyCastle.Crypto.Parameters::NaccacheSternKeyGenerationParameters
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1018))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1068))
// CS Name: ::Org.BouncyCastle.Crypto.Parameters::NaccacheSternKeyGenerationParameters*
class CORDL_TYPE NaccacheSternKeyGenerationParameters : public ::Org::BouncyCastle::Crypto::KeyGenerationParameters {
public:
  // Declarations
  /// @brief Field certainty, offset 0x1c, size 0x4
  __declspec(property(get = __get_certainty, put = __set_certainty)) int32_t certainty;

  /// @brief Field countSmallPrimes, offset 0x20, size 0x4
  __declspec(property(get = __get_countSmallPrimes, put = __set_countSmallPrimes)) int32_t countSmallPrimes;

  __declspec(property(get = get_Certainty)) int32_t Certainty;

  __declspec(property(get = get_CountSmallPrimes)) int32_t CountSmallPrimes;

  __declspec(property(get = get_IsDebug)) bool IsDebug;

  constexpr int32_t& __get_certainty();

  constexpr int32_t const& __get_certainty() const;

  constexpr void __set_certainty(int32_t value);

  constexpr int32_t& __get_countSmallPrimes();

  constexpr int32_t const& __get_countSmallPrimes() const;

  constexpr void __set_countSmallPrimes(int32_t value);

  static inline ::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyGenerationParameters* New_ctor(::Org::BouncyCastle::Security::SecureRandom* random, int32_t strength, int32_t certainty,
                                                                                                        int32_t countSmallPrimes);

  /// @brief Method .ctor, addr 0xf38c74, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Security::SecureRandom* random, int32_t strength, int32_t certainty, int32_t countSmallPrimes);

  static inline ::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyGenerationParameters* New_ctor(::Org::BouncyCastle::Security::SecureRandom* random, int32_t strength, int32_t certainty,
                                                                                                        int32_t countSmallPrimes, bool debug);

  /// @brief Method .ctor, addr 0xf38d30, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Security::SecureRandom* random, int32_t strength, int32_t certainty, int32_t countSmallPrimes, bool debug);

  /// @brief Method get_Certainty, addr 0xf38d34, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Certainty();

  /// @brief Method get_CountSmallPrimes, addr 0xf38d3c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_CountSmallPrimes();

  /// @brief Method get_IsDebug, addr 0xf38d44, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsDebug();

  // Ctor Parameters [CppParam { name: "", ty: "NaccacheSternKeyGenerationParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NaccacheSternKeyGenerationParameters(NaccacheSternKeyGenerationParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NaccacheSternKeyGenerationParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NaccacheSternKeyGenerationParameters(NaccacheSternKeyGenerationParameters const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NaccacheSternKeyGenerationParameters();

public:
  /// @brief Field certainty, offset: 0x1c, size: 0x4, def value: None
  int32_t ___certainty;

  /// @brief Field countSmallPrimes, offset: 0x20, size: 0x4, def value: None
  int32_t ___countSmallPrimes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyGenerationParameters, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyGenerationParameters, ___certainty) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyGenerationParameters, ___countSmallPrimes) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyGenerationParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyGenerationParameters*, "Org.BouncyCastle.Crypto.Parameters", "NaccacheSternKeyGenerationParameters");
