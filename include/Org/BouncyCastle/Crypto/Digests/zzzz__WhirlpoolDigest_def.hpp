#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WhirlpoolDigest)
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Utilities {
class IMemoable;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Digests {
class WhirlpoolDigest;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest);
// Type: Org.BouncyCastle.Crypto.Digests::WhirlpoolDigest
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Digests {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(784))
// CS Name: ::Org.BouncyCastle.Crypto.Digests::WhirlpoolDigest*
class CORDL_TYPE WhirlpoolDigest : public ::System::Object {
public:
  // Declarations
  /// @brief Field _rc, offset 0x10, size 0x8
  __declspec(property(get = __get__rc, put = __set__rc))::ArrayW<int64_t, ::Array<int64_t>*> _rc;

  /// @brief Field _buffer, offset 0x18, size 0x8
  __declspec(property(get = __get__buffer, put = __set__buffer))::ArrayW<uint8_t, ::Array<uint8_t>*> _buffer;

  /// @brief Field _bufferPos, offset 0x20, size 0x4
  __declspec(property(get = __get__bufferPos, put = __set__bufferPos)) int32_t _bufferPos;

  /// @brief Field _bitCount, offset 0x28, size 0x8
  __declspec(property(get = __get__bitCount, put = __set__bitCount))::ArrayW<int16_t, ::Array<int16_t>*> _bitCount;

  /// @brief Field _hash, offset 0x30, size 0x8
  __declspec(property(get = __get__hash, put = __set__hash))::ArrayW<int64_t, ::Array<int64_t>*> _hash;

  /// @brief Field _K, offset 0x38, size 0x8
  __declspec(property(get = __get__K, put = __set__K))::ArrayW<int64_t, ::Array<int64_t>*> _K;

  /// @brief Field _L, offset 0x40, size 0x8
  __declspec(property(get = __get__L, put = __set__L))::ArrayW<int64_t, ::Array<int64_t>*> _L;

  /// @brief Field _block, offset 0x48, size 0x8
  __declspec(property(get = __get__block, put = __set__block))::ArrayW<int64_t, ::Array<int64_t>*> _block;

  /// @brief Field _state, offset 0x50, size 0x8
  __declspec(property(get = __get__state, put = __set__state))::ArrayW<int64_t, ::Array<int64_t>*> _state;

  /// @brief Field SBOX, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SBOX, put = setStaticF_SBOX))::ArrayW<int32_t, ::Array<int32_t>*> SBOX;

  /// @brief Field C0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_C0, put = setStaticF_C0))::ArrayW<int64_t, ::Array<int64_t>*> C0;

  /// @brief Field C1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_C1, put = setStaticF_C1))::ArrayW<int64_t, ::Array<int64_t>*> C1;

  /// @brief Field C2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_C2, put = setStaticF_C2))::ArrayW<int64_t, ::Array<int64_t>*> C2;

  /// @brief Field C3, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_C3, put = setStaticF_C3))::ArrayW<int64_t, ::Array<int64_t>*> C3;

  /// @brief Field C4, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_C4, put = setStaticF_C4))::ArrayW<int64_t, ::Array<int64_t>*> C4;

  /// @brief Field C5, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_C5, put = setStaticF_C5))::ArrayW<int64_t, ::Array<int64_t>*> C5;

  /// @brief Field C6, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_C6, put = setStaticF_C6))::ArrayW<int64_t, ::Array<int64_t>*> C6;

  /// @brief Field C7, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_C7, put = setStaticF_C7))::ArrayW<int64_t, ::Array<int64_t>*> C7;

  /// @brief Field EIGHT, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_EIGHT, put = setStaticF_EIGHT))::ArrayW<int16_t, ::Array<int16_t>*> EIGHT;

  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDigest"
  constexpr operator ::Org::BouncyCastle::Crypto::IDigest*() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IDigest"
  constexpr ::Org::BouncyCastle::Crypto::IDigest* i___Org__BouncyCastle__Crypto__IDigest() noexcept;

  /// @brief Convert operator to "::Org::BouncyCastle::Utilities::IMemoable"
  constexpr operator ::Org::BouncyCastle::Utilities::IMemoable*() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Utilities::IMemoable"
  constexpr ::Org::BouncyCastle::Utilities::IMemoable* i___Org__BouncyCastle__Utilities__IMemoable() noexcept;

  constexpr ::ArrayW<int64_t, ::Array<int64_t>*>& __get__rc();

  constexpr ::ArrayW<int64_t, ::Array<int64_t>*> const& __get__rc() const;

  constexpr void __set__rc(::ArrayW<int64_t, ::Array<int64_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get__buffer();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get__buffer() const;

  constexpr void __set__buffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int32_t& __get__bufferPos();

  constexpr int32_t const& __get__bufferPos() const;

  constexpr void __set__bufferPos(int32_t value);

  constexpr ::ArrayW<int16_t, ::Array<int16_t>*>& __get__bitCount();

  constexpr ::ArrayW<int16_t, ::Array<int16_t>*> const& __get__bitCount() const;

  constexpr void __set__bitCount(::ArrayW<int16_t, ::Array<int16_t>*> value);

  constexpr ::ArrayW<int64_t, ::Array<int64_t>*>& __get__hash();

  constexpr ::ArrayW<int64_t, ::Array<int64_t>*> const& __get__hash() const;

  constexpr void __set__hash(::ArrayW<int64_t, ::Array<int64_t>*> value);

  constexpr ::ArrayW<int64_t, ::Array<int64_t>*>& __get__K();

  constexpr ::ArrayW<int64_t, ::Array<int64_t>*> const& __get__K() const;

  constexpr void __set__K(::ArrayW<int64_t, ::Array<int64_t>*> value);

  constexpr ::ArrayW<int64_t, ::Array<int64_t>*>& __get__L();

  constexpr ::ArrayW<int64_t, ::Array<int64_t>*> const& __get__L() const;

  constexpr void __set__L(::ArrayW<int64_t, ::Array<int64_t>*> value);

  constexpr ::ArrayW<int64_t, ::Array<int64_t>*>& __get__block();

  constexpr ::ArrayW<int64_t, ::Array<int64_t>*> const& __get__block() const;

  constexpr void __set__block(::ArrayW<int64_t, ::Array<int64_t>*> value);

  constexpr ::ArrayW<int64_t, ::Array<int64_t>*>& __get__state();

  constexpr ::ArrayW<int64_t, ::Array<int64_t>*> const& __get__state() const;

  constexpr void __set__state(::ArrayW<int64_t, ::Array<int64_t>*> value);

  static inline void setStaticF_SBOX(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_SBOX();

  static inline void setStaticF_C0(::ArrayW<int64_t, ::Array<int64_t>*> value);

  static inline ::ArrayW<int64_t, ::Array<int64_t>*> getStaticF_C0();

  static inline void setStaticF_C1(::ArrayW<int64_t, ::Array<int64_t>*> value);

  static inline ::ArrayW<int64_t, ::Array<int64_t>*> getStaticF_C1();

  static inline void setStaticF_C2(::ArrayW<int64_t, ::Array<int64_t>*> value);

  static inline ::ArrayW<int64_t, ::Array<int64_t>*> getStaticF_C2();

  static inline void setStaticF_C3(::ArrayW<int64_t, ::Array<int64_t>*> value);

  static inline ::ArrayW<int64_t, ::Array<int64_t>*> getStaticF_C3();

  static inline void setStaticF_C4(::ArrayW<int64_t, ::Array<int64_t>*> value);

  static inline ::ArrayW<int64_t, ::Array<int64_t>*> getStaticF_C4();

  static inline void setStaticF_C5(::ArrayW<int64_t, ::Array<int64_t>*> value);

  static inline ::ArrayW<int64_t, ::Array<int64_t>*> getStaticF_C5();

  static inline void setStaticF_C6(::ArrayW<int64_t, ::Array<int64_t>*> value);

  static inline ::ArrayW<int64_t, ::Array<int64_t>*> getStaticF_C6();

  static inline void setStaticF_C7(::ArrayW<int64_t, ::Array<int64_t>*> value);

  static inline ::ArrayW<int64_t, ::Array<int64_t>*> getStaticF_C7();

  static inline void setStaticF_EIGHT(::ArrayW<int16_t, ::Array<int16_t>*> value);

  static inline ::ArrayW<int16_t, ::Array<int16_t>*> getStaticF_EIGHT();

  static inline ::Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest* New_ctor();

  /// @brief Method .ctor, addr 0xeaab58, size 0x2b0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method packIntoLong, addr 0xeaab24, size 0x34, virtual false, abstract: false, final false
  static inline int64_t packIntoLong(int32_t b7, int32_t b6, int32_t b5, int32_t b4, int32_t b3, int32_t b2, int32_t b1, int32_t b0);

  /// @brief Method maskWithReductionPolynomial, addr 0xeaab10, size 0x14, virtual false, abstract: false, final false
  static inline int32_t maskWithReductionPolynomial(int32_t input);

  static inline ::Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest* New_ctor(::Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest* originalDigest);

  /// @brief Method .ctor, addr 0xeaae08, size 0x110, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest* originalDigest);

  /// @brief Method get_AlgorithmName, addr 0xeab080, size 0x40, virtual true, abstract: false, final true
  inline ::StringW get_AlgorithmName();

  /// @brief Method GetDigestSize, addr 0xeab0c0, size 0x8, virtual true, abstract: false, final true
  inline int32_t GetDigestSize();

  /// @brief Method DoFinal, addr 0xeab0c8, size 0xc4, virtual true, abstract: false, final true
  inline int32_t DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method Reset, addr 0xeab2b8, size 0xbc, virtual true, abstract: false, final true
  inline void Reset();

  /// @brief Method processFilledBuffer, addr 0xeab374, size 0xe0, virtual false, abstract: false, final false
  inline void processFilledBuffer();

  /// @brief Method bytesToLongFromBuffer, addr 0xeab454, size 0xd4, virtual false, abstract: false, final false
  static inline int64_t bytesToLongFromBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t startPos);

  /// @brief Method convertLongToByteArray, addr 0xeab260, size 0x58, virtual false, abstract: false, final false
  static inline void convertLongToByteArray(int64_t inputLong, ::ArrayW<uint8_t, ::Array<uint8_t>*> outputArray, int32_t offSet);

  /// @brief Method processBlock, addr 0xeab528, size 0x6b0, virtual false, abstract: false, final false
  inline void processBlock();

  /// @brief Method Update, addr 0xeabbd8, size 0x64, virtual true, abstract: false, final true
  inline void Update(uint8_t input);

  /// @brief Method increment, addr 0xeabc3c, size 0xf4, virtual false, abstract: false, final false
  inline void increment();

  /// @brief Method BlockUpdate, addr 0xeabd30, size 0x6c, virtual true, abstract: false, final true
  inline void BlockUpdate(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t length);

  /// @brief Method finish, addr 0xeab18c, size 0xd4, virtual false, abstract: false, final false
  inline void finish();

  /// @brief Method copyBitLength, addr 0xeabd9c, size 0xa8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> copyBitLength();

  /// @brief Method GetByteLength, addr 0xeabe44, size 0x8, virtual true, abstract: false, final true
  inline int32_t GetByteLength();

  /// @brief Method Copy, addr 0xeabe4c, size 0x60, virtual true, abstract: false, final true
  inline ::Org::BouncyCastle::Utilities::IMemoable* Copy();

  /// @brief Method Reset, addr 0xeaaf18, size 0x168, virtual true, abstract: false, final true
  inline void Reset(::Org::BouncyCastle::Utilities::IMemoable* other);

  // Ctor Parameters [CppParam { name: "", ty: "WhirlpoolDigest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WhirlpoolDigest(WhirlpoolDigest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WhirlpoolDigest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WhirlpoolDigest(WhirlpoolDigest const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WhirlpoolDigest();

public:
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

  /// @brief Field BYTE_LENGTH offset 0xffffffff size 0x4
  static constexpr int32_t BYTE_LENGTH{ static_cast<int32_t>(0x40) };

  /// @brief Field DIGEST_LENGTH_BYTES offset 0xffffffff size 0x4
  static constexpr int32_t DIGEST_LENGTH_BYTES{ static_cast<int32_t>(0x40) };

  /// @brief Field ROUNDS offset 0xffffffff size 0x4
  static constexpr int32_t ROUNDS{ static_cast<int32_t>(0xa) };

  /// @brief Field REDUCTION_POLYNOMIAL offset 0xffffffff size 0x4
  static constexpr int32_t REDUCTION_POLYNOMIAL{ static_cast<int32_t>(0x11d) };

  /// @brief Field BITCOUNT_ARRAY_SIZE offset 0xffffffff size 0x4
  static constexpr int32_t BITCOUNT_ARRAY_SIZE{ static_cast<int32_t>(0x20) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest, 0x58>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest, ____rc) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest, ____buffer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest, ____bufferPos) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest, ____bitCount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest, ____hash) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest, ____K) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest, ____L) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest, ____block) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest, ____state) == 0x50, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Digests
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest*, "Org.BouncyCastle.Crypto.Digests", "WhirlpoolDigest");
