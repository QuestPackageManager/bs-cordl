#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Encodings/ISO9796d1Encoding.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__IAsymmetricBlockCipher_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ISO9796d1Encoding)
namespace Org::BouncyCastle::Crypto {
class IAsymmetricBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Encodings {
class ISO9796d1Encoding;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding);
// Dependencies Org.BouncyCastle.Crypto.IAsymmetricBlockCipher, System.Object
namespace Org::BouncyCastle::Crypto::Encodings {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Encodings.ISO9796d1Encoding
class CORDL_TYPE ISO9796d1Encoding : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName)) ::StringW AlgorithmName;

  /// @brief Field Six, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Six, put = setStaticF_Six)) ::Org::BouncyCastle::Math::BigInteger* Six;

  /// @brief Field Sixteen, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Sixteen, put = setStaticF_Sixteen)) ::Org::BouncyCastle::Math::BigInteger* Sixteen;

  /// @brief Field bitSize, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_bitSize, put = __cordl_internal_set_bitSize)) int32_t bitSize;

  /// @brief Field engine, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_engine, put = __cordl_internal_set_engine)) ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* engine;

  /// @brief Field forEncryption, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_forEncryption, put = __cordl_internal_set_forEncryption)) bool forEncryption;

  /// @brief Field inverse, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_inverse, put = setStaticF_inverse)) ::ArrayW<uint8_t, ::Array<uint8_t>*> inverse;

  /// @brief Field modulus, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_modulus, put = __cordl_internal_set_modulus)) ::Org::BouncyCastle::Math::BigInteger* modulus;

  /// @brief Field padBits, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_padBits, put = __cordl_internal_set_padBits)) int32_t padBits;

  /// @brief Field shadows, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_shadows, put = setStaticF_shadows)) ::ArrayW<uint8_t, ::Array<uint8_t>*> shadows;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher"
  constexpr operator ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*() noexcept;

  /// @brief Method DecodeBlock, addr 0x233f9b0, size 0x4d0, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> DecodeBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t inLen);

  /// @brief Method EncodeBlock, addr 0x233f66c, size 0x344, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> EncodeBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t inLen);

  /// @brief Method GetInputBlockSize, addr 0x233f46c, size 0xc4, virtual true, abstract: false, final true
  inline int32_t GetInputBlockSize();

  /// @brief Method GetOutputBlockSize, addr 0x233f530, size 0xc4, virtual true, abstract: false, final true
  inline int32_t GetOutputBlockSize();

  /// @brief Method GetPadBits, addr 0x233f654, size 0x8, virtual false, abstract: false, final false
  inline int32_t GetPadBits();

  /// @brief Method GetUnderlyingCipher, addr 0x233f2b8, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* GetUnderlyingCipher();

  /// @brief Method Init, addr 0x233f2c0, size 0x1ac, virtual true, abstract: false, final true
  inline void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  static inline ::Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding* New_ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher);

  /// @brief Method ProcessBlock, addr 0x233f65c, size 0x10, virtual true, abstract: false, final true
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ProcessBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t length);

  /// @brief Method SetPadBits, addr 0x233f5f4, size 0x60, virtual false, abstract: false, final false
  inline void SetPadBits(int32_t padBits);

  constexpr int32_t const& __cordl_internal_get_bitSize() const;

  constexpr int32_t& __cordl_internal_get_bitSize();

  constexpr ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* const& __cordl_internal_get_engine() const;

  constexpr ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*& __cordl_internal_get_engine();

  constexpr bool const& __cordl_internal_get_forEncryption() const;

  constexpr bool& __cordl_internal_get_forEncryption();

  constexpr ::Org::BouncyCastle::Math::BigInteger* const& __cordl_internal_get_modulus() const;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_modulus();

  constexpr int32_t const& __cordl_internal_get_padBits() const;

  constexpr int32_t& __cordl_internal_get_padBits();

  constexpr void __cordl_internal_set_bitSize(int32_t value);

  constexpr void __cordl_internal_set_engine(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* value);

  constexpr void __cordl_internal_set_forEncryption(bool value);

  constexpr void __cordl_internal_set_modulus(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr void __cordl_internal_set_padBits(int32_t value);

  /// @brief Method .ctor, addr 0x233f1cc, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher);

  static inline ::Org::BouncyCastle::Math::BigInteger* getStaticF_Six();

  static inline ::Org::BouncyCastle::Math::BigInteger* getStaticF_Sixteen();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_inverse();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_shadows();

  /// @brief Method get_AlgorithmName, addr 0x233f1f8, size 0xc0, virtual true, abstract: false, final true
  inline ::StringW get_AlgorithmName();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher"
  constexpr ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* i___Org__BouncyCastle__Crypto__IAsymmetricBlockCipher() noexcept;

  static inline void setStaticF_Six(::Org::BouncyCastle::Math::BigInteger* value);

  static inline void setStaticF_Sixteen(::Org::BouncyCastle::Math::BigInteger* value);

  static inline void setStaticF_inverse(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_shadows(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ISO9796d1Encoding();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ISO9796d1Encoding", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ISO9796d1Encoding(ISO9796d1Encoding&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ISO9796d1Encoding", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISO9796d1Encoding(ISO9796d1Encoding const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 819 };

  /// @brief Field engine, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* ___engine;

  /// @brief Field forEncryption, offset: 0x18, size: 0x1, def value: None
  bool ___forEncryption;

  /// @brief Field bitSize, offset: 0x1c, size: 0x4, def value: None
  int32_t ___bitSize;

  /// @brief Field padBits, offset: 0x20, size: 0x4, def value: None
  int32_t ___padBits;

  /// @brief Field modulus, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___modulus;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding, ___engine) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding, ___forEncryption) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding, ___bitSize) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding, ___padBits) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding, ___modulus) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Encodings
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding*, "Org.BouncyCastle.Crypto.Encodings", "ISO9796d1Encoding");
