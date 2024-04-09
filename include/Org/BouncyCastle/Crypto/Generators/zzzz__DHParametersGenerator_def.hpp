#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DHParametersGenerator)
namespace Org::BouncyCastle::Crypto::Parameters {
class DHParameters;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Generators {
class DHParametersGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Generators::DHParametersGenerator);
// Type: Org.BouncyCastle.Crypto.Generators::DHParametersGenerator
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Generators {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Generators::DHParametersGenerator*
class CORDL_TYPE DHParametersGenerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field certainty, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_certainty, put = __cordl_internal_set_certainty)) int32_t certainty;

  /// @brief Field random, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_random, put = __cordl_internal_set_random))::Org::BouncyCastle::Security::SecureRandom* random;

  /// @brief Field size, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_size, put = __cordl_internal_set_size)) int32_t size;

  /// @brief Method GenerateParameters, addr 0x1062974, size 0x118, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* GenerateParameters();

  /// @brief Method Init, addr 0x1062968, size 0xc, virtual true, abstract: false, final false
  inline void Init(int32_t size, int32_t certainty, ::Org::BouncyCastle::Security::SecureRandom* random);

  static inline ::Org::BouncyCastle::Crypto::Generators::DHParametersGenerator* New_ctor();

  constexpr int32_t const& __cordl_internal_get_certainty() const;

  constexpr int32_t& __cordl_internal_get_certainty();

  constexpr ::Org::BouncyCastle::Security::SecureRandom*& __cordl_internal_get_random();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Security::SecureRandom*> const& __cordl_internal_get_random() const;

  constexpr int32_t const& __cordl_internal_get_size() const;

  constexpr int32_t& __cordl_internal_get_size();

  constexpr void __cordl_internal_set_certainty(int32_t value);

  constexpr void __cordl_internal_set_random(::Org::BouncyCastle::Security::SecureRandom* value);

  constexpr void __cordl_internal_set_size(int32_t value);

  /// @brief Method .ctor, addr 0x1063058, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DHParametersGenerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DHParametersGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DHParametersGenerator(DHParametersGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DHParametersGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DHParametersGenerator(DHParametersGenerator const&) = delete;

  /// @brief Field size, offset: 0x10, size: 0x4, def value: None
  int32_t ___size;

  /// @brief Field certainty, offset: 0x14, size: 0x4, def value: None
  int32_t ___certainty;

  /// @brief Field random, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Security::SecureRandom* ___random;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Generators::DHParametersGenerator, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Generators::DHParametersGenerator, ___size) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Generators::DHParametersGenerator, ___certainty) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Generators::DHParametersGenerator, ___random) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Generators
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Generators::DHParametersGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Generators::DHParametersGenerator*, "Org.BouncyCastle.Crypto.Generators", "DHParametersGenerator");
