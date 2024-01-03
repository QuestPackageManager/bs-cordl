#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X931SecureRandomBuilder)
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class KeyParameter;
}
namespace Org::BouncyCastle::Crypto::Prng {
class X931SecureRandom;
}
namespace Org::BouncyCastle::Crypto {
class IEntropySourceProvider;
}
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Prng {
class X931SecureRandomBuilder;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Prng::X931SecureRandomBuilder);
// Type: Org.BouncyCastle.Crypto.Prng::X931SecureRandomBuilder
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Prng {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1122))
// CS Name: ::Org.BouncyCastle.Crypto.Prng::X931SecureRandomBuilder*
class CORDL_TYPE X931SecureRandomBuilder : public ::System::Object {
public:
  // Declarations
  /// @brief Field mRandom, offset 0x10, size 0x8
  __declspec(property(get = __get_mRandom, put = __set_mRandom))::Org::BouncyCastle::Security::SecureRandom* mRandom;

  /// @brief Field mEntropySourceProvider, offset 0x18, size 0x8
  __declspec(property(get = __get_mEntropySourceProvider, put = __set_mEntropySourceProvider))::Org::BouncyCastle::Crypto::IEntropySourceProvider* mEntropySourceProvider;

  /// @brief Field mDateTimeVector, offset 0x20, size 0x8
  __declspec(property(get = __get_mDateTimeVector, put = __set_mDateTimeVector))::ArrayW<uint8_t, ::Array<uint8_t>*> mDateTimeVector;

  constexpr ::Org::BouncyCastle::Security::SecureRandom*& __get_mRandom();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Security::SecureRandom*> const& __get_mRandom() const;

  constexpr void __set_mRandom(::Org::BouncyCastle::Security::SecureRandom* value);

  constexpr ::Org::BouncyCastle::Crypto::IEntropySourceProvider*& __get_mEntropySourceProvider();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IEntropySourceProvider*> const& __get_mEntropySourceProvider() const;

  constexpr void __set_mEntropySourceProvider(::Org::BouncyCastle::Crypto::IEntropySourceProvider* value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_mDateTimeVector();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_mDateTimeVector() const;

  constexpr void __set_mDateTimeVector(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::Org::BouncyCastle::Crypto::Prng::X931SecureRandomBuilder* New_ctor();

  /// @brief Method .ctor, addr 0xf460c0, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Crypto::Prng::X931SecureRandomBuilder* New_ctor(::Org::BouncyCastle::Security::SecureRandom* entropySource, bool predictionResistant);

  /// @brief Method .ctor, addr 0xf46124, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Security::SecureRandom* entropySource, bool predictionResistant);

  static inline ::Org::BouncyCastle::Crypto::Prng::X931SecureRandomBuilder* New_ctor(::Org::BouncyCastle::Crypto::IEntropySourceProvider* entropySourceProvider);

  /// @brief Method .ctor, addr 0xf461b0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IEntropySourceProvider* entropySourceProvider);

  /// @brief Method SetDateTimeVector, addr 0xf461d8, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Prng::X931SecureRandomBuilder* SetDateTimeVector(::ArrayW<uint8_t, ::Array<uint8_t>*> dateTimeVector);

  /// @brief Method Build, addr 0xf461e0, size 0x2e4, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Prng::X931SecureRandom* Build(::Org::BouncyCastle::Crypto::IBlockCipher* engine, ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* key,
                                                                    bool predictionResistant);

  // Ctor Parameters [CppParam { name: "", ty: "X931SecureRandomBuilder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X931SecureRandomBuilder(X931SecureRandomBuilder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X931SecureRandomBuilder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X931SecureRandomBuilder(X931SecureRandomBuilder const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X931SecureRandomBuilder();

public:
  /// @brief Field mRandom, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Security::SecureRandom* ___mRandom;

  /// @brief Field mEntropySourceProvider, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IEntropySourceProvider* ___mEntropySourceProvider;

  /// @brief Field mDateTimeVector, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mDateTimeVector;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Prng::X931SecureRandomBuilder, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::X931SecureRandomBuilder, ___mRandom) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::X931SecureRandomBuilder, ___mEntropySourceProvider) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::X931SecureRandomBuilder, ___mDateTimeVector) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Prng
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Prng::X931SecureRandomBuilder);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Prng::X931SecureRandomBuilder*, "Org.BouncyCastle.Crypto.Prng", "X931SecureRandomBuilder");
