#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Generators/Pkcs5S2ParametersGenerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__PbeParametersGenerator_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Pkcs5S2ParametersGenerator)
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Crypto {
class IMac;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Generators {
class Pkcs5S2ParametersGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator);
// Dependencies Org.BouncyCastle.Crypto.PbeParametersGenerator
namespace Org::BouncyCastle::Crypto::Generators {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Generators.Pkcs5S2ParametersGenerator
class CORDL_TYPE Pkcs5S2ParametersGenerator : public ::Org::BouncyCastle::Crypto::PbeParametersGenerator {
public:
  // Declarations
  /// @brief Field hMac, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_hMac, put = __cordl_internal_set_hMac)) ::Org::BouncyCastle::Crypto::IMac* hMac;

  /// @brief Field state, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_state, put = __cordl_internal_set_state)) ::ArrayW<uint8_t, ::Array<uint8_t>*> state;

  /// @brief Method F, addr 0x238f184, size 0x3c0, virtual false, abstract: false, final false
  inline void F(::ArrayW<uint8_t, ::Array<uint8_t>*> S, int32_t c, ::ArrayW<uint8_t, ::Array<uint8_t>*> iBuf, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff);

  /// @brief Method GenerateDerivedKey, addr 0x238f544, size 0x224, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateDerivedKey(int32_t dkLen);

  /// @brief Method GenerateDerivedMacParameters, addr 0x238f9f0, size 0x94, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::ICipherParameters* GenerateDerivedMacParameters(int32_t keySize);

  /// @brief Method GenerateDerivedParameters, addr 0x238f774, size 0x98, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::ICipherParameters* GenerateDerivedParameters(::StringW algorithm, int32_t keySize);

  /// @brief Method GenerateDerivedParameters, addr 0x238f8f4, size 0xfc, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::ICipherParameters* GenerateDerivedParameters(::StringW algorithm, int32_t keySize, int32_t ivSize);

  /// @brief Method GenerateDerivedParameters, addr 0x238f768, size 0xc, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::ICipherParameters* GenerateDerivedParameters(int32_t keySize);

  /// @brief Method GenerateDerivedParameters, addr 0x238f80c, size 0xe8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::ICipherParameters* GenerateDerivedParameters(int32_t keySize, int32_t ivSize);

  static inline ::Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator* New_ctor();

  static inline ::Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator* New_ctor(::Org::BouncyCastle::Crypto::IDigest* digest);

  constexpr ::Org::BouncyCastle::Crypto::IMac* const& __cordl_internal_get_hMac() const;

  constexpr ::Org::BouncyCastle::Crypto::IMac*& __cordl_internal_get_hMac();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_state() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_state();

  constexpr void __cordl_internal_set_hMac(::Org::BouncyCastle::Crypto::IMac* value);

  constexpr void __cordl_internal_set_state(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x238f014, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x238f070, size 0x114, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IDigest* digest);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Pkcs5S2ParametersGenerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Pkcs5S2ParametersGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Pkcs5S2ParametersGenerator(Pkcs5S2ParametersGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Pkcs5S2ParametersGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Pkcs5S2ParametersGenerator(Pkcs5S2ParametersGenerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 920 };

  /// @brief Field hMac, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IMac* ___hMac;

  /// @brief Field state, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___state;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator, ___hMac) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator, ___state) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator, 0x38>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Generators
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator*, "Org.BouncyCastle.Crypto.Generators", "Pkcs5S2ParametersGenerator");
