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
  /// @brief Method Format, addr 0x6927534, size 0x5ac, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x6927250, size 0x110, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, ::StringW arg1);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x69267f8, size 0x130, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, ::StringW arg1, ::StringW arg2);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, ::StringW arg1, T1 arg2);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x6925bfc, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, ::StringW arg1, float_t arg2);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x6925004, size 0x148, virtual false, abstract: false, final false
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
  /// @brief Method Format, addr 0x6926ed0, size 0x12c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, float_t arg1);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x6926408, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, float_t arg1, ::StringW arg2);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, float_t arg1, T1 arg2);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x69257f0, size 0x150, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, float_t arg1, float_t arg2);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x6924be4, size 0x16c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, float_t arg1, int32_t arg2);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x6926b64, size 0x128, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, int32_t arg1);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x6926004, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, int32_t arg1, ::StringW arg2);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, int32_t arg1, T1 arg2);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x69253f0, size 0x16c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, int32_t arg1, float_t arg2);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x69247f8, size 0x148, virtual false, abstract: false, final false
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

  /// @brief Method Format, addr 0x6927448, size 0xec, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x6927124, size 0x12c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, ::StringW arg1);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x69266a4, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, ::StringW arg1, ::StringW arg2);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, ::StringW arg1, T1 arg2);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x6925aac, size 0x150, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, ::StringW arg1, float_t arg2);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x6924e98, size 0x16c, virtual false, abstract: false, final false
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

  /// @brief Method Format, addr 0x6926db8, size 0x118, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, float_t arg1);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x69262b8, size 0x150, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, float_t arg1, ::StringW arg2);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, float_t arg1, T1 arg2);

  /// @brief Method Format, addr 0x69256ac, size 0x144, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, float_t arg1, float_t arg2);

  /// @brief Method Format, addr 0x6924a94, size 0x150, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, float_t arg1, int32_t arg2);

  /// @brief Method Format, addr 0x6926a38, size 0x12c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, int32_t arg1);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x6925e98, size 0x16c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, int32_t arg1, ::StringW arg2);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, int32_t arg1, T1 arg2);

  /// @brief Method Format, addr 0x69252a0, size 0x150, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, int32_t arg1, float_t arg2);

  /// @brief Method Format, addr 0x69246a4, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, int32_t arg1, int32_t arg2);

  /// @brief Method Format, addr 0x6927360, size 0xe8, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x6926ffc, size 0x128, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, ::StringW arg1);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x692655c, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, ::StringW arg1, ::StringW arg2);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, ::StringW arg1, T1 arg2);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x6925940, size 0x16c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, ::StringW arg1, float_t arg2);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x6924d50, size 0x148, virtual false, abstract: false, final false
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

  /// @brief Method Format, addr 0x6926c8c, size 0x12c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, float_t arg1);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x692614c, size 0x16c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, float_t arg1, ::StringW arg2);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, float_t arg1, T1 arg2);

  /// @brief Method Format, addr 0x692555c, size 0x150, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, float_t arg1, float_t arg2);

  /// @brief Method Format, addr 0x6924940, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, float_t arg1, int32_t arg2);

  /// @brief Method Format, addr 0x6926928, size 0x110, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, int32_t arg1);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x6925d50, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, int32_t arg1, ::StringW arg2);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, int32_t arg1, T1 arg2);

  /// @brief Method Format, addr 0x692514c, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, int32_t arg1, float_t arg2);

  /// @brief Method Format, addr 0x6924574, size 0x130, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, int32_t arg1, int32_t arg2);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x692441c, size 0x158, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, ::StringW arg1, ::StringW arg2, ::StringW arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, ::StringW arg1, ::StringW arg2, T1 arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x6921bbc, size 0x174, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, ::StringW arg1, ::StringW arg2, float_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x691f310, size 0x170, virtual false, abstract: false, final false
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
  /// @brief Method Format, addr 0x69236e0, size 0x174, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, ::StringW arg1, float_t arg2, ::StringW arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, ::StringW arg1, float_t arg2, T1 arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x6920e14, size 0x178, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, ::StringW arg1, float_t arg2, float_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x691e574, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, ::StringW arg1, float_t arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x6922940, size 0x170, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, ::StringW arg1, int32_t arg2, ::StringW arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, ::StringW arg1, int32_t arg2, T1 arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x6920098, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, ::StringW arg1, int32_t arg2, float_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x691d7ec, size 0x170, virtual false, abstract: false, final false
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
  /// @brief Method Format, addr 0x6923fc4, size 0x174, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, float_t arg1, ::StringW arg2, ::StringW arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, float_t arg1, ::StringW arg2, T1 arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x6921740, size 0x178, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, float_t arg1, ::StringW arg2, float_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x691ee88, size 0x18c, virtual false, abstract: false, final false
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
  /// @brief Method Format, addr 0x6923264, size 0x178, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, float_t arg1, float_t arg2, ::StringW arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, float_t arg1, float_t arg2, T1 arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x692098c, size 0x17c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, float_t arg1, float_t arg2, float_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x691e0c8, size 0x190, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, float_t arg1, float_t arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x69224b8, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, float_t arg1, int32_t arg2, ::StringW arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, float_t arg1, int32_t arg2, T1 arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x691fbec, size 0x190, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, float_t arg1, int32_t arg2, float_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x691d364, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, float_t arg1, int32_t arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x6923b50, size 0x170, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, int32_t arg1, ::StringW arg2, ::StringW arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, int32_t arg1, ::StringW arg2, T1 arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x69212a8, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, int32_t arg1, ::StringW arg2, float_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x691e9fc, size 0x170, virtual false, abstract: false, final false
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
  /// @brief Method Format, addr 0x6922dcc, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, int32_t arg1, float_t arg2, ::StringW arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, int32_t arg1, float_t arg2, T1 arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x6920518, size 0x190, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, int32_t arg1, float_t arg2, float_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x691dc48, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, int32_t arg1, float_t arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x692202c, size 0x170, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, int32_t arg1, int32_t arg2, ::StringW arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, int32_t arg1, int32_t arg2, T1 arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x691f76c, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, int32_t arg1, int32_t arg2, float_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x691cf08, size 0x170, virtual false, abstract: false, final false
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
  /// @brief Method Format, addr 0x69242a8, size 0x174, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, ::StringW arg1, ::StringW arg2, ::StringW arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, ::StringW arg1, ::StringW arg2, T1 arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x6921a44, size 0x178, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, ::StringW arg1, ::StringW arg2, float_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x691f184, size 0x18c, virtual false, abstract: false, final false
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
  /// @brief Method Format, addr 0x6923568, size 0x178, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, ::StringW arg1, float_t arg2, ::StringW arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, ::StringW arg1, float_t arg2, T1 arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x6920c98, size 0x17c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, ::StringW arg1, float_t arg2, float_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x691e3e4, size 0x190, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, ::StringW arg1, float_t arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x69227b4, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, ::StringW arg1, int32_t arg2, ::StringW arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, ::StringW arg1, int32_t arg2, T1 arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x691ff08, size 0x190, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, ::StringW arg1, int32_t arg2, float_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x691d660, size 0x18c, virtual false, abstract: false, final false
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
  /// @brief Method Format, addr 0x6923e4c, size 0x178, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, float_t arg1, ::StringW arg2, ::StringW arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, float_t arg1, ::StringW arg2, T1 arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x69215c4, size 0x17c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, float_t arg1, ::StringW arg2, float_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x691ecf8, size 0x190, virtual false, abstract: false, final false
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
  /// @brief Method Format, addr 0x69230e8, size 0x17c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, float_t arg1, float_t arg2, ::StringW arg3);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, float_t arg1, float_t arg2, T1 arg3);

  /// @brief Method Format, addr 0x6920824, size 0x168, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, float_t arg1, float_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x691df4c, size 0x17c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, float_t arg1, float_t arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x6922328, size 0x190, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, float_t arg1, int32_t arg2, ::StringW arg3);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, float_t arg1, int32_t arg2, T1 arg3);

  /// @brief Method Format, addr 0x691fa70, size 0x17c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, float_t arg1, int32_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x691d1ec, size 0x178, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, float_t arg1, int32_t arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x69239c4, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, int32_t arg1, ::StringW arg2, ::StringW arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, int32_t arg1, ::StringW arg2, T1 arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x6921118, size 0x190, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, int32_t arg1, ::StringW arg2, float_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x691e870, size 0x18c, virtual false, abstract: false, final false
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
  /// @brief Method Format, addr 0x6922c3c, size 0x190, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, int32_t arg1, float_t arg2, ::StringW arg3);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, int32_t arg1, float_t arg2, T1 arg3);

  /// @brief Method Format, addr 0x692039c, size 0x17c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, int32_t arg1, float_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x691dad0, size 0x178, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, int32_t arg1, float_t arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x6921ea0, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, int32_t arg1, int32_t arg2, ::StringW arg3);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, int32_t arg1, int32_t arg2, T1 arg3);

  /// @brief Method Format, addr 0x691f5f4, size 0x178, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, int32_t arg1, int32_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x691cd94, size 0x174, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, int32_t arg1, int32_t arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x6924138, size 0x170, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, ::StringW arg1, ::StringW arg2, ::StringW arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, ::StringW arg1, ::StringW arg2, T1 arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x69218b8, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, ::StringW arg1, ::StringW arg2, float_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x691f014, size 0x170, virtual false, abstract: false, final false
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
  /// @brief Method Format, addr 0x69233dc, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, ::StringW arg1, float_t arg2, ::StringW arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, ::StringW arg1, float_t arg2, T1 arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x6920b08, size 0x190, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, ::StringW arg1, float_t arg2, float_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x691e258, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, ::StringW arg1, float_t arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x6922644, size 0x170, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, ::StringW arg1, int32_t arg2, ::StringW arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, ::StringW arg1, int32_t arg2, T1 arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x691fd7c, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, ::StringW arg1, int32_t arg2, float_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x691d4f0, size 0x170, virtual false, abstract: false, final false
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
  /// @brief Method Format, addr 0x6923cc0, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, float_t arg1, ::StringW arg2, ::StringW arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, float_t arg1, ::StringW arg2, T1 arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x6921434, size 0x190, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, float_t arg1, ::StringW arg2, float_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x691eb6c, size 0x18c, virtual false, abstract: false, final false
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
  /// @brief Method Format, addr 0x6922f58, size 0x190, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, float_t arg1, float_t arg2, ::StringW arg3);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, float_t arg1, float_t arg2, T1 arg3);

  /// @brief Method Format, addr 0x69206a8, size 0x17c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, float_t arg1, float_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x691ddd4, size 0x178, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, float_t arg1, float_t arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x692219c, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, float_t arg1, int32_t arg2, ::StringW arg3);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, float_t arg1, int32_t arg2, T1 arg3);

  /// @brief Method Format, addr 0x691f8f8, size 0x178, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, float_t arg1, int32_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x691d078, size 0x174, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, float_t arg1, int32_t arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x6923854, size 0x170, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, int32_t arg1, ::StringW arg2, ::StringW arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, int32_t arg1, ::StringW arg2, T1 arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x6920f8c, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, int32_t arg1, ::StringW arg2, float_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x691e700, size 0x170, virtual false, abstract: false, final false
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
  /// @brief Method Format, addr 0x6922ab0, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, int32_t arg1, float_t arg2, ::StringW arg3);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, int32_t arg1, float_t arg2, T1 arg3);

  /// @brief Method Format, addr 0x6920224, size 0x178, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, int32_t arg1, float_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x691d95c, size 0x174, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, int32_t arg1, float_t arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x6921d30, size 0x170, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, int32_t arg1, int32_t arg2, ::StringW arg3);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, int32_t arg1, int32_t arg2, T1 arg3);

  /// @brief Method Format, addr 0x691f480, size 0x174, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, int32_t arg1, int32_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x691cc3c, size 0x158, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15892 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Collections::FixedString) == 0x10, "Size mismatch!");

} // namespace Unity::Collections
