#pragma once
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
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Prng {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1110))
// CS Name: ::Org.BouncyCastle.Crypto.Prng::ReversedWindowGenerator*
class CORDL_TYPE ReversedWindowGenerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field generator, offset 0x10, size 0x8
  __declspec(property(get = __get_generator, put = __set_generator))::Org::BouncyCastle::Crypto::Prng::IRandomGenerator* generator;

  /// @brief Field window, offset 0x18, size 0x8
  __declspec(property(get = __get_window, put = __set_window))::ArrayW<uint8_t, ::Array<uint8_t>*> window;

  /// @brief Field windowCount, offset 0x20, size 0x4
  __declspec(property(get = __get_windowCount, put = __set_windowCount)) int32_t windowCount;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Prng::IRandomGenerator"
  constexpr operator ::Org::BouncyCastle::Crypto::Prng::IRandomGenerator*() noexcept;

  constexpr ::Org::BouncyCastle::Crypto::Prng::IRandomGenerator*& __get_generator();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Prng::IRandomGenerator*> const& __get_generator() const;

  constexpr void __set_generator(::Org::BouncyCastle::Crypto::Prng::IRandomGenerator* value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_window();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_window() const;

  constexpr void __set_window(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int32_t& __get_windowCount();

  constexpr int32_t const& __get_windowCount() const;

  constexpr void __set_windowCount(int32_t value);

  static inline ::Org::BouncyCastle::Crypto::Prng::ReversedWindowGenerator* New_ctor(::Org::BouncyCastle::Crypto::Prng::IRandomGenerator* generator, int32_t windowSize);

  /// @brief Method .ctor addr 0xf42920 size 0x114 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Prng::IRandomGenerator* generator, int32_t windowSize);

  /// @brief Method AddSeedMaterial addr 0xf42a34 size 0x134 virtual true final false
  inline void AddSeedMaterial(::ArrayW<uint8_t, ::Array<uint8_t>*> seed);

  /// @brief Method AddSeedMaterial addr 0xf42b68 size 0x138 virtual true final false
  inline void AddSeedMaterial(int64_t seed);

  /// @brief Method NextBytes addr 0xf42ca0 size 0x1c virtual true final false
  inline void NextBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes);

  /// @brief Method NextBytes addr 0xf42edc size 0x4 virtual true final false
  inline void NextBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t start, int32_t len);

  /// @brief Method doNextBytes addr 0xf42cbc size 0x220 virtual false final false
  inline void doNextBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t start, int32_t len);

  // Ctor Parameters [CppParam { name: "", ty: "ReversedWindowGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReversedWindowGenerator(ReversedWindowGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReversedWindowGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReversedWindowGenerator(ReversedWindowGenerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReversedWindowGenerator();

public:
  /// @brief Field generator, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Prng::IRandomGenerator* ___generator;

  /// @brief Field window, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___window;

  /// @brief Field windowCount, offset: 0x20, size: 0x4, def value: None
  int32_t ___windowCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Prng::ReversedWindowGenerator, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Prng
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Prng::ReversedWindowGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Prng::ReversedWindowGenerator*, "Org.BouncyCastle.Crypto.Prng", "ReversedWindowGenerator");
