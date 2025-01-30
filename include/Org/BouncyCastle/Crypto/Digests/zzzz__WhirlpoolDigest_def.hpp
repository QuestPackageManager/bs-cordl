#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Digests/WhirlpoolDigest.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
#include "Org/BouncyCastle/Utilities/zzzz__IMemoable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WhirlpoolDigest)
namespace Org::BouncyCastle::Utilities {
class IMemoable;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Digests {
class WhirlpoolDigest;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest);
// Dependencies Org.BouncyCastle.Crypto.IDigest, Org.BouncyCastle.Utilities.IMemoable, System.Object
namespace Org::BouncyCastle::Crypto::Digests {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Digests.WhirlpoolDigest
class CORDL_TYPE WhirlpoolDigest : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName)) ::StringW AlgorithmName;

  /// @brief Field C0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_C0, put = setStaticF_C0)) ::ArrayW<int64_t, ::Array<int64_t>*> C0;

  /// @brief Field C1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_C1, put = setStaticF_C1)) ::ArrayW<int64_t, ::Array<int64_t>*> C1;

  /// @brief Field C2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_C2, put = setStaticF_C2)) ::ArrayW<int64_t, ::Array<int64_t>*> C2;

  /// @brief Field C3, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_C3, put = setStaticF_C3)) ::ArrayW<int64_t, ::Array<int64_t>*> C3;

  /// @brief Field C4, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_C4, put = setStaticF_C4)) ::ArrayW<int64_t, ::Array<int64_t>*> C4;

  /// @brief Field C5, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_C5, put = setStaticF_C5)) ::ArrayW<int64_t, ::Array<int64_t>*> C5;

  /// @brief Field C6, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_C6, put = setStaticF_C6)) ::ArrayW<int64_t, ::Array<int64_t>*> C6;

  /// @brief Field C7, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_C7, put = setStaticF_C7)) ::ArrayW<int64_t, ::Array<int64_t>*> C7;

  /// @brief Field EIGHT, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_EIGHT, put = setStaticF_EIGHT)) ::ArrayW<int16_t, ::Array<int16_t>*> EIGHT;

  /// @brief Field SBOX, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SBOX, put = setStaticF_SBOX)) ::ArrayW<int32_t, ::Array<int32_t>*> SBOX;

  /// @brief Field _K, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__K, put = __cordl_internal_set__K)) ::ArrayW<int64_t, ::Array<int64_t>*> _K;

  /// @brief Field _L, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__L, put = __cordl_internal_set__L)) ::ArrayW<int64_t, ::Array<int64_t>*> _L;

  /// @brief Field _bitCount, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__bitCount, put = __cordl_internal_set__bitCount)) ::ArrayW<int16_t, ::Array<int16_t>*> _bitCount;

  /// @brief Field _block, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__block, put = __cordl_internal_set__block)) ::ArrayW<int64_t, ::Array<int64_t>*> _block;

  /// @brief Field _buffer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__buffer, put = __cordl_internal_set__buffer)) ::ArrayW<uint8_t, ::Array<uint8_t>*> _buffer;

  /// @brief Field _bufferPos, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__bufferPos, put = __cordl_internal_set__bufferPos)) int32_t _bufferPos;

  /// @brief Field _hash, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__hash, put = __cordl_internal_set__hash)) ::ArrayW<int64_t, ::Array<int64_t>*> _hash;

  /// @brief Field _rc, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__rc, put = __cordl_internal_set__rc)) ::ArrayW<int64_t, ::Array<int64_t>*> _rc;

  /// @brief Field _state, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__state, put = __cordl_internal_set__state)) ::ArrayW<int64_t, ::Array<int64_t>*> _state;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDigest"
  constexpr operator ::Org::BouncyCastle::Crypto::IDigest*() noexcept;

  /// @brief Convert operator to "::Org::BouncyCastle::Utilities::IMemoable"
  constexpr operator ::Org::BouncyCastle::Utilities::IMemoable*() noexcept;

  /// @brief Method BlockUpdate, addr 0x2337da0, size 0x6c, virtual true, abstract: false, final true
  inline void BlockUpdate(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t length);

  /// @brief Method Copy, addr 0x2337ebc, size 0x58, virtual true, abstract: false, final true
  inline ::Org::BouncyCastle::Utilities::IMemoable* Copy();

  /// @brief Method DoFinal, addr 0x2337148, size 0xc4, virtual true, abstract: false, final true
  inline int32_t DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method GetByteLength, addr 0x2337eb4, size 0x8, virtual true, abstract: false, final true
  inline int32_t GetByteLength();

  /// @brief Method GetDigestSize, addr 0x2337140, size 0x8, virtual true, abstract: false, final true
  inline int32_t GetDigestSize();

  static inline ::Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest* New_ctor();

  static inline ::Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest* New_ctor(::Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest* originalDigest);

  /// @brief Method Reset, addr 0x2337338, size 0xbc, virtual true, abstract: false, final true
  inline void Reset();

  /// @brief Method Reset, addr 0x2336f98, size 0x168, virtual true, abstract: false, final true
  inline void Reset(::Org::BouncyCastle::Utilities::IMemoable* other);

  /// @brief Method Update, addr 0x2337c58, size 0x64, virtual true, abstract: false, final true
  inline void Update(uint8_t input);

  constexpr ::ArrayW<int64_t, ::Array<int64_t>*> const& __cordl_internal_get__K() const;

  constexpr ::ArrayW<int64_t, ::Array<int64_t>*>& __cordl_internal_get__K();

  constexpr ::ArrayW<int64_t, ::Array<int64_t>*> const& __cordl_internal_get__L() const;

  constexpr ::ArrayW<int64_t, ::Array<int64_t>*>& __cordl_internal_get__L();

  constexpr ::ArrayW<int16_t, ::Array<int16_t>*> const& __cordl_internal_get__bitCount() const;

  constexpr ::ArrayW<int16_t, ::Array<int16_t>*>& __cordl_internal_get__bitCount();

  constexpr ::ArrayW<int64_t, ::Array<int64_t>*> const& __cordl_internal_get__block() const;

  constexpr ::ArrayW<int64_t, ::Array<int64_t>*>& __cordl_internal_get__block();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__buffer() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__buffer();

  constexpr int32_t const& __cordl_internal_get__bufferPos() const;

  constexpr int32_t& __cordl_internal_get__bufferPos();

  constexpr ::ArrayW<int64_t, ::Array<int64_t>*> const& __cordl_internal_get__hash() const;

  constexpr ::ArrayW<int64_t, ::Array<int64_t>*>& __cordl_internal_get__hash();

  constexpr ::ArrayW<int64_t, ::Array<int64_t>*> const& __cordl_internal_get__rc() const;

  constexpr ::ArrayW<int64_t, ::Array<int64_t>*>& __cordl_internal_get__rc();

  constexpr ::ArrayW<int64_t, ::Array<int64_t>*> const& __cordl_internal_get__state() const;

  constexpr ::ArrayW<int64_t, ::Array<int64_t>*>& __cordl_internal_get__state();

  constexpr void __cordl_internal_set__K(::ArrayW<int64_t, ::Array<int64_t>*> value);

  constexpr void __cordl_internal_set__L(::ArrayW<int64_t, ::Array<int64_t>*> value);

  constexpr void __cordl_internal_set__bitCount(::ArrayW<int16_t, ::Array<int16_t>*> value);

  constexpr void __cordl_internal_set__block(::ArrayW<int64_t, ::Array<int64_t>*> value);

  constexpr void __cordl_internal_set__buffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set__bufferPos(int32_t value);

  constexpr void __cordl_internal_set__hash(::ArrayW<int64_t, ::Array<int64_t>*> value);

  constexpr void __cordl_internal_set__rc(::ArrayW<int64_t, ::Array<int64_t>*> value);

  constexpr void __cordl_internal_set__state(::ArrayW<int64_t, ::Array<int64_t>*> value);

  /// @brief Method .ctor, addr 0x2336bd8, size 0x2b0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2336e88, size 0x110, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest* originalDigest);

  /// @brief Method bytesToLongFromBuffer, addr 0x23374d4, size 0xd4, virtual false, abstract: false, final false
  static inline int64_t bytesToLongFromBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t startPos);

  /// @brief Method convertLongToByteArray, addr 0x23372e4, size 0x54, virtual false, abstract: false, final false
  static inline void convertLongToByteArray(int64_t inputLong, ::ArrayW<uint8_t, ::Array<uint8_t>*> outputArray, int32_t offSet);

  /// @brief Method copyBitLength, addr 0x2337e0c, size 0xa8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> copyBitLength();

  /// @brief Method finish, addr 0x233720c, size 0xd8, virtual false, abstract: false, final false
  inline void finish();

  static inline ::ArrayW<int64_t, ::Array<int64_t>*> getStaticF_C0();

  static inline ::ArrayW<int64_t, ::Array<int64_t>*> getStaticF_C1();

  static inline ::ArrayW<int64_t, ::Array<int64_t>*> getStaticF_C2();

  static inline ::ArrayW<int64_t, ::Array<int64_t>*> getStaticF_C3();

  static inline ::ArrayW<int64_t, ::Array<int64_t>*> getStaticF_C4();

  static inline ::ArrayW<int64_t, ::Array<int64_t>*> getStaticF_C5();

  static inline ::ArrayW<int64_t, ::Array<int64_t>*> getStaticF_C6();

  static inline ::ArrayW<int64_t, ::Array<int64_t>*> getStaticF_C7();

  static inline ::ArrayW<int16_t, ::Array<int16_t>*> getStaticF_EIGHT();

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_SBOX();

  /// @brief Method get_AlgorithmName, addr 0x2337100, size 0x40, virtual true, abstract: false, final true
  inline ::StringW get_AlgorithmName();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IDigest"
  constexpr ::Org::BouncyCastle::Crypto::IDigest* i___Org__BouncyCastle__Crypto__IDigest() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Utilities::IMemoable"
  constexpr ::Org::BouncyCastle::Utilities::IMemoable* i___Org__BouncyCastle__Utilities__IMemoable() noexcept;

  /// @brief Method increment, addr 0x2337cbc, size 0xe4, virtual false, abstract: false, final false
  inline void increment();

  /// @brief Method maskWithReductionPolynomial, addr 0x2336b90, size 0x14, virtual false, abstract: false, final false
  static inline int32_t maskWithReductionPolynomial(int32_t input);

  /// @brief Method packIntoLong, addr 0x2336ba4, size 0x34, virtual false, abstract: false, final false
  static inline int64_t packIntoLong(int32_t b7, int32_t b6, int32_t b5, int32_t b4, int32_t b3, int32_t b2, int32_t b1, int32_t b0);

  /// @brief Method processBlock, addr 0x23375a8, size 0x6b0, virtual false, abstract: false, final false
  inline void processBlock();

  /// @brief Method processFilledBuffer, addr 0x23373f4, size 0xe0, virtual false, abstract: false, final false
  inline void processFilledBuffer();

  static inline void setStaticF_C0(::ArrayW<int64_t, ::Array<int64_t>*> value);

  static inline void setStaticF_C1(::ArrayW<int64_t, ::Array<int64_t>*> value);

  static inline void setStaticF_C2(::ArrayW<int64_t, ::Array<int64_t>*> value);

  static inline void setStaticF_C3(::ArrayW<int64_t, ::Array<int64_t>*> value);

  static inline void setStaticF_C4(::ArrayW<int64_t, ::Array<int64_t>*> value);

  static inline void setStaticF_C5(::ArrayW<int64_t, ::Array<int64_t>*> value);

  static inline void setStaticF_C6(::ArrayW<int64_t, ::Array<int64_t>*> value);

  static inline void setStaticF_C7(::ArrayW<int64_t, ::Array<int64_t>*> value);

  static inline void setStaticF_EIGHT(::ArrayW<int16_t, ::Array<int16_t>*> value);

  static inline void setStaticF_SBOX(::ArrayW<int32_t, ::Array<int32_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WhirlpoolDigest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WhirlpoolDigest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WhirlpoolDigest(WhirlpoolDigest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WhirlpoolDigest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WhirlpoolDigest(WhirlpoolDigest const&) = delete;

  /// @brief Field BITCOUNT_ARRAY_SIZE offset 0xffffffff size 0x4
  static constexpr int32_t BITCOUNT_ARRAY_SIZE{ static_cast<int32_t>(0x20) };

  /// @brief Field BYTE_LENGTH offset 0xffffffff size 0x4
  static constexpr int32_t BYTE_LENGTH{ static_cast<int32_t>(0x40) };

  /// @brief Field DIGEST_LENGTH_BYTES offset 0xffffffff size 0x4
  static constexpr int32_t DIGEST_LENGTH_BYTES{ static_cast<int32_t>(0x40) };

  /// @brief Field REDUCTION_POLYNOMIAL offset 0xffffffff size 0x4
  static constexpr int32_t REDUCTION_POLYNOMIAL{ static_cast<int32_t>(0x11d) };

  /// @brief Field ROUNDS offset 0xffffffff size 0x4
  static constexpr int32_t ROUNDS{ static_cast<int32_t>(0xa) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 784 };

  /// @brief Field _rc, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<int64_t, ::Array<int64_t>*> ____rc;

  /// @brief Field _buffer, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____buffer;

  /// @brief Field _bufferPos, offset: 0x20, size: 0x4, def value: None
  int32_t ____bufferPos;

  /// @brief Field _bitCount, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<int16_t, ::Array<int16_t>*> ____bitCount;

  /// @brief Field _hash, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<int64_t, ::Array<int64_t>*> ____hash;

  /// @brief Field _K, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<int64_t, ::Array<int64_t>*> ____K;

  /// @brief Field _L, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<int64_t, ::Array<int64_t>*> ____L;

  /// @brief Field _block, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<int64_t, ::Array<int64_t>*> ____block;

  /// @brief Field _state, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<int64_t, ::Array<int64_t>*> ____state;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest, ____rc) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest, ____buffer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest, ____bufferPos) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest, ____bitCount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest, ____hash) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest, ____K) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest, ____L) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest, ____block) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest, ____state) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest, 0x58>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Digests
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest*, "Org.BouncyCastle.Crypto.Digests", "WhirlpoolDigest");
