#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Prng/X931SecureRandomBuilder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X931SecureRandomBuilder)
namespace Org::BouncyCastle::Crypto::Parameters {
class KeyParameter;
}
namespace Org::BouncyCastle::Crypto::Prng {
class X931SecureRandom;
}
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class IEntropySourceProvider;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Prng {
class X931SecureRandomBuilder;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Prng::X931SecureRandomBuilder);
// Dependencies System.Object
namespace Org::BouncyCastle::Crypto::Prng {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Prng.X931SecureRandomBuilder
class CORDL_TYPE X931SecureRandomBuilder : public ::System::Object {
public:
  // Declarations
  /// @brief Field mDateTimeVector, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_mDateTimeVector, put = __cordl_internal_set_mDateTimeVector)) ::ArrayW<uint8_t, ::Array<uint8_t>*> mDateTimeVector;

  /// @brief Field mEntropySourceProvider, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_mEntropySourceProvider,
                      put = __cordl_internal_set_mEntropySourceProvider)) ::Org::BouncyCastle::Crypto::IEntropySourceProvider* mEntropySourceProvider;

  /// @brief Field mRandom, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_mRandom, put = __cordl_internal_set_mRandom)) ::Org::BouncyCastle::Security::SecureRandom* mRandom;

  /// @brief Method Build, addr 0x23ca084, size 0x2e4, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Prng::X931SecureRandom* Build(::Org::BouncyCastle::Crypto::IBlockCipher* engine, ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* key,
                                                                    bool predictionResistant);

  static inline ::Org::BouncyCastle::Crypto::Prng::X931SecureRandomBuilder* New_ctor();

  static inline ::Org::BouncyCastle::Crypto::Prng::X931SecureRandomBuilder* New_ctor(::Org::BouncyCastle::Security::SecureRandom* entropySource, bool predictionResistant);

  static inline ::Org::BouncyCastle::Crypto::Prng::X931SecureRandomBuilder* New_ctor(::Org::BouncyCastle::Crypto::IEntropySourceProvider* entropySourceProvider);

  /// @brief Method SetDateTimeVector, addr 0x23ca07c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Prng::X931SecureRandomBuilder* SetDateTimeVector(::ArrayW<uint8_t, ::Array<uint8_t>*> dateTimeVector);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_mDateTimeVector() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_mDateTimeVector();

  constexpr ::Org::BouncyCastle::Crypto::IEntropySourceProvider* const& __cordl_internal_get_mEntropySourceProvider() const;

  constexpr ::Org::BouncyCastle::Crypto::IEntropySourceProvider*& __cordl_internal_get_mEntropySourceProvider();

  constexpr ::Org::BouncyCastle::Security::SecureRandom* const& __cordl_internal_get_mRandom() const;

  constexpr ::Org::BouncyCastle::Security::SecureRandom*& __cordl_internal_get_mRandom();

  constexpr void __cordl_internal_set_mDateTimeVector(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_mEntropySourceProvider(::Org::BouncyCastle::Crypto::IEntropySourceProvider* value);

  constexpr void __cordl_internal_set_mRandom(::Org::BouncyCastle::Security::SecureRandom* value);

  /// @brief Method .ctor, addr 0x23c9f74, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x23c9fd0, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Security::SecureRandom* entropySource, bool predictionResistant);

  /// @brief Method .ctor, addr 0x23ca054, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IEntropySourceProvider* entropySourceProvider);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X931SecureRandomBuilder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X931SecureRandomBuilder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X931SecureRandomBuilder(X931SecureRandomBuilder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X931SecureRandomBuilder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X931SecureRandomBuilder(X931SecureRandomBuilder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1122 };

  /// @brief Field mRandom, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Security::SecureRandom* ___mRandom;

  /// @brief Field mEntropySourceProvider, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IEntropySourceProvider* ___mEntropySourceProvider;

  /// @brief Field mDateTimeVector, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mDateTimeVector;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::X931SecureRandomBuilder, ___mRandom) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::X931SecureRandomBuilder, ___mEntropySourceProvider) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::X931SecureRandomBuilder, ___mDateTimeVector) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Prng::X931SecureRandomBuilder, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Prng
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Prng::X931SecureRandomBuilder);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Prng::X931SecureRandomBuilder*, "Org.BouncyCastle.Crypto.Prng", "X931SecureRandomBuilder");
