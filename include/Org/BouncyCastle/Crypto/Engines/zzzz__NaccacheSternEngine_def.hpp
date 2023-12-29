#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NaccacheSternEngine)
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Crypto {
class IAsymmetricBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class NaccacheSternKeyParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class NaccacheSternEngine;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine);
// Type: Org.BouncyCastle.Crypto.Engines::NaccacheSternEngine
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(851))
// CS Name: ::Org.BouncyCastle.Crypto.Engines::NaccacheSternEngine*
class CORDL_TYPE NaccacheSternEngine : public ::System::Object {
public:
  // Declarations
  /// @brief Field forEncryption, offset 0x10, size 0x1
  __declspec(property(get = __get_forEncryption, put = __set_forEncryption)) bool forEncryption;

  /// @brief Field key, offset 0x18, size 0x8
  __declspec(property(get = __get_key, put = __set_key))::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters* key;

  /// @brief Field lookup, offset 0x20, size 0x8
  __declspec(property(get = __get_lookup, put = __set_lookup))::ArrayW<::System::Collections::IList*, ::Array<::System::Collections::IList*>*> lookup;

  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  __declspec(property(put = set_Debug)) bool Debug;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher"
  constexpr operator ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*() noexcept;

  constexpr bool& __get_forEncryption();

  constexpr bool const& __get_forEncryption() const;

  constexpr void __set_forEncryption(bool value);

  constexpr ::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters*& __get_key();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters*> const& __get_key() const;

  constexpr void __set_key(::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters* value);

  constexpr ::ArrayW<::System::Collections::IList*, ::Array<::System::Collections::IList*>*>& __get_lookup();

  constexpr ::ArrayW<::System::Collections::IList*, ::Array<::System::Collections::IList*>*> const& __get_lookup() const;

  constexpr void __set_lookup(::ArrayW<::System::Collections::IList*, ::Array<::System::Collections::IList*>*> value);

  /// @brief Method get_AlgorithmName addr 0xe60f44 size 0x40 virtual true final true
  inline ::StringW get_AlgorithmName();

  /// @brief Method Init addr 0xe60f84 size 0x58c virtual true final false
  inline void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  /// @brief Method set_Debug addr 0xe61510 size 0x4 virtual true final false
  inline void set_Debug(bool value);

  /// @brief Method GetInputBlockSize addr 0xe61514 size 0x54 virtual true final false
  inline int32_t GetInputBlockSize();

  /// @brief Method GetOutputBlockSize addr 0xe61568 size 0x54 virtual true final false
  inline int32_t GetOutputBlockSize();

  /// @brief Method ProcessBlock addr 0xe615bc size 0x8fc virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ProcessBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> inBytes, int32_t inOff, int32_t length);

  /// @brief Method Encrypt addr 0xe6229c size 0xd8 virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Encrypt(::Org::BouncyCastle::Math::BigInteger* plain);

  /// @brief Method AddCryptedBlocks addr 0xe62374 size 0x204 virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> AddCryptedBlocks(::ArrayW<uint8_t, ::Array<uint8_t>*> block1, ::ArrayW<uint8_t, ::Array<uint8_t>*> block2);

  /// @brief Method ProcessData addr 0xe62578 size 0x218 virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ProcessData(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method chineseRemainder addr 0xe61eb8 size 0x3e4 virtual false final false
  static inline ::Org::BouncyCastle::Math::BigInteger* chineseRemainder(::System::Collections::IList* congruences, ::System::Collections::IList* primes);

  static inline ::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine* New_ctor();

  /// @brief Method .ctor addr 0xe62790 size 0xc virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "NaccacheSternEngine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NaccacheSternEngine(NaccacheSternEngine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NaccacheSternEngine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NaccacheSternEngine(NaccacheSternEngine const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NaccacheSternEngine();

public:
  /// @brief Field forEncryption, offset: 0x10, size: 0x1, def value: None
  bool ___forEncryption;

  /// @brief Field key, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters* ___key;

  /// @brief Field lookup, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::System::Collections::IList*, ::Array<::System::Collections::IList*>*> ___lookup;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine, ___forEncryption) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine, ___key) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine, ___lookup) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine*, "Org.BouncyCastle.Crypto.Engines", "NaccacheSternEngine");
