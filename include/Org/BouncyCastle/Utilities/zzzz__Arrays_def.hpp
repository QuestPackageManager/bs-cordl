#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Utilities\Arrays.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
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
MARK_REF_T(::Org::BouncyCastle::Utilities::Arrays*);
DEFINE_IL2CPP_CLASS(::Org::BouncyCastle::Utilities::Arrays*, "Org.BouncyCastle.Utilities", "Arrays");
// Dependencies System.Object
namespace Org::BouncyCastle::Utilities {
// Is value type: false
// CS Name: Org.BouncyCastle.Utilities.Arrays
class CORDL_TYPE Arrays : public ::System::Object {
public:
  // Declarations
  /// @brief Field EmptyBytes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_EmptyBytes, put = setStaticF_EmptyBytes)) ::ArrayW<uint8_t> EmptyBytes;

  /// @brief Field EmptyInts, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_EmptyInts, put = setStaticF_EmptyInts)) ::ArrayW<int32_t> EmptyInts;

  /// @brief Method Append, addr 0x363ca78, size 0xd4, virtual false, abstract: false, final false
  static inline ::ArrayW<int16_t> Append(::ArrayW<int16_t> a, int16_t b);

  /// @brief Method Append, addr 0x363cb4c, size 0xd4, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t> Append(::ArrayW<int32_t> a, int32_t b);

  /// @brief Method Append, addr 0x363c9a4, size 0xd4, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> Append(::ArrayW<uint8_t> a, uint8_t b);

  /// @brief Method AreAllZeroes, addr 0x363ad70, size 0x64, virtual false, abstract: false, final false
  static inline bool AreAllZeroes(::ArrayW<uint8_t> buf, int32_t off, int32_t len);

  /// @brief Method AreEqual, addr 0x363add4, size 0xd0, virtual false, abstract: false, final false
  static inline bool AreEqual(::ArrayW<bool> a, ::ArrayW<bool> b);

  /// @brief Method AreEqual, addr 0x363af14, size 0xc0, virtual false, abstract: false, final false
  static inline bool AreEqual(::ArrayW<char16_t> a, ::ArrayW<char16_t> b);

  /// @brief Method AreEqual, addr 0x363b52c, size 0xc0, virtual false, abstract: false, final false
  static inline bool AreEqual(::ArrayW<int32_t> a, ::ArrayW<int32_t> b);

  /// @brief Method AreEqual, addr 0x363b64c, size 0xc0, virtual false, abstract: false, final false
  static inline bool AreEqual(::ArrayW<uint32_t> a, ::ArrayW<uint32_t> b);

  /// @brief Method AreEqual, addr 0x363b154, size 0xac, virtual false, abstract: false, final false
  static inline bool AreEqual(::ArrayW<uint8_t> a, int32_t aFromIndex, int32_t aToIndex, ::ArrayW<uint8_t> b, int32_t bFromIndex, int32_t bToIndex);

  /// @brief Method AreEqual, addr 0x363b034, size 0xc0, virtual false, abstract: false, final false
  static inline bool AreEqual(::ArrayW<uint8_t> a, ::ArrayW<uint8_t> b);

  /// @brief Method AreSame, addr 0x363b200, size 0x68, virtual false, abstract: false, final false
  static inline bool AreSame(::ArrayW<uint8_t> a, ::ArrayW<uint8_t> b);

  /// @brief Method Clear, addr 0x363d344, size 0x18, virtual false, abstract: false, final false
  static inline void Clear(::ArrayW<int32_t> data);

  /// @brief Method Clear, addr 0x363d32c, size 0x18, virtual false, abstract: false, final false
  static inline void Clear(::ArrayW<uint8_t> data);

  /// @brief Method Clone, addr 0x363bb80, size 0x78, virtual false, abstract: false, final false
  static inline ::ArrayW<bool> Clone(::ArrayW<bool> data);

  /// @brief Method Clone, addr 0x363bc70, size 0x78, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t> Clone(::ArrayW<int32_t> data);

  /// @brief Method Clone, addr 0x363bd60, size 0x78, virtual false, abstract: false, final false
  static inline ::ArrayW<int64_t> Clone(::ArrayW<int64_t> data);

  /// @brief Method Clone, addr 0x363bce8, size 0x78, virtual false, abstract: false, final false
  static inline ::ArrayW<uint32_t> Clone(::ArrayW<uint32_t> data);

  /// @brief Method Clone, addr 0x363bdd8, size 0x78, virtual false, abstract: false, final false
  static inline ::ArrayW<uint64_t> Clone(::ArrayW<uint64_t> data);

  /// @brief Method Clone, addr 0x363bf00, size 0xb0, virtual false, abstract: false, final false
  static inline ::ArrayW<uint64_t> Clone(::ArrayW<uint64_t> data, ::ArrayW<uint64_t> existing);

  /// @brief Method Clone, addr 0x363bbf8, size 0x78, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> Clone(::ArrayW<uint8_t> data);

  /// @brief Method Clone, addr 0x363be50, size 0xb0, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> Clone(::ArrayW<uint8_t> data, ::ArrayW<uint8_t> existing);

  /// @brief Method Concatenate, addr 0x363ce94, size 0x104, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t> Concatenate(::ArrayW<int32_t> a, ::ArrayW<int32_t> b);

  /// @brief Method Concatenate, addr 0x363cc20, size 0x104, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> Concatenate(::ArrayW<uint8_t> a, ::ArrayW<uint8_t> b);

  /// @brief Method ConcatenateAll, addr 0x363cd24, size 0x170, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> ConcatenateAll(::ArrayW<::ArrayW<uint8_t>> vs);

  /// @brief Method ConstantTimeAreEqual, addr 0x363b268, size 0x104, virtual false, abstract: false, final false
  static inline bool ConstantTimeAreEqual(::ArrayW<uint8_t> a, ::ArrayW<uint8_t> b);

  /// @brief Method ConstantTimeAreEqual, addr 0x363b36c, size 0x1c0, virtual false, abstract: false, final false
  static inline bool ConstantTimeAreEqual(int32_t len, ::ArrayW<uint8_t> a, int32_t aOff, ::ArrayW<uint8_t> b, int32_t bOff);

  /// @brief Method Contains, addr 0x363c01c, size 0x6c, virtual false, abstract: false, final false
  static inline bool Contains(::ArrayW<int16_t> a, int16_t n);

  /// @brief Method Contains, addr 0x363c088, size 0x68, virtual false, abstract: false, final false
  static inline bool Contains(::ArrayW<int32_t> a, int32_t n);

  /// @brief Method Contains, addr 0x363bfb0, size 0x6c, virtual false, abstract: false, final false
  static inline bool Contains(::ArrayW<uint8_t> a, uint8_t n);

  /// @brief Method CopyOf, addr 0x363c460, size 0xb8, virtual false, abstract: false, final false
  static inline ::ArrayW<::Org::BouncyCastle::Math::BigInteger*> CopyOf(::ArrayW<::Org::BouncyCastle::Math::BigInteger*> data, int32_t newLength);

  /// @brief Method CopyOf, addr 0x363c238, size 0xb8, virtual false, abstract: false, final false
  static inline ::ArrayW<char16_t> CopyOf(::ArrayW<char16_t> data, int32_t newLength);

  /// @brief Method CopyOf, addr 0x363c2f0, size 0xb8, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t> CopyOf(::ArrayW<int32_t> data, int32_t newLength);

  /// @brief Method CopyOf, addr 0x363c3a8, size 0xb8, virtual false, abstract: false, final false
  static inline ::ArrayW<int64_t> CopyOf(::ArrayW<int64_t> data, int32_t newLength);

  /// @brief Method CopyOf, addr 0x363c180, size 0xb8, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> CopyOf(::ArrayW<uint8_t> data, int32_t newLength);

  /// @brief Method CopyOfRange, addr 0x363c8ac, size 0xf8, virtual false, abstract: false, final false
  static inline ::ArrayW<::Org::BouncyCastle::Math::BigInteger*> CopyOfRange(::ArrayW<::Org::BouncyCastle::Math::BigInteger*> data, int32_t from, int32_t to);

  /// @brief Method CopyOfRange, addr 0x363c6bc, size 0xf8, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t> CopyOfRange(::ArrayW<int32_t> data, int32_t from, int32_t to);

  /// @brief Method CopyOfRange, addr 0x363c7b4, size 0xf8, virtual false, abstract: false, final false
  static inline ::ArrayW<int64_t> CopyOfRange(::ArrayW<int64_t> data, int32_t from, int32_t to);

  /// @brief Method CopyOfRange, addr 0x363c518, size 0xf8, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> CopyOfRange(::ArrayW<uint8_t> data, int32_t from, int32_t to);

  /// @brief Method Fill, addr 0x363c0f0, size 0x44, virtual false, abstract: false, final false
  static inline void Fill(::ArrayW<uint8_t> buf, uint8_t b);

  /// @brief Method Fill, addr 0x363c134, size 0x4c, virtual false, abstract: false, final false
  static inline void Fill(::ArrayW<uint8_t> buf, int32_t from, int32_t to, uint8_t b);

  /// @brief Method GetHashCode, addr 0x363b974, size 0x50, virtual false, abstract: false, final false
  static inline int32_t GetHashCode(::ArrayW<int32_t> data);

  /// @brief Method GetHashCode, addr 0x363b9c4, size 0x58, virtual false, abstract: false, final false
  static inline int32_t GetHashCode(::ArrayW<int32_t> data, int32_t off, int32_t len);

  /// @brief Method GetHashCode, addr 0x363ba1c, size 0x50, virtual false, abstract: false, final false
  static inline int32_t GetHashCode(::ArrayW<uint32_t> data);

  /// @brief Method GetHashCode, addr 0x363ba6c, size 0x58, virtual false, abstract: false, final false
  static inline int32_t GetHashCode(::ArrayW<uint32_t> data, int32_t off, int32_t len);

  /// @brief Method GetHashCode, addr 0x363bac4, size 0x5c, virtual false, abstract: false, final false
  static inline int32_t GetHashCode(::ArrayW<uint64_t> data);

  /// @brief Method GetHashCode, addr 0x363bb20, size 0x60, virtual false, abstract: false, final false
  static inline int32_t GetHashCode(::ArrayW<uint64_t> data, int32_t off, int32_t len);

  /// @brief Method GetHashCode, addr 0x363b8d0, size 0x4c, virtual false, abstract: false, final false
  static inline int32_t GetHashCode(::ArrayW<uint8_t> data);

  /// @brief Method GetHashCode, addr 0x363b91c, size 0x58, virtual false, abstract: false, final false
  static inline int32_t GetHashCode(::ArrayW<uint8_t> data, int32_t off, int32_t len);

  /// @brief Method GetLength, addr 0x363c610, size 0xac, virtual false, abstract: false, final false
  static inline int32_t GetLength(int32_t from, int32_t to);

  /// @brief Method HaveSameContents, addr 0x363aea4, size 0x70, virtual false, abstract: false, final false
  static inline bool HaveSameContents(::ArrayW<bool> a, ::ArrayW<bool> b);

  /// @brief Method HaveSameContents, addr 0x363afd4, size 0x60, virtual false, abstract: false, final false
  static inline bool HaveSameContents(::ArrayW<char16_t> a, ::ArrayW<char16_t> b);

  /// @brief Method HaveSameContents, addr 0x363b5ec, size 0x60, virtual false, abstract: false, final false
  static inline bool HaveSameContents(::ArrayW<int32_t> a, ::ArrayW<int32_t> b);

  /// @brief Method HaveSameContents, addr 0x363b70c, size 0x60, virtual false, abstract: false, final false
  static inline bool HaveSameContents(::ArrayW<uint32_t> a, ::ArrayW<uint32_t> b);

  /// @brief Method HaveSameContents, addr 0x363b0f4, size 0x60, virtual false, abstract: false, final false
  static inline bool HaveSameContents(::ArrayW<uint8_t> a, ::ArrayW<uint8_t> b);

  /// @brief Method IsNullOrContainsNull, addr 0x363d35c, size 0x4c, virtual false, abstract: false, final false
  static inline bool IsNullOrContainsNull(::ArrayW<::System::Object*> array);

  /// @brief Method IsNullOrEmpty, addr 0x363d3c4, size 0x1c, virtual false, abstract: false, final false
  static inline bool IsNullOrEmpty(::ArrayW<::System::Object*> array);

  /// @brief Method IsNullOrEmpty, addr 0x363d3a8, size 0x1c, virtual false, abstract: false, final false
  static inline bool IsNullOrEmpty(::ArrayW<uint8_t> array);

  static inline ::Org::BouncyCastle::Utilities::Arrays* New_ctor();

  /// @brief Method Prepend, addr 0x363d054, size 0xbc, virtual false, abstract: false, final false
  static inline ::ArrayW<int16_t> Prepend(::ArrayW<int16_t> a, int16_t b);

  /// @brief Method Prepend, addr 0x363d110, size 0xbc, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t> Prepend(::ArrayW<int32_t> a, int32_t b);

  /// @brief Method Prepend, addr 0x363cf98, size 0xbc, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> Prepend(::ArrayW<uint8_t> a, uint8_t b);

  /// @brief Method Reverse, addr 0x363d27c, size 0xb0, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t> Reverse(::ArrayW<int32_t> a);

  /// @brief Method Reverse, addr 0x363d1cc, size 0xb0, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> Reverse(::ArrayW<uint8_t> a);

  /// @brief Method ToString, addr 0x363b76c, size 0x164, virtual false, abstract: false, final false
  static inline ::StringW ToString(::ArrayW<::System::Object*> a);

  /// @brief Method .ctor, addr 0x363d480, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<uint8_t> getStaticF_EmptyBytes();

  static inline ::ArrayW<int32_t> getStaticF_EmptyInts();

  static inline void setStaticF_EmptyBytes(::ArrayW<uint8_t> value);

  static inline void setStaticF_EmptyInts(::ArrayW<int32_t> value);

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1831 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Org::BouncyCastle::Utilities::Arrays) == 0x10, "Size mismatch!");

} // namespace Org::BouncyCastle::Utilities
