#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Dstu7564Digest)
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Utilities {
class IMemoable;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Digests {
class Dstu7564Digest;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Digests::Dstu7564Digest);
// Type: Org.BouncyCastle.Crypto.Digests::Dstu7564Digest
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Digests {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(749))
// CS Name: ::Org.BouncyCastle.Crypto.Digests::Dstu7564Digest*
class CORDL_TYPE Dstu7564Digest : public ::System::Object {
public:
  // Declarations
  /// @brief Field hashSize, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_hashSize, put = __cordl_internal_set_hashSize)) int32_t hashSize;

  /// @brief Field blockSize, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_blockSize, put = __cordl_internal_set_blockSize)) int32_t blockSize;

  /// @brief Field columns, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_columns, put = __cordl_internal_set_columns)) int32_t columns;

  /// @brief Field rounds, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_rounds, put = __cordl_internal_set_rounds)) int32_t rounds;

  /// @brief Field state, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_state, put = __cordl_internal_set_state))::ArrayW<uint64_t, ::Array<uint64_t>*> state;

  /// @brief Field tempState1, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_tempState1, put = __cordl_internal_set_tempState1))::ArrayW<uint64_t, ::Array<uint64_t>*> tempState1;

  /// @brief Field tempState2, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_tempState2, put = __cordl_internal_set_tempState2))::ArrayW<uint64_t, ::Array<uint64_t>*> tempState2;

  /// @brief Field inputBlocks, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_inputBlocks, put = __cordl_internal_set_inputBlocks)) uint64_t inputBlocks;

  /// @brief Field bufOff, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_bufOff, put = __cordl_internal_set_bufOff)) int32_t bufOff;

  /// @brief Field buf, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_buf, put = __cordl_internal_set_buf))::ArrayW<uint8_t, ::Array<uint8_t>*> buf;

  /// @brief Field S0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_S0, put = setStaticF_S0))::ArrayW<uint8_t, ::Array<uint8_t>*> S0;

  /// @brief Field S1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_S1, put = setStaticF_S1))::ArrayW<uint8_t, ::Array<uint8_t>*> S1;

  /// @brief Field S2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_S2, put = setStaticF_S2))::ArrayW<uint8_t, ::Array<uint8_t>*> S2;

  /// @brief Field S3, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_S3, put = setStaticF_S3))::ArrayW<uint8_t, ::Array<uint8_t>*> S3;

  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDigest"
  constexpr operator ::Org::BouncyCastle::Crypto::IDigest*() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IDigest"
  constexpr ::Org::BouncyCastle::Crypto::IDigest* i___Org__BouncyCastle__Crypto__IDigest() noexcept;

  /// @brief Convert operator to "::Org::BouncyCastle::Utilities::IMemoable"
  constexpr operator ::Org::BouncyCastle::Utilities::IMemoable*() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Utilities::IMemoable"
  constexpr ::Org::BouncyCastle::Utilities::IMemoable* i___Org__BouncyCastle__Utilities__IMemoable() noexcept;

  constexpr int32_t& __cordl_internal_get_hashSize();

  constexpr int32_t const& __cordl_internal_get_hashSize() const;

  constexpr void __cordl_internal_set_hashSize(int32_t value);

  constexpr int32_t& __cordl_internal_get_blockSize();

  constexpr int32_t const& __cordl_internal_get_blockSize() const;

  constexpr void __cordl_internal_set_blockSize(int32_t value);

  constexpr int32_t& __cordl_internal_get_columns();

  constexpr int32_t const& __cordl_internal_get_columns() const;

  constexpr void __cordl_internal_set_columns(int32_t value);

  constexpr int32_t& __cordl_internal_get_rounds();

  constexpr int32_t const& __cordl_internal_get_rounds() const;

  constexpr void __cordl_internal_set_rounds(int32_t value);

  constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*>& __cordl_internal_get_state();

  constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*> const& __cordl_internal_get_state() const;

  constexpr void __cordl_internal_set_state(::ArrayW<uint64_t, ::Array<uint64_t>*> value);

  constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*>& __cordl_internal_get_tempState1();

  constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*> const& __cordl_internal_get_tempState1() const;

  constexpr void __cordl_internal_set_tempState1(::ArrayW<uint64_t, ::Array<uint64_t>*> value);

  constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*>& __cordl_internal_get_tempState2();

  constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*> const& __cordl_internal_get_tempState2() const;

  constexpr void __cordl_internal_set_tempState2(::ArrayW<uint64_t, ::Array<uint64_t>*> value);

  constexpr uint64_t& __cordl_internal_get_inputBlocks();

  constexpr uint64_t const& __cordl_internal_get_inputBlocks() const;

  constexpr void __cordl_internal_set_inputBlocks(uint64_t value);

  constexpr int32_t& __cordl_internal_get_bufOff();

  constexpr int32_t const& __cordl_internal_get_bufOff() const;

  constexpr void __cordl_internal_set_bufOff(int32_t value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_buf();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_buf() const;

  constexpr void __cordl_internal_set_buf(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_S0(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_S0();

  static inline void setStaticF_S1(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_S1();

  static inline void setStaticF_S2(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_S2();

  static inline void setStaticF_S3(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_S3();

  static inline ::Org::BouncyCastle::Crypto::Digests::Dstu7564Digest* New_ctor(::Org::BouncyCastle::Crypto::Digests::Dstu7564Digest* digest);

  /// @brief Method .ctor, addr 0x122012c, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Digests::Dstu7564Digest* digest);

  /// @brief Method CopyIn, addr 0x1220158, size 0x130, virtual false, abstract: false, final false
  inline void CopyIn(::Org::BouncyCastle::Crypto::Digests::Dstu7564Digest* digest);

  static inline ::Org::BouncyCastle::Crypto::Digests::Dstu7564Digest* New_ctor(int32_t hashSizeBits);

  /// @brief Method .ctor, addr 0x1220288, size 0x14c, virtual false, abstract: false, final false
  inline void _ctor(int32_t hashSizeBits);

  /// @brief Method get_AlgorithmName, addr 0x12203d4, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

  /// @brief Method GetDigestSize, addr 0x1220414, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetDigestSize();

  /// @brief Method GetByteLength, addr 0x122041c, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetByteLength();

  /// @brief Method Update, addr 0x1220424, size 0x7c, virtual true, abstract: false, final false
  inline void Update(uint8_t input);

  /// @brief Method BlockUpdate, addr 0x12204a0, size 0x128, virtual true, abstract: false, final false
  inline void BlockUpdate(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t length);

  /// @brief Method DoFinal, addr 0x12205c8, size 0x260, virtual true, abstract: false, final false
  inline int32_t DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method Reset, addr 0x12208dc, size 0x50, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method ProcessBlock, addr 0x122092c, size 0x150, virtual true, abstract: false, final false
  inline void ProcessBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff);

  /// @brief Method P, addr 0x1220828, size 0xb4, virtual false, abstract: false, final false
  inline void P(::ArrayW<uint64_t, ::Array<uint64_t>*> s);

  /// @brief Method Q, addr 0x1220a7c, size 0xd0, virtual false, abstract: false, final false
  inline void Q(::ArrayW<uint64_t, ::Array<uint64_t>*> s);

  /// @brief Method MixColumn, addr 0x1221230, size 0xb8, virtual false, abstract: false, final false
  static inline uint64_t MixColumn(uint64_t c);

  /// @brief Method MixColumns, addr 0x1221174, size 0xbc, virtual false, abstract: false, final false
  inline void MixColumns(::ArrayW<uint64_t, ::Array<uint64_t>*> s);

  /// @brief Method Rotate, addr 0x12212e8, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t Rotate(int32_t n, uint64_t x);

  /// @brief Method ShiftRows, addr 0x1220b4c, size 0x480, virtual false, abstract: false, final false
  inline void ShiftRows(::ArrayW<uint64_t, ::Array<uint64_t>*> s);

  /// @brief Method SubBytes, addr 0x1220fcc, size 0x1a8, virtual false, abstract: false, final false
  inline void SubBytes(::ArrayW<uint64_t, ::Array<uint64_t>*> s);

  /// @brief Method Copy, addr 0x12212f0, size 0x6c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Utilities::IMemoable* Copy();

  /// @brief Method Reset, addr 0x122135c, size 0x84, virtual true, abstract: false, final false
  inline void Reset(::Org::BouncyCastle::Utilities::IMemoable* other);

  // Ctor Parameters [CppParam { name: "", ty: "Dstu7564Digest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Dstu7564Digest(Dstu7564Digest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Dstu7564Digest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Dstu7564Digest(Dstu7564Digest const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Dstu7564Digest();

public:
  /// @brief Field hashSize, offset: 0x10, size: 0x4, def value: None
  int32_t ___hashSize;

  /// @brief Field blockSize, offset: 0x14, size: 0x4, def value: None
  int32_t ___blockSize;

  /// @brief Field columns, offset: 0x18, size: 0x4, def value: None
  int32_t ___columns;

  /// @brief Field rounds, offset: 0x1c, size: 0x4, def value: None
  int32_t ___rounds;

  /// @brief Field state, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint64_t, ::Array<uint64_t>*> ___state;

  /// @brief Field tempState1, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint64_t, ::Array<uint64_t>*> ___tempState1;

  /// @brief Field tempState2, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint64_t, ::Array<uint64_t>*> ___tempState2;

  /// @brief Field inputBlocks, offset: 0x38, size: 0x8, def value: None
  uint64_t ___inputBlocks;

  /// @brief Field bufOff, offset: 0x40, size: 0x4, def value: None
  int32_t ___bufOff;

  /// @brief Field buf, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___buf;

  /// @brief Field NB_512 offset 0xffffffff size 0x4
  static constexpr int32_t NB_512{ static_cast<int32_t>(0x8) };

  /// @brief Field NB_1024 offset 0xffffffff size 0x4
  static constexpr int32_t NB_1024{ static_cast<int32_t>(0x10) };

  /// @brief Field NR_512 offset 0xffffffff size 0x4
  static constexpr int32_t NR_512{ static_cast<int32_t>(0xa) };

  /// @brief Field NR_1024 offset 0xffffffff size 0x4
  static constexpr int32_t NR_1024{ static_cast<int32_t>(0xe) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Digests::Dstu7564Digest, 0x50>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::Dstu7564Digest, ___hashSize) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::Dstu7564Digest, ___blockSize) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::Dstu7564Digest, ___columns) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::Dstu7564Digest, ___rounds) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::Dstu7564Digest, ___state) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::Dstu7564Digest, ___tempState1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::Dstu7564Digest, ___tempState2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::Dstu7564Digest, ___inputBlocks) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::Dstu7564Digest, ___bufOff) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::Dstu7564Digest, ___buf) == 0x48, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Digests
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Digests::Dstu7564Digest);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Digests::Dstu7564Digest*, "Org.BouncyCastle.Crypto.Digests", "Dstu7564Digest");
