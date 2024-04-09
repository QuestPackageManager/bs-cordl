#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__PbeParametersGenerator_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OpenSslPbeParametersGenerator)
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Generators {
class OpenSslPbeParametersGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator);
// Type: Org.BouncyCastle.Crypto.Generators::OpenSslPbeParametersGenerator
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Generators {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Generators::OpenSslPbeParametersGenerator*
class CORDL_TYPE OpenSslPbeParametersGenerator : public ::Org::BouncyCastle::Crypto::PbeParametersGenerator {
public:
  // Declarations
  /// @brief Field digest, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_digest, put = __cordl_internal_set_digest))::Org::BouncyCastle::Crypto::IDigest* digest;

  /// @brief Method GenerateDerivedKey, addr 0x106de0c, size 0x384, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateDerivedKey(int32_t bytesNeeded);

  /// @brief Method GenerateDerivedMacParameters, addr 0x106e42c, size 0x9c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::ICipherParameters* GenerateDerivedMacParameters(int32_t keySize);

  /// @brief Method GenerateDerivedParameters, addr 0x106e19c, size 0x98, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::ICipherParameters* GenerateDerivedParameters(::StringW algorithm, int32_t keySize);

  /// @brief Method GenerateDerivedParameters, addr 0x106e328, size 0x104, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::ICipherParameters* GenerateDerivedParameters(::StringW algorithm, int32_t keySize, int32_t ivSize);

  /// @brief Method GenerateDerivedParameters, addr 0x106e190, size 0xc, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::ICipherParameters* GenerateDerivedParameters(int32_t keySize);

  /// @brief Method GenerateDerivedParameters, addr 0x106e234, size 0xf4, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::ICipherParameters* GenerateDerivedParameters(int32_t keySize, int32_t ivSize);

  /// @brief Method Init, addr 0x106de04, size 0x8, virtual true, abstract: false, final false
  inline void Init(::ArrayW<uint8_t, ::Array<uint8_t>*> password, ::ArrayW<uint8_t, ::Array<uint8_t>*> salt);

  /// @brief Method Init, addr 0x106ddfc, size 0x8, virtual true, abstract: false, final false
  inline void Init(::ArrayW<uint8_t, ::Array<uint8_t>*> password, ::ArrayW<uint8_t, ::Array<uint8_t>*> salt, int32_t iterationCount);

  static inline ::Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator* New_ctor();

  constexpr ::Org::BouncyCastle::Crypto::IDigest*& __cordl_internal_get_digest();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IDigest*> const& __cordl_internal_get_digest() const;

  constexpr void __cordl_internal_set_digest(::Org::BouncyCastle::Crypto::IDigest* value);

  /// @brief Method .ctor, addr 0x106dd94, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OpenSslPbeParametersGenerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OpenSslPbeParametersGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OpenSslPbeParametersGenerator(OpenSslPbeParametersGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OpenSslPbeParametersGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OpenSslPbeParametersGenerator(OpenSslPbeParametersGenerator const&) = delete;

  /// @brief Field digest, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IDigest* ___digest;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator, 0x30>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator, ___digest) == 0x28, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Generators
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator*, "Org.BouncyCastle.Crypto.Generators", "OpenSslPbeParametersGenerator");
