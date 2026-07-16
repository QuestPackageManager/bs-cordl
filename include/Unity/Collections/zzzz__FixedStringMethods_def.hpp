#pragma once
// IWYU pragma private; include "Unity/Collections/FixedStringMethods.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FixedStringMethods)
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
namespace Unity::Collections::LowLevel::Unsafe {
struct UnsafeText;
}
namespace Unity::Collections {
struct AllocatorManager_AllocatorHandle;
}
namespace Unity::Collections {
struct CopyError;
}
namespace Unity::Collections {
struct FormatError;
}
namespace Unity::Collections {
struct NativeText;
}
namespace Unity::Collections {
struct ParseError;
}
namespace Unity::Collections {
struct Unicode_Rune;
}
// Forward declare root types
namespace Unity::Collections {
class FixedStringMethods;
}
// Write type traits
MARK_REF_T(::Unity::Collections::FixedStringMethods*);
DEFINE_IL2CPP_CLASS(::Unity::Collections::FixedStringMethods*, "Unity.Collections", "FixedStringMethods");
// Dependencies System.Object
namespace Unity::Collections {
// Is value type: false
// CS Name: Unity.Collections.FixedStringMethods
class CORDL_TYPE FixedStringMethods : public ::System::Object {
public:
  // Declarations
  /// @brief Method Append, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::Unity::Collections::FormatError Append(::by_ref<T> fs, char16_t a, char16_t b);

  /// @brief Method Append, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::Unity::Collections::FormatError Append(::by_ref<T> fs, char16_t a, char16_t b, char16_t c);

  /// @brief Method Append, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::Unity::Collections::FormatError Append(::by_ref<T> fs, char16_t a, char16_t b, char16_t c, char16_t d, char16_t e, char16_t f, char16_t g, char16_t h);

  /// @brief Method Append, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::Unity::Collections::FormatError Append(::by_ref<T> fs, char16_t ch);

  /// @brief Method Append, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename T2> static inline ::Unity::Collections::FormatError Append(::by_ref<T> fs, ::by_ref<T2> input);

  /// @brief Method Append, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::Unity::Collections::FormatError Append(::by_ref<T> fs, float_t input, char16_t decimalSeparator);

  /// @brief Method Append, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::Unity::Collections::FormatError Append(::by_ref<T> fs, int32_t input);

  /// @brief Method Append, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::Unity::Collections::FormatError Append(::by_ref<T> fs, int64_t input);

  /// @brief Method Append, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::Unity::Collections::FormatError Append(::by_ref<T> fs, uint32_t input);

  /// @brief Method Append, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::Unity::Collections::FormatError Append(::by_ref<T> fs, uint64_t input);

  /// @brief Method Append, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::Unity::Collections::FormatError Append(::by_ref<T> fs, ::Unity::Collections::Unicode_Rune rune);

  /// @brief Method Append, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::Unity::Collections::FormatError Append(::by_ref<T> fs, ::Unity::Collections::Unicode_Rune rune, int32_t count);

  /// @brief Method Append, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::Unity::Collections::FormatError Append(::by_ref<T> fs, ::StringW s);

  /// @brief Method Append, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::Unity::Collections::FormatError Append(::by_ref<T> fs, uint8_t* utf8Bytes, int32_t utf8BytesLength);

  /// @brief Method AppendFormat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U, typename T0> static inline ::Unity::Collections::FormatError AppendFormat(::by_ref<T> dest, ::by_ref<U> format, ::by_ref<T0> arg0);

  /// @brief Method AppendFormat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U, typename T0, typename T1> static inline ::Unity::Collections::FormatError AppendFormat(::by_ref<T> dest, ::by_ref<U> format, ::by_ref<T0> arg0, ::by_ref<T1> arg1);

  /// @brief Method AppendFormat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U, typename T0, typename T1, typename T2>
  static inline ::Unity::Collections::FormatError AppendFormat(::by_ref<T> dest, ::by_ref<U> format, ::by_ref<T0> arg0, ::by_ref<T1> arg1, ::by_ref<T2> arg2);

  /// @brief Method AppendFormat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U, typename T0, typename T1, typename T2, typename T3>
  static inline ::Unity::Collections::FormatError AppendFormat(::by_ref<T> dest, ::by_ref<U> format, ::by_ref<T0> arg0, ::by_ref<T1> arg1, ::by_ref<T2> arg2, ::by_ref<T3> arg3);

  /// @brief Method AppendFormat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U, typename T0, typename T1, typename T2, typename T3, typename T4>
  static inline ::Unity::Collections::FormatError AppendFormat(::by_ref<T> dest, ::by_ref<U> format, ::by_ref<T0> arg0, ::by_ref<T1> arg1, ::by_ref<T2> arg2, ::by_ref<T3> arg3, ::by_ref<T4> arg4);

  /// @brief Method AppendFormat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5>
  static inline ::Unity::Collections::FormatError AppendFormat(::by_ref<T> dest, ::by_ref<U> format, ::by_ref<T0> arg0, ::by_ref<T1> arg1, ::by_ref<T2> arg2, ::by_ref<T3> arg3, ::by_ref<T4> arg4,
                                                               ::by_ref<T5> arg5);

  /// @brief Method AppendFormat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
  static inline ::Unity::Collections::FormatError AppendFormat(::by_ref<T> dest, ::by_ref<U> format, ::by_ref<T0> arg0, ::by_ref<T1> arg1, ::by_ref<T2> arg2, ::by_ref<T3> arg3, ::by_ref<T4> arg4,
                                                               ::by_ref<T5> arg5, ::by_ref<T6> arg6);

  /// @brief Method AppendFormat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
  static inline ::Unity::Collections::FormatError AppendFormat(::by_ref<T> dest, ::by_ref<U> format, ::by_ref<T0> arg0, ::by_ref<T1> arg1, ::by_ref<T2> arg2, ::by_ref<T3> arg3, ::by_ref<T4> arg4,
                                                               ::by_ref<T5> arg5, ::by_ref<T6> arg6, ::by_ref<T7> arg7);

  /// @brief Method AppendFormat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
  static inline ::Unity::Collections::FormatError AppendFormat(::by_ref<T> dest, ::by_ref<U> format, ::by_ref<T0> arg0, ::by_ref<T1> arg1, ::by_ref<T2> arg2, ::by_ref<T3> arg3, ::by_ref<T4> arg4,
                                                               ::by_ref<T5> arg5, ::by_ref<T6> arg6, ::by_ref<T7> arg7, ::by_ref<T8> arg8);

  /// @brief Method AppendFormat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
  static inline ::Unity::Collections::FormatError AppendFormat(::by_ref<T> dest, ::by_ref<U> format, ::by_ref<T0> arg0, ::by_ref<T1> arg1, ::by_ref<T2> arg2, ::by_ref<T3> arg3, ::by_ref<T4> arg4,
                                                               ::by_ref<T5> arg5, ::by_ref<T6> arg6, ::by_ref<T7> arg7, ::by_ref<T8> arg8, ::by_ref<T9> arg9);

  /// @brief Method AppendRawByte, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::Unity::Collections::FormatError AppendRawByte(::by_ref<T> fs, uint8_t a);

  /// @brief Method AppendScientific, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::Unity::Collections::FormatError AppendScientific(::by_ref<T> fs, char16_t* source, int32_t sourceLength, int32_t decimalExponent, char16_t decimalSeparator);

  /// @brief Method CheckSubstringInRange, addr 0x64aff00, size 0x110, virtual false, abstract: false, final false
  static inline void CheckSubstringInRange(int32_t strLength, int32_t startIndex, int32_t length);

  /// @brief Method CompareTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t CompareTo(::by_ref<T> fs, uint8_t* bytes, int32_t bytesLen);

  /// @brief Method CompareTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename T2> static inline int32_t CompareTo(::by_ref<T> fs, ::by_ref<T2> other);

  /// @brief Method ComputeHashCode, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t ComputeHashCode(::by_ref<T> fs);

  /// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename T2> static inline bool Contains(::by_ref<T> fs, ::by_ref<T2> other);

  /// @brief Method ConvertToString, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::StringW ConvertToString(::by_ref<T> fs);

  /// @brief Method CopyFrom, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename T2> static inline ::Unity::Collections::CopyError CopyFrom(::by_ref<T> fs, ::by_ref<T2> input);

  /// @brief Method CopyFrom, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::Unity::Collections::CopyError CopyFrom(::by_ref<T> fs, ::StringW s);

  /// @brief Method CopyFromTruncated, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename T2> static inline ::Unity::Collections::CopyError CopyFromTruncated(::by_ref<T> fs, ::by_ref<T2> input);

  /// @brief Method CopyFromTruncated, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::Unity::Collections::CopyError CopyFromTruncated(::by_ref<T> fs, ::StringW s);

  /// @brief Method EffectiveSizeOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t EffectiveSizeOf(::by_ref<T> fs);

  /// @brief Method EndsWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U> static inline bool EndsWith(::by_ref<T> fs, ::by_ref<U> other);

  /// @brief Method EndsWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool EndsWith(::by_ref<T> fs, ::Unity::Collections::Unicode_Rune rune);

  /// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool Equals(::by_ref<T> fs, uint8_t* bytes, int32_t bytesLen);

  /// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename T2> static inline bool Equals(::by_ref<T> fs, ::by_ref<T2> other);

  /// @brief Method Found, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool Found(::by_ref<T> fs, ::by_ref<int32_t> offset, char16_t a, char16_t b, char16_t c);

  /// @brief Method Found, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool Found(::by_ref<T> fs, ::by_ref<int32_t> offset, char16_t a, char16_t b, char16_t c, char16_t d, char16_t e, char16_t f, char16_t g, char16_t h);

  /// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t IndexOf(::by_ref<T> fs, uint8_t* bytes, int32_t bytesLen);

  /// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t IndexOf(::by_ref<T> fs, uint8_t* bytes, int32_t bytesLen, int32_t startIndex, int32_t distance);

  /// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename T2> static inline int32_t IndexOf(::by_ref<T> fs, ::by_ref<T2> other);

  /// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename T2> static inline int32_t IndexOf(::by_ref<T> fs, ::by_ref<T2> other, int32_t startIndex, int32_t distance);

  /// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t IndexOf(::by_ref<T> fs, ::Unity::Collections::Unicode_Rune rune);

  /// @brief Method LastIndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t LastIndexOf(::by_ref<T> fs, uint8_t* bytes, int32_t bytesLen);

  /// @brief Method LastIndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t LastIndexOf(::by_ref<T> fs, uint8_t* bytes, int32_t bytesLen, int32_t startIndex, int32_t distance);

  /// @brief Method LastIndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename T2> static inline int32_t LastIndexOf(::by_ref<T> fs, ::by_ref<T2> other);

  /// @brief Method LastIndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename T2> static inline int32_t LastIndexOf(::by_ref<T> fs, ::by_ref<T2> other, int32_t startIndex, int32_t distance);

  /// @brief Method LastIndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t LastIndexOf(::by_ref<T> fs, ::Unity::Collections::Unicode_Rune rune);

  /// @brief Method Parse, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::Unity::Collections::ParseError Parse(::by_ref<T> fs, ::by_ref<int32_t> offset, ::by_ref<float_t> output, char16_t decimalSeparator);

  /// @brief Method Parse, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::Unity::Collections::ParseError Parse(::by_ref<T> fs, ::by_ref<int32_t> offset, ::by_ref<int32_t> output);

  /// @brief Method Parse, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::Unity::Collections::ParseError Parse(::by_ref<T> fs, ::by_ref<int32_t> offset, ::by_ref<uint32_t> output);

  /// @brief Method ParseLongInternal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool ParseLongInternal(::by_ref<T> fs, ::by_ref<int32_t> offset, ::by_ref<int64_t> value);

  /// @brief Method Peek, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::Unity::Collections::Unicode_Rune Peek(::by_ref<T> fs, int32_t index);

  /// @brief Method Read, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::Unity::Collections::Unicode_Rune Read(::by_ref<T> fs, ::by_ref<int32_t> index);

  /// @brief Method StartsWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U> static inline bool StartsWith(::by_ref<T> fs, ::by_ref<U> other);

  /// @brief Method StartsWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool StartsWith(::by_ref<T> fs, ::Unity::Collections::Unicode_Rune rune);

  /// @brief Method Substring, addr 0x64b01e0, size 0x8c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::NativeText Substring(::by_ref<::Unity::Collections::NativeText> str, int32_t startIndex);

  /// @brief Method Substring, addr 0x64b013c, size 0x8c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::NativeText Substring(::by_ref<::Unity::Collections::NativeText> str, int32_t startIndex, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// @brief Method Substring, addr 0x64b01c8, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Collections::NativeText Substring(::by_ref<::Unity::Collections::NativeText> str, int32_t startIndex, int32_t length);

  /// @brief Method Substring, addr 0x64b0010, size 0x12c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::NativeText Substring(::by_ref<::Unity::Collections::NativeText> str, int32_t startIndex, int32_t length,
                                                           ::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// @brief Method Substring, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T Substring(::by_ref<T> str, int32_t startIndex);

  /// @brief Method Substring, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T Substring(::by_ref<T> str, int32_t startIndex, int32_t length);

  /// @brief Method ToLowerAscii, addr 0x64b1134, size 0x144, virtual false, abstract: false, final false
  static inline ::Unity::Collections::LowLevel::Unsafe::UnsafeText ToLowerAscii(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeText> fs,
                                                                                ::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// @brief Method ToLowerAscii, addr 0x64b1278, size 0x158, virtual false, abstract: false, final false
  static inline ::Unity::Collections::NativeText ToLowerAscii(::by_ref<::Unity::Collections::NativeText> fs, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// @brief Method ToLowerAscii, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T ToLowerAscii(::by_ref<T> fs);

  /// @brief Method ToUpperAscii, addr 0x64b13d0, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Collections::LowLevel::Unsafe::UnsafeText ToUpperAscii(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeText> fs,
                                                                                ::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// @brief Method ToUpperAscii, addr 0x64b1518, size 0x15c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::NativeText ToUpperAscii(::by_ref<::Unity::Collections::NativeText> fs, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// @brief Method ToUpperAscii, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T ToUpperAscii(::by_ref<T> fs);

  /// @brief Method Trim, addr 0x64b0aac, size 0x188, virtual false, abstract: false, final false
  static inline ::Unity::Collections::LowLevel::Unsafe::UnsafeText Trim(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeText> fs,
                                                                        ::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// @brief Method Trim, addr 0x64b0de0, size 0x198, virtual false, abstract: false, final false
  static inline ::Unity::Collections::LowLevel::Unsafe::UnsafeText Trim(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeText> fs,
                                                                        ::Unity::Collections::AllocatorManager_AllocatorHandle allocator,
                                                                        ::System::ReadOnlySpan_1<::Unity::Collections::Unicode_Rune> trimRunes);

  /// @brief Method Trim, addr 0x64b0c34, size 0x1ac, virtual false, abstract: false, final false
  static inline ::Unity::Collections::NativeText Trim(::by_ref<::Unity::Collections::NativeText> fs, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// @brief Method Trim, addr 0x64b0f78, size 0x1bc, virtual false, abstract: false, final false
  static inline ::Unity::Collections::NativeText Trim(::by_ref<::Unity::Collections::NativeText> fs, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator,
                                                      ::System::ReadOnlySpan_1<::Unity::Collections::Unicode_Rune> trimRunes);

  /// @brief Method Trim, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T Trim(::by_ref<T> fs);

  /// @brief Method Trim, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T Trim(::by_ref<T> fs, ::System::ReadOnlySpan_1<::Unity::Collections::Unicode_Rune> trimRunes);

  /// @brief Method TrimEnd, addr 0x64b0754, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Collections::LowLevel::Unsafe::UnsafeText TrimEnd(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeText> fs,
                                                                           ::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// @brief Method TrimEnd, addr 0x64b08e8, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Collections::LowLevel::Unsafe::UnsafeText TrimEnd(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeText> fs,
                                                                           ::Unity::Collections::AllocatorManager_AllocatorHandle allocator,
                                                                           ::System::ReadOnlySpan_1<::Unity::Collections::Unicode_Rune> trimRunes);

  /// @brief Method TrimEnd, addr 0x64b0818, size 0xd0, virtual false, abstract: false, final false
  static inline ::Unity::Collections::NativeText TrimEnd(::by_ref<::Unity::Collections::NativeText> fs, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// @brief Method TrimEnd, addr 0x64b09c4, size 0xe8, virtual false, abstract: false, final false
  static inline ::Unity::Collections::NativeText TrimEnd(::by_ref<::Unity::Collections::NativeText> fs, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator,
                                                         ::System::ReadOnlySpan_1<::Unity::Collections::Unicode_Rune> trimRunes);

  /// @brief Method TrimEnd, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T TrimEnd(::by_ref<T> fs);

  /// @brief Method TrimEnd, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T TrimEnd(::by_ref<T> fs, ::System::ReadOnlySpan_1<::Unity::Collections::Unicode_Rune> trimRunes);

  /// @brief Method TrimEndIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t TrimEndIndex(::by_ref<T> fs);

  /// @brief Method TrimEndIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t TrimEndIndex(::by_ref<T> fs, ::System::ReadOnlySpan_1<::Unity::Collections::Unicode_Rune> trimRunes);

  /// @brief Method TrimStart, addr 0x64b026c, size 0x128, virtual false, abstract: false, final false
  static inline ::Unity::Collections::LowLevel::Unsafe::UnsafeText TrimStart(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeText> fs,
                                                                             ::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// @brief Method TrimStart, addr 0x64b04d0, size 0x138, virtual false, abstract: false, final false
  static inline ::Unity::Collections::LowLevel::Unsafe::UnsafeText TrimStart(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeText> fs,
                                                                             ::Unity::Collections::AllocatorManager_AllocatorHandle allocator,
                                                                             ::System::ReadOnlySpan_1<::Unity::Collections::Unicode_Rune> trimRunes);

  /// @brief Method TrimStart, addr 0x64b0394, size 0x13c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::NativeText TrimStart(::by_ref<::Unity::Collections::NativeText> fs, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// @brief Method TrimStart, addr 0x64b0608, size 0x14c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::NativeText TrimStart(::by_ref<::Unity::Collections::NativeText> fs, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator,
                                                           ::System::ReadOnlySpan_1<::Unity::Collections::Unicode_Rune> trimRunes);

  /// @brief Method TrimStart, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T TrimStart(::by_ref<T> fs);

  /// @brief Method TrimStart, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T TrimStart(::by_ref<T> fs, ::System::ReadOnlySpan_1<::Unity::Collections::Unicode_Rune> trimRunes);

  /// @brief Method TrimStartIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t TrimStartIndex(::by_ref<T> fs);

  /// @brief Method TrimStartIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t TrimStartIndex(::by_ref<T> fs, ::System::ReadOnlySpan_1<::Unity::Collections::Unicode_Rune> trimRunes);

  /// @brief Method Write, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::Unity::Collections::FormatError Write(::by_ref<T> fs, ::by_ref<int32_t> index, ::Unity::Collections::Unicode_Rune rune);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FixedStringMethods();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FixedStringMethods", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FixedStringMethods(FixedStringMethods&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FixedStringMethods", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FixedStringMethods(FixedStringMethods const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15586 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Collections::FixedStringMethods) == 0x10, "Size mismatch!");

} // namespace Unity::Collections
