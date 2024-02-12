#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X931Rng)
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class IEntropySource;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Prng {
class X931Rng;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Prng::X931Rng);
// Type: Org.BouncyCastle.Crypto.Prng::X931Rng
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Prng {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1120))
// CS Name: ::Org.BouncyCastle.Crypto.Prng::X931Rng*
class CORDL_TYPE X931Rng : public ::System::Object {
public:
  // Declarations
  /// @brief Field mEngine, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_mEngine, put = __cordl_internal_set_mEngine))::Org::BouncyCastle::Crypto::IBlockCipher* mEngine;

  /// @brief Field mEntropySource, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_mEntropySource, put = __cordl_internal_set_mEntropySource))::Org::BouncyCastle::Crypto::IEntropySource* mEntropySource;

  /// @brief Field mDT, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_mDT, put = __cordl_internal_set_mDT))::ArrayW<uint8_t, ::Array<uint8_t>*> mDT;

  /// @brief Field mI, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_mI, put = __cordl_internal_set_mI))::ArrayW<uint8_t, ::Array<uint8_t>*> mI;

  /// @brief Field mR, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_mR, put = __cordl_internal_set_mR))::ArrayW<uint8_t, ::Array<uint8_t>*> mR;

  /// @brief Field mV, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_mV, put = __cordl_internal_set_mV))::ArrayW<uint8_t, ::Array<uint8_t>*> mV;

  /// @brief Field mReseedCounter, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_mReseedCounter, put = __cordl_internal_set_mReseedCounter)) int64_t mReseedCounter;

  __declspec(property(get = get_EntropySource))::Org::BouncyCastle::Crypto::IEntropySource* EntropySource;

  constexpr ::Org::BouncyCastle::Crypto::IBlockCipher*& __cordl_internal_get_mEngine();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IBlockCipher*> const& __cordl_internal_get_mEngine() const;

  constexpr void __cordl_internal_set_mEngine(::Org::BouncyCastle::Crypto::IBlockCipher* value);

  constexpr ::Org::BouncyCastle::Crypto::IEntropySource*& __cordl_internal_get_mEntropySource();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IEntropySource*> const& __cordl_internal_get_mEntropySource() const;

  constexpr void __cordl_internal_set_mEntropySource(::Org::BouncyCastle::Crypto::IEntropySource* value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_mDT();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_mDT() const;

  constexpr void __cordl_internal_set_mDT(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_mI();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_mI() const;

  constexpr void __cordl_internal_set_mI(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_mR();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_mR() const;

  constexpr void __cordl_internal_set_mR(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_mV();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_mV() const;

  constexpr void __cordl_internal_set_mV(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int64_t& __cordl_internal_get_mReseedCounter();

  constexpr int64_t const& __cordl_internal_get_mReseedCounter() const;

  constexpr void __cordl_internal_set_mReseedCounter(int64_t value);

  static inline ::Org::BouncyCastle::Crypto::Prng::X931Rng* New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* engine, ::ArrayW<uint8_t, ::Array<uint8_t>*> dateTimeVector,
                                                                     ::Org::BouncyCastle::Crypto::IEntropySource* entropySource);

  /// @brief Method .ctor, addr 0xf70220, size 0x1f8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IBlockCipher* engine, ::ArrayW<uint8_t, ::Array<uint8_t>*> dateTimeVector, ::Org::BouncyCastle::Crypto::IEntropySource* entropySource);

  /// @brief Method Generate, addr 0xf70418, size 0x488, virtual false, abstract: false, final false
  inline int32_t Generate(::ArrayW<uint8_t, ::Array<uint8_t>*> output, bool predictionResistant);

  /// @brief Method Reseed, addr 0xf70a30, size 0x18c, virtual false, abstract: false, final false
  inline void Reseed();

  /// @brief Method get_EntropySource, addr 0xf70bbc, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::IEntropySource* get_EntropySource();

  /// @brief Method Process, addr 0xf708b4, size 0x134, virtual false, abstract: false, final false
  inline void Process(::ArrayW<uint8_t, ::Array<uint8_t>*> res, ::ArrayW<uint8_t, ::Array<uint8_t>*> a, ::ArrayW<uint8_t, ::Array<uint8_t>*> b);

  /// @brief Method Increment, addr 0xf709e8, size 0x48, virtual false, abstract: false, final false
  inline void Increment(::ArrayW<uint8_t, ::Array<uint8_t>*> val);

  /// @brief Method IsTooLarge, addr 0xf708a0, size 0x14, virtual false, abstract: false, final false
  static inline bool IsTooLarge(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t maxBytes);

  // Ctor Parameters [CppParam { name: "", ty: "X931Rng", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X931Rng(X931Rng&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X931Rng", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X931Rng(X931Rng const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X931Rng();

public:
  /// @brief Field mEngine, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IBlockCipher* ___mEngine;

  /// @brief Field mEntropySource, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IEntropySource* ___mEntropySource;

  /// @brief Field mDT, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mDT;

  /// @brief Field mI, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mI;

  /// @brief Field mR, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mR;

  /// @brief Field mV, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mV;

  /// @brief Field mReseedCounter, offset: 0x40, size: 0x8, def value: None
  int64_t ___mReseedCounter;

  /// @brief Field BLOCK64_RESEED_MAX offset 0xffffffff size 0x8
  static constexpr int64_t BLOCK64_RESEED_MAX{ static_cast<int64_t>(0x8000) };

  /// @brief Field BLOCK128_RESEED_MAX offset 0xffffffff size 0x8
  static constexpr int64_t BLOCK128_RESEED_MAX{ static_cast<int64_t>(0x800000) };

  /// @brief Field BLOCK64_MAX_BITS_REQUEST offset 0xffffffff size 0x4
  static constexpr int32_t BLOCK64_MAX_BITS_REQUEST{ static_cast<int32_t>(0x1000) };

  /// @brief Field BLOCK128_MAX_BITS_REQUEST offset 0xffffffff size 0x4
  static constexpr int32_t BLOCK128_MAX_BITS_REQUEST{ static_cast<int32_t>(0x40000) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Prng::X931Rng, 0x48>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::X931Rng, ___mEngine) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::X931Rng, ___mEntropySource) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::X931Rng, ___mDT) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::X931Rng, ___mI) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::X931Rng, ___mR) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::X931Rng, ___mV) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::X931Rng, ___mReseedCounter) == 0x40, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Prng
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Prng::X931Rng);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Prng::X931Rng*, "Org.BouncyCastle.Crypto.Prng", "X931Rng");
