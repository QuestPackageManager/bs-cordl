#pragma once
// IWYU pragma private; include "IntervalTree/IIntervalTree_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "IntervalTree/zzzz__RangeValuePair_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IIntervalTree_2)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace IntervalTree {
template <typename TKey, typename TValue> class IIntervalTree_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::IntervalTree::IIntervalTree_2);
// Dependencies IntervalTree.RangeValuePair`2<TKey, TValue>, System.Collections.Generic.IEnumerable`1<T>, System.Collections.IEnumerable
namespace IntervalTree {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// CS Name: IntervalTree.IIntervalTree`2<TKey,TValue>
class CORDL_TYPE IIntervalTree_2 {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_Values)) ::System::Collections::Generic::IEnumerable_1<TValue>* Values;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::IntervalTree::RangeValuePair_2<TKey,TValue>>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::IntervalTree::RangeValuePair_2<TKey, TValue>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method Add, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Add(TKey from, TKey to, TValue value);

  /// @brief Method Clear, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Clear();

  /// @brief Method Query, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<TValue>* Query(TKey from, TKey to);

  /// @brief Method Query, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<TValue>* Query(TKey value);

  /// @brief Method QueryWithCount, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::List_1<TValue>* QueryWithCount(TKey from, TKey to);

  /// @brief Method Remove, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Remove(TValue item);

  /// @brief Method Remove, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Remove(::System::Collections::Generic::IEnumerable_1<TValue>* items);

  /// @brief Method get_Count, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_Values, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<TValue>* get_Values();

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::IntervalTree::RangeValuePair_2<TKey,TValue>>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::IntervalTree::RangeValuePair_2<TKey, TValue>>*
  i___System__Collections__Generic__IEnumerable_1___IntervalTree__RangeValuePair_2_TKey_TValue__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IIntervalTree_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IIntervalTree_2(IIntervalTree_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18952 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace IntervalTree
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::IntervalTree::IIntervalTree_2, "IntervalTree", "IIntervalTree`2");
