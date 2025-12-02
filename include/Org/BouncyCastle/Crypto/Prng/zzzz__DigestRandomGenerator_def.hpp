#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Prng/DigestRandomGenerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DigestRandomGenerator)
namespace Org::BouncyCastle::Crypto::Prng {
class IRandomGenerator;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Prng {
class DigestRandomGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator);
// Dependencies System.Object
namespace Org::BouncyCastle::Crypto::Prng {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Prng.DigestRandomGenerator
class CORDL_TYPE DigestRandomGenerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field digest, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_digest, put = __cordl_internal_set_digest)) ::Org::BouncyCastle::Crypto::IDigest* digest;

  /// @brief Field seed, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_seed, put = __cordl_internal_set_seed)) ::ArrayW<uint8_t, ::Array<uint8_t>*> seed;

  /// @brief Field seedCounter, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_seedCounter, put = __cordl_internal_set_seedCounter)) int64_t seedCounter;

  /// @brief Field state, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_state, put = __cordl_internal_set_state)) ::ArrayW<uint8_t, ::Array<uint8_t>*> state;

  /// @brief Field stateCounter, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_stateCounter, put = __cordl_internal_set_stateCounter)) int64_t stateCounter;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Prng::IRandomGenerator"
  constexpr operator ::Org::BouncyCastle::Crypto::Prng::IRandomGenerator*() noexcept;

  /// @brief Method AddSeedMaterial, addr 0x32f7b54, size 0xb4, virtual true, abstract: false, final true
  inline void AddSeedMaterial(::ArrayW<uint8_t, ::Array<uint8_t>*> inSeed);

  /// @brief Method AddSeedMaterial, addr 0x32f7d8c, size 0xb4, virtual true, abstract: false, final true
  inline void AddSeedMaterial(int64_t rSeed);

  /// @brief Method CycleSeed, addr 0x32f8128, size 0x34, virtual false, abstract: false, final false
  inline void CycleSeed();

  /// @brief Method DigestAddCounter, addr 0x32f7e40, size 0x10c, virtual false, abstract: false, final false
  inline void DigestAddCounter(int64_t seedVal);

  /// @brief Method DigestDoFinal, addr 0x32f7cd0, size 0xbc, virtual false, abstract: false, final false
  inline void DigestDoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> result);

  /// @brief Method DigestUpdate, addr 0x32f7c08, size 0xc8, virtual false, abstract: false, final false
  inline void DigestUpdate(::ArrayW<uint8_t, ::Array<uint8_t>*> inSeed);

  /// @brief Method GenerateState, addr 0x32f80b4, size 0x74, virtual false, abstract: false, final false
  inline void GenerateState();

  static inline ::Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator* New_ctor(::Org::BouncyCastle::Crypto::IDigest* digest);

  /// @brief Method NextBytes, addr 0x32f7f4c, size 0x18, virtual true, abstract: false, final true
  inline void NextBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes);

  /// @brief Method NextBytes, addr 0x32f7f64, size 0x150, virtual true, abstract: false, final true
  inline void NextBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t start, int32_t len);

  constexpr ::Org::BouncyCastle::Crypto::IDigest* const& __cordl_internal_get_digest() const;

  constexpr ::Org::BouncyCastle::Crypto::IDigest*& __cordl_internal_get_digest();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_seed() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_seed();

  constexpr int64_t const& __cordl_internal_get_seedCounter() const;

  constexpr int64_t& __cordl_internal_get_seedCounter();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_state() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_state();

  constexpr int64_t const& __cordl_internal_get_stateCounter() const;

  constexpr int64_t& __cordl_internal_get_stateCounter();

  constexpr void __cordl_internal_set_digest(::Org::BouncyCastle::Crypto::IDigest* value);

  constexpr void __cordl_internal_set_seed(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_seedCounter(int64_t value);

  constexpr void __cordl_internal_set_state(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_stateCounter(int64_t value);

  /// @brief Method .ctor, addr 0x32f79f0, size 0x164, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IDigest* digest);

  /// @brief Convert to "::Org::BouncyCastle::Crypto::Prng::IRandomGenerator"
  constexpr ::Org::BouncyCastle::Crypto::Prng::IRandomGenerator* i___Org__BouncyCastle__Crypto__Prng__IRandomGenerator() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DigestRandomGenerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DigestRandomGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DigestRandomGenerator(DigestRandomGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DigestRandomGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DigestRandomGenerator(DigestRandomGenerator const&) = delete;

  /// @brief Field CYCLE_COUNT offset 0xffffffff size 0x8
  static constexpr int64_t CYCLE_COUNT{ static_cast<int64_t>(0xa) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1107 };

  /// @brief Field stateCounter, offset: 0x10, size: 0x8, def value: None
  int64_t ___stateCounter;

  /// @brief Field seedCounter, offset: 0x18, size: 0x8, def value: None
  int64_t ___seedCounter;

  /// @brief Field digest, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IDigest* ___digest;

  /// @brief Field state, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___state;

  /// @brief Field seed, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___seed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator, ___stateCounter) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator, ___seedCounter) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator, ___digest) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator, ___state) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator, ___seed) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator, 0x38>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Prng
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator*, "Org.BouncyCastle.Crypto.Prng", "DigestRandomGenerator");
