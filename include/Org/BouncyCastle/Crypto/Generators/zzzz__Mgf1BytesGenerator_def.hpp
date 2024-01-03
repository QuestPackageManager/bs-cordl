#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Mgf1BytesGenerator)
namespace Org::BouncyCastle::Crypto {
class IDerivationFunction;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Crypto {
class IDerivationParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Generators {
class Mgf1BytesGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Generators::Mgf1BytesGenerator);
// Type: Org.BouncyCastle.Crypto.Generators::Mgf1BytesGenerator
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Generators {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(913))
// CS Name: ::Org.BouncyCastle.Crypto.Generators::Mgf1BytesGenerator*
class CORDL_TYPE Mgf1BytesGenerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field digest, offset 0x10, size 0x8
  __declspec(property(get = __get_digest, put = __set_digest))::Org::BouncyCastle::Crypto::IDigest* digest;

  /// @brief Field seed, offset 0x18, size 0x8
  __declspec(property(get = __get_seed, put = __set_seed))::ArrayW<uint8_t, ::Array<uint8_t>*> seed;

  /// @brief Field hLen, offset 0x20, size 0x4
  __declspec(property(get = __get_hLen, put = __set_hLen)) int32_t hLen;

  __declspec(property(get = get_Digest))::Org::BouncyCastle::Crypto::IDigest* Digest;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDerivationFunction"
  constexpr operator ::Org::BouncyCastle::Crypto::IDerivationFunction*() noexcept;

  constexpr ::Org::BouncyCastle::Crypto::IDigest*& __get_digest();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IDigest*> const& __get_digest() const;

  constexpr void __set_digest(::Org::BouncyCastle::Crypto::IDigest* value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_seed();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_seed() const;

  constexpr void __set_seed(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int32_t& __get_hLen();

  constexpr int32_t const& __get_hLen() const;

  constexpr void __set_hLen(int32_t value);

  static inline ::Org::BouncyCastle::Crypto::Generators::Mgf1BytesGenerator* New_ctor(::Org::BouncyCastle::Crypto::IDigest* digest);

  /// @brief Method .ctor, addr 0xeff338, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IDigest* digest);

  /// @brief Method Init, addr 0xeff3f4, size 0x148, virtual true, abstract: false, final true
  inline void Init(::Org::BouncyCastle::Crypto::IDerivationParameters* parameters);

  /// @brief Method get_Digest, addr 0xeff53c, size 0x8, virtual true, abstract: false, final true
  inline ::Org::BouncyCastle::Crypto::IDigest* get_Digest();

  /// @brief Method ItoOSP, addr 0xeff544, size 0x54, virtual false, abstract: false, final false
  inline void ItoOSP(int32_t i, ::ArrayW<uint8_t, ::Array<uint8_t>*> sp);

  /// @brief Method GenerateBytes, addr 0xeff598, size 0x4c0, virtual true, abstract: false, final true
  inline int32_t GenerateBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff, int32_t length);

  // Ctor Parameters [CppParam { name: "", ty: "Mgf1BytesGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Mgf1BytesGenerator(Mgf1BytesGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Mgf1BytesGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Mgf1BytesGenerator(Mgf1BytesGenerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Mgf1BytesGenerator();

public:
  /// @brief Field digest, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IDigest* ___digest;

  /// @brief Field seed, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___seed;

  /// @brief Field hLen, offset: 0x20, size: 0x4, def value: None
  int32_t ___hLen;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Generators::Mgf1BytesGenerator, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Generators::Mgf1BytesGenerator, ___digest) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Generators::Mgf1BytesGenerator, ___seed) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Generators::Mgf1BytesGenerator, ___hLen) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Generators
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Generators::Mgf1BytesGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Generators::Mgf1BytesGenerator*, "Org.BouncyCastle.Crypto.Generators", "Mgf1BytesGenerator");
