#pragma once
// IWYU pragma private; include "Unity/Collections/FixedStringMethods.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__INativeList_1_def.hpp"
#include "Unity/Collections/zzzz__IUTF8Bytes_def.hpp"
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
// [Extension]
// [GenerateTestsForBurstCompatibility]
// [GenerateTestsForBurstCompatibility]
// [GenerateTestsForBurstCompatibility]
// [GenerateTestsForBurstCompatibility]
// Dependencies System.Object, Unity.Collections.INativeList`1<T>, Unity.Collections.IUTF8Bytes
namespace Unity::Collections {
// Is value type: false
// CS Name: Unity.Collections.FixedStringMethods
class CORDL_TYPE FixedStringMethods : public ::System::Object {
public:
  // Declarations
  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString128Bytes) })]
  /// @brief Method Append, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  static inline ::Unity::Collections::FormatError Append(::by_ref<T> fs, char16_t a, char16_t b);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString128Bytes) })]
  /// @brief Method Append, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  static inline ::Unity::Collections::FormatError Append(::by_ref<T> fs, char16_t a, char16_t b, char16_t c);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString128Bytes) })]
  /// @brief Method Append, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  static inline ::Unity::Collections::FormatError Append(::by_ref<T> fs, char16_t a, char16_t b, char16_t c, char16_t d, char16_t e, char16_t f, char16_t g, char16_t h);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString128Bytes) })]
  /// @brief Method Append, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  static inline ::Unity::Collections::FormatError Append(::by_ref<T> fs, char16_t ch);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString128Bytes), typeof(Unity.Collections.FixedString128Bytes) })]
  /// @brief Method Append, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename T2>
    requires(::cordl_internals::type_constraint<T, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2>)
  static inline ::Unity::Collections::FormatError Append(::by_ref<T> fs, /* [IsReadOnly] */ ::by_ref<T2> input);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString128Bytes) })]
  /// @brief Method Append, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  static inline ::Unity::Collections::FormatError Append(::by_ref<T> fs, float_t input, char16_t decimalSeparator);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString128Bytes) })]
  /// @brief Method Append, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  static inline ::Unity::Collections::FormatError Append(::by_ref<T> fs, int32_t input);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString128Bytes) })]
  /// @brief Method Append, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  static inline ::Unity::Collections::FormatError Append(::by_ref<T> fs, int64_t input);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString128Bytes) })]
  /// @brief Method Append, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  static inline ::Unity::Collections::FormatError Append(::by_ref<T> fs, uint32_t input);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString128Bytes) })]
  /// @brief Method Append, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  static inline ::Unity::Collections::FormatError Append(::by_ref<T> fs, uint64_t input);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString128Bytes) })]
  /// @brief Method Append, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  static inline ::Unity::Collections::FormatError Append(::by_ref<T> fs, ::Unity::Collections::Unicode_Rune rune);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString128Bytes) })]
  /// @brief Method Append, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  static inline ::Unity::Collections::FormatError Append(::by_ref<T> fs, ::Unity::Collections::Unicode_Rune rune, int32_t count);

  /// [Extension]
  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Append, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  static inline ::Unity::Collections::FormatError Append(::by_ref<T> fs, ::StringW s);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString128Bytes) })]
  /// @brief Method Append, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  static inline ::Unity::Collections::FormatError Append(::by_ref<T> fs, uint8_t* utf8Bytes, int32_t utf8BytesLength);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString128Bytes), typeof(Unity.Collections.FixedString128Bytes),
  /// typeof(Unity.Collections.FixedString128Bytes) })]
  /// @brief Method AppendFormat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U, typename T0>
    requires(::cordl_internals::type_constraint<T, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T> &&
             ::cordl_internals::type_constraint<U, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<U, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<U> && ::cordl_internals::default_constructor_constraint<U> &&
             ::cordl_internals::type_constraint<T0, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T0, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T0> && ::cordl_internals::default_constructor_constraint<T0>)
  static inline ::Unity::Collections::FormatError AppendFormat(::by_ref<T> dest, /* [IsReadOnly] */ ::by_ref<U> format, /* [IsReadOnly] */ ::by_ref<T0> arg0);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString128Bytes), typeof(Unity.Collections.FixedString128Bytes),
  /// typeof(Unity.Collections.FixedString128Bytes), typeof(Unity.Collections.FixedString128Bytes) })]
  /// @brief Method AppendFormat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U, typename T0, typename T1>
    requires(::cordl_internals::type_constraint<T, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T> &&
             ::cordl_internals::type_constraint<U, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<U, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<U> && ::cordl_internals::default_constructor_constraint<U> &&
             ::cordl_internals::type_constraint<T0, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T0, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T0> && ::cordl_internals::default_constructor_constraint<T0> &&
             ::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FormatError AppendFormat(::by_ref<T> dest, /* [IsReadOnly] */ ::by_ref<U> format, /* [IsReadOnly] */ ::by_ref<T0> arg0, /* [IsReadOnly] */ ::by_ref<T1> arg1);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString128Bytes), typeof(Unity.Collections.FixedString128Bytes),
  /// typeof(Unity.Collections.FixedString128Bytes), typeof(Unity.Collections.FixedString128Bytes), typeof(Unity.Collections.FixedString128Bytes) })]
  /// @brief Method AppendFormat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U, typename T0, typename T1, typename T2>
    requires(::cordl_internals::type_constraint<T, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T> &&
             ::cordl_internals::type_constraint<U, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<U, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<U> && ::cordl_internals::default_constructor_constraint<U> &&
             ::cordl_internals::type_constraint<T0, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T0, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T0> && ::cordl_internals::default_constructor_constraint<T0> &&
             ::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2>)
  static inline ::Unity::Collections::FormatError AppendFormat(::by_ref<T> dest, /* [IsReadOnly] */ ::by_ref<U> format, /* [IsReadOnly] */ ::by_ref<T0> arg0, /* [IsReadOnly] */ ::by_ref<T1> arg1,
                                                               /* [IsReadOnly] */ ::by_ref<T2> arg2);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString128Bytes), typeof(Unity.Collections.FixedString128Bytes),
  /// typeof(Unity.Collections.FixedString128Bytes), typeof(Unity.Collections.FixedString128Bytes), typeof(Unity.Collections.FixedString128Bytes), typeof(Unity.Collections.FixedString128Bytes) })]
  /// @brief Method AppendFormat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U, typename T0, typename T1, typename T2, typename T3>
    requires(::cordl_internals::type_constraint<T, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T> &&
             ::cordl_internals::type_constraint<U, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<U, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<U> && ::cordl_internals::default_constructor_constraint<U> &&
             ::cordl_internals::type_constraint<T0, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T0, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T0> && ::cordl_internals::default_constructor_constraint<T0> &&
             ::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2> &&
             ::cordl_internals::type_constraint<T3, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T3, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T3> && ::cordl_internals::default_constructor_constraint<T3>)
  static inline ::Unity::Collections::FormatError AppendFormat(::by_ref<T> dest, /* [IsReadOnly] */ ::by_ref<U> format, /* [IsReadOnly] */ ::by_ref<T0> arg0, /* [IsReadOnly] */ ::by_ref<T1> arg1,
                                                               /* [IsReadOnly] */ ::by_ref<T2> arg2, /* [IsReadOnly] */ ::by_ref<T3> arg3);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString128Bytes), typeof(Unity.Collections.FixedString128Bytes),
  /// typeof(Unity.Collections.FixedString128Bytes), typeof(Unity.Collections.FixedString128Bytes), typeof(Unity.Collections.FixedString128Bytes), typeof(Unity.Collections.FixedString128Bytes),
  /// typeof(Unity.Collections.FixedString128Bytes) })]
  /// @brief Method AppendFormat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U, typename T0, typename T1, typename T2, typename T3, typename T4>
    requires(::cordl_internals::type_constraint<T, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T> &&
             ::cordl_internals::type_constraint<U, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<U, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<U> && ::cordl_internals::default_constructor_constraint<U> &&
             ::cordl_internals::type_constraint<T0, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T0, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T0> && ::cordl_internals::default_constructor_constraint<T0> &&
             ::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2> &&
             ::cordl_internals::type_constraint<T3, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T3, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T3> && ::cordl_internals::default_constructor_constraint<T3> &&
             ::cordl_internals::type_constraint<T4, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T4, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T4> && ::cordl_internals::default_constructor_constraint<T4>)
  static inline ::Unity::Collections::FormatError AppendFormat(::by_ref<T> dest, /* [IsReadOnly] */ ::by_ref<U> format, /* [IsReadOnly] */ ::by_ref<T0> arg0, /* [IsReadOnly] */ ::by_ref<T1> arg1,
                                                               /* [IsReadOnly] */ ::by_ref<T2> arg2, /* [IsReadOnly] */ ::by_ref<T3> arg3, /* [IsReadOnly] */ ::by_ref<T4> arg4);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString128Bytes), typeof(Unity.Collections.FixedString128Bytes),
  /// typeof(Unity.Collections.FixedString128Bytes), typeof(Unity.Collections.FixedString128Bytes), typeof(Unity.Collections.FixedString128Bytes), typeof(Unity.Collections.FixedString128Bytes),
  /// typeof(Unity.Collections.FixedString128Bytes), typeof(Unity.Collections.FixedString128Bytes) })]
  /// @brief Method AppendFormat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5>
    requires(::cordl_internals::type_constraint<T, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T> &&
             ::cordl_internals::type_constraint<U, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<U, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<U> && ::cordl_internals::default_constructor_constraint<U> &&
             ::cordl_internals::type_constraint<T0, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T0, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T0> && ::cordl_internals::default_constructor_constraint<T0> &&
             ::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2> &&
             ::cordl_internals::type_constraint<T3, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T3, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T3> && ::cordl_internals::default_constructor_constraint<T3> &&
             ::cordl_internals::type_constraint<T4, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T4, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T4> && ::cordl_internals::default_constructor_constraint<T4> &&
             ::cordl_internals::type_constraint<T5, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T5, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T5> && ::cordl_internals::default_constructor_constraint<T5>)
  static inline ::Unity::Collections::FormatError AppendFormat(::by_ref<T> dest, /* [IsReadOnly] */ ::by_ref<U> format, /* [IsReadOnly] */ ::by_ref<T0> arg0, /* [IsReadOnly] */ ::by_ref<T1> arg1,
                                                               /* [IsReadOnly] */ ::by_ref<T2> arg2, /* [IsReadOnly] */ ::by_ref<T3> arg3, /* [IsReadOnly] */ ::by_ref<T4> arg4,
                                                               /* [IsReadOnly] */ ::by_ref<T5> arg5);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString128Bytes), typeof(Unity.Collections.FixedString128Bytes),
  /// typeof(Unity.Collections.FixedString128Bytes), typeof(Unity.Collections.FixedString128Bytes), typeof(Unity.Collections.FixedString128Bytes), typeof(Unity.Collections.FixedString128Bytes),
  /// typeof(Unity.Collections.FixedString128Bytes), typeof(Unity.Collections.FixedString128Bytes), typeof(Unity.Collections.FixedString128Bytes) })]
  /// @brief Method AppendFormat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
    requires(::cordl_internals::type_constraint<T, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T> &&
             ::cordl_internals::type_constraint<U, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<U, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<U> && ::cordl_internals::default_constructor_constraint<U> &&
             ::cordl_internals::type_constraint<T0, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T0, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T0> && ::cordl_internals::default_constructor_constraint<T0> &&
             ::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2> &&
             ::cordl_internals::type_constraint<T3, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T3, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T3> && ::cordl_internals::default_constructor_constraint<T3> &&
             ::cordl_internals::type_constraint<T4, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T4, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T4> && ::cordl_internals::default_constructor_constraint<T4> &&
             ::cordl_internals::type_constraint<T5, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T5, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T5> && ::cordl_internals::default_constructor_constraint<T5> &&
             ::cordl_internals::type_constraint<T6, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T6, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T6> && ::cordl_internals::default_constructor_constraint<T6>)
  static inline ::Unity::Collections::FormatError AppendFormat(::by_ref<T> dest, /* [IsReadOnly] */ ::by_ref<U> format, /* [IsReadOnly] */ ::by_ref<T0> arg0, /* [IsReadOnly] */ ::by_ref<T1> arg1,
                                                               /* [IsReadOnly] */ ::by_ref<T2> arg2, /* [IsReadOnly] */ ::by_ref<T3> arg3, /* [IsReadOnly] */ ::by_ref<T4> arg4,
                                                               /* [IsReadOnly] */ ::by_ref<T5> arg5, /* [IsReadOnly] */ ::by_ref<T6> arg6);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString128Bytes), typeof(Unity.Collections.FixedString128Bytes),
  /// typeof(Unity.Collections.FixedString128Bytes), typeof(Unity.Collections.FixedString128Bytes), typeof(Unity.Collections.FixedString128Bytes), typeof(Unity.Collections.FixedString128Bytes),
  /// typeof(Unity.Collections.FixedString128Bytes), typeof(Unity.Collections.FixedString128Bytes), typeof(Unity.Collections.FixedString128Bytes), typeof(Unity.Collections.FixedString128Bytes) })]
  /// @brief Method AppendFormat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
    requires(::cordl_internals::type_constraint<T, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T> &&
             ::cordl_internals::type_constraint<U, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<U, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<U> && ::cordl_internals::default_constructor_constraint<U> &&
             ::cordl_internals::type_constraint<T0, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T0, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T0> && ::cordl_internals::default_constructor_constraint<T0> &&
             ::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2> &&
             ::cordl_internals::type_constraint<T3, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T3, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T3> && ::cordl_internals::default_constructor_constraint<T3> &&
             ::cordl_internals::type_constraint<T4, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T4, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T4> && ::cordl_internals::default_constructor_constraint<T4> &&
             ::cordl_internals::type_constraint<T5, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T5, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T5> && ::cordl_internals::default_constructor_constraint<T5> &&
             ::cordl_internals::type_constraint<T6, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T6, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T6> && ::cordl_internals::default_constructor_constraint<T6> &&
             ::cordl_internals::type_constraint<T7, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T7, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T7> && ::cordl_internals::default_constructor_constraint<T7>)
  static inline ::Unity::Collections::FormatError AppendFormat(::by_ref<T> dest, /* [IsReadOnly] */ ::by_ref<U> format, /* [IsReadOnly] */ ::by_ref<T0> arg0, /* [IsReadOnly] */ ::by_ref<T1> arg1,
                                                               /* [IsReadOnly] */ ::by_ref<T2> arg2, /* [IsReadOnly] */ ::by_ref<T3> arg3, /* [IsReadOnly] */ ::by_ref<T4> arg4,
                                                               /* [IsReadOnly] */ ::by_ref<T5> arg5, /* [IsReadOnly] */ ::by_ref<T6> arg6, /* [IsReadOnly] */ ::by_ref<T7> arg7);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString128Bytes), typeof(Unity.Collections.FixedString128Bytes),
  /// typeof(Unity.Collections.FixedString128Bytes), typeof(Unity.Collections.FixedString128Bytes), typeof(Unity.Collections.FixedString128Bytes), typeof(Unity.Collections.FixedString128Bytes),
  /// typeof(Unity.Collections.FixedString128Bytes), typeof(Unity.Collections.FixedString128Bytes), typeof(Unity.Collections.FixedString128Bytes), typeof(Unity.Collections.FixedString128Bytes),
  /// typeof(Unity.Collections.FixedString128Bytes) })]
  /// @brief Method AppendFormat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
    requires(::cordl_internals::type_constraint<T, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T> &&
             ::cordl_internals::type_constraint<U, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<U, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<U> && ::cordl_internals::default_constructor_constraint<U> &&
             ::cordl_internals::type_constraint<T0, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T0, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T0> && ::cordl_internals::default_constructor_constraint<T0> &&
             ::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2> &&
             ::cordl_internals::type_constraint<T3, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T3, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T3> && ::cordl_internals::default_constructor_constraint<T3> &&
             ::cordl_internals::type_constraint<T4, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T4, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T4> && ::cordl_internals::default_constructor_constraint<T4> &&
             ::cordl_internals::type_constraint<T5, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T5, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T5> && ::cordl_internals::default_constructor_constraint<T5> &&
             ::cordl_internals::type_constraint<T6, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T6, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T6> && ::cordl_internals::default_constructor_constraint<T6> &&
             ::cordl_internals::type_constraint<T7, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T7, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T7> && ::cordl_internals::default_constructor_constraint<T7> &&
             ::cordl_internals::type_constraint<T8, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T8, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T8> && ::cordl_internals::default_constructor_constraint<T8>)
  static inline ::Unity::Collections::FormatError AppendFormat(::by_ref<T> dest, /* [IsReadOnly] */ ::by_ref<U> format, /* [IsReadOnly] */ ::by_ref<T0> arg0, /* [IsReadOnly] */ ::by_ref<T1> arg1,
                                                               /* [IsReadOnly] */ ::by_ref<T2> arg2, /* [IsReadOnly] */ ::by_ref<T3> arg3, /* [IsReadOnly] */ ::by_ref<T4> arg4,
                                                               /* [IsReadOnly] */ ::by_ref<T5> arg5, /* [IsReadOnly] */ ::by_ref<T6> arg6, /* [IsReadOnly] */ ::by_ref<T7> arg7,
                                                               /* [IsReadOnly] */ ::by_ref<T8> arg8);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString128Bytes), typeof(Unity.Collections.FixedString128Bytes),
  /// typeof(Unity.Collections.FixedString128Bytes), typeof(Unity.Collections.FixedString128Bytes), typeof(Unity.Collections.FixedString128Bytes), typeof(Unity.Collections.FixedString128Bytes),
  /// typeof(Unity.Collections.FixedString128Bytes), typeof(Unity.Collections.FixedString128Bytes), typeof(Unity.Collections.FixedString128Bytes), typeof(Unity.Collections.FixedString128Bytes),
  /// typeof(Unity.Collections.FixedString128Bytes), typeof(Unity.Collections.FixedString128Bytes) })]
  /// @brief Method AppendFormat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
    requires(::cordl_internals::type_constraint<T, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T> &&
             ::cordl_internals::type_constraint<U, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<U, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<U> && ::cordl_internals::default_constructor_constraint<U> &&
             ::cordl_internals::type_constraint<T0, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T0, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T0> && ::cordl_internals::default_constructor_constraint<T0> &&
             ::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2> &&
             ::cordl_internals::type_constraint<T3, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T3, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T3> && ::cordl_internals::default_constructor_constraint<T3> &&
             ::cordl_internals::type_constraint<T4, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T4, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T4> && ::cordl_internals::default_constructor_constraint<T4> &&
             ::cordl_internals::type_constraint<T5, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T5, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T5> && ::cordl_internals::default_constructor_constraint<T5> &&
             ::cordl_internals::type_constraint<T6, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T6, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T6> && ::cordl_internals::default_constructor_constraint<T6> &&
             ::cordl_internals::type_constraint<T7, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T7, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T7> && ::cordl_internals::default_constructor_constraint<T7> &&
             ::cordl_internals::type_constraint<T8, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T8, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T8> && ::cordl_internals::default_constructor_constraint<T8> &&
             ::cordl_internals::type_constraint<T9, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T9, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T9> && ::cordl_internals::default_constructor_constraint<T9>)
  static inline ::Unity::Collections::FormatError AppendFormat(::by_ref<T> dest, /* [IsReadOnly] */ ::by_ref<U> format, /* [IsReadOnly] */ ::by_ref<T0> arg0, /* [IsReadOnly] */ ::by_ref<T1> arg1,
                                                               /* [IsReadOnly] */ ::by_ref<T2> arg2, /* [IsReadOnly] */ ::by_ref<T3> arg3, /* [IsReadOnly] */ ::by_ref<T4> arg4,
                                                               /* [IsReadOnly] */ ::by_ref<T5> arg5, /* [IsReadOnly] */ ::by_ref<T6> arg6, /* [IsReadOnly] */ ::by_ref<T7> arg7,
                                                               /* [IsReadOnly] */ ::by_ref<T8> arg8, /* [IsReadOnly] */ ::by_ref<T9> arg9);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString128Bytes) })]
  /// @brief Method AppendRawByte, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  static inline ::Unity::Collections::FormatError AppendRawByte(::by_ref<T> fs, uint8_t a);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString128Bytes) })]
  /// @brief Method AppendScientific, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  static inline ::Unity::Collections::FormatError AppendScientific(::by_ref<T> fs, char16_t* source, int32_t sourceLength, int32_t decimalExponent, char16_t decimalSeparator);

  /// [Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
  /// [Conditional("UNITY_DOTS_DEBUG")]
  /// @brief Method CheckSubstringInRange, addr 0x64b5718, size 0x110, virtual false, abstract: false, final false
  static inline void CheckSubstringInRange(int32_t strLength, int32_t startIndex, int32_t length);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString128Bytes) })]
  /// @brief Method CompareTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  static inline int32_t CompareTo(::by_ref<T> fs, uint8_t* bytes, int32_t bytesLen);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString128Bytes), typeof(Unity.Collections.FixedString128Bytes) })]
  /// @brief Method CompareTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename T2>
    requires(::cordl_internals::type_constraint<T, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2>)
  static inline int32_t CompareTo(::by_ref<T> fs, /* [IsReadOnly] */ ::by_ref<T2> other);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString128Bytes) })]
  /// @brief Method ComputeHashCode, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  static inline int32_t ComputeHashCode(::by_ref<T> fs);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString128Bytes), typeof(Unity.Collections.FixedString128Bytes) })]
  /// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename T2>
    requires(::cordl_internals::type_constraint<T, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2>)
  static inline bool Contains(::by_ref<T> fs, /* [IsReadOnly] */ ::by_ref<T2> other);

  /// [Extension]
  /// [ExcludeFromBurstCompatTesting("Returns managed string")]
  /// @brief Method ConvertToString, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  static inline ::StringW ConvertToString(::by_ref<T> fs);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString128Bytes), typeof(Unity.Collections.FixedString128Bytes) })]
  /// @brief Method CopyFrom, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename T2>
    requires(::cordl_internals::type_constraint<T, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2>)
  static inline ::Unity::Collections::CopyError CopyFrom(::by_ref<T> fs, /* [IsReadOnly] */ ::by_ref<T2> input);

  /// [Extension]
  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method CopyFrom, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  static inline ::Unity::Collections::CopyError CopyFrom(::by_ref<T> fs, ::StringW s);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString128Bytes), typeof(Unity.Collections.FixedString128Bytes) })]
  /// @brief Method CopyFromTruncated, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename T2>
    requires(::cordl_internals::type_constraint<T, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2>)
  static inline ::Unity::Collections::CopyError CopyFromTruncated(::by_ref<T> fs, /* [IsReadOnly] */ ::by_ref<T2> input);

  /// [Extension]
  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method CopyFromTruncated, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  static inline ::Unity::Collections::CopyError CopyFromTruncated(::by_ref<T> fs, ::StringW s);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString128Bytes) })]
  /// @brief Method EffectiveSizeOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  static inline int32_t EffectiveSizeOf(::by_ref<T> fs);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString128Bytes), typeof(Unity.Collections.FixedString128Bytes) })]
  /// @brief Method EndsWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U>
    requires(::cordl_internals::type_constraint<T, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T> &&
             ::cordl_internals::type_constraint<U, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<U, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<U> && ::cordl_internals::default_constructor_constraint<U>)
  static inline bool EndsWith(::by_ref<T> fs, /* [IsReadOnly] */ ::by_ref<U> other);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString128Bytes) })]
  /// @brief Method EndsWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  static inline bool EndsWith(::by_ref<T> fs, ::Unity::Collections::Unicode_Rune rune);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString128Bytes) })]
  /// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  static inline bool Equals(::by_ref<T> fs, uint8_t* bytes, int32_t bytesLen);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString128Bytes), typeof(Unity.Collections.FixedString128Bytes) })]
  /// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename T2>
    requires(::cordl_internals::type_constraint<T, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2>)
  static inline bool Equals(::by_ref<T> fs, /* [IsReadOnly] */ ::by_ref<T2> other);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString128Bytes) })]
  /// @brief Method Found, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  static inline bool Found(::by_ref<T> fs, ::by_ref<int32_t> offset, char16_t a, char16_t b, char16_t c);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString128Bytes) })]
  /// @brief Method Found, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  static inline bool Found(::by_ref<T> fs, ::by_ref<int32_t> offset, char16_t a, char16_t b, char16_t c, char16_t d, char16_t e, char16_t f, char16_t g, char16_t h);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString128Bytes) })]
  /// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  static inline int32_t IndexOf(::by_ref<T> fs, uint8_t* bytes, int32_t bytesLen);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString128Bytes) })]
  /// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  static inline int32_t IndexOf(::by_ref<T> fs, uint8_t* bytes, int32_t bytesLen, int32_t startIndex, int32_t distance);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString128Bytes), typeof(Unity.Collections.FixedString128Bytes) })]
  /// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename T2>
    requires(::cordl_internals::type_constraint<T, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2>)
  static inline int32_t IndexOf(::by_ref<T> fs, /* [IsReadOnly] */ ::by_ref<T2> other);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString128Bytes), typeof(Unity.Collections.FixedString128Bytes) })]
  /// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename T2>
    requires(::cordl_internals::type_constraint<T, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2>)
  static inline int32_t IndexOf(::by_ref<T> fs, /* [IsReadOnly] */ ::by_ref<T2> other, int32_t startIndex, int32_t distance);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString128Bytes) })]
  /// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  static inline int32_t IndexOf(::by_ref<T> fs, ::Unity::Collections::Unicode_Rune rune);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString128Bytes) })]
  /// @brief Method LastIndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  static inline int32_t LastIndexOf(::by_ref<T> fs, uint8_t* bytes, int32_t bytesLen);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString128Bytes) })]
  /// @brief Method LastIndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  static inline int32_t LastIndexOf(::by_ref<T> fs, uint8_t* bytes, int32_t bytesLen, int32_t startIndex, int32_t distance);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString128Bytes), typeof(Unity.Collections.FixedString128Bytes) })]
  /// @brief Method LastIndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename T2>
    requires(::cordl_internals::type_constraint<T, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2>)
  static inline int32_t LastIndexOf(::by_ref<T> fs, /* [IsReadOnly] */ ::by_ref<T2> other);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString128Bytes), typeof(Unity.Collections.FixedString128Bytes) })]
  /// @brief Method LastIndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename T2>
    requires(::cordl_internals::type_constraint<T, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2>)
  static inline int32_t LastIndexOf(::by_ref<T> fs, /* [IsReadOnly] */ ::by_ref<T2> other, int32_t startIndex, int32_t distance);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString128Bytes) })]
  /// @brief Method LastIndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  static inline int32_t LastIndexOf(::by_ref<T> fs, ::Unity::Collections::Unicode_Rune rune);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString128Bytes) })]
  /// @brief Method Parse, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  static inline ::Unity::Collections::ParseError Parse(::by_ref<T> fs, ::by_ref<int32_t> offset, ::by_ref<float_t> output, char16_t decimalSeparator);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString128Bytes) })]
  /// @brief Method Parse, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  static inline ::Unity::Collections::ParseError Parse(::by_ref<T> fs, ::by_ref<int32_t> offset, ::by_ref<int32_t> output);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString128Bytes) })]
  /// @brief Method Parse, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  static inline ::Unity::Collections::ParseError Parse(::by_ref<T> fs, ::by_ref<int32_t> offset, ::by_ref<uint32_t> output);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString128Bytes) })]
  /// @brief Method ParseLongInternal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  static inline bool ParseLongInternal(::by_ref<T> fs, ::by_ref<int32_t> offset, ::by_ref<int64_t> value);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString128Bytes) })]
  /// @brief Method Peek, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  static inline ::Unity::Collections::Unicode_Rune Peek(::by_ref<T> fs, int32_t index);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString128Bytes) })]
  /// @brief Method Read, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  static inline ::Unity::Collections::Unicode_Rune Read(::by_ref<T> fs, ::by_ref<int32_t> index);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString128Bytes), typeof(Unity.Collections.FixedString128Bytes) })]
  /// @brief Method StartsWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U>
    requires(::cordl_internals::type_constraint<T, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T> &&
             ::cordl_internals::type_constraint<U, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<U, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<U> && ::cordl_internals::default_constructor_constraint<U>)
  static inline bool StartsWith(::by_ref<T> fs, /* [IsReadOnly] */ ::by_ref<U> other);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString128Bytes) })]
  /// @brief Method StartsWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  static inline bool StartsWith(::by_ref<T> fs, ::Unity::Collections::Unicode_Rune rune);

  /// [Extension]
  /// @brief Method Substring, addr 0x64b59f8, size 0x8c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::NativeText Substring(::by_ref<::Unity::Collections::NativeText> str, int32_t startIndex);

  /// [Extension]
  /// @brief Method Substring, addr 0x64b5954, size 0x8c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::NativeText Substring(::by_ref<::Unity::Collections::NativeText> str, int32_t startIndex, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// [Extension]
  /// @brief Method Substring, addr 0x64b59e0, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Collections::NativeText Substring(::by_ref<::Unity::Collections::NativeText> str, int32_t startIndex, int32_t length);

  /// [Extension]
  /// @brief Method Substring, addr 0x64b5828, size 0x12c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::NativeText Substring(::by_ref<::Unity::Collections::NativeText> str, int32_t startIndex, int32_t length,
                                                           ::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString128Bytes) })]
  /// @brief Method Substring, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  static inline T Substring(::by_ref<T> str, int32_t startIndex);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString128Bytes) })]
  /// @brief Method Substring, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  static inline T Substring(::by_ref<T> str, int32_t startIndex, int32_t length);

  /// [Extension]
  /// @brief Method ToLowerAscii, addr 0x64b694c, size 0x144, virtual false, abstract: false, final false
  static inline ::Unity::Collections::LowLevel::Unsafe::UnsafeText ToLowerAscii(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeText> fs,
                                                                                ::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// [Extension]
  /// @brief Method ToLowerAscii, addr 0x64b6a90, size 0x158, virtual false, abstract: false, final false
  static inline ::Unity::Collections::NativeText ToLowerAscii(::by_ref<::Unity::Collections::NativeText> fs, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString128Bytes) })]
  /// @brief Method ToLowerAscii, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  static inline T ToLowerAscii(::by_ref<T> fs);

  /// [Extension]
  /// @brief Method ToUpperAscii, addr 0x64b6be8, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Collections::LowLevel::Unsafe::UnsafeText ToUpperAscii(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeText> fs,
                                                                                ::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// [Extension]
  /// @brief Method ToUpperAscii, addr 0x64b6d30, size 0x15c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::NativeText ToUpperAscii(::by_ref<::Unity::Collections::NativeText> fs, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString128Bytes) })]
  /// @brief Method ToUpperAscii, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  static inline T ToUpperAscii(::by_ref<T> fs);

  /// [Extension]
  /// @brief Method Trim, addr 0x64b62c4, size 0x188, virtual false, abstract: false, final false
  static inline ::Unity::Collections::LowLevel::Unsafe::UnsafeText Trim(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeText> fs,
                                                                        ::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// [Extension]
  /// @brief Method Trim, addr 0x64b65f8, size 0x198, virtual false, abstract: false, final false
  static inline ::Unity::Collections::LowLevel::Unsafe::UnsafeText Trim(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeText> fs,
                                                                        ::Unity::Collections::AllocatorManager_AllocatorHandle allocator,
                                                                        ::System::ReadOnlySpan_1<::Unity::Collections::Unicode_Rune> trimRunes);

  /// [Extension]
  /// @brief Method Trim, addr 0x64b644c, size 0x1ac, virtual false, abstract: false, final false
  static inline ::Unity::Collections::NativeText Trim(::by_ref<::Unity::Collections::NativeText> fs, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// [Extension]
  /// @brief Method Trim, addr 0x64b6790, size 0x1bc, virtual false, abstract: false, final false
  static inline ::Unity::Collections::NativeText Trim(::by_ref<::Unity::Collections::NativeText> fs, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator,
                                                      ::System::ReadOnlySpan_1<::Unity::Collections::Unicode_Rune> trimRunes);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString128Bytes) })]
  /// @brief Method Trim, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  static inline T Trim(::by_ref<T> fs);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString128Bytes) })]
  /// @brief Method Trim, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  static inline T Trim(::by_ref<T> fs, ::System::ReadOnlySpan_1<::Unity::Collections::Unicode_Rune> trimRunes);

  /// [Extension]
  /// @brief Method TrimEnd, addr 0x64b5f6c, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Collections::LowLevel::Unsafe::UnsafeText TrimEnd(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeText> fs,
                                                                           ::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// [Extension]
  /// @brief Method TrimEnd, addr 0x64b6100, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Collections::LowLevel::Unsafe::UnsafeText TrimEnd(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeText> fs,
                                                                           ::Unity::Collections::AllocatorManager_AllocatorHandle allocator,
                                                                           ::System::ReadOnlySpan_1<::Unity::Collections::Unicode_Rune> trimRunes);

  /// [Extension]
  /// @brief Method TrimEnd, addr 0x64b6030, size 0xd0, virtual false, abstract: false, final false
  static inline ::Unity::Collections::NativeText TrimEnd(::by_ref<::Unity::Collections::NativeText> fs, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// [Extension]
  /// @brief Method TrimEnd, addr 0x64b61dc, size 0xe8, virtual false, abstract: false, final false
  static inline ::Unity::Collections::NativeText TrimEnd(::by_ref<::Unity::Collections::NativeText> fs, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator,
                                                         ::System::ReadOnlySpan_1<::Unity::Collections::Unicode_Rune> trimRunes);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString128Bytes) })]
  /// @brief Method TrimEnd, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  static inline T TrimEnd(::by_ref<T> fs);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString128Bytes) })]
  /// @brief Method TrimEnd, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  static inline T TrimEnd(::by_ref<T> fs, ::System::ReadOnlySpan_1<::Unity::Collections::Unicode_Rune> trimRunes);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString128Bytes) })]
  /// @brief Method TrimEndIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  static inline int32_t TrimEndIndex(::by_ref<T> fs);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString128Bytes) })]
  /// @brief Method TrimEndIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  static inline int32_t TrimEndIndex(::by_ref<T> fs, ::System::ReadOnlySpan_1<::Unity::Collections::Unicode_Rune> trimRunes);

  /// [Extension]
  /// @brief Method TrimStart, addr 0x64b5a84, size 0x128, virtual false, abstract: false, final false
  static inline ::Unity::Collections::LowLevel::Unsafe::UnsafeText TrimStart(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeText> fs,
                                                                             ::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// [Extension]
  /// @brief Method TrimStart, addr 0x64b5ce8, size 0x138, virtual false, abstract: false, final false
  static inline ::Unity::Collections::LowLevel::Unsafe::UnsafeText TrimStart(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeText> fs,
                                                                             ::Unity::Collections::AllocatorManager_AllocatorHandle allocator,
                                                                             ::System::ReadOnlySpan_1<::Unity::Collections::Unicode_Rune> trimRunes);

  /// [Extension]
  /// @brief Method TrimStart, addr 0x64b5bac, size 0x13c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::NativeText TrimStart(::by_ref<::Unity::Collections::NativeText> fs, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// [Extension]
  /// @brief Method TrimStart, addr 0x64b5e20, size 0x14c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::NativeText TrimStart(::by_ref<::Unity::Collections::NativeText> fs, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator,
                                                           ::System::ReadOnlySpan_1<::Unity::Collections::Unicode_Rune> trimRunes);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString128Bytes) })]
  /// @brief Method TrimStart, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  static inline T TrimStart(::by_ref<T> fs);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString128Bytes) })]
  /// @brief Method TrimStart, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  static inline T TrimStart(::by_ref<T> fs, ::System::ReadOnlySpan_1<::Unity::Collections::Unicode_Rune> trimRunes);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString128Bytes) })]
  /// @brief Method TrimStartIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  static inline int32_t TrimStartIndex(::by_ref<T> fs);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString128Bytes) })]
  /// @brief Method TrimStartIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  static inline int32_t TrimStartIndex(::by_ref<T> fs, ::System::ReadOnlySpan_1<::Unity::Collections::Unicode_Rune> trimRunes);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString128Bytes) })]
  /// @brief Method Write, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  static inline ::Unity::Collections::FormatError Write(::by_ref<T> fs, ::by_ref<int32_t> index, ::Unity::Collections::Unicode_Rune rune);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FixedStringMethods();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FixedStringMethods", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FixedStringMethods(FixedStringMethods&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FixedStringMethods", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FixedStringMethods(FixedStringMethods const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15617 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Collections::FixedStringMethods) == 0x10, "Size mismatch!");

} // namespace Unity::Collections
