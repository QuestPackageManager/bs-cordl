#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RsaEngine)
namespace Org::BouncyCastle::Crypto {
class IRsa;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IAsymmetricBlockCipher;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class RsaEngine;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Engines::RsaEngine);
// Type: Org.BouncyCastle.Crypto.Engines::RsaEngine
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(866))
// CS Name: ::Org.BouncyCastle.Crypto.Engines::RsaEngine*
class CORDL_TYPE RsaEngine : public ::System::Object {
public:
  // Declarations
  /// @brief Field core, offset 0x10, size 0x8
  __declspec(property(get = __get_core, put = __set_core))::Org::BouncyCastle::Crypto::IRsa* core;

  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher"
  constexpr operator ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*() noexcept;

  constexpr ::Org::BouncyCastle::Crypto::IRsa*& __get_core();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IRsa*> const& __get_core() const;

  constexpr void __set_core(::Org::BouncyCastle::Crypto::IRsa* value);

  static inline ::Org::BouncyCastle::Crypto::Engines::RsaEngine* New_ctor();

  /// @brief Method .ctor addr 0xee0d14 size 0x6c virtual false final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Crypto::Engines::RsaEngine* New_ctor(::Org::BouncyCastle::Crypto::IRsa* rsa);

  /// @brief Method .ctor addr 0xee0d80 size 0x28 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IRsa* rsa);

  /// @brief Method get_AlgorithmName addr 0xee0da8 size 0x40 virtual true final false
  inline ::StringW get_AlgorithmName();

  /// @brief Method Init addr 0xee0de8 size 0xb8 virtual true final false
  inline void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  /// @brief Method GetInputBlockSize addr 0xee0ea0 size 0xa4 virtual true final false
  inline int32_t GetInputBlockSize();

  /// @brief Method GetOutputBlockSize addr 0xee0f44 size 0xa4 virtual true final false
  inline int32_t GetOutputBlockSize();

  /// @brief Method ProcessBlock addr 0xee0fe8 size 0x1a4 virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ProcessBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> inBuf, int32_t inOff, int32_t inLen);

  // Ctor Parameters [CppParam { name: "", ty: "RsaEngine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RsaEngine(RsaEngine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RsaEngine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RsaEngine(RsaEngine const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RsaEngine();

public:
  /// @brief Field core, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IRsa* ___core;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Engines::RsaEngine, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::RsaEngine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::RsaEngine*, "Org.BouncyCastle.Crypto.Engines", "RsaEngine");
