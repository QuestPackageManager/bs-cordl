#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Engines/ElGamalEngine.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__IAsymmetricBlockCipher_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ElGamalEngine)
namespace Org::BouncyCastle::Crypto::Parameters {
class ElGamalKeyParameters;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class ElGamalEngine;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Engines::ElGamalEngine);
// Dependencies Org.BouncyCastle.Crypto.IAsymmetricBlockCipher, System.Object
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Engines.ElGamalEngine
class CORDL_TYPE ElGamalEngine : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName)) ::StringW AlgorithmName;

  /// @brief Field bitSize, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_bitSize, put = __cordl_internal_set_bitSize)) int32_t bitSize;

  /// @brief Field forEncryption, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_forEncryption, put = __cordl_internal_set_forEncryption)) bool forEncryption;

  /// @brief Field key, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_key, put = __cordl_internal_set_key)) ::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters* key;

  /// @brief Field random, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_random, put = __cordl_internal_set_random)) ::Org::BouncyCastle::Security::SecureRandom* random;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher"
  constexpr operator ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*() noexcept;

  /// @brief Method GetInputBlockSize, addr 0x235c4b4, size 0x40, virtual true, abstract: false, final false
  inline int32_t GetInputBlockSize();

  /// @brief Method GetOutputBlockSize, addr 0x235c4f4, size 0x40, virtual true, abstract: false, final false
  inline int32_t GetOutputBlockSize();

  /// @brief Method Init, addr 0x235c20c, size 0x2a8, virtual true, abstract: false, final false
  inline void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  static inline ::Org::BouncyCastle::Crypto::Engines::ElGamalEngine* New_ctor();

  /// @brief Method ProcessBlock, addr 0x235c534, size 0x52c, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ProcessBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t length);

  constexpr int32_t const& __cordl_internal_get_bitSize() const;

  constexpr int32_t& __cordl_internal_get_bitSize();

  constexpr bool const& __cordl_internal_get_forEncryption() const;

  constexpr bool& __cordl_internal_get_forEncryption();

  constexpr ::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters* const& __cordl_internal_get_key() const;

  constexpr ::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters*& __cordl_internal_get_key();

  constexpr ::Org::BouncyCastle::Security::SecureRandom* const& __cordl_internal_get_random() const;

  constexpr ::Org::BouncyCastle::Security::SecureRandom*& __cordl_internal_get_random();

  constexpr void __cordl_internal_set_bitSize(int32_t value);

  constexpr void __cordl_internal_set_forEncryption(bool value);

  constexpr void __cordl_internal_set_key(::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters* value);

  constexpr void __cordl_internal_set_random(::Org::BouncyCastle::Security::SecureRandom* value);

  /// @brief Method .ctor, addr 0x235ca60, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AlgorithmName, addr 0x235c1cc, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher"
  constexpr ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* i___Org__BouncyCastle__Crypto__IAsymmetricBlockCipher() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ElGamalEngine();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ElGamalEngine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ElGamalEngine(ElGamalEngine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ElGamalEngine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ElGamalEngine(ElGamalEngine const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 844 };

  /// @brief Field key, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters* ___key;

  /// @brief Field random, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Security::SecureRandom* ___random;

  /// @brief Field forEncryption, offset: 0x20, size: 0x1, def value: None
  bool ___forEncryption;

  /// @brief Field bitSize, offset: 0x24, size: 0x4, def value: None
  int32_t ___bitSize;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::ElGamalEngine, ___key) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::ElGamalEngine, ___random) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::ElGamalEngine, ___forEncryption) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::ElGamalEngine, ___bitSize) == 0x24, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Engines::ElGamalEngine, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::ElGamalEngine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::ElGamalEngine*, "Org.BouncyCastle.Crypto.Engines", "ElGamalEngine");
