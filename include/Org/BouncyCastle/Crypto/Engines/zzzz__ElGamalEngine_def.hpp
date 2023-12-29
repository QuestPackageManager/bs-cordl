#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ElGamalEngine)
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ElGamalKeyParameters;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Crypto {
class IAsymmetricBlockCipher;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class ElGamalEngine;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Engines::ElGamalEngine);
// Type: Org.BouncyCastle.Crypto.Engines::ElGamalEngine
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(844))
// CS Name: ::Org.BouncyCastle.Crypto.Engines::ElGamalEngine*
class CORDL_TYPE ElGamalEngine : public ::System::Object {
public:
  // Declarations
  /// @brief Field key, offset 0x10, size 0x8
  __declspec(property(get = __get_key, put = __set_key))::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters* key;

  /// @brief Field random, offset 0x18, size 0x8
  __declspec(property(get = __get_random, put = __set_random))::Org::BouncyCastle::Security::SecureRandom* random;

  /// @brief Field forEncryption, offset 0x20, size 0x1
  __declspec(property(get = __get_forEncryption, put = __set_forEncryption)) bool forEncryption;

  /// @brief Field bitSize, offset 0x24, size 0x4
  __declspec(property(get = __get_bitSize, put = __set_bitSize)) int32_t bitSize;

  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher"
  constexpr operator ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*() noexcept;

  constexpr ::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters*& __get_key();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters*> const& __get_key() const;

  constexpr void __set_key(::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters* value);

  constexpr ::Org::BouncyCastle::Security::SecureRandom*& __get_random();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Security::SecureRandom*> const& __get_random() const;

  constexpr void __set_random(::Org::BouncyCastle::Security::SecureRandom* value);

  constexpr bool& __get_forEncryption();

  constexpr bool const& __get_forEncryption() const;

  constexpr void __set_forEncryption(bool value);

  constexpr int32_t& __get_bitSize();

  constexpr int32_t const& __get_bitSize() const;

  constexpr void __set_bitSize(int32_t value);

  /// @brief Method get_AlgorithmName addr 0xe5b098 size 0x40 virtual true final false
  inline ::StringW get_AlgorithmName();

  /// @brief Method Init addr 0xe5b0d8 size 0x2b4 virtual true final false
  inline void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  /// @brief Method GetInputBlockSize addr 0xe5b38c size 0x40 virtual true final false
  inline int32_t GetInputBlockSize();

  /// @brief Method GetOutputBlockSize addr 0xe5b3cc size 0x40 virtual true final false
  inline int32_t GetOutputBlockSize();

  /// @brief Method ProcessBlock addr 0xe5b40c size 0x52c virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ProcessBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t length);

  static inline ::Org::BouncyCastle::Crypto::Engines::ElGamalEngine* New_ctor();

  /// @brief Method .ctor addr 0xe5b938 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ElGamalEngine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ElGamalEngine(ElGamalEngine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ElGamalEngine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ElGamalEngine(ElGamalEngine const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ElGamalEngine();

public:
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
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Engines::ElGamalEngine, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::ElGamalEngine, ___key) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::ElGamalEngine, ___random) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::ElGamalEngine, ___forEncryption) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::ElGamalEngine, ___bitSize) == 0x24, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::ElGamalEngine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::ElGamalEngine*, "Org.BouncyCastle.Crypto.Engines", "ElGamalEngine");
