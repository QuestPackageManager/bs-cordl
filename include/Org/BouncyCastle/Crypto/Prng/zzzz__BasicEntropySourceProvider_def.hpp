#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BasicEntropySourceProvider)
namespace Org::BouncyCastle::Crypto {
class IEntropySourceProvider;
}
namespace Org::BouncyCastle::Crypto {
class IEntropySource;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Crypto::Prng {
class __BasicEntropySourceProvider__BasicEntropySource;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Prng {
class BasicEntropySourceProvider;
}
namespace Org::BouncyCastle::Crypto::Prng {
class __BasicEntropySourceProvider__BasicEntropySource;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider);
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Prng::__BasicEntropySourceProvider__BasicEntropySource);
// Type: ::BasicEntropySource
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Prng {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1100))
// CS Name: ::BasicEntropySourceProvider::BasicEntropySource*
class CORDL_TYPE __BasicEntropySourceProvider__BasicEntropySource : public ::System::Object {
public:
  // Declarations
  /// @brief Field mSecureRandom, offset 0x10, size 0x8
  __declspec(property(get = __get_mSecureRandom, put = __set_mSecureRandom))::Org::BouncyCastle::Security::SecureRandom* mSecureRandom;

  /// @brief Field mPredictionResistant, offset 0x18, size 0x1
  __declspec(property(get = __get_mPredictionResistant, put = __set_mPredictionResistant)) bool mPredictionResistant;

  /// @brief Field mEntropySize, offset 0x1c, size 0x4
  __declspec(property(get = __get_mEntropySize, put = __set_mEntropySize)) int32_t mEntropySize;

  __declspec(property(get = Org_BouncyCastle_Crypto_IEntropySource_get_IsPredictionResistant)) bool Org_BouncyCastle_Crypto_IEntropySource_IsPredictionResistant;

  __declspec(property(get = Org_BouncyCastle_Crypto_IEntropySource_get_EntropySize)) int32_t Org_BouncyCastle_Crypto_IEntropySource_EntropySize;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IEntropySource"
  constexpr operator ::Org::BouncyCastle::Crypto::IEntropySource*() noexcept;

  constexpr ::Org::BouncyCastle::Security::SecureRandom*& __get_mSecureRandom();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Security::SecureRandom*> const& __get_mSecureRandom() const;

  constexpr void __set_mSecureRandom(::Org::BouncyCastle::Security::SecureRandom* value);

  constexpr bool& __get_mPredictionResistant();

  constexpr bool const& __get_mPredictionResistant() const;

  constexpr void __set_mPredictionResistant(bool value);

  constexpr int32_t& __get_mEntropySize();

  constexpr int32_t const& __get_mEntropySize() const;

  constexpr void __set_mEntropySize(int32_t value);

  static inline ::Org::BouncyCastle::Crypto::Prng::__BasicEntropySourceProvider__BasicEntropySource* New_ctor(::Org::BouncyCastle::Security::SecureRandom* secureRandom, bool predictionResistant,
                                                                                                              int32_t entropySize);

  /// @brief Method .ctor, addr 0xf41b04, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Security::SecureRandom* secureRandom, bool predictionResistant, int32_t entropySize);

  /// @brief Method Org.BouncyCastle.Crypto.IEntropySource.get_IsPredictionResistant, addr 0xf41b44, size 0x8, virtual true, abstract: false, final true
  inline bool Org_BouncyCastle_Crypto_IEntropySource_get_IsPredictionResistant();

  /// @brief Method Org.BouncyCastle.Crypto.IEntropySource.GetEntropy, addr 0xf41b4c, size 0x70, virtual true, abstract: false, final true
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org_BouncyCastle_Crypto_IEntropySource_GetEntropy();

  /// @brief Method Org.BouncyCastle.Crypto.IEntropySource.get_EntropySize, addr 0xf41c38, size 0x8, virtual true, abstract: false, final true
  inline int32_t Org_BouncyCastle_Crypto_IEntropySource_get_EntropySize();

  // Ctor Parameters [CppParam { name: "", ty: "__BasicEntropySourceProvider__BasicEntropySource", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BasicEntropySourceProvider__BasicEntropySource(__BasicEntropySourceProvider__BasicEntropySource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BasicEntropySourceProvider__BasicEntropySource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BasicEntropySourceProvider__BasicEntropySource(__BasicEntropySourceProvider__BasicEntropySource const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BasicEntropySourceProvider__BasicEntropySource();

public:
  /// @brief Field mSecureRandom, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Security::SecureRandom* ___mSecureRandom;

  /// @brief Field mPredictionResistant, offset: 0x18, size: 0x1, def value: None
  bool ___mPredictionResistant;

  /// @brief Field mEntropySize, offset: 0x1c, size: 0x4, def value: None
  int32_t ___mEntropySize;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Prng::__BasicEntropySourceProvider__BasicEntropySource, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::__BasicEntropySourceProvider__BasicEntropySource, ___mSecureRandom) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::__BasicEntropySourceProvider__BasicEntropySource, ___mPredictionResistant) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::__BasicEntropySourceProvider__BasicEntropySource, ___mEntropySize) == 0x1c, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Prng
// Type: Org.BouncyCastle.Crypto.Prng::BasicEntropySourceProvider
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Prng {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1101))
// CS Name: ::Org.BouncyCastle.Crypto.Prng::BasicEntropySourceProvider*
class CORDL_TYPE BasicEntropySourceProvider : public ::System::Object {
public:
  // Declarations
  using BasicEntropySource = ::Org::BouncyCastle::Crypto::Prng::__BasicEntropySourceProvider__BasicEntropySource;

  /// @brief Field mSecureRandom, offset 0x10, size 0x8
  __declspec(property(get = __get_mSecureRandom, put = __set_mSecureRandom))::Org::BouncyCastle::Security::SecureRandom* mSecureRandom;

  /// @brief Field mPredictionResistant, offset 0x18, size 0x1
  __declspec(property(get = __get_mPredictionResistant, put = __set_mPredictionResistant)) bool mPredictionResistant;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IEntropySourceProvider"
  constexpr operator ::Org::BouncyCastle::Crypto::IEntropySourceProvider*() noexcept;

  constexpr ::Org::BouncyCastle::Security::SecureRandom*& __get_mSecureRandom();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Security::SecureRandom*> const& __get_mSecureRandom() const;

  constexpr void __set_mSecureRandom(::Org::BouncyCastle::Security::SecureRandom* value);

  constexpr bool& __get_mPredictionResistant();

  constexpr bool const& __get_mPredictionResistant() const;

  constexpr void __set_mPredictionResistant(bool value);

  static inline ::Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider* New_ctor(::Org::BouncyCastle::Security::SecureRandom* secureRandom, bool isPredictionResistant);

  /// @brief Method .ctor, addr 0xf41a54, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Security::SecureRandom* secureRandom, bool isPredictionResistant);

  /// @brief Method Get, addr 0xf41a84, size 0x80, virtual true, abstract: false, final true
  inline ::Org::BouncyCastle::Crypto::IEntropySource* Get(int32_t bitsRequired);

  // Ctor Parameters [CppParam { name: "", ty: "BasicEntropySourceProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BasicEntropySourceProvider(BasicEntropySourceProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BasicEntropySourceProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BasicEntropySourceProvider(BasicEntropySourceProvider const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BasicEntropySourceProvider();

public:
  /// @brief Field mSecureRandom, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Security::SecureRandom* ___mSecureRandom;

  /// @brief Field mPredictionResistant, offset: 0x18, size: 0x1, def value: None
  bool ___mPredictionResistant;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider, ___mSecureRandom) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider, ___mPredictionResistant) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Prng
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider*, "Org.BouncyCastle.Crypto.Prng", "BasicEntropySourceProvider");
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Prng::__BasicEntropySourceProvider__BasicEntropySource);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Prng::__BasicEntropySourceProvider__BasicEntropySource*, "Org.BouncyCastle.Crypto.Prng", "BasicEntropySourceProvider/BasicEntropySource");
