#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Utilities/Arrays.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Arrays)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities {
class Arrays;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::Arrays);
// Type: Org.BouncyCastle.Utilities::Arrays
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Utilities {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Utilities::Arrays*
class CORDL_TYPE Arrays : public ::System::Object {
public:
  // Declarations
  /// @brief Field EmptyBytes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_EmptyBytes, put = setStaticF_EmptyBytes))::ArrayW<uint8_t, ::Array<uint8_t>*> EmptyBytes;

  /// @brief Field EmptyInts, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_EmptyInts, put = setStaticF_EmptyInts))::ArrayW<int32_t, ::Array<int32_t>*> EmptyInts;

  /// @brief Method Append, addr 0x13debe0, size 0xd0, virtual false, abstract: false, final false
  static inline ::ArrayW<int16_t, ::Array<int16_t>*> Append(::ArrayW<int16_t, ::Array<int16_t>*> a, int16_t b);

  /// @brief Method Append, addr 0x13decb0, size 0xd0, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> Append(::ArrayW<int32_t, ::Array<int32_t>*> a, int32_t b);

  /// @brief Method Append, addr 0x13deb10, size 0xd0, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Append(::ArrayW<uint8_t, ::Array<uint8_t>*> a, uint8_t b);

  /// @brief Method AreAllZeroes, addr 0x13dd098, size 0x6c, virtual false, abstract: false, final false
  static inline bool AreAllZeroes(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off, int32_t len);

  /// @brief Method AreEqual, addr 0x13dd104, size 0x80, virtual false, abstract: false, final false
  static inline bool AreEqual(::ArrayW<bool, ::Array<bool>*> a, ::ArrayW<bool, ::Array<bool>*> b);

  /// @brief Method AreEqual, addr 0x13dd200, size 0x80, virtual false, abstract: false, final false
  static inline bool AreEqual(::ArrayW<char16_t, ::Array<char16_t>*> a, ::ArrayW<char16_t, ::Array<char16_t>*> b);

  /// @brief Method AreEqual, addr 0x13dd7a4, size 0x80, virtual false, abstract: false, final false
  static inline bool AreEqual(::ArrayW<int32_t, ::Array<int32_t>*> a, ::ArrayW<int32_t, ::Array<int32_t>*> b);

  /// @brief Method AreEqual, addr 0x13dd890, size 0x80, virtual false, abstract: false, final false
  static inline bool AreEqual(::ArrayW<uint32_t, ::Array<uint32_t>*> a, ::ArrayW<uint32_t, ::Array<uint32_t>*> b);

  /// @brief Method AreEqual, addr 0x13dd3d8, size 0x94, virtual false, abstract: false, final false
  static inline bool AreEqual(::ArrayW<uint8_t, ::Array<uint8_t>*> a, int32_t aFromIndex, int32_t aToIndex, ::ArrayW<uint8_t, ::Array<uint8_t>*> b, int32_t bFromIndex, int32_t bToIndex);

  /// @brief Method AreEqual, addr 0x13dd2ec, size 0x80, virtual false, abstract: false, final false
  static inline bool AreEqual(::ArrayW<uint8_t, ::Array<uint8_t>*> a, ::ArrayW<uint8_t, ::Array<uint8_t>*> b);

  /// @brief Method AreSame, addr 0x13dd46c, size 0x64, virtual false, abstract: false, final false
  static inline bool AreSame(::ArrayW<uint8_t, ::Array<uint8_t>*> a, ::ArrayW<uint8_t, ::Array<uint8_t>*> b);

  /// @brief Method Clear, addr 0x13df488, size 0x18, virtual false, abstract: false, final false
  static inline void Clear(::ArrayW<int32_t, ::Array<int32_t>*> data);

  /// @brief Method Clear, addr 0x13df470, size 0x18, virtual false, abstract: false, final false
  static inline void Clear(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method Clone, addr 0x13ddd40, size 0x78, virtual false, abstract: false, final false
  static inline ::ArrayW<bool, ::Array<bool>*> Clone(::ArrayW<bool, ::Array<bool>*> data);

  /// @brief Method Clone, addr 0x13dde30, size 0x78, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> Clone(::ArrayW<int32_t, ::Array<int32_t>*> data);

  /// @brief Method Clone, addr 0x13ddf20, size 0x78, virtual false, abstract: false, final false
  static inline ::ArrayW<int64_t, ::Array<int64_t>*> Clone(::ArrayW<int64_t, ::Array<int64_t>*> data);

  /// @brief Method Clone, addr 0x13ddea8, size 0x78, virtual false, abstract: false, final false
  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> Clone(::ArrayW<uint32_t, ::Array<uint32_t>*> data);

  /// @brief Method Clone, addr 0x13ddf98, size 0x78, virtual false, abstract: false, final false
  static inline ::ArrayW<uint64_t, ::Array<uint64_t>*> Clone(::ArrayW<uint64_t, ::Array<uint64_t>*> data);

  /// @brief Method Clone, addr 0x13de0b0, size 0xa0, virtual false, abstract: false, final false
  static inline ::ArrayW<uint64_t, ::Array<uint64_t>*> Clone(::ArrayW<uint64_t, ::Array<uint64_t>*> data, ::ArrayW<uint64_t, ::Array<uint64_t>*> existing);

  /// @brief Method Clone, addr 0x13dddb8, size 0x78, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Clone(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method Clone, addr 0x13de010, size 0xa0, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Clone(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::ArrayW<uint8_t, ::Array<uint8_t>*> existing);

  /// @brief Method Concatenate, addr 0x13df008, size 0xec, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> Concatenate(::ArrayW<int32_t, ::Array<int32_t>*> a, ::ArrayW<int32_t, ::Array<int32_t>*> b);

  /// @brief Method Concatenate, addr 0x13ded80, size 0xec, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Concatenate(::ArrayW<uint8_t, ::Array<uint8_t>*> a, ::ArrayW<uint8_t, ::Array<uint8_t>*> b);

  /// @brief Method ConcatenateAll, addr 0x13dee6c, size 0x19c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ConcatenateAll(::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> vs);

  /// @brief Method ConstantTimeAreEqual, addr 0x13dd4d0, size 0xfc, virtual false, abstract: false, final false
  static inline bool ConstantTimeAreEqual(::ArrayW<uint8_t, ::Array<uint8_t>*> a, ::ArrayW<uint8_t, ::Array<uint8_t>*> b);

  /// @brief Method ConstantTimeAreEqual, addr 0x13dd5cc, size 0x1d8, virtual false, abstract: false, final false
  static inline bool ConstantTimeAreEqual(int32_t len, ::ArrayW<uint8_t, ::Array<uint8_t>*> a, int32_t aOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> b, int32_t bOff);

  /// @brief Method Contains, addr 0x13de19c, size 0x4c, virtual false, abstract: false, final false
  static inline bool Contains(::ArrayW<int16_t, ::Array<int16_t>*> a, int16_t n);

  /// @brief Method Contains, addr 0x13de1e8, size 0x4c, virtual false, abstract: false, final false
  static inline bool Contains(::ArrayW<int32_t, ::Array<int32_t>*> a, int32_t n);

  /// @brief Method Contains, addr 0x13de150, size 0x4c, virtual false, abstract: false, final false
  static inline bool Contains(::ArrayW<uint8_t, ::Array<uint8_t>*> a, uint8_t n);

  /// @brief Method CopyOf, addr 0x13de5bc, size 0xb8, virtual false, abstract: false, final false
  static inline ::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*>
  CopyOf(::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> data, int32_t newLength);

  /// @brief Method CopyOf, addr 0x13de394, size 0xb8, virtual false, abstract: false, final false
  static inline ::ArrayW<char16_t, ::Array<char16_t>*> CopyOf(::ArrayW<char16_t, ::Array<char16_t>*> data, int32_t newLength);

  /// @brief Method CopyOf, addr 0x13de44c, size 0xb8, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> CopyOf(::ArrayW<int32_t, ::Array<int32_t>*> data, int32_t newLength);

  /// @brief Method CopyOf, addr 0x13de504, size 0xb8, virtual false, abstract: false, final false
  static inline ::ArrayW<int64_t, ::Array<int64_t>*> CopyOf(::ArrayW<int64_t, ::Array<int64_t>*> data, int32_t newLength);

  /// @brief Method CopyOf, addr 0x13de2dc, size 0xb8, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CopyOf(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t newLength);

  /// @brief Method CopyOfRange, addr 0x13dea18, size 0xf8, virtual false, abstract: false, final false
  static inline ::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*>
  CopyOfRange(::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> data, int32_t from, int32_t to);

  /// @brief Method CopyOfRange, addr 0x13de828, size 0xf8, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> CopyOfRange(::ArrayW<int32_t, ::Array<int32_t>*> data, int32_t from, int32_t to);

  /// @brief Method CopyOfRange, addr 0x13de920, size 0xf8, virtual false, abstract: false, final false
  static inline ::ArrayW<int64_t, ::Array<int64_t>*> CopyOfRange(::ArrayW<int64_t, ::Array<int64_t>*> data, int32_t from, int32_t to);

  /// @brief Method CopyOfRange, addr 0x13de674, size 0xf8, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CopyOfRange(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t from, int32_t to);

  /// @brief Method Fill, addr 0x13de234, size 0x5c, virtual false, abstract: false, final false
  static inline void Fill(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, uint8_t b);

  /// @brief Method Fill, addr 0x13de290, size 0x4c, virtual false, abstract: false, final false
  static inline void Fill(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t from, int32_t to, uint8_t b);

  /// @brief Method GetHashCode, addr 0x13ddb40, size 0x50, virtual false, abstract: false, final false
  static inline int32_t GetHashCode(::ArrayW<int32_t, ::Array<int32_t>*> data);

  /// @brief Method GetHashCode, addr 0x13ddb90, size 0x54, virtual false, abstract: false, final false
  static inline int32_t GetHashCode(::ArrayW<int32_t, ::Array<int32_t>*> data, int32_t off, int32_t len);

  /// @brief Method GetHashCode, addr 0x13ddbe4, size 0x50, virtual false, abstract: false, final false
  static inline int32_t GetHashCode(::ArrayW<uint32_t, ::Array<uint32_t>*> data);

  /// @brief Method GetHashCode, addr 0x13ddc34, size 0x54, virtual false, abstract: false, final false
  static inline int32_t GetHashCode(::ArrayW<uint32_t, ::Array<uint32_t>*> data, int32_t off, int32_t len);

  /// @brief Method GetHashCode, addr 0x13ddc88, size 0x5c, virtual false, abstract: false, final false
  static inline int32_t GetHashCode(::ArrayW<uint64_t, ::Array<uint64_t>*> data);

  /// @brief Method GetHashCode, addr 0x13ddce4, size 0x5c, virtual false, abstract: false, final false
  static inline int32_t GetHashCode(::ArrayW<uint64_t, ::Array<uint64_t>*> data, int32_t off, int32_t len);

  /// @brief Method GetHashCode, addr 0x13dda9c, size 0x50, virtual false, abstract: false, final false
  static inline int32_t GetHashCode(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method GetHashCode, addr 0x13ddaec, size 0x54, virtual false, abstract: false, final false
  static inline int32_t GetHashCode(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t off, int32_t len);

  /// @brief Method GetLength, addr 0x13de76c, size 0xbc, virtual false, abstract: false, final false
  static inline int32_t GetLength(int32_t from, int32_t to);

  /// @brief Method HaveSameContents, addr 0x13dd184, size 0x7c, virtual false, abstract: false, final false
  static inline bool HaveSameContents(::ArrayW<bool, ::Array<bool>*> a, ::ArrayW<bool, ::Array<bool>*> b);

  /// @brief Method HaveSameContents, addr 0x13dd280, size 0x6c, virtual false, abstract: false, final false
  static inline bool HaveSameContents(::ArrayW<char16_t, ::Array<char16_t>*> a, ::ArrayW<char16_t, ::Array<char16_t>*> b);

  /// @brief Method HaveSameContents, addr 0x13dd824, size 0x6c, virtual false, abstract: false, final false
  static inline bool HaveSameContents(::ArrayW<int32_t, ::Array<int32_t>*> a, ::ArrayW<int32_t, ::Array<int32_t>*> b);

  /// @brief Method HaveSameContents, addr 0x13dd910, size 0x6c, virtual false, abstract: false, final false
  static inline bool HaveSameContents(::ArrayW<uint32_t, ::Array<uint32_t>*> a, ::ArrayW<uint32_t, ::Array<uint32_t>*> b);

  /// @brief Method HaveSameContents, addr 0x13dd36c, size 0x6c, virtual false, abstract: false, final false
  static inline bool HaveSameContents(::ArrayW<uint8_t, ::Array<uint8_t>*> a, ::ArrayW<uint8_t, ::Array<uint8_t>*> b);

  /// @brief Method IsNullOrContainsNull, addr 0x13df4a0, size 0x3c, virtual false, abstract: false, final false
  static inline bool IsNullOrContainsNull(::ArrayW<::System::Object*, ::Array<::System::Object*>*> array);

  /// @brief Method IsNullOrEmpty, addr 0x13df4f8, size 0x1c, virtual false, abstract: false, final false
  static inline bool IsNullOrEmpty(::ArrayW<::System::Object*, ::Array<::System::Object*>*> array);

  /// @brief Method IsNullOrEmpty, addr 0x13df4dc, size 0x1c, virtual false, abstract: false, final false
  static inline bool IsNullOrEmpty(::ArrayW<uint8_t, ::Array<uint8_t>*> array);

  static inline ::Org::BouncyCastle::Utilities::Arrays* New_ctor();

  /// @brief Method Prepend, addr 0x13df1a8, size 0xb4, virtual false, abstract: false, final false
  static inline ::ArrayW<int16_t, ::Array<int16_t>*> Prepend(::ArrayW<int16_t, ::Array<int16_t>*> a, int16_t b);

  /// @brief Method Prepend, addr 0x13df25c, size 0xb4, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> Prepend(::ArrayW<int32_t, ::Array<int32_t>*> a, int32_t b);

  /// @brief Method Prepend, addr 0x13df0f4, size 0xb4, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Prepend(::ArrayW<uint8_t, ::Array<uint8_t>*> a, uint8_t b);

  /// @brief Method Reverse, addr 0x13df3c0, size 0xb0, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> Reverse(::ArrayW<int32_t, ::Array<int32_t>*> a);

  /// @brief Method Reverse, addr 0x13df310, size 0xb0, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Reverse(::ArrayW<uint8_t, ::Array<uint8_t>*> a);

  /// @brief Method ToString, addr 0x13dd97c, size 0x120, virtual false, abstract: false, final false
  static inline ::StringW ToString(::ArrayW<::System::Object*, ::Array<::System::Object*>*> a);

  /// @brief Method .ctor, addr 0x13df5b0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_EmptyBytes();

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_EmptyInts();

  static inline void setStaticF_EmptyBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_EmptyInts(::ArrayW<int32_t, ::Array<int32_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Arrays();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Arrays", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Arrays(Arrays&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Arrays", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Arrays(Arrays const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::Arrays, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Utilities
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Arrays);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Arrays*, "Org.BouncyCastle.Utilities", "Arrays");
