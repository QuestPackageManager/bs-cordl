#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IntervalTreeNode_2)
namespace IntervalTree {
template <typename TKey, typename TValue> struct RangeValuePair_2;
}
namespace IntervalTree {
template <typename TKey, typename TValue> class __IntervalTreeNode_2____c;
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
template <typename TKey, typename TValue> class __IntervalTreeNode_2____c;
}
// Write type traits
MARK_GEN_REF_PTR_T(::IntervalTree::IntervalTreeNode_2);
MARK_GEN_REF_PTR_T(::IntervalTree::__IntervalTreeNode_2____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace IntervalTree {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16133))
// CS Name: ::IntervalTreeNode`2::<>c<TKey,TValue>*
class CORDL_TYPE __IntervalTreeNode_2____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::IntervalTree::__IntervalTreeNode_2____c<TKey, TValue>* __9;

  /// @brief Field <>9__13_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__13_0, put = setStaticF___9__13_0))::System::Func_2<::IntervalTree::RangeValuePair_2<TKey, TValue>, TKey>* __9__13_0;

  /// @brief Field <>9__15_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__15_0, put = setStaticF___9__15_0))::System::Func_2<::IntervalTree::RangeValuePair_2<TKey, TValue>, TKey>* __9__15_0;

  static inline void setStaticF___9(::IntervalTree::__IntervalTreeNode_2____c<TKey, TValue>* value);

  static inline ::IntervalTree::__IntervalTreeNode_2____c<TKey, TValue>* getStaticF___9();

  static inline void setStaticF___9__13_0(::System::Func_2<::IntervalTree::RangeValuePair_2<TKey, TValue>, TKey>* value);

  static inline ::System::Func_2<::IntervalTree::RangeValuePair_2<TKey, TValue>, TKey>* getStaticF___9__13_0();

  static inline void setStaticF___9__15_0(::System::Func_2<::IntervalTree::RangeValuePair_2<TKey, TValue>, TKey>* value);

  static inline ::System::Func_2<::IntervalTree::RangeValuePair_2<TKey, TValue>, TKey>* getStaticF___9__15_0();

  static inline ::IntervalTree::__IntervalTreeNode_2____c<TKey, TValue>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <get_Max>b__13_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TKey _get_Max_b__13_0(::IntervalTree::RangeValuePair_2<TKey, TValue> i);

  /// @brief Method <get_Min>b__15_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TKey _get_Min_b__15_0(::IntervalTree::RangeValuePair_2<TKey, TValue> i);

  // Ctor Parameters [CppParam { name: "", ty: "__IntervalTreeNode_2____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IntervalTreeNode_2____c(__IntervalTreeNode_2____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IntervalTreeNode_2____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IntervalTreeNode_2____c(__IntervalTreeNode_2____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IntervalTreeNode_2____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace IntervalTree
// Type: IntervalTree::IntervalTreeNode`2
// SizeInfo { instance_size: 56, native_size: 56, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace IntervalTree {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16134))
// CS Name: ::IntervalTree::IntervalTreeNode`2<TKey,TValue>*
class CORDL_TYPE IntervalTreeNode_2 : public ::System::Object {
public:
  // Declarations
  using __c = ::IntervalTree::__IntervalTreeNode_2____c<TKey, TValue>;

  /// @brief Field center, offset 0x10, size 0x8
  __declspec(property(get = __get_center, put = __set_center)) TKey center;

  /// @brief Field leftNode, offset 0x18, size 0x8
  __declspec(property(get = __get_leftNode, put = __set_leftNode))::IntervalTree::IntervalTreeNode_2<TKey, TValue>* leftNode;

  /// @brief Field rightNode, offset 0x20, size 0x8
  __declspec(property(get = __get_rightNode, put = __set_rightNode))::IntervalTree::IntervalTreeNode_2<TKey, TValue>* rightNode;

  /// @brief Field items, offset 0x28, size 0x8
  __declspec(property(get = __get_items, put = __set_items))::ArrayW<::IntervalTree::RangeValuePair_2<TKey, TValue>, ::Array<::IntervalTree::RangeValuePair_2<TKey, TValue>>*> items;

  /// @brief Field comparer, offset 0x30, size 0x8
  __declspec(property(get = __get_comparer, put = __set_comparer))::System::Collections::Generic::IComparer_1<TKey>* comparer;

  __declspec(property(get = get_Max)) TKey Max;

  __declspec(property(get = get_Min)) TKey Min;

  /// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::IntervalTree::RangeValuePair_2<TKey,TValue>>"
  constexpr operator ::System::Collections::Generic::IComparer_1<::IntervalTree::RangeValuePair_2<TKey, TValue>>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IComparer_1<::IntervalTree::RangeValuePair_2<TKey,TValue>>"
  constexpr ::System::Collections::Generic::IComparer_1<::IntervalTree::RangeValuePair_2<TKey, TValue>>*
  i___System__Collections__Generic__IComparer_1___IntervalTree__RangeValuePair_2_TKey_TValue__() noexcept;

  constexpr TKey& __get_center();

  constexpr TKey const& __get_center() const;

  constexpr void __set_center(TKey value);

  constexpr ::IntervalTree::IntervalTreeNode_2<TKey, TValue>*& __get_leftNode();

  constexpr ::cordl_internals::to_const_pointer<::IntervalTree::IntervalTreeNode_2<TKey, TValue>*> const& __get_leftNode() const;

  constexpr void __set_leftNode(::IntervalTree::IntervalTreeNode_2<TKey, TValue>* value);

  constexpr ::IntervalTree::IntervalTreeNode_2<TKey, TValue>*& __get_rightNode();

  constexpr ::cordl_internals::to_const_pointer<::IntervalTree::IntervalTreeNode_2<TKey, TValue>*> const& __get_rightNode() const;

  constexpr void __set_rightNode(::IntervalTree::IntervalTreeNode_2<TKey, TValue>* value);

  constexpr ::ArrayW<::IntervalTree::RangeValuePair_2<TKey, TValue>, ::Array<::IntervalTree::RangeValuePair_2<TKey, TValue>>*>& __get_items();

  constexpr ::ArrayW<::IntervalTree::RangeValuePair_2<TKey, TValue>, ::Array<::IntervalTree::RangeValuePair_2<TKey, TValue>>*> const& __get_items() const;

  constexpr void __set_items(::ArrayW<::IntervalTree::RangeValuePair_2<TKey, TValue>, ::Array<::IntervalTree::RangeValuePair_2<TKey, TValue>>*> value);

  constexpr ::System::Collections::Generic::IComparer_1<TKey>*& __get_comparer();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IComparer_1<TKey>*> const& __get_comparer() const;

  constexpr void __set_comparer(::System::Collections::Generic::IComparer_1<TKey>* value);

  static inline ::IntervalTree::IntervalTreeNode_2<TKey, TValue>* New_ctor(::System::Collections::Generic::IComparer_1<TKey>* comparer);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IComparer_1<TKey>* comparer);

  static inline ::IntervalTree::IntervalTreeNode_2<TKey, TValue>* New_ctor(::System::Collections::Generic::IList_1<::IntervalTree::RangeValuePair_2<TKey, TValue>>* items,
                                                                           ::System::Collections::Generic::IComparer_1<TKey>* comparer);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IList_1<::IntervalTree::RangeValuePair_2<TKey, TValue>>* items, ::System::Collections::Generic::IComparer_1<TKey>* comparer);

  /// @brief Method Query, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<TValue>* Query(TKey value);

  /// @brief Method Query, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<TValue>* Query(TKey from, TKey to);

  /// @brief Method QueryClosestPrev, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<TValue>* QueryClosestPrev(TKey value);

  /// @brief Method GetClosestNodeTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::IntervalTree::IntervalTreeNode_2<TKey, TValue>* GetClosestNodeTo(TKey key);

  /// @brief Method System.Collections.Generic.IComparer<IntervalTree.RangeValuePair<TKey,TValue>>.Compare, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t System_Collections_Generic_IComparer_IntervalTree_RangeValuePair_TKey_TValue___Compare(::IntervalTree::RangeValuePair_2<TKey, TValue> x,
                                                                                                        ::IntervalTree::RangeValuePair_2<TKey, TValue> y);

  /// @brief Method get_Max, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TKey get_Max();

  /// @brief Method get_Min, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TKey get_Min();

  // Ctor Parameters [CppParam { name: "", ty: "IntervalTreeNode_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IntervalTreeNode_2(IntervalTreeNode_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IntervalTreeNode_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IntervalTreeNode_2(IntervalTreeNode_2 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IntervalTreeNode_2();

public:
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
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::IntervalTree::__IntervalTreeNode_2____c, "IntervalTree", "IntervalTreeNode`2/<>c");
