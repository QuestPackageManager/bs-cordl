#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__PbeParametersGenerator_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Pkcs5S1ParametersGenerator)
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Generators {
class Pkcs5S1ParametersGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Generators::Pkcs5S1ParametersGenerator);
// Type: Org.BouncyCastle.Crypto.Generators::Pkcs5S1ParametersGenerator
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Generators {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(916))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(919))
// CS Name: ::Org.BouncyCastle.Crypto.Generators::Pkcs5S1ParametersGenerator*
class CORDL_TYPE Pkcs5S1ParametersGenerator : public ::Org::BouncyCastle::Crypto::PbeParametersGenerator {
public:
  // Declarations
  /// @brief Field digest, offset 0x28, size 0x8
  __declspec(property(get = __get_digest, put = __set_digest))::Org::BouncyCastle::Crypto::IDigest* digest;

  constexpr ::Org::BouncyCastle::Crypto::IDigest*& __get_digest();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IDigest*> const& __get_digest() const;

  constexpr void __set_digest(::Org::BouncyCastle::Crypto::IDigest* value);

  static inline ::Org::BouncyCastle::Crypto::Generators::Pkcs5S1ParametersGenerator* New_ctor(::Org::BouncyCastle::Crypto::IDigest* digest);

  /// @brief Method .ctor, addr 0xf03fc4, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IDigest* digest);

  /// @brief Method GenerateDerivedKey, addr 0xf03fec, size 0x34c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateDerivedKey();

  /// @brief Method GenerateDerivedParameters, addr 0xf04338, size 0xc, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::ICipherParameters* GenerateDerivedParameters(int32_t keySize);

  /// @brief Method GenerateDerivedParameters, addr 0xf04344, size 0x1a8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::ICipherParameters* GenerateDerivedParameters(::StringW algorithm, int32_t keySize);

  /// @brief Method GenerateDerivedParameters, addr 0xf044ec, size 0x204, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::ICipherParameters* GenerateDerivedParameters(int32_t keySize, int32_t ivSize);

  /// @brief Method GenerateDerivedParameters, addr 0xf046f0, size 0x214, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::ICipherParameters* GenerateDerivedParameters(::StringW algorithm, int32_t keySize, int32_t ivSize);

  /// @brief Method GenerateDerivedMacParameters, addr 0xf04904, size 0x1a8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::ICipherParameters* GenerateDerivedMacParameters(int32_t keySize);

  // Ctor Parameters [CppParam { name: "", ty: "Pkcs5S1ParametersGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Pkcs5S1ParametersGenerator(Pkcs5S1ParametersGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Pkcs5S1ParametersGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Pkcs5S1ParametersGenerator(Pkcs5S1ParametersGenerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Pkcs5S1ParametersGenerator();

public:
  /// @brief Field digest, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IDigest* ___digest;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Generators::Pkcs5S1ParametersGenerator, 0x30>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Generators::Pkcs5S1ParametersGenerator, ___digest) == 0x28, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Generators
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Generators::Pkcs5S1ParametersGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Generators::Pkcs5S1ParametersGenerator*, "Org.BouncyCastle.Crypto.Generators", "Pkcs5S1ParametersGenerator");
