#pragma once
// IWYU pragma private; include "IntervalTree/IntervalTreeNode_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "IntervalTree/zzzz__RangeValuePair_2_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IntervalTreeNode_2)
namespace IntervalTree {
template <typename TKey, typename TValue> class IntervalTreeNode_2___c;
}
namespace IntervalTree {
template <typename TKey, typename TValue> struct RangeValuePair_2;
}
namespace System::Collections::Generic {
template <typename T> class IComparer_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace IntervalTree {
template <typename TKey, typename TValue> class IntervalTreeNode_2;
}
namespace IntervalTree {
template <typename TKey, typename TValue> class IntervalTreeNode_2___c;
}
// Write type traits
MARK_GEN_REF_PTR_T(::IntervalTree::IntervalTreeNode_2);
MARK_GEN_REF_PTR_T(::IntervalTree::IntervalTreeNode_2___c);
// Dependencies System.Object
namespace IntervalTree {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// CS Name: IntervalTree.IntervalTreeNode`2/<>c<TKey,TValue>
class CORDL_TYPE IntervalTreeNode_2___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::IntervalTree::IntervalTreeNode_2___c<TKey, TValue>* __9;

  /// @brief Field <>9__13_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__13_0, put = setStaticF___9__13_0)) ::System::Func_2<::IntervalTree::RangeValuePair_2<TKey, TValue>, TKey>* __9__13_0;

  /// @brief Field <>9__15_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__15_0, put = setStaticF___9__15_0)) ::System::Func_2<::IntervalTree::RangeValuePair_2<TKey, TValue>, TKey>* __9__15_0;

  static inline ::IntervalTree::IntervalTreeNode_2___c<TKey, TValue>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <get_Max>b__13_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TKey _get_Max_b__13_0(::IntervalTree::RangeValuePair_2<TKey, TValue> i);

  /// @brief Method <get_Min>b__15_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TKey _get_Min_b__15_0(::IntervalTree::RangeValuePair_2<TKey, TValue> i);

  static inline ::IntervalTree::IntervalTreeNode_2___c<TKey, TValue>* getStaticF___9();

  static inline ::System::Func_2<::IntervalTree::RangeValuePair_2<TKey, TValue>, TKey>* getStaticF___9__13_0();

  static inline ::System::Func_2<::IntervalTree::RangeValuePair_2<TKey, TValue>, TKey>* getStaticF___9__15_0();

  static inline void setStaticF___9(::IntervalTree::IntervalTreeNode_2___c<TKey, TValue>* value);

  static inline void setStaticF___9__13_0(::System::Func_2<::IntervalTree::RangeValuePair_2<TKey, TValue>, TKey>* value);

  static inline void setStaticF___9__15_0(::System::Func_2<::IntervalTree::RangeValuePair_2<TKey, TValue>, TKey>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IntervalTreeNode_2___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IntervalTreeNode_2___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IntervalTreeNode_2___c(IntervalTreeNode_2___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IntervalTreeNode_2___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IntervalTreeNode_2___c(IntervalTreeNode_2___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18955 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace IntervalTree
// Dependencies IntervalTree.RangeValuePair`2<TKey, TValue>, System.Collections.Generic.IComparer`1<T>, System.Object
namespace IntervalTree {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// CS Name: IntervalTree.IntervalTreeNode`2<TKey,TValue>
class CORDL_TYPE IntervalTreeNode_2 : public ::System::Object {
public:
  // Declarations
  using __c = ::IntervalTree::IntervalTreeNode_2___c<TKey, TValue>;

  __declspec(property(get = get_Max)) TKey Max;

  __declspec(property(get = get_Min)) TKey Min;

  /// @brief Field center, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_center, put = __cordl_internal_set_center)) TKey center;

  /// @brief Field comparer, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_comparer, put = __cordl_internal_set_comparer)) ::System::Collections::Generic::IComparer_1<TKey>* comparer;

  /// @brief Field items, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_items,
                      put = __cordl_internal_set_items)) ::ArrayW<::IntervalTree::RangeValuePair_2<TKey, TValue>, ::Array<::IntervalTree::RangeValuePair_2<TKey, TValue>>*>
      items;

  /// @brief Field leftNode, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_leftNode, put = __cordl_internal_set_leftNode)) ::IntervalTree::IntervalTreeNode_2<TKey, TValue>* leftNode;

  /// @brief Field rightNode, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_rightNode, put = __cordl_internal_set_rightNode)) ::IntervalTree::IntervalTreeNode_2<TKey, TValue>* rightNode;

  /// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::IntervalTree::RangeValuePair_2<TKey,TValue>>"
  constexpr operator ::System::Collections::Generic::IComparer_1<::IntervalTree::RangeValuePair_2<TKey, TValue>>*() noexcept;

  /// @brief Method GetClosestNodeTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::IntervalTree::IntervalTreeNode_2<TKey, TValue>* GetClosestNodeTo(TKey key);

  static inline ::IntervalTree::IntervalTreeNode_2<TKey, TValue>* New_ctor(::System::Collections::Generic::IComparer_1<TKey>* comparer);

  static inline ::IntervalTree::IntervalTreeNode_2<TKey, TValue>* New_ctor(::System::Collections::Generic::IList_1<::IntervalTree::RangeValuePair_2<TKey, TValue>>* items,
                                                                           ::System::Collections::Generic::IComparer_1<TKey>* comparer);

  /// @brief Method Query, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<TValue>* Query(TKey value);

  /// @brief Method Query, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<TValue>* Query(TKey from, TKey to);

  /// @brief Method QueryClosestPrev, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<TValue>* QueryClosestPrev(TKey value);

  /// @brief Method System.Collections.Generic.IComparer<IntervalTree.RangeValuePair<TKey,TValue>>.Compare, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t System_Collections_Generic_IComparer_IntervalTree_RangeValuePair_TKey_TValue___Compare(::IntervalTree::RangeValuePair_2<TKey, TValue> x,
                                                                                                        ::IntervalTree::RangeValuePair_2<TKey, TValue> y);

  constexpr TKey const& __cordl_internal_get_center() const;

  constexpr TKey& __cordl_internal_get_center();

  constexpr ::System::Collections::Generic::IComparer_1<TKey>* const& __cordl_internal_get_comparer() const;

  constexpr ::System::Collections::Generic::IComparer_1<TKey>*& __cordl_internal_get_comparer();

  constexpr ::ArrayW<::IntervalTree::RangeValuePair_2<TKey, TValue>, ::Array<::IntervalTree::RangeValuePair_2<TKey, TValue>>*> const& __cordl_internal_get_items() const;

  constexpr ::ArrayW<::IntervalTree::RangeValuePair_2<TKey, TValue>, ::Array<::IntervalTree::RangeValuePair_2<TKey, TValue>>*>& __cordl_internal_get_items();

  constexpr ::IntervalTree::IntervalTreeNode_2<TKey, TValue>* const& __cordl_internal_get_leftNode() const;

  constexpr ::IntervalTree::IntervalTreeNode_2<TKey, TValue>*& __cordl_internal_get_leftNode();

  constexpr ::IntervalTree::IntervalTreeNode_2<TKey, TValue>* const& __cordl_internal_get_rightNode() const;

  constexpr ::IntervalTree::IntervalTreeNode_2<TKey, TValue>*& __cordl_internal_get_rightNode();

  constexpr void __cordl_internal_set_center(TKey value);

  constexpr void __cordl_internal_set_comparer(::System::Collections::Generic::IComparer_1<TKey>* value);

  constexpr void __cordl_internal_set_items(::ArrayW<::IntervalTree::RangeValuePair_2<TKey, TValue>, ::Array<::IntervalTree::RangeValuePair_2<TKey, TValue>>*> value);

  constexpr void __cordl_internal_set_leftNode(::IntervalTree::IntervalTreeNode_2<TKey, TValue>* value);

  constexpr void __cordl_internal_set_rightNode(::IntervalTree::IntervalTreeNode_2<TKey, TValue>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IComparer_1<TKey>* comparer);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IList_1<::IntervalTree::RangeValuePair_2<TKey, TValue>>* items, ::System::Collections::Generic::IComparer_1<TKey>* comparer);

  /// @brief Method get_Max, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TKey get_Max();

  /// @brief Method get_Min, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TKey get_Min();

  /// @brief Convert to "::System::Collections::Generic::IComparer_1<::IntervalTree::RangeValuePair_2<TKey,TValue>>"
  constexpr ::System::Collections::Generic::IComparer_1<::IntervalTree::RangeValuePair_2<TKey, TValue>>*
  i___System__Collections__Generic__IComparer_1___IntervalTree__RangeValuePair_2_TKey_TValue__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IntervalTreeNode_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IntervalTreeNode_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IntervalTreeNode_2(IntervalTreeNode_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IntervalTreeNode_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IntervalTreeNode_2(IntervalTreeNode_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18956 };

  /// @brief Field center, offset: 0x10, size: 0x8, def value: None
  TKey ___center;

  /// @brief Field leftNode, offset: 0x18, size: 0x8, def value: None
  ::IntervalTree::IntervalTreeNode_2<TKey, TValue>* ___leftNode;

  /// @brief Field rightNode, offset: 0x20, size: 0x8, def value: None
  ::IntervalTree::IntervalTreeNode_2<TKey, TValue>* ___rightNode;

  /// @brief Field items, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::IntervalTree::RangeValuePair_2<TKey, TValue>, ::Array<::IntervalTree::RangeValuePair_2<TKey, TValue>>*> ___items;

  /// @brief Field comparer, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::IComparer_1<TKey>* ___comparer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace IntervalTree
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::IntervalTree::IntervalTreeNode_2, "IntervalTree", "IntervalTreeNode`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::IntervalTree::IntervalTreeNode_2___c, "IntervalTree", "IntervalTreeNode`2/<>c");
