#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Parameters/DsaParameterGenerationParameters.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DsaParameterGenerationParameters)
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class DsaParameterGenerationParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::DsaParameterGenerationParameters);
// Dependencies System.Object
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Parameters.DsaParameterGenerationParameters
class CORDL_TYPE DsaParameterGenerationParameters : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Certainty)) int32_t Certainty;

  __declspec(property(get = get_L)) int32_t L;

  __declspec(property(get = get_N)) int32_t N;

  __declspec(property(get = get_Random)) ::Org::BouncyCastle::Security::SecureRandom* Random;

  __declspec(property(get = get_UsageIndex)) int32_t UsageIndex;

  /// @brief Field certainty, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_certainty, put = __cordl_internal_set_certainty)) int32_t certainty;

  /// @brief Field l, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_l, put = __cordl_internal_set_l)) int32_t l;

  /// @brief Field n, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_n, put = __cordl_internal_set_n)) int32_t n;

  /// @brief Field random, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_random, put = __cordl_internal_set_random)) ::Org::BouncyCastle::Security::SecureRandom* random;

  /// @brief Field usageIndex, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_usageIndex, put = __cordl_internal_set_usageIndex)) int32_t usageIndex;

  static inline ::Org::BouncyCastle::Crypto::Parameters::DsaParameterGenerationParameters* New_ctor(int32_t L, int32_t N, int32_t certainty, ::Org::BouncyCastle::Security::SecureRandom* random);

  static inline ::Org::BouncyCastle::Crypto::Parameters::DsaParameterGenerationParameters* New_ctor(int32_t L, int32_t N, int32_t certainty, ::Org::BouncyCastle::Security::SecureRandom* random,
                                                                                                    int32_t usageIndex);

  constexpr int32_t const& __cordl_internal_get_certainty() const;

  constexpr int32_t& __cordl_internal_get_certainty();

  constexpr int32_t const& __cordl_internal_get_l() const;

  constexpr int32_t& __cordl_internal_get_l();

  constexpr int32_t const& __cordl_internal_get_n() const;

  constexpr int32_t& __cordl_internal_get_n();

  constexpr ::Org::BouncyCastle::Security::SecureRandom* const& __cordl_internal_get_random() const;

  constexpr ::Org::BouncyCastle::Security::SecureRandom*& __cordl_internal_get_random();

  constexpr int32_t const& __cordl_internal_get_usageIndex() const;

  constexpr int32_t& __cordl_internal_get_usageIndex();

  constexpr void __cordl_internal_set_certainty(int32_t value);

  constexpr void __cordl_internal_set_l(int32_t value);

  constexpr void __cordl_internal_set_n(int32_t value);

  constexpr void __cordl_internal_set_random(::Org::BouncyCastle::Security::SecureRandom* value);

  constexpr void __cordl_internal_set_usageIndex(int32_t value);

  /// @brief Method .ctor, addr 0x23bec7c, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(int32_t L, int32_t N, int32_t certainty, ::Org::BouncyCastle::Security::SecureRandom* random);

  /// @brief Method .ctor, addr 0x23becc8, size 0x54, virtual false, abstract: false, final false
  inline void _ctor(int32_t L, int32_t N, int32_t certainty, ::Org::BouncyCastle::Security::SecureRandom* random, int32_t usageIndex);

  /// @brief Method get_Certainty, addr 0x23bed34, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_Certainty();

  /// @brief Method get_L, addr 0x23bed1c, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_L();

  /// @brief Method get_N, addr 0x23bed24, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_N();

  /// @brief Method get_Random, addr 0x23bed3c, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Security::SecureRandom* get_Random();

  /// @brief Method get_UsageIndex, addr 0x23bed2c, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_UsageIndex();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DsaParameterGenerationParameters();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DsaParameterGenerationParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DsaParameterGenerationParameters(DsaParameterGenerationParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DsaParameterGenerationParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DsaParameterGenerationParameters(DsaParameterGenerationParameters const&) = delete;

  /// @brief Field DigitalSignatureUsage offset 0xffffffff size 0x4
  static constexpr int32_t DigitalSignatureUsage{ static_cast<int32_t>(0x1) };

  /// @brief Field KeyEstablishmentUsage offset 0xffffffff size 0x4
  static constexpr int32_t KeyEstablishmentUsage{ static_cast<int32_t>(0x2) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1028 };

  /// @brief Field l, offset: 0x10, size: 0x4, def value: None
  int32_t ___l;

  /// @brief Field n, offset: 0x14, size: 0x4, def value: None
  int32_t ___n;

  /// @brief Field certainty, offset: 0x18, size: 0x4, def value: None
  int32_t ___certainty;

  /// @brief Field random, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Security::SecureRandom* ___random;

  /// @brief Field usageIndex, offset: 0x28, size: 0x4, def value: None
  int32_t ___usageIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::DsaParameterGenerationParameters, ___l) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::DsaParameterGenerationParameters, ___n) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::DsaParameterGenerationParameters, ___certainty) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::DsaParameterGenerationParameters, ___random) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::DsaParameterGenerationParameters, ___usageIndex) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::DsaParameterGenerationParameters, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::DsaParameterGenerationParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::DsaParameterGenerationParameters*, "Org.BouncyCastle.Crypto.Parameters", "DsaParameterGenerationParameters");
