#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Engines/RsaBlindingEngine.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__IAsymmetricBlockCipher_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RsaBlindingEngine)
namespace Org::BouncyCastle::Crypto::Parameters {
class RsaKeyParameters;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IRsa;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class RsaBlindingEngine;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine);
// Dependencies Org.BouncyCastle.Crypto.IAsymmetricBlockCipher, System.Object
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Engines.RsaBlindingEngine
class CORDL_TYPE RsaBlindingEngine : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName)) ::StringW AlgorithmName;

  /// @brief Field blindingFactor, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_blindingFactor, put = __cordl_internal_set_blindingFactor)) ::Org::BouncyCastle::Math::BigInteger* blindingFactor;

  /// @brief Field core, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_core, put = __cordl_internal_set_core)) ::Org::BouncyCastle::Crypto::IRsa* core;

  /// @brief Field forEncryption, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_forEncryption, put = __cordl_internal_set_forEncryption)) bool forEncryption;

  /// @brief Field key, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_key, put = __cordl_internal_set_key)) ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* key;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher"
  constexpr operator ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*() noexcept;

  /// @brief Method BlindMessage, addr 0x236c938, size 0x64, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* BlindMessage(::Org::BouncyCastle::Math::BigInteger* msg);

  /// @brief Method GetInputBlockSize, addr 0x236c69c, size 0xa4, virtual true, abstract: false, final false
  inline int32_t GetInputBlockSize();

  /// @brief Method GetOutputBlockSize, addr 0x236c740, size 0xa4, virtual true, abstract: false, final false
  inline int32_t GetOutputBlockSize();

  /// @brief Method Init, addr 0x236c528, size 0x174, virtual true, abstract: false, final false
  inline void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* param);

  static inline ::Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine* New_ctor();

  static inline ::Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine* New_ctor(::Org::BouncyCastle::Crypto::IRsa* rsa);

  /// @brief Method ProcessBlock, addr 0x236c7e4, size 0x154, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ProcessBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> inBuf, int32_t inOff, int32_t inLen);

  /// @brief Method UnblindMessage, addr 0x236c99c, size 0x5c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* UnblindMessage(::Org::BouncyCastle::Math::BigInteger* blindedMsg);

  constexpr ::Org::BouncyCastle::Math::BigInteger* const& __cordl_internal_get_blindingFactor() const;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_blindingFactor();

  constexpr ::Org::BouncyCastle::Crypto::IRsa* const& __cordl_internal_get_core() const;

  constexpr ::Org::BouncyCastle::Crypto::IRsa*& __cordl_internal_get_core();

  constexpr bool const& __cordl_internal_get_forEncryption() const;

  constexpr bool& __cordl_internal_get_forEncryption();

  constexpr ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* const& __cordl_internal_get_key() const;

  constexpr ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*& __cordl_internal_get_key();

  constexpr void __cordl_internal_set_blindingFactor(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr void __cordl_internal_set_core(::Org::BouncyCastle::Crypto::IRsa* value);

  constexpr void __cordl_internal_set_forEncryption(bool value);

  constexpr void __cordl_internal_set_key(::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* value);

  /// @brief Method .ctor, addr 0x236c45c, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x236c4c0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IRsa* rsa);

  /// @brief Method get_AlgorithmName, addr 0x236c4e8, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher"
  constexpr ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* i___Org__BouncyCastle__Crypto__IAsymmetricBlockCipher() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RsaBlindingEngine();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RsaBlindingEngine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RsaBlindingEngine(RsaBlindingEngine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RsaBlindingEngine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RsaBlindingEngine(RsaBlindingEngine const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 863 };

  /// @brief Field core, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IRsa* ___core;

  /// @brief Field key, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* ___key;

  /// @brief Field blindingFactor, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___blindingFactor;

  /// @brief Field forEncryption, offset: 0x28, size: 0x1, def value: None
  bool ___forEncryption;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine, ___core) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine, ___key) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine, ___blindingFactor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine, ___forEncryption) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine*, "Org.BouncyCastle.Crypto.Engines", "RsaBlindingEngine");
