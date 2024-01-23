#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RsaBlindedEngine)
namespace Org::BouncyCastle::Crypto::Parameters {
class RsaKeyParameters;
}
namespace Org::BouncyCastle::Crypto {
class IAsymmetricBlockCipher;
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
// Type: Org.BouncyCastle.Crypto.Engines::RsaBlindedEngine
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(862))
// CS Name: ::Org.BouncyCastle.Crypto.Engines::RsaBlindedEngine*
class CORDL_TYPE RsaBlindedEngine : public ::System::Object {
public:
  // Declarations
  /// @brief Field core, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_core, put = __cordl_internal_set_core))::Org::BouncyCastle::Crypto::IRsa* core;

  /// @brief Field key, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_key, put = __cordl_internal_set_key))::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* key;

  /// @brief Field random, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_random, put = __cordl_internal_set_random))::Org::BouncyCastle::Security::SecureRandom* random;

  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher"
  constexpr operator ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher"
  constexpr ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* i___Org__BouncyCastle__Crypto__IAsymmetricBlockCipher() noexcept;

  constexpr ::Org::BouncyCastle::Crypto::IRsa*& __cordl_internal_get_core();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IRsa*> const& __cordl_internal_get_core() const;

  constexpr void __cordl_internal_set_core(::Org::BouncyCastle::Crypto::IRsa* value);

  constexpr ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*& __cordl_internal_get_key();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*> const& __cordl_internal_get_key() const;

  constexpr void __cordl_internal_set_key(::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* value);

  constexpr ::Org::BouncyCastle::Security::SecureRandom*& __cordl_internal_get_random();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Security::SecureRandom*> const& __cordl_internal_get_random() const;

  constexpr void __cordl_internal_set_random(::Org::BouncyCastle::Security::SecureRandom* value);

  static inline ::Org::BouncyCastle::Crypto::Engines::RsaBlindedEngine* New_ctor();

  /// @brief Method .ctor, addr 0xedf960, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Crypto::Engines::RsaBlindedEngine* New_ctor(::Org::BouncyCastle::Crypto::IRsa* rsa);

  /// @brief Method .ctor, addr 0xedf9d4, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IRsa* rsa);

  /// @brief Method get_AlgorithmName, addr 0xedf9fc, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

  /// @brief Method Init, addr 0xedfa3c, size 0x25c, virtual true, abstract: false, final false
  inline void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* param);

  /// @brief Method GetInputBlockSize, addr 0xedfc98, size 0xa4, virtual true, abstract: false, final false
  inline int32_t GetInputBlockSize();

  /// @brief Method GetOutputBlockSize, addr 0xedfd3c, size 0xa4, virtual true, abstract: false, final false
  inline int32_t GetOutputBlockSize();

  /// @brief Method ProcessBlock, addr 0xedfde0, size 0x41c, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ProcessBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> inBuf, int32_t inOff, int32_t inLen);

  // Ctor Parameters [CppParam { name: "", ty: "RsaBlindedEngine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RsaBlindedEngine(RsaBlindedEngine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RsaBlindedEngine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RsaBlindedEngine(RsaBlindedEngine const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RsaBlindedEngine();

public:
  /// @brief Field core, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IRsa* ___core;

  /// @brief Field key, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* ___key;

  /// @brief Field random, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Security::SecureRandom* ___random;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Engines::RsaBlindedEngine, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::RsaBlindedEngine, ___core) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::RsaBlindedEngine, ___key) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::RsaBlindedEngine, ___random) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::RsaBlindedEngine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::RsaBlindedEngine*, "Org.BouncyCastle.Crypto.Engines", "RsaBlindedEngine");
