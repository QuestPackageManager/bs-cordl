#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: Org.BouncyCastle.Crypto.Prng::DigestRandomGenerator
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Prng {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1107))
// CS Name: ::Org.BouncyCastle.Crypto.Prng::DigestRandomGenerator*
class CORDL_TYPE DigestRandomGenerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field stateCounter, offset 0x10, size 0x8
  __declspec(property(get = __get_stateCounter, put = __set_stateCounter)) int64_t stateCounter;

  /// @brief Field seedCounter, offset 0x18, size 0x8
  __declspec(property(get = __get_seedCounter, put = __set_seedCounter)) int64_t seedCounter;

  /// @brief Field digest, offset 0x20, size 0x8
  __declspec(property(get = __get_digest, put = __set_digest))::Org::BouncyCastle::Crypto::IDigest* digest;

  /// @brief Field state, offset 0x28, size 0x8
  __declspec(property(get = __get_state, put = __set_state))::ArrayW<uint8_t, ::Array<uint8_t>*> state;

  /// @brief Field seed, offset 0x30, size 0x8
  __declspec(property(get = __get_seed, put = __set_seed))::ArrayW<uint8_t, ::Array<uint8_t>*> seed;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Prng::IRandomGenerator"
  constexpr operator ::Org::BouncyCastle::Crypto::Prng::IRandomGenerator*() noexcept;

  constexpr int64_t& __get_stateCounter();

  constexpr int64_t const& __get_stateCounter() const;

  constexpr void __set_stateCounter(int64_t value);

  constexpr int64_t& __get_seedCounter();

  constexpr int64_t const& __get_seedCounter() const;

  constexpr void __set_seedCounter(int64_t value);

  constexpr ::Org::BouncyCastle::Crypto::IDigest*& __get_digest();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IDigest*> const& __get_digest() const;

  constexpr void __set_digest(::Org::BouncyCastle::Crypto::IDigest* value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_state();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_state() const;

  constexpr void __set_state(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_seed();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_seed() const;

  constexpr void __set_seed(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator* New_ctor(::Org::BouncyCastle::Crypto::IDigest* digest);

  /// @brief Method .ctor addr 0xf42034 size 0x168 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IDigest* digest);

  /// @brief Method AddSeedMaterial addr 0xf4219c size 0xc8 virtual true final true
  inline void AddSeedMaterial(::ArrayW<uint8_t, ::Array<uint8_t>*> inSeed);

  /// @brief Method AddSeedMaterial addr 0xf423d0 size 0xc8 virtual true final true
  inline void AddSeedMaterial(int64_t rSeed);

  /// @brief Method NextBytes addr 0xf42590 size 0x1c virtual true final true
  inline void NextBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes);

  /// @brief Method NextBytes addr 0xf425ac size 0x168 virtual true final true
  inline void NextBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t start, int32_t len);

  /// @brief Method CycleSeed addr 0xf42788 size 0x34 virtual false final false
  inline void CycleSeed();

  /// @brief Method GenerateState addr 0xf42714 size 0x74 virtual false final false
  inline void GenerateState();

  /// @brief Method DigestAddCounter addr 0xf42498 size 0xf8 virtual false final false
  inline void DigestAddCounter(int64_t seedVal);

  /// @brief Method DigestUpdate addr 0xf42264 size 0xbc virtual false final false
  inline void DigestUpdate(::ArrayW<uint8_t, ::Array<uint8_t>*> inSeed);

  /// @brief Method DigestDoFinal addr 0xf42320 size 0xb0 virtual false final false
  inline void DigestDoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> result);

  // Ctor Parameters [CppParam { name: "", ty: "DigestRandomGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DigestRandomGenerator(DigestRandomGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DigestRandomGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DigestRandomGenerator(DigestRandomGenerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DigestRandomGenerator();

public:
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

  /// @brief Field CYCLE_COUNT offset 0xffffffff size 0x8
  static constexpr int64_t CYCLE_COUNT{ static_cast<int64_t>(0xa) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator, 0x38>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Prng
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator*, "Org.BouncyCastle.Crypto.Prng", "DigestRandomGenerator");
