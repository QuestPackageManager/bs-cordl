#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/KeyGenerationParameters.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(KeyGenerationParameters)
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class KeyGenerationParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::KeyGenerationParameters);
// Type: Org.BouncyCastle.Crypto::KeyGenerationParameters
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto::KeyGenerationParameters*
class CORDL_TYPE KeyGenerationParameters : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Random))::Org::BouncyCastle::Security::SecureRandom* Random;

  __declspec(property(get = get_Strength)) int32_t Strength;

  /// @brief Field random, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_random, put = __cordl_internal_set_random))::Org::BouncyCastle::Security::SecureRandom* random;

  /// @brief Field strength, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_strength, put = __cordl_internal_set_strength)) int32_t strength;

  static inline ::Org::BouncyCastle::Crypto::KeyGenerationParameters* New_ctor(::Org::BouncyCastle::Security::SecureRandom* random, int32_t strength);

  constexpr ::Org::BouncyCastle::Security::SecureRandom*& __cordl_internal_get_random();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Security::SecureRandom*> const& __cordl_internal_get_random() const;

  constexpr int32_t const& __cordl_internal_get_strength() const;

  constexpr int32_t& __cordl_internal_get_strength();

  constexpr void __cordl_internal_set_random(::Org::BouncyCastle::Security::SecureRandom* value);

  constexpr void __cordl_internal_set_strength(int32_t value);

  /// @brief Method .ctor, addr 0x118ea48, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Security::SecureRandom* random, int32_t strength);

  /// @brief Method get_Random, addr 0x118eb1c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Security::SecureRandom* get_Random();

  /// @brief Method get_Strength, addr 0x118eb24, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Strength();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KeyGenerationParameters();

public:
  // Ctor Parameters [CppParam { name: "", ty: "KeyGenerationParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KeyGenerationParameters(KeyGenerationParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KeyGenerationParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KeyGenerationParameters(KeyGenerationParameters const&) = delete;

  /// @brief Field random, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Security::SecureRandom* ___random;

  /// @brief Field strength, offset: 0x18, size: 0x4, def value: None
  int32_t ___strength;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::KeyGenerationParameters, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::KeyGenerationParameters, ___random) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::KeyGenerationParameters, ___strength) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto
NEED_NO_BOX(::Org::BouncyCastle::Crypto::KeyGenerationParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::KeyGenerationParameters*, "Org.BouncyCastle.Crypto", "KeyGenerationParameters");
