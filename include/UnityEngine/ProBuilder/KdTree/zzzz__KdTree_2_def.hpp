#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/KdTree/KdTree_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ProBuilder/KdTree/zzzz__AddDuplicateBehavior_def.hpp"
#include "UnityEngine/ProBuilder/KdTree/zzzz__IKdTree_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(KdTree_2)
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::Generic {
template <typename T> class Stack_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Object;
}
namespace UnityEngine::ProBuilder::KdTree {
struct AddDuplicateBehavior;
}
namespace UnityEngine::ProBuilder::KdTree {
template <typename T> struct HyperRect_1;
}
namespace UnityEngine::ProBuilder::KdTree {
template <typename T> class ITypeMath_1;
}
namespace UnityEngine::ProBuilder::KdTree {
template <typename TKey, typename TValue> class KdTreeNode_2;
}
namespace UnityEngine::ProBuilder::KdTree {
template <typename TKey, typename TValue> class KdTree_2__GetEnumerator_d__33;
}
namespace UnityEngine::ProBuilder::KdTree {
template <typename TKey, typename TValue> class KdTree_2___c__DisplayClass33_0;
}
namespace UnityEngine::ProBuilder::KdTree {
template <typename TItem, typename TDistance> class NearestNeighbourList_2;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::KdTree {
template <typename TKey, typename TValue> class KdTree_2;
}
namespace UnityEngine::ProBuilder::KdTree {
template <typename TKey, typename TValue> class KdTree_2__GetEnumerator_d__33;
}
namespace UnityEngine::ProBuilder::KdTree {
template <typename TKey, typename TValue> class KdTree_2___c__DisplayClass33_0;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::ProBuilder::KdTree::KdTree_2);
MARK_GEN_REF_PTR_T(::UnityEngine::ProBuilder::KdTree::KdTree_2__GetEnumerator_d__33);
MARK_GEN_REF_PTR_T(::UnityEngine::ProBuilder::KdTree::KdTree_2___c__DisplayClass33_0);
// Dependencies System.Object
namespace UnityEngine::ProBuilder::KdTree {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// CS Name: UnityEngine.ProBuilder.KdTree.KdTree`2/<>c__DisplayClass33_0<TKey,TValue>
class CORDL_TYPE KdTree_2___c__DisplayClass33_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field left, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_left, put = __cordl_internal_set_left)) ::System::Collections::Generic::Stack_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>* left;

  /// @brief Field right, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_right,
                      put = __cordl_internal_set_right)) ::System::Collections::Generic::Stack_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>* right;

  static inline ::UnityEngine::ProBuilder::KdTree::KdTree_2___c__DisplayClass33_0<TKey, TValue>* New_ctor();

  /// @brief Method <GetEnumerator>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _GetEnumerator_b__0(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>* node);

  /// @brief Method <GetEnumerator>b__1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _GetEnumerator_b__1(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>* node);

  constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>* const& __cordl_internal_get_left() const;

  constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>*& __cordl_internal_get_left();

  constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>* const& __cordl_internal_get_right() const;

  constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>*& __cordl_internal_get_right();

  constexpr void __cordl_internal_set_left(::System::Collections::Generic::Stack_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>* value);

  constexpr void __cordl_internal_set_right(::System::Collections::Generic::Stack_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KdTree_2___c__DisplayClass33_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "KdTree_2___c__DisplayClass33_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KdTree_2___c__DisplayClass33_0(KdTree_2___c__DisplayClass33_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KdTree_2___c__DisplayClass33_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KdTree_2___c__DisplayClass33_0(KdTree_2___c__DisplayClass33_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18541 };

  /// @brief Field left, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Stack_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>* ___left;

  /// @brief Field right, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Stack_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>* ___right;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::ProBuilder::KdTree
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace UnityEngine::ProBuilder::KdTree {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// CS Name: UnityEngine.ProBuilder.KdTree.KdTree`2/<GetEnumerator>d__33<TKey,TValue>
class CORDL_TYPE KdTree_2__GetEnumerator_d__33 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_UnityEngine_ProBuilder_KdTree_KdTreeNode_TKey_TValue___get_Current)) ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*
      System_Collections_Generic_IEnumerator_UnityEngine_ProBuilder_KdTree_KdTreeNode_TKey_TValue___Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>* __4__this;

  /// @brief Field <>8__1, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___8__1, put = __cordl_internal_set___8__1)) ::UnityEngine::ProBuilder::KdTree::KdTree_2___c__DisplayClass33_0<TKey, TValue>* __8__1;

  /// @brief Field <addLeft>5__2, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__addLeft_5__2,
                      put = __cordl_internal_set__addLeft_5__2)) ::System::Action_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>* _addLeft_5__2;

  /// @brief Field <addRight>5__3, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__addRight_5__3,
                      put = __cordl_internal_set__addRight_5__3)) ::System::Action_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>* _addRight_5__3;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::UnityEngine::ProBuilder::KdTree::KdTree_2__GetEnumerator_d__33<TKey, TValue>* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.ProBuilder.KdTree.KdTreeNode<TKey,TValue>>.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final
  /// true
  inline ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>* System_Collections_Generic_IEnumerator_UnityEngine_ProBuilder_KdTree_KdTreeNode_TKey_TValue___get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>* const& __cordl_internal_get___2__current() const;

  constexpr ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*& __cordl_internal_get___2__current();

  constexpr ::UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>* const& __cordl_internal_get___4__this() const;

  constexpr ::UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>*& __cordl_internal_get___4__this();

  constexpr ::UnityEngine::ProBuilder::KdTree::KdTree_2___c__DisplayClass33_0<TKey, TValue>* const& __cordl_internal_get___8__1() const;

  constexpr ::UnityEngine::ProBuilder::KdTree::KdTree_2___c__DisplayClass33_0<TKey, TValue>*& __cordl_internal_get___8__1();

  constexpr ::System::Action_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>* const& __cordl_internal_get__addLeft_5__2() const;

  constexpr ::System::Action_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>*& __cordl_internal_get__addLeft_5__2();

  constexpr ::System::Action_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>* const& __cordl_internal_get__addRight_5__3() const;

  constexpr ::System::Action_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>*& __cordl_internal_get__addRight_5__3();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>* value);

  constexpr void __cordl_internal_set___4__this(::UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>* value);

  constexpr void __cordl_internal_set___8__1(::UnityEngine::ProBuilder::KdTree::KdTree_2___c__DisplayClass33_0<TKey, TValue>* value);

  constexpr void __cordl_internal_set__addLeft_5__2(::System::Action_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>* value);

  constexpr void __cordl_internal_set__addRight_5__3(::System::Action_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>*
  i___System__Collections__Generic__IEnumerator_1___UnityEngine__ProBuilder__KdTree__KdTreeNode_2_TKey_TValue___() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KdTree_2__GetEnumerator_d__33();

public:
  // Ctor Parameters [CppParam { name: "", ty: "KdTree_2__GetEnumerator_d__33", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KdTree_2__GetEnumerator_d__33(KdTree_2__GetEnumerator_d__33&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KdTree_2__GetEnumerator_d__33", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KdTree_2__GetEnumerator_d__33(KdTree_2__GetEnumerator_d__33 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18542 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>* _____4__this;

  /// @brief Field <>8__1, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::ProBuilder::KdTree::KdTree_2___c__DisplayClass33_0<TKey, TValue>* _____8__1;

  /// @brief Field <addLeft>5__2, offset: 0x30, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>* ____addLeft_5__2;

  /// @brief Field <addRight>5__3, offset: 0x38, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>* ____addRight_5__3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::ProBuilder::KdTree
// Dependencies System.Collections.Generic.IEnumerable`1<T>, System.Collections.IEnumerable, System.Object, UnityEngine.ProBuilder.KdTree.AddDuplicateBehavior,
// UnityEngine.ProBuilder.KdTree.IKdTree`2<TKey, TValue>
namespace UnityEngine::ProBuilder::KdTree {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// CS Name: UnityEngine.ProBuilder.KdTree.KdTree`2<TKey,TValue>
class CORDL_TYPE KdTree_2 : public ::System::Object {
public:
  // Declarations
  using _GetEnumerator_d__33 = ::UnityEngine::ProBuilder::KdTree::KdTree_2__GetEnumerator_d__33<TKey, TValue>;

  using __c__DisplayClass33_0 = ::UnityEngine::ProBuilder::KdTree::KdTree_2___c__DisplayClass33_0<TKey, TValue>;

  __declspec(property(get = get_AddDuplicateBehavior, put = set_AddDuplicateBehavior)) ::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior AddDuplicateBehavior;

  __declspec(property(get = get_Count, put = set_Count)) int32_t Count;

  /// @brief Field <AddDuplicateBehavior>k__BackingField, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__AddDuplicateBehavior_k__BackingField,
                      put = __cordl_internal_set__AddDuplicateBehavior_k__BackingField)) ::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior _AddDuplicateBehavior_k__BackingField;

  /// @brief Field <Count>k__BackingField, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__Count_k__BackingField, put = __cordl_internal_set__Count_k__BackingField)) int32_t _Count_k__BackingField;

  /// @brief Field dimensions, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_dimensions, put = __cordl_internal_set_dimensions)) int32_t dimensions;

  /// @brief Field root, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_root, put = __cordl_internal_set_root)) ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>* root;

  /// @brief Field typeMath, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_typeMath, put = __cordl_internal_set_typeMath)) ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TKey>* typeMath;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::UnityEngine::ProBuilder::KdTree::IKdTree_2<TKey,TValue>"
  constexpr operator ::UnityEngine::ProBuilder::KdTree::IKdTree_2<TKey, TValue>*() noexcept;

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Add(::ArrayW<TKey, ::Array<TKey>*> point, TValue value);

  /// @brief Method AddNearestNeighbours, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AddNearestNeighbours(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>* node, ::ArrayW<TKey, ::Array<TKey>*> target,
                                   ::UnityEngine::ProBuilder::KdTree::HyperRect_1<TKey> rect, int32_t depth,
                                   ::UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*, TKey>* nearestNeighbours,
                                   TKey maxSearchRadiusSquared);

  /// @brief Method AddNodeToStringBuilder, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AddNodeToStringBuilder(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>* node, ::System::Text::StringBuilder* sb, int32_t depth);

  /// @brief Method AddNodesBalanced, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AddNodesBalanced(::ArrayW<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*, ::Array<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>*> nodes,
                               int32_t byDimension, int32_t fromIndex, int32_t toIndex);

  /// @brief Method AddNodesToList, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AddNodesToList(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>* node,
                             ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>* nodes);

  /// @brief Method Balance, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Balance();

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Clear();

  /// @brief Method FindValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::ArrayW<TKey, ::Array<TKey>*> FindValue(TValue value);

  /// @brief Method FindValueAt, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline TValue FindValueAt(::ArrayW<TKey, ::Array<TKey>*> point);

  /// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>* GetEnumerator();

  /// @brief Method GetNearestNeighbours, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::ArrayW<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*, ::Array<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>*>
  GetNearestNeighbours(::ArrayW<TKey, ::Array<TKey>*> point, int32_t count);

  /// @brief Method LoadFromFile, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>* LoadFromFile(::StringW filename);

  static inline ::UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>* New_ctor(int32_t dimensions, ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TKey>* typeMath);

  static inline ::UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>* New_ctor(int32_t dimensions, ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TKey>* typeMath,
                                                                                    ::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior addDuplicateBehavior);

  /// @brief Method RadialSearch, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::ArrayW<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*, ::Array<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>*>
  RadialSearch(::ArrayW<TKey, ::Array<TKey>*> center, TKey radius, int32_t count);

  /// @brief Method ReadChildNodes, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ReadChildNodes(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>* removedNode);

  /// @brief Method RemoveAt, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void RemoveAt(::ArrayW<TKey, ::Array<TKey>*> point);

  /// @brief Method RemoveChildNodes, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void RemoveChildNodes(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>* node);

  /// @brief Method SaveToFile, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SaveToFile(::StringW filename);

  /// @brief Method SortNodesArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SortNodesArray(::ArrayW<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*, ::Array<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>*> nodes,
                             int32_t byDimension, int32_t fromIndex, int32_t toIndex);

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method TryFindValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool TryFindValue(TValue value, ::ByRef<::ArrayW<TKey, ::Array<TKey>*>> point);

  /// @brief Method TryFindValueAt, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool TryFindValueAt(::ArrayW<TKey, ::Array<TKey>*> point, ::ByRef<TValue> value);

  constexpr ::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior const& __cordl_internal_get__AddDuplicateBehavior_k__BackingField() const;

  constexpr ::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior& __cordl_internal_get__AddDuplicateBehavior_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__Count_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__Count_k__BackingField();

  constexpr int32_t const& __cordl_internal_get_dimensions() const;

  constexpr int32_t& __cordl_internal_get_dimensions();

  constexpr ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>* const& __cordl_internal_get_root() const;

  constexpr ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*& __cordl_internal_get_root();

  constexpr ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TKey>* const& __cordl_internal_get_typeMath() const;

  constexpr ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TKey>*& __cordl_internal_get_typeMath();

  constexpr void __cordl_internal_set__AddDuplicateBehavior_k__BackingField(::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior value);

  constexpr void __cordl_internal_set__Count_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set_dimensions(int32_t value);

  constexpr void __cordl_internal_set_root(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>* value);

  constexpr void __cordl_internal_set_typeMath(::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TKey>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t dimensions, ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TKey>* typeMath);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t dimensions, ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TKey>* typeMath, ::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior addDuplicateBehavior);

  /// @brief Method get_AddDuplicateBehavior, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior get_AddDuplicateBehavior();

  /// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>*
  i___System__Collections__Generic__IEnumerable_1___UnityEngine__ProBuilder__KdTree__KdTreeNode_2_TKey_TValue___() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::UnityEngine::ProBuilder::KdTree::IKdTree_2<TKey,TValue>"
  constexpr ::UnityEngine::ProBuilder::KdTree::IKdTree_2<TKey, TValue>* i___UnityEngine__ProBuilder__KdTree__IKdTree_2_TKey_TValue_() noexcept;

  /// @brief Method set_AddDuplicateBehavior, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_AddDuplicateBehavior(::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior value);

  /// @brief Method set_Count, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_Count(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KdTree_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "KdTree_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KdTree_2(KdTree_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KdTree_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KdTree_2(KdTree_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18543 };

  /// @brief Field dimensions, offset: 0x10, size: 0x4, def value: None
  int32_t ___dimensions;

  /// @brief Field typeMath, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TKey>* ___typeMath;

  /// @brief Field root, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>* ___root;

  /// @brief Field <AddDuplicateBehavior>k__BackingField, offset: 0x28, size: 0x4, def value: None
  ::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior ____AddDuplicateBehavior_k__BackingField;

  /// @brief Field <Count>k__BackingField, offset: 0x2c, size: 0x4, def value: None
  int32_t ____Count_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::ProBuilder::KdTree
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::ProBuilder::KdTree::KdTree_2, "UnityEngine.ProBuilder.KdTree", "KdTree`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::ProBuilder::KdTree::KdTree_2__GetEnumerator_d__33, "UnityEngine.ProBuilder.KdTree", "KdTree`2/<GetEnumerator>d__33");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::ProBuilder::KdTree::KdTree_2___c__DisplayClass33_0, "UnityEngine.ProBuilder.KdTree", "KdTree`2/<>c__DisplayClass33_0");
