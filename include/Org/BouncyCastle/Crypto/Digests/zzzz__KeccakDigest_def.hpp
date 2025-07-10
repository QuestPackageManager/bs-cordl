#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Digests/KeccakDigest.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
#include "Org/BouncyCastle/Utilities/zzzz__IMemoable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(KeccakDigest)
namespace Org::BouncyCastle::Utilities {
class IMemoable;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Digests {
class KeccakDigest;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Digests::KeccakDigest);
// Dependencies Org.BouncyCastle.Crypto.IDigest, Org.BouncyCastle.Utilities.IMemoable, System.Object
namespace Org::BouncyCastle::Crypto::Digests {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Digests.KeccakDigest
class CORDL_TYPE KeccakDigest : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName)) ::StringW AlgorithmName;

  /// @brief Field KeccakRoundConstants, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_KeccakRoundConstants, put = setStaticF_KeccakRoundConstants)) ::ArrayW<uint64_t, ::Array<uint64_t>*> KeccakRoundConstants;

  /// @brief Field bitsInQueue, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_bitsInQueue, put = __cordl_internal_set_bitsInQueue)) int32_t bitsInQueue;

  /// @brief Field dataQueue, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_dataQueue, put = __cordl_internal_set_dataQueue)) ::ArrayW<uint8_t, ::Array<uint8_t>*> dataQueue;

  /// @brief Field fixedOutputLength, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_fixedOutputLength, put = __cordl_internal_set_fixedOutputLength)) int32_t fixedOutputLength;

  /// @brief Field rate, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_rate, put = __cordl_internal_set_rate)) int32_t rate;

  /// @brief Field squeezing, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get_squeezing, put = __cordl_internal_set_squeezing)) bool squeezing;

  /// @brief Field state, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_state, put = __cordl_internal_set_state)) ::ArrayW<uint64_t, ::Array<uint64_t>*> state;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDigest"
  constexpr operator ::Org::BouncyCastle::Crypto::IDigest*() noexcept;

  /// @brief Convert operator to "::Org::BouncyCastle::Utilities::IMemoable"
  constexpr operator ::Org::BouncyCastle::Utilities::IMemoable*() noexcept;

  /// @brief Method Absorb, addr 0x2699644, size 0x16c, virtual false, abstract: false, final false
  inline void Absorb(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t off, int32_t len);

  /// @brief Method Absorb, addr 0x2699564, size 0xdc, virtual false, abstract: false, final false
  inline void Absorb(uint8_t data);

  /// @brief Method AbsorbBits, addr 0x269999c, size 0x124, virtual false, abstract: false, final false
  inline void AbsorbBits(int32_t data, int32_t bits);

  /// @brief Method BlockUpdate, addr 0x2699640, size 0x4, virtual true, abstract: false, final false
  inline void BlockUpdate(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t len);

  /// @brief Method Copy, addr 0x269a458, size 0x58, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Utilities::IMemoable* Copy();

  /// @brief Method CopyIn, addr 0x2699454, size 0x7c, virtual false, abstract: false, final false
  inline void CopyIn(::Org::BouncyCastle::Crypto::Digests::KeccakDigest* source);

  /// @brief Method DoFinal, addr 0x26997b0, size 0x3c, virtual true, abstract: false, final false
  inline int32_t DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method DoFinal, addr 0x269992c, size 0x70, virtual true, abstract: false, final false
  inline int32_t DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff, uint8_t partialByte, int32_t partialBits);

  /// @brief Method GetByteLength, addr 0x2699ac8, size 0xc, virtual true, abstract: false, final false
  inline int32_t GetByteLength();

  /// @brief Method GetDigestSize, addr 0x2699554, size 0xc, virtual true, abstract: false, final false
  inline int32_t GetDigestSize();

  /// @brief Method Init, addr 0x2699314, size 0xac, virtual false, abstract: false, final false
  inline void Init(int32_t bitLength);

  /// @brief Method InitSponge, addr 0x2699ad4, size 0xf8, virtual false, abstract: false, final false
  inline void InitSponge(int32_t rate);

  /// @brief Method KeccakAbsorb, addr 0x2699bcc, size 0xb0, virtual false, abstract: false, final false
  inline void KeccakAbsorb(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t off);

  /// @brief Method KeccakExtract, addr 0x2699e1c, size 0x38, virtual false, abstract: false, final false
  inline void KeccakExtract();

  /// @brief Method KeccakPermutation, addr 0x2699e54, size 0x604, virtual false, abstract: false, final false
  inline void KeccakPermutation();

  static inline ::Org::BouncyCastle::Crypto::Digests::KeccakDigest* New_ctor();

  static inline ::Org::BouncyCastle::Crypto::Digests::KeccakDigest* New_ctor(int32_t bitLength);

  static inline ::Org::BouncyCastle::Crypto::Digests::KeccakDigest* New_ctor(::Org::BouncyCastle::Crypto::Digests::KeccakDigest* source);

  /// @brief Method PadAndSwitchToSqueezingPhase, addr 0x2699c7c, size 0x1a0, virtual false, abstract: false, final false
  inline void PadAndSwitchToSqueezingPhase();

  /// @brief Method Reset, addr 0x2699ac0, size 0x8, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method Reset, addr 0x269a4b0, size 0x84, virtual true, abstract: false, final false
  inline void Reset(::Org::BouncyCastle::Utilities::IMemoable* other);

  /// @brief Method Squeeze, addr 0x26997ec, size 0x140, virtual false, abstract: false, final false
  inline void Squeeze(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t offset, int64_t outputLength);

  /// @brief Method Update, addr 0x2699560, size 0x4, virtual true, abstract: false, final false
  inline void Update(uint8_t input);

  constexpr int32_t const& __cordl_internal_get_bitsInQueue() const;

  constexpr int32_t& __cordl_internal_get_bitsInQueue();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_dataQueue() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_dataQueue();

  constexpr int32_t const& __cordl_internal_get_fixedOutputLength() const;

  constexpr int32_t& __cordl_internal_get_fixedOutputLength();

  constexpr int32_t const& __cordl_internal_get_rate() const;

  constexpr int32_t& __cordl_internal_get_rate();

  constexpr bool const& __cordl_internal_get_squeezing() const;

  constexpr bool& __cordl_internal_get_squeezing();

  constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*> const& __cordl_internal_get_state() const;

  constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*>& __cordl_internal_get_state();

  constexpr void __cordl_internal_set_bitsInQueue(int32_t value);

  constexpr void __cordl_internal_set_dataQueue(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_fixedOutputLength(int32_t value);

  constexpr void __cordl_internal_set_rate(int32_t value);

  constexpr void __cordl_internal_set_squeezing(bool value);

  constexpr void __cordl_internal_set_state(::ArrayW<uint64_t, ::Array<uint64_t>*> value);

  /// @brief Method .ctor, addr 0x2699278, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2699280, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(int32_t bitLength);

  /// @brief Method .ctor, addr 0x26993c0, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Digests::KeccakDigest* source);

  static inline ::ArrayW<uint64_t, ::Array<uint64_t>*> getStaticF_KeccakRoundConstants();

  /// @brief Method get_AlgorithmName, addr 0x26994d0, size 0x84, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IDigest"
  constexpr ::Org::BouncyCastle::Crypto::IDigest* i___Org__BouncyCastle__Crypto__IDigest() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Utilities::IMemoable"
  constexpr ::Org::BouncyCastle::Utilities::IMemoable* i___Org__BouncyCastle__Utilities__IMemoable() noexcept;

  static inline void setStaticF_KeccakRoundConstants(::ArrayW<uint64_t, ::Array<uint64_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KeccakDigest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "KeccakDigest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KeccakDigest(KeccakDigest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KeccakDigest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KeccakDigest(KeccakDigest const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 755 };

  /// @brief Field state, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint64_t, ::Array<uint64_t>*> ___state;

  /// @brief Field dataQueue, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___dataQueue;

  /// @brief Field rate, offset: 0x20, size: 0x4, def value: None
  int32_t ___rate;

  /// @brief Field bitsInQueue, offset: 0x24, size: 0x4, def value: None
  int32_t ___bitsInQueue;

  /// @brief Field fixedOutputLength, offset: 0x28, size: 0x4, def value: None
  int32_t ___fixedOutputLength;

  /// @brief Field squeezing, offset: 0x2c, size: 0x1, def value: None
  bool ___squeezing;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::KeccakDigest, ___state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::KeccakDigest, ___dataQueue) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::KeccakDigest, ___rate) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::KeccakDigest, ___bitsInQueue) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::KeccakDigest, ___fixedOutputLength) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::KeccakDigest, ___squeezing) == 0x2c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Digests::KeccakDigest, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Digests
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Digests::KeccakDigest);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Digests::KeccakDigest*, "Org.BouncyCastle.Crypto.Digests", "KeccakDigest");
