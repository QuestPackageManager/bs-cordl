#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Generators/Mgf1BytesGenerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__IDerivationFunction_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Mgf1BytesGenerator)
namespace Org::BouncyCastle::Crypto {
class IDerivationParameters;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Generators {
class Mgf1BytesGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Generators::Mgf1BytesGenerator);
// Dependencies Org.BouncyCastle.Crypto.IDerivationFunction, System.Object
namespace Org::BouncyCastle::Crypto::Generators {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Generators.Mgf1BytesGenerator
class CORDL_TYPE Mgf1BytesGenerator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Digest)) ::Org::BouncyCastle::Crypto::IDigest* Digest;

  /// @brief Field digest, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_digest, put = __cordl_internal_set_digest)) ::Org::BouncyCastle::Crypto::IDigest* digest;

  /// @brief Field hLen, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_hLen, put = __cordl_internal_set_hLen)) int32_t hLen;

  /// @brief Field seed, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_seed, put = __cordl_internal_set_seed)) ::ArrayW<uint8_t, ::Array<uint8_t>*> seed;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDerivationFunction"
  constexpr operator ::Org::BouncyCastle::Crypto::IDerivationFunction*() noexcept;

  /// @brief Method GenerateBytes, addr 0x2386198, size 0x4bc, virtual true, abstract: false, final true
  inline int32_t GenerateBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff, int32_t length);

  /// @brief Method Init, addr 0x2385ff8, size 0x144, virtual true, abstract: false, final true
  inline void Init(::Org::BouncyCastle::Crypto::IDerivationParameters* parameters);

  /// @brief Method ItoOSP, addr 0x2386144, size 0x54, virtual false, abstract: false, final false
  inline void ItoOSP(int32_t i, ::ArrayW<uint8_t, ::Array<uint8_t>*> sp);

  static inline ::Org::BouncyCastle::Crypto::Generators::Mgf1BytesGenerator* New_ctor(::Org::BouncyCastle::Crypto::IDigest* digest);

  constexpr ::Org::BouncyCastle::Crypto::IDigest* const& __cordl_internal_get_digest() const;

  constexpr ::Org::BouncyCastle::Crypto::IDigest*& __cordl_internal_get_digest();

  constexpr int32_t const& __cordl_internal_get_hLen() const;

  constexpr int32_t& __cordl_internal_get_hLen();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_seed() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_seed();

  constexpr void __cordl_internal_set_digest(::Org::BouncyCastle::Crypto::IDigest* value);

  constexpr void __cordl_internal_set_hLen(int32_t value);

  constexpr void __cordl_internal_set_seed(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x2385f3c, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IDigest* digest);

  /// @brief Method get_Digest, addr 0x238613c, size 0x8, virtual true, abstract: false, final true
  inline ::Org::BouncyCastle::Crypto::IDigest* get_Digest();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IDerivationFunction"
  constexpr ::Org::BouncyCastle::Crypto::IDerivationFunction* i___Org__BouncyCastle__Crypto__IDerivationFunction() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Mgf1BytesGenerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Mgf1BytesGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Mgf1BytesGenerator(Mgf1BytesGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Mgf1BytesGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Mgf1BytesGenerator(Mgf1BytesGenerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 913 };

  /// @brief Field digest, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IDigest* ___digest;

  /// @brief Field seed, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___seed;

  /// @brief Field hLen, offset: 0x20, size: 0x4, def value: None
  int32_t ___hLen;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Generators::Mgf1BytesGenerator, ___digest) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Generators::Mgf1BytesGenerator, ___seed) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Generators::Mgf1BytesGenerator, ___hLen) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Generators::Mgf1BytesGenerator, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Generators
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Generators::Mgf1BytesGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Generators::Mgf1BytesGenerator*, "Org.BouncyCastle.Crypto.Generators", "Mgf1BytesGenerator");
