#pragma once
// IWYU pragma private; include "Unity/Collections/FixedString.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__INativeList_1_def.hpp"
#include "Unity/Collections/zzzz__IUTF8Bytes_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FixedString)
namespace Unity::Collections {
struct FixedString128Bytes;
}
namespace Unity::Collections {
struct FixedString512Bytes;
}
// Forward declare root types
namespace Unity::Collections {
class FixedString;
}
// Write type traits
MARK_REF_T(::Unity::Collections::FixedString*);
DEFINE_IL2CPP_CLASS(::Unity::Collections::FixedString*, "Unity.Collections", "FixedString");
// [GenerateTestsForBurstCompatibility]
// Dependencies System.Object, Unity.Collections.INativeList`1<T>, Unity.Collections.IUTF8Bytes
namespace Unity::Collections {
// Is value type: false
// CS Name: Unity.Collections.FixedString
class CORDL_TYPE FixedString : public ::System::Object {
public:
  // Declarations
  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68ea8b8, size 0x5ac, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68ea5d4, size 0x110, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, ::StringW arg1);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68e9b7c, size 0x130, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, ::StringW arg1, ::StringW arg2);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, ::StringW arg1, T1 arg2);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68e8f80, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, ::StringW arg1, float_t arg2);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68e8388, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, ::StringW arg1, int32_t arg2);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, T1 arg1);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, T1 arg1, ::StringW arg2);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2>)
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, T1 arg1, T2 arg2);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, T1 arg1, float_t arg2);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, T1 arg1, int32_t arg2);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68ea254, size 0x12c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, float_t arg1);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68e978c, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, float_t arg1, ::StringW arg2);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, float_t arg1, T1 arg2);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68e8b74, size 0x150, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, float_t arg1, float_t arg2);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68e7f68, size 0x16c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, float_t arg1, int32_t arg2);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68e9ee8, size 0x128, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, int32_t arg1);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68e9388, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, int32_t arg1, ::StringW arg2);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, int32_t arg1, T1 arg2);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68e8774, size 0x16c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, int32_t arg1, float_t arg2);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68e7b7c, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, int32_t arg1, int32_t arg2);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, T1 arg0);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, T1 arg0, ::StringW arg1);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, T1 arg0, ::StringW arg1, ::StringW arg2);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2>)
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, T1 arg0, ::StringW arg1, T2 arg2);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, T1 arg0, ::StringW arg1, float_t arg2);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, T1 arg0, ::StringW arg1, int32_t arg2);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes), typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2>)
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, T1 arg0, T2 arg1);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2>)
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, T1 arg0, T2 arg1, ::StringW arg2);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes), typeof(Unity.Collections.FixedString32Bytes),
  /// typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2, typename T3>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2> &&
             ::cordl_internals::type_constraint<T3, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T3, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T3> && ::cordl_internals::default_constructor_constraint<T3>)
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, T1 arg0, T2 arg1, T3 arg2);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes), typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2>)
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, T1 arg0, T2 arg1, float_t arg2);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes), typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2>)
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, T1 arg0, T2 arg1, int32_t arg2);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, T1 arg0, float_t arg1);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, T1 arg0, float_t arg1, ::StringW arg2);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes), typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2>)
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, T1 arg0, float_t arg1, T2 arg2);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, T1 arg0, float_t arg1, float_t arg2);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, T1 arg0, float_t arg1, int32_t arg2);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, T1 arg0, int32_t arg1);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, T1 arg0, int32_t arg1, ::StringW arg2);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes), typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2>)
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, T1 arg0, int32_t arg1, T2 arg2);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, T1 arg0, int32_t arg1, float_t arg2);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, T1 arg0, int32_t arg1, int32_t arg2);

  /// @brief Method Format, addr 0x68ea7cc, size 0xec, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68ea4a8, size 0x12c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, ::StringW arg1);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68e9a28, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, ::StringW arg1, ::StringW arg2);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, ::StringW arg1, T1 arg2);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68e8e30, size 0x150, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, ::StringW arg1, float_t arg2);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68e821c, size 0x16c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, ::StringW arg1, int32_t arg2);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, T1 arg1);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, T1 arg1, ::StringW arg2);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes), typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2>)
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, T1 arg1, T2 arg2);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, T1 arg1, float_t arg2);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, T1 arg1, int32_t arg2);

  /// @brief Method Format, addr 0x68ea13c, size 0x118, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, float_t arg1);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68e963c, size 0x150, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, float_t arg1, ::StringW arg2);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, float_t arg1, T1 arg2);

  /// @brief Method Format, addr 0x68e8a30, size 0x144, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, float_t arg1, float_t arg2);

  /// @brief Method Format, addr 0x68e7e18, size 0x150, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, float_t arg1, int32_t arg2);

  /// @brief Method Format, addr 0x68e9dbc, size 0x12c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, int32_t arg1);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68e921c, size 0x16c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, int32_t arg1, ::StringW arg2);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, int32_t arg1, T1 arg2);

  /// @brief Method Format, addr 0x68e8624, size 0x150, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, int32_t arg1, float_t arg2);

  /// @brief Method Format, addr 0x68e7a28, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, int32_t arg1, int32_t arg2);

  /// @brief Method Format, addr 0x68ea6e4, size 0xe8, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68ea380, size 0x128, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, ::StringW arg1);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68e98e0, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, ::StringW arg1, ::StringW arg2);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, ::StringW arg1, T1 arg2);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68e8cc4, size 0x16c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, ::StringW arg1, float_t arg2);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68e80d4, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, ::StringW arg1, int32_t arg2);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, T1 arg1);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, T1 arg1, ::StringW arg2);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes), typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2>)
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, T1 arg1, T2 arg2);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, T1 arg1, float_t arg2);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, T1 arg1, int32_t arg2);

  /// @brief Method Format, addr 0x68ea010, size 0x12c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, float_t arg1);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68e94d0, size 0x16c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, float_t arg1, ::StringW arg2);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, float_t arg1, T1 arg2);

  /// @brief Method Format, addr 0x68e88e0, size 0x150, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, float_t arg1, float_t arg2);

  /// @brief Method Format, addr 0x68e7cc4, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, float_t arg1, int32_t arg2);

  /// @brief Method Format, addr 0x68e9cac, size 0x110, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, int32_t arg1);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68e90d4, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, int32_t arg1, ::StringW arg2);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, int32_t arg1, T1 arg2);

  /// @brief Method Format, addr 0x68e84d0, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, int32_t arg1, float_t arg2);

  /// @brief Method Format, addr 0x68e78f8, size 0x130, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, int32_t arg1, int32_t arg2);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68e77a0, size 0x158, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, ::StringW arg1, ::StringW arg2, ::StringW arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, ::StringW arg1, ::StringW arg2, T1 arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68e4f40, size 0x174, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, ::StringW arg1, ::StringW arg2, float_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68e2694, size 0x170, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, ::StringW arg1, ::StringW arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, ::StringW arg1, T1 arg2, ::StringW arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, ::StringW arg1, T1 arg2, T2 arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, ::StringW arg1, T1 arg2, float_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, ::StringW arg1, T1 arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68e6a64, size 0x174, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, ::StringW arg1, float_t arg2, ::StringW arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, ::StringW arg1, float_t arg2, T1 arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68e4198, size 0x178, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, ::StringW arg1, float_t arg2, float_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68e18f8, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, ::StringW arg1, float_t arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68e5cc4, size 0x170, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, ::StringW arg1, int32_t arg2, ::StringW arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, ::StringW arg1, int32_t arg2, T1 arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68e341c, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, ::StringW arg1, int32_t arg2, float_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68e0b70, size 0x170, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, ::StringW arg1, int32_t arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, T1 arg1, ::StringW arg2, ::StringW arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, T1 arg1, ::StringW arg2, T2 arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, T1 arg1, ::StringW arg2, float_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, T1 arg1, ::StringW arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, T1 arg1, T2 arg2, ::StringW arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2, typename T3>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2> &&
             ::cordl_internals::type_constraint<T3, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T3, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T3> && ::cordl_internals::default_constructor_constraint<T3>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, T1 arg1, T2 arg2, T3 arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, T1 arg1, T2 arg2, float_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, T1 arg1, T2 arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, T1 arg1, float_t arg2, ::StringW arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, T1 arg1, float_t arg2, T2 arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, T1 arg1, float_t arg2, float_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, T1 arg1, float_t arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, T1 arg1, int32_t arg2, ::StringW arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, T1 arg1, int32_t arg2, T2 arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, T1 arg1, int32_t arg2, float_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, T1 arg1, int32_t arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68e7348, size 0x174, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, float_t arg1, ::StringW arg2, ::StringW arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, float_t arg1, ::StringW arg2, T1 arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68e4ac4, size 0x178, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, float_t arg1, ::StringW arg2, float_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68e220c, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, float_t arg1, ::StringW arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, float_t arg1, T1 arg2, ::StringW arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, float_t arg1, T1 arg2, T2 arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, float_t arg1, T1 arg2, float_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, float_t arg1, T1 arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68e65e8, size 0x178, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, float_t arg1, float_t arg2, ::StringW arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, float_t arg1, float_t arg2, T1 arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68e3d10, size 0x17c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, float_t arg1, float_t arg2, float_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68e144c, size 0x190, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, float_t arg1, float_t arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68e583c, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, float_t arg1, int32_t arg2, ::StringW arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, float_t arg1, int32_t arg2, T1 arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68e2f70, size 0x190, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, float_t arg1, int32_t arg2, float_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68e06e8, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, float_t arg1, int32_t arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68e6ed4, size 0x170, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, int32_t arg1, ::StringW arg2, ::StringW arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, int32_t arg1, ::StringW arg2, T1 arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68e462c, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, int32_t arg1, ::StringW arg2, float_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68e1d80, size 0x170, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, int32_t arg1, ::StringW arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, int32_t arg1, T1 arg2, ::StringW arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, int32_t arg1, T1 arg2, T2 arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, int32_t arg1, T1 arg2, float_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, int32_t arg1, T1 arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68e6150, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, int32_t arg1, float_t arg2, ::StringW arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, int32_t arg1, float_t arg2, T1 arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68e389c, size 0x190, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, int32_t arg1, float_t arg2, float_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68e0fcc, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, int32_t arg1, float_t arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68e53b0, size 0x170, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, int32_t arg1, int32_t arg2, ::StringW arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, int32_t arg1, int32_t arg2, T1 arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68e2af0, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, int32_t arg1, int32_t arg2, float_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68e028c, size 0x170, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, int32_t arg1, int32_t arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, ::StringW arg1, ::StringW arg2, ::StringW arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, ::StringW arg1, ::StringW arg2, T2 arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, ::StringW arg1, ::StringW arg2, float_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, ::StringW arg1, ::StringW arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, ::StringW arg1, T2 arg2, ::StringW arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2, typename T3>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2> &&
             ::cordl_internals::type_constraint<T3, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T3, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T3> && ::cordl_internals::default_constructor_constraint<T3>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, ::StringW arg1, T2 arg2, T3 arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, ::StringW arg1, T2 arg2, float_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, ::StringW arg1, T2 arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, ::StringW arg1, float_t arg2, ::StringW arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, ::StringW arg1, float_t arg2, T2 arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, ::StringW arg1, float_t arg2, float_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, ::StringW arg1, float_t arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, ::StringW arg1, int32_t arg2, ::StringW arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, ::StringW arg1, int32_t arg2, T2 arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, ::StringW arg1, int32_t arg2, float_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, ::StringW arg1, int32_t arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, T2 arg1, ::StringW arg2, ::StringW arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2, typename T3>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2> &&
             ::cordl_internals::type_constraint<T3, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T3, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T3> && ::cordl_internals::default_constructor_constraint<T3>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, T2 arg1, ::StringW arg2, T3 arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, T2 arg1, ::StringW arg2, float_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, T2 arg1, ::StringW arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2, typename T3>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2> &&
             ::cordl_internals::type_constraint<T3, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T3, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T3> && ::cordl_internals::default_constructor_constraint<T3>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, T2 arg1, T3 arg2, ::StringW arg3);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes), typeof(Unity.Collections.FixedString32Bytes),
  /// typeof(Unity.Collections.FixedString32Bytes), typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2, typename T3, typename T4>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2> &&
             ::cordl_internals::type_constraint<T3, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T3, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T3> && ::cordl_internals::default_constructor_constraint<T3> &&
             ::cordl_internals::type_constraint<T4, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T4, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T4> && ::cordl_internals::default_constructor_constraint<T4>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, T2 arg1, T3 arg2, T4 arg3);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes), typeof(Unity.Collections.FixedString32Bytes),
  /// typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2, typename T3>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2> &&
             ::cordl_internals::type_constraint<T3, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T3, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T3> && ::cordl_internals::default_constructor_constraint<T3>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, T2 arg1, T3 arg2, float_t arg3);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes), typeof(Unity.Collections.FixedString32Bytes),
  /// typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2, typename T3>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2> &&
             ::cordl_internals::type_constraint<T3, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T3, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T3> && ::cordl_internals::default_constructor_constraint<T3>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, T2 arg1, T3 arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, T2 arg1, float_t arg2, ::StringW arg3);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes), typeof(Unity.Collections.FixedString32Bytes),
  /// typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2, typename T3>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2> &&
             ::cordl_internals::type_constraint<T3, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T3, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T3> && ::cordl_internals::default_constructor_constraint<T3>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, T2 arg1, float_t arg2, T3 arg3);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes), typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, T2 arg1, float_t arg2, float_t arg3);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes), typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, T2 arg1, float_t arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, T2 arg1, int32_t arg2, ::StringW arg3);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes), typeof(Unity.Collections.FixedString32Bytes),
  /// typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2, typename T3>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2> &&
             ::cordl_internals::type_constraint<T3, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T3, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T3> && ::cordl_internals::default_constructor_constraint<T3>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, T2 arg1, int32_t arg2, T3 arg3);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes), typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, T2 arg1, int32_t arg2, float_t arg3);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes), typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, T2 arg1, int32_t arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, float_t arg1, ::StringW arg2, ::StringW arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, float_t arg1, ::StringW arg2, T2 arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, float_t arg1, ::StringW arg2, float_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, float_t arg1, ::StringW arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, float_t arg1, T2 arg2, ::StringW arg3);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes), typeof(Unity.Collections.FixedString32Bytes),
  /// typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2, typename T3>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2> &&
             ::cordl_internals::type_constraint<T3, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T3, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T3> && ::cordl_internals::default_constructor_constraint<T3>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, float_t arg1, T2 arg2, T3 arg3);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes), typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, float_t arg1, T2 arg2, float_t arg3);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes), typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, float_t arg1, T2 arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, float_t arg1, float_t arg2, ::StringW arg3);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes), typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, float_t arg1, float_t arg2, T2 arg3);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, float_t arg1, float_t arg2, float_t arg3);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, float_t arg1, float_t arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, float_t arg1, int32_t arg2, ::StringW arg3);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes), typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, float_t arg1, int32_t arg2, T2 arg3);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, float_t arg1, int32_t arg2, float_t arg3);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, float_t arg1, int32_t arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, int32_t arg1, ::StringW arg2, ::StringW arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, int32_t arg1, ::StringW arg2, T2 arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, int32_t arg1, ::StringW arg2, float_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, int32_t arg1, ::StringW arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, int32_t arg1, T2 arg2, ::StringW arg3);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes), typeof(Unity.Collections.FixedString32Bytes),
  /// typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2, typename T3>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2> &&
             ::cordl_internals::type_constraint<T3, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T3, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T3> && ::cordl_internals::default_constructor_constraint<T3>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, int32_t arg1, T2 arg2, T3 arg3);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes), typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, int32_t arg1, T2 arg2, float_t arg3);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes), typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, int32_t arg1, T2 arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, int32_t arg1, float_t arg2, ::StringW arg3);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes), typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, int32_t arg1, float_t arg2, T2 arg3);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, int32_t arg1, float_t arg2, float_t arg3);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, int32_t arg1, float_t arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, int32_t arg1, int32_t arg2, ::StringW arg3);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes), typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, int32_t arg1, int32_t arg2, T2 arg3);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, int32_t arg1, int32_t arg2, float_t arg3);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, int32_t arg1, int32_t arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68e762c, size 0x174, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, ::StringW arg1, ::StringW arg2, ::StringW arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, ::StringW arg1, ::StringW arg2, T1 arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68e4dc8, size 0x178, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, ::StringW arg1, ::StringW arg2, float_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68e2508, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, ::StringW arg1, ::StringW arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, ::StringW arg1, T1 arg2, ::StringW arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, ::StringW arg1, T1 arg2, T2 arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, ::StringW arg1, T1 arg2, float_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, ::StringW arg1, T1 arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68e68ec, size 0x178, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, ::StringW arg1, float_t arg2, ::StringW arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, ::StringW arg1, float_t arg2, T1 arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68e401c, size 0x17c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, ::StringW arg1, float_t arg2, float_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68e1768, size 0x190, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, ::StringW arg1, float_t arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68e5b38, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, ::StringW arg1, int32_t arg2, ::StringW arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, ::StringW arg1, int32_t arg2, T1 arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68e328c, size 0x190, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, ::StringW arg1, int32_t arg2, float_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68e09e4, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, ::StringW arg1, int32_t arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, T1 arg1, ::StringW arg2, ::StringW arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, T1 arg1, ::StringW arg2, T2 arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, T1 arg1, ::StringW arg2, float_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, T1 arg1, ::StringW arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, T1 arg1, T2 arg2, ::StringW arg3);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes), typeof(Unity.Collections.FixedString32Bytes),
  /// typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2, typename T3>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2> &&
             ::cordl_internals::type_constraint<T3, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T3, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T3> && ::cordl_internals::default_constructor_constraint<T3>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, T1 arg1, T2 arg2, T3 arg3);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes), typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, T1 arg1, T2 arg2, float_t arg3);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes), typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, T1 arg1, T2 arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, T1 arg1, float_t arg2, ::StringW arg3);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes), typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, T1 arg1, float_t arg2, T2 arg3);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, T1 arg1, float_t arg2, float_t arg3);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, T1 arg1, float_t arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, T1 arg1, int32_t arg2, ::StringW arg3);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes), typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, T1 arg1, int32_t arg2, T2 arg3);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, T1 arg1, int32_t arg2, float_t arg3);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, T1 arg1, int32_t arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68e71d0, size 0x178, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, float_t arg1, ::StringW arg2, ::StringW arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, float_t arg1, ::StringW arg2, T1 arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68e4948, size 0x17c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, float_t arg1, ::StringW arg2, float_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68e207c, size 0x190, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, float_t arg1, ::StringW arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, float_t arg1, T1 arg2, ::StringW arg3);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes), typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, float_t arg1, T1 arg2, T2 arg3);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, float_t arg1, T1 arg2, float_t arg3);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, float_t arg1, T1 arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68e646c, size 0x17c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, float_t arg1, float_t arg2, ::StringW arg3);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, float_t arg1, float_t arg2, T1 arg3);

  /// @brief Method Format, addr 0x68e3ba8, size 0x168, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, float_t arg1, float_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x68e12d0, size 0x17c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, float_t arg1, float_t arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68e56ac, size 0x190, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, float_t arg1, int32_t arg2, ::StringW arg3);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, float_t arg1, int32_t arg2, T1 arg3);

  /// @brief Method Format, addr 0x68e2df4, size 0x17c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, float_t arg1, int32_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x68e0570, size 0x178, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, float_t arg1, int32_t arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68e6d48, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, int32_t arg1, ::StringW arg2, ::StringW arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, int32_t arg1, ::StringW arg2, T1 arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68e449c, size 0x190, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, int32_t arg1, ::StringW arg2, float_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68e1bf4, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, int32_t arg1, ::StringW arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, int32_t arg1, T1 arg2, ::StringW arg3);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes), typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, int32_t arg1, T1 arg2, T2 arg3);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, int32_t arg1, T1 arg2, float_t arg3);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, int32_t arg1, T1 arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68e5fc0, size 0x190, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, int32_t arg1, float_t arg2, ::StringW arg3);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, int32_t arg1, float_t arg2, T1 arg3);

  /// @brief Method Format, addr 0x68e3720, size 0x17c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, int32_t arg1, float_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x68e0e54, size 0x178, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, int32_t arg1, float_t arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68e5224, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, int32_t arg1, int32_t arg2, ::StringW arg3);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, int32_t arg1, int32_t arg2, T1 arg3);

  /// @brief Method Format, addr 0x68e2978, size 0x178, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, int32_t arg1, int32_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x68e0118, size 0x174, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, int32_t arg1, int32_t arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68e74bc, size 0x170, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, ::StringW arg1, ::StringW arg2, ::StringW arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, ::StringW arg1, ::StringW arg2, T1 arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68e4c3c, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, ::StringW arg1, ::StringW arg2, float_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68e2398, size 0x170, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, ::StringW arg1, ::StringW arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, ::StringW arg1, T1 arg2, ::StringW arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, ::StringW arg1, T1 arg2, T2 arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, ::StringW arg1, T1 arg2, float_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, ::StringW arg1, T1 arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68e6760, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, ::StringW arg1, float_t arg2, ::StringW arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, ::StringW arg1, float_t arg2, T1 arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68e3e8c, size 0x190, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, ::StringW arg1, float_t arg2, float_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68e15dc, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, ::StringW arg1, float_t arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68e59c8, size 0x170, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, ::StringW arg1, int32_t arg2, ::StringW arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, ::StringW arg1, int32_t arg2, T1 arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68e3100, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, ::StringW arg1, int32_t arg2, float_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68e0874, size 0x170, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, ::StringW arg1, int32_t arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, T1 arg1, ::StringW arg2, ::StringW arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, T1 arg1, ::StringW arg2, T2 arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, T1 arg1, ::StringW arg2, float_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, T1 arg1, ::StringW arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, T1 arg1, T2 arg2, ::StringW arg3);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes), typeof(Unity.Collections.FixedString32Bytes),
  /// typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2, typename T3>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2> &&
             ::cordl_internals::type_constraint<T3, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T3, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T3> && ::cordl_internals::default_constructor_constraint<T3>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, T1 arg1, T2 arg2, T3 arg3);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes), typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, T1 arg1, T2 arg2, float_t arg3);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes), typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, T1 arg1, T2 arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, T1 arg1, float_t arg2, ::StringW arg3);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes), typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, T1 arg1, float_t arg2, T2 arg3);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, T1 arg1, float_t arg2, float_t arg3);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, T1 arg1, float_t arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, T1 arg1, int32_t arg2, ::StringW arg3);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes), typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, T1 arg1, int32_t arg2, T2 arg3);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, T1 arg1, int32_t arg2, float_t arg3);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, T1 arg1, int32_t arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68e7044, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, float_t arg1, ::StringW arg2, ::StringW arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, float_t arg1, ::StringW arg2, T1 arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68e47b8, size 0x190, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, float_t arg1, ::StringW arg2, float_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68e1ef0, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, float_t arg1, ::StringW arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, float_t arg1, T1 arg2, ::StringW arg3);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes), typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, float_t arg1, T1 arg2, T2 arg3);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, float_t arg1, T1 arg2, float_t arg3);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, float_t arg1, T1 arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68e62dc, size 0x190, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, float_t arg1, float_t arg2, ::StringW arg3);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, float_t arg1, float_t arg2, T1 arg3);

  /// @brief Method Format, addr 0x68e3a2c, size 0x17c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, float_t arg1, float_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x68e1158, size 0x178, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, float_t arg1, float_t arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68e5520, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, float_t arg1, int32_t arg2, ::StringW arg3);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, float_t arg1, int32_t arg2, T1 arg3);

  /// @brief Method Format, addr 0x68e2c7c, size 0x178, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, float_t arg1, int32_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x68e03fc, size 0x174, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, float_t arg1, int32_t arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68e6bd8, size 0x170, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, int32_t arg1, ::StringW arg2, ::StringW arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, int32_t arg1, ::StringW arg2, T1 arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68e4310, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, int32_t arg1, ::StringW arg2, float_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68e1a84, size 0x170, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, int32_t arg1, ::StringW arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, int32_t arg1, T1 arg2, ::StringW arg3);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes), typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1> &&
             ::cordl_internals::type_constraint<T2, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T2, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, int32_t arg1, T1 arg2, T2 arg3);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, int32_t arg1, T1 arg2, float_t arg3);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, int32_t arg1, T1 arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68e5e34, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, int32_t arg1, float_t arg2, ::StringW arg3);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, int32_t arg1, float_t arg2, T1 arg3);

  /// @brief Method Format, addr 0x68e35a8, size 0x178, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, int32_t arg1, float_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x68e0ce0, size 0x174, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, int32_t arg1, float_t arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x68e50b4, size 0x170, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, int32_t arg1, int32_t arg2, ::StringW arg3);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, int32_t arg1, int32_t arg2, T1 arg3);

  /// @brief Method Format, addr 0x68e2804, size 0x174, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, int32_t arg1, int32_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x68dffc0, size 0x158, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FixedString();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FixedString", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FixedString(FixedString&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FixedString", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FixedString(FixedString const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15859 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Collections::FixedString) == 0x10, "Size mismatch!");

} // namespace Unity::Collections
