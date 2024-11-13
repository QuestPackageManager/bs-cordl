#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Prng/ReversedWindowGenerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ReversedWindowGenerator)
namespace Org::BouncyCastle::Crypto::Prng {
class IRandomGenerator;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Prng {
class ReversedWindowGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Prng::ReversedWindowGenerator);
// Type: Org.BouncyCastle.Crypto.Prng::ReversedWindowGenerator
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Prng {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Prng::ReversedWindowGenerator*
class CORDL_TYPE ReversedWindowGenerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field generator, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_generator, put = __cordl_internal_set_generator)) ::Org::BouncyCastle::Crypto::Prng::IRandomGenerator* generator;

  /// @brief Field window, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_window, put = __cordl_internal_set_window)) ::ArrayW<uint8_t, ::Array<uint8_t>*> window;

  /// @brief Field windowCount, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_windowCount, put = __cordl_internal_set_windowCount)) int32_t windowCount;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Prng::IRandomGenerator"
  constexpr operator ::Org::BouncyCastle::Crypto::Prng::IRandomGenerator*() noexcept;

  /// @brief Method AddSeedMaterial, addr 0x2394d70, size 0x134, virtual true, abstract: false, final false
  inline void AddSeedMaterial(::ArrayW<uint8_t, ::Array<uint8_t>*> seed);

  /// @brief Method AddSeedMaterial, addr 0x2394ea4, size 0x138, virtual true, abstract: false, final false
  inline void AddSeedMaterial(int64_t seed);

  static inline ::Org::BouncyCastle::Crypto::Prng::ReversedWindowGenerator* New_ctor(::Org::BouncyCastle::Crypto::Prng::IRandomGenerator* generator, int32_t windowSize);

  /// @brief Method NextBytes, addr 0x2394fdc, size 0x1c, virtual true, abstract: false, final false
  inline void NextBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes);

  /// @brief Method NextBytes, addr 0x2395218, size 0x4, virtual true, abstract: false, final false
  inline void NextBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t start, int32_t len);

  constexpr ::Org::BouncyCastle::Crypto::Prng::IRandomGenerator*& __cordl_internal_get_generator();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Prng::IRandomGenerator*> const& __cordl_internal_get_generator() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_window() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_window();

  constexpr int32_t const& __cordl_internal_get_windowCount() const;

  constexpr int32_t& __cordl_internal_get_windowCount();

  constexpr void __cordl_internal_set_generator(::Org::BouncyCastle::Crypto::Prng::IRandomGenerator* value);

  constexpr void __cordl_internal_set_window(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_windowCount(int32_t value);

  /// @brief Method .ctor, addr 0x2394c64, size 0x10c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Prng::IRandomGenerator* generator, int32_t windowSize);

  /// @brief Method doNextBytes, addr 0x2394ff8, size 0x220, virtual false, abstract: false, final false
  inline void doNextBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t start, int32_t len);

  /// @brief Convert to "::Org::BouncyCastle::Crypto::Prng::IRandomGenerator"
  constexpr ::Org::BouncyCastle::Crypto::Prng::IRandomGenerator* i___Org__BouncyCastle__Crypto__Prng__IRandomGenerator() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReversedWindowGenerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReversedWindowGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReversedWindowGenerator(ReversedWindowGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReversedWindowGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReversedWindowGenerator(ReversedWindowGenerator const&) = delete;

  /// @brief Field generator, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Prng::IRandomGenerator* ___generator;

  /// @brief Field window, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___window;

  /// @brief Field windowCount, offset: 0x20, size: 0x4, def value: None
  int32_t ___windowCount;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1110 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Prng::ReversedWindowGenerator, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::ReversedWindowGenerator, ___generator) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::ReversedWindowGenerator, ___window) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::ReversedWindowGenerator, ___windowCount) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Prng
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Prng::ReversedWindowGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Prng::ReversedWindowGenerator*, "Org.BouncyCastle.Crypto.Prng", "ReversedWindowGenerator");
