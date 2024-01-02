#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CryptoApiRandomGenerator)
namespace Org::BouncyCastle::Crypto::Prng {
class IRandomGenerator;
}
namespace System::Security::Cryptography {
class RandomNumberGenerator;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Prng {
class CryptoApiRandomGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Prng::CryptoApiRandomGenerator);
// Type: Org.BouncyCastle.Crypto.Prng::CryptoApiRandomGenerator
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Prng {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1106))
// CS Name: ::Org.BouncyCastle.Crypto.Prng::CryptoApiRandomGenerator*
class CORDL_TYPE CryptoApiRandomGenerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field rndProv, offset 0x10, size 0x8
  __declspec(property(get = __get_rndProv, put = __set_rndProv))::System::Security::Cryptography::RandomNumberGenerator* rndProv;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Prng::IRandomGenerator"
  constexpr operator ::Org::BouncyCastle::Crypto::Prng::IRandomGenerator*() noexcept;

  constexpr ::System::Security::Cryptography::RandomNumberGenerator*& __get_rndProv();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::RandomNumberGenerator*> const& __get_rndProv() const;

  constexpr void __set_rndProv(::System::Security::Cryptography::RandomNumberGenerator* value);

  static inline ::Org::BouncyCastle::Crypto::Prng::CryptoApiRandomGenerator* New_ctor();

  /// @brief Method .ctor, addr 0xf41e40, size 0x34, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Crypto::Prng::CryptoApiRandomGenerator* New_ctor(::System::Security::Cryptography::RandomNumberGenerator* rng);

  /// @brief Method .ctor, addr 0xf41e74, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Security::Cryptography::RandomNumberGenerator* rng);

  /// @brief Method AddSeedMaterial, addr 0xf41e9c, size 0x4, virtual true, abstract: false, final false
  inline void AddSeedMaterial(::ArrayW<uint8_t, ::Array<uint8_t>*> seed);

  /// @brief Method AddSeedMaterial, addr 0xf41ea0, size 0x4, virtual true, abstract: false, final false
  inline void AddSeedMaterial(int64_t seed);

  /// @brief Method NextBytes, addr 0xf41ea4, size 0x20, virtual true, abstract: false, final false
  inline void NextBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes);

  /// @brief Method NextBytes, addr 0xf41ec4, size 0x170, virtual true, abstract: false, final false
  inline void NextBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t start, int32_t len);

  // Ctor Parameters [CppParam { name: "", ty: "CryptoApiRandomGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CryptoApiRandomGenerator(CryptoApiRandomGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CryptoApiRandomGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CryptoApiRandomGenerator(CryptoApiRandomGenerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CryptoApiRandomGenerator();

public:
  /// @brief Field rndProv, offset: 0x10, size: 0x8, def value: None
  ::System::Security::Cryptography::RandomNumberGenerator* ___rndProv;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Prng::CryptoApiRandomGenerator, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::CryptoApiRandomGenerator, ___rndProv) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Prng
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Prng::CryptoApiRandomGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Prng::CryptoApiRandomGenerator*, "Org.BouncyCastle.Crypto.Prng", "CryptoApiRandomGenerator");
