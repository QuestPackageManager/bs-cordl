#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RsaBlindingEngine)
namespace Org::BouncyCastle::Crypto {
class IRsa;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class RsaKeyParameters;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Crypto {
class IAsymmetricBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class RsaBlindingEngine;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine);
// Type: Org.BouncyCastle.Crypto.Engines::RsaBlindingEngine
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(863))
// CS Name: ::Org.BouncyCastle.Crypto.Engines::RsaBlindingEngine*
class CORDL_TYPE RsaBlindingEngine : public ::System::Object {
public:
  // Declarations
  /// @brief Field core, offset 0x10, size 0x8
  __declspec(property(get = __get_core, put = __set_core))::Org::BouncyCastle::Crypto::IRsa* core;

  /// @brief Field key, offset 0x18, size 0x8
  __declspec(property(get = __get_key, put = __set_key))::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* key;

  /// @brief Field blindingFactor, offset 0x20, size 0x8
  __declspec(property(get = __get_blindingFactor, put = __set_blindingFactor))::Org::BouncyCastle::Math::BigInteger* blindingFactor;

  /// @brief Field forEncryption, offset 0x28, size 0x1
  __declspec(property(get = __get_forEncryption, put = __set_forEncryption)) bool forEncryption;

  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher"
  constexpr operator ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*() noexcept;

  constexpr ::Org::BouncyCastle::Crypto::IRsa*& __get_core();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IRsa*> const& __get_core() const;

  constexpr void __set_core(::Org::BouncyCastle::Crypto::IRsa* value);

  constexpr ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*& __get_key();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*> const& __get_key() const;

  constexpr void __set_key(::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* value);

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_blindingFactor();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_blindingFactor() const;

  constexpr void __set_blindingFactor(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr bool& __get_forEncryption();

  constexpr bool const& __get_forEncryption() const;

  constexpr void __set_forEncryption(bool value);

  static inline ::Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine* New_ctor();

  /// @brief Method .ctor addr 0xee01fc size 0x6c virtual false final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine* New_ctor(::Org::BouncyCastle::Crypto::IRsa* rsa);

  /// @brief Method .ctor addr 0xee0268 size 0x28 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IRsa* rsa);

  /// @brief Method get_AlgorithmName addr 0xee0290 size 0x40 virtual true final false
  inline ::StringW get_AlgorithmName();

  /// @brief Method Init addr 0xee02d0 size 0x174 virtual true final false
  inline void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* param);

  /// @brief Method GetInputBlockSize addr 0xee0444 size 0xa4 virtual true final false
  inline int32_t GetInputBlockSize();

  /// @brief Method GetOutputBlockSize addr 0xee04e8 size 0xa4 virtual true final false
  inline int32_t GetOutputBlockSize();

  /// @brief Method ProcessBlock addr 0xee058c size 0x154 virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ProcessBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> inBuf, int32_t inOff, int32_t inLen);

  /// @brief Method BlindMessage addr 0xee06e0 size 0x64 virtual false final false
  inline ::Org::BouncyCastle::Math::BigInteger* BlindMessage(::Org::BouncyCastle::Math::BigInteger* msg);

  /// @brief Method UnblindMessage addr 0xee0744 size 0x5c virtual false final false
  inline ::Org::BouncyCastle::Math::BigInteger* UnblindMessage(::Org::BouncyCastle::Math::BigInteger* blindedMsg);

  // Ctor Parameters [CppParam { name: "", ty: "RsaBlindingEngine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RsaBlindingEngine(RsaBlindingEngine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RsaBlindingEngine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RsaBlindingEngine(RsaBlindingEngine const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RsaBlindingEngine();

public:
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
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine*, "Org.BouncyCastle.Crypto.Engines", "RsaBlindingEngine");
