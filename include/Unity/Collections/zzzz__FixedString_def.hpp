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
  /// @brief Method Format, addr 0x6928614, size 0x5ac, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x6928330, size 0x110, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, ::StringW arg1);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x69278d8, size 0x130, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, ::StringW arg1, ::StringW arg2);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, ::StringW arg1, T1 arg2);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x6926cdc, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, ::StringW arg1, float_t arg2);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x69260e4, size 0x148, virtual false, abstract: false, final false
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
  /// @brief Method Format, addr 0x6927fb0, size 0x12c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, float_t arg1);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x69274e8, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, float_t arg1, ::StringW arg2);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, float_t arg1, T1 arg2);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x69268d0, size 0x150, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, float_t arg1, float_t arg2);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x6925cc4, size 0x16c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, float_t arg1, int32_t arg2);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x6927c44, size 0x128, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, int32_t arg1);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x69270e4, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, int32_t arg1, ::StringW arg2);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, int32_t arg1, T1 arg2);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x69264d0, size 0x16c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, int32_t arg1, float_t arg2);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x69258d8, size 0x148, virtual false, abstract: false, final false
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

  /// @brief Method Format, addr 0x6928528, size 0xec, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x6928204, size 0x12c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, ::StringW arg1);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x6927784, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, ::StringW arg1, ::StringW arg2);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, ::StringW arg1, T1 arg2);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x6926b8c, size 0x150, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, ::StringW arg1, float_t arg2);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x6925f78, size 0x16c, virtual false, abstract: false, final false
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

  /// @brief Method Format, addr 0x6927e98, size 0x118, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, float_t arg1);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x6927398, size 0x150, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, float_t arg1, ::StringW arg2);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, float_t arg1, T1 arg2);

  /// @brief Method Format, addr 0x692678c, size 0x144, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, float_t arg1, float_t arg2);

  /// @brief Method Format, addr 0x6925b74, size 0x150, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, float_t arg1, int32_t arg2);

  /// @brief Method Format, addr 0x6927b18, size 0x12c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, int32_t arg1);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x6926f78, size 0x16c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, int32_t arg1, ::StringW arg2);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, int32_t arg1, T1 arg2);

  /// @brief Method Format, addr 0x6926380, size 0x150, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, int32_t arg1, float_t arg2);

  /// @brief Method Format, addr 0x6925784, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, int32_t arg1, int32_t arg2);

  /// @brief Method Format, addr 0x6928440, size 0xe8, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x69280dc, size 0x128, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, ::StringW arg1);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x692763c, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, ::StringW arg1, ::StringW arg2);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, ::StringW arg1, T1 arg2);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x6926a20, size 0x16c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, ::StringW arg1, float_t arg2);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x6925e30, size 0x148, virtual false, abstract: false, final false
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

  /// @brief Method Format, addr 0x6927d6c, size 0x12c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, float_t arg1);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x692722c, size 0x16c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, float_t arg1, ::StringW arg2);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, float_t arg1, T1 arg2);

  /// @brief Method Format, addr 0x692663c, size 0x150, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, float_t arg1, float_t arg2);

  /// @brief Method Format, addr 0x6925a20, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, float_t arg1, int32_t arg2);

  /// @brief Method Format, addr 0x6927a08, size 0x110, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, int32_t arg1);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x6926e30, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, int32_t arg1, ::StringW arg2);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, int32_t arg1, T1 arg2);

  /// @brief Method Format, addr 0x692622c, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, int32_t arg1, float_t arg2);

  /// @brief Method Format, addr 0x6925654, size 0x130, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, int32_t arg1, int32_t arg2);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x69254fc, size 0x158, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, ::StringW arg1, ::StringW arg2, ::StringW arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, ::StringW arg1, ::StringW arg2, T1 arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x6922c9c, size 0x174, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, ::StringW arg1, ::StringW arg2, float_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x69203f0, size 0x170, virtual false, abstract: false, final false
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
  /// @brief Method Format, addr 0x69247c0, size 0x174, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, ::StringW arg1, float_t arg2, ::StringW arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, ::StringW arg1, float_t arg2, T1 arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x6921ef4, size 0x178, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, ::StringW arg1, float_t arg2, float_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x691f654, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, ::StringW arg1, float_t arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x6923a20, size 0x170, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, ::StringW arg1, int32_t arg2, ::StringW arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, ::StringW arg1, int32_t arg2, T1 arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x6921178, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, ::StringW arg1, int32_t arg2, float_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x691e8cc, size 0x170, virtual false, abstract: false, final false
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
  /// @brief Method Format, addr 0x69250a4, size 0x174, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, float_t arg1, ::StringW arg2, ::StringW arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, float_t arg1, ::StringW arg2, T1 arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x6922820, size 0x178, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, float_t arg1, ::StringW arg2, float_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x691ff68, size 0x18c, virtual false, abstract: false, final false
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
  /// @brief Method Format, addr 0x6924344, size 0x178, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, float_t arg1, float_t arg2, ::StringW arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, float_t arg1, float_t arg2, T1 arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x6921a6c, size 0x17c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, float_t arg1, float_t arg2, float_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x691f1a8, size 0x190, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, float_t arg1, float_t arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x6923598, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, float_t arg1, int32_t arg2, ::StringW arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, float_t arg1, int32_t arg2, T1 arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x6920ccc, size 0x190, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, float_t arg1, int32_t arg2, float_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x691e444, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, float_t arg1, int32_t arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x6924c30, size 0x170, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, int32_t arg1, ::StringW arg2, ::StringW arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, int32_t arg1, ::StringW arg2, T1 arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x6922388, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, int32_t arg1, ::StringW arg2, float_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x691fadc, size 0x170, virtual false, abstract: false, final false
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
  /// @brief Method Format, addr 0x6923eac, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, int32_t arg1, float_t arg2, ::StringW arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, int32_t arg1, float_t arg2, T1 arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x69215f8, size 0x190, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, int32_t arg1, float_t arg2, float_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x691ed28, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, int32_t arg1, float_t arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x692310c, size 0x170, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, int32_t arg1, int32_t arg2, ::StringW arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, int32_t arg1, int32_t arg2, T1 arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x692084c, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, int32_t arg1, int32_t arg2, float_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x691dfe8, size 0x170, virtual false, abstract: false, final false
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
  /// @brief Method Format, addr 0x6925388, size 0x174, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, ::StringW arg1, ::StringW arg2, ::StringW arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, ::StringW arg1, ::StringW arg2, T1 arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x6922b24, size 0x178, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, ::StringW arg1, ::StringW arg2, float_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x6920264, size 0x18c, virtual false, abstract: false, final false
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
  /// @brief Method Format, addr 0x6924648, size 0x178, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, ::StringW arg1, float_t arg2, ::StringW arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, ::StringW arg1, float_t arg2, T1 arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x6921d78, size 0x17c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, ::StringW arg1, float_t arg2, float_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x691f4c4, size 0x190, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, ::StringW arg1, float_t arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x6923894, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, ::StringW arg1, int32_t arg2, ::StringW arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, ::StringW arg1, int32_t arg2, T1 arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x6920fe8, size 0x190, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, ::StringW arg1, int32_t arg2, float_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x691e740, size 0x18c, virtual false, abstract: false, final false
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
  /// @brief Method Format, addr 0x6924f2c, size 0x178, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, float_t arg1, ::StringW arg2, ::StringW arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, float_t arg1, ::StringW arg2, T1 arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x69226a4, size 0x17c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, float_t arg1, ::StringW arg2, float_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x691fdd8, size 0x190, virtual false, abstract: false, final false
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
  /// @brief Method Format, addr 0x69241c8, size 0x17c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, float_t arg1, float_t arg2, ::StringW arg3);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, float_t arg1, float_t arg2, T1 arg3);

  /// @brief Method Format, addr 0x6921904, size 0x168, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, float_t arg1, float_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x691f02c, size 0x17c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, float_t arg1, float_t arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x6923408, size 0x190, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, float_t arg1, int32_t arg2, ::StringW arg3);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, float_t arg1, int32_t arg2, T1 arg3);

  /// @brief Method Format, addr 0x6920b50, size 0x17c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, float_t arg1, int32_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x691e2cc, size 0x178, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, float_t arg1, int32_t arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x6924aa4, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, int32_t arg1, ::StringW arg2, ::StringW arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, int32_t arg1, ::StringW arg2, T1 arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x69221f8, size 0x190, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, int32_t arg1, ::StringW arg2, float_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x691f950, size 0x18c, virtual false, abstract: false, final false
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
  /// @brief Method Format, addr 0x6923d1c, size 0x190, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, int32_t arg1, float_t arg2, ::StringW arg3);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, int32_t arg1, float_t arg2, T1 arg3);

  /// @brief Method Format, addr 0x692147c, size 0x17c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, int32_t arg1, float_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x691ebb0, size 0x178, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, int32_t arg1, float_t arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x6922f80, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, int32_t arg1, int32_t arg2, ::StringW arg3);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, int32_t arg1, int32_t arg2, T1 arg3);

  /// @brief Method Format, addr 0x69206d4, size 0x178, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, int32_t arg1, int32_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x691de74, size 0x174, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, int32_t arg1, int32_t arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x6925218, size 0x170, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, ::StringW arg1, ::StringW arg2, ::StringW arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, ::StringW arg1, ::StringW arg2, T1 arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x6922998, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, ::StringW arg1, ::StringW arg2, float_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x69200f4, size 0x170, virtual false, abstract: false, final false
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
  /// @brief Method Format, addr 0x69244bc, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, ::StringW arg1, float_t arg2, ::StringW arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, ::StringW arg1, float_t arg2, T1 arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x6921be8, size 0x190, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, ::StringW arg1, float_t arg2, float_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x691f338, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, ::StringW arg1, float_t arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x6923724, size 0x170, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, ::StringW arg1, int32_t arg2, ::StringW arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, ::StringW arg1, int32_t arg2, T1 arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x6920e5c, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, ::StringW arg1, int32_t arg2, float_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x691e5d0, size 0x170, virtual false, abstract: false, final false
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
  /// @brief Method Format, addr 0x6924da0, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, float_t arg1, ::StringW arg2, ::StringW arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, float_t arg1, ::StringW arg2, T1 arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x6922514, size 0x190, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, float_t arg1, ::StringW arg2, float_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x691fc4c, size 0x18c, virtual false, abstract: false, final false
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
  /// @brief Method Format, addr 0x6924038, size 0x190, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, float_t arg1, float_t arg2, ::StringW arg3);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, float_t arg1, float_t arg2, T1 arg3);

  /// @brief Method Format, addr 0x6921788, size 0x17c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, float_t arg1, float_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x691eeb4, size 0x178, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, float_t arg1, float_t arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x692327c, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, float_t arg1, int32_t arg2, ::StringW arg3);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, float_t arg1, int32_t arg2, T1 arg3);

  /// @brief Method Format, addr 0x69209d8, size 0x178, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, float_t arg1, int32_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x691e158, size 0x174, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, float_t arg1, int32_t arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x6924934, size 0x170, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, int32_t arg1, ::StringW arg2, ::StringW arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, int32_t arg1, ::StringW arg2, T1 arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x692206c, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, int32_t arg1, ::StringW arg2, float_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x691f7e0, size 0x170, virtual false, abstract: false, final false
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
  /// @brief Method Format, addr 0x6923b90, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, int32_t arg1, float_t arg2, ::StringW arg3);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, int32_t arg1, float_t arg2, T1 arg3);

  /// @brief Method Format, addr 0x6921304, size 0x178, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, int32_t arg1, float_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x691ea3c, size 0x174, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, int32_t arg1, float_t arg2, int32_t arg3);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Format, addr 0x6922e10, size 0x170, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, int32_t arg1, int32_t arg2, ::StringW arg3);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(Unity.Collections.FixedString32Bytes) })]
  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
    requires(::cordl_internals::type_constraint<T1, ::Unity::Collections::INativeList_1<uint8_t>*> && ::cordl_internals::type_constraint<T1, ::Unity::Collections::IUTF8Bytes*> &&
             ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, int32_t arg1, int32_t arg2, T1 arg3);

  /// @brief Method Format, addr 0x6920560, size 0x174, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, int32_t arg1, int32_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x691dd1c, size 0x158, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15900 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Collections::FixedString) == 0x10, "Size mismatch!");

} // namespace Unity::Collections
