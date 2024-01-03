#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CipherKeyGenerator)
namespace Org::BouncyCastle::Crypto {
class KeyGenerationParameters;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class CipherKeyGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::CipherKeyGenerator);
// Type: Org.BouncyCastle.Crypto::CipherKeyGenerator
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(888))
// CS Name: ::Org.BouncyCastle.Crypto::CipherKeyGenerator*
class CORDL_TYPE CipherKeyGenerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field random, offset 0x10, size 0x8
  __declspec(property(get = __get_random, put = __set_random))::Org::BouncyCastle::Security::SecureRandom* random;

  /// @brief Field strength, offset 0x18, size 0x4
  __declspec(property(get = __get_strength, put = __set_strength)) int32_t strength;

  /// @brief Field uninitialised, offset 0x1c, size 0x1
  __declspec(property(get = __get_uninitialised, put = __set_uninitialised)) bool uninitialised;

  /// @brief Field defaultStrength, offset 0x20, size 0x4
  __declspec(property(get = __get_defaultStrength, put = __set_defaultStrength)) int32_t defaultStrength;

  __declspec(property(get = get_DefaultStrength)) int32_t DefaultStrength;

  constexpr ::Org::BouncyCastle::Security::SecureRandom*& __get_random();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Security::SecureRandom*> const& __get_random() const;

  constexpr void __set_random(::Org::BouncyCastle::Security::SecureRandom* value);

  constexpr int32_t& __get_strength();

  constexpr int32_t const& __get_strength() const;

  constexpr void __set_strength(int32_t value);

  constexpr bool& __get_uninitialised();

  constexpr bool const& __get_uninitialised() const;

  constexpr void __set_uninitialised(bool value);

  constexpr int32_t& __get_defaultStrength();

  constexpr int32_t const& __get_defaultStrength() const;

  constexpr void __set_defaultStrength(int32_t value);

  static inline ::Org::BouncyCastle::Crypto::CipherKeyGenerator* New_ctor();

  /// @brief Method .ctor, addr 0xef6a9c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Crypto::CipherKeyGenerator* New_ctor(int32_t defaultStrength);

  /// @brief Method .ctor, addr 0xef6aac, size 0x98, virtual false, abstract: false, final false
  inline void _ctor(int32_t defaultStrength);

  /// @brief Method get_DefaultStrength, addr 0xef6b44, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_DefaultStrength();

  /// @brief Method Init, addr 0xef6b4c, size 0x68, virtual false, abstract: false, final false
  inline void Init(::Org::BouncyCastle::Crypto::KeyGenerationParameters* parameters);

  /// @brief Method engineInit, addr 0xef6bb4, size 0x38, virtual true, abstract: false, final false
  inline void engineInit(::Org::BouncyCastle::Crypto::KeyGenerationParameters* parameters);

  /// @brief Method GenerateKey, addr 0xef6bec, size 0x120, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateKey();

  /// @brief Method engineGenerateKey, addr 0xef6d0c, size 0x64, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> engineGenerateKey();

  // Ctor Parameters [CppParam { name: "", ty: "CipherKeyGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CipherKeyGenerator(CipherKeyGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CipherKeyGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CipherKeyGenerator(CipherKeyGenerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CipherKeyGenerator();

public:
  /// @brief Field random, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Security::SecureRandom* ___random;

  /// @brief Field strength, offset: 0x18, size: 0x4, def value: None
  int32_t ___strength;

  /// @brief Field uninitialised, offset: 0x1c, size: 0x1, def value: None
  bool ___uninitialised;

  /// @brief Field defaultStrength, offset: 0x20, size: 0x4, def value: None
  int32_t ___defaultStrength;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::CipherKeyGenerator, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::CipherKeyGenerator, ___random) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::CipherKeyGenerator, ___strength) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::CipherKeyGenerator, ___uninitialised) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::CipherKeyGenerator, ___defaultStrength) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto
NEED_NO_BOX(::Org::BouncyCastle::Crypto::CipherKeyGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::CipherKeyGenerator*, "Org.BouncyCastle.Crypto", "CipherKeyGenerator");
