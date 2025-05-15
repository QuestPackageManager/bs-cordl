#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Prng/VmpcRandomGenerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Prng/zzzz__IRandomGenerator_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VmpcRandomGenerator)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Prng {
class VmpcRandomGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator);
// Dependencies Org.BouncyCastle.Crypto.Prng.IRandomGenerator, System.Object
namespace Org::BouncyCastle::Crypto::Prng {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Prng.VmpcRandomGenerator
class CORDL_TYPE VmpcRandomGenerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field P, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_P, put = __cordl_internal_set_P)) ::ArrayW<uint8_t, ::Array<uint8_t>*> P;

  /// @brief Field n, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_n, put = __cordl_internal_set_n)) uint8_t n;

  /// @brief Field s, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_s, put = __cordl_internal_set_s)) uint8_t s;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Prng::IRandomGenerator"
  constexpr operator ::Org::BouncyCastle::Crypto::Prng::IRandomGenerator*() noexcept;

  /// @brief Method AddSeedMaterial, addr 0x23cc9c0, size 0xd0, virtual true, abstract: false, final false
  inline void AddSeedMaterial(::ArrayW<uint8_t, ::Array<uint8_t>*> seed);

  /// @brief Method AddSeedMaterial, addr 0x23cca90, size 0x2c, virtual true, abstract: false, final false
  inline void AddSeedMaterial(int64_t seed);

  static inline ::Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator* New_ctor();

  /// @brief Method NextBytes, addr 0x23ccabc, size 0x24, virtual true, abstract: false, final false
  inline void NextBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes);

  /// @brief Method NextBytes, addr 0x23ccae0, size 0x210, virtual true, abstract: false, final false
  inline void NextBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t start, int32_t len);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_P() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_P();

  constexpr uint8_t const& __cordl_internal_get_n() const;

  constexpr uint8_t& __cordl_internal_get_n();

  constexpr uint8_t const& __cordl_internal_get_s() const;

  constexpr uint8_t& __cordl_internal_get_s();

  constexpr void __cordl_internal_set_P(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_n(uint8_t value);

  constexpr void __cordl_internal_set_s(uint8_t value);

  /// @brief Method .ctor, addr 0x23cc930, size 0x90, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::Prng::IRandomGenerator"
  constexpr ::Org::BouncyCastle::Crypto::Prng::IRandomGenerator* i___Org__BouncyCastle__Crypto__Prng__IRandomGenerator() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VmpcRandomGenerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VmpcRandomGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VmpcRandomGenerator(VmpcRandomGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VmpcRandomGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VmpcRandomGenerator(VmpcRandomGenerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1119 };

  /// @brief Field n, offset: 0x10, size: 0x1, def value: None
  uint8_t ___n;

  /// @brief Field P, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___P;

  /// @brief Field s, offset: 0x20, size: 0x1, def value: None
  uint8_t ___s;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator, ___n) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator, ___P) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator, ___s) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Prng
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator*, "Org.BouncyCastle.Crypto.Prng", "VmpcRandomGenerator");
