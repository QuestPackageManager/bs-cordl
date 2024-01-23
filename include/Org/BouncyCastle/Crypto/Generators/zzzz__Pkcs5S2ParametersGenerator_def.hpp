#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__PbeParametersGenerator_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: Org.BouncyCastle.Crypto.Generators::Pkcs5S2ParametersGenerator
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Generators {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(916))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(920))
// CS Name: ::Org.BouncyCastle.Crypto.Generators::Pkcs5S2ParametersGenerator*
class CORDL_TYPE Pkcs5S2ParametersGenerator : public ::Org::BouncyCastle::Crypto::PbeParametersGenerator {
public:
  // Declarations
  /// @brief Field hMac, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_hMac, put = __cordl_internal_set_hMac))::Org::BouncyCastle::Crypto::IMac* hMac;

  /// @brief Field state, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_state, put = __cordl_internal_set_state))::ArrayW<uint8_t, ::Array<uint8_t>*> state;

  constexpr ::Org::BouncyCastle::Crypto::IMac*& __cordl_internal_get_hMac();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IMac*> const& __cordl_internal_get_hMac() const;

  constexpr void __cordl_internal_set_hMac(::Org::BouncyCastle::Crypto::IMac* value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_state();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_state() const;

  constexpr void __cordl_internal_set_state(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator* New_ctor();

  /// @brief Method .ctor, addr 0xf04aac, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator* New_ctor(::Org::BouncyCastle::Crypto::IDigest* digest);

  /// @brief Method .ctor, addr 0xf04b10, size 0x114, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IDigest* digest);

  /// @brief Method F, addr 0xf04c24, size 0x3c4, virtual false, abstract: false, final false
  inline void F(::ArrayW<uint8_t, ::Array<uint8_t>*> S, int32_t c, ::ArrayW<uint8_t, ::Array<uint8_t>*> iBuf, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff);

  /// @brief Method GenerateDerivedKey, addr 0xf04fe8, size 0x228, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateDerivedKey(int32_t dkLen);

  /// @brief Method GenerateDerivedParameters, addr 0xf05210, size 0xc, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::ICipherParameters* GenerateDerivedParameters(int32_t keySize);

  /// @brief Method GenerateDerivedParameters, addr 0xf0521c, size 0x98, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::ICipherParameters* GenerateDerivedParameters(::StringW algorithm, int32_t keySize);

  /// @brief Method GenerateDerivedParameters, addr 0xf052b4, size 0xf4, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::ICipherParameters* GenerateDerivedParameters(int32_t keySize, int32_t ivSize);

  /// @brief Method GenerateDerivedParameters, addr 0xf053a8, size 0x104, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::ICipherParameters* GenerateDerivedParameters(::StringW algorithm, int32_t keySize, int32_t ivSize);

  /// @brief Method GenerateDerivedMacParameters, addr 0xf054ac, size 0x9c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::ICipherParameters* GenerateDerivedMacParameters(int32_t keySize);

  // Ctor Parameters [CppParam { name: "", ty: "Pkcs5S2ParametersGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Pkcs5S2ParametersGenerator(Pkcs5S2ParametersGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Pkcs5S2ParametersGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Pkcs5S2ParametersGenerator(Pkcs5S2ParametersGenerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Pkcs5S2ParametersGenerator();

public:
  /// @brief Field hMac, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IMac* ___hMac;

  /// @brief Field state, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___state;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator, 0x38>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator, ___hMac) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator, ___state) == 0x30, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Generators
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator*, "Org.BouncyCastle.Crypto.Generators", "Pkcs5S2ParametersGenerator");
