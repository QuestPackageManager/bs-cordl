#pragma once
// IWYU pragma private; include "IntervalTree/RangeValuePair_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RangeValuePair_2)
namespace System {
class Object;
}
// Forward declare root types
namespace IntervalTree {
template <typename TKey, typename TValue> struct RangeValuePair_2;
}
// Write type traits
MARK_GEN_VAL_T(::IntervalTree::RangeValuePair_2);
// Dependencies System.IEquatable`1<T>
namespace IntervalTree {
// cpp template
template <typename TKey, typename TValue>
// Is value type: true
// CS Name: IntervalTree.RangeValuePair`2<TKey,TValue>
struct CORDL_TYPE RangeValuePair_2 {
public:
  // Declarations
  __declspec(property(get = get_From)) TKey From;

  __declspec(property(get = get_To)) TKey To;

  __declspec(property(get = get_Value)) TValue Value;

  /// @brief Convert operator to "::System::IEquatable_1<::IntervalTree::RangeValuePair_2<TKey,TValue>>"
  constexpr operator ::System::IEquatable_1<::IntervalTree::RangeValuePair_2<TKey, TValue>>*();

  /// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Equals(::IntervalTree::RangeValuePair_2<TKey, TValue> other);

  /// @brief Method GetHashCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(TKey from, TKey to, TValue value);

  /// @brief Method get_From, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TKey get_From();

  /// @brief Method get_To, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TKey get_To();

  /// @brief Method get_Value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TValue get_Value();

  /// @brief Convert to "::System::IEquatable_1<::IntervalTree::RangeValuePair_2<TKey,TValue>>"
  constexpr ::System::IEquatable_1<::IntervalTree::RangeValuePair_2<TKey, TValue>>* i___System__IEquatable_1___IntervalTree__RangeValuePair_2_TKey_TValue__();

  /// @brief Method op_Equality, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline bool op_Equality(::IntervalTree::RangeValuePair_2<TKey, TValue> left, ::IntervalTree::RangeValuePair_2<TKey, TValue> right);

  /// @brief Method op_Inequality, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline bool op_Inequality(::IntervalTree::RangeValuePair_2<TKey, TValue> left, ::IntervalTree::RangeValuePair_2<TKey, TValue> right);

  // Ctor Parameters []
  // @brief default ctor
  constexpr RangeValuePair_2();

  // Ctor Parameters [CppParam { name: "_From_k__BackingField", ty: "TKey", modifiers: "", def_value: None }, CppParam { name: "_To_k__BackingField", ty: "TKey", modifiers: "", def_value: None },
  // CppParam { name: "_Value_k__BackingField", ty: "TValue", modifiers: "", def_value: None }]
  constexpr RangeValuePair_2(TKey _From_k__BackingField, TKey _To_k__BackingField, TValue _Value_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18962 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field <From>k__BackingField, offset: 0x0, size: 0x8, def value: None
  TKey _From_k__BackingField;

  /// @brief Field <To>k__BackingField, offset: 0x8, size: 0x8, def value: None
  TKey _To_k__BackingField;

  /// @brief Field <Value>k__BackingField, offset: 0x10, size: 0x8, def value: None
  TValue _Value_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace IntervalTree
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::IntervalTree::RangeValuePair_2, "IntervalTree", "RangeValuePair`2");
