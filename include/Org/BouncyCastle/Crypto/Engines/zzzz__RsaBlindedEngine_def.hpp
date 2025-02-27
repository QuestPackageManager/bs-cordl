#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Engines/RsaBlindedEngine.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__IAsymmetricBlockCipher_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RsaBlindedEngine)
namespace Org::BouncyCastle::Crypto::Parameters {
class RsaKeyParameters;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IRsa;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class RsaBlindedEngine;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Engines::RsaBlindedEngine);
// Dependencies Org.BouncyCastle.Crypto.IAsymmetricBlockCipher, System.Object
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Engines.RsaBlindedEngine
class CORDL_TYPE RsaBlindedEngine : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName)) ::StringW AlgorithmName;

  /// @brief Field core, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_core, put = __cordl_internal_set_core)) ::Org::BouncyCastle::Crypto::IRsa* core;

  /// @brief Field key, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_key, put = __cordl_internal_set_key)) ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* key;

  /// @brief Field random, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_random, put = __cordl_internal_set_random)) ::Org::BouncyCastle::Security::SecureRandom* random;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher"
  constexpr operator ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*() noexcept;

  /// @brief Method GetInputBlockSize, addr 0x236fc38, size 0xa4, virtual true, abstract: false, final false
  inline int32_t GetInputBlockSize();

  /// @brief Method GetOutputBlockSize, addr 0x236fcdc, size 0xa4, virtual true, abstract: false, final false
  inline int32_t GetOutputBlockSize();

  /// @brief Method Init, addr 0x236f9e0, size 0x258, virtual true, abstract: false, final false
  inline void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* param);

  static inline ::Org::BouncyCastle::Crypto::Engines::RsaBlindedEngine* New_ctor();

  static inline ::Org::BouncyCastle::Crypto::Engines::RsaBlindedEngine* New_ctor(::Org::BouncyCastle::Crypto::IRsa* rsa);

  /// @brief Method ProcessBlock, addr 0x236fd80, size 0x414, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ProcessBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> inBuf, int32_t inOff, int32_t inLen);

  constexpr ::Org::BouncyCastle::Crypto::IRsa* const& __cordl_internal_get_core() const;

  constexpr ::Org::BouncyCastle::Crypto::IRsa*& __cordl_internal_get_core();

  constexpr ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* const& __cordl_internal_get_key() const;

  constexpr ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*& __cordl_internal_get_key();

  constexpr ::Org::BouncyCastle::Security::SecureRandom* const& __cordl_internal_get_random() const;

  constexpr ::Org::BouncyCastle::Security::SecureRandom*& __cordl_internal_get_random();

  constexpr void __cordl_internal_set_core(::Org::BouncyCastle::Crypto::IRsa* value);

  constexpr void __cordl_internal_set_key(::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* value);

  constexpr void __cordl_internal_set_random(::Org::BouncyCastle::Security::SecureRandom* value);

  /// @brief Method .ctor, addr 0x236f90c, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x236f978, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IRsa* rsa);

  /// @brief Method get_AlgorithmName, addr 0x236f9a0, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher"
  constexpr ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* i___Org__BouncyCastle__Crypto__IAsymmetricBlockCipher() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RsaBlindedEngine();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RsaBlindedEngine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RsaBlindedEngine(RsaBlindedEngine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RsaBlindedEngine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RsaBlindedEngine(RsaBlindedEngine const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 862 };

  /// @brief Field core, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IRsa* ___core;

  /// @brief Field key, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* ___key;

  /// @brief Field random, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Security::SecureRandom* ___random;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::RsaBlindedEngine, ___core) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::RsaBlindedEngine, ___key) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::RsaBlindedEngine, ___random) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Engines::RsaBlindedEngine, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::RsaBlindedEngine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::RsaBlindedEngine*, "Org.BouncyCastle.Crypto.Engines", "RsaBlindedEngine");
